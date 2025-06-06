####################################################################################################
#
# Makefile for Ti
# (c) Copyright by Hydac System GmbH, all rights reserved
#
# DESCRIPTION:  makefile 
# PROJECT:      Hydac Project 
# Note:         for windows commands '\' and for the pur make process '/'
#
# FILE VERSION INFORMATION:
#	$Filename:  main_cen_ttc5xx_hw.mk
#	$Version:   9.0
#	$Build No:  0
#	$Date:      12.03.2021
#
####################################################################################################

####################################################################################################
# Configuration
####################################################################################################

include env/project.mk

ifeq ($(ECU_TYPE),TTC580)
TARGET_BIG         =TTC580
TARGET_SMA         =ttc580
	ifeq ($(TTC5XX_HW_GEN),1)
	#1st gen
		DOWNLOADER_HW_TYPE = 0x00400807
	else
	#2nd gen
		DOWNLOADER_HW_TYPE = 0x00201007
	endif
endif

ifeq ($(ECU_TYPE),TTC540)
TARGET_BIG         =TTC540
TARGET_SMA         =ttc540
	ifeq ($(TTC5XX_HW_GEN),1)
	#1st gen
		DOWNLOADER_HW_TYPE =0x00600807
	else
	#2nd gen
		DOWNLOADER_HW_TYPE = 0x00402007
	endif
endif

ifeq ($(ECU_TYPE),TTC520)
TARGET_BIG         = TTC520
TARGET_SMA		   = ttc520
	ifeq ($(TTC5XX_HW_GEN),1)
	#1st gen
		DOWNLOADER_HW_TYPE = 0x00A00807
	else
	#2nd gen
		DOWNLOADER_HW_TYPE = 0x00602007
	endif
endif

ifeq ($(ECU_TYPE),TTC510)
TARGET_BIG         = TTC510
TARGET_SMA		   = ttc510
	ifeq ($(TTC5XX_HW_GEN),1)
	#1st gen
		DOWNLOADER_HW_TYPE = 0x00C00807
	else
	#2nd gen
		DOWNLOADER_HW_TYPE = 0x00802007
	endif
endif

ifeq ($(ECU_TYPE),TTC590)
TARGET_BIG			= TTC590
TARGET_SMA			= ttc590
DOWNLOADER_HW_TYPE	= 0x00201C07
endif

ifeq ($(ECU_TYPE),TTC508)
TARGET_BIG			= TTC508
TARGET_SMA			= ttc508
DOWNLOADER_HW_TYPE	= 0x00201807
endif


# a need for the sub_cen_*.mk
LINT_PATH =.\env\..
ADD_BSP_INC = -I.\env\cenTtc5xx\Hw\$(RELEASE_VER)\inc


ROOT_PATH     = .
OUT_DIR       =$(TARGET_BIG)
OUT_PATH_WIN  =_debug\cen_hw\$(OUT_DIR)
OUT_PATH      =_debug/cen_hw/$(OUT_DIR)
RELEASE_VER   =V3_04_01
PRJ_DIR       =$(ROOT_PATH)\env\cenTtc5xx\Hw\$(RELEASE_VER)

TARGET_ENV_DIR 		=cenTtc5xx/Hw
LINKER_SCRIPT		=mem_ttc500_bl.lsf
LINKER_SCRIPT_MPU	=mem_ttc500_bl_mpu.lsf
LINKER_SCRIPT_MOD	=mem_ttc500_bl_changed.lsf

### path to mpu libs +++
MPULIB_TARGET 		=$(ROOT_PATH)/env/cenTtc5xx/Hw/mpulib_1/CEN_$(TARGET_BIG)_HW_MPU.lib
MPULIB_DUMMY_TARGET =$(ROOT_PATH)/env/cenTtc5xx/Hw/mpulib_1/CEN_$(TARGET_BIG)_HW_MPUDUMMY.lib

BOOTLOADER_VERSION  = 3.00

include $(PRJ_DIR)/com/cen_ttc580_hw_compiler_settings.mk
include env/cenTtc5xx/Hw/sub_cen_ttc5xx_hw.mk
include env/_com/general.mk


####################################################################################################
# Include paths to header filesDPDrv
####################################################################################################

AS_INCLUDES =

CC_INCLUDES = -I$(TI_INC) \
			  -I$(ROOT_PATH)/env/cenTtc5xx/Hw/$(RELEASE_VER)/inc \
			   $(SUB_CC_INCLUDES)

### hcp library file ###
LIB_EXT     =  $(SUB_LIB_EXT)

### ttc library files ###
HY_IO_LIB   =  $(ROOT_PATH)/env/cenTtc5xx/Hw/$(RELEASE_VER)/lib/bsp.lib \
			   $(ROOT_PATH)/env/cenTtc5xx/Hw/$(RELEASE_VER)/lib/ttc500.lib \
			   $(ROOT_PATH)/env/cenTtc5xx/Hw/$(RELEASE_VER)/lib/rtsv7R4_T_be_v3D16_eabi.lib
			 
ifeq ($(MPU_LIB_USE),YES)
HY_IO_LIB   += -I$(MPULIB_TARGET)
else
HY_IO_LIB   += -I$(MPULIB_DUMMY_TARGET)
endif

### objects files ###
OBJECTS  = $(SUB_OBJECTS)

###################################################################################################
# Compiler, assembler and linker options
###################################################################################################

#238-D: controlling expression is constant e.g. while( TRUE )
#270-D: declaration may not appear after executable statement in block
#193-D: type qualifier is meaningless on cast typ
#97-D:  a translation unit must contain at least one declarat
#370-D  class "<unnamed>" defines no constructor to initialize the following: xxx

TI_WARN         =--diag_suppress=238 --diag_suppress=270 --diag_suppress=193 --diag_suppress=551 --diag_suppress=84 --diag_suppress=370

CC_FLAGS        += $(TI_WARN)
AS_FLAGS        +=
LINKER_FLAGS    +=

####################################################################################################
# DON'T EDIT SOMETHING BELOW THIS LINE
####################################################################################################

TARGET = $(OUT_PATH)/$(OUTPUT_NAME)

REBUILD_PARM = -hw -$(TARGET_BIG) -rv$(RELEASE_VER) -pj$(OUTPUT_NAME) -s$(ROOT_PATH)\env\cenTtc5xx\Hw\_setting\cen_$(TARGET_SMA)_hw_autoconfig.ach -t$(ROOT_PATH)\src\autoconfig.h

HYDEPCLE_REBUILD_CONSTRAINTS = $(ROOT_PATH)/env/_com/lint/hydepcleaner/rebuilder_constraints.txt
HYDEPCLE_REBUILD_ARGS        = -hw -checkChanges




all:
	$(HYREBUILD) $(REBUILD_PARM) -check
	@$(HYVALIDATE) -$(RELEASE) -env    -uenv\_com 
	@$(HYVALIDATE) -$(RELEASE) -env    -uenv\_utility 
	@$(HYVALIDATE) -$(RELEASE) -env    -uenv\cenTtc5xx\Hw 
	@$(HYVALIDATE) -$(RELEASE) -lib    -uinclude\_lib\$(TARGET_BIG)\hw -iinclude -hw
	@$(HYVALIDATE) -$(RELEASE) -file   -usrc\_app\AUTO_CEN_$(TARGET_BIG)\_auto.ucc -usrc\_app\AUTO_CEN_TTC5XX\_auto.ucc 
	@$(HYVALIDATE) -$(RELEASE) -fileop -usrc\_app\AUTO_CEN_$(TARGET_BIG)\_auto.ucc -usrc\_app\AUTO_CEN_TTC5XX_2APP\_auto.ucc
	@$(HYPARSER_CALL) 
	@$(HYDEPCLEANER) $(ROOT_PATH) -$(DEPCLEAN) TTC5XX $(TARGET_BIG) $(HYDEPCLE_REBUILD_CONSTRAINTS) $(HYDEPCLE_REBUILD_ARGS) $(OBJECTS)
	@$(HYREBUILD) $(REBUILD_PARM) -$(DEPCLEAN) -change
	@$(HW_PRE_MAKE)
	@env\_com\make -s -f env\cenTtc5xx\Hw\main_cen_ttc5xx_hw.mk ECU_TYPE=$(ECU_TYPE) $(TARGET) -j$(BUILD_PARALLEL)  
	@$(HW_POST_MAKE)
	@$(HYMAPSCAN) $(OUT_PATH)\main.map $(TARGET_BIG)
	@echo ***
	@$(LINT)
	@$(RM) -f $(ROOT_PATH)\nowECC.log
	@$(RM) -f $(ROOT_PATH)\AddAPDB.html
	@$(HYEND) $(RELEASE)


clean:
	$(HYREBUILD) $(REBUILD_PARM)
	$(RM) -f $(OUT_PATH_WIN)\*.map
	$(RM) -f $(OUT_PATH_WIN)\*.hex
	$(RM) -f $(OUT_PATH_WIN)\*.out
	

ifeq ($(MPU_LIB_USE),YES)

$(TARGET): $(OBJECTS)
	@$(HYTILINK) \
	-lkecu $(OUT_DIR) \
	-lkout .\$(OUT_PATH)\src \
	-lkobj $(OBJECTS) \
	-lklib $(LIB_EXT) $(HY_IO_LIB) \
	-lkset env/$(TARGET_ENV_DIR)/$(RELEASE_VER)/bsp/$(LINKER_SCRIPT_MPU) \
	-lkset -m _debug/cen_hw/$(OUT_DIR)/main.map \
	-lkset -x --rom_model --be32 --issue_remarks --warn_sections --display_error_number --diag_suppress=10068 --mapfile_contents=all 
	$(CC)  --emit_warnings_as_errors --run_linker $(OUT_PATH)/src/build.link
	$(RM) -f _debug/cen_hw/$(OUT_DIR)/$(LINKER_SCRIPT_MOD)
	@$(HYALIGN2APP) \
	env/$(TARGET_ENV_DIR)/$(RELEASE_VER)/bsp/$(LINKER_SCRIPT_MPU) \
	_debug/cen_hw/$(OUT_DIR)/$(LINKER_SCRIPT_MOD) \
	_debug/cen_hw/$(OUT_DIR)/main.map
	@$(HYTILINK) \
	-lkecu $(OUT_DIR) \
	-lkout .\$(OUT_PATH)\src \
	-lkobj $(OBJECTS) \
	-lklib $(LIB_EXT) $(HY_IO_LIB) \
	-lkset _debug/cen_hw/$(OUT_DIR)/$(LINKER_SCRIPT_MOD) \
	-lkset -m _debug/cen_hw/$(OUT_DIR)/main.map \
	-lkset -x --rom_model --be32 --issue_remarks --warn_sections --display_error_number --diag_suppress=10068 --mapfile_contents=all 
	$(CC)  --emit_warnings_as_errors --run_linker $(OUT_PATH)/src/build.link
	$(HEX) --quiet --intel --romwidth=32 $(OUT_PATH)\src\main.out -o $(OUT_PATH)\$(OUTPUT_NAME).hex
	@echo  ---------------------------------
	@echo   Creating APDB...
	@echo  ---------------------------------
	@$(RM) -f $(OUT_PATH_WIN)\$(OUTPUT_NAME).hex.addAPDB
	@$(PRJ_DIR)\env\AddAPDB.exe -t $(DOWNLOADER_HW_TYPE) -v $(BOOTLOADER_VERSION) -w 32 -f I -k $(PRJ_DIR)\env\public.key $(PRJ_DIR)\env\targets.xml $(OUT_PATH_WIN)\$(OUTPUT_NAME).hex $(OUT_PATH_WIN)\$(OUTPUT_NAME).hex.addAPDB
	@$(COPY) $(OUT_PATH_WIN)\$(OUTPUT_NAME).hex.addAPDB $(OUT_PATH_WIN)\$(OUTPUT_NAME).hex
	@$(RM) -f $(OUT_PATH_WIN)\$(OUTPUT_NAME).hex.addAPDB
	@echo  ----------------------------------------
	@echo   Creating files for JTAG programming...
	@echo  ----------------------------------------
	@$(SREC) $(OUT_PATH_WIN)\$(OUTPUT_NAME).hex -Intel -fill 0xFF 0xA0000 0x300000 -O $(OUT_PATH_WIN)\$(OUTPUT_NAME)_jtag.hex -Intel
	@$(ECC) -i $(OUT_PATH_WIN)\$(OUTPUT_NAME)_jtag.hex -o $(OUT_PATH_WIN)\$(OUTPUT_NAME)_jtag_ecc.hex -F021 16M_ADD -r4	

else

$(TARGET): $(OBJECTS) 
	@$(HYTILINK) \
	-lkecu $(OUT_DIR) \
	-lkout .\$(OUT_PATH)\src \
	-lkobj $(OBJECTS) \
	-lklib $(LIB_EXT) $(HY_IO_LIB) \
	-lkset env/cenTtc5xx/Hw/$(RELEASE_VER)/bsp/mem_ttc500_bl.lsf \
	-lkset -m _debug/cen_hw/$(OUT_DIR)/main.map \
	-lkset -x --rom_model --be32 --issue_remarks --warn_sections --display_error_number --diag_suppress=10068 --mapfile_contents=all 
	$(CC)  --emit_warnings_as_errors --run_linker $(OUT_PATH)/src/build.link
	$(HEX) --quiet --intel --romwidth=32 $(OUT_PATH)\src\main.out -o $(OUT_PATH)\$(OUTPUT_NAME).hex
	@echo  ---------------------------------
	@echo   Creating APDB...
	@echo  ---------------------------------
	@$(RM) -f $(OUT_PATH_WIN)\$(OUTPUT_NAME).hex.addAPDB
	@$(PRJ_DIR)\env\AddAPDB.exe -t $(DOWNLOADER_HW_TYPE) -v $(BOOTLOADER_VERSION) -w 32 -f I -k $(PRJ_DIR)\env\public.key $(PRJ_DIR)\env\targets.xml $(OUT_PATH_WIN)\$(OUTPUT_NAME).hex $(OUT_PATH_WIN)\$(OUTPUT_NAME).hex.addAPDB
	@$(COPY) $(OUT_PATH_WIN)\$(OUTPUT_NAME).hex.addAPDB $(OUT_PATH_WIN)\$(OUTPUT_NAME).hex
	@$(RM) -f $(OUT_PATH_WIN)\$(OUTPUT_NAME).hex.addAPDB
	@echo  ----------------------------------------
	@echo   Creating files for JTAG programming...
	@echo  ----------------------------------------
	@$(SREC) $(OUT_PATH_WIN)\$(OUTPUT_NAME).hex -Intel -fill 0xFF 0xA0000 0x300000 -O $(OUT_PATH_WIN)\$(OUTPUT_NAME)_jtag.hex -Intel
	@$(ECC) -i $(OUT_PATH_WIN)\$(OUTPUT_NAME)_jtag.hex -o $(OUT_PATH_WIN)\$(OUTPUT_NAME)_jtag_ecc.hex -F021 16M_ADD -r4	

endif

$(OUT_PATH)/%.obj: %.c
	@echo compiling: $<
	$(CC) $(CC_INCLUDES) $(C_OPTS) --output_file $@ $< $(CC_FLAGS) $(LIBS)

$(OUT_PATH)/%.obj: %.cpp
	@echo compiling: $<
	$(CC) $(CC_INCLUDES) $(C_OPTS) --output_file $@ $< $(CC_FLAGS) $(LIBS)
	