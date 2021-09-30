/*
 *  ======== ti_drivers_config.c ========
 *  Configured TI-Drivers module definitions
 *
 *  DO NOT EDIT - This file is generated for the CC1352P1_LAUNCHXL
 *  by the SysConfig tool.
 */

#include <stddef.h>
#include <stdint.h>

#ifndef DeviceFamily_CC13X2
#define DeviceFamily_CC13X2
#endif

#include <ti/devices/DeviceFamily.h>

#include "ti_drivers_config.h"

/*
 *  ============================= Display =============================
 */

#include <ti/display/Display.h>
#include <ti/display/DisplayUart.h>

#define CONFIG_Display_COUNT 1

#define Display_UARTBUFFERSIZE 1024
static char displayUARTBuffer[Display_UARTBUFFERSIZE];

DisplayUart_Object displayUartObject;

const DisplayUart_HWAttrs displayUartHWAttrs = {
    .uartIdx      = CONFIG_DISPLAY_UART,
    .baudRate     = 115200,
    .mutexTimeout = (unsigned int)(-1),
    .strBuf       = displayUARTBuffer,
    .strBufLen    = Display_UARTBUFFERSIZE
};

const Display_Config Display_config[CONFIG_Display_COUNT] = {
    /* CONFIG_DISPLAY */
    /* XDS110 UART */
    {
        .fxnTablePtr = &DisplayUartMin_fxnTable,
        .object      = &displayUartObject,
        .hwAttrs     = &displayUartHWAttrs
    },
};

const uint_least8_t Display_count = CONFIG_Display_COUNT;

/*
 *  =============================== AESCCM ===============================
 */

#include <ti/drivers/AESCCM.h>
#include <ti/drivers/aesccm/AESCCMCC26XX.h>

#define CONFIG_AESCCM_COUNT 1
AESCCMCC26XX_Object aesccmCC26XXObjects[CONFIG_AESCCM_COUNT];

/*
 *  ======== aesccmCC26XXHWAttrs ========
 */
const AESCCMCC26XX_HWAttrs aesccmCC26XXHWAttrs[CONFIG_AESCCM_COUNT] = {
    {
        .intPriority = (~0),
    },
};

const AESCCM_Config AESCCM_config[CONFIG_AESCCM_COUNT] = {
    {   /* CONFIG_AESCCM_0 */
        .object  = &aesccmCC26XXObjects[CONFIG_AESCCM_0],
        .hwAttrs = &aesccmCC26XXHWAttrs[CONFIG_AESCCM_0]
    },
};

const uint_least8_t CONFIG_AESCCM_0_CONST = CONFIG_AESCCM_0;
const uint_least8_t AESCCM_count = CONFIG_AESCCM_COUNT;

/*
 *  =============================== DMA ===============================
 */

#include <ti/drivers/dma/UDMACC26XX.h>
#include <ti/devices/cc13x2_cc26x2/driverlib/udma.h>
#include <ti/devices/cc13x2_cc26x2/inc/hw_memmap.h>

UDMACC26XX_Object udmaCC26XXObject;

const UDMACC26XX_HWAttrs udmaCC26XXHWAttrs = {
    .baseAddr        = UDMA0_BASE,
    .powerMngrId     = PowerCC26XX_PERIPH_UDMA,
    .intNum          = INT_DMA_ERR,
    .intPriority     = (~0)
};

const UDMACC26XX_Config UDMACC26XX_config[1] = {
    {
        .object         = &udmaCC26XXObject,
        .hwAttrs        = &udmaCC26XXHWAttrs,
    },
};

/*
 *  =============================== GPIO ===============================
 */

#include <ti/drivers/GPIO.h>
#include <ti/drivers/gpio/GPIOCC26XX.h>

#define CONFIG_GPIO_COUNT 4

/*
 *  ======== gpioPinConfigs ========
 *  Array of Pin configurations
 */
GPIO_PinConfig gpioPinConfigs[] = {
    /* CONFIG_GPIO_BTN1 : LaunchPad Button BTN-1 (Left) */
    GPIOCC26XX_DIO_15 | GPIO_CFG_IN_PU | GPIO_CFG_IN_INT_FALLING,
    /* CONFIG_GPIO_BTN2 : LaunchPad Button BTN-2 (Right) */
    GPIOCC26XX_DIO_14 | GPIO_CFG_IN_PU | GPIO_CFG_IN_INT_FALLING,
    /* CONFIG_GPIO_RLED : LaunchPad LED Red */
    GPIOCC26XX_DIO_06 | GPIO_CFG_OUT_STD | GPIO_CFG_OUT_STR_MED | GPIO_CFG_OUT_LOW,
    /* CONFIG_GPIO_GLED : LaunchPad LED Green */
    GPIOCC26XX_DIO_07 | GPIO_CFG_OUT_STD | GPIO_CFG_OUT_STR_MED | GPIO_CFG_OUT_LOW,
};

/*
 *  ======== gpioCallbackFunctions ========
 *  Array of callback function pointers
 *
 *  NOTE: Unused callback entries can be omitted from the callbacks array to
 *  reduce memory usage by enabling callback table optimization
 *  (GPIO.optimizeCallbackTableSize = true)
 */
GPIO_CallbackFxn gpioCallbackFunctions[] = {
    /* CONFIG_GPIO_BTN1 : LaunchPad Button BTN-1 (Left) */
    NULL,
    /* CONFIG_GPIO_BTN2 : LaunchPad Button BTN-2 (Right) */
    NULL,
    /* CONFIG_GPIO_RLED : LaunchPad LED Red */
    NULL,
    /* CONFIG_GPIO_GLED : LaunchPad LED Green */
    NULL,
};

const uint_least8_t CONFIG_GPIO_BTN1_CONST = CONFIG_GPIO_BTN1;
const uint_least8_t CONFIG_GPIO_BTN2_CONST = CONFIG_GPIO_BTN2;
const uint_least8_t CONFIG_GPIO_RLED_CONST = CONFIG_GPIO_RLED;
const uint_least8_t CONFIG_GPIO_GLED_CONST = CONFIG_GPIO_GLED;

/*
 *  ======== GPIOCC26XX_config ========
 */
const GPIOCC26XX_Config GPIOCC26XX_config = {
    .pinConfigs = (GPIO_PinConfig *)gpioPinConfigs,
    .callbacks = (GPIO_CallbackFxn *)gpioCallbackFunctions,
    .numberOfPinConfigs = 4,
    .numberOfCallbacks = 4,
    .intPriority = (~0)
};

/*
 *  =============================== I2C ===============================
 */

#include <ti/drivers/I2C.h>
#include <ti/drivers/i2c/I2CCC26XX.h>
#include <ti/drivers/power/PowerCC26XX.h>

#define CONFIG_I2C_COUNT 1

/*
 *  ======== i2cCC26xxObjects ========
 */
I2CCC26XX_Object i2cCC26xxObjects[CONFIG_I2C_COUNT];

/*
 *  ======== i2cCC26xxHWAttrs ========
 */
const I2CCC26XX_HWAttrsV1 i2cCC26xxHWAttrs[CONFIG_I2C_COUNT] = {
    /* CONFIG_I2C_1 */
    {
        .baseAddr    = I2C0_BASE,
        .powerMngrId = PowerCC26XX_PERIPH_I2C0,
        .intNum      = INT_I2C_IRQ,
        .intPriority = (~0),
        .swiPriority = 0,
        .sclPin      = IOID_21,
        .sdaPin      = IOID_5
    },
};

/*
 *  ======== I2C_config ========
 */
const I2C_Config I2C_config[CONFIG_I2C_COUNT] = {
    /* CONFIG_I2C_1 */
    {
        .object      = &i2cCC26xxObjects[CONFIG_I2C_1],
        .hwAttrs     = &i2cCC26xxHWAttrs[CONFIG_I2C_1]
    },
};

const uint_least8_t CONFIG_I2C_1_CONST = CONFIG_I2C_1;
const uint_least8_t I2C_count = CONFIG_I2C_COUNT;

/*
 *  =============================== NVS ===============================
 */

#include <ti/drivers/NVS.h>
#include <ti/drivers/nvs/NVSCC26XX.h>

/*
 *  NVSCC26XX Internal NVS flash region definitions
 *
 * Place uninitialized char arrays at addresses
 * corresponding to the 'regionBase' addresses defined in
 * the configured NVS regions. These arrays are used as
 * place holders so that the linker will not place other
 * content there.
 *
 * For GCC targets, the char arrays are each placed into
 * the shared ".nvs" section. The user must add content to
 * their GCC linker command file to place the .nvs section
 * at the lowest 'regionBase' address specified in their NVS
 * regions.
 */

#if defined(__TI_COMPILER_VERSION__) || defined(__clang__)

static char flashBuf0[0x4000] __attribute__ ((retain, noinit, location(0x52000)));

#elif defined(__IAR_SYSTEMS_ICC__)

__no_init static char flashBuf0[0x4000] @ 0x52000;

#elif defined(__GNUC__)

__attribute__ ((section (".nvs")))
static char flashBuf0[0x4000];

#endif

NVSCC26XX_Object nvsCC26XXObjects[1];

static const NVSCC26XX_HWAttrs nvsCC26XXHWAttrs[1] = {
    /* CONFIG_NVSINTERNAL */
    {
        .regionBase = (void *) flashBuf0,
        .regionSize = 0x4000
    },
};

#define CONFIG_NVS_COUNT 1

const NVS_Config NVS_config[CONFIG_NVS_COUNT] = {
    /* CONFIG_NVSINTERNAL */
    {
        .fxnTablePtr = &NVSCC26XX_fxnTable,
        .object = &nvsCC26XXObjects[0],
        .hwAttrs = &nvsCC26XXHWAttrs[0],
    },
};

const uint_least8_t CONFIG_NVSINTERNAL_CONST = CONFIG_NVSINTERNAL;
const uint_least8_t NVS_count = CONFIG_NVS_COUNT;

/*
 *  =============================== PIN ===============================
 */
#include <ti/drivers/PIN.h>
#include <ti/drivers/pin/PINCC26XX.h>

#define CONFIG_PIN_COUNT 11

const PIN_Config BoardGpioInitTable[CONFIG_PIN_COUNT + 1] = {
    /* Parent Signal: CONFIG_I2C_1 SDA, (DIO5) */
    CONFIG_PIN_2 | PIN_INPUT_EN | PIN_PULLUP | PIN_IRQ_DIS,
    /* Parent Signal: CONFIG_I2C_1 SCL, (DIO21) */
    CONFIG_PIN_3 | PIN_INPUT_EN | PIN_PULLUP | PIN_IRQ_DIS,
    /* XDS110 UART, Parent Signal: CONFIG_DISPLAY_UART TX, (DIO13) */
    CONFIG_PIN_UART_TX | PIN_GPIO_OUTPUT_EN | PIN_GPIO_LOW | PIN_PUSHPULL | PIN_DRVSTR_MED,
    /* XDS110 UART, Parent Signal: CONFIG_DISPLAY_UART RX, (DIO12) */
    CONFIG_PIN_UART_RX | PIN_INPUT_EN | PIN_PULLDOWN | PIN_IRQ_DIS,
    /* SKY13317-373LF RF Antenna Switch, Parent Signal: /ti/drivers/RF RF Antenna Pin 0, (DIO28) */
    CONFIG_RF_24GHZ | PIN_INPUT_EN | PIN_NOPULL | PIN_IRQ_DIS,
    /* SKY13317-373LF RF Antenna Switch, Parent Signal: /ti/drivers/RF RF Antenna Pin 1, (DIO29) */
    CONFIG_RF_HIGH_PA | PIN_INPUT_EN | PIN_NOPULL | PIN_IRQ_DIS,
    /* SKY13317-373LF RF Antenna Switch, Parent Signal: /ti/drivers/RF RF Antenna Pin 2, (DIO30) */
    CONFIG_RF_SUB1GHZ | PIN_INPUT_EN | PIN_NOPULL | PIN_IRQ_DIS,
    /* LaunchPad Button BTN-1 (Left), Parent Signal: CONFIG_GPIO_BTN1 GPIO Pin, (DIO15) */
    CONFIG_PIN_BTN1 | PIN_INPUT_EN | PIN_PULLUP | PIN_IRQ_DIS,
    /* LaunchPad Button BTN-2 (Right), Parent Signal: CONFIG_GPIO_BTN2 GPIO Pin, (DIO14) */
    CONFIG_PIN_BTN2 | PIN_INPUT_EN | PIN_PULLUP | PIN_IRQ_DIS,
    /* LaunchPad LED Red, Parent Signal: CONFIG_GPIO_RLED GPIO Pin, (DIO6) */
    CONFIG_PIN_RLED | PIN_GPIO_OUTPUT_EN | PIN_GPIO_LOW | PIN_PUSHPULL | PIN_DRVSTR_MED,
    /* LaunchPad LED Green, Parent Signal: CONFIG_GPIO_GLED GPIO Pin, (DIO7) */
    CONFIG_PIN_GLED | PIN_GPIO_OUTPUT_EN | PIN_GPIO_LOW | PIN_PUSHPULL | PIN_DRVSTR_MED,

    PIN_TERMINATE
};

const PINCC26XX_HWAttrs PINCC26XX_hwAttrs = {
    .intPriority = (~0),
    .swiPriority = 0
};

/*
 *  =============================== Power ===============================
 */
#include <ti/drivers/Power.h>
#include <ti/drivers/power/PowerCC26X2.h>
#include "ti_drivers_config.h"

extern void PowerCC26XX_standbyPolicy(void);
extern bool PowerCC26XX_calibrate(unsigned int);

const PowerCC26X2_Config PowerCC26X2_config = {
    .enablePolicy             = true,
    .policyInitFxn            = NULL,
    .policyFxn                = PowerCC26XX_standbyPolicy,
    .calibrateFxn             = PowerCC26XX_calibrate,
    .calibrateRCOSC_LF        = true,
    .calibrateRCOSC_HF        = true,
    .enableTCXOFxn            = NULL
};


/*
 *  =============================== RF Driver ===============================
 */
#include <ti/drivers/rf/RF.h>

/*
 * RF driver callback function, called by the driver on global driver events.
 */
static void RF_globalCallbackFunction (RF_Handle client, RF_GlobalEvent events, void* arg);

/*
 * Callback function to handle custom / application specific behavior
 */
extern void __attribute__((weak)) rfDriverCallback (RF_Handle client, RF_GlobalEvent events, void *arg);

/*
 * Callback function to handle antenna switching
 */
extern void __attribute__((weak)) rfDriverCallbackAntennaSwitching (RF_Handle client, RF_GlobalEvent events, void *arg);

/*
 * Platform-specific driver configuration
 */
const RFCC26XX_HWAttrsV2 RFCC26XX_hwAttrs = {
    .hwiPriority        = (~0),
    .swiPriority        = (uint8_t)0,
    .xoscHfAlwaysNeeded = true,
    .globalCallback     = &RF_globalCallbackFunction,
    .globalEventMask    = RF_GlobalEventInit | RF_GlobalEventRadioPowerDown | RF_GlobalEventRadioSetup
};

/*
 *  ======== RF_globalCallbackFunction ========
 *  This function is called by the driver on global driver events.
 *  It will call specific callback functions to further handle the triggering events.
 */
static void RF_globalCallbackFunction(RF_Handle client, RF_GlobalEvent events, void *arg)
{
    rfDriverCallback(client, events, arg);
    rfDriverCallbackAntennaSwitching(client, events, arg);
}

/*
 *  ======== rfDriverCallback ========
 *  Handle events triggered by the RF driver for custom / application specific behavior.
 */
void __attribute__((weak)) rfDriverCallback(RF_Handle client, RF_GlobalEvent events, void *arg)
{
    /* ======== PLEASE READ THIS ========
    *
    * This function is declared weak for the application to override it.
    * A new definition of 'rfDriverCallback' is required if you want to
    * handle the events listed in '.globalEventMask'.
    *
    * Please copy this function definition to create your own, but make
    * sure to remove '__attribute__((weak))' for your definition.
    *
    * According to '.globalEventMask', this function will be triggered by:
    *   - RF_GlobalEventInit
    *   - RF_GlobalEventRadioPowerDown
    *   - RF_GlobalEventRadioSetup
    * 
    * An example of how to handle these events would be:
    * 
    *   --- Code snippet begin ---
    * 
    *   if(events & RF_GlobalEventInit) {
    *       // Perform action for this event
    *   }
    *   else if (events & RF_GlobalEventRadioPowerDown) {
    *       // Perform action for this event
    *   }
    *   else if (events & RF_GlobalEventRadioSetup) {
    *       // Perform action for this event
    *   }
    * 
    *   --- Code snippet end ---
    */
}


/*
 * ======== Antenna switching ========
 */
static PIN_Handle antennaPins;
static PIN_State antennaState;

static void initAntennaSwitch()
{
    PIN_Config antennaConfig[] = {
        CONFIG_RF_24GHZ | PIN_GPIO_OUTPUT_EN | PIN_GPIO_LOW | PIN_PUSHPULL | PIN_DRVSTR_MAX,      /* Path disabled */
        CONFIG_RF_HIGH_PA | PIN_GPIO_OUTPUT_EN | PIN_GPIO_LOW | PIN_PUSHPULL | PIN_DRVSTR_MAX,      /* Path disabled */
        CONFIG_RF_SUB1GHZ | PIN_GPIO_OUTPUT_EN | PIN_GPIO_LOW | PIN_PUSHPULL | PIN_DRVSTR_MAX,      /* Path disabled */
        PIN_TERMINATE
    };
    antennaPins = PIN_open(&antennaState, antennaConfig);
}

/*
 * ======== rfDriverCallbackAntennaSwitching ========
 * Sets up the antenna switch depending on the current PHY configuration.
 * 
 * Truth table:
 *
 * Path        DIO28 DIO29 DIO30
 * =========== ===== ===== =====
 * Off         0     0     0
 * Sub-1 GHz   0     0     1
 * 2.4 GHz     1     0     0
 * 20 dBm TX   0     1     0
 */
void __attribute__((weak)) rfDriverCallbackAntennaSwitching(RF_Handle client, RF_GlobalEvent events, void *arg)
{
    /* Protect against repeated RF_init */
    static bool initialized = false;

    /* Local variable. */
    bool    sub1GHz   = false;
    uint8_t loDivider = 0;

    if (!initialized && events & RF_GlobalEventInit) {
        /* Don't do it again */
        initialized = true;
        initAntennaSwitch();
    }
    else if (events & RF_GlobalEventRadioSetup) {
        /* Switch off all paths. */
        PINCC26XX_setOutputValue(CONFIG_RF_24GHZ, 0);
        PINCC26XX_setOutputValue(CONFIG_RF_HIGH_PA, 0);
        PINCC26XX_setOutputValue(CONFIG_RF_SUB1GHZ, 0);

        /* Decode the current PA configuration. */
        RF_TxPowerTable_PAType paType = (RF_TxPowerTable_PAType)RF_getTxPower(client).paType;

        /* Decode the generic argument as a setup command. */
        RF_RadioSetup* setupCommand = (RF_RadioSetup*)arg;

        switch (setupCommand->common.commandNo) {
            case (CMD_RADIO_SETUP):
            case (CMD_BLE5_RADIO_SETUP):
                    loDivider = RF_LODIVIDER_MASK & setupCommand->common.loDivider;

                    /* Sub-1GHz front-end. */
                    if (loDivider != 0) {
                        sub1GHz = true;
                    }
                    break;
            case (CMD_PROP_RADIO_DIV_SETUP):
                    loDivider = RF_LODIVIDER_MASK & setupCommand->prop_div.loDivider;

                    /* Sub-1GHz front-end. */
                    if (loDivider != 0) {
                        sub1GHz = true;
                    }
                    break;
            default:break;
        }

        if (sub1GHz) {
            /* Sub-1 GHz */
            if (paType == RF_TxPowerTable_HighPA) {
                /* PA enable --> HIGH PA
                 * LNA enable --> Sub-1 GHz
                 */
                PINCC26XX_setMux(antennaPins, CONFIG_RF_24GHZ, PINCC26XX_MUX_GPIO);
                /* Note: RFC_GPO3 is a work-around because the RFC_GPO1 (PA enable signal) is sometimes not
                         de-asserted on CC1352 Rev A. */
                PINCC26XX_setMux(antennaPins, CONFIG_RF_HIGH_PA, PINCC26XX_MUX_RFC_GPO3);
                PINCC26XX_setMux(antennaPins, CONFIG_RF_SUB1GHZ, PINCC26XX_MUX_RFC_GPO0);
            } else {
                /* RF core active --> Sub-1 GHz */
                PINCC26XX_setMux(antennaPins, CONFIG_RF_24GHZ, PINCC26XX_MUX_GPIO);
                PINCC26XX_setMux(antennaPins, CONFIG_RF_HIGH_PA, PINCC26XX_MUX_GPIO);
                PINCC26XX_setMux(antennaPins, CONFIG_RF_SUB1GHZ, PINCC26XX_MUX_GPIO);
                PINCC26XX_setOutputValue(CONFIG_RF_SUB1GHZ, 1);
            }
        } else {
            /* 2.4 GHz */
            if (paType == RF_TxPowerTable_HighPA)
            {
                /* PA enable --> HIGH PA
                 * LNA enable --> 2.4 GHz
                 */
                PINCC26XX_setMux(antennaPins, CONFIG_RF_24GHZ, PINCC26XX_MUX_RFC_GPO0);
                /* Note: RFC_GPO3 is a work-around because the RFC_GPO1 (PA enable signal) is sometimes not
                         de-asserted on CC1352 Rev A. */
                PINCC26XX_setMux(antennaPins, CONFIG_RF_HIGH_PA, PINCC26XX_MUX_RFC_GPO3);
                PINCC26XX_setMux(antennaPins, CONFIG_RF_SUB1GHZ, PINCC26XX_MUX_GPIO);
            } else {
                /* RF core active --> 2.4 GHz */
                PINCC26XX_setMux(antennaPins, CONFIG_RF_24GHZ, PINCC26XX_MUX_GPIO);
                PINCC26XX_setMux(antennaPins, CONFIG_RF_HIGH_PA, PINCC26XX_MUX_GPIO);
                PINCC26XX_setMux(antennaPins, CONFIG_RF_SUB1GHZ, PINCC26XX_MUX_GPIO);
                PINCC26XX_setOutputValue(CONFIG_RF_24GHZ, 1);
            }
        }
    }
    else if (events & RF_GlobalEventRadioPowerDown) {
        /* Switch off all paths. */
        PINCC26XX_setOutputValue(CONFIG_RF_24GHZ, 0);
        PINCC26XX_setOutputValue(CONFIG_RF_HIGH_PA, 0);
        PINCC26XX_setOutputValue(CONFIG_RF_SUB1GHZ, 0);

        /* Reset the IO multiplexer to GPIO functionality */
        PINCC26XX_setMux(antennaPins, CONFIG_RF_24GHZ, PINCC26XX_MUX_GPIO);
        PINCC26XX_setMux(antennaPins, CONFIG_RF_HIGH_PA, PINCC26XX_MUX_GPIO);
        PINCC26XX_setMux(antennaPins, CONFIG_RF_SUB1GHZ, PINCC26XX_MUX_GPIO);
    }
}

/*
 *  =============================== Temperature ===============================
 */
#include <ti/drivers/Temperature.h>
#include <ti/drivers/temperature/TemperatureCC26X2.h>

const TemperatureCC26X2_Config TemperatureCC26X2_config = {
    .intPriority = (~0),
};

/*
 *  =============================== UART ===============================
 */

#include <ti/drivers/UART.h>
#include <ti/drivers/uart/UARTCC26XX.h>
#include <ti/drivers/Power.h>
#include <ti/drivers/power/PowerCC26X2.h>
#include <ti/devices/cc13x2_cc26x2/inc/hw_memmap.h>
#include <ti/devices/cc13x2_cc26x2/inc/hw_ints.h>

#define CONFIG_UART_COUNT 1

UARTCC26XX_Object uartCC26XXObjects[CONFIG_UART_COUNT];

static unsigned char uartCC26XXRingBuffer0[32];

static const UARTCC26XX_HWAttrsV2 uartCC26XXHWAttrs[CONFIG_UART_COUNT] = {
  {
    .baseAddr           = UART0_BASE,
    .intNum             = INT_UART0_COMB,
    .intPriority        = (~0),
    .swiPriority        = 0,
    .powerMngrId        = PowerCC26XX_PERIPH_UART0,
    .ringBufPtr         = uartCC26XXRingBuffer0,
    .ringBufSize        = sizeof(uartCC26XXRingBuffer0),
    .rxPin              = IOID_12,
    .txPin              = IOID_13,
    .ctsPin             = PIN_UNASSIGNED,
    .rtsPin             = PIN_UNASSIGNED,
    .txIntFifoThr       = UARTCC26XX_FIFO_THRESHOLD_1_8,
    .rxIntFifoThr       = UARTCC26XX_FIFO_THRESHOLD_4_8,
    .errorFxn           = NULL
  },
};

const UART_Config UART_config[CONFIG_UART_COUNT] = {
    {   /* CONFIG_DISPLAY_UART */
        .fxnTablePtr = &UARTCC26XX_fxnTable,
        .object      = &uartCC26XXObjects[CONFIG_DISPLAY_UART],
        .hwAttrs     = &uartCC26XXHWAttrs[CONFIG_DISPLAY_UART]
    },
};

const uint_least8_t CONFIG_DISPLAY_UART_CONST = CONFIG_DISPLAY_UART;
const uint_least8_t UART_count = CONFIG_UART_COUNT;

/*
 *  =============================== Button ===============================
 */
#include <ti/drivers/apps/Button.h>

#define CONFIG_BUTTON_COUNT 2
Button_Object ButtonObjects[CONFIG_BUTTON_COUNT];

static const Button_HWAttrs ButtonHWAttrs[CONFIG_BUTTON_COUNT] = {
    /* CONFIG_BTN_LEFT */
    /* LaunchPad Button BTN-1 (Left) */
    {
        .gpioIndex = CONFIG_GPIO_BTN1
    },
    /* CONFIG_BTN_RIGHT */
    /* LaunchPad Button BTN-2 (Right) */
    {
        .gpioIndex = CONFIG_GPIO_BTN2
    },
};

const Button_Config Button_config[CONFIG_BUTTON_COUNT] = {
    /* CONFIG_BTN_LEFT */
    /* LaunchPad Button BTN-1 (Left) */
    {
        .object = &ButtonObjects[CONFIG_BTN_LEFT],
        .hwAttrs = &ButtonHWAttrs[CONFIG_BTN_LEFT]
    },
    /* CONFIG_BTN_RIGHT */
    /* LaunchPad Button BTN-2 (Right) */
    {
        .object = &ButtonObjects[CONFIG_BTN_RIGHT],
        .hwAttrs = &ButtonHWAttrs[CONFIG_BTN_RIGHT]
    },
};

const uint_least8_t CONFIG_BTN_LEFT_CONST = CONFIG_BTN_LEFT;
const uint_least8_t CONFIG_BTN_RIGHT_CONST = CONFIG_BTN_RIGHT;
const uint_least8_t Button_count = CONFIG_BUTTON_COUNT;

/*
 *  =============================== LED ===============================
 */
#include <ti/drivers/apps/LED.h>

#define CONFIG_LED_COUNT 2
LED_Object LEDObjects[CONFIG_LED_COUNT];

static const LED_HWAttrs LEDHWAttrs[CONFIG_LED_COUNT] = {
    /* CONFIG_LED_RED */
    /* LaunchPad LED Red */
    {
        .type = LED_GPIO_CONTROLLED,
        .index = CONFIG_GPIO_RLED,
    },
    /* CONFIG_LED_GREEN */
    /* LaunchPad LED Green */
    {
        .type = LED_GPIO_CONTROLLED,
        .index = CONFIG_GPIO_GLED,
    },
};

const LED_Config LED_config[CONFIG_LED_COUNT] = {
    /* CONFIG_LED_RED */
    /* LaunchPad LED Red */
    {
        .object = &LEDObjects[CONFIG_LED_RED],
        .hwAttrs = &LEDHWAttrs[CONFIG_LED_RED]
    },
    /* CONFIG_LED_GREEN */
    /* LaunchPad LED Green */
    {
        .object = &LEDObjects[CONFIG_LED_GREEN],
        .hwAttrs = &LEDHWAttrs[CONFIG_LED_GREEN]
    },
};

const uint_least8_t CONFIG_LED_RED_CONST = CONFIG_LED_RED;
const uint_least8_t CONFIG_LED_GREEN_CONST = CONFIG_LED_GREEN;
const uint_least8_t LED_count = CONFIG_LED_COUNT;

#include <stdbool.h>

#include <ti/devices/cc13x2_cc26x2/driverlib/ioc.h>
#include <ti/devices/cc13x2_cc26x2/driverlib/cpu.h>

#include <ti/drivers/pin/PINCC26XX.h>

/*
 *  ======== Board_sendExtFlashByte ========
 */
void Board_sendExtFlashByte(PIN_Handle pinHandle, uint8_t byte)
{
    uint8_t i;

    /* SPI Flash CS */
    PIN_setOutputValue(pinHandle, IOID_20, 0);

    for (i = 0; i < 8; i++) {
        PIN_setOutputValue(pinHandle, IOID_10, 0);  /* SPI Flash CLK */

        /* SPI Flash MOSI */
        PIN_setOutputValue(pinHandle, IOID_9, (byte >> (7 - i)) & 0x01);
        PIN_setOutputValue(pinHandle, IOID_10, 1);  /* SPI Flash CLK */

        /*
         * Waste a few cycles to keep the CLK high for at
         * least 45% of the period.
         * 3 cycles per loop: 8 loops @ 48 Mhz = 0.5 us.
         */
        CPUdelay(8);
    }

    PIN_setOutputValue(pinHandle, IOID_10, 0);  /* CLK */
    PIN_setOutputValue(pinHandle, IOID_20, 1);  /* CS */

    /*
     * Keep CS high at least 40 us
     * 3 cycles per loop: 700 loops @ 48 Mhz ~= 44 us
     */
    CPUdelay(700);
}

/*
 *  ======== Board_wakeUpExtFlash ========
 */
void Board_wakeUpExtFlash(void)
{
    PIN_Config extFlashPinTable[] = {
        /* SPI Flash CS */
        IOID_20 | PIN_GPIO_OUTPUT_EN | PIN_GPIO_HIGH | PIN_PUSHPULL |
                PIN_INPUT_DIS | PIN_DRVSTR_MED,
        PIN_TERMINATE
    };
    PIN_State extFlashPinState;
    PIN_Handle extFlashPinHandle = PIN_open(&extFlashPinState, extFlashPinTable);

    /*
     *  To wake up we need to toggle the chip select at
     *  least 20 ns and ten wait at least 35 us.
     */

    /* Toggle chip select for ~20ns to wake ext. flash */
    PIN_setOutputValue(extFlashPinHandle, IOID_20, 0);
    /* 3 cycles per loop: 1 loop @ 48 Mhz ~= 62 ns */
    CPUdelay(1);
    PIN_setOutputValue(extFlashPinHandle, IOID_20, 1);
    /* 3 cycles per loop: 560 loops @ 48 Mhz ~= 35 us */
    CPUdelay(560);

    PIN_close(extFlashPinHandle);
}

/*
 *  ======== Board_shutDownExtFlash ========
 */
void Board_shutDownExtFlash(void)
{
    /*
     *  To be sure we are putting the flash into sleep and not waking it,
     *  we first have to make a wake up call
     */
    Board_wakeUpExtFlash();

    PIN_Config extFlashPinTable[] = {
        /* SPI Flash CS*/
        IOID_20 | PIN_GPIO_OUTPUT_EN | PIN_GPIO_HIGH | PIN_PUSHPULL |
                PIN_INPUT_DIS | PIN_DRVSTR_MED,
        /* SPI Flash CLK */
        IOID_10 | PIN_GPIO_OUTPUT_EN | PIN_GPIO_LOW | PIN_PUSHPULL |
                PIN_INPUT_DIS | PIN_DRVSTR_MED,
        /* SPI Flash MOSI */
        IOID_9 | PIN_GPIO_OUTPUT_EN | PIN_GPIO_LOW | PIN_PUSHPULL |
                PIN_INPUT_DIS | PIN_DRVSTR_MED,
        /* SPI Flash MISO */
        IOID_8 | PIN_INPUT_EN | PIN_PULLDOWN,
        PIN_TERMINATE
    };
    PIN_State extFlashPinState;
    PIN_Handle extFlashPinHandle = PIN_open(&extFlashPinState, extFlashPinTable);

    uint8_t extFlashShutdown = 0xB9;

    Board_sendExtFlashByte(extFlashPinHandle, extFlashShutdown);

    PIN_close(extFlashPinHandle);
}


#include <ti/drivers/Board.h>

/*
 *  ======== Board_initHook ========
 *  Perform any board-specific initialization needed at startup.  This
 *  function is declared weak to allow applications to override it if needed.
 */
void __attribute__((weak)) Board_initHook(void)
{
}

/*
 *  ======== Board_init ========
 *  Perform any initialization needed before using any board APIs
 */
void Board_init(void)
{
    /* ==== /ti/drivers/Power initialization ==== */
    Power_init();

    /* ==== /ti/drivers/PIN initialization ==== */
    if (PIN_init(BoardGpioInitTable) != PIN_SUCCESS) {
        /* Error with PIN_init */
        while (1);
    }
    /* ==== /ti/devices/CCFGTemplate initialization ==== */

    /* ==== /ti/drivers/RF initialization ==== */


    Board_shutDownExtFlash();

    Board_initHook();
}

