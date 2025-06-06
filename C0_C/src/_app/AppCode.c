//**************************************************************************************************
/*!
@file       AppCode.c
@brief      Application Program
@created    25.04.2018         HYDAC/NJP
*/
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//**************************************************************************************************
#include <string.h>
#include <ItfGlobal.h>
#include <ItfCoreCan.h>
#include <ItfCoreLib.h>
#include <ItfBasOut.h>
#include <ItfAppCode.h>
#include <ItfSigLut.h>
#include <ItfSigLutd.h>
#include <ItfTypes.h>
#include "IO/ReadInputsFunc.h"
#include "IO/WriteOutputsFunc.h"
#include "DiagSystem/DiagSystem.h"
#include "Control/ControlFunc.h"
#include "Control/ControlRadioCommand.h"
#include "Alarms/AlarmManagement.h"
#include "SavedParameters/WriteSavedParameters.h"
#include <Safety/SafetyReadInputsFunc.h>
#include <Safety/SafetyWriteOutput.h>
#include <UpdateParameterTimerBlock.h>
#include <Alarms/AlarmRelease.h>


TSigLutAdr		tForwardPumpTransmission;						/* Lut apply to Forward Pump Transmission rail translation*/
TSigLutAdr		tBackwardPumpTransmission;						/* Lut apply to Backward Pump Transmission rail translation*/
/* declaration Ramp function*/
TSigRampAdr		tLeftTrackPvgRamp;								/* ramp to control Left Track Pvg outputs command*/
TSigRampAdr		tRightTrackPvgRamp;								/* ramp to control Right Track Pvg outputs command*/
TSigRampAdr		tForwardPumpRampCrawlerAdvancement;				/* ramp to control forward pump for crawler advancement*/
TSigRampAdr		tJoystickRampRail;								/* ramp to control joystick avancement rail*/
TSigRampAdr		tPvgTransRailElectricRamp;						/* ramp to control trans rail electric*/
TSigRampAdr		tPourcRegenThermicRamp;							/* ramp to control Pourc Max regen Motor Thermic*/
TSigRampAdr		tBlinkLowRamp;									/* ramp to control Blink Low Frequency*/

/* declaration Timer*/
TEleTimAdr		tTimerSecondServiceAxleBrakeRail;				/* Timer to control the second service axle brake of rail translation*/
TEleTimAdr		tTimerEmergencyServiceBrakeRail;				/* Timer to control emergency service brake rail*/
TEleTimAdr		tTimerServiceBrakeOffRail;						/* Timer to control service brake off rail translation*/
TEleTimAdr  	tTimerStoppedMachineUnblockOscillationAxle;		/* Timer to detect stopped machine unblock oscillation axle*/

TEleTimAdr  	tTimerPressureOsciServiceBrakeTest;				/* Timer to detect brake test for oscillant service brake*/
TEleTimAdr  	tTimerPressureFixeServiceBrakeTest;				/* Timer to detect brake test for fixe service brake*/
TEleTimAdr  	tTimerPressureOsciParkingBrakeTest;				/* Timer to detect brake test for oscillant parking brake*/
TEleTimAdr  	tTimerPressureFixeParkingBrakeTest;				/* Timer to detect brake test for fixe parking brake*/
TEleTimAdr  	tTimerValidConditionTestBrake;					/* Timer to detect valid condition to enable test brake*/
TEleTimAdr      tTimerSendMsgToMastDisplay;          			/* Timer to send cyclically a message to the mast digital display*/
TEleTimAdr 		tTimerStabilizedStop;							/* Timer to check if the machine is stopped after x second*/
TEleTimAdr		tTimerTimeoutSdoRequestEncodeurTurret1;		    /* Timer used to check timeout sdo request to encodeur turret 1*/
TEleTimAdr		tTimerTimeoutSdoRequestEncodeurTurret2;		    /* Timer used to check timeout sdo request to encodeur turret 2*/
TEleTimAdr    	tTimerCycleTime;								/*Timer mesure Cycle Time*/

/*Double freins*/
TEleTimAdr  	tTimerPressureOsci2ndParkingBrakeTest;			/* Timer to detect brake test for oscillant parking brake*/
TEleTimAdr  	tTimerPressureFixe2ndParkingBrakeTest;			/* Timer to detect brake test for fixe parking brake*/


/* declaration trigger*/
TSigTriggerAdr	tTriggerRadioCommandConnected;					/* trigger to detect radio command is connected*/
TSigTriggerAdr	tTriggerCalibTurretAngle;						/* trigger to retain value of turret angle*/
TSigTriggerAdr	tTriggerCalibSlopeLongAngle;					/* trigger to retain value of slope long angle*/
TSigTriggerAdr	tTriggerCalibSlopeTransAngle;					/* trigger to retain value of slope trans angle*/
TSigTriggerAdr	tTriggerSavedCalibrationListC0;					/* trigger to save db calibration list*/
TSigTriggerAdr	tTriggerJoyOutOfNeuPos;							/* trigger when joystick get out of neutral position*/
TSigTriggerAdr	tTriggerInductifInCenterPos;					/* trigger when inductif is set in center position*/
TSigTriggerAdr	tTriggerSendEventDataloggerMsg;					/* trigger to send event datalogger message*/
/* declaration debounce*/
TSigDboAdr tDboUpInclinaisonBasketButton;						/* debounce block to input 48xs Up Inclinaison Basket button*/
TSigDboAdr tDboDownInclinaisonBasketButton;						/* debounce block to input 48xs Down  Inclinaison Basket button*/
TSigDboAdr tDboUpPendularButton;								/* debounce block to input 48xs Up pendular button*/
TSigDboAdr tDboDownPendularButton;								/* debounce block to input 48xs Down pendular button*/
TSigDboAdr tDboRotationCtClockwiseBasketButton;					/* debounce block to input 48xs rotation counter clockwise basket button*/
TSigDboAdr tDboRotationClockwiseBasketButton;					/* debounce block to input 48xs rotation clockwise basket button*/
TSigDboAdr tDboOverload1;										/* debounce block to input 48xs Overload 1*/
TSigDboAdr tDboOverload2;										/* debounce block to input 48xs Overload 2*/
TSigDboAdr tDboNacelleBasketRightSideSensor1;					/* debounce block to input 48xs NacelleBasketRightSideSensor1*/
TSigDboAdr tDboNacelleBasketRightSideSensor2;					/* debounce block to input 48xs NacelleBasketRightSideSensor2*/
TSigDboAdr tDboNacelleBasketLeftSideSensor1;					/* debounce block to input 48xs NacelleBasketLeftSideSensor1*/
TSigDboAdr tDboNacelleBasketLeftSideSensor2;					/* debounce block to input 48xs NacelleBasketLeftSideSensor2*/
TSigDboAdr tDboLowSectorPendularSensor;							/* debounce block to input 48xs LowSectorPendularSensor*/
TSigDboAdr tDboHighSectorPlateSensor;							/* debounce block to input 48xs HighSectorPlateSensor*/
TSigDboAdr tDboFoldedLadderSensor;								/* debounce block to input 48xs FoldedLadderSensor*/
TSigDboAdr tDboRearmementSafetyManSystem;						/* debounce block to input 48xs RearmementSafetyManSystem*/
TSigDboAdr tDboAbutementNacelleTrackSide;						/* debounce block to input 48xs AbutementNacelleTrackSide*/
TSigDboAdr tDboAbutementNacelleCenteredSide;					/* debounce block to input 48xs AbutementNacelleCenteredSide*/
TSigDboAdr tDboDeltaArmJystckCenteredTelescope;					/* debounce block to input 48xs DeltaArmJystckCenteredTelescope*/
TSigDboAdr tDboArrowJoystickCenteredTurret;						/* debounce block to input 48xs ArrowJoystickCenteredTurret*/
TSigDboAdr tDboCenteredAdvanceJoystick;							/* debounce block to input 48xs CenteredAdvanceJoystick*/
TSigDboAdr tDboDeadManPedal;									/* debounce block to input 48xs DeadManPedal*/
TSigDboAdr tDboPressenceInNacelleSensor1;						/* debounce block to input 48xs PressenceInNacelleSensor1*/
TSigDboAdr tDboPressenceInNacelleSensor2;						/* debounce block to input 48xs PressenceInNacelleSensor2*/
TSigDboAdr tDboGachette;										/* debounce block to input 48xs Gachette*/
TSigDboAdr tDboKlaxon;											/* debounce block to input 48xs Klaxon*/
TSigDboAdr tDboStopMotorButton;									/* debounce block to input 48xs StopMotorButton*/
TSigDboAdr tDboAuthorizationWorkKey;							/* debounce block to input 48xs AuthorizationWorkKey*/
TSigDboAdr tDboEtallonnageJoystickButton;						/* debounce block to input 48xs EtallonnageJoystickButton*/
TSigDboAdr tDboClosePortillonSensor;							/* debounce block to input 48xs ClosePortillonSensor*/
TSigDboAdr	tDboOsciServiceBrakeSelectButton;					/* debounce block to button of evision 7 OsciServiceBrakeSelect*/
TSigDboAdr	tDboFixeServiceBrakeSelectButton;					/* debounce block to button of evision 7 FixeServiceBrakeSelect*/
TSigDboAdr	tDboOsciParkingBrakeSelectButton;					/* debounce block to button of evision 7 OsciParkingBrakeSelect*/
TSigDboAdr	tDboFixeParkingBrakeSelectButton;					/* debounce block to button of evision 7 FixeParkingBrakeSelect*/

/*Double freins*/
TSigDboAdr	tDboOsci2ndParkingBrakeSelectButton;				/* debounce block to button of evision 7 Osci2ndParkingBrakeSelect*/
TSigDboAdr	tDboFixe2ndParkingBrakeSelectButton;				/* debounce block to button of evision 7 Fixe2ndParkingBrakeSelect*/

//--------------------------------------------------------------------------------------------------
//! @brief      Application Test Start
//! @created    25.04.2018       HYDAC/NJP
//--------------------------------------------------------------------------------------------------
TVoid vAppTestStart( TVoid )
{

}

//--------------------------------------------------------------------------------------------------
//! @brief      Application Fix Initialization
//! @created    25.04.2018       HYDAC/NJP
//--------------------------------------------------------------------------------------------------
TVoid vAppFixInit( TVoid )
{
	#ifdef DEBUG
	#endif

    #ifdef COMPILER_SWITCH_OEM_HY
    vPrintCtrlMode( TRUE );
    #endif

    #ifdef COMPILER_SWITCH_TAR_PC
    vCoreSimAppCodeCallInMainFct( );
    vPrintLinkToShell( TRUE, TRUE );
    vCoreSimSuppressEcuLogic();
    #endif

	/* ============================================================================================= */
	/* Back Up List																					 */
	/* ============================================================================================= */
	/*HYDAC CK 01.02.2021*/
	vCoreDbSetLoadFast(FALSE);        // check backup lists if primary list has no errors[dflt=FALSE]

}

//--------------------------------------------------------------------------------------------------
//! @brief      Application Safety Initialization
//!             eAppPreStart will be called soon
//! @created    25.04.2018       HYDAC/NJP
//--------------------------------------------------------------------------------------------------
TVoid vAppSafetyInit( TVoid )
{

}

//--------------------------------------------------------------------------------------------------
//! @brief      Application Pre Start
//! @retval     R_OKAY  - eAppStartUp(..) will be called soon
//! @retval     !R_OKAY - this function call again
//! @created    25.04.2018       HYDAC/NJP
//--------------------------------------------------------------------------------------------------
ERetVal eAppPreStart( TVoid )
{
    return R_OKAY;
}

//--------------------------------------------------------------------------------------------------
//! @brief      Application Start Up
//! @retval     R_OKAY  - vSetAppVersion(..) will be called soon
//! @retval     !R_OKAY - this function call again
//! @created    25.04.2018       HYDAC/NJP
//--------------------------------------------------------------------------------------------------
ERetVal eAppStartUp( TVoid )
{
	/* declaration of local variable*/
	ERetVal			eRetVal;

	/* ============================================================================================= */
	/* Create	Ramp																				 */
	/* ============================================================================================= */
	/* create Left Track Pvg ramp signal*/
	eRetVal = eSigRampCreate(&tLeftTrackPvgRamp, "Left Track Pvg ramp");
	if (eRetVal != R_OKAY){ vPrint("ERR: Create Left Track Pvg ramp signal : %d\n", eRetVal);}

	/* create Right Track Pvg ramp signal*/
	eRetVal = eSigRampCreate(&tRightTrackPvgRamp, "Right Track Pvg ramp");
	if (eRetVal != R_OKAY){ vPrint("ERR: Create Right Track Pvg ramp signal : %d\n", eRetVal);}

	 /* create Forward pump transmission ramp signal for crawler advancement*/
	eRetVal = eSigRampCreate(&tForwardPumpRampCrawlerAdvancement, "Forward pump transmission ramp");
	if (eRetVal != R_OKAY){ vPrint("ERR: Create Forward pump transmission ramp signal for crawler advancement : %d\n", eRetVal);}

	/* create tJoystickRampRail*/
	eRetVal = eSigRampCreate(&tJoystickRampRail, " Joystick RampRail ramp");
	if (eRetVal != R_OKAY){ vPrint("ERR: Create JoystickRampRail ramp signal : %d\n", eRetVal);}

	/* create signal ramp of Pvg trans rail electric*/
	 eRetVal = eSigRampCreate(&tPvgTransRailElectricRamp, "Pvg trans rail electric ramp");
	if (eRetVal != R_OKAY){ vPrint("ERR: Create Pvg trans rail electric ramp\n", eRetVal);}

	/* create signal ramp of control Pourc Max regen Motor Thermic*/
	 eRetVal = eSigRampCreate(&tPourcRegenThermicRamp, "Pourc Max regen Motor Thermic");
	if (eRetVal != R_OKAY){ vPrint("ERR: Create ramp to control Pourc Max regen Motor Thermic\n", eRetVal);}

	/* create signal ramp of control Blink Low Frequency*/
	 eRetVal = eSigRampCreate(&tBlinkLowRamp, "Blink Low Frequency");
	if (eRetVal != R_OKAY){ vPrint("ERR: Create ramp to control Blink Low Frequency\n", eRetVal);}

	/* ============================================================================================= */
	/* Create	Timer																				 */
	/* ============================================================================================= */
	/* create timer block, Service axle brake rail translation*/
	eRetVal = eEleTimerCreate(&tTimerSecondServiceAxleBrakeRail, "Active second Service Axle Brake Rail translation timer");
	if (eRetVal != R_OKAY){vPrint("ERR: Create second service Axle Brake Rail translation timer: %d\n", eRetVal);}

	/* create timer block, emergency service brake rail*/
	eRetVal = eEleTimerCreate(&tTimerEmergencyServiceBrakeRail, "emergency service brake rail timer");
	if (eRetVal != R_OKAY){vPrint("ERR: Create emergency service brake rail timer: %d\n", eRetVal);}

	/* create timer block, stabilized stop*/
	eRetVal = eEleTimerCreate(&tTimerStabilizedStop, "Stabilized stop timer");
	if (eRetVal != R_OKAY){vPrint("ERR: Create stabilized stop timer: %d\n", eRetVal);}

	/* create timer block, Service  brake Offrail translation*/
	eRetVal = eEleTimerCreate(&tTimerServiceBrakeOffRail, "Service Brake OffRail translation timer");
	if (eRetVal != R_OKAY){vPrint("ERR: Create Service Brake OffRail translation timer: %d\n", eRetVal);}

	/* create timer block, Stopped machine unblock oscillation axle*/
	eRetVal = eEleTimerCreate(&tTimerStoppedMachineUnblockOscillationAxle, "Stopped machine unblock oscillation axle timer");
	if (eRetVal != R_OKAY){vPrint("ERR: Create Stopped machine unblock oscillation axle timer: %d\n", eRetVal);}

	/* create timer block*/
	eRetVal = eEleTimerCreate(&tTimerPressureOsciServiceBrakeTest, "Pressure for oscillant service brake test timer");
	if (eRetVal != R_OKAY){vPrint("ERR: Create Pressure for oscillant service brake test timer: %d\n", eRetVal);}

	/* create timer block*/
	eRetVal = eEleTimerCreate(&tTimerPressureFixeServiceBrakeTest, "Pressure for fixe service brake test timer");
	if (eRetVal != R_OKAY){vPrint("ERR: Create Pressure for fixe service brake test timer: %d\n", eRetVal);}

	/* create timer block*/
	eRetVal = eEleTimerCreate(&tTimerPressureOsciParkingBrakeTest, "Pressure for osci parking brake test timer");
	if (eRetVal != R_OKAY){vPrint("ERR: Create Pressure for osci parking brake test timer: %d\n", eRetVal);}

	/* create timer block*/
	eRetVal = eEleTimerCreate(&tTimerPressureFixeParkingBrakeTest, "Pressure for fixe parking brake test timer");
	if (eRetVal != R_OKAY){vPrint("ERR: Create Pressure for fixe parking brake test timer: %d\n", eRetVal);}

	/*Double freins*/
	/* create timer block*/
	eRetVal = eEleTimerCreate(&tTimerPressureOsci2ndParkingBrakeTest, "Pressure for osci 2nd parking brake test timer");
	if (eRetVal != R_OKAY){vPrint("ERR: Create Pressure for osci 2nd parking brake test timer: %d\n", eRetVal);}

	/*Double freins*/
	/* create timer block*/
	eRetVal = eEleTimerCreate(&tTimerPressureFixe2ndParkingBrakeTest, "Pressure for fixe 2nd parking brake test timer");
	if (eRetVal != R_OKAY){vPrint("ERR: Create Pressure for fixe 2nd parking brake test timer: %d\n", eRetVal);}


	/* create timer block*/
	eRetVal = eEleTimerCreate(&tTimerValidConditionTestBrake, "Valid condition test brake timer");
	if (eRetVal != R_OKAY){vPrint("ERR: Create Valid condition test brake timer: %d\n", eRetVal);}

	/* create timer block, send message to mast display*/
	eRetVal = eEleTimerCreate(&tTimerSendMsgToMastDisplay, "send message to mast display");
	if (eRetVal != R_OKAY){vPrint("ERR: Create timer send message to mast display: %d\n", eRetVal);}

	/* create timer block, timeout sdo request encodeur turret 1*/
	eRetVal = eEleTimerCreate(&tTimerTimeoutSdoRequestEncodeurTurret1, "Timeout sdo request encodeur turret 1");
	if (eRetVal != R_OKAY){vPrint("ERR: Create Timeout sdo request timer encodeur turret 1: %d\n", eRetVal);}

	/* create timer block, timeout sdo request encodeur turret 2*/
	eRetVal = eEleTimerCreate(&tTimerTimeoutSdoRequestEncodeurTurret2, "Timeout sdo request encodeur turret 2");
	if (eRetVal != R_OKAY){vPrint("ERR: Create Timeout sdo request timer encodeur turret 2: %d\n", eRetVal);}

	/*Create timer block mesure cycle time*/
	eRetVal = eEleTimerCreate(&tTimerCycleTime, "timer used to mesure cycle time");
	if (eRetVal != R_OKAY){vPrint("ERR %d on create timer tTimerCycleTime\n", eRetVal);}

	/* ============================================================================================= */
	/* Create	Trigger																				 */
	/* ============================================================================================= */
	/* create trigger block, radio command connect*/
	eRetVal = eSigTriggerCreate(&tTriggerRadioCommandConnected, "Radio command connect trigger");
	if (eRetVal != R_OKAY){vPrint("ERR: Create Radio command connect trigger\n", eRetVal);}

	/* create trigger block, trigger to retain value of turret angle*/
	eRetVal = eSigTriggerCreate(&tTriggerCalibTurretAngle, "trigger to retain value of turret angle");
	if (eRetVal != R_OKAY){vPrint("ERR: Create trigger to retain value of turret angle\n", eRetVal);}

	/* create trigger block*/
	eRetVal = eSigTriggerCreate(&tTriggerSavedCalibrationListC0, "trigger to save db calibration list ");
	if (eRetVal != R_OKAY){vPrint("ERR: Create trigger to save db calibration list \n", eRetVal);}

	/* create trigger block*/
	eRetVal = eSigTriggerCreate(&tTriggerCalibSlopeLongAngle, "trigger to retain value of slope long angle ");
	if (eRetVal != R_OKAY){vPrint("ERR: Create trigger to retain value of slope long anlge\n", eRetVal);}

	/* create trigger block*/
	eRetVal = eSigTriggerCreate(&tTriggerCalibSlopeTransAngle, "trigger to retain value of slope trans angle ");
	if (eRetVal != R_OKAY){vPrint("ERR: Create trigger to retain value of slope trans\n", eRetVal);}

	/* create trigger block*/
	eRetVal = eSigTriggerCreate(&tTriggerJoyOutOfNeuPos, "trigger joy go out of neutral position ");
	if (eRetVal != R_OKAY){vPrint("ERR: Create trigger of go out of neutral position\n", eRetVal);}

	/* create trigger block*/
	eRetVal = eSigTriggerCreate(&tTriggerInductifInCenterPos, "trigger inductif in center position");
	if (eRetVal != R_OKAY){vPrint("ERR: Create trigger inductif in center position\n", eRetVal);}

	/* create trigger block*/
	eRetVal = eSigTriggerCreate(&tTriggerSendEventDataloggerMsg, "trigger send event datalogger Msg");
	if (eRetVal != R_OKAY){vPrint("ERR: Create trigger send event datalogger Msg\n", eRetVal);}


    /* ============================================================================================= */
  	/* 									Create	Debounce											 */
  	/* ============================================================================================= */
    /* create debounce block, UpInclinaisonBasketButtonValue*/
	eRetVal = eSigDboCreate(&tDboUpInclinaisonBasketButton, "UpInclinaisonBasketButton Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create UpInclinaisonBasketButton Debounce: %d\n", eRetVal);}

    /* create debounce block, DownInclinaisonBasketButtonValue*/
	eRetVal = eSigDboCreate(&tDboDownInclinaisonBasketButton, "DownInclinaisonBasketButton Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create DownInclinaisonBasketButton Debounce: %d\n", eRetVal);}

    /* create debounce block, UpPendularButton*/
	eRetVal = eSigDboCreate(&tDboUpPendularButton, "UpPendularButton Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create UpPendularButton Debounce: %d\n", eRetVal);}

    /* create debounce block, DownPendularButton*/
	eRetVal = eSigDboCreate(&tDboDownPendularButton, "DownPendularButton Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create DownPendularButton Debounce: %d\n", eRetVal);}

    /* create debounce block, RotationCtClockwiseBasketButton*/
	eRetVal = eSigDboCreate(&tDboRotationCtClockwiseBasketButton, "RotationCtClockwiseBasketButton Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create RotationCtClockwiseBasketButton Debounce: %d\n", eRetVal);}

    /* create debounce block, RotationClockwiseBasketButton*/
	eRetVal = eSigDboCreate(&tDboRotationClockwiseBasketButton, "RotationClockwiseBasketButton Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create RotationClockwiseBasketButton Debounce: %d\n", eRetVal);}

    /* create debounce block, Overload1*/
	eRetVal = eSigDboCreate(&tDboOverload1, "Overload1 Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create Overload1 Debounce: %d\n", eRetVal);}

    /* create debounce block, Overload2*/
	eRetVal = eSigDboCreate(&tDboOverload2, "Overload2 Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create Overload2 Debounce: %d\n", eRetVal);}

    /* create debounce block, NacelleBasketRightSideSensor1*/
	eRetVal = eSigDboCreate(&tDboNacelleBasketRightSideSensor1, "NacelleBasketRightSideSensor1Val Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create NacelleBasketRightSideSensor1Val Debounce: %d\n", eRetVal);}

    /* create debounce block, NacelleBasketRightSideSensor2*/
	eRetVal = eSigDboCreate(&tDboNacelleBasketRightSideSensor2, "NacelleBasketRightSideSensor2Val Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create NacelleBasketRightSideSensor2Val Debounce: %d\n", eRetVal);}

    /* create debounce block, NacelleBasketLeftSideSensor1*/
	eRetVal = eSigDboCreate(&tDboNacelleBasketLeftSideSensor1, "NacelleBasketLeftSideSensor1 Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create NacelleBasketLeftSideSensor1 Debounce: %d\n", eRetVal);}

    /* create debounce block, NacelleBasketLeftSideSensor2*/
	eRetVal = eSigDboCreate(&tDboNacelleBasketLeftSideSensor2, "NacelleBasketLeftSideSensor2 Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create NacelleBasketLeftSideSensor2 Debounce: %d\n", eRetVal);}

    /* create debounce block, LowSectorPendularSensor*/
	eRetVal = eSigDboCreate(&tDboLowSectorPendularSensor, "LowSectorPendularSensor Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create LowSectorPendularSensor Debounce: %d\n", eRetVal);}

    /* create debounce block, HighSectorPlateSensor*/
	eRetVal = eSigDboCreate(&tDboHighSectorPlateSensor, "HighSectorPlateSensor Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create HighSectorPlateSensor Debounce: %d\n", eRetVal);}

    /* create debounce block, FoldedLadderSensor*/
	eRetVal = eSigDboCreate(&tDboFoldedLadderSensor, "FoldedLadderSensor Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create FoldedLadderSensor Debounce: %d\n", eRetVal);}

    /* create debounce block, RearmementSafetyManSystem*/
	eRetVal = eSigDboCreate(&tDboRearmementSafetyManSystem, "RearmementSafetyManSystem Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create RearmementSafetyManSystem Debounce: %d\n", eRetVal);}

    /* create debounce block, AbutementNacelleTrackSide*/
	eRetVal = eSigDboCreate(&tDboAbutementNacelleTrackSide, "AbutementNacelleTrackSide Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create AbutementNacelleTrackSide Debounce: %d\n", eRetVal);}

    /* create debounce block, AbutementNacelleCenteredSide*/
	eRetVal = eSigDboCreate(&tDboAbutementNacelleCenteredSide, "AbutementNacelleCenteredSide Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create AbutementNacelleCenteredSide Debounce: %d\n", eRetVal);}

    /* create debounce block, DeltaArmJystckCenteredTelescope*/
	eRetVal = eSigDboCreate(&tDboDeltaArmJystckCenteredTelescope, "DeltaArmJystckCenteredTelescope Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create DeltaArmJystckCenteredTelescope Debounce: %d\n", eRetVal);}

    /* create debounce block, ArrowJoystickCenteredTurret*/
	eRetVal = eSigDboCreate(&tDboArrowJoystickCenteredTurret, "ArrowJoystickCenteredTurret Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create ArrowJoystickCenteredTurret Debounce: %d\n", eRetVal);}

    /* create debounce block, CenteredAdvanceJoystick*/
	eRetVal = eSigDboCreate(&tDboCenteredAdvanceJoystick, "CenteredAdvanceJoystick Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create CenteredAdvanceJoystick Debounce: %d\n", eRetVal);}

    /* create debounce block, DeadManPedal*/
	eRetVal = eSigDboCreate(&tDboDeadManPedal, "DeadManPedal Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create DeadManPedal Debounce: %d\n", eRetVal);}

    /* create debounce block, PressenceInNacelleSensor1*/
	eRetVal = eSigDboCreate(&tDboPressenceInNacelleSensor1, "PressenceInNacelleSensor1 Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create PressenceInNacelleSensor1 Debounce: %d\n", eRetVal);}

    /* create debounce block, PressenceInNacelleSensor2*/
	eRetVal = eSigDboCreate(&tDboPressenceInNacelleSensor2, "PressenceInNacelleSensor2 Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create PressenceInNacelleSensor2 Debounce: %d\n", eRetVal);}

    /* create debounce block, Gachette*/
	eRetVal = eSigDboCreate(&tDboGachette, "Gachette Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create Gachette Debounce: %d\n", eRetVal);}

    /* create debounce block, Klaxon*/
	eRetVal = eSigDboCreate(&tDboKlaxon, "Klaxon Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create Klaxon Debounce: %d\n", eRetVal);}

    /* create debounce block, StopMotorButton*/
	eRetVal = eSigDboCreate(&tDboStopMotorButton, "StopMotorButton Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create StopMotorButton Debounce: %d\n", eRetVal);}

    /* create debounce block, AuthorizationWorkKey*/
	eRetVal = eSigDboCreate(&tDboAuthorizationWorkKey, "AuthorizationWorkKey Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create AuthorizationWorkKey Debounce: %d\n", eRetVal);}

    /* create debounce block, EtallonnageJoystickButton*/
	eRetVal = eSigDboCreate(&tDboEtallonnageJoystickButton, "EtallonnageJoystickButton Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create EtallonnageJoystickButton Debounce: %d\n", eRetVal);}

    /* create debounce block, ClosePortillonSensor*/
	eRetVal = eSigDboCreate(&tDboClosePortillonSensor, "ClosePortillonSensor Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create ClosePortillonSensor Debounce: %d\n", eRetVal);}

    /* create debounce block, OsciServiceBrakeSelectButton*/
	eRetVal = eSigDboCreate(&tDboOsciServiceBrakeSelectButton, "Osci selec brake test Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create Osci service brake test select button Debounce: %d\n", eRetVal);}

    /* create debounce block, FixeServiceBrakeSelectButton*/
	eRetVal = eSigDboCreate(&tDboFixeServiceBrakeSelectButton, "fixe selec brake test Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create fixe service brake test select button Debounce: %d\n", eRetVal);}

    /* create debounce block, OsciParkingBrakeSelectButton*/
	eRetVal = eSigDboCreate(&tDboOsciParkingBrakeSelectButton, "osci selec parking brake test Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create fixe parking brake test select button Debounce: %d\n", eRetVal);}

    /* create debounce block, FixeParkingBrakeSelectButton*/
	eRetVal = eSigDboCreate(&tDboFixeParkingBrakeSelectButton, "fixe selec parking brake test Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create fixe parking brake test select button Debounce: %d\n", eRetVal);}

	/*Double freins*/
    /* create debounce block, Osci2ndParkingBrakeSelectButton*/
	eRetVal = eSigDboCreate(&tDboOsci2ndParkingBrakeSelectButton, "osci selec 2nd parking brake test Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create Osci 2nd parking brake test select button Debounce: %d\n", eRetVal);}

	/*Double freins*/
    /* create debounce block, Fixe2ndParkingBrakeSelectButton*/
	eRetVal = eSigDboCreate(&tDboFixe2ndParkingBrakeSelectButton, "fixe selec 2nd parking brake test Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create fixe 2nd parking brake test select button Debounce: %d\n", eRetVal);}
    /* ============================================================================================= */
  	/* 									Start all sensor											 */
  	/* ============================================================================================= */
	/* test start sensor*/
	gCsr_tStartSensor.u8Command = 1;
	gCsr_tStartSensor.u8NodeId = 0;

	/* send start message*/
	gCSnd_tStartSensor.tInp.boSndNow = TRUE;

    /* ============================================================================================= */
	/* Init variable	*/
	/* ============================================================================================= */
	/* set suplly for sensor*/
	gDb_tRamEcuOutputsC0.boSupplyAnaSensorsCommand = TRUE;
	/* set neon lights*/
	gDb_tRamEcuOutputsC0.boNeonLightsCmd = TRUE;

	return R_OKAY;
}

//--------------------------------------------------------------------------------------------------
//! @brief      Set Application Version
//!             vGetVersionInfo will be called soon
//! @created    25.04.2018       HYDAC/NJP
//--------------------------------------------------------------------------------------------------
TVoid vSetAppVersion( TVoid )
{
    /* Definition of application software version information*/
    TVerChapCom tAppVer = { 1,2,3,4, "27.01.2012", "13:00" };
    TVerAppSwNo tAppSw  = { "0124", "4567", "89AB", "CDEF" };

    /* Set application software version information*/
    eCoreVersSetAppInfo( &tAppVer );

    /* Set application software version information*/
    eCoreVersSetAppInfoExtended( "0123456789", &tAppSw, 1977 );
}

//--------------------------------------------------------------------------------------------------
//! @brief      Show the Version info
//!             eAppInit() will be called soon
//! @param      ptVer - Version Input Vector
//! @created    25.04.2018       HYDAC/NJP
//--------------------------------------------------------------------------------------------------
TVoid vGetVersionInfo( TVerInf *ptVer )
{
    /* Version Information*/
    vPrint("-- APP-VERSION --");
    vPrint("EcuType: %s / %s-Version", cpchCoreEcuType(), cpchCoreEnvType() );
    vPrint("AppVer:  %d %d %d %d",     ptVer->tAppVersion.u8Major, ptVer->tAppVersion.u8Minor, ptVer->tAppVersion.u8Index, ptVer->tAppVersion.u16DevStp );
    vPrint("HcpBios: %d %d %d %d",     ptVer->tHcpBios.u8Major,    ptVer->tHcpBios.u8Minor,    ptVer->tHcpBios.u8Index,    ptVer->tHcpBios.u16DevStp );
    /*Need a pre load of the NVMEM*/
    vPrint("EcuInfo: LastTime:%lusec Err:%d", (TPriU32)(ptVer->tEcuMem.u32EcuLastRunTime/(TUint32)1000), ptVer->tEcuMem.u8RestartReaInfo );
    vPrint("--");
}

//--------------------------------------------------------------------------------------------------
//! @brief      Application Initialization
//! @retval     R_OKAY  - vAppRun(..) will be called soon
//! @retval     !R_OKAY - this function call again
//! @created    25.04.2018       HYDAC/NJP
//--------------------------------------------------------------------------------------------------
ERetVal eAppInit( TVoid )
{
	/* Declaration of local variable*/
	ERetVal			eRetVal;

	/* ============================================================================================= */
	/* 									Init	Ramp												 */
	/* ============================================================================================= */
	/* init Left Track Pvg ramp*/
	eRetVal = eSigRampInit(&tLeftTrackPvgRamp, gEcu_tSys.tSil.u16EcuTaskTime, RAMPTYPE_NONLIN, 0,-10000, 10000);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init Left Track Pvg Ramp signal\n", eRetVal);}

	/* init Right Track Pvg ramp*/
	eRetVal = eSigRampInit(&tRightTrackPvgRamp, gEcu_tSys.tSil.u16EcuTaskTime, RAMPTYPE_NONLIN,0,-10000,10000);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init Right Track Pvg Ramp signal\n", eRetVal);}

	/* init Forward Pump Transmission ramp for crawler advancement*/
	eRetVal = eSigRampInit(&tForwardPumpRampCrawlerAdvancement, gEcu_tSys.tSil.u16EcuTaskTime, RAMPTYPE_NONLIN,
						   0,
						   0,
						   32767);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init Forward Pump Transmission Ramp signal for crawler advancement\n", eRetVal);}

	/* init rail advancement joystick ramp*/
	eRetVal = eSigRampInit(&tJoystickRampRail, gEcu_tSys.tSil.u16EcuTaskTime, RAMPTYPE_NONLIN,0,-10000,10000);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init tJoystickRampRail Ramp signal\n", eRetVal);}

	/* init ramp of Pvg trans rail electric*/
	 eRetVal = eSigRampInit(&tPvgTransRailElectricRamp, gEcu_tSys.tSil.u16EcuTaskTime, RAMPTYPE_NONLIN,0,-10000,10000);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init Pvg trans rail electric ramp %d\n", eRetVal);}

	/* init ramp to control Pourc Max regen Motor Thermic*/
	 eRetVal = eSigRampInit(&tPourcRegenThermicRamp, gEcu_tSys.tSil.u16EcuTaskTime, RAMPTYPE_NONLIN,0,-10000,10000);
	if (eRetVal != R_OKAY){ vPrint("ERR: ramp to control Pourc Max regen Motor Thermic %d\n", eRetVal);}

	/* init ramp to control Blink Low Frequency*/
	 eRetVal = eSigRampInit(&tBlinkLowRamp, gEcu_tSys.tSil.u16EcuTaskTime, RAMPTYPE_NONLIN,0,0,10000);
	if (eRetVal != R_OKAY){ vPrint("ERR: ramp to control Blink Low Frequency %d\n", eRetVal);}

	/* ============================================================================================= */
	/* 									Init Timer													 */
	/* ============================================================================================= */
	/* init timer signal, active second Service brake function rail translation*/
	eRetVal = eEleTimerInit(&tTimerSecondServiceAxleBrakeRail, TIMTYP_ABORT,gDb_tNvParametersC0.u32ServiceAxleBrakeTimeBeforeBrake);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init Service Axle Brake rail translation timer\n", eRetVal);}

	/* init timer signal, emergency service brake*/
	eRetVal = eEleTimerInit(&tTimerEmergencyServiceBrakeRail, TIMTYP_ABORT,gDb_tNvParametersC0.u32TimeEmergencyServiceBrake);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init Emergency service brake rail timer\n", eRetVal);}

	/* init timer signal, Stabilized Stop*/
	eRetVal = eEleTimerInit(&tTimerStabilizedStop, TIMTYP_ABORT,gDb_tNvParametersC0.u32TimeStabilizedStopDetection);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init Stabilized Stop timer\n", eRetVal);}

	/* init timer signal, Service brake  Off rail translation*/
	eRetVal = eEleTimerInit(&tTimerServiceBrakeOffRail, TIMTYP_ABORT,gDb_tNvParametersC0.u32ServiceBrakeOffrailTime);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init Service Brake OffRail translation timer\n", eRetVal);}

	/* init timer signal, stopped machine unblock oscillation axle*/
	eRetVal = eEleTimerInit(&tTimerStoppedMachineUnblockOscillationAxle, TIMTYP_ABORT,gDb_tNvParametersC0.u32TimeStoppedMachineUnblockOscAxle);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init stopped machine unblock oscillation axle timer\n", eRetVal);}

	/* init timer signal,*/
	eRetVal = eEleTimerInit(&tTimerPressureOsciServiceBrakeTest, TIMTYP_ABORT,gDb_tNvParamBrakeTest.u16TimeOsciSerivceBrakeMs);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init Pressure for osci service brake test timer\n", eRetVal);}

	/* init timer signal,*/
	eRetVal = eEleTimerInit(&tTimerPressureFixeServiceBrakeTest, TIMTYP_ABORT,gDb_tNvParamBrakeTest.u16TimeFixeSerivceBrakeMs);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init Pressure for fixe service brake test timer\n", eRetVal);}

	/* init timer signal,*/
	eRetVal = eEleTimerInit(&tTimerPressureOsciParkingBrakeTest, TIMTYP_ABORT,gDb_tNvParamBrakeTest.u16TimeOsciParkingBrakeMs);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init Pressure for osci parking brake test timer\n", eRetVal);}

	/* init timer signal,*/
	eRetVal = eEleTimerInit(&tTimerPressureFixeParkingBrakeTest, TIMTYP_ABORT,gDb_tNvParamBrakeTest.u16TimeFixeParkingBrakeMs);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init Pressure for fixe parking brake test timer\n", eRetVal);}

	/*Double freins*/
	/* init timer signal,*/
	eRetVal = eEleTimerInit(&tTimerPressureOsci2ndParkingBrakeTest, TIMTYP_ABORT,gDb_tNvParamBrakeTest.u16TimeOsciParkingBrakeMs);//Paramètre provisoire
	if (eRetVal != R_OKAY){ vPrint("ERR: Init Pressure for osci 2nd parking brake test timer\n", eRetVal);}

	/*Double freins*/
	/* init timer signal,*/
	eRetVal = eEleTimerInit(&tTimerPressureFixe2ndParkingBrakeTest, TIMTYP_ABORT,gDb_tNvParamBrakeTest.u16TimeFixeParkingBrakeMs);//Paramètre provisoire
	if (eRetVal != R_OKAY){ vPrint("ERR: Init Pressure for fixe 2nd parking brake test timer\n", eRetVal);}

	/* init timer signal,*/
	eRetVal = eEleTimerInit(&tTimerValidConditionTestBrake, TIMTYP_ABORT,gDb_tNvParamBrakeTest.u32ValidCondiEnableTestBrakeTime);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init valid condition to enable test brake timer\n", eRetVal);}

	/* init timer signal, send message to mast display*/
	eRetVal = eEleTimerInit(&tTimerSendMsgToMastDisplay, TIMTYP_RECUR,gDb_tNvParamMastDisplayC0.u32MastDisplayRefreshCycleTime);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init timer send message to mast display\n", eRetVal);}

	/* init timer signal, Timeout Sdo Request encodeur turret 1*/
	eRetVal = eEleTimerInit(&tTimerTimeoutSdoRequestEncodeurTurret1, TIMTYP_ABORT,gDb_tNvParametersC0.u32TimeoutSdoRequestTime);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init tiemout sdo request timer encodeur turret 1 \n", eRetVal);}

	/* init timer signal, Timeout Sdo Request encodeur turret 2*/
	eRetVal = eEleTimerInit(&tTimerTimeoutSdoRequestEncodeurTurret2, TIMTYP_ABORT,gDb_tNvParametersC0.u32TimeoutSdoRequestTime);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init tiemout sdo request timer encodeur turret 2 \n", eRetVal);}

	/*init timer mesure cycle time*/
	eRetVal = eEleTimerInit(&tTimerCycleTime, TIMTYP_STOP, 0);
	if (eRetVal != R_OKAY){vPrint("ERR %d on initialization of the timer tTimerCycleTime\n", eRetVal);}

	/* ============================================================================================= */
	/* 									Init Trigger													*/
	/* ============================================================================================= */
	/* init trigger signal, radio command connect*/
	eRetVal = eSigTriggerInit(&tTriggerRadioCommandConnected, INPBEH_ERR_TO_OUT, TRIG_PULSE, TRIG_RISE_EDGE, 0);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init  radio command connect trigger\n", eRetVal);}

	/* init trigger signal, trigger to retain value of turret angle*/
	eRetVal = eSigTriggerInit(&tTriggerCalibTurretAngle, INPBEH_ERR_TO_OUT, TRIG_PULSE, TRIG_RISE_EDGE, 0);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init  trigger to retain value of turret angle trigger\n", eRetVal);}

	/* init trigger signal,*/
	eRetVal = eSigTriggerInit(&tTriggerSavedCalibrationListC0, INPBEH_ERR_TO_OUT, TRIG_PULSE, TRIG_RISE_EDGE, 0);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init trigger to save db calibration list \n", eRetVal);}

	/* init trigger signal,*/
	eRetVal = eSigTriggerInit(&tTriggerCalibSlopeLongAngle, INPBEH_ERR_TO_OUT, TRIG_PULSE, TRIG_RISE_EDGE, 0);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init trigger to retain value of slope long angle \n", eRetVal);}

	/* init trigger signal,*/
	eRetVal = eSigTriggerInit(&tTriggerCalibSlopeTransAngle, INPBEH_ERR_TO_OUT, TRIG_PULSE, TRIG_RISE_EDGE, 0);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init trigger to retain value of slope trans angle \n", eRetVal);}

	/* init trigger signal,*/
	eRetVal = eSigTriggerInit(&tTriggerJoyOutOfNeuPos, INPBEH_ERR_TO_OUT, TRIG_PULSE, TRIG_RISE_EDGE, 0);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init trigger joys go out of neutral position \n", eRetVal);}

	/* init trigger signal,*/
	eRetVal = eSigTriggerInit(&tTriggerInductifInCenterPos, INPBEH_ERR_TO_OUT, TRIG_PULSE, TRIG_RISE_EDGE, 0);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init trigger inductif in center position \n", eRetVal);}

	/* init trigger signal,*/
	eRetVal = eSigTriggerInit(&tTriggerSendEventDataloggerMsg, INPBEH_ERR_TO_OUT, TRIG_PULSE, TRIG_RISE_EDGE, 0);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init trigger send event datalogger message \n", eRetVal);}



    /* ============================================================================================= */
  	/* 									Init	Debounce											 */
  	/* ============================================================================================= */
    /* Init debounce block, UpInclinaisonBasketButtonValue*/
	eRetVal = eSigDboInit(&tDboUpInclinaisonBasketButton,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init UpInclinaisonBasketButton Debounce: %d\n", eRetVal);}

    /* Init debounce block, DownInclinaisonBasketButton*/
	eRetVal = eSigDboInit(&tDboDownInclinaisonBasketButton,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init DownInclinaisonBasketButton Debounce: %d\n", eRetVal);}

    /* Init debounce block, UpPendularButton*/
	eRetVal = eSigDboInit(&tDboUpPendularButton,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init UpPendularButton Debounce: %d\n", eRetVal);}

    /* Init debounce block, DownPendularButton*/
	eRetVal = eSigDboInit(&tDboDownPendularButton,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init DownPendularButton Debounce: %d\n", eRetVal);}

    /* Init debounce block, RotationCtClockwiseBasketButton*/
	eRetVal = eSigDboInit(&tDboRotationCtClockwiseBasketButton,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init RotationCtClockwiseBasketButton Debounce: %d\n", eRetVal);}

    /* Init debounce block, RotationClockwiseBasketButton*/
	eRetVal = eSigDboInit(&tDboRotationClockwiseBasketButton,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init RotationClockwiseBasketButton Debounce: %d\n", eRetVal);}

    /* Init debounce block, Overload1*/
	eRetVal = eSigDboInit(&tDboOverload1,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init Overload1 Debounce: %d\n", eRetVal);}

    /* Init debounce block, Overload2*/
	eRetVal = eSigDboInit(&tDboOverload2,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init Overload2 Debounce: %d\n", eRetVal);}

    /* Init debounce block, NacelleBasketRightSideSensor1*/
	eRetVal = eSigDboInit(&tDboNacelleBasketRightSideSensor1,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init NacelleBasketRightSideSensor1 Debounce: %d\n", eRetVal);}

    /* Init debounce block, NacelleBasketRightSideSensor2*/
	eRetVal = eSigDboInit(&tDboNacelleBasketRightSideSensor2,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init NacelleBasketRightSideSensor2 Debounce: %d\n", eRetVal);}

    /* Init debounce block, NacelleBasketLeftSideSensor1*/
	eRetVal = eSigDboInit(&tDboNacelleBasketLeftSideSensor1,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init NacelleBasketLeftSideSensor1 Debounce: %d\n", eRetVal);}

    /* Init debounce block, NacelleBasketLeftSideSensor2*/
	eRetVal = eSigDboInit(&tDboNacelleBasketLeftSideSensor2,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init NacelleBasketLeftSideSensor2 Debounce: %d\n", eRetVal);}

    /* Init debounce block, LowSectorPendularSensor*/
	eRetVal = eSigDboInit(&tDboLowSectorPendularSensor,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init LowSectorPendularSensor Debounce: %d\n", eRetVal);}

    /* Init debounce block, HighSectorPlateSensor*/
	eRetVal = eSigDboInit(&tDboHighSectorPlateSensor,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init HighSectorPlateSensor Debounce: %d\n", eRetVal);}

    /* Init debounce block, FoldedLadderSensor*/
	eRetVal = eSigDboInit(&tDboFoldedLadderSensor,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init FoldedLadderSensor Debounce: %d\n", eRetVal);}

    /* Init debounce block, RearmementSafetyManSystem*/
	eRetVal = eSigDboInit(&tDboRearmementSafetyManSystem,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init RearmementSafetyManSystem Debounce: %d\n", eRetVal);}

    /* Init debounce block, AbutementNacelleTrackSide*/
	eRetVal = eSigDboInit(&tDboAbutementNacelleTrackSide,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init AbutementNacelleTrackSide Debounce: %d\n", eRetVal);}

    /* Init debounce block, AbutementNacelleCenteredSide*/
	eRetVal = eSigDboInit(&tDboAbutementNacelleCenteredSide,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init AbutementNacelleCenteredSide Debounce: %d\n", eRetVal);}

    /* Init debounce block, DeltaArmJystckCenteredTelescope*/
	eRetVal = eSigDboInit(&tDboDeltaArmJystckCenteredTelescope,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init DeltaArmJystckCenteredTelescope Debounce: %d\n", eRetVal);}

    /* Init debounce block, ArrowJoystickCenteredTurret*/
	eRetVal = eSigDboInit(&tDboArrowJoystickCenteredTurret,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init ArrowJoystickCenteredTurret Debounce: %d\n", eRetVal);}

    /* Init debounce block, CenteredAdvanceJoystick*/
	eRetVal = eSigDboInit(&tDboCenteredAdvanceJoystick,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init CenteredAdvanceJoystick Debounce: %d\n", eRetVal);}

    /* Init debounce block, DeadManPedal*/
	eRetVal = eSigDboInit(&tDboDeadManPedal,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init DeadManPedal Debounce: %d\n", eRetVal);}

    /* Init debounce block, PressenceInNacelleSensor1*/
	eRetVal = eSigDboInit(&tDboPressenceInNacelleSensor1,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init PressenceInNacelleSensor1 Debounce: %d\n", eRetVal);}

    /* Init debounce block, PressenceInNacelleSensor2*/
	eRetVal = eSigDboInit(&tDboPressenceInNacelleSensor2,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init PressenceInNacelleSensor2 Debounce: %d\n", eRetVal);}

    /* Init debounce block, Gachette*/
	eRetVal = eSigDboInit(&tDboGachette,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init Gachette Debounce: %d\n", eRetVal);}

    /* Init debounce block, Klaxon*/
	eRetVal = eSigDboInit(&tDboKlaxon,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init Klaxon Debounce: %d\n", eRetVal);}

    /* Init debounce block, StopMotorButton*/
	eRetVal = eSigDboInit(&tDboStopMotorButton,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init StopMotorButton Debounce: %d\n", eRetVal);}

    /* Init debounce block, AuthorizationWorkKey*/
	eRetVal = eSigDboInit(&tDboAuthorizationWorkKey,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init AuthorizationWorkKey Debounce: %d\n", eRetVal);}

    /* Init debounce block, EtallonnageJoystickButton*/
	eRetVal = eSigDboInit(&tDboEtallonnageJoystickButton,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init EtallonnageJoystickButton Debounce: %d\n", eRetVal);}

    /* Init debounce block, ClosePortillonSensor*/
	eRetVal = eSigDboInit(&tDboClosePortillonSensor,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init ClosePortillonSensor Debounce: %d\n", eRetVal);}

    /* Init debounce block, tDboOsciServiceBrakeSelectButton*/
	eRetVal = eSigDboInit(&tDboOsciServiceBrakeSelectButton,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init tDboOsciServiceBrakeSelectButton Debounce: %d\n", eRetVal);}

    /* Init debounce block, tDboFixeServiceBrakeSelectButton*/
	eRetVal = eSigDboInit(&tDboFixeServiceBrakeSelectButton,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init tDboFixeServiceBrakeSelectButton Debounce: %d\n", eRetVal);}

    /* Init debounce block, tDboOsciParkingBrakeSelectButton*/
	eRetVal = eSigDboInit(&tDboOsciParkingBrakeSelectButton,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init tDboOsciParkingBrakeSelectButton Debounce: %d\n", eRetVal);}

    /* Init debounce block, tDboFixeParkingBrakeSelectButton*/
	eRetVal = eSigDboInit(&tDboFixeParkingBrakeSelectButton,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init tDboFixeParkingBrakeSelectButton Debounce: %d\n", eRetVal);}

	/*Double freins*/
    /* Init debounce block, tDboOsciParkingBrakeSelectButton*/
	eRetVal = eSigDboInit(&tDboOsci2ndParkingBrakeSelectButton,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init tDboOsci2ndParkingBrakeSelectButton Debounce: %d\n", eRetVal);}

	/*Double freins*/
    /* Init debounce block, tDboFixeParkingBrakeSelectButton*/
	eRetVal = eSigDboInit(&tDboFixe2ndParkingBrakeSelectButton,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init tDboFixe2ndParkingBrakeSelectButton Debounce: %d\n", eRetVal);}


	#ifdef DEBUG
	/* initialize Ethernet download */
	/*    IO_DOWNLOAD_Init();*/
	#endif
	return R_OKAY;
}

//--------------------------------------------------------------------------------------------------
//! @brief      Application Run
//!             If K15 is for the 'Ecu Power Off detection time' OFF, eAppShutDown( ) will be called soon
//! @retval     ptCoreInp - Core Input Vector
//! @retval     ptCoreOut - Core Output Vector
//! @created    25.04.2018       HYDAC/NJP
//! @change  	30.04.2019 NEOTEC/FV supression provisoire car plus rien ne fonctionne
//--------------------------------------------------------------------------------------------------
TVoid vAppRun( TCoreInp *ptCoreInp, TCoreOut *ptCoreOut )
{
   AVOID_WARRNING(ptCoreInp);
   AVOID_WARRNING(ptCoreOut);

	/* set MATCH status*/
   if(gDb_tRamEcuC0RcvFromC1.i32RegimeMotorAlternatorRpm > 0)
   {
	   ptCoreInp->boEngineOn = TRUE;
   }
   else
   {
	   ptCoreInp->boEngineOn = FALSE;
   }

   //modif provisoire pour vérifier si le moteur est démarrer pour que les pressions soient stables
   	static TUint16 u16cpt =0;
   	TUint16 u16cptmax =125; //125x20ms = 2500ms
   	if(gDb_tRamEcuC0RcvFromC1.i32RegimeMotorAlternatorRpm >= 500)
   	{
   		if (u16cpt>=u16cptmax)
   			u16cpt=u16cptmax;
   		else
   			u16cpt=u16cpt+1;
   	}
   	else if (gDb_tRamEcuC0RcvFromC1.i32RegimeMotorAlternatorRpm < 500)
   		u16cpt=0;

   	if ( u16cpt == u16cptmax)
   		gDb_tRamGeneralC0.boEngineRunningStable = TRUE;
   	else
   		gDb_tRamGeneralC0.boEngineRunningStable = FALSE;

	#ifdef DEBUG
	#endif

	/* ============================================================================================= */
	/* Diagnostic System	*/
	/* ============================================================================================= */
   /*Mesure Cycle Time*/
   // Read the elapsed time since the last call
   gDb_tRamGeneralC0.u16RamGeneralNeotecC0_3_8  = (TUint16)u32EleTimerGetDt(&tTimerCycleTime);
   // Restart the timer
   u32EleTimerStart(&tTimerCycleTime);

   /* watchdog state, life byte*/
	vDiagSystem();

	/* ============================================================================================= */
	/*  Saved Parameters	*/
	/* ============================================================================================= */

//	gDb_tRamRailWorkSafetyC0.boTestFranceConfig = gDb_tNvOptionsC0.boFranceConfig; //MODIF FR - Option FR plus utilisée

	vWriteSavedParameters();
	/* upadte parameter timer in run phase*/
	vUpdateParameterTimerBlock();
	/* ============================================================================================= */
	/* Read inputs	*/
	/* ============================================================================================= */
	/* Read physical inputs*/
	vReadInputs();
	vReadInputsCAN();

	/*Test électrique*/
	if(gDb_tRamEcuC0RcvFromC1.i32RegimeMotorAlternatorRpm > 0)
	{
		gDb_tRamGeneralC0.boTestElectricalIO = FALSE; /* variable ecrite par MST seulement*/
	}

	if(gDb_tRamGeneralC0.boTestElectricalIO == FALSE)
	{
		/* safety read inputs*/
		vSafetyReadInputs();
		/* ============================================================================================= */
		/* Control		*/
		/* ============================================================================================= */
		vControl();
		vControlRadioCommand();
	}


	//-----------------------------------------------------------------------------------------------------
	// ARU_RM_CO
	//-----------------------------------------------------------------------------------------------------
	/* If emergency stop not in OFF state (ON, not defined or error state)*/
	vCoreSetErrSetCond(SC_SET_ARU_RM_CO,TRUE);

	/* If emergency stop not in OFF state (ON, not defined or error state)*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC0, DM_ARU_ACTIVE_CO,(TBoolean)(gDb_tRamEcuInputsC0.eAru1ContactState != gDb_tRamEcuInputsC0.eAru2ContactState));

	//-----------------------------------------------------------------------------------------------------
	// ARU_RADIO_CO
	//-----------------------------------------------------------------------------------------------------
	/*emergency stop of the radio control not in OFF state AND power supply of the radio control enabled*/
	vCoreSetErrSetCond(SC_SET_ARU_RADIO_CO,TRUE);

	/* If emergency stop not in OFF state and we are on mode RADIO_CONTROL set condition alarm*/
	if((gDb_tRamEcuInputsC0.eAruRadio1ContactState != gDb_tRamEcuInputsC0.eAruRadio2ContactState) && gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_RADIO)
		gDb_tRamGeneralC0.boSetConditionAruRadioAlarm = TRUE;
	else
		gDb_tRamGeneralC0.boSetConditionAruRadioAlarm = FALSE;

	/* If emergency stop not in OFF state (ON, not defined or error state)*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC0, DM_ARU_RADIO_CO,gDb_tRamGeneralC0.boSetConditionAruRadioAlarm);
	//-----------------------------------------------------------------------------------------------------


	/*boRunningStable48XS*/
	// pour vérifier si le 48x est démarrer pour que les détections des entrées soient stables
	static TUint16 u16cpt48x =0;
	TUint16 u16cptmax48x = 125; //125x20ms = 2500ms
	if(gDb_tRam48XsInputsC0.u16BatterieVoltage48Xs >= 8000)
	{
		if (u16cpt48x>=u16cptmax48x)
			u16cpt48x=u16cptmax48x;
		else
				u16cpt48x=u16cpt48x+1;
	}
	else if (gDb_tRam48XsInputsC0.u16BatterieVoltage48Xs < 8000)
		u16cpt48x=0;

	if ( u16cpt48x == u16cptmax48x)
		gDb_tRamGeneralC0.boRunningStable48XS = TRUE;
	else
		gDb_tRamGeneralC0.boRunningStable48XS = FALSE;

	/*boBypassAlarmManagement*/
	static TBoolean boBypassAlarmManagement = FALSE;
	if(gDb_tRamEcuInputsC0.eStarterMotorState == GE_DI_ON
	|| bo_ARU_C0_Actived == TRUE
	)
		boBypassAlarmManagement = TRUE;
	else
		boBypassAlarmManagement = FALSE;

	/* Falling and Rising boBypassAlarmManagement*/
	TBoolean FallingRisingboBypassAlarmManagement = FALSE;
	static TBoolean PreviousboBypassAlarmManagement = FALSE;
	FallingRisingboBypassAlarmManagement = FALSE;
	if (boBypassAlarmManagement != PreviousboBypassAlarmManagement)
		FallingRisingboBypassAlarmManagement = TRUE;
	/* Memorize the previous value*/
	PreviousboBypassAlarmManagement = boBypassAlarmManagement;

	/*i16CptBypassAlarm*/
	static TInt16 i16CptBypassAlarm = 0;
	static TInt16 i16CptBypassAlarmMax = 0;
	if(gDb_tNvParamAlarmC0.boBypassAlarmActiveC0 == TRUE)
	{
		i16CptBypassAlarmMax = 0;
		boBypassAlarmManagement = FALSE;
	}
	else
		i16CptBypassAlarmMax = gDb_tNvParamAlarmC0.u16TimeBypassFault;/*avant 800x10ms = 8s*/

	if(FallingRisingboBypassAlarmManagement == TRUE)
		i16CptBypassAlarm = 0;
	if (boBypassAlarmManagement == FALSE
	&& 	i16CptBypassAlarm < i16CptBypassAlarmMax
	)
		i16CptBypassAlarm = i16CptBypassAlarm +1;

	/*boTimeBypassAlarmManagement*/
	static TBoolean boTimeBypassAlarmManagement = FALSE;
	if(boBypassAlarmManagement == TRUE
	|| (i16CptBypassAlarm < i16CptBypassAlarmMax)
	)
		boTimeBypassAlarmManagement = TRUE;
	else
		boTimeBypassAlarmManagement = FALSE;
	/*Test électrique*/
	if (boTimeBypassAlarmManagement == FALSE
	&& 	gDb_tRamGeneralC0.boTestElectricalIO == FALSE
	)
	{
		vAlarmsManagement();
	}

	/*i16CptBypassDisplayAlarm*/
	static TInt16 i16CptBypassDisplayAlarm = 0;
	static TInt16 i16CptBypassDisplayAlarmMax = 2250; //2250x20ms = 45s
	if(FallingRisingboBypassAlarmManagement == TRUE)
		i16CptBypassDisplayAlarm = 0;
	if (boBypassAlarmManagement == FALSE
	&& 	i16CptBypassDisplayAlarm < i16CptBypassDisplayAlarmMax
	)
		i16CptBypassDisplayAlarm = i16CptBypassDisplayAlarm +1;

	/*boTimeBypassAlarmDisplay*/
	static TBoolean boTimeBypassAlarmDisplay = FALSE;
	if(boBypassAlarmManagement == TRUE
	|| (i16CptBypassDisplayAlarm < i16CptBypassDisplayAlarmMax)
	)
		boTimeBypassAlarmDisplay = TRUE;
	else
		boTimeBypassAlarmDisplay = FALSE;


	// *************  Set Condition bypass alarms	******************************
	vCoreSetErrSetCond(SC_ALARM_MANAGEMENT_BYPASS, boTimeBypassAlarmManagement== FALSE);
	vCoreSetErrSetCond(SC_ALARM_DISPLAY_BYPASS, boTimeBypassAlarmDisplay== FALSE);
	/*Ajout d'une "set condition" pour la gestion des TIMEOUT sur arrêt du 48XS*/
	vCoreSetErrSetCond(SC_ACTIVE_FAULT_48XS, gDb_tRamGeneralC0.boRunningStable48XS == TRUE
											 && boTimeBypassAlarmManagement== FALSE);
	// *************  Set Condition supply radio for timeout msg can of radi command	******************************
	vCoreSetErrSetCond(SC_SUPPLY_RADIO_ON, (gDb_tRamEcuOutputsC0.eSupplyRadioReceiverValue == GE_DIG_ON
											&& boTimeBypassAlarmManagement== FALSE
											&& gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_RADIO));

	// *************  Set Condition EV forward Backward and return low side	******************************
	vCoreSetErrSetCond(SC_EV_FORWARD_OL,(gDb_tRamEcuOutputsC0.eReturnLowSideEvForwardPumpState == GE_DIG_ON
					   	   	   	   	   	 && boTimeBypassAlarmManagement== FALSE));
	vCoreSetErrSetCond(SC_LOWSIDE_EV_FORWARD_OL,(gDb_tRamEcuOutputsC0.eReturnLowSideEvForwardPumpState == GE_DIG_ON
					   	   	   	   	   	   	   	 && boTimeBypassAlarmManagement== FALSE));

	vCoreSetErrSetCond(SC_EV_BACKWARD_OL,(gDb_tRamEcuOutputsC0.eReturnLowSideEvBackwardPumpState == GE_DIG_ON
			 	 	 	 	 	 	 	  && boTimeBypassAlarmManagement== FALSE));
	vCoreSetErrSetCond(SC_LOWSIDE_EV_BACKWARD_OL,(gDb_tRamEcuOutputsC0.eReturnLowSideEvBackwardPumpState == GE_DIG_ON
			 	 	 	 	 	 	 	 	 	  && boTimeBypassAlarmManagement== FALSE));

	// *************  Set Condition incosistency NcNo of Frame rotation sensor 2 	******************************
	vCoreSetErrSetCond(SC_DOWN_POSITION_OF_HOOK,(gDb_tRamEcuInputsC0.eRailHookSensorState == GE_DI_ON
			 	 	 	 	 	 	 	 	 	 && boTimeBypassAlarmManagement== FALSE));
	// *************  Set Condition option mat measure active		******************************
	vCoreSetErrSetCond(SC_OPTION_MAT_MEASURE_ACTIVE,(gDb_tNvOptionsC0.boMeasuringMat == TRUE
			 	 	 	 	 	 	 	 	 	 	 && boTimeBypassAlarmManagement== FALSE));


	vAlarmsRelease();

	/* ============================================================================================= */
	/* Write outputs		*/
	/* ============================================================================================= */
	/*Test électrique*/
	if (gDb_tRamGeneralC0.boTestElectricalIO == FALSE)

	vSafetyWriteOutput();
	vSetOutputs();
	vWriteCanOutputs();
}

//--------------------------------------------------------------------------------------------------
//! @brief      Application Shut Down
//! @retval     ptCoreInp - Core Input Vector
//! @retval     ptCoreOut - Core Output Vector
//! @retval     R_OKAY  - Ecu shut down
//! @retval     !R_OKAY - this function call again
//! @created    25.04.2018       HYDAC/NJP
//--------------------------------------------------------------------------------------------------
ERetVal eAppShutDown( TCoreInp *ptCoreInp, TCoreOut *ptCoreOut )
{
    AVOID_WARRNING(ptCoreInp);
    AVOID_WARRNING(ptCoreOut);
    return R_OKAY;
}

//--------------------------------------------------------------------------------------------------
//! @brief      Application Test End
//! @created    25.04.2018       HYDAC/NJP
//--------------------------------------------------------------------------------------------------
TVoid vAppTestEnd( TVoid )
{

}
