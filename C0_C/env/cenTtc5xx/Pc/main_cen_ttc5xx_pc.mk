####################################################################################################
#
# Makefile for MinGw
# (c) Copyright by Hydac System GmbH, all rights reserved
#
# DESCRIPTION:  makefile 
# PROJECT:      Hydac Project 
# Note:         for windows commands '\' and for the pur make process '/'
#
# FILE VERSION INFORMATION:
#	$Filename:  main_cen_ttc5xx_pc.mk
#	$Version:   9.0
#	$Build No:  0
#	$Date:      12.03.2021
#
####################################################################################################

####################################################################################################
# Configuration
####################################################################################################

ifeq ($(ECU_TYPE),TTC580)
TARGET_BIG   =TTC580
TARGET_SMA   =ttc580
endif
ifeq ($(ECU_TYPE),TTC540)
TARGET_BIG   =TTC540
TARGET_SMA   =ttc540
endif
ifeq ($(ECU_TYPE),TTC520)
TARGET_BIG   =TTC520
TARGET_SMA   =ttc520
endif
ifeq ($(ECU_TYPE),TTC510)
TARGET_BIG   =TTC510
TARGET_SMA   =ttc510
endif
ifeq ($(ECU_TYPE),TTC508)
TARGET_BIG   =TTC508
TARGET_SMA   =ttc508
endif
ifeq ($(ECU_TYPE),TTC590)
TARGET_BIG   =TTC590
TARGET_SMA   =ttc590
endif

####################################################################################################
# Include makefiles
####################################################################################################

# a need for the sub_cen_*.mk
LINT_PATH =.\env\..
ADD_BSP_INC =

ROOT_PATH    = .
OUT_PATH     =_debug/cen_pc/$(TARGET_BIG)
VAR          =1

### path to mpu dummy lib ###
MPULIB_TARGET =$(ROOT_PATH)/env/cenTtc5xx/Pc/mpulib_1/CEN_$(TARGET_BIG)_PC_MPUDUMMY.a
include env/project.mk
include env/cenTtc5xx/Pc/_setting/cen_ttc5xx_pc_compiler_settings.mk
include env/cenTtc5xx/Pc/sub_cen_ttc5xx_pc.mk
include env/general_setting.mk
include env/_com/general.mk



####################################################################################################
# Include paths to header filesDPDrv
####################################################################################################

AS_INCLUDES  =

CC_INCLUDES  =$(SUB_CC_INCLUDES) -I.

####################################################################################################
# Path to libraries which should be included
####################################################################################################

LIB_PC_INTERN += $(MPULIB_TARGET) 

LIB_CORE       = $(ROOT_PATH)/include/_lib/$(TARGET_BIG)/pc/core/CEN_$(TARGET_BIG)_PC_CoreBasStd.a  

LIB_EXT        = $(SUB_LIB_EXT)

####################################################################################################
# List of object files to create
####################################################################################################

OBJECTS   = $(SUB_OBJECTS)

###################################################################################################
# Compiler, assembler and linker options
###################################################################################################

CC_FLAGS        += -Wall -O0 -fshort-enums
AS_FLAGS        +=
LINKER_FLAGS    += -Wl,-Map,$(OUT_PATH)/$(OUTPUT_NAME).map

####################################################################################################
# DON'T EDIT SOMETHING BELOW THIS LINE
####################################################################################################

TARGET = $(OUT_PATH)/$(OUTPUT_NAME)

REBUILD_PARM = -pc -$(TARGET_BIG) -rv$(RELEASE_VER) -pj$(OUTPUT_NAME) -s$(ROOT_PATH)\env\cenTtc5xx\Pc\_setting\cen_$(TARGET_SMA)_pc_autoconfig.ach -t$(ROOT_PATH)\src\autoconfig.h

HYDEPCLE_REBUILD_CONSTRAINTS = $(ROOT_PATH)/env/_com/lint/hydepcleaner/rebuilder_constraints.txt
HYDEPCLE_REBUILD_ARGS        = -checkChanges

all:
	@$(HYTERMINAT) $(OUTPUT_NAME).exe
	$(HYREBUILD) $(REBUILD_PARM) -check 
	@$(HYVALIDATE) -$(RELEASE) -env  -uenv\_com 
	@$(HYVALIDATE) -$(RELEASE) -env  -uenv\_utility 
	@$(HYVALIDATE) -$(RELEASE) -env  -uenv\cenTtc5xx\Pc 
	@$(HYVALIDATE) -$(RELEASE) -lib  -uinclude\_lib\$(TARGET_BIG)\pc -iinclude -pc
	@$(HYVALIDATE) -$(RELEASE) -file -usrc\_app\AUTO_CEN_$(TARGET_BIG)\_auto.ucc   -usrc\_app\AUTO_CEN_TTC5XX\_auto.ucc
	@$(HYVALIDATE) -$(RELEASE) -fileop -usrc\_app\AUTO_CEN_$(TARGET_BIG)\_auto.ucc -usrc\_app\AUTO_CEN_TTC5XX_2APP\_auto.ucc	       
	@$(HYPARSER_CALL) 
	@$(HYDEPCLEANER) $(ROOT_PATH) -$(DEPCLEAN) TTC5XX $(TARGET_BIG) $(HYDEPCLE_REBUILD_CONSTRAINTS) $(HYDEPCLE_REBUILD_ARGS) $(OBJECTS)
	@$(HYREBUILD) $(REBUILD_PARM) -$(DEPCLEAN) -change 
	@$(PC_PRE_MAKE)
	@env\_com\make -s -f env\cenTtc5xx\Pc\main_cen_ttc5xx_pc.mk ECU_TYPE=$(ECU_TYPE) $(TARGET) -j$(BUILD_PARALLEL) 
	@$(PC_POST_MAKE)
	@$(MINGW_PATH)\bin\size $(TARGET).exe > $(TARGET).map
	@$(HYMAPSCAN) $(TARGET).map PC
	@$(LINT)
	@$(HYEND) $(RELEASE)

clean:
	@$(HYREBUILD) $(REBUILD_PARM)

$(TARGET): $(OBJECTS)
	$(CC) 	-g -o $(TARGET) $(OBJECTS) $(LIB_EXT) $(LIB_CORE) $(LIB_EXT) $(LIB_PC_INTERN)

$(OUT_PATH)/%.o: %.S  
	@echo compiling: $<
	@$(CC) -g -c -o $@ $< $(AS_FLAGS) $(AS_INCLUDES)

$(OUT_PATH)/%.o: %.ss 
	@echo compiling: $<
	@$(CC) -g -c -o $@ $< $(AS_FLAGS) $(AS_INCLUDES)

$(OUT_PATH)/%.o: %.c
	@echo compiling: $<
	@$(CC) -g -c -o $@ $< $(CC_FLAGS) $(CC_INCLUDES)
	
$(OUT_PATH)/%.o: %.cpp
	@echo compiling: $<
	@$(CPP) -g -c -o $@ $< $(CC_FLAGS) $(CC_INCLUDES)
