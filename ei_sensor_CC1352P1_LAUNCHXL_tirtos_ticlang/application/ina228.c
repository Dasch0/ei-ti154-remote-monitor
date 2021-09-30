#include <xdc/runtime/Error.h>

#include <ti/drivers/I2C.h>
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Semaphore.h>


#include "ti_drivers_config.h"

// define your addresses
// Ex:
#define INA228_SLAVE_ADDRESS    0x40

#define INA228_CONFIG           0x00
#define INA228_ADC_CONFIG       0x01
#define INA228_SHUNT_CAL        0x02
#define INA228_SHUNT_TEMPCO     0x03
#define INA228_VSHUNT           0x04
#define INA228_VBUS             0x05
#define INA228_DIETEMP          0x06
#define INA228_CURRENT          0x07
#define INA228_POWER            0x08
#define INA228_ENERGY           0x09
#define INA228_CHARGE           0x0A
#define INA228_DIAG_ALRT        0x0B
#define INA228_SOVL             0x0C
#define INA228_SUVL             0x0D
#define INA228_BOVL             0x0E
#define INA228_BUVL             0x0F
#define INA228_TEMP_LIMIT       0x10
#define INA228_PWR_LIMIT        0x11
#define INA228_MANUFACTURER_ID  0x3E
#define INA228_DEVICE_ID        0x3F

/*
 * SHUNT_CAL is a conversion constant that represents the shunt resistance
 * used to calculate current value in Amps. This also sets the resolution
 * (CURRENT_LSB) for the current register.
 *
 * SHUNT_CAL is 15 bits wide (0 - 32768)
 *
 * SHUNT_CAL = 13107.2 x 10^6 x CURRENT_LSB x Rshunt
 *
 * CURRENT_LSB = Max Expected Current / 2^19
 */

#define CURRENT_LSB     0.0000190735
#define SHUNT_CAL       2500

static Semaphore_Handle i2cSem;
static I2C_Handle handle;

uint32_t bswap32(uint32_t x)
{
    return  ((x << 24) & 0xff000000 ) |
        ((x <<  8) & 0x00ff0000 ) |
        ((x >>  8) & 0x0000ff00 ) |
        ((x >> 24) & 0x000000ff );
}

void ina228_cb(I2C_Handle handle, I2C_Transaction *i2cTransaction, bool result) {
    if (result) {
        Semaphore_post(i2cSem);
    } else {
        // error occurred
    }
}

void write_short(I2C_Handle handle, uint8_t deviceAddr, uint8_t regAddr, uint16_t value) {
    uint8_t             txBuffer[3];
    I2C_Transaction     i2cTransaction;
    i2cTransaction.slaveAddress = deviceAddr;

    /* Write to a 16-bit status register */
    i2cTransaction.writeBuf = txBuffer;
    i2cTransaction.writeCount = 3;
    i2cTransaction.readCount = 0;

    txBuffer[0] = regAddr & 0xFF; //LB Addr
    txBuffer[1] = value   & 0xFF00 >> 8;
    txBuffer[2] = value   & 0xFF;

    I2C_transfer(handle, &i2cTransaction);
}

void read_buffer(I2C_Handle handle,
                  uint8_t deviceAddr,
                  uint8_t regAddr,
                  uint8_t *data,
                  size_t   length) {
    uint8_t             txBuffer[1];
    I2C_Transaction     i2cTransaction;

    i2cTransaction.slaveAddress = deviceAddr;

    /* Write to a 16-bit status register */
    i2cTransaction.writeBuf = txBuffer;
    i2cTransaction.readBuf = data;
    i2cTransaction.writeCount = 1;
    i2cTransaction.readCount = length;

    txBuffer[0] = regAddr & 0xFF; //LB Addr

    I2C_transfer(handle, &i2cTransaction);
}

void ina228_init()
{
    I2C_Params      params;
    I2C_Transaction i2cTransaction;
    I2C_init();

    I2C_Params_init(&params);
    params.transferMode  = I2C_MODE_BLOCKING;
    params.bitRate = I2C_400kHz; // set to your bitrate

    handle = I2C_open(CONFIG_I2C_1, &params);

    Error_Block    eb;
    Semaphore_Params semParams;

    Error_init(&eb);
    Semaphore_Params_init(&semParams);
    i2cSem = Semaphore_create(0, &semParams, &eb);

    // ina228 config
    write_short(handle, INA228_SLAVE_ADDRESS, INA228_CONFIG, 0x8000);  // Reset
    write_short(handle, INA228_SLAVE_ADDRESS, INA228_SHUNT_CAL, SHUNT_CAL);

}

float ina228_current(I2C_Handle handle)
{
    int32_t iCurrent;
    float fCurrent;
    bool sign;

    read_buffer(handle, INA228_SLAVE_ADDRESS, INA228_CURRENT, (uint8_t *)&iCurrent, 3);
    sign = iCurrent & 0x80;
    iCurrent = bswap32(iCurrent & 0xFFFFFF) >> 12;
    if (sign) iCurrent += 0xFFF00000;
    fCurrent = (iCurrent) * CURRENT_LSB;

    return (fCurrent);
}

void ina228_sample(float *buf, uint32_t len) {

    for(uint32_t sample_count = 0; sample_count < len; sample_count++) {
        float fcurrent = ina228_current(handle);
        buf[sample_count] = fcurrent;
    }
}
