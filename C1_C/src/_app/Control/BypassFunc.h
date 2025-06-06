//**************************************************************************************************
//! @file BypassFunc.h
//! @brief Control bypass
//! @author Christian Klein (CK)
//! @created 11.10.2018 HYDAC/CK
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_CONTROL_BYPASSFUNC_H_
#define SRC__APP_CONTROL_BYPASSFUNC_H_


// INCLUDES =======================================================================================
#include <ItfTypes.h>
#include <App_LibTab.h>
#include <CustomLibrary.h>
#include <ItfBasMath.h>
#include <ControlFunc.h>

// GLOBAL DEFINES =================================================================================
// GLOBAL TYPE DEFINITON ==========================================================================
// GLOBAL VARIABLES DECLARATIONS ==================================================================
extern 	TBoolean boMemFaultBypass;


// GLOBAL PROTOTYPES DECLARATIONS =================================================================

//-----------------------------------------------------------------------------------------------------
//! @brief Control bypass
//!
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
TVoid vBypassControl(TVoid);

#endif /* SRC__APP_CONTROL_BYPASSFUNC_H_ */
