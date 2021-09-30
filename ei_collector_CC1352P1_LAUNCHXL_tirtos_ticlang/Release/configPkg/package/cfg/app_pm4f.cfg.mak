# invoke SourceDir generated makefile for app.pm4f
app.pm4f: .libraries,app.pm4f
.libraries,app.pm4f: package/cfg/app_pm4f.xdl
	$(MAKE) -f /Users/davidschwarz/workspace-dos/ei_collector_CC1352P1_LAUNCHXL_tirtos_ticlang/src/makefile.libs

clean::
	$(MAKE) -f /Users/davidschwarz/workspace-dos/ei_collector_CC1352P1_LAUNCHXL_tirtos_ticlang/src/makefile.libs clean

