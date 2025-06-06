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
#include <ControlFunc.h>

// GLOBAL DEFINES =================================================================================

// GLOBAL TYPE DEFINITON ==========================================================================

// GLOBAL VARIABLES DECLARATIONS ==================================================================
// declaration trigger
extern TSigTriggerAdr	tTriggerCalibAngleEndStopLowDeltaArm;					// trigger to save db calibration for angle end stop low delta arm
extern TSigTriggerAdr	tTriggerCalibAngleEndStopHighDeltaArm;					// trigger to save db calibration for angle end stop high delta arm
extern TSigTriggerAdr	tTriggerCalibAngleEndStopLowArrowArm;					// trigger to save db calibration for angle end stop low arrow arm
extern TSigTriggerAdr	tTriggerCalibAngleEndStopHighArrowArm;					// trigger to save db calibration for angle end stop high arrow arm
extern TSigTriggerAdr	tTriggerSavedCalibrationListC1;							// trigger to save db calibration list
extern TSigTriggerAdr	tTriggerCalibLenghtEndStopLowTelescopeArm;				// trigger to retain value of length end stop low arrow arm
extern TSigTriggerAdr	tTriggerCalibLenghtEndStopHighTelescopeArm;				// trigger to retain value of length end stop high arrow arm
extern TSigTriggerAdr	tTriggerCalibMinPosEncodeurMastMeasure;		// trigger to retain min position encodeur mast measure
extern TSigTriggerAdr	tTriggerCalibMaxPosEncodeurMastMeasure;		// trigger to retain min position encodeur mast measure
extern TSigTriggerAdr	tTriggerSavedMinMaxPosEncodeurMastMeasure;	// trigger to save db parameter list
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

#endif /* SRC__APP_CONTROL_WRITESAVEDPARAMETERS_H_ */
