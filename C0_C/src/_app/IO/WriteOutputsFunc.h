//**************************************************************************************************
//! @file WriteOutputsFunc.h
//! @brief Write outputs
//! @author Christian Klein (CK)
//! @created 23.07.2018 HYDAC/CK
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_IO_WRITEOUTPUTSFUNC_H_
#define SRC__APP_IO_WRITEOUTPUTSFUNC_H_

// INCLUDES =======================================================================================
#include <ItfTypes.h>
#include <App_LibTab.h>
#include <ItfBasMath.h>
#include <App_CanSigRec.h>
#include <App_DefEnu.h>
#include <SafetyWriteOutput.h>
//NEOTEC
#include <RailWorkSafety.h>
#include <ControlFunc.h>
#include <AlarmManagement.h>
//NEOTEC

// GLOBAL DEFINES =================================================================================
extern TSigTriggerAdr	tTriggerSendEventDataloggerMsg;
// GLOBAL TYPE DEFINITON ==========================================================================

// GLOBAL VARIABLES DECLARATIONS ==================================================================

// GLOBAL PROTOTYPES DECLARATIONS =================================================================

//-----------------------------------------------------------------------------------------------------
//! @brief set outputs
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 13.04.2017 HYDAC/MS
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
extern TVoid vSetOutputs(TVoid);

//-----------------------------------------------------------------------------------------------------
//! @brief Digital output control function
//!
//! @param[in] ptDout 			- digital output block
//! @param[in] boDoutCmd 		- output command
//! @param[out] peDigStatus 	- output status
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 06.07.2016 HYDAC/MS
//!
//! @change
//! -# 13.04.2017	MS: status output added
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vSetDigitalOutput(TBloDig* ptDout, TBoolean boDoutCmd, EDigStatus* peDigStatus);

//-----------------------------------------------------------------------------------------------------
//! @brief proportional output control function
//!
//! @param[in] ptProOut 		- proportional output block
//! @param[in] u16Command 		- current command in mA
//! @param[out] peProStatus 	- output status
//! @param[out] pu16Current 	- output actual current
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 27.07.2016 HYDAC/MS
//!
//! @change
//! -# 13.04.2017	MS: status output + current added
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vSetProportionalOutput(TBloPro* ptProOut, TUint16 u16Command, EProStatus* peProStatus, TUint16* pu16Current);

//-----------------------------------------------------------------------------------------------------
//! @brief proportional voltage output control function
//!
//! @param[in] 		ptOutVoltPro 		- proportional voltage output block
//! @param[in] 		u16Command 			- current command in mV
//! @param[out]		pu16Voltage 		- output actual current
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 06.08.2018 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vSetProportionalVoltageOutput(TBloOutVoltPro* ptOutVoltPro, TUint16 u16Command, TUint16* pu16Voltage);

//-----------------------------------------------------------------------------------------------------
//! @brief proportional output control function
//!
//! @param[in] ptProOut 		- proportional output block
//! @param[in] boCommand 		- bool command
//! @param[in] u16Current 		- current apply to output in mA
//! @param[out] u16Command 		- current command in mA
//! @param[out] peProStatus 	- output status
//! @param[out] pu16Current 	- output actual current
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 20.09.2018 HYDAC/CK
//!
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vSetProportionalOutputByDigitalCommand(TBloPro* ptProOut, TBoolean boCommand ,TUint16 u16Current,TUint16 *u16Command, EProStatus* peProStatus, TUint16* pu16Current);


//-----------------------------------------------------------------------------------------------------
//! @brief write CAN outputs
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 10.11.2016 HYDAC/MS
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vWriteCanOutputs(TVoid);


#endif /* SRC__APP_IO_WRITEOUTPUTSFUNC_H_ */
