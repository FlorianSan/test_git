//**************************************************************************************************
//! @file AlarmManagement.h
//! @brief Management of specific alarms
//! @author Christian Klein (CK)
//! @created 10.12.2018 HYDAC/CK
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_ALARMS_ALARMMANAGEMENT_H_
#define SRC__APP_ALARMS_ALARMMANAGEMENT_H_

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
// GLOBAL VARIABLES DECLARATIONS ==================================================================
//NEOTEC
extern TBoolean boFaultPressurePowerReduction; //Global Variable
extern TBoolean boPressureBrakeFault; //Global Variable
//NEOTEC

//-----------------------------------------------------------------------------------------------------
//! @brief Alarms management
//!
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 04.04.2018 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
extern TVoid vAlarmsManagement(TVoid);

#endif /* SRC__APP_ALARMS_ALARMMANAGEMENT_H_ */
