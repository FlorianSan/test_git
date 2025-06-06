//**************************************************************************************************
//! @file LimitWorkEnvelope.h
//! @brief Control system
//! @author Fabrice Cordary (FC)
//! @created 18.01.2019 HYDAC/FC
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_CONTROL_LIMITWORKENVELOPE_H_
#define SRC__APP_CONTROL_LIMITWORKENVELOPE_H_

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
//! @brief limitation of the work envelope (main function)
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 18.01.2019 HYDAC/FC
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vLimitWorkEnvelope(TVoid);

//-----------------------------------------------------------------------------------------------------
//! @brief limitation of the work envelope (internal function used to swtich between simulation and real inputs)
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 18.01.2019 HYDAC/FC
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vLimitWorkEnvelopeIntern(TUint16 iTelescopePositionSensor, TInt16 iDeltaArmAngularSensor, TInt16 iArrowArmAngularSensor);

#endif /* LimitWorkEnvelope */
