//**************************************************************************************************
//! @file WriteSavedParameters.h
//! @brief write saved parameters
//! @author Christian Klein (CK)
//! @created 21.01.2019 HYDAC/CK
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_CONTROL_WRITESAVEDPARAMETERS_H_
#define SRC__APP_CONTROL_WRITESAVEDPARAMETERS_H_


// INCLUDES =======================================================================================
#include <ItfTypes.h>
#include <App_LibTab.h>
#include <CustomLibrary.h>
#include <ItfBasMath.h>
#include <ItfBasConv.h>
#include <ControlFunc.h>

// GLOBAL DEFINES =================================================================================

// GLOBAL TYPE DEFINITON ==========================================================================

// GLOBAL VARIABLES DECLARATIONS ==================================================================
// declaration trigger
extern TSigTriggerAdr	tTriggerCalibTurretAngle;						// trigger to retain value of turret angle
extern TSigTriggerAdr	tTriggerSavedCalibrationListC0;					// trigger to save db calibration list
extern TSigTriggerAdr	tTriggerCalibSlopeLongAngle;					// trigger to retain value of slope long angle
extern TSigTriggerAdr	tTriggerCalibSlopeTransAngle;					// trigger to retain value of slope trans angle


// GLOBAL PROTOTYPES DECLARATIONS =================================================================

//-----------------------------------------------------------------------------------------------------
//! @brief write saved parameters
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 21.01.2019 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vWriteSavedParameters(TVoid);

//NEOTEC
//-----------------------------------------------------------------------------------------------------
//! @brief determine distance  translation rail
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created  18.07.2019 NEOTEC/FV
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TInt32 i32DetermineDistanceM(TInt32 i32SpeedKmhx100 , TInt32 i32InitDistanceM, TBoolean boSettingDistanceM, TUint32 u32SettingDistanceM);

//-----------------------------------------------------------------------------------------------------
//! @brief determine distance Mast translation rail
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created  19.09.2019 NEOTEC/FV
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TInt32 i32DetermineDistanceWithMastMeasureMM(TInt32 i32SpeedKmhx100, TBoolean boEvForwardCommand, TBoolean boRazButton, TBoolean boFoldedPosMat, TInt32 i32InitDistanceMM);

//-----------------------------------------------------------------------------------------------------
//! @brief TUint32 to TUint16
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created  25.02.2021 NEOTEC/FV
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid ConvertTUint32To2TUiInt16(TUint32 ValIn,TUint16 *ValOutMSB ,TUint16 *ValOutLSB);

//-----------------------------------------------------------------------------------------------------
//! @brief 2TUint16 to TUint32
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created  25.02.2021 NEOTEC/FV
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid Convert2TUint16ToTUiInt32(TUint16 ValInMSB,TUint16 ValInLSB, TUint32 *ValOutTUint32 );

//NEOTEC


#endif /* SRC__APP_CONTROL_WRITESAVEDPARAMETERS_H_ */
