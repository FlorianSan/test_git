//**************************************************************************************************
//! @file Control.h
//! @brief Control system
//! @author Christian Klein (CK)
//! @created 23.07.2018 HYDAC/CK
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_CONTROL_CONTROLFUNC_H_
#define SRC__APP_CONTROL_CONTROLFUNC_H_


// INCLUDES =======================================================================================
#include <ItfTypes.h>
#include <App_LibTab.h>
#include <CustomLibrary.h>
#include <ItfBasMath.h>
#include <ControlTrackTranslationFunc.h>
#include <ControlRailTranslationElectric.h>
#include <ControlRailTranslationFunc.h>
#include "ControlBrakes.h"
#include <ControlMotor.h>
#include <ControlLight.h>
#include <ControlKlaxon.h>
#include <ControlUnBlockOscillationAxle.h>
#include <CAN/StartSensor.h>
#include <SpeedMaxTranslationRail.h>
#include <RailWorkSafety.h>
#include <BrakeTest.h>
#include <BreakInBrake.h>
#include "SelectControlPost.h"
#include "SafetyAuthorizeTransRail.h"
#include "SafetyAuthorizeTransTrack.h"
#include "SafetySelectControlPost.h"
#include "SafetyServiceBrake.h"
#include "SafetySpeedMaxTranslationRail.h"
#include "ControlMastDigitalDisplay.h"
#include "SafetyRailWorkSafety.h"
#include "DmcControllerSigma2N.h"
#include "SafetyCheckEmergencyStop.h"

// GLOBAL DEFINES =================================================================================

// GLOBAL TYPE DEFINITON ==========================================================================

// GLOBAL VARIABLES DECLARATIONS ==================================================================

extern TBoolean bo_ARU_C0_Actived; //Global Variable
extern TBoolean bo_ARU_RADIO_C0_Actived; //Global Variable


//declaration trigger
extern TSigTriggerAdr	tTriggerJoyOutOfNeuPos;							// trigger when joystick get out of neutral position

// declaration LUT function
extern TSigLutAdr		tLeftManipulatorRadioControlLut;				// Lut apply to signal of left manipulator radio control
extern TSigLutAdr		tRightManipulatorRadioControlLut;				// Lut apply to signal of right manipulator radio control
extern TSigLutAdr		tLeftTrackPvgAvLut;								// Lut apply to Left track Pvg command Av
extern TSigLutAdr		tLeftTrackPvgArLut;								// Lut apply to Left track Pvg command Ar
extern TSigLutAdr		tRightTrackPvgAvLut;							// Lut apply to Left track Pvg command Av
extern TSigLutAdr		tRightTrackPvgArLut;							// Lut apply to Left track Pvg command Av

//extern TSigLutAdr		tJoystickAdvanceRail;							// Lut apply to joystick advance signal of nacelle post
extern TSigLutAdr		tForwardPumpTransmission;						// Lut apply to Forward Pump Transmission rail translation
extern TSigLutAdr		tBackwardPumpTransmission;						// Lut apply to Backward Pump Transmission rail translation
// declaration Ramp function
extern TSigRampAdr		tLeftTrackPvgRamp;								// ramp to control Left Track Pvg outputs command
extern TSigRampAdr		tRightTrackPvgRamp;								// ramp to control Left Track Pvg outputs command
extern TSigRampAdr		tForwardPumpTransmissionRamp;					// ramp to control Forward Pump Transmission outputs command
extern TSigRampAdr		tBackwardPumpTransmissionRamp;					// ramp to control Backward Pump Transmission outputs command
extern TSigRampAdr		tForwardPumpRampCrawlerAdvancement;				// ramp to control forward pump for crawler advancement
extern TSigRampAdr		tJoystickRampRail;								// ramp to control joystick avancement rail
extern TSigRampAdr		tPvgTransRailElectricRamp;						// ramp to control trans rail electric
extern TSigRampAdr		tPourcRegenThermicRamp;							// ramp to control Pourc Max regen Motor Thermic
extern TSigRampAdr		tBlinkLowRamp;									// ramp to control Blink Low Frequency


// declaration timer
extern TEleTimAdr		tTimerSecondServiceAxleBrakeRail;				// Timer to control the second service axle brake of rail translation
extern TEleTimAdr		tTimerEmergencyServiceBrakeRail;				// Timer to control emergency service brake rail
extern TEleTimAdr		tTimerStabilizedStop;							// Timer to control Stabilized Stop
extern TEleTimAdr		tTimerServiceBrakeOffRail;						// Timer to control service brake off rail translation
extern TEleTimAdr  		tTimerStoppedMachineUnblockOscillationAxle;		// Timer to detect stopped machine unblock oscillation axle
extern TEleTimAdr 	 	tTimerValidConditionTestBrake;					// Timer to detect valid condition to enable test brake
extern TEleTimAdr  		tTimerPressureOsciServiceBrakeTest;				// Timer to detect brake test for oscillant service brake
extern TEleTimAdr  		tTimerPressureFixeServiceBrakeTest;				// Timer to detect brake test for fixe service brake
extern TEleTimAdr  		tTimerPressureOsciParkingBrakeTest;				// Timer to detect brake test for oscillant parking brake
extern TEleTimAdr  		tTimerPressureFixeParkingBrakeTest;				// Timer to detect brake test for fixe parking brake
extern TEleTimAdr  		tTimerPressureOsci2ndParkingBrakeTest;				// Timer to detect brake test for oscillant 2nd parking brake
extern TEleTimAdr  		tTimerPressureFixe2ndParkingBrakeTest;				// Timer to detect brake test for fixe 2nd parking brake
extern TEleTimAdr      tTimerSendMsgToMastDisplay;          			// Timer to send cyclically a message to the mast digital display
// GLOBAL PROTOTYPES DECLARATIONS =================================================================

//-----------------------------------------------------------------------------------------------------
//! @brief Control system
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 23.07.2018 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
extern TVoid vControl(TVoid);

//-----------------------------------------------------------------------------------------------------
//! @brief Defined the work mode
//!
//! @param[in]	 TBoolean 		- Centered Turret
//! @param[in]	 TBoolean		- Centered Nacelle
//! @param[in]	 TBoolean		- Work Key Centered
//! @param[in] 	 TBoolean		- Work Key Bilateral
//! @param[in] 	 TBoolean		- Work Key Left Side
//! @param[in] 	 TBoolean		- Work Key Right Side
//! @param[in] 	 TBoolean		- Work Abutment Right Side Turret
//! @param[in] 	 TBoolean		- Work Abutment Left Side Turret
//! @param[in]     TBoolean	 	- Work Abutment Centered Turret
//! @param[out]    EWorkMode	 	- Current mode of work
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 26.07.2018 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo change TBoolean to EDistate
//-----------------------------------------------------------------------------------------------------
TVoid vDefinedWorkMode(TInt16 i16TurretEncoderAngle, ERailWorkMode *eCurrentWorkMode);


//-----------------------------------------------------------------------------------------------------
//! @brief Defined transport posititon
//!
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 30.07.2018 HYDAC/CK
//!
//! @change  18.03.2019 HYDAC/CK refresh code
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vDefinedTransportPosition(TVoid);


//-----------------------------------------------------------------------------------------------------
//! @brief Control authorization axle movement
//!
//! @param[in]	 	 EDiState 						- Up Axle fixe sensor
//! @param[in]		 EDiState 						- Down Axle fixe sensor
//! @param[in]	 	 EDiState 						- Up Axle Oscillant sensor
//! @param[in]		 EDiState 						- Down Axle Oscillant sensor
//! @param[out] 	 boAutorizeUpAxlefixe 			- autorize to use up Axlefixe function
//! @param[out] 	 boAutorizeDownAxlefixe 		- autorize to use down Axlefixe function
//! @param[out] 	 boAutorizeUpAxleOscillant 		- autorize to use up AxleOscillant function
//! @param[out] 	 boAutorizeDownAxleOscillant 	- autorize to use down AxleOscillant function
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 30.07.2018 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vAuthorizationAxleRailMovement(EDiState boUpAxleFixeSensor,EDiState boDownAxleFixeSensor,EDiState boUpAxleOscillantSensor,EDiState boDownAxleOscillantSensor,TBoolean  *boAutorizeUpAxlefixe, TBoolean *boAutorizeDownAxlefixe,TBoolean *boAutorizeUpAxleOscillant,TBoolean *boAutorizeDownAxleOscillant);

//-----------------------------------------------------------------------------------------------------
//! @brief Control Up/Down axle rail
//!
//! @param[in]	 TBoolean 				- Up Axle oscillant
//! @param[in]	 TBoolean 				- Down Axle oscillant
//! @param[in] 	 TBoolean 				- autorize to use up axle oscillant
//! @param[in] 	 TBoolean 				- autorize to use down axle oscillant
//! @param[in]	 TBoolean 				- Up Axle fixe
//! @param[in]	 TBoolean 				- Down Axle fixe
//! @param[in] 	 TBoolean 				- autorize to use up axle fixe
//! @param[in] 	 TBoolean 				- autorize to use down axle fixe
//! @param[out]  TBoolean			 	- Output Up Axle oscillant
//! @param[out]  TBoolean			 	- Output Down Axle oscillant
//! @param[out]  TBoolean			 	- Output Up Axle fixe
//! @param[out]  TBoolean			 	- Output Down Axle fixe
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 30.07.2018 HYDAC/CK
//!
//! @change	 09.01.2019 HYDAC/CK Regroup movement up/down for axle fixe and oscillant
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vAxleRailControl(TBoolean boUpAxleOscillant, TBoolean boDownAxleOscillant ,TBoolean boAutorizeUpAxleOscillant,TBoolean boAutorizeDownAxleOscillant,
					   TBoolean boUpAxleFixe, TBoolean boDownAxleFixe ,TBoolean boAutorizeUpAxleFixe,TBoolean boAutorizeDownAxleFixe,
					   TBoolean  *boUpAxleOscillantCmd, TBoolean *boDownAxleOscillantCmd,
					   TBoolean  *boUpAxleFixeCmd, TBoolean *boDownAxleFixeCmd);


//-----------------------------------------------------------------------------------------------------
//! @brief Control low side output for Ev Forward and backward
//!
//! @param[in]	  				-
//! @param[out]  			 	-
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 13.12.2018 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vControlLowSideEvForwardBackward(TVoid);

#endif  /*SRC__APP_CONTROL_CONTROLFUNC_H_*/
