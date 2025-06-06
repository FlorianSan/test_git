//**************************************************************************************************
//! @file UpdateParameterTimerBlock.h
//! @brief change time of timer block in running phase
//! @author Christian Klein (CK)
//! @created 06.11.2019 HYDAC/CK
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_CONTROL_UPDATEPARAMETERTIMERBLOCK_H_
#define SRC__APP_CONTROL_UPDATEPARAMETERTIMERBLOCK_H_


// INCLUDES =======================================================================================
#include <ItfTypes.h>
#include <App_LibTab.h>
#include <CustomLibrary.h>
#include <ItfBasMath.h>
#include <ControlFunc.h>

// GLOBAL DEFINES =================================================================================

// GLOBAL TYPE DEFINITON ==========================================================================

// GLOBAL VARIABLES DECLARATIONS ==================================================================
extern TEleTimAdr		tTimerSecondServiceAxleBrakeRail;				// Timer to control the second service axle brake of rail translation
extern TEleTimAdr		tTimerEmergencyServiceBrakeRail;				// Timer to control emergency service brake rail
extern TEleTimAdr		tTimerStabilizedStop;							// Timer to control Stabilized Stop
extern TEleTimAdr		tTimerServiceBrakeOffRail;						// Timer to control service brake off rail translation
extern TEleTimAdr  		tTimerStoppedMachineUnblockOscillationAxle;		// Timer to detect stopped machine unblock oscillation axle

extern TEleTimAdr  		tTimerPressureOsciServiceBrakeTest;				// Timer to detect brake test for oscillant service brake
extern TEleTimAdr  		tTimerPressureFixeServiceBrakeTest;				// Timer to detect brake test for fixe service brake
extern TEleTimAdr  		tTimerPressureOsciParkingBrakeTest;				// Timer to detect brake test for oscillant parking brake
extern TEleTimAdr  		tTimerPressureFixeParkingBrakeTest;				// Timer to detect brake test for fixe parking brake
extern TEleTimAdr  		tTimerValidConditionTestBrake;					// Timer to detect valid condition to enable test brake

extern TEleTimAdr      tTimerSendMsgToMastDisplay;          			// Timer to send cyclically a message to the mast digital display

// GLOBAL PROTOTYPES DECLARATIONS =================================================================

//-----------------------------------------------------------------------------------------------------
//! @brief change time of timer block in running phase
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 06.11.2019 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vUpdateParameterTimerBlock(TVoid);


#endif /* SRC__APP_CONTROL_UPDATEPARAMETERTIMERBLOCK_H_ */
