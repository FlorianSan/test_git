//==================================================================================================
//! @file SafetyCheckEmergencyStop.h
//! @brief Management of control emergency
//! @author NEOTEC/FV
//! @created 20.01.2025 NEOTEC/FV
//! copyrights (c) all rights reserved by NEOTEC
//=================================================================================================

#ifndef SRC__APP_IO_SAFETYCHECKEMERGENCYSTOP_H_
#define SRC__APP_IO_SAFETYCHECKEMERGENCYSTOP_H_

// INCLUDES =======================================================================================
#include <App_LibTab.h>
#include <ItfCoreLib.h>
#include <ItfBasMath.h>
#include <App_CanSigRec.h>
#include <ItfBasOut.h>
#include <ItfTypes.h>
#include <ControlFunc.h>
//NEOTEC
#include <ReadInputsFunc.h>
//NEOTEC

//-----------------------------------------------------------------------------------------------------
//! @brief vSafetyCheckEmergencyStop
//!
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 20.01.2025 NEOTEC/FV
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
extern TVoid vSafetyCheckEmergencyStop(TVoid);

#endif /* SRC__APP_IO_SAFETYCHECKEMERGENCYSTOP_H_ */
