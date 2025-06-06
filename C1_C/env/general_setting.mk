####################################################################################################
#
# Makefile for general setting 
# (c) Copyright by Hydac System GmbH, all rights reserved
#
# PROJECT: 		Over all
# Hardware: 	Windows XP
#
# FILE VERSION INFORMATION:
#	$Filename:	general_setting.mk
#   $Version:	1.0 
#   $Date:		26.03.2019
#
####################################################################################################

####################################################################################################
# TTC3X compiler path
####################################################################################################
export TSK_3X_PATH	    = C:\Program Files (x86)\TASKING\C166-VX v3.0r3

####################################################################################################
# TTC5X compiler path
####################################################################################################
export TSK_5X_PATH	    = C:\Program Files (x86)\TASKING\C166-VX v3.0r3

####################################################################################################
# TTC7X compiler path
####################################################################################################
export TSK_7X_PATH	    = C:\Program Files (x86)\TASKING\C166-VX v3.0r3

####################################################################################################
# TTC5XX compiler path
####################################################################################################
export TI_5XX_PATH	    = C:\ti\ccsv6\tools\compiler\arm_5.1.6

####################################################################################################
# OBE/ICU compiler path
####################################################################################################
export IAR_OBE_PATH	    = C:\Program Files (x86)\IAR Systems\Embedded Workbench 7.8\arm

####################################################################################################
# OBE/ICU compiler path
####################################################################################################
export IAR_ICU_PATH	    = C:\Program Files (x86)\IAR Systems\Embedded Workbench 8.3\arm

####################################################################################################
# OBE/ICU/MEB compiler path
####################################################################################################
export GCC_ARM_PATH	    = C:\Program Files (x86)\GNU Tools ARM Embedded\5.4 2016q3

####################################################################################################
# Emulation compiler path - for all Targets 
####################################################################################################
export MINGW_PATH = C:\Match\Tools\MinGW

####################################################################################################
# Pc-Lint path
####################################################################################################
export PCLINT_PATH = C:\Match\Tools\Lint

####################################################################################################
# Pc-Lint path
####################################################################################################
export SPLINT_PATH      = L:\Splint

####################################################################################################
# HYDAC tool expansion
####################################################################################################
HYPATH = .\env\_utility

export HYTILINK     = $(HYPATH)\HyTiBuildLink.exe
export HYREBUILD    = $(HYPATH)\HyRebuild.exe
export HYMAPSCAN    = $(HYPATH)\HyMapScan.exe
export HYTESTSUITE  = $(HYPATH)\HyTestSuite.exe
export HYVALIDATE   = $(HYPATH)\HyValidate.exe
export HYEND        = $(HYPATH)\HyEnd.exe
export HYENDFAIL    = $(HYPATH)\HyEndFail.exe
export HYTERMINAT   = $(HYPATH)\HyTerminat.exe
export HYALIGN2APP	= $(HYPATH)\HyMpuMemAlign.exe
export HYPARSER     = $(HYPATH)\HyParser.exe
export HYDEPCLEANER = $(HYPATH)\HyDependencyCleaner.exe

