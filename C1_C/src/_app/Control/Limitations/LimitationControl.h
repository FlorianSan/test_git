//**************************************************************************************************
//! @file LimitationControl.h
//! @brief Control limitation of arrow arm
//! @author Christian Klein (CK)
//! @created 11.10.2018 HYDAC/CK
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_CONTROL_LIMITATIONCONTROL_H_
#define SRC__APP_CONTROL_LIMITATIONCONTROL_H_


// INCLUDES =======================================================================================
#include <ItfTypes.h>
#include <App_LibTab.h>
#include <CustomLibrary.h>
#include <ItfBasMath.h>
#include <ControlFunc.h>
#include <ArrowArmLimitation.h>
#include <DeltaArmLimitation.h>
#include <InclinaisonBasketLimitation.h>
#include <PendularLimitation.h>
#include <RotationBasketLimitation.h>
#include <TelescopeArmLimitation.h>
#include <RotationTurretLimitation.h>
#include <SafetyTelescopeLimitation.h>

// GLOBAL DEFINES =================================================================================

// GLOBAL TYPE DEFINITON ==========================================================================

// GLOBAL VARIABLES DECLARATIONS ==================================================================

// GLOBAL PROTOTYPES DECLARATIONS =================================================================

//-----------------------------------------------------------------------------------------------------
//! @brief Control limitation
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 11.10.2018 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vLimitationControl(TVoid);

#endif /* SRC__APP_CONTROL_LIMITATIONCONTROL_H_ */
