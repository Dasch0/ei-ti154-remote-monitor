#  This is a generated file.
#
#  Do not edit this file. Any modifications to this file
#  will be overwritten whenever makefiles are re-generated.
#
#  template: ti.sysbios.rom.cortexm.cc26xx.cc26x2v2/CC26xx_custom_makefile_gnu.xdt
#  target: ti.targets.arm.clang.M4F

vpath % /Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/kernel/tirtos/packages/ti/sysbios/
vpath %.c /Applications/ti/xdctools_3_62_00_08_core/packages/

XOPTS = -I"/Applications/ti/xdctools_3_62_00_08_core/packages/" -Dxdc_target_types__=/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/kernel/tirtos/packages/ti/targets/arm/clang/std.h -Dxdc_target_name__=M4F

BIOS_DEFS =  -Dti_sysbios_BIOS_swiEnabled__D=TRUE -Dti_sysbios_BIOS_taskEnabled__D=TRUE -Dti_sysbios_BIOS_clockEnabled__D=TRUE -Dti_sysbios_BIOS_runtimeCreatesEnabled__D=TRUE -Dti_sysbios_knl_Task_moduleStateCheckFlag__D=FALSE -Dti_sysbios_knl_Task_objectCheckFlag__D=FALSE -Dti_sysbios_hal_Hwi_DISABLE_ALL_HOOKS -Dti_sysbios_knl_Swi_DISABLE_ALL_HOOKS -Dti_sysbios_BIOS_smpEnabled__D=FALSE -Dti_sysbios_Build_useHwiMacros -Dti_sysbios_Build_useIndirectReferences=FALSE -Dti_sysbios_knl_Swi_numPriorities__D=6 -Dti_sysbios_knl_Task_deleteTerminatedTasks__D=FALSE -Dti_sysbios_knl_Task_numPriorities__D=6 -Dti_sysbios_knl_Task_checkStackFlag__D=FALSE -Dti_sysbios_knl_Task_initStackFlag__D=TRUE -Dti_sysbios_knl_Task_DISABLE_ALL_HOOKS -Dti_sysbios_knl_Clock_TICK_SOURCE=ti_sysbios_knl_Clock_TickSource_TIMER -Dti_sysbios_knl_Clock_TICK_MODE=ti_sysbios_knl_Clock_TickMode_DYNAMIC -Dti_sysbios_hal_Core_delegate_getId=ti_sysbios_hal_CoreNull_getId__E -Dti_sysbios_hal_Core_delegate_interruptCore=ti_sysbios_hal_CoreNull_interruptCore__E -Dti_sysbios_hal_Core_delegate_lock=ti_sysbios_hal_CoreNull_lock__E -Dti_sysbios_hal_Core_delegate_unlock=ti_sysbios_hal_CoreNull_unlock__E -Dti_sysbios_hal_Core_numCores__D=1 -Dti_sysbios_hal_CoreNull_numCores__D=1 -Dti_sysbios_utils_Load_taskEnabled__D=TRUE -Dti_sysbios_utils_Load_swiEnabled__D=FALSE -Dti_sysbios_utils_Load_hwiEnabled__D=FALSE -Dti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__D=TRUE -Dti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__D=TRUE -Dti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__D=TRUE -Dti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__D=TRUE -Dti_sysbios_knl_Semaphore_supportsEvents__D=FALSE -Dti_sysbios_knl_Semaphore_supportsPriority__D=FALSE -Dxdc_runtime_Assert_DISABLE_ALL -Dxdc_runtime_Log_DISABLE_ALL -DEI_CLASSIFIER_ALLOCATION_STATIC=1 -DEI_PORTING_TI=1 -DTIMAC_ROM_IMAGE_BUILD -DBoard_EXCLUDE_NVS_EXTERNAL_FLASH -DDeviceFamily_CC13X2 

CCOPTS = -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -mlittle-endian -mthumb -Oz -I"/Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/edge-impulse-sdk/porting" -I"/Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/edge-impulse-sdk/dsp" -I"/Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/edge-impulse-sdk/classifier" -I"/Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang" -I"/Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release" -I"/Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/application/sensor" -I"/Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/application" -I"/Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/software_stack/ti15_4stack/osal" -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/apps" -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/common" -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/common/boards" -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/common/osal_port" -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/common/util" -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/common/inc" -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/common/stack/src" -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/common/stack/tirtos/inc" -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/common/heapmgr" -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/services/saddr" -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/services/sdata" -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/hal/crypto" -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/hal/platform" -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/hal/rf" -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/fh" -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/high_level" -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/inc" -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/rom" -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/inc/cc13xx" -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/low_level/cc13xx" -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/tracer" -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/ti154stack/apps/sensor" -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/common/nv" -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/common/cui" -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/devices/cc13x2_cc26x2" -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/devices/cc13x2_cc26x2/inc" -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/devices/cc13x2_cc26x2/driverlib" -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/ti/posix/ticlang" -DEI_CLASSIFIER_ALLOCATION_STATIC=1 -DEI_PORTING_TI=1 -DTIMAC_ROM_IMAGE_BUILD -DBoard_EXCLUDE_NVS_EXTERNAL_FLASH -DDeviceFamily_CC13X2 -gdwarf-3 -fdiagnostics-show-option -fshort-enums -munaligned-access -funsigned-char -fcommon -ffunction-sections -fno-strict-aliasing -march=armv7e-m    -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16  -Oz -g   -Dti_sysbios_family_arm_cc26xx_Boot_driverlibVersion=2 -Dti_sysbios_knl_Clock_stopCheckNext__D=TRUE -Dti_sysbios_family_arm_m3_Hwi_enableException__D=TRUE -Dti_sysbios_family_arm_m3_Hwi_disablePriority__D=32U -Dti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__D=0U -Dti_sysbios_knl_Task_minimizeLatency__D=FALSE

BIOS_INC = -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/kernel/tirtos/packages/"
ANNEX_INCS = 
INCS = $(BIOS_INC) $(ANNEX_INCS) -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/source/" -I"/Applications/ti/simplelink_cc13x2_26x2_sdk_5_10_00_48/kernel/tirtos/packages/" -I"/Applications/ti/xdctools_3_62_00_08_core/packages/" -I"../" -I"/packages//"  

CC = /Applications/ti/ccs1110/ccs/tools/compiler/ti-cgt-armllvm_1.3.0.LTS/bin/tiarmclang -c $(CCOPTS)
ASM = /Applications/ti/ccs1110/ccs/tools/compiler/ti-cgt-armllvm_1.3.0.LTS/bin/tiarmclang -c -x assembler-with-cpp $(CCOPTS)
AR = /Applications/ti/ccs1110/ccs/tools/compiler/ti-cgt-armllvm_1.3.0.LTS/bin/tiarmar -c -q

DEL = rm -f
CP = cp -f

define RM
	$(if $(wildcard $1),$(DEL) $1,:)
endef

define ASSEMBLE
	@echo asmm4f $< ...
	@$(ASM) $(BIOS_DEFS) $(XOPTS) $(INCS) $<
endef

define COMPILE
	@echo clm4f $< ...
	@$(CC) $(BIOS_DEFS) $(XOPTS) $(INCS) $<
endef


all: rom_sysbios.am4f

m3_Hwi_asm_gnu.o: family/arm/m3/Hwi_asm_gnu.sv7M makefile
	@-$(call RM, $@)
	$(ASSEMBLE) -o m3_Hwi_asm_gnu.o

m3_Hwi_asm_switch_gnu.o: family/arm/m3/Hwi_asm_switch_gnu.sv7M makefile
	@-$(call RM, $@)
	$(ASSEMBLE) -o m3_Hwi_asm_switch_gnu.o

m3_TaskSupport_asm_gnu.o: family/arm/m3/TaskSupport_asm_gnu.sv7M makefile
	@-$(call RM, $@)
	$(ASSEMBLE) -o m3_TaskSupport_asm_gnu.o


_BIOS.o: BIOS.c makefile
	@-$(call RM, _BIOS.o)
	$(COMPILE) -o _BIOS.o
knl_Clock.o: knl/Clock.c makefile
	@-$(call RM, knl_Clock.o)
	$(COMPILE) -o knl_Clock.o
cfg_app_pm4f_ti_sysbios_knl_Clock_config.o: /Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/configPkg/package/cfg/app_pm4f_ti_sysbios_knl_Clock_config.c makefile
	@-$(call RM, cfg_app_pm4f_ti_sysbios_knl_Clock_config.o)
	$(COMPILE) -o cfg_app_pm4f_ti_sysbios_knl_Clock_config.o
knl_Idle.o: knl/Idle.c makefile
	@-$(call RM, knl_Idle.o)
	$(COMPILE) -o knl_Idle.o
knl_Intrinsics.o: knl/Intrinsics.c makefile
	@-$(call RM, knl_Intrinsics.o)
	$(COMPILE) -o knl_Intrinsics.o
knl_Event.o: knl/Event.c makefile
	@-$(call RM, knl_Event.o)
	$(COMPILE) -o knl_Event.o
cfg_app_pm4f_ti_sysbios_knl_Event_config.o: /Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/configPkg/package/cfg/app_pm4f_ti_sysbios_knl_Event_config.c makefile
	@-$(call RM, cfg_app_pm4f_ti_sysbios_knl_Event_config.o)
	$(COMPILE) -o cfg_app_pm4f_ti_sysbios_knl_Event_config.o
knl_Mailbox.o: knl/Mailbox.c makefile
	@-$(call RM, knl_Mailbox.o)
	$(COMPILE) -o knl_Mailbox.o
cfg_app_pm4f_ti_sysbios_knl_Mailbox_config.o: /Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/configPkg/package/cfg/app_pm4f_ti_sysbios_knl_Mailbox_config.c makefile
	@-$(call RM, cfg_app_pm4f_ti_sysbios_knl_Mailbox_config.o)
	$(COMPILE) -o cfg_app_pm4f_ti_sysbios_knl_Mailbox_config.o
knl_Queue.o: knl/Queue.c makefile
	@-$(call RM, knl_Queue.o)
	$(COMPILE) -o knl_Queue.o
cfg_app_pm4f_ti_sysbios_knl_Queue_config.o: /Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/configPkg/package/cfg/app_pm4f_ti_sysbios_knl_Queue_config.c makefile
	@-$(call RM, cfg_app_pm4f_ti_sysbios_knl_Queue_config.o)
	$(COMPILE) -o cfg_app_pm4f_ti_sysbios_knl_Queue_config.o
knl_Semaphore.o: knl/Semaphore.c makefile
	@-$(call RM, knl_Semaphore.o)
	$(COMPILE) -o knl_Semaphore.o
cfg_app_pm4f_ti_sysbios_knl_Semaphore_config.o: /Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/configPkg/package/cfg/app_pm4f_ti_sysbios_knl_Semaphore_config.c makefile
	@-$(call RM, cfg_app_pm4f_ti_sysbios_knl_Semaphore_config.o)
	$(COMPILE) -o cfg_app_pm4f_ti_sysbios_knl_Semaphore_config.o
knl_Swi.o: knl/Swi.c makefile
	@-$(call RM, knl_Swi.o)
	$(COMPILE) -o knl_Swi.o
cfg_app_pm4f_ti_sysbios_knl_Swi_config.o: /Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/configPkg/package/cfg/app_pm4f_ti_sysbios_knl_Swi_config.c makefile
	@-$(call RM, cfg_app_pm4f_ti_sysbios_knl_Swi_config.o)
	$(COMPILE) -o cfg_app_pm4f_ti_sysbios_knl_Swi_config.o
knl_Task.o: knl/Task.c makefile
	@-$(call RM, knl_Task.o)
	$(COMPILE) -o knl_Task.o
cfg_app_pm4f_ti_sysbios_knl_Task_config.o: /Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/configPkg/package/cfg/app_pm4f_ti_sysbios_knl_Task_config.c makefile
	@-$(call RM, cfg_app_pm4f_ti_sysbios_knl_Task_config.o)
	$(COMPILE) -o cfg_app_pm4f_ti_sysbios_knl_Task_config.o
cfg_app_pm4f_ti_sysbios_knl_Clock_TimerProxy_config.o: /Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/configPkg/package/cfg/app_pm4f_ti_sysbios_knl_Clock_TimerProxy_config.c makefile
	@-$(call RM, cfg_app_pm4f_ti_sysbios_knl_Clock_TimerProxy_config.o)
	$(COMPILE) -o cfg_app_pm4f_ti_sysbios_knl_Clock_TimerProxy_config.o
cfg_app_pm4f_ti_sysbios_knl_Task_SupportProxy_config.o: /Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/configPkg/package/cfg/app_pm4f_ti_sysbios_knl_Task_SupportProxy_config.c makefile
	@-$(call RM, cfg_app_pm4f_ti_sysbios_knl_Task_SupportProxy_config.o)
	$(COMPILE) -o cfg_app_pm4f_ti_sysbios_knl_Task_SupportProxy_config.o
cfg_app_pm4f_ti_sysbios_BIOS_config.o: /Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/configPkg/package/cfg/app_pm4f_ti_sysbios_BIOS_config.c makefile
	@-$(call RM, cfg_app_pm4f_ti_sysbios_BIOS_config.o)
	$(COMPILE) -o cfg_app_pm4f_ti_sysbios_BIOS_config.o
cfg_app_pm4f_ti_sysbios_BIOS_RtsGateProxy_config.o: /Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/configPkg/package/cfg/app_pm4f_ti_sysbios_BIOS_RtsGateProxy_config.c makefile
	@-$(call RM, cfg_app_pm4f_ti_sysbios_BIOS_RtsGateProxy_config.o)
	$(COMPILE) -o cfg_app_pm4f_ti_sysbios_BIOS_RtsGateProxy_config.o
m3_Hwi.o: family/arm/m3/Hwi.c makefile
	@-$(call RM, m3_Hwi.o)
	$(COMPILE) -o m3_Hwi.o
cfg_app_pm4f_ti_sysbios_family_arm_m3_Hwi_config.o: /Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/configPkg/package/cfg/app_pm4f_ti_sysbios_family_arm_m3_Hwi_config.c makefile
	@-$(call RM, cfg_app_pm4f_ti_sysbios_family_arm_m3_Hwi_config.o)
	$(COMPILE) -o cfg_app_pm4f_ti_sysbios_family_arm_m3_Hwi_config.o
m3_TaskSupport.o: family/arm/m3/TaskSupport.c makefile
	@-$(call RM, m3_TaskSupport.o)
	$(COMPILE) -o m3_TaskSupport.o
cfg_app_pm4f_ti_sysbios_family_arm_m3_TaskSupport_config.o: /Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/configPkg/package/cfg/app_pm4f_ti_sysbios_family_arm_m3_TaskSupport_config.c makefile
	@-$(call RM, cfg_app_pm4f_ti_sysbios_family_arm_m3_TaskSupport_config.o)
	$(COMPILE) -o cfg_app_pm4f_ti_sysbios_family_arm_m3_TaskSupport_config.o
cc26xx_Boot.o: family/arm/cc26xx/Boot.c makefile
	@-$(call RM, cc26xx_Boot.o)
	$(COMPILE) -o cc26xx_Boot.o
cc26xx_Timer.o: family/arm/cc26xx/Timer.c makefile
	@-$(call RM, cc26xx_Timer.o)
	$(COMPILE) -o cc26xx_Timer.o
cfg_app_pm4f_ti_sysbios_family_arm_cc26xx_Timer_config.o: /Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/configPkg/package/cfg/app_pm4f_ti_sysbios_family_arm_cc26xx_Timer_config.c makefile
	@-$(call RM, cfg_app_pm4f_ti_sysbios_family_arm_cc26xx_Timer_config.o)
	$(COMPILE) -o cfg_app_pm4f_ti_sysbios_family_arm_cc26xx_Timer_config.o
cc26xx_TimestampProvider.o: family/arm/cc26xx/TimestampProvider.c makefile
	@-$(call RM, cc26xx_TimestampProvider.o)
	$(COMPILE) -o cc26xx_TimestampProvider.o
cfg_app_pm4f_ti_sysbios_family_arm_cc26xx_TimestampProvider_config.o: /Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/configPkg/package/cfg/app_pm4f_ti_sysbios_family_arm_cc26xx_TimestampProvider_config.c makefile
	@-$(call RM, cfg_app_pm4f_ti_sysbios_family_arm_cc26xx_TimestampProvider_config.o)
	$(COMPILE) -o cfg_app_pm4f_ti_sysbios_family_arm_cc26xx_TimestampProvider_config.o
hal_Hwi.o: hal/Hwi.c makefile
	@-$(call RM, hal_Hwi.o)
	$(COMPILE) -o hal_Hwi.o
hal_Hwi_stack.o: hal/Hwi_stack.c makefile
	@-$(call RM, hal_Hwi_stack.o)
	$(COMPILE) -o hal_Hwi_stack.o
hal_Hwi_startup.o: hal/Hwi_startup.c makefile
	@-$(call RM, hal_Hwi_startup.o)
	$(COMPILE) -o hal_Hwi_startup.o
cfg_app_pm4f_ti_sysbios_hal_Hwi_config.o: /Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/configPkg/package/cfg/app_pm4f_ti_sysbios_hal_Hwi_config.c makefile
	@-$(call RM, cfg_app_pm4f_ti_sysbios_hal_Hwi_config.o)
	$(COMPILE) -o cfg_app_pm4f_ti_sysbios_hal_Hwi_config.o
cfg_app_pm4f_ti_sysbios_hal_Hwi_HwiProxy_config.o: /Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/configPkg/package/cfg/app_pm4f_ti_sysbios_hal_Hwi_HwiProxy_config.c makefile
	@-$(call RM, cfg_app_pm4f_ti_sysbios_hal_Hwi_HwiProxy_config.o)
	$(COMPILE) -o cfg_app_pm4f_ti_sysbios_hal_Hwi_HwiProxy_config.o
gates_GateHwi.o: gates/GateHwi.c makefile
	@-$(call RM, gates_GateHwi.o)
	$(COMPILE) -o gates_GateHwi.o
cfg_app_pm4f_ti_sysbios_gates_GateHwi_config.o: /Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/configPkg/package/cfg/app_pm4f_ti_sysbios_gates_GateHwi_config.c makefile
	@-$(call RM, cfg_app_pm4f_ti_sysbios_gates_GateHwi_config.o)
	$(COMPILE) -o cfg_app_pm4f_ti_sysbios_gates_GateHwi_config.o
gates_GateMutexPri.o: gates/GateMutexPri.c makefile
	@-$(call RM, gates_GateMutexPri.o)
	$(COMPILE) -o gates_GateMutexPri.o
gates_GateMutex.o: gates/GateMutex.c makefile
	@-$(call RM, gates_GateMutex.o)
	$(COMPILE) -o gates_GateMutex.o
cfg_app_pm4f_ti_sysbios_gates_GateMutex_config.o: /Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/configPkg/package/cfg/app_pm4f_ti_sysbios_gates_GateMutex_config.c makefile
	@-$(call RM, cfg_app_pm4f_ti_sysbios_gates_GateMutex_config.o)
	$(COMPILE) -o cfg_app_pm4f_ti_sysbios_gates_GateMutex_config.o
heaps_HeapMem.o: heaps/HeapMem.c makefile
	@-$(call RM, heaps_HeapMem.o)
	$(COMPILE) -o heaps_HeapMem.o
cfg_app_pm4f_ti_sysbios_heaps_HeapMem_config.o: /Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/configPkg/package/cfg/app_pm4f_ti_sysbios_heaps_HeapMem_config.c makefile
	@-$(call RM, cfg_app_pm4f_ti_sysbios_heaps_HeapMem_config.o)
	$(COMPILE) -o cfg_app_pm4f_ti_sysbios_heaps_HeapMem_config.o
heaps_HeapTrack.o: heaps/HeapTrack.c makefile
	@-$(call RM, heaps_HeapTrack.o)
	$(COMPILE) -o heaps_HeapTrack.o
cfg_app_pm4f_ti_sysbios_heaps_HeapTrack_config.o: /Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/configPkg/package/cfg/app_pm4f_ti_sysbios_heaps_HeapTrack_config.c makefile
	@-$(call RM, cfg_app_pm4f_ti_sysbios_heaps_HeapTrack_config.o)
	$(COMPILE) -o cfg_app_pm4f_ti_sysbios_heaps_HeapTrack_config.o
heaps_HeapCallback.o: heaps/HeapCallback.c makefile
	@-$(call RM, heaps_HeapCallback.o)
	$(COMPILE) -o heaps_HeapCallback.o
cfg_app_pm4f_ti_sysbios_heaps_HeapMem_Module_GateProxy_config.o: /Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/configPkg/package/cfg/app_pm4f_ti_sysbios_heaps_HeapMem_Module_GateProxy_config.c makefile
	@-$(call RM, cfg_app_pm4f_ti_sysbios_heaps_HeapMem_Module_GateProxy_config.o)
	$(COMPILE) -o cfg_app_pm4f_ti_sysbios_heaps_HeapMem_Module_GateProxy_config.o
runtime_xdc_noinit.o: xdc/runtime/xdc_noinit.c makefile
	@-$(call RM, runtime_xdc_noinit.o)
	$(COMPILE) -o runtime_xdc_noinit.o
runtime_Assert.o: xdc/runtime/Assert.c makefile
	@-$(call RM, runtime_Assert.o)
	$(COMPILE) -o runtime_Assert.o
runtime_Core-mem.o: xdc/runtime/Core-mem.c makefile
	@-$(call RM, runtime_Core-mem.o)
	$(COMPILE) -o runtime_Core-mem.o
runtime_Core-smem.o: xdc/runtime/Core-smem.c makefile
	@-$(call RM, runtime_Core-smem.o)
	$(COMPILE) -o runtime_Core-smem.o
runtime_Core-label.o: xdc/runtime/Core-label.c makefile
	@-$(call RM, runtime_Core-label.o)
	$(COMPILE) -o runtime_Core-label.o
runtime_Core-params.o: xdc/runtime/Core-params.c makefile
	@-$(call RM, runtime_Core-params.o)
	$(COMPILE) -o runtime_Core-params.o
runtime_Diags.o: xdc/runtime/Diags.c makefile
	@-$(call RM, runtime_Diags.o)
	$(COMPILE) -o runtime_Diags.o
runtime_Error.o: xdc/runtime/Error.c makefile
	@-$(call RM, runtime_Error.o)
	$(COMPILE) -o runtime_Error.o
cfg_app_pm4f_xdc_runtime_Error_config.o: /Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/configPkg/package/cfg/app_pm4f_xdc_runtime_Error_config.c makefile
	@-$(call RM, cfg_app_pm4f_xdc_runtime_Error_config.o)
	$(COMPILE) -o cfg_app_pm4f_xdc_runtime_Error_config.o
runtime_Gate.o: xdc/runtime/Gate.c makefile
	@-$(call RM, runtime_Gate.o)
	$(COMPILE) -o runtime_Gate.o
runtime_Log.o: xdc/runtime/Log.c makefile
	@-$(call RM, runtime_Log.o)
	$(COMPILE) -o runtime_Log.o
runtime_Memory.o: xdc/runtime/Memory.c makefile
	@-$(call RM, runtime_Memory.o)
	$(COMPILE) -o runtime_Memory.o
cfg_app_pm4f_xdc_runtime_Memory_config.o: /Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/configPkg/package/cfg/app_pm4f_xdc_runtime_Memory_config.c makefile
	@-$(call RM, cfg_app_pm4f_xdc_runtime_Memory_config.o)
	$(COMPILE) -o cfg_app_pm4f_xdc_runtime_Memory_config.o
runtime_Registry.o: xdc/runtime/Registry.c makefile
	@-$(call RM, runtime_Registry.o)
	$(COMPILE) -o runtime_Registry.o
runtime_Startup.o: xdc/runtime/Startup.c makefile
	@-$(call RM, runtime_Startup.o)
	$(COMPILE) -o runtime_Startup.o
runtime_System.o: xdc/runtime/System.c makefile
	@-$(call RM, runtime_System.o)
	$(COMPILE) -o runtime_System.o
cfg_app_pm4f_xdc_runtime_System_config.o: /Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/configPkg/package/cfg/app_pm4f_xdc_runtime_System_config.c makefile
	@-$(call RM, cfg_app_pm4f_xdc_runtime_System_config.o)
	$(COMPILE) -o cfg_app_pm4f_xdc_runtime_System_config.o
runtime_SysCallback.o: xdc/runtime/SysCallback.c makefile
	@-$(call RM, runtime_SysCallback.o)
	$(COMPILE) -o runtime_SysCallback.o
cfg_app_pm4f_xdc_runtime_SysCallback_config.o: /Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/configPkg/package/cfg/app_pm4f_xdc_runtime_SysCallback_config.c makefile
	@-$(call RM, cfg_app_pm4f_xdc_runtime_SysCallback_config.o)
	$(COMPILE) -o cfg_app_pm4f_xdc_runtime_SysCallback_config.o
runtime_Text.o: xdc/runtime/Text.c makefile
	@-$(call RM, runtime_Text.o)
	$(COMPILE) -o runtime_Text.o
runtime_Timestamp.o: xdc/runtime/Timestamp.c makefile
	@-$(call RM, runtime_Timestamp.o)
	$(COMPILE) -o runtime_Timestamp.o
cfg_app_pm4f_xdc_runtime_Timestamp_config.o: /Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/configPkg/package/cfg/app_pm4f_xdc_runtime_Timestamp_config.c makefile
	@-$(call RM, cfg_app_pm4f_xdc_runtime_Timestamp_config.o)
	$(COMPILE) -o cfg_app_pm4f_xdc_runtime_Timestamp_config.o
cfg_app_pm4f_xdc_runtime_Memory_HeapProxy_config.o: /Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/configPkg/package/cfg/app_pm4f_xdc_runtime_Memory_HeapProxy_config.c makefile
	@-$(call RM, cfg_app_pm4f_xdc_runtime_Memory_HeapProxy_config.o)
	$(COMPILE) -o cfg_app_pm4f_xdc_runtime_Memory_HeapProxy_config.o
cfg_app_pm4f_xdc_runtime_System_Module_GateProxy_config.o: /Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/configPkg/package/cfg/app_pm4f_xdc_runtime_System_Module_GateProxy_config.c makefile
	@-$(call RM, cfg_app_pm4f_xdc_runtime_System_Module_GateProxy_config.o)
	$(COMPILE) -o cfg_app_pm4f_xdc_runtime_System_Module_GateProxy_config.o
cfg_app_pm4f_xdc_runtime_Timestamp_SupportProxy_config.o: /Users/das/workspace_test_import/ei_sensor_CC1352P1_LAUNCHXL_tirtos_ticlang/Release/configPkg/package/cfg/app_pm4f_xdc_runtime_Timestamp_SupportProxy_config.c makefile
	@-$(call RM, cfg_app_pm4f_xdc_runtime_Timestamp_SupportProxy_config.o)
	$(COMPILE) -o cfg_app_pm4f_xdc_runtime_Timestamp_SupportProxy_config.o

rom_sysbios.am4f: m3_Hwi_asm_gnu.o m3_Hwi_asm_switch_gnu.o m3_TaskSupport_asm_gnu.o _BIOS.o knl_Clock.o cfg_app_pm4f_ti_sysbios_knl_Clock_config.o knl_Idle.o knl_Intrinsics.o knl_Event.o cfg_app_pm4f_ti_sysbios_knl_Event_config.o knl_Mailbox.o cfg_app_pm4f_ti_sysbios_knl_Mailbox_config.o knl_Queue.o cfg_app_pm4f_ti_sysbios_knl_Queue_config.o knl_Semaphore.o cfg_app_pm4f_ti_sysbios_knl_Semaphore_config.o knl_Swi.o cfg_app_pm4f_ti_sysbios_knl_Swi_config.o knl_Task.o cfg_app_pm4f_ti_sysbios_knl_Task_config.o cfg_app_pm4f_ti_sysbios_knl_Clock_TimerProxy_config.o cfg_app_pm4f_ti_sysbios_knl_Task_SupportProxy_config.o cfg_app_pm4f_ti_sysbios_BIOS_config.o cfg_app_pm4f_ti_sysbios_BIOS_RtsGateProxy_config.o m3_Hwi.o cfg_app_pm4f_ti_sysbios_family_arm_m3_Hwi_config.o m3_TaskSupport.o cfg_app_pm4f_ti_sysbios_family_arm_m3_TaskSupport_config.o cc26xx_Boot.o cc26xx_Timer.o cfg_app_pm4f_ti_sysbios_family_arm_cc26xx_Timer_config.o cc26xx_TimestampProvider.o cfg_app_pm4f_ti_sysbios_family_arm_cc26xx_TimestampProvider_config.o hal_Hwi.o hal_Hwi_stack.o hal_Hwi_startup.o cfg_app_pm4f_ti_sysbios_hal_Hwi_config.o cfg_app_pm4f_ti_sysbios_hal_Hwi_HwiProxy_config.o gates_GateHwi.o cfg_app_pm4f_ti_sysbios_gates_GateHwi_config.o gates_GateMutexPri.o gates_GateMutex.o cfg_app_pm4f_ti_sysbios_gates_GateMutex_config.o heaps_HeapMem.o cfg_app_pm4f_ti_sysbios_heaps_HeapMem_config.o heaps_HeapTrack.o cfg_app_pm4f_ti_sysbios_heaps_HeapTrack_config.o heaps_HeapCallback.o cfg_app_pm4f_ti_sysbios_heaps_HeapMem_Module_GateProxy_config.o runtime_xdc_noinit.o runtime_Assert.o runtime_Core-mem.o runtime_Core-smem.o runtime_Core-label.o runtime_Core-params.o runtime_Diags.o runtime_Error.o cfg_app_pm4f_xdc_runtime_Error_config.o runtime_Gate.o runtime_Log.o runtime_Memory.o cfg_app_pm4f_xdc_runtime_Memory_config.o runtime_Registry.o runtime_Startup.o runtime_System.o cfg_app_pm4f_xdc_runtime_System_config.o runtime_SysCallback.o cfg_app_pm4f_xdc_runtime_SysCallback_config.o runtime_Text.o runtime_Timestamp.o cfg_app_pm4f_xdc_runtime_Timestamp_config.o cfg_app_pm4f_xdc_runtime_Memory_HeapProxy_config.o cfg_app_pm4f_xdc_runtime_System_Module_GateProxy_config.o cfg_app_pm4f_xdc_runtime_Timestamp_SupportProxy_config.o
	@-$(call RM, $@)
	@echo arm4f $^ ...
	@$(AR) $@ $^

clean:
	@$(DEL) ../makefile.libs
	@-$(call RM, *)
