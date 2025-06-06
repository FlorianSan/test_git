//==================================================================================================
//! @file Datalog.c
//! @brief Management of specific alarms
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author NEOTEC/FV
//! @created 09.03.2020 NEOTEC/FV
//! @history: #- 09.03.2020 NEOTEC/FV interface created
//! copyrights (c) all rights reserved by NEOTEC
//=================================================================================================

#include "Datalog.h"

// GLOBAL VARIABLES DECLARATIONS ==================================================================

//-----------------------------------------------------------------------------------------------------
//! @brief datalog
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 09.03.2020 NEOTEC/FV
//!
//! @change  
//!
//! @care
//! @todo
//
//07.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vDataLogger(TVoid)
{
		static TUint64 StatesOld = 0;

	/* ============================================================================================= */
	/*									Release condition  Alarm 									 */
	/* ============================================================================================= */
		TUint64 StatesCurrent = 0;
	/* set data*/
		gCsr_tDatalogger.boServiceBrake = gDb_tRamEcuOutputsC0.boEvServiceBrakeAxleOsciCmdBool || gDb_tRamEcuOutputsC0.boEvServiceBrakeAxleFixeCmdBool;
		vSet1BitU64( 0, gCsr_tDatalogger.boServiceBrake, &StatesCurrent);
		gCsr_tDatalogger.boParkBrake = gDb_tRamEcuOutputsC0.boEvParkBrakeAxleOscillantCmdBool || gDb_tRamEcuOutputsC0.boEvParkBrakeAxleFixeCmdBool;
		vSet1BitU64( 1, gCsr_tDatalogger.boParkBrake, &StatesCurrent);
		gCsr_tDatalogger.boHorm = gDb_tRamEcuOutputsC0.boKlaxonNeotecCmdBool;
		vSet1BitU64( 2, gCsr_tDatalogger.boHorm, &StatesCurrent);
		gCsr_tDatalogger.boBeacon = gCsr_tData3RcvFromC1.boBeacon;//C1
		vSet1BitU64( 3, gCsr_tDatalogger.boBeacon, &StatesCurrent);
		gCsr_tDatalogger.boFrontAxleDown = gDb_tRamEcuInputsC0.eDownAxleOscillantState == GE_DI_ON;
		vSet1BitU64( 4, gCsr_tDatalogger.boFrontAxleDown, &StatesCurrent);
		gCsr_tDatalogger.boRearAxleDown =  gDb_tRamEcuInputsC0.eDownAxleFixeState == GE_DI_ON;
		vSet1BitU64( 5, gCsr_tDatalogger.boRearAxleDown, &StatesCurrent);
		gCsr_tDatalogger.boFowardMvt = gDb_tRamGeneralC0.eRailTranslationDirection == GE_AV_RAIL_DIR;
		vSet1BitU64( 6, gCsr_tDatalogger.boFowardMvt, &StatesCurrent);
		gCsr_tDatalogger.boReverseMvt = gDb_tRamGeneralC0.eRailTranslationDirection == GE_AR_RAIL_DIR;
		vSet1BitU64( 7, gCsr_tDatalogger.boReverseMvt, &StatesCurrent);
		gCsr_tDatalogger.boHeadLight = gDb_tRamGeneralC0.boWhiteLightAr15746Command || gDb_tRamGeneralC0.boWhiteLightAv15746Command;
		vSet1BitU64( 8, gCsr_tDatalogger.boHeadLight, &StatesCurrent);
		gCsr_tDatalogger.boVigilanceSystem = gDb_tRam48XsInputsC0.boGachette;
		vSet1BitU64( 9, gCsr_tDatalogger.boVigilanceSystem, &StatesCurrent);
		gCsr_tDatalogger.boOverSpeedRailLowMode = gDb_tRamSpeedMaxRail.boLimitSpeedLowSpeedExceeded;
		vSet1BitU64( 10, gCsr_tDatalogger.boOverSpeedRailLowMode, &StatesCurrent);
		gCsr_tDatalogger.boOverSpeedRailHighMode = gDb_tRamSpeedMaxRail.boLimitSpeedHighSpeedExceeded;
		vSet1BitU64( 11, gCsr_tDatalogger.boOverSpeedRailHighMode, &StatesCurrent);
		gCsr_tDatalogger.boAskBrakeTest = gDb_tRamBrakeTest.boNeedTestBrake;
		vSet1BitU64( 12, gCsr_tDatalogger.boAskBrakeTest, &StatesCurrent);
		gCsr_tDatalogger.boTempOilRoad = boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_2, DM_ALARM_HYDRAULIC_TEMP_CRAWLER);
		vSet1BitU64( 13, gCsr_tDatalogger.boTempOilRoad, &StatesCurrent);
		gCsr_tDatalogger.boTempOilRail = boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_2, DM_HIGH_HYDRAULIC_TEMP_RAIL);
		vSet1BitU64( 14, gCsr_tDatalogger.boTempOilRail, &StatesCurrent);
		gCsr_tDatalogger.boSafetyManSystem =gDb_tRamEcuC0RcvFromC1.boSafeManSystem ; /*C1*/
		vSet1BitU64( 15, gCsr_tDatalogger.boSafetyManSystem, &StatesCurrent);
		gCsr_tDatalogger.boOverload = gDb_tRamEcuC0RcvFailluresFromC1.boDm_Overload_Detected_By_C1;/*C1*/
		vSet1BitU64( 16, gCsr_tDatalogger.boOverload, &StatesCurrent);
		gCsr_tDatalogger.boEmergencyMode = gDb_tRamEcuC0RcvFailluresFromC1.boDm_Active_Help;
		vSet1BitU64( 17, gCsr_tDatalogger.boEmergencyMode, &StatesCurrent);
		gCsr_tDatalogger.boTestServiceBrakeOK =  gDb_tRamBrakeTest.boValidFixeServiceBrakeTest && gDb_tRamBrakeTest.boValidOsciServiceBrakeTest;
		vSet1BitU64( 18, gCsr_tDatalogger.boTestServiceBrakeOK, &StatesCurrent);
		gCsr_tDatalogger.boTestParkBrakeOK =  gDb_tRamBrakeTest.boValidOsciParkingBrakeTest	&& gDb_tRamBrakeTest.boValidFixeParkingBrakeTest;
		vSet1BitU64( 19, gCsr_tDatalogger.boTestParkBrakeOK, &StatesCurrent);
		gCsr_tDatalogger.boFaultLenghtSensor = gCsr_tData3RcvFromC1.boFaultLenghtSensor;/*C1*/
		vSet1BitU64( 20, gCsr_tDatalogger.boFaultLenghtSensor, &StatesCurrent);
		gCsr_tDatalogger.boFaultCantSensor = boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_3, DM_SLOPE_FAULT);
		vSet1BitU64( 21, gCsr_tDatalogger.boFaultCantSensor, &StatesCurrent);
		gCsr_tDatalogger.boFaultDeadManPedal = gDb_tRam48XsInputsC0.boDeadManPedal;
		vSet1BitU64( 22, gCsr_tDatalogger.boFaultDeadManPedal, &StatesCurrent);
		gCsr_tDatalogger.boFaultSafetySolenoid = gDb_tRamEcuC0RcvFailluresFromC1.boDm_Ev_Bypass_Fault;
		vSet1BitU64( 23, gCsr_tDatalogger.boFaultSafetySolenoid, &StatesCurrent);
		gCsr_tDatalogger.boMotorOn = gDb_tRamEcuC0RcvFromC1.i32RegimeMotorAlternatorRpm > 0;
		vSet1BitU64( 24, gCsr_tDatalogger.boMotorOn, &StatesCurrent);
		gCsr_tDatalogger.boBasketPostValid = gDb_tRamEcuC0RcvFromC1.eC1NacellePostSelector == GE_DI_ON;
		vSet1BitU64( 25, gCsr_tDatalogger.boBasketPostValid, &StatesCurrent);
		gCsr_tDatalogger.boTurretPostValid = gDb_tRamEcuC0RcvFromC1.eC1TurretPostSelector == GE_DI_ON;
		vSet1BitU64( 26, gCsr_tDatalogger.boTurretPostValid, &StatesCurrent);
		gCsr_tDatalogger.boSetupCodeOk = gDb_tRamEvision7C0.boLoginStatus;
		vSet1BitU64( 27, gCsr_tDatalogger.boSetupCodeOk, &StatesCurrent);
		gCsr_tDatalogger.boOneSpeedSensorFault = boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_2, DM_ONE_SPEED_SENSOR_FAULT);
		vSet1BitU64( 28, gCsr_tDatalogger.boOneSpeedSensorFault, &StatesCurrent);
		gCsr_tDatalogger.boTwoSpeedSensorFault = boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_2, DM_TWO_SPEED_SENSOR_FAULT);
		vSet1BitU64( 29, gCsr_tDatalogger.boTwoSpeedSensorFault, &StatesCurrent);
		gCsr_tDatalogger.boTurretSensorsFailures = boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_5, DM_TURRET_SENSOR_FAULT);
		vSet1BitU64( 30, gCsr_tDatalogger.boTurretSensorsFailures, &StatesCurrent);
		gCsr_tDatalogger.boUnused = FALSE;
		vSet1BitU64( 31, gCsr_tDatalogger.boUnused, &StatesCurrent);

		/*Pour éviter des envois trés frequent lorsque l'on roule, déplacé aprés le test des évenements*/
//		gCsr_tDatalogger.u16Distance_Km = (TUint16) gCsr_tMsg12C0SendToEvision7.u32gTotalDistance;
//		gCsr_tDatalogger.u16Speed10th_Kmh = (TUint16) gCsr_tData3SendToC1.i32SpeedVehicleKmhx100;


		if(StatesCurrent != StatesOld)
			gDb_tRamGeneralC0.boSendEventDataloggerMessage = TRUE;
		else
			gDb_tRamGeneralC0.boSendEventDataloggerMessage = FALSE;

		StatesOld = StatesCurrent;

		/*Pour éviter des envois trés frequent lorsque l'on roule, car statsOld serait toujours diférent de stateCurrent*/
		gCsr_tDatalogger.u16Distance_Km = (TUint16) gCsr_tMsg12C0SendToEvision7.u32gTotalDistance;
		gCsr_tDatalogger.u16Speed10th_Kmh = (TUint16) gCsr_tData3SendToC1.i32SpeedVehicleKmhx100;
}
