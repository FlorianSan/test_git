//**************************************************************************************************
/*!
@file       AppCode.c
@brief      Application Program
@created    25.04.2018         HYDAC/NJP
//
//11.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
*/
//**************************************************************************************************
#include <string.h>
#include <ItfGlobal.h>
#include <ItfCoreCan.h>
#include <ItfCoreLib.h>
#include <ItfBasOut.h>
#include <ItfAppCode.h>
#ifdef DEBUG
#endif
#include <ReadInputsFunc.h>
#include "IO/ReadInputsFunc.h"
#include "IO/WriteOutputsFunc.h"
#include "DiagSystem/DiagSystem.h"
#include "Control/ControlFunc.h"
#include "CAN/ControlCan48Xs.h"
#include "Alarms/AlarmManagement.h"
#include "SavedParameters/WriteSavedParameters.h"
#include <Safety/SafetyReadInputsFunc.h>
#include <Safety/SafetyWriteOutput.h>
#include <Alarms/AlarmRelease.h>

/* declaration Ramp function*/
TSigRampAdr		tDeltaArmRamp;								/* ramp to control Arm delta*/
TSigRampAdr		tArrowArmRamp;								/* ramp to control Arm arrow*/
TSigRampAdr		tTelescopeArmRamp;							/* ramp to control Arm telescope*/
TSigRampAdr		tRotTurretRamp;								/* ramp to control rotation turret*/
TSigRampAdr		tPvgEvTorRamp;								/* ramp to control output Pvg Ev Tor*/
TSigRampAdr		tPropEvGeneratorRamp;						/* ramp to control output Pror Generator*/
TSigRampAdr		tBlinkLowRamp;								/* ramp to control Blink Low Frequency*/

/* declaration Timer*/
TEleTimAdr		tTimerSartUpMotor;							/* Timer to start up motor*/
TEleTimAdr		tTimerPreheating;							/* Timer to control preheating motor*/
TEleTimAdr		tTimerAntiStartUp;							/* Timer to control anti demarrage*/
TEleTimAdr		tTimerTimeoutSdoRequest;					/* Timer used to check timeout sdo request to the 48XS slave module*/
TEleTimAdr    	tTimerCycleTime;								/*Timer mesure Cycle Time*/

/* declaration Trigger*/

/* declaration debounce*/
TSigDboAdr tDboUpTiltBasketButton;							/* debounce block to input 48xs Up Tilt Basket button*/
TSigDboAdr tDboDownTiltBasketButton;						/* debounce block to input 48xs Down  Tilt Basket button*/
TSigDboAdr tDboUpPendularButton;							/* debounce block to input 48xs Up pendular button*/
TSigDboAdr tDboDownPendularButton;							/* debounce block to input 48xs Down pendular button*/
TSigDboAdr tDboRotationCtClockwiseBasketButton;				/* debounce block to input 48xs rotation counter clockwise basket button*/
TSigDboAdr tDboRotationClockwiseBasketButton;				/* debounce block to input 48xs rotation clockwise basket button*/
TSigDboAdr tDboOverload1;									/* debounce block to input 48xs Overload 1*/
TSigDboAdr tDboOverload2;									/* debounce block to input 48xs Overload 2*/
TSigDboAdr tDboNacelleBasketRightSideSensor1;				/* debounce block to input 48xs NacelleBasketRightSideSensor1*/
TSigDboAdr tDboNacelleBasketRightSideSensor2;				/* debounce block to input 48xs NacelleBasketRightSideSensor2*/
TSigDboAdr tDboNacelleBasketLeftSideSensor1;				/* debounce block to input 48xs NacelleBasketLeftSideSensor1*/
TSigDboAdr tDboNacelleBasketLeftSideSensor2;				/* debounce block to input 48xs NacelleBasketLeftSideSensor2*/
TSigDboAdr tDboLowSectorPendularSensor;						/* debounce block to input 48xs LowSectorPendularSensor*/
TSigDboAdr tDboHighSectorPlateSensor;						/* debounce block to input 48xs HighSectorPlateSensor*/
TSigDboAdr tDboFoldedLadderSensor;							/* debounce block to input 48xs FoldedLadderSensor*/
TSigDboAdr tDboRearmementSafetyManSystem;					/* debounce block to input 48xs RearmementSafetyManSystem*/
TSigDboAdr tDboAbutementNacelleTrackSide;					/* debounce block to input 48xs AbutementNacelleTrackSide*/
TSigDboAdr tDboAbutementNacelleCenteredSide;				/* debounce block to input 48xs AbutementNacelleCenteredSide*/
TSigDboAdr tDboDeltaArmJystckCenteredTelescope;				/* debounce block to input 48xs DeltaArmJystckCenteredTelescope*/
TSigDboAdr tDboArrowJoystickCenteredTurret;					/* debounce block to input 48xs ArrowJoystickCenteredTurret*/
TSigDboAdr tDboCenteredAdvanceJoystick;						/* debounce block to input 48xs CenteredAdvanceJoystick*/
TSigDboAdr tDboDeadManPedal;								/* debounce block to input 48xs DeadManPedal*/
TSigDboAdr tDboPressenceInNacelleSensor1;					/* debounce block to input 48xs PressenceInNacelleSensor1*/
TSigDboAdr tDboPressenceInNacelleSensor2;					/* debounce block to input 48xs PressenceInNacelleSensor2*/
TSigDboAdr tDboJoystickTrigger;								/* debounce block to input 48xs Joystick Trigger*/
TSigDboAdr tDboHorn;										/* debounce block to input 48xs Horn*/
TSigDboAdr tDboStopMotorButton;								/* debounce block to input 48xs StopMotorButton*/
TSigDboAdr tDboAuthorizationWorkKey;						/* debounce block to input 48xs AuthorizationWorkKey*/
TSigDboAdr tDboJoystickButtonCalibration;					/* debounce block to input 48xs Joystick Button Calibration*/
TSigDboAdr tDboClosePortillonSensor;						/* debounce block to input 48xs ClosePortillonSensor*/

/* declaration trigger*/
TSigTriggerAdr	tTriggerCalibAngleEndStopLowDeltaArm;		/* trigger to retain value of angle end stop low delta arm*/
TSigTriggerAdr	tTriggerCalibAngleEndStopHighDeltaArm;		/* trigger to retain value of angle end stop high delta arm*/
TSigTriggerAdr	tTriggerCalibAngleEndStopLowArrowArm;		/* trigger to retain value of angle end stop low arrow arm*/
TSigTriggerAdr	tTriggerCalibAngleEndStopHighArrowArm;		/* trigger to retain value of angle end stop high arrow arm*/
TSigTriggerAdr	tTriggerCalibLenghtEndStopLowTelescopeArm;	/* trigger to retain value of length end stop low telescope arm*/
TSigTriggerAdr	tTriggerCalibLenghtEndStopHighTelescopeArm;	/* trigger to retain value of length end stop high telescope arm*/
TSigTriggerAdr	tTriggerSavedCalibrationListC1;				/* trigger to save db calibration list*/
TSigTriggerAdr	tTriggerCalibMinPosEncodeurMastMeasure;		/* trigger to retain min position encodeur mast measure*/
TSigTriggerAdr	tTriggerCalibMaxPosEncodeurMastMeasure;		/* trigger to retain min position encodeur mast measure*/
TSigTriggerAdr	tTriggerSavedMinMaxPosEncodeurMastMeasure;	/* trigger to save min and max position of Mast Measure encodeur*/

#ifdef DEBUG
#endif
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

	vCoreDbSetLoadFast(FALSE);        /* check backup lists if primary list has no errors[dflt=FALSE]*/

}

//--------------------------------------------------------------------------------------------------
//! @brief      Application Safety Initialization
//!             eAppPreStart will be called soon
//! @created    25.04.2018       HYDAC/NJP
//--------------------------------------------------------------------------------------------------
TVoid vAppSafetyInit( TVoid )
{
	/* local variable*/
	ERetVal			eRetVal;

	eRetVal = eCoreEthFlashStandby();
	if (eRetVal != R_OKAY){vPrint("ERR: Ethernet Flash: %d\n", eRetVal);}
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
	vPrint("Start up phase\n");

	/* local variable*/
	ERetVal			eRetVal;

#ifdef DEBUG
#endif


	gCSnd_tStart_48XS.tInp.eStart = SNDSTART_NA;

	gCSnd_tSdo_Request_48XS.tInp.eStart = SNDSTART_NA;
    /* ============================================================================================= */
  	/* 									create	Ramp												 */
  	/* ============================================================================================= */
    /* create signal ramp of arm delta*/
    eRetVal = eSigRampCreate(&tDeltaArmRamp, "Arm delta ramp");
	if (eRetVal != R_OKAY){ vPrint("ERR: Create arm delta ramp signal\n", eRetVal);}

    /* create signal ramp of arm arrow*/
    eRetVal = eSigRampCreate(&tArrowArmRamp, "Arm arrow ramp");
	if (eRetVal != R_OKAY){ vPrint("ERR: Create arm arrow ramp signal\n", eRetVal);}

    /* create signal ramp of arm telescope*/
    eRetVal = eSigRampCreate(&tTelescopeArmRamp, "Arm telescope ramp");
	if (eRetVal != R_OKAY){ vPrint("ERR: Create arm telescope ramp signal\n", eRetVal);}

    /* create signal ramp of rotation turret*/
    eRetVal = eSigRampCreate(&tRotTurretRamp, "rotation turret ramp");
	if (eRetVal != R_OKAY){ vPrint("ERR: Create rotation turret ramp signal\n", eRetVal);}

    /* create signal ramp of Pvg Ev Tor*/
    eRetVal = eSigRampCreate(&tPvgEvTorRamp, "Pvg Ev Tor ramp");
	if (eRetVal != R_OKAY){ vPrint("ERR: Create Pvg Ev Tor ramp signal\n", eRetVal);}

	/* create signal ramp of Prop Ev Generator*/
	 eRetVal = eSigRampCreate(&tPropEvGeneratorRamp, "Prop Generator ramp");
	if (eRetVal != R_OKAY){ vPrint("ERR: Create Prop Generator ramp signal\n", eRetVal);}

	/* create signal ramp of control Blink Low Frequency*/
	 eRetVal = eSigRampCreate(&tBlinkLowRamp, "Blink Low Frequency");
	if (eRetVal != R_OKAY){ vPrint("ERR: Create ramp to control Blink Low Frequency\n", eRetVal);}


    /* ============================================================================================= */
  	/* 									Create	Timer												 */
  	/* ============================================================================================= */
    /* create timer block, start up motor*/
	eRetVal = eEleTimerCreate(&tTimerSartUpMotor, "Start up motor timer");
	if (eRetVal != R_OKAY){vPrint("ERR: Create start up motor timer: %d\n", eRetVal);}

    /* create timer block, preheating motor*/
	eRetVal = eEleTimerCreate(&tTimerPreheating, "Preheating timer");
	if (eRetVal != R_OKAY){vPrint("ERR: Create preheating motor timer: %d\n", eRetVal);}

    /* create timer block, anti demarrage*/
	eRetVal = eEleTimerCreate(&tTimerAntiStartUp, "Anti start up timer");
	if (eRetVal != R_OKAY){vPrint("ERR: Create anti demarrage timer: %d\n", eRetVal);}

	/* create timer block, timeout sdo request*/
	eRetVal = eEleTimerCreate(&tTimerTimeoutSdoRequest, "Timeout sdo request");
	if (eRetVal != R_OKAY){vPrint("ERR: Create Timeout sdo request timer: %d\n", eRetVal);}

	/*Create timer block mesure cycle time*/
	eRetVal = eEleTimerCreate(&tTimerCycleTime, "timer used to mesure cycle time");
	if (eRetVal != R_OKAY){vPrint("ERR %d on create timer tTimerCycleTime\n", eRetVal);}

    /* ============================================================================================= */
  	/* 									Create	Debounce											 */
  	/* ============================================================================================= */
    /* create debounce block, UpInclinaisonBasketButtonValue*/
	eRetVal = eSigDboCreate(&tDboUpTiltBasketButton, "UpTiltBasketButton Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create TiltBasketButton Debounce: %d\n", eRetVal);}

    /* create debounce block, DownInclinaisonBasketButtonValue*/
	eRetVal = eSigDboCreate(&tDboDownTiltBasketButton, "DownTiltBasketButton Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create DownTiltBasketButton Debounce: %d\n", eRetVal);}

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

    /* create debounce block, Joystick Trigger*/
	eRetVal = eSigDboCreate(&tDboJoystickTrigger, "JoystickTrigger Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create JoystickTrigger Debounce: %d\n", eRetVal);}

    /* create debounce block, Horn*/
	eRetVal = eSigDboCreate(&tDboHorn, "Horn Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create Horn Debounce: %d\n", eRetVal);}

    /* create debounce block, StopMotorButton*/
	eRetVal = eSigDboCreate(&tDboStopMotorButton, "StopMotorButton Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create StopMotorButton Debounce: %d\n", eRetVal);}

    /* create debounce block, AuthorizationWorkKey*/
	eRetVal = eSigDboCreate(&tDboAuthorizationWorkKey, "AuthorizationWorkKey Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create AuthorizationWorkKey Debounce: %d\n", eRetVal);}

    /* create debounce block, JoystickButtonCalibration*/
	eRetVal = eSigDboCreate(&tDboJoystickButtonCalibration, "JoystickButtonCalibration Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create JoystickButtonCalibration Debounce: %d\n", eRetVal);}

    /* create debounce block, ClosePortillonSensor*/
	eRetVal = eSigDboCreate(&tDboClosePortillonSensor, "ClosePortillonSensor Debounce");
	if (eRetVal != R_OKAY){vPrint("ERR: Create ClosePortillonSensor Debounce: %d\n", eRetVal);}

    /* ============================================================================================= */
  	/* Create	Trigger																				 */
  	/* ============================================================================================= */
	/* create trigger block*/
	eRetVal = eSigTriggerCreate(&tTriggerCalibAngleEndStopLowDeltaArm, "trigger to retain value of  angle end stop low delta arm");
	if (eRetVal != R_OKAY){vPrint("ERR: Create trigger to retain value of angle end stop low delta arm\n", eRetVal);}

	/* create trigger block*/
	eRetVal = eSigTriggerCreate(&tTriggerCalibAngleEndStopHighDeltaArm, "trigger to retain value of  angle end stop high delta arm");
	if (eRetVal != R_OKAY){vPrint("ERR: Create trigger to retain value of angle end high delta arm\n", eRetVal);}

	/* create trigger block*/
	eRetVal = eSigTriggerCreate(&tTriggerCalibAngleEndStopLowArrowArm, "trigger to retain value of  angle end stop low arrow arm");
	if (eRetVal != R_OKAY){vPrint("ERR: Create trigger to retain value of angle end stop low arrow arm\n", eRetVal);}

	/* create trigger block*/
	eRetVal = eSigTriggerCreate(&tTriggerCalibAngleEndStopHighArrowArm, "trigger to retain value of angle end stop high arrow arm");
	if (eRetVal != R_OKAY){vPrint("ERR: Create trigger to retain value or angle end stop high arrow arm\n", eRetVal);}

	/* create trigger block*/
	eRetVal = eSigTriggerCreate(&tTriggerSavedCalibrationListC1, "trigger to save db calibration list ");
	if (eRetVal != R_OKAY){vPrint("ERR: Create trigger to save db calibration list \n", eRetVal);}

	/* create trigger block*/
	eRetVal = eSigTriggerCreate(&tTriggerCalibLenghtEndStopLowTelescopeArm, "trigger to retain value of length end stop low telescope arm");
	if (eRetVal != R_OKAY){vPrint("ERR: Create trigger to retain value of length end stop low telescope arm \n", eRetVal);}

	/* create trigger block*/
	eRetVal = eSigTriggerCreate(&tTriggerCalibLenghtEndStopHighTelescopeArm, "trigger to retain value of length end stop high telescope arm");
	if (eRetVal != R_OKAY){vPrint("ERR: Create trigger to retain value of length end stop high telescope arm\n", eRetVal);}

	/* create trigger block*/
	eRetVal = eSigTriggerCreate(&tTriggerCalibMinPosEncodeurMastMeasure, "trigger to retain value of min position encodeur mast measure");
	if (eRetVal != R_OKAY){vPrint("ERR: Create trigger to retain value of min position encodeur mast measure\n", eRetVal);}

	/* create trigger block*/
	eRetVal = eSigTriggerCreate(&tTriggerCalibMaxPosEncodeurMastMeasure, "trigger to retain value of max position encodeur mast measure");
	if (eRetVal != R_OKAY){vPrint("ERR: Create trigger to retain value of max position encodeur mast measure\n", eRetVal);}

	/* create trigger block*/
	eRetVal = eSigTriggerCreate(&tTriggerSavedMinMaxPosEncodeurMastMeasure, "trigger to retain value list parameters min max encodeur mast measure");
	if (eRetVal != R_OKAY){vPrint("ERR: Create trigger to retain value list parameters min max encodeur mast measure\n", eRetVal);}


#ifdef DEBUG
#endif
    /* ============================================================================================= */
	/* Init variable	*/
	/* ============================================================================================= */
	/* set suplly for sensor*/
	gDb_tRamEcuOutputsC1.boSupllyAnaSensorsCommand = TRUE;
	gDb_tRamEcuOutputsC1.boSupllyTorSensorsCommand = TRUE;
	gDb_tRam48XsOutputsC1.boSupplyDeadManPedalAndJoysticks = TRUE;

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


    vPrint("Frame Version:  %d %d %d %d %d %d %s %s",

       ptVer->tFrameVersion.u8Major,

       ptVer->tFrameVersion.u8Minor,

       ptVer->tFrameVersion.u8Index,

       ptVer->tFrameVersion.u8DbParIdx,

       ptVer->tFrameVersion.u8FlaParIdx,

       ptVer->tFrameVersion.u16DevStp,

       ptVer->tFrameVersion.achDate,

       ptVer->tFrameVersion.achTime);

}

//--------------------------------------------------------------------------------------------------
//! @brief      Application Initialization
//! @retval     R_OKAY  - vAppRun(..) will be called soon
//! @retval     !R_OKAY - this function call again
//! @created    25.04.2018       HYDAC/NJP
//--------------------------------------------------------------------------------------------------
ERetVal eAppInit( TVoid )
{
	vPrint("Init phase\n");

	/*local variable*/
	ERetVal			eRetVal;

    /* ============================================================================================= */
  	/* 									Init	Ramp												 */
  	/* ============================================================================================= */
	/* init arm delta ramp*/
	eRetVal = eSigRampInit(&tDeltaArmRamp, gEcu_tSys.tSil.u16EcuTaskTime, RAMPTYPE_NONLIN,0,-10000,10000);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init Arm delta signal ramp %d\n", eRetVal);}

	/* init arm arrow ramp*/
	eRetVal = eSigRampInit(&tArrowArmRamp, gEcu_tSys.tSil.u16EcuTaskTime, RAMPTYPE_NONLIN,0,-10000,10000);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init Arm arrow signal ramp %d\n", eRetVal);}

	/* init arm telescope ramp*/
	eRetVal = eSigRampInit(&tTelescopeArmRamp, gEcu_tSys.tSil.u16EcuTaskTime, RAMPTYPE_NONLIN,0,-10000,10000);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init Arm telescope signal ramp %d\n", eRetVal);}

	/* init rot turret ramp*/
	eRetVal = eSigRampInit(&tRotTurretRamp, gEcu_tSys.tSil.u16EcuTaskTime, RAMPTYPE_NONLIN,0,-10000,10000);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init rotation turret signal ramp %d\n", eRetVal);}

	/* init PvgTor ramp*/
	eRetVal = eSigRampInit(&tPvgEvTorRamp, gEcu_tSys.tSil.u16EcuTaskTime, RAMPTYPE_NONLIN,0,-10000,10000);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init PvgTor signal ramp %d\n", eRetVal);}

	/* init Prop Generator ramp*/
	eRetVal = eSigRampInit(&tPropEvGeneratorRamp, gEcu_tSys.tSil.u16EcuTaskTime, RAMPTYPE_NONLIN,0,-10000,10000);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init Prop Generator ramp %d\n", eRetVal);}

	/* init ramp to control Blink Low Frequency*/
	 eRetVal = eSigRampInit(&tBlinkLowRamp, gEcu_tSys.tSil.u16EcuTaskTime, RAMPTYPE_NONLIN,0,0,10000);
	if (eRetVal != R_OKAY){ vPrint("ERR: ramp to control Blink Low Frequency %d\n", eRetVal);}

    /* ============================================================================================= */
  	/* 									Init Timer													 */
  	/* ============================================================================================= */
	/* init timer signal, start up motor*/
	eRetVal = eEleTimerInit(&tTimerSartUpMotor, TIMTYP_ABORT,gDb_tNvParamMotorC1.u32StartUpTime);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init start up motor timer\n", eRetVal);}

	/* init timer signal, preheating motor*/
	eRetVal = eEleTimerInit(&tTimerPreheating, TIMTYP_ABORT,gDb_tNvParamMotorC1.u32HighForcingTime);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init preheating timer\n", eRetVal);}

	/* init timer signal, anti start up*/
	eRetVal = eEleTimerInit(&tTimerAntiStartUp, TIMTYP_ABORT,gDb_tNvParametersC1.u32AntiDemarrageTime);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init AntiStartUp timer\n", eRetVal);}

	/* init timer signal, Timeout Sdo Request*/
	eRetVal = eEleTimerInit(&tTimerTimeoutSdoRequest, TIMTYP_ABORT,gDb_tNvParametersC1.u32TimeoutSdoRequestTime);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init tiemout sdo request timer\n", eRetVal);}

	/*init timer mesure cycle time*/
	eRetVal = eEleTimerInit(&tTimerCycleTime, TIMTYP_STOP, 0);
	if (eRetVal != R_OKAY){vPrint("ERR %d on initialization of the timer tTimerCycleTime\n", eRetVal);}

    /* ============================================================================================= */
  	/* 									Init	Debounce											 */
  	/* ============================================================================================= */
    /* Init debounce block, UpInclinaisonBasketButtonValue*/
	eRetVal = eSigDboInit(&tDboUpTiltBasketButton,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init UpTiltBasketButton Debounce: %d\n", eRetVal);}

    /* Init debounce block, DownInclinaisonBasketButton*/
	eRetVal = eSigDboInit(&tDboDownTiltBasketButton,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init DownTiltBasketButton Debounce: %d\n", eRetVal);}

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

    /* Init debounce block, JoystickTrigger*/
	eRetVal = eSigDboInit(&tDboJoystickTrigger,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init JoystickTrigger Debounce: %d\n", eRetVal);}

    /* Init debounce block, Horn*/
	eRetVal = eSigDboInit(&tDboHorn,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init Horn Debounce: %d\n", eRetVal);}

    /* Init debounce block, StopMotorButton*/
	eRetVal = eSigDboInit(&tDboStopMotorButton,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init StopMotorButton Debounce: %d\n", eRetVal);}

    /* Init debounce block, AuthorizationWorkKey*/
	eRetVal = eSigDboInit(&tDboAuthorizationWorkKey,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init AuthorizationWorkKey Debounce: %d\n", eRetVal);}

    /* Init debounce block, JoystickButtonCalibration*/
	eRetVal = eSigDboInit(&tDboJoystickButtonCalibration,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init JoystickButtonCalibration Debounce: %d\n", eRetVal);}

    /* Init debounce block, ClosePortillonSensor*/
	eRetVal = eSigDboInit(&tDboClosePortillonSensor,DBOTYP_BOOL,0,50);
	if (eRetVal != R_OKAY){vPrint("ERR: Init ClosePortillonSensor Debounce: %d\n", eRetVal);}

    /* ============================================================================================= */
  	/* 									Init Trigger													 */
  	/* ============================================================================================= */
	/* init trigger signal,*/
	eRetVal = eSigTriggerInit(&tTriggerCalibAngleEndStopLowDeltaArm, INPBEH_ERR_TO_OUT, TRIG_PULSE, TRIG_RISE_EDGE, 0);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init trigger to save db calibration for angle end stop low delta arm\n", eRetVal);}

	/* init trigger signal,*/
	eRetVal = eSigTriggerInit(&tTriggerCalibAngleEndStopHighDeltaArm, INPBEH_ERR_TO_OUT, TRIG_PULSE, TRIG_RISE_EDGE, 0);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init trigger to save db calibration for angle end stop high delta armr\n", eRetVal);}

	/* init trigger signal,*/
	eRetVal = eSigTriggerInit(&tTriggerCalibAngleEndStopLowArrowArm, INPBEH_ERR_TO_OUT, TRIG_PULSE, TRIG_RISE_EDGE, 0);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init trigger to save db calibration for angle end stop low arrow arm\n", eRetVal);}

	/* init trigger signal,*/
	eRetVal = eSigTriggerInit(&tTriggerCalibAngleEndStopHighArrowArm, INPBEH_ERR_TO_OUT, TRIG_PULSE, TRIG_RISE_EDGE, 0);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init trigger to save db calibration for angle end stop high arrow arm\n", eRetVal);}

	/* init trigger signal,*/
	eRetVal = eSigTriggerInit(&tTriggerSavedCalibrationListC1, INPBEH_ERR_TO_OUT, TRIG_PULSE, TRIG_RISE_EDGE, 0);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init trigger to save db calibration list \n", eRetVal);}

	/* init trigger signal,*/
	eRetVal = eSigTriggerInit(&tTriggerCalibLenghtEndStopLowTelescopeArm, INPBEH_ERR_TO_OUT, TRIG_PULSE, TRIG_RISE_EDGE, 0);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init trigger to save length end stop low telescope arm \n", eRetVal);}

	/* init trigger signal,*/
	eRetVal = eSigTriggerInit(&tTriggerCalibLenghtEndStopHighTelescopeArm, INPBEH_ERR_TO_OUT, TRIG_PULSE, TRIG_RISE_EDGE, 0);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init trigger to save length end stop high telescope arm \n", eRetVal);}

	/* init trigger signal,*/
	eRetVal = eSigTriggerInit(&tTriggerCalibMinPosEncodeurMastMeasure, INPBEH_ERR_TO_OUT, TRIG_PULSE, TRIG_RISE_EDGE, 0);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init trigger to retain min position enocdeur mast value \n", eRetVal);}

	/* init trigger signal,*/
	eRetVal = eSigTriggerInit(&tTriggerCalibMaxPosEncodeurMastMeasure, INPBEH_ERR_TO_OUT, TRIG_PULSE, TRIG_RISE_EDGE, 0);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init trigger to retain max position enocdeur mast value \n", eRetVal);}

	/* init trigger signal,*/
	eRetVal = eSigTriggerInit(&tTriggerSavedMinMaxPosEncodeurMastMeasure, INPBEH_ERR_TO_OUT, TRIG_PULSE, TRIG_RISE_EDGE, 0);
	if (eRetVal != R_OKAY){ vPrint("ERR: Init Create trigger to retain value list parameters min max encodeur mast measure \n", eRetVal);}


	vPrint("Init phase finish \n");
	return R_OKAY;


}

//--------------------------------------------------------------------------------------------------
//! @brief      Application Run
//!             If K15 is for the 'Ecu Power Off detection time' OFF, eAppShutDown( ) will be called soon
//! @retval     ptCoreInp - Core Input Vector
//! @retval     ptCoreOut - Core Output Vector
//! @created    25.04.2018       HYDAC/NJP
//! @change  	30.04.2019 NEOTEC/FV supression provisoire car plus rien ne fonctionne
//! @change		05.11.2019 HYDAC/CK add management of set condition SC_OPTION_GENERATOR_ACTIVE
//! @change     19.12.2019 HYDAC/CK add management of set condition SC_OPTION_WHITE_LIGHT_15746
//--------------------------------------------------------------------------------------------------
TVoid vAppRun( TCoreInp *ptCoreInp, TCoreOut *ptCoreOut )
{
    AVOID_WARRNING(ptCoreInp);
    AVOID_WARRNING(ptCoreOut);

	/* set MATCH status*/
    if(gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939 > 0)
    {
    	ptCoreInp->boEngineOn = TRUE;
    }
    else
    {
    	ptCoreInp->boEngineOn = FALSE;
    }
	gDb_tRamGeneralC1.boEngineOn = TRUE;

	gCsr_tHeartbeat_C1.u8State = 5;

	/*modif provisoire pour vérifier si le moteur est démarrer pour que les pressions soient stables*/
	static TUint16 u16cpt =0;
	TUint16 u16cptmax = 200; //200x20ms = 4000ms
	if(gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939 >= 500)/*entrée non J1939 gDb_tRamEcuInputsC1.i32RegimeMotorAlternatorRpm*/
	{
		if (u16cpt>=u16cptmax)
			u16cpt=u16cptmax;
		else
			u16cpt=u16cpt+1;
	}
	else if (gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939 < 500)/*entrée non J1939 gDb_tRamEcuInputsC1.i32RegimeMotorAlternatorRpm*/
		u16cpt=0;

	if ( u16cpt == u16cptmax)
		gDb_tRamGeneralC1.boEngineRunningStable = TRUE;
	else
		gDb_tRamGeneralC1.boEngineRunningStable = FALSE;


	/* ============================================================================================= */
	/* Diagnostic System	*/
	/* ============================================================================================= */
	/*Mesure Cycle Time*/
	// Read the elapsed time since the last call
	gDb_tRamGeneralNeotecC1.u16RamGeneralNeotecC1_3_8  = (TUint16)u32EleTimerGetDt(&tTimerCycleTime);
	// Restart the timer
	u32EleTimerStart(&tTimerCycleTime);

	/* watchdog state, life byte*/
	vDiagSystem();

    /* ============================================================================================= */
	/*  Saved Parameters	*/
	/* ============================================================================================= */
	vWriteSavedParameters();

    /* ============================================================================================= */
	/* Read inputs	*/
	/* ============================================================================================= */
	/* Read physical inputs*/
	vReadInputs();
	vReadInputsCAN();

	if(gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939 > 0)
	{
		gDb_tRamGeneralC1.boTestElectricalIO = FALSE; /* variable ecrite par MST seulement*/
	}

	if(gDb_tRamGeneralC1.boTestElectricalIO == FALSE)
	{
		/* safety read inputs*/
		vSafetyReadInputs();
		/* ============================================================================================= */
		/* Control		*/
		/* ============================================================================================= */
		vControl();
	}

	vControlCan48Xs();

	//-----------------------------------------------------------------------------------------------------
	// DM_ARU_ACTIVE_C1
	//-----------------------------------------------------------------------------------------------------
	/* If emergency stop not in OFF state (ON, not defined or error state)*/
	vCoreSetErrSetCond(SC_SET_ARU_RM_C1,TRUE);

	/* Check if emergency stop not in OFF state (ON, not defined or error state)*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC1, DM_ARU_ACTIVE_C1,(TBoolean)(gDb_tRamEcuInputsC1.eAru1State != gDb_tRamEcuInputsC1.eAru2State));

	//-----------------------------------------------------------------------------------------------------
	// DM_ARU_RADIO_C1
	//-----------------------------------------------------------------------------------------------------
	/*emergency stop of the radio control not in OFF state AND power supply of the radio control enabled*/
	vCoreSetErrSetCond(SC_SET_ARU_RADIO_C1,TRUE);

	/* Check if emergency stop not in OFF state (ON, not defined or error state)*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC1, DM_ARU_RADIO_C1,gDb_tRamEcuC1RcvFromC0.boRestrictedModeAruActive);
	//-----------------------------------------------------------------------------------------------------

	//-----------------------------------------------------------------------------------------------------
	// SC_OPTION_GENERATOR_ACTIVE
	//-----------------------------------------------------------------------------------------------------
	/* check if generator option is selected to set error condition*/
	vCoreSetErrSetCond(SC_OPTION_GENERATOR_ACTIVE,gDb_tNvOptionsC1.boGenerator);

	//-----------------------------------------------------------------------------------------------------
	// SC_OPTION_WHITE_LIGHT_15746
	//-----------------------------------------------------------------------------------------------------
	/* check if white light option is selected to set error condition*/
	vCoreSetErrSetCond(SC_OPTION_WHITE_LIGHT_15746,gDb_tNvOptionsC1.boWhiteLight15746);


	//-----------------------------------------------------------------------------------------------------

	/*bo_ARU_C0_Actived*/
	static TBoolean bo_ARU_C1_Actived = FALSE;
	if(gDb_tRamEcuInputsC1.eAru1State != GE_DI_OFF || gDb_tRamEcuInputsC1.eAru2State != GE_DI_OFF)
		bo_ARU_C1_Actived = TRUE;
	else
		bo_ARU_C1_Actived = FALSE;

	/*boRunningStable48XS*/
	//pour vérifier si le 48x est démarrer pour que les détections des entrées soient stables
	static TUint16 u16cpt48x =0;
	TUint16 u16cptmax48x = 125; //125x20ms = 2500ms
	if(gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs >= 8000)
	{
		if (u16cpt48x>=u16cptmax48x)
			u16cpt48x=u16cptmax48x;
		else
			u16cpt48x=u16cpt48x+1;
	}
	else if (gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs < 8000)
		u16cpt48x=0;

	if ( u16cpt48x == u16cptmax48x)
		gDb_tRamGeneralC1.boRunningStable48XS = TRUE;
	else
		gDb_tRamGeneralC1.boRunningStable48XS = FALSE;



	/*boBypassAlarmManagement*/
	static TBoolean boBypassAlarmManagement = FALSE;
	if(gDb_tRamEcuInputsC1.eStarterMotorState == GE_DI_ON
	|| bo_ARU_C1_Actived == TRUE
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
	if(gDb_tNvParametersC1.boBypassAlarmActiveC1 == TRUE)
	{
		i16CptBypassAlarmMax = 0;
		boBypassAlarmManagement = FALSE;
	}
	else
		i16CptBypassAlarmMax = gDb_tNvParamAlarmC1.u16TimeBypassFault;/*avant 800x10ms = 8s*/

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

	if (boTimeBypassAlarmManagement == FALSE
	&& 	gDb_tRamGeneralC1.boTestElectricalIO == FALSE
	)
	{
		vAlarmsManagement();
	}

	/*i16CptBypassDisplayAlarm*/
	static TInt16 i16CptBypassDisplayAlarm = 0;
	static TInt16 i16CptBypassDisplayAlarmMax = 2250; //2250x20ms = 45000ms
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


	/* *************  Set Condition bypass alarms	******************************/
	vCoreSetErrSetCond(SC_ALARM_MANAGEMENT_BYPASS, boTimeBypassAlarmManagement==FALSE);
	vCoreSetErrSetCond(SC_ALARM_DISPLAY_BYPASS, boTimeBypassAlarmDisplay== FALSE);
	/*Ajout d'une "set condition" pour la gestion des TIMEOUT sur arrêt du 48XS*/
	vCoreSetErrSetCond(SC_ACTIVE_FAULT_48XS, gDb_tRamGeneralC1.boRunningStable48XS == TRUE
											 && boTimeBypassAlarmManagement== FALSE);

	vAlarmsRelease();

    /* ============================================================================================= */
	/* Write outputs		*/
	/* ============================================================================================= */

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
