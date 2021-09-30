#
_XDCBUILDCOUNT = 
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = /Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/source;/Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/kernel/tirtos/packages
override XDCROOT = /Users/davidschwarz/ti/xdctools_3_62_00_08_core
override XDCBUILDCFG = ./config.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = 
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = /Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/source;/Users/davidschwarz/git/simplelink_cc13x2_26x2_sdk_5_10_00_48/kernel/tirtos/packages;/Users/davidschwarz/ti/xdctools_3_62_00_08_core/packages;..
HOSTOS = MacOS
endif
