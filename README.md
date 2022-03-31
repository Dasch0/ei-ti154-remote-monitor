# Edge Impulse TI 15.4 Stack - Remote Monitoring

## Overview
This project showcases remote monitoring of a sensor device using edge impulse and the TI 15.4 stack. This project builds on the [Sensor and Collector](https://dev.ti.com/tirex/explore/node?node=AFU6dryAU8NukjdRPy4T4Q__pTTHBmu__LATEST) examples from the TI 15.4 stack, and integrates edge impulse to run a neural network on the sensor device. The result from the neural network is sent to the collector device

## Requirements
1. [TI Code Composer Studio](https://www.ti.com/tool/CCSTUDIO)
2. [TI SimpleLink C12X2-26x2 SDK v5.10.00.48](https://www.ti.com/tool/download/SIMPLELINK-CC13X2-26X2-SDK/5.10.00.48)
3. [An Edge Impulse Account](www.edgeimpulse.com)
4. 2x [CC1352P1 LaunchPads](https://www.ti.com/tool/LAUNCHXL-CC1352P)
5. (Optional) [INA228EVM](https://www.ti.com/store/ti/en/p/product/?p=INA228EVM)

## Setup & Getting Started
To start, follow the steps below to properly import and initialize both the sensor and collector projects with the default [Ball Bearing Fault Detector](https://studio.edgeimpulse.com/public/48672/latest) model.

1. Install the requirements from the links above, and then open `TI Code Composer`
2. Import the projects from this directory to CCS via `File->Import->CCS Projects`. Navigate to the directory of this cloned repository and select both projects
3. You should now see a `sensor` and `collector` project in the `Project Explorer` tab of Code Composer
4. *IMPORTANT* in each project directory, open the `collector.syscfg` and `sensor.syscfg` files and then save them (`CTRL + S` or `CMD + S`). This runs TI's system configurator setup.
5. Build and flash the projects. Follow the [TI documentation](https://dev.ti.com/tirex/explore/node?node=AFU6dryAU8NukjdRPy4T4Q__pTTHBmu__LATEST) to start the 15.4 network, join the sensor device, and read the serial output from the collector

*NOTE:* If building fails with a message indicating that the sdk version 5.10.00.48 is not installed, but you already installed it, Code Composer may not have refreshed to find manually installed SDK versions. To fix this, navigate to `Code Composer Studio -> Preferences -> Code Composer Studio -> Products` and from this window select `Refresh` on the right hand pane. This should prompt you to restart Code Composer.

## How to use your own model
By default, this project will run 'standalone inference' where a static feature buffer copied from edge impulse is tested on device. However by disabling the `EI_STANDALONE_INFERENCE` flag, an included ina228 driver is shown as an example of live data collection.
1. Export any model from edge impulse as a C/C++ library. By default this project uses [Ball Bearing Fault Detector](https://studio.edgeimpulse.com/public/48672/latest)
2. Copy the `edge-impulse-sdk`, `model-parameters`, and `tflite-model` folders into the Sensor project, and copy the `model-parameters` folder into the collector project. Overwrite existing files here.
3. (Optional) if using the INA228EVM as a sensor, disable the `EI_STANDALONE_INFERENCE` definition in `applications/ei-infer.cpp`. Then connect the INA228EVM to the default launchpad I2C, 3v3, 5V, and GND pins.
4. If not using the INA228EVM, and using a project other than the default mentioned in step 2, go to the `Live Classification` tab of your edge impulse project, pick a sample, and copy the `Raw Features` from that sample into the `features[]` array in `application/ei-infer.cpp`
5. Build and flash the projects. Follow the [TI documentation](https://dev.ti.com/tirex/explore/node?node=AFU6dryAU8NukjdRPy4T4Q__pTTHBmu__LATEST) to start the 15.4 network, join the sensor device, and read the serial output from the collector

```
Device Status: Sensor - Addr=0x0001, Temp=25, RSSI=-49 |
Number of Joined Devices: 1
EI Inference Result: class1 /
```

# Further Reading
[TI 15.4 Stack Tutorial](https://dev.ti.com/tirex/explore/node?node=ABRXrYdFS1e-0P3PY6NmNg__pTTHBmu__LATEST)
[Edge Impulse standalone inferencing tutorial](https://docs.edgeimpulse.com/docs/running-your-impulse-locally-1)
