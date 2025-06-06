//**************************************************************************************************
//! @file SafetyWriteOutput.h
//! @brief safety write outputs command in case of alarm detection before the write output of the controller
//! @author Christian Klein (CK)
//! @created 23.07.2018 HYDAC/CK
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_IO_SAFETYWRITEOUTPUT_H_
#define SRC__APP_IO_SAFETYWRITEOUTPUT_H_

// INCLUDES =======================================================================================
#include <ItfTypes.h>
#include <App_LibTab.h>
#include <App_CanSigRec.h>
#include <App_Db.h>
#include <ItfBasMath.h>
#include <CustomLibrary.h>

// GLOBAL DEFINES =================================================================================

// GLOBAL TYPE DEFINITON ==========================================================================

// GLOBAL VARIABLES DECLARATIONS ==================================================================

// GLOBAL PROTOTYPES DECLARATIONS =================================================================

//-----------------------------------------------------------------------------------------------------
//! @brief safety write outputs command in case of alarm detection before the write output of the controller
//!
//!
//! @globvar
//!		TDbRamEcuOutputsC1			gDb_tRamEcuOutputsC1		structure Data variable list
//!		TBloErr						gErr_tSpecificErrorC1_2		structure error block
//! @staticvar
//!
//! @created 15.04.2019 HYDAC/CK
//!
//! @change  13.12.2019 HYDAC/CK : Change in if instruction of failure of solenoid valve pvg for all digital outputs variable gDb_tRamEcuOutputsC1.boSupplyPvgTelescopeArmCommand to gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand
//!			 29.01.2019 HYDAC/CK - Filling of the part  @globar and @staticvar in the header of the function
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
extern TVoid vSafetyWriteOutput(TVoid);

#endif /* SRC__APP_IO_SAFETYWRITEOUTPUT_H_ */
