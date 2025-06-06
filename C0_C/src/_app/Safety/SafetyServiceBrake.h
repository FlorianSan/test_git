//**************************************************************************************************
//! @file SafetyServiceBrake.h
//! @brief safety function of the  service brake in case of alarm detection
//! @author Christian Klein (CK)
//! @created 23.07.2018 HYDAC/CK
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_IO_SAFETYSERVICEBRAKE_H_
#define SRC__APP_IO_SAFETYSERVICEBRAKE_H_

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
//! @brief safety function of the  service brake in case of alarm detection
//!
//!
//! @globvar
//!		TDbRamEcuOutputsC0 			gDb_tRamEcuOutputsC0		structure Data variable list
//!		TBloErr						gErr_tSpecificErrorC0_4		structure error block
//! @staticvar
//!
//! @created 15.04.2019 HYDAC/CK
//!
//! @change  25.06.2019 HYDAC/CK - add EvParkBrakeAxleOscillant and EvParkBrakeAxleFixe failures , in comment why is depending control park brake
//!			 29.01.2019 HYDAC/CK - Filling of the part  @globar and @staticvar in the header of the function
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
extern TVoid vSafetyServiceBrake(TVoid);

#endif /* SRC__APP_IO_SAFETYSERVICEBRAKE_H_ */
