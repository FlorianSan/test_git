//**************************************************************************************************
//! @file PvgEvTorFunc.h
//! @brief Control system
//! @author Christian Klein (CK)
//! @created 09.10.2018 HYDAC/CK
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_CONTROL_PVGEVTORFUNC_H_
#define SRC__APP_CONTROL_PVGEVTORFUNC_H_


// INCLUDES =======================================================================================
#include <ItfTypes.h>
#include <App_LibTab.h>
#include <CustomLibrary.h>
#include <ItfBasMath.h>
#include <ControlFunc.h>

// GLOBAL DEFINES =================================================================================

// GLOBAL TYPE DEFINITON ==========================================================================

// GLOBAL VARIABLES DECLARATIONS ==================================================================
//NEOTEC
extern TInt16 u16PvgEvTorCommandIO;//Variable Globale
extern TBoolean boSupplyPvgPropEvTorCommandIO;//Variable Globale
//NEOTEC

// GLOBAL PROTOTYPES DECLARATIONS =================================================================

//-----------------------------------------------------------------------------------------------------
//! @brief Control Pvg Ev Tor output
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 09.10.2018 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vPvgEvTorControl(TVoid);

#endif /* PENDULARFUNC */
