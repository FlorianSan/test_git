####################################################################################################
#
# Makefile for MinGw 
# (c) Copyright by Hydac System GmbH, all rights reserved
#
# DESCRIPTION:
# 	Template for a simple pc_compiler_settings.make
#
# PROJECT: 		Test platform
# Hardware: 	Windows XP
#
# FILE VERSION INFORMATION:
#	$Filename:	hw_compiler_setting.mk
#   $Version:	1.0 Beta 
#   $Date:		16.02.2011
#   $Author:	Norman Pagel $
#
####################################################################################################
SHELL=cmd.exe

####################################################################################################
# compiler path
####################################################################################################
include env/general_setting.mk

export TI_INC      = $(TI_5XX_PATH)\include
export CC          = $(TI_5XX_PATH)\bin\armcl.exe
export HEX         = $(TI_5XX_PATH)\bin\armhex.exe
export ECC         = $(PRJ_DIR)\env\nowECC.exe
export SREC        = $(PRJ_DIR)\env\srec_cat.exe
export RM          = $(MINGW_PATH)\bin\rm
export COPY        = $(MINGW_PATH)\bin\cp
export PCLINT      = $(PCLINT_PATH)\lint-nt.exe
export SPLINT      = $(SPLINT_PATH)\splint.exe
export LINT_INC    = $(MINGW_PATH)\include 

####################################################################################################
# Flags for Assembler, Compiler and Linker for the complete projekt
# For verification if the linker flags are really passed to the linker use the linker option -v and
# compare the specified flags.
####################################################################################################
#-----------------------------------------------------------------------------
# optimization / debugging features
#-----------------------------------------------------------------------------
# compile code for profiling or debugging
#   0 ... profiling
#   1 ... debugging
#   2 ... release
OPT_TYPE = 1

ifeq ($(OPT_TYPE), 0)
    # optimize for profiling
    OPT_STR := PROFILING
endif
ifeq ($(OPT_TYPE), 1)
    # optimize for debugging
    OPT_STR := DEBUGGING
endif
ifeq ($(OPT_TYPE), 2)
    # optimize for release
    OPT_STR := RELEASE
endif

USE_FPU  = 1

#-----------------------------------------------------------------------------
# compiler options:
#-----------------------------------------------------------------------------
ifeq ($(OPT_STR), PROFILING)
    # optimize for profiling
    OPT_SYMDEBUG   := skeletal
    OPT_LEVEL      := 2
    OPT_ADDITIONAL := --optimize_with_debug --symdebug:dwarf_version=2
endif
ifeq ($(OPT_STR), DEBUGGING)
    # optimize for debugging
    OPT_SYMDEBUG   := dwarf
    OPT_LEVEL      := 0
    OPT_ADDITIONAL := -dDEBUG -dCSM_DEBUG --symdebug:dwarf_version=2
endif
ifeq ($(OPT_STR), RELEASE)
    # optimize for release
    OPT_SYMDEBUG   := none
    OPT_LEVEL      := 2
    OPT_ADDITIONAL := -dRELEASE
endif

ifeq ($(USE_FPU),1)
    FPUSWITCH = --float_support=VFPv3D16
    FPU_LIB = $(PRJ_DIR)\lib\rtsv7R4_T_be_v3D16_eabi.lib
else
    FPUSWITCH = -dosdNoFPU
    FPU_LIB = $(PRJ_DIR)\lib\rtsv7R4_T_be_eabi.lib
endif

#-----------------------------------------------------------------------------
# compiler/linker options
#-----------------------------------------------------------------------------
# explicit compiler options
C_OPTS      :=  -mv7R4                         \
                --abi=eabi                     \
                --auto_inline=0                \
                --endian=big                   \
                $(FPUSWITCH)                   \
                --plain_char=unsigned          \
                --small_enum                   \
                --fp_mode=strict               \
                --opt_level=$(OPT_LEVEL)       \
                --opt_for_speed=3              \
                --code_state=32                \
                --no_inlining                  \
                --gen_func_subsections         \
                --check_misra=none             \
                --issue_remarks                \
                --display_error_number         \
                --quiet

# compiler options for debugging
C_OPTS +=       --symdebug:$(OPT_SYMDEBUG)     \
                $(OPT_ADDITIONAL)

# recommended compiler modifications
C_OPTS +=       --aliased_variables            \
                --no_stm                       \
                --unaligned_access=off
#               --no_intrinsics (deactivated)
#               --strict_ansi (deactivated)

# compiler symbol definitions via command line
C_OPTS +=       -dHET_v2                      \
                -d_AEABI_PORTABILITY_LEVEL=0
                
                
#-----------------------------------------------------------------------------
# get date information and set makfile compiler switches 
#-----------------------------------------------------------------------------
# insert the build date
BUILDDATE_F    = $(PRJ_DIR)\env\builddate\getbuilddate.exe
BUILDDATE_FUNC = $(subst \,\\,$(BUILDDATE_F))
DATE_S        := $(shell $(BUILDDATE_FUNC))

BUILD_DAY   = $(word 1, $(DATE_S))
BUILD_MONTH = $(word 2, $(DATE_S))
BUILD_YEAR  = $(word 3, $(DATE_S))
BUILD_HOUR  = $(word 4, $(DATE_S))
BUILD_MIN   = $(word 5, $(DATE_S))

C_OPTS += -DRTS_TTC_FLASH_DATE_YEAR=$(BUILD_YEAR)
C_OPTS += -DRTS_TTC_FLASH_DATE_MONTH=$(BUILD_MONTH)
C_OPTS += -DRTS_TTC_FLASH_DATE_DAY=$(BUILD_DAY)
C_OPTS += -DRTS_TTC_FLASH_DATE_HOUR=$(BUILD_HOUR)
C_OPTS += -DRTS_TTC_FLASH_DATE_MINUTE=$(BUILD_MIN)
C_OPTS += -DMAKEFILE_CS_TTC5XX_C_SAMPLE
                
                # explicit assembler options
A_OPTS      :=  -quiet                        \
                --abi=eabi                    \
                -mv7r4                        \
                $(FPUSWITCH)                  \
                --endian=big                  \
                --symdebug:$(OPT_SYMDEBUG)

# explicit linker options
L_OPTS      :=  --reread_libs                 \
                --rom_model                   \
                --warn_sections               \
                --be32                        \
                --mapfile_contents=all        \
                --issue_remarks               \
                --display_error_number

# recommended linker modifications
L_OPTS      +=  --disable_auto_rts            \
                --fill_value=0                \
                --minimize_trampolines        \
                --diag_suppress=10068
#               --scan_libraries

BLAUTH_OPTS :=  -v $(BOOTLOADER_VERSION)        \
                -t $(PRJ_DIR)/env/targets.xml