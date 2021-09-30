################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
edge-impulse-sdk/CMSIS/DSP/Source/FastMathFunctions/%.o: ../edge-impulse-sdk/CMSIS/DSP/Source/FastMathFunctions/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: Arm Compiler'
	"/Applications/ti/ccs1040/ccs/tools/compiler/ti-cgt-armllvm_1.3.0.LTS/bin/tiarmclang" -c @"/Users/davidschwarz/workspace-dos/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/application/defines/sensor.opts"  -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -mlittle-endian -mthumb -Oz -I"/Users/davidschwarz/workspace-dos/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/edge-impulse-sdk/porting" -I"/Users/davidschwarz/workspace-dos/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/edge-impulse-sdk/dsp" -I"/Users/davidschwarz/workspace-dos/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/edge-impulse-sdk/classifier" -I"/Users/davidschwarz/workspace-dos/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang" -I"/Users/davidschwarz/workspace-dos/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release" -I"/Users/davidschwarz/workspace-dos/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/application/sensor" -I"/Users/davidschwarz/workspace-dos/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/application" -I"/Users/davidschwarz/workspace-dos/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/software_stack/ti15_4stack/osal" -I"/Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/apps" -I"/Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/common" -I"/Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/common/boards" -I"/Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/common/osal_port" -I"/Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/common/util" -I"/Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/common/inc" -I"/Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/common/stack/src" -I"/Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/common/stack/tirtos/inc" -I"/Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/common/heapmgr" -I"/Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/services/saddr" -I"/Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/services/sdata" -I"/Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/hal/crypto" -I"/Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/hal/platform" -I"/Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/hal/rf" -I"/Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/fh" -I"/Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/high_level" -I"/Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/inc" -I"/Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/rom" -I"/Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/inc/cc13xx" -I"/Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/low_level/cc13xx" -I"/Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/tracer" -I"/Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/apps/sensor" -I"/Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/common/nv" -I"/Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/common/cui" -I"/Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/devices/cc13x2_cc26x2" -I"/Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/devices/cc13x2_cc26x2/inc" -I"/Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/devices/cc13x2_cc26x2/driverlib" -I"/Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/posix/ticlang" -DEI_CLASSIFIER_ALLOCATION_STATIC=1 -DEI_PORTING_TI=1 -DTIMAC_ROM_IMAGE_BUILD -DBoard_EXCLUDE_NVS_EXTERNAL_FLASH -DDeviceFamily_CC13X2 -gdwarf-3 -fdiagnostics-show-option -fshort-enums -munaligned-access -funsigned-char -fcommon -ffunction-sections -fno-strict-aliasing -march=armv7e-m -MMD -MP -MF"edge-impulse-sdk/CMSIS/DSP/Source/FastMathFunctions/$(basename $(<F)).d_raw" -MT"$(@)" -I"/Users/davidschwarz/workspace-dos/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/syscfg" -std=gnu9x $(GEN_OPTS__FLAG) -o"$@" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


