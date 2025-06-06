//**************************************************************************************************
//! @file AutoStopFunc.h
//! @brief stop automatically the movements when reaching some determined key positions
//! @author Fabrice Cordary (FC)
//! @created 27.02.2019 HYDAC/FC
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_CONTROL_AUTOSTOPFUNC_H_
#define SRC__APP_CONTROL_AUTOSTOPFUNC_H_

// INCLUDES =======================================================================================
#include <ItfTypes.h>
#include <App_LibTab.h>
#include <CustomLibrary.h>
#include <ItfBasMath.h>
#include <ControlFunc.h>
#include <math.h>
#include <stdlib.h>

// GLOBAL DEFINES =================================================================================

// GLOBAL TYPE DEFINITON ==========================================================================

// GLOBAL VARIABLES DECLARATIONS ==================================================================

// GLOBAL PROTOTYPES DECLARATIONS =================================================================

//-----------------------------------------------------------------------------------------------------
//! @brief stop automatically the movements when reaching some determined key positions
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 27.02.2019 HYDAC/FC
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vAutoStopFunc(TVoid);

//-----------------------------------------------------------------------------------------------------
//! @brief stop automatically the basket rotation when reaching the center position
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 27.02.2019 HYDAC/FC
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vAutoStopBasketRotation(TBoolean iBasketLeftSideSensor, TBoolean iBasketRightSideSensor, TBoolean iBasketRotationCmd);

//-----------------------------------------------------------------------------------------------------
//! @brief stop automatically the turret rotation when reaching a center position
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 27.02.2019 HYDAC/FC
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vAutoStopTurretRotation(TInt16 iTurretAngularSensor, TBoolean iTurretRotationCmd);

#endif /* AutoStopFunc */
