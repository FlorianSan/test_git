### Build with HyRebuilder Version: 05.17.00 ####

SUB_CC_INCLUDES = \
-I$(ROOT_PATH)/include \
-I$(ROOT_PATH)/include/basic \
-I$(ROOT_PATH)/include/core \
-I$(ROOT_PATH)/include/core/board \
-I$(ROOT_PATH)/include/core/pin \
-I$(ROOT_PATH)/include/library \
-I$(ROOT_PATH)/include/library/standard \
-I$(ROOT_PATH)/include/library/testsuite \
-I$(ROOT_PATH)/include/library/testsuite/cunit \
-I$(ROOT_PATH)/include/library/testsuite/cunit/inc \
-I$(ROOT_PATH)/include/library/testsuite/cvtest \
-I$(ROOT_PATH)/include/library/testsuite/script \
-I$(ROOT_PATH)/include/library/testsuite/script/inc \
-I$(ROOT_PATH)/src \
-I$(ROOT_PATH)/src/_app \
-I$(ROOT_PATH)/src/_app/2App \
-I$(ROOT_PATH)/src/_app/AUTO_CEN_TTC5XX


SUB_LIB_EXT = \
$(ROOT_PATH)/include/_lib/TTC590/pc/core/CEN_TTC590_PC_CoreBasStd.a


SUB_OBJECTS = \
$(OUT_PATH)/src/main_cen.o \
$(OUT_PATH)/src/_app/2App/2AppCode.o \
$(OUT_PATH)/src/_app/AppBspMem.o \
$(OUT_PATH)/src/_app/AppCode.o \
$(OUT_PATH)/src/_app/AUTO_CEN_TTC5XX/App_Db.o \
$(OUT_PATH)/src/_app/AUTO_CEN_TTC5XX/App_LibTab.o \
$(OUT_PATH)/src/_app/AUTO_CEN_TTC5XX/App_Pin.o \
$(OUT_PATH)/src/_app/AUTO_CEN_TTC5XX/Cfg_CBus.o \
$(OUT_PATH)/src/_app/AUTO_CEN_TTC5XX/Cfg_Ecu.o \
$(OUT_PATH)/src/_app/AUTO_CEN_TTC5XX/Cfg_LBus.o \
$(OUT_PATH)/src/_app/AUTO_CEN_TTC5XX/Cfg_LibRegistry.o \
$(OUT_PATH)/src/_app/AUTO_CEN_TTC5XX/Cfg_Sil.o \
$(OUT_PATH)/src/_app/AUTO_CEN_TTC5XX/Cfg_Ver.o


SUB_LINT = \
-I$(LINT_PATH)\include \
-I$(LINT_PATH)\include\basic \
-I$(LINT_PATH)\include\core \
-I$(LINT_PATH)\include\core\board \
-I$(LINT_PATH)\include\core\pin \
-I$(LINT_PATH)\include\library \
-I$(LINT_PATH)\include\library\standard \
-I$(LINT_PATH)\include\library\testsuite \
-I$(LINT_PATH)\include\library\testsuite\cunit \
-I$(LINT_PATH)\include\library\testsuite\cunit\inc \
-I$(LINT_PATH)\include\library\testsuite\cvtest \
-I$(LINT_PATH)\include\library\testsuite\script \
-I$(LINT_PATH)\include\library\testsuite\script\inc \
-I$(LINT_PATH)\src \
-I$(LINT_PATH)\src\_app \
-I$(LINT_PATH)\src\_app\2App \
-I$(LINT_PATH)\src\_app\AUTO_CEN_TTC5XX \
	$(LINT_PATH)\src\main_cen.c \
	$(LINT_PATH)\src\_app\2App\2AppCode.c \
	$(LINT_PATH)\src\_app\AppBspMem.c \
	$(LINT_PATH)\src\_app\AppCode.c \
	$(LINT_PATH)\src\_app\AUTO_CEN_TTC5XX\App_Db.c \
	$(LINT_PATH)\src\_app\AUTO_CEN_TTC5XX\App_LibTab.c \
	$(LINT_PATH)\src\_app\AUTO_CEN_TTC5XX\App_Pin.c \
	$(LINT_PATH)\src\_app\AUTO_CEN_TTC5XX\Cfg_CBus.c \
	$(LINT_PATH)\src\_app\AUTO_CEN_TTC5XX\Cfg_Ecu.c \
	$(LINT_PATH)\src\_app\AUTO_CEN_TTC5XX\Cfg_LBus.c \
	$(LINT_PATH)\src\_app\AUTO_CEN_TTC5XX\Cfg_LibRegistry.c \
	$(LINT_PATH)\src\_app\AUTO_CEN_TTC5XX\Cfg_Sil.c \
	$(LINT_PATH)\src\_app\AUTO_CEN_TTC5XX\Cfg_Ver.c
