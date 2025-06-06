//**************************************************************************************************
//! @file SafetyDeltaArmLimitation.h
//! @brief safety function of the delta arm limitation(authorization of the movement) in case of alarm detection
//! @author Christian Klein (CK)
//! @created 23.07.2018 HYDAC/CK
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_IO_SAFETYDELTAARMLIMITATION_H_
#define SRC__APP_IO_SAFETYDELTAARMLIMITATION_H_

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
//! @brief safety function of the delta arm limitation(authorization of the movement) in case of alarm detection
//!
//!
//! @globvar
//!		TDbRamLimitMoveC1 			gDb_tRamLimitMoveC1			structure Data variable list
//!		TBloErr						gErr_tSpecificErrorC1_2		structure error block
//! @staticvar
//!
//! @created 09.05.2019 HYDAC/CK
//!			 29.01.2019 HYDAC/CK - Filling of the part  @globar and @staticvar in the header of the function
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
extern TVoid vSafetyDeltaArmLimitation(TVoid);

#endif /* SRC__APP_IO_SAFETYDELTAARMLIMITATION_H_ */
