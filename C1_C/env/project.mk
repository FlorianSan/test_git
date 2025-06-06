####################################################################################################
#
# Makefile for project nameing
# (c) Copyright by Hydac Software GmbH, all rights reserved
#
# DESCRIPTION:  project.mk 
# PROJECT:      Hydac Project 
#
# FILE VERSION INFORMATION:
#	$Filename:  project.mk
#	$Version:   9.0
#	$Build No:  0
#	$Date:      12.03.2021
#
####################################################################################################

# Output file name
OUTPUT_NAME     =$(ECU_TYPE)

# Enable Paralell build (1..8)
BUILD_PARALLEL  =8

# Is a Release YES, or it isn't a Release-Version NO
RELEASE			=NO

# Debug info is active YES, or it is inactiv NO [only for the hardware - No effect on the TTC5xx, use on the TTC5xx the compiler switch: COMPILER_SWITCH_DEBUG_ON]
DEBUG_INFO      =NO

# Lint Checker isactive YES, or isn't active NO 
LINT_CHECK      =NO

# Lint Checker Program  PCLINT or SPLINT
LINT_PROGRAM    =PCLINT

# Lint add to the existing rules [LINT_RULE +=...] over write the existing rules [LINT_RULE =...]
LINT_RULE       +=-v 

# Hy-Parser is in use YES, or isn't in use NO
HY_PARSER       =NO

# Hy-Parser error causes make abort YES/NO
HY_PARSER_EXIT  =NO

# HyDependencyCleaner is active YES, or isn't active NO 
DEPCLEAN 		=NO

# Python Suite is active YES, or it is inactiv NO 
PYTHON_SUITE    =NO

# Python Version PYH324(Python 3.2.4) or PYH387(Python 3.8.7)
PYTHON_VER      =PYH324

# Peak Lin bus driver, is active YES, or isn't active NO 
PEAK_LIN_BUS    =NO

# use MPU is active YES, or isn't active NO  [TTC5xx only]
MPU_LIB_USE     =NO

# set used HW generation to be generated to AppDB(1-> HW Version <=1.05,  2 -> HW Version >= 1.08)
TTC5XX_HW_GEN   =2

# C++ warnings report, is active YES, or isn't active NO (need for the tasking compiler)
CPP_TSK_WARN    =NO

# Pre make command for the hw build 
HW_PRE_MAKE     = 

# Post make command for the hw build
HW_POST_MAKE     =

# Pre make command for the pc build 
PC_PRE_MAKE     = 

# Post make command for the pc build
PC_POST_MAKE     =
