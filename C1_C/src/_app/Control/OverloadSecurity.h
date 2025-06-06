//**************************************************************************************************
//! @file OverloadSecurity.h
//! @brief Control system
//! @author Christian Klein (CK)
//! @created 03.10.2018 HYDAC/CK
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_CONTROL_OVERLOADSECURITY_H_
#define SRC__APP_CONTROL_OVERLOADSECURITY_H_


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
extern TBoolean boOverloadActive;
//NEOTEC

// GLOBAL PROTOTYPES DECLARATIONS =================================================================

//-----------------------------------------------------------------------------------------------------
//! @brief Control  overload security Function
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 18.12.2018 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vOverloadSecurityControl(TVoid);

#endif /* SRC__APP_CONTROL_OVERLOADSECURITY_H_ */
