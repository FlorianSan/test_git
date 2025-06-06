//**************************************************************************************************
//! @file SpeedMaxTranslationRail.h
//! @brief define speed max transaltion rail
//! @author Christian Klein (CK)
//! @created 24.01.2019 HYDAC/CK
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_CONTROL_SPEEDMAXTRANSLATIONRAIL_H_
#define SRC__APP_CONTROL_SPEEDMAXTRANSLATIONRAIL_H_


// INCLUDES =======================================================================================
#include <ItfTypes.h>
#include <App_LibTab.h>
#include <CustomLibrary.h>
#include <ItfBasMath.h>
#include <SafetySpeedMaxTranslationRail.h>
#include <RailWorkSafety.h>
#include <AlarmManagement.h>


// GLOBAL DEFINES =================================================================================

// GLOBAL TYPE DEFINITON ==========================================================================

// GLOBAL VARIABLES DECLARATIONS ==================================================================

extern TBoolean boAccesSiteSpeedCondition;
extern TBoolean boModeConfiguration;

// GLOBAL PROTOTYPES DECLARATIONS =================================================================

//-----------------------------------------------------------------------------------------------------
//! @brief define speed max translation rail
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 24.01.2019 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vSpeedMaxTranslationRail(TVoid);

#endif  /*SRC__APP_CONTROL_SPEEDMAXTRANSLATIONRAIL_H_*/

