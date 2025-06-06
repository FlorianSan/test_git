//**************************************************************************************************
//! @file ControlLight.h
//! @brief Control system
//! @author Christian Klein (CK)
//! @created 11.12.2018 HYDAC/CK
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_CONTROL_CONTROLLIGHT_H_
#define SRC__APP_CONTROL_CONTROLLIGHT_H_


// INCLUDES =======================================================================================
#include <ItfTypes.h>
#include <App_LibTab.h>
#include <CustomLibrary.h>
#include <ItfBasMath.h>
//NEOTEC
#include <App_CanSigRec.h>
//NEOTEC

// GLOBAL DEFINES =================================================================================

// GLOBAL TYPE DEFINITON ==========================================================================

// GLOBAL VARIABLES DECLARATIONS ==================================================================

// GLOBAL PROTOTYPES DECLARATIONS =================================================================

//-----------------------------------------------------------------------------------------------------
//! @brief Control Light
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 11.12.2018 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//
//07.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vControlLight(TVoid);

//-----------------------------------------------------------------------------------------------------
//! @brief Control Light basket
//!
//! @param[in] 		 TBoolean			- RearZoneCentred turret
//! @param[in] 		 TBoolean			- Speed Axle sensor
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 27.02.2019 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vLightBasket(TBoolean boRearZoneCentredTurret , TBoolean boFrontZoneCentredTurret);

#endif  /*SRC__APP_CONTROL_CONTROLLIGHT_H_*/
