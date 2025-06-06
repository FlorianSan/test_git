//**************************************************************************************************
//! @file vSafetyOverloadSecurity.h
//! @brief  safety function of overload security in case of alarm detection
//! @author Christian Klein (CK)
//! @created 24.06.2019 HYDAC/CK
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_IO_SAFETYOVERLOADSECURITY_H_
#define SRC__APP_IO_SAFETYOVERLOADSECURITY_H_

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
//! @brief safety function of overload security in case of alarm detection
//!
//!
//! @globvar
//!		TDbRamEcuOutputsC1 			gDb_tRamEcuOutputsC1			structure Data variable list
//!		TBloErr						gErr_tSpecificErrorC1_3			structure error block
//! @staticvar
//!
//! @created 24.06.2019 HYDAC/CK
//!			 29.01.2019 HYDAC/CK - Filling of the part  @globar and @staticvar in the header of the function
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
extern TVoid vSafetyOverloadSecurity(TVoid);

#endif /* SRC__APP_IO_SAFETYOVERLOADSECURITY_H_ */
