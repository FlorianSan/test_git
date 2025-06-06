//**************************************************************************************************
//! @file MotorFunc.h
//! @brief Control system
//! @author Christian Klein (CK)
//! @created 03.10.2018 HYDAC/CK
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_CONTROL_MOTORFUNC_H_
#define SRC__APP_CONTROL_MOTOTFUNC_H_


// INCLUDES =======================================================================================
#include <ItfTypes.h>
#include <App_LibTab.h>
#include <CustomLibrary.h>
#include <ItfBasMath.h>
#include <ControlFunc.h>


// GLOBAL DEFINES =================================================================================

// GLOBAL TYPE DEFINITON ==========================================================================

// GLOBAL VARIABLES DECLARATIONS ==================================================================

// GLOBAL PROTOTYPES DECLARATIONS =================================================================

//-----------------------------------------------------------------------------------------------------
//! @brief Control motor function
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 03.10.2018 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vMotorControl(TVoid);

//-----------------------------------------------------------------------------------------------------
//! @brief Control  low side output for ev accelerator motor and generator
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 17.12.2018 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
extern TVoid vControlLowSideEvAccMotorAndGenerator(TVoid);

//-----------------------------------------------------------------------------------------------------
//! @brief Control  stop motor
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 20.12.2018 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
extern TVoid vControlStopMotor(TVoid);


//-----------------------------------------------------------------------------------------------------
//! @brief Control  stop motor
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 10.01.2019 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vControlAntiStartUp(TVoid);

#endif /* SRC__APP_CONTROL_MOTORFUNC_H_ */
