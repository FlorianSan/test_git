
//**************************************************************************************************
//! @file RailWorkSafety.h
//! @brief Manage the safety of the vehicle during working on the rail road
//! @author Fabrice Cordary (FC)
//! @created 04.02.2019 HYDAC/FC
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_CONTROL_RAILWORKSAFETY_H_
#define SRC__APP_CONTROL_RAILWORKSAFETY_H_


// INCLUDES =======================================================================================
#include <ItfTypes.h>
#include <App_LibTab.h>
#include <CustomLibrary.h>
#include <ItfBasMath.h>

// GLOBAL DEFINES =================================================================================

// GLOBAL TYPE DEFINITON ==========================================================================

// GLOBAL VARIABLES DECLARATIONS ==================================================================
//NEOTEC
extern TBoolean boModeWorkAuthorized; //var globale
//NEOTEC

// GLOBAL PROTOTYPES DECLARATIONS =================================================================

//-----------------------------------------------------------------------------------------------------
//! @brief Manage the safety of the vehicle during working on the rail road
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 05.02.2019 HYDAC/FC
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vRailWorkSafety(TVoid);

//-----------------------------------------------------------------------------------------------------
//! @brief Manage the movements limitations in ALO mode
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 05.02.2019 HYDAC/FC
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vALOModeLimitation(TVoid);

#endif /* SRC__APP_CONTROL_RAILWORKSAFETY_H_ */
