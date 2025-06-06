//**************************************************************************************************
//! @file SafetyRailWorkSafety.h
//! @brief safety function of the working mode on the rails when we detect an alarms
//! @author Christian Klein (CK)
//! @created 06.06.2019 HYDAC/CK
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_IO_SAFETYRAILWORKSAFETY_H_
#define SRC__APP_IO_SAFETYRAILWORKSAFETY_H_

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
//! @brief safety function of the working mode on the rails when we detect an alarms
//!
//!
//! @globvar
//!		TDbRamRailWorkSafetyC0 		gDb_tRamRailWorkSafetyC0		structure Data variable list
//!		TBloErr						gErr_tSpecificErrorC0_4			structure error block
//! @staticvar
//!
//! @created 06.06.2019 HYDAC/CK
//!
//! @change  12.12.2019 HYDAC/CK : add comment for the assignments gDb_tRamRailWorkSafetyC0.eRailWorkMode = GE_MULTILANE_MODE;
//!			 29.01.2019 HYDAC/CK - Filling of the part  @globar and @staticvar in the header of the function
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vSafetyRailWorkSafety(TVoid);

#endif /* SRC__APP_IO_SAFETYRAILWORKSAFETY_H_ */
