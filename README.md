# Edge Impulse TI 15.4 Stack - Remote Monitoring

## Overview
This project showcases remote monitoring of a sensor device using edge impulse and the TI 15.4 stack. This project builds on the [Sensor and Collector](https://dev.ti.com/tirex/explore/node?node=AFU6dryAU8NukjdRPy4T4Q__pTTHBmu__LATEST) examples from the TI 15.4 stack, and integrates edge impulse to run a neural network on the sensor device. The result from the neural network is sent to the collector device

## Requirements
1. [TI Code Composer Studio](https://www.ti.com/tool/CCSTUDIO)
2. [An Edge Impulse Account](www.edgeimpulse.com)
3. 2x [CC1352P1 LaunchPads](https://www.ti.com/tool/LAUNCHXL-CC1352P)
4. (Optional) [INA228EVM](https://www.ti.com/store/ti/en/p/product/?p=INA228EVM)

## How to use
By default, this project will run 'standalone inference' where a static feature buffer copied from edge impulse is tested on device. However by disabling the `EI_STANDALONE_INFERENCE` flag, an included ina228 driver is shown as an example of live data collection.

1. Import the projects from this directory to CCS via `File->Import->CCS Projects`
2. Export any model from edge impulse as a C/C++ library. By default this project uses [Ball Bearing Fault Detector](https://studio.edgeimpulse.com/public/48672/latest)
3. Copy the `edge-impulse-sdk`, `model-parameters`, and `tflite-model` folders into the Sensor project, and copy the `model-parameters` folder into the collector project. Overwrite existing files here.
4. (Optional) if using the INA228EVM as a sensor, disable the `EI_STANDALONE_INFERENCE` definition in `applications/ei-infer.cpp`. Then connect the INA228EVM to the default launchpad I2C, 3v3, 5V, and GND pins.
4. Build and flash the projects. Follow the [TI documentation](https://dev.ti.com/tirex/explore/node?node=AFU6dryAU8NukjdRPy4T4Q__pTTHBmu__LATEST) to start the 15.4 network, join the sensor device, and read the serial output from the collector
```
Device Status: Sensor - Addr=0x0001, Temp=25, RSSI=-49 |
Number of Joined Devices: 1
EI Inference Result: class1 /
```
