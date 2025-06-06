//**************************************************************************************************
//! @file vSafetyParkBrake.h
//! @brief safety function of the parking brake in case of alarm detection
//! @author Christian Klein (CK)
//! @created 09.05.2019 HYDAC/CK
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_IO_SAFETYPARKBRAKE_H_
#define SRC__APP_IO_SAFETYPARKBRAKE_H_

// INCLUDES =======================================================================================
#include <ItfTypes.h>
#include <App_LibTab.h>
#include <App_CanSigRec.h>
#include <App_Db.h>
#include <ItfBasMath.h>
#include <CustomLibrary.h>
//NEOTEC
#include <AlarmManagement.h>
//NEOTEC

// GLOBAL DEFINES =================================================================================

// GLOBAL TYPE DEFINITON ==========================================================================

// GLOBAL VARIABLES DECLARATIONS ==================================================================

// GLOBAL PROTOTYPES DECLARATIONS =================================================================

//-----------------------------------------------------------------------------------------------------
//! @brief safety function of the parking brake in case of alarm detection
//!
//!
//! @globvar
//!		TDbRamEcuOutputsC0 		gDb_tRamEcuOutputsC0		structure Data variable list
//!
//! @staticvar
//!
//! @created 09.05.2019 HYDAC/CK
//!
//! @change	 06.06.2019 HYDAC/CK - add failure DM_INCUR_SP/DM_INCUR_SG_OL/DM_INCUR_PARAM/DM_INCUR_UNKNOWN of PressureBrakeSensor block
//! @change  25.06.2019 HYDAC/CK - add EvServiceBrakeAxleOscillant and EvServiceBrakeAxleFixe failures , in comment why is depending control park brake
//!			 12.12.2019 HYDAC/CK - add instruction ifdef DEBUG
//!			 28.01.2019 HYDAC/CK - Filling of the part  @globar and @staticvar in the header of the function
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
extern TVoid vSafetyParkBrake(TVoid);

#endif /* SRC__APP_IO_SAFETYPARKBRAKE_H_ */
