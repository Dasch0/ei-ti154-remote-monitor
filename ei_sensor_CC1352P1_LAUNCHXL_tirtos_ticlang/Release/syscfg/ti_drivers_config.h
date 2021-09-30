/*
 *  ======== ti_drivers_config.h ========
 *  Configured TI-Drivers module declarations
 *
 *  The macros defines herein are intended for use by applications which
 *  directly include this header. These macros should NOT be hard coded or
 *  copied into library source code.
 *
 *  Symbols declared as const are intended for use with libraries.
 *  Library source code must extern the correct symbol--which is resolved
 *  when the application is linked.
 *
 *  DO NOT EDIT - This file is generated for the CC1352P1_LAUNCHXL
 *  by the SysConfig tool.
 */
#ifndef ti_drivers_config_h
#define ti_drivers_config_h

#define CONFIG_SYSCONFIG_PREVIEW

#define CONFIG_CC1352P1_LAUNCHXL
#ifndef DeviceFamily_CC13X2
#define DeviceFamily_CC13X2
#endif

#include <ti/devices/DeviceFamily.h>

#include <stdint.h>

/* support C++ sources */
#ifdef __cplusplus
extern "C" {
#endif


/*
 *  ======== CCFG ========
 */


/*
 *  ======== AESCCM ========
 */

extern const uint_least8_t                  CONFIG_AESCCM_0_CONST;
#define CONFIG_AESCCM_0                     0
#define CONFIG_TI_DRIVERS_AESCCM_COUNT      1


/*
 *  ======== GPIO ========
 */

/* DIO15, LaunchPad Button BTN-1 (Left) */
extern const uint_least8_t              CONFIG_GPIO_BTN1_CONST;
#define CONFIG_GPIO_BTN1                0
/* DIO14, LaunchPad Button BTN-2 (Right) */
extern const uint_least8_t              CONFIG_GPIO_BTN2_CONST;
#define CONFIG_GPIO_BTN2                1
/* DIO6, LaunchPad LED Red */
extern const uint_least8_t              CONFIG_GPIO_RLED_CONST;
#define CONFIG_GPIO_RLED                2
/* DIO7, LaunchPad LED Green */
extern const uint_least8_t              CONFIG_GPIO_GLED_CONST;
#define CONFIG_GPIO_GLED                3
#define CONFIG_TI_DRIVERS_GPIO_COUNT    4

/* LEDs are active high */
#define CONFIG_GPIO_LED_ON  (1)
#define CONFIG_GPIO_LED_OFF (0)

#define CONFIG_LED_ON  (CONFIG_GPIO_LED_ON)
#define CONFIG_LED_OFF (CONFIG_GPIO_LED_OFF)


/*
 *  ======== I2C ========
 */

/*
 *  SCL: DIO21
 *  SDA: DIO5
 */
extern const uint_least8_t              CONFIG_I2C_1_CONST;
#define CONFIG_I2C_1                    0
#define CONFIG_TI_DRIVERS_I2C_COUNT     1

/* ======== I2C Addresses and Speeds ======== */
#include <ti/drivers/I2C.h>

/* ---- CONFIG_I2C_1 I2C bus components ---- */

/* no components connected to CONFIG_I2C_1 */

/* max speed unspecified, defaulting to 100 Kbps */
#define CONFIG_I2C_1_MAXSPEED   (100U) /* Kbps */
#define CONFIG_I2C_1_MAXBITRATE ((I2C_BitRate)I2C_100kHz)


/*
 *  ======== NVS ========
 */

extern const uint_least8_t              CONFIG_NVSINTERNAL_CONST;
#define CONFIG_NVSINTERNAL              0
#define CONFIG_TI_DRIVERS_NVS_COUNT     1


/*
 *  ======== PIN ========
 */
#include <ti/drivers/PIN.h>

extern const PIN_Config BoardGpioInitTable[];

/* Parent Signal: CONFIG_I2C_1 SDA, (DIO5) */
#define CONFIG_PIN_2                   0x00000005
/* Parent Signal: CONFIG_I2C_1 SCL, (DIO21) */
#define CONFIG_PIN_3                   0x00000015
/* XDS110 UART, Parent Signal: CONFIG_DISPLAY_UART TX, (DIO13) */
#define CONFIG_PIN_UART_TX                   0x0000000d
/* XDS110 UART, Parent Signal: CONFIG_DISPLAY_UART RX, (DIO12) */
#define CONFIG_PIN_UART_RX                   0x0000000c
/* SKY13317-373LF RF Antenna Switch, Parent Signal: /ti/drivers/RF RF Antenna Pin 0, (DIO28) */
#define CONFIG_RF_24GHZ                   0x0000001c
/* SKY13317-373LF RF Antenna Switch, Parent Signal: /ti/drivers/RF RF Antenna Pin 1, (DIO29) */
#define CONFIG_RF_HIGH_PA                   0x0000001d
/* SKY13317-373LF RF Antenna Switch, Parent Signal: /ti/drivers/RF RF Antenna Pin 2, (DIO30) */
#define CONFIG_RF_SUB1GHZ                   0x0000001e
/* LaunchPad Button BTN-1 (Left), Parent Signal: CONFIG_GPIO_BTN1 GPIO Pin, (DIO15) */
#define CONFIG_PIN_BTN1                   0x0000000f
/* LaunchPad Button BTN-2 (Right), Parent Signal: CONFIG_GPIO_BTN2 GPIO Pin, (DIO14) */
#define CONFIG_PIN_BTN2                   0x0000000e
/* LaunchPad LED Red, Parent Signal: CONFIG_GPIO_RLED GPIO Pin, (DIO6) */
#define CONFIG_PIN_RLED                   0x00000006
/* LaunchPad LED Green, Parent Signal: CONFIG_GPIO_GLED GPIO Pin, (DIO7) */
#define CONFIG_PIN_GLED                   0x00000007
#define CONFIG_TI_DRIVERS_PIN_COUNT    11


/*
 *  ======== RF ========
 */
#define Board_DIO_30_RFSW 0x0000001e


/*
 *  ======== UART ========
 */

/*
 *  TX: DIO13
 *  RX: DIO12
 *  XDS110 UART
 */
extern const uint_least8_t              CONFIG_DISPLAY_UART_CONST;
#define CONFIG_DISPLAY_UART             0
#define CONFIG_TI_DRIVERS_UART_COUNT    1


/*
 *  ======== Button ========
 */

/* DIO15, LaunchPad Button BTN-1 (Left) */
extern const uint_least8_t                  CONFIG_BTN_LEFT_CONST;
#define CONFIG_BTN_LEFT                     0
/* DIO14, LaunchPad Button BTN-2 (Right) */
extern const uint_least8_t                  CONFIG_BTN_RIGHT_CONST;
#define CONFIG_BTN_RIGHT                    1
#define CONFIG_TI_DRIVERS_BUTTON_COUNT      2


/*
 *  ======== LED ========
 */

/* DIO6, LaunchPad LED Red */
extern const uint_least8_t              CONFIG_LED_RED_CONST;
#define CONFIG_LED_RED                  0
/* DIO7, LaunchPad LED Green */
extern const uint_least8_t              CONFIG_LED_GREEN_CONST;
#define CONFIG_LED_GREEN                1
#define CONFIG_TI_DRIVERS_LED_COUNT     2


/*
 *  ======== Board_init ========
 *  Perform all required TI-Drivers initialization
 *
 *  This function should be called once at a point before any use of
 *  TI-Drivers.
 */
extern void Board_init(void);

/*
 *  ======== Board_initGeneral ========
 *  (deprecated)
 *
 *  Board_initGeneral() is defined purely for backward compatibility.
 *
 *  All new code should use Board_init() to do any required TI-Drivers
 *  initialization _and_ use <Driver>_init() for only where specific drivers
 *  are explicitly referenced by the application.  <Driver>_init() functions
 *  are idempotent.
 */
#define Board_initGeneral Board_init

#ifdef __cplusplus
}
#endif

#endif /* include guard */
