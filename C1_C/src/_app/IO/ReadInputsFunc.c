//==================================================================================================
	//! @file ReadInputsFunc.c
//! @brief Read analog and digital inputs and convert values
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 23.07.2018 HYDAC/CK
//! @history: #- CK 23.07.2018 HYDAC/MS interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include <ReadInputsFunc.h>

//-----------------------------------------------------------------------------------------------------
//! @brief read all physical inputs
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 23.07.2018 HYDAC/CK
//!
//! @change 27.12.2018 HYDAC/CK remove forcing low regime motor
//! 		28.10.2020 HYDAC/CK	Remove gInFreq_tRegimeMoteurAlternator, gSwiNo_tOilPressure , gSwiNo_tWaterTemperature , gSwiNo_tStopMotorInfo
//!
//! @care
//! @todo
//
//11.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vReadInputs(TVoid)
{
	/* run block inputs current*/
	eBloInCurDbl(&gInCurDbl_tDeltaArmAngularSensor);
	eBloInCurDbl(&gInCurDbl_tArrowArmAngularSensor);
	eBloInCur(&gInCur_tTransmission1PressureSensor);
	eBloInCur(&gInCur_tTransmission2PressureSensor);
	eBloInCur(&gInCur_tBypassPressureSensor);
	eBloInCur(&gInCur_tOilTankTemperature);
	/* run block resistive*/
	eBloInResist(&gInResist_tGasGauge);
	/* run block inputs digital*/
	eBloSwiNo(&gSwiNo_tActiveHelp);
	eBloSwiNo(&gSwiNo_tTurretPostSelector);
	eBloSwiNo(&gSwiNo_tRadioPostSelector);
	eBloSwiNo(&gSwiNo_tNacellePostSelector);
	eBloSwiNo(&gSwiNo_tDeltaArmFoldedSensor);
	eBloSwiNo(&gSwiNo_tBoomArmFoldedSensor);
	eBloSwiNo(&gSwiNo_tAlternatorChargeOK);
	eBloSwiNo(&gSwiNo_tAru1);
	eBloSwiNo(&gSwiNo_tAru2);
	eBloSwiNo(&gSwiNo_tEntryTelescopeFdcSensor);
	eBloSwiNo(&gSwiNo_tFaultPvgDeltaArm);
	eBloSwiNo(&gSwiNo_tFaultPvgArrowArm);
	eBloSwiNo(&gSwiNo_tFaultPvgTelescopeArm);
	eBloSwiNo(&gSwiNo_tFaultPvgEvProTOR);
	eBloSwiNo(&gSwiNo_tStarterMotorState);


#ifdef COMPILER_SWITCH_TAR_HW //C14 //SIMULATION POUR COMPILLER EN MODE PC
	/******************			assign inputs to RAM values			*****************/

	/* Inputs current*/
		/* DeltaArm1AngularSensor*/
		gDb_tRamEcuInputsC1.bi3DeltaArmAngularSensorState = gInCurDbl_tDeltaArmAngularSensor.tOut.tOutVal.bi3Dir;
		gDb_tRamEcuInputsC1.i16DeltaArmAngularSensorValue = gInCurDbl_tDeltaArmAngularSensor.tOut.tOutVal.i16Sig;
		gDb_tRamEcuInputsC1.u16DeltaArmAngularSensorRawValueMas = gInCurDbl_tDeltaArmAngularSensor.tOut.u16RawValMaster;
		gDb_tRamEcuInputsC1.u16DeltaArmAngularSensorRawValueSla = gInCurDbl_tDeltaArmAngularSensor.tOut.u16RawValSlave;
		gDb_tRamEcuInputsC1.i16DeltaArmAngleValue = gDb_tRamEcuInputsC1.i16DeltaArmAngularSensorValue;

		/* ArrowArmAngularSensor*/
		gDb_tRamEcuInputsC1.bi3ArrowArmAngularSensorState = gInCurDbl_tArrowArmAngularSensor.tOut.tOutVal.bi3Dir;
		gDb_tRamEcuInputsC1.i16ArrowArmAngularSensorValue = gInCurDbl_tArrowArmAngularSensor.tOut.tOutVal.i16Sig;
		gDb_tRamEcuInputsC1.u16ArrowArmAngularSensorRawValueMas = gInCurDbl_tArrowArmAngularSensor.tOut.u16RawValMaster;
		gDb_tRamEcuInputsC1.u16ArrowArmAngularSensorRawValueSla = gInCurDbl_tArrowArmAngularSensor.tOut.u16RawValSlave;
		gDb_tRamEcuInputsC1.i16ArrowArmAngleValue = gDb_tRamEcuInputsC1.i16ArrowArmAngularSensorValue;

		/* Transmission1PressureSensor*/
		gDb_tRamEcuInputsC1.bi3Transmission1PressureSensorState = gInCur_tTransmission1PressureSensor.tOut.tOutVal.bi3Dir;

		static TFloat64	f64Transmission1PressureSensorValueSum = 0;

		f64Transmission1PressureSensorValueSum = f64MovAverage(gInCur_tTransmission1PressureSensor.tOut.tOutVal.i16Sig, f64Transmission1PressureSensorValueSum, gDb_tNvParametersC1.u8NbElementTransissionPressure);
		gDb_tRamEcuInputsC1.i16Transmission1PressureSensorValue = (TInt16)f64Transmission1PressureSensorValueSum;

		/* Transmission2PressureSensor*/
		gDb_tRamEcuInputsC1.bi3Transmission2PressureSensorState = gInCur_tTransmission2PressureSensor.tOut.tOutVal.bi3Dir;

		static TFloat64	f64Transmission2PressureSensorValueSum = 0;

		f64Transmission2PressureSensorValueSum = f64MovAverage(gInCur_tTransmission2PressureSensor.tOut.tOutVal.i16Sig, f64Transmission2PressureSensorValueSum, gDb_tNvParametersC1.u8NbElementTransissionPressure);
		gDb_tRamEcuInputsC1.i16Transmission2PressureSensorValue = (TInt16)f64Transmission2PressureSensorValueSum;

		/* bypass pressure sensor*/
		gDb_tRamEcuInputsC1.bi3BypassPressureSensorState = gInCur_tBypassPressureSensor.tOut.tOutVal.bi3Dir;
		gDb_tRamEcuInputsC1.i16BypassPressureSensorValue = gInCur_tBypassPressureSensor.tOut.tOutVal.i16Sig;

		/*OilTankTemperature Sensor*/
		gDb_tRamEcuInputsC1.bi3OilTankTemperatureState = gInCur_tOilTankTemperature.tOut.tOutVal.bi3Dir;
		gDb_tRamEcuInputsC1.i16OilTankTemperatureValue = gInCur_tOilTankTemperature.tOut.tOutVal.i16Sig;
		gDb_tRamEcuInputsC1.u16OilTankTemperatureRawValue = gInCur_tOilTankTemperature.tOut.u16RawVal;

	/* Inputs resistive*/
	/* GasGauge*/
		static TFloat64	f64GasGaugeSum = 0;
		f64GasGaugeSum = f64MovAverage(gInResist_tGasGauge.tOut.i16ScalVal, f64GasGaugeSum, 100);
		gDb_tRamEcuInputsC1.i16GasGaugeValue = (TInt16)f64GasGaugeSum;
		gDb_tRamEcuInputsC1.u32GasGaugeRawValue = gInResist_tGasGauge.tOut.u32RawVal;

	/* Inputs Frequency*/
	/* Alternator*/
			gDb_tRamEcuInputsC1.eActiveHelpState = (EDiState) gSwiNo_tActiveHelp.tOut.bi2SwiNoState;

		if(gDb_tRamEcuInputsC1.eActiveHelpState == GE_DI_ON)
			gDb_tRamEcuInputsC1.eActiveHelpState = GE_DI_OFF;
		else if (gDb_tRamEcuInputsC1.eActiveHelpState == GE_DI_OFF)
			gDb_tRamEcuInputsC1.eActiveHelpState = GE_DI_ON;

			gDb_tRamEcuInputsC1.u16ActiveHelpRawValue =  gSwiNo_tActiveHelp.tOut.u16RawVal;

		/* gSwiNo_tTurretPostSelector*/
		gDb_tRamEcuInputsC1.eTurretPostSelectorState = (EDiState) gSwiNo_tTurretPostSelector.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC1.u16StopMotorInfoRawValue =  gSwiNo_tTurretPostSelector.tOut.u16RawVal;

		/* gSwiNo_tRadioPostSelector*/
		gDb_tRamEcuInputsC1.eRadioPostSelectorState = (EDiState) gSwiNo_tRadioPostSelector.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC1.u16RadioPostSelectorRawValue =  gSwiNo_tRadioPostSelector.tOut.u16RawVal;

		/* gSwiNo_tNacellePostSelector*/
		gDb_tRamEcuInputsC1.eNacellePostSelectorState = (EDiState) gSwiNo_tNacellePostSelector.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC1.u16NacellePostSelectorRawValue =  gSwiNo_tNacellePostSelector.tOut.u16RawVal;

		/*gSwiNo_tDeltaArmFoldedSensor*/
		gDb_tRamEcuInputsC1.eFoldedDeltaArmSensorState = (EDiState) gSwiNo_tDeltaArmFoldedSensor.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC1.u16FoldedDeltaArmSensorRawValue =  gSwiNo_tDeltaArmFoldedSensor.tOut.u16RawVal;

		/*gSwiNo_tBoomArmFoldedSensor*/
		gDb_tRamEcuInputsC1.eFoldedBoomArmSensorState = (EDiState) gSwiNo_tBoomArmFoldedSensor.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC1.u16FoldedBoomArmSensorRawValue =  gSwiNo_tBoomArmFoldedSensor.tOut.u16RawVal;

		/*gSwiNo_tAlternatorChargeOK*/
		gDb_tRamEcuInputsC1.eAlternatorChargeOkState = (EDiState) gSwiNo_tAlternatorChargeOK.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC1.u16AlternatorChargeOkValue = gSwiNo_tAlternatorChargeOK.tOut.u16RawVal;

		/* Aru1*/
		gDb_tRamEcuInputsC1.eAru1State = (EDiState) gSwiNo_tAru1.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC1.u16Aru1RawValue =  gSwiNo_tAru1.tOut.u16RawVal;

		/* Aru2*/
		gDb_tRamEcuInputsC1.eAru2State = (EDiState) gSwiNo_tAru2.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC1.u16Aru2RawValue =  gSwiNo_tAru2.tOut.u16RawVal;

		/* Entry telescope*/
		gDb_tRamEcuInputsC1.eEntryTelescopeFdcSensorState = (EDiState) gSwiNo_tEntryTelescopeFdcSensor.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC1.u16EntryTelescopeFdcSensorRawValue = gSwiNo_tEntryTelescopeFdcSensor.tOut.u16RawVal;

		/* FaultPvgDeltaArm*/
		gDb_tRamEcuInputsC1.eFaultPvgDeltaArmState = (EDiState) gSwiNo_tFaultPvgDeltaArm.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC1.u16FaultPvgDeltaArmRawValue = gSwiNo_tFaultPvgDeltaArm.tOut.u16RawVal;

		/* FaultPvgArrowArm*/
		gDb_tRamEcuInputsC1.eFaultPvgArrowArmState = (EDiState) gSwiNo_tFaultPvgArrowArm.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC1.u16FaultPvgArrowArmRawValue = gSwiNo_tFaultPvgArrowArm.tOut.u16RawVal;

		/* FaultPvgTelescopeArm*/
		gDb_tRamEcuInputsC1.eFaultPvgTelescopeArmState = (EDiState) gSwiNo_tFaultPvgTelescopeArm.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC1.u16FaultPvgTelescopeArmRawValue = gSwiNo_tFaultPvgTelescopeArm.tOut.u16RawVal;

		/* gSwiNo_tFaultPvgTelescopeArm*/
		gDb_tRamEcuInputsC1.eFaultPvgEvProTorState = (EDiState) gSwiNo_tFaultPvgEvProTOR.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC1.u16FaultPvgEvProTorRawValue = gSwiNo_tFaultPvgEvProTOR.tOut.u16RawVal;

		/* starter motor state*/
		gDb_tRamEcuInputsC1.eStarterMotorState = (EDiState) gSwiNo_tStarterMotorState.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC1.u16StarterMotorRawValue = gSwiNo_tStarterMotorState.tOut.u16RawVal;

#endif
}


//-----------------------------------------------------------------------------------------------------
//! @brief read input can message
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 02.10.2018 HYDAC/CK
//!
//! @change  17.12.2019 HYDAC/CK change all names of db list receive data from can : gDb_tRamData4C1RcvFromC0
//!			 19.11.2020 HYDAC/CK Add receive message from motor J1939
//!			 11.02.2021 HYDAC/CK replace gDb_tRamGeneralNeotecC1.eStopMotorJ1939 = gCsr_tEBC1.eEngineAuxiliaryShutdownSwitch; to WriteOutputFunc because this frame is sent now
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vReadInputsCAN(TVoid)
{
#ifdef COMPILER_SWITCH_TAR_HW //D14 //SIMULATION POUR COMPILLER EN MODE PC
	/* local variable*/
	const TUint32 u32U30MAX = 1073741823;

	/* ============================================================================================= */
	/* 										Data receive from C0									 */
	/* ============================================================================================= */
	/*1er Frame*/
	gDb_tRamEcuC1RcvFromC0.boRestrictedModeAruActive = gCsr_tDataSendToC1.boRestrictedModeAruRadio;
	gDb_tRamEcuC1RcvFromC0.boTranslationMovementIsSolicited = gCsr_tDataSendToC1.boTranslationIsSolicited;
	gDb_tRamEcuC1RcvFromC0.eSelectedControlPost = (EControlPost)gCsr_tDataSendToC1.bi2SelectedControlPost;
	gDb_tRamEcuC1RcvFromC0.boAxleMovementIsSolicited = gCsr_tDataSendToC1.boAxleMovementIsSolicited;
	gDb_tRamEcuC1RcvFromC0.boDownAxleFixeSensor = gCsr_tDataSendToC1.boDownAxleFixeSensor;
	gDb_tRamEcuC1RcvFromC0.boDownAxleOscillantSensor = gCsr_tDataSendToC1.boDownAxleOscillantSensor;
	gDb_tRamEcuC1RcvFromC0.u16SlopeAngle = gCsr_tDataSendToC1.u16SlopeAngle;
	gDb_tRamEcuC1RcvFromC0.boReduceSpeedRotTurretClockwise = gCsr_tDataSendToC1.boReduceSpeedRotTurretClockwise;
	gDb_tRamEcuC1RcvFromC0.boReduceSpeedRotTurretCounterClock = gCsr_tDataSendToC1.boReduceSpeedRotTurretCtClock;
	gDb_tRamEcuC1RcvFromC0.boReduceSpeedArrowArmDown = gCsr_tDataSendToC1.boReduceSpeedArrowArmDown;
	gDb_tRamEcuC1RcvFromC0.boStopRotTurretClockwise = gCsr_tDataSendToC1.boStopRotTurretClockwise;
	gDb_tRamEcuC1RcvFromC0.boStopRotTurretCounterClockwise = gCsr_tDataSendToC1.boStopRotTurretCounterClockwise;
	gDb_tRamEcuC1RcvFromC0.boStopRotBasketClockwise = gCsr_tDataSendToC1.boStopRotBasketClockwise;
	gDb_tRamEcuC1RcvFromC0.boStopRotBasketCounterClockwise = gCsr_tDataSendToC1.boStopRotBasketCounterClockwise;
	gDb_tRamEcuC1RcvFromC0.boStopArrowArmDown = gCsr_tDataSendToC1.boStopArrowArmDown;
	gDb_tRamEcuC1RcvFromC0.boStopTelescopeOut = gCsr_tDataSendToC1.boStopTelescopeOut;
	gDb_tRamEcuC1RcvFromC0.i16EncodeurTurret1Angle = gCsr_tDataSendToC1.i16EncodeurTurret1Angle;

	gDb_tRam48XsInputsC1.boNacelleBasketLeftSideSensor1 = gCsr_tDataSendToC1.boNacelleBasketLeftSideSensor1;
	gDb_tRam48XsInputsC1.boNacelleBasketLeftSideSensor2 = gCsr_tDataSendToC1.boNacelleBasketLeftSideSensor2;
	gDb_tRam48XsInputsC1.boNacelleBasketRightSideSensor1 = gCsr_tDataSendToC1.boNacelleBasketRightSideSensor1;
	gDb_tRam48XsInputsC1.boNacelleBasketRightSideSensor2 = gCsr_tDataSendToC1.boNacelleBasketRightSideSensor2;
	/* 2nd frame*/
	gDb_tRamEcuC1RcvFromC0.boRedLightARDBasketCmd = gCsr_tData2SendToC1.boRedLightARDBasketCmd;
	gDb_tRamEcuC1RcvFromC0.boRedLightARGBasketCmd = gCsr_tData2SendToC1.boRedLightARGBasketCmd;
	gDb_tRamEcuC1RcvFromC0.boWhiteLightARDBasketCmd = gCsr_tData2SendToC1.boWhiteLightARDBasketCmd;
	gDb_tRamEcuC1RcvFromC0.boWhiteLightARGBasketCmd = gCsr_tData2SendToC1.boWhiteLightARGBasketCmd;
	gDb_tRamEcuC1RcvFromC0.u32EncodeurMastMeasureRaw = u32RangeMinMax(gCsr_tData2SendToC1.u32EncodeurMastMeasureRaw,0,u32U30MAX);
	gDb_tRamEcuC1RcvFromC0.boWrongAbutments = gCsr_tData2SendToC1.boWrongAbutments;
	gDb_tRamEcuC1RcvFromC0.boStopMovementByBrakeTest = gCsr_tData2SendToC1.boStopMovementByBrakeTest;
	gDb_tRamEcuC1RcvFromC0.boStopMovementByBreakInBrake = gCsr_tData2SendToC1.boStopMovementByBreakInBrake;
	gDb_tRamEcuC1RcvFromC0.boEnableBuzzerSelectPost = gCsr_tData2SendToC1.boEnableBuzzerSelectPost;
	gDb_tRamEcuC1RcvFromC0.boCenteredTurretState = gCsr_tData2SendToC1.boCenteredTurretState;
	gDb_tRamEcuC1RcvFromC0.boAuthorizeWork = gCsr_tData2SendToC1.boAuthorizeWork;
	gDb_tRamEcuC1RcvFromC0.boUpFixeAxlePos = gCsr_tData2SendToC1.boUpFixeAxlePos;
	gDb_tRamEcuC1RcvFromC0.boUpOsciAxlePos = gCsr_tData2SendToC1.boUpOsciAxlePos;
	gDb_tRamEcuC1RcvFromC0.eRailWorkMode = gCsr_tData2SendToC1.eRailWorkMode;
	/* 3e frame*/
	gDb_tRamEcuC1RcvFromC0.i32SpeedVehicleKmhx100 = gCsr_tData3SendToC1.i32SpeedVehicleKmhx100;
	gDb_tRamEcuC1RcvFromC0.u16EvForwardCommand = gCsr_tData3SendToC1.u16EvForwardCommand;
	gDb_tRamEcuC1RcvFromC0.u16EvBackwardCommand = gCsr_tData3SendToC1.u16EvBackwardCommand;
	/* failure frame*/
	gDb_tRamEcuC1RcvFailluresFromC0.boDm_Swi_Dbl_NcNo_Inc_FrameRot = gCsr_tFailuresC0SendToC1.boDm_Swi_Dbl_NcNo_Inc_FrameRot;
	gDb_tRamEcuC1RcvFailluresFromC0.boDm_Turret_Sensor_Fault = gCsr_tFailuresC0SendToC1.boDm_Turret_Sensor_Fault;
	gDb_tRamEcuC1RcvFailluresFromC0.boEvParkBrakeAxleOscillantFault = gCsr_tFailuresC0SendToC1.boEvParkBrakeAxleOscillantFault;
	gDb_tRamEcuC1RcvFailluresFromC0.boEvParkBrakeAxleFixeFault = gCsr_tFailuresC0SendToC1.boEvParkBrakeAxleFixeFault;
	gDb_tRamEcuC1RcvFailluresFromC0.boEvServiceBrakeAxleOscillantFault = gCsr_tFailuresC0SendToC1.boEvServiceBrakeAxleOsciFault;
	gDb_tRamEcuC1RcvFailluresFromC0.boEvServiceBrakeAxleFixeFault = gCsr_tFailuresC0SendToC1.boEvServiceBrakeAxleFixeFault;
	gDb_tRamEcuC1RcvFailluresFromC0.boEvServiceBrakeTrackFault = gCsr_tFailuresC0SendToC1.boEvServiceBrakeTrackFault;
	gDb_tRamEcuC1RcvFailluresFromC0.boRm_Com_Can_Radio_Loss = gCsr_tFailuresC0SendToC1.boRm_Com_Can_Radio_Loss;
	/* 4e frame*/
	gDb_tRamData4C1RcvFromC0.boStopAggravantMovements = gCsr_tData4C0SendToC1.boStopAggravantMovements;
	gDb_tRamData4C1RcvFromC0.boTurretPostorRadoPostOn = gCsr_tData4C0SendToC1.boTurretPostorRadoPostOn;
	gDb_tRamData4C1RcvFromC0.boMotorAccelerated = gCsr_tData4C0SendToC1.boMotorAccelerated;
	gDb_tRamData4C1RcvFromC0.boRadioPostSelectorOn = gCsr_tData4C0SendToC1.boRadioPostSelectorOn;
	gDb_tRamData4C1RcvFromC0.boSlopeHighWithWorkOnCrawler = gCsr_tData4C0SendToC1.boSlopeHighWithWorkOnCrawler; /* SlopeisLOW = FALSE en mode Chenilles*/
	gDb_tRamData4C1RcvFromC0.boErrorActiveOnC0 = gCsr_tData4C0SendToC1.boErrorActiveOnC0; /* Erreur Active sur C0 pour affichage Sys sur Ecran 7" et 4"*/
	gDb_tRamData4C1RcvFromC0.boRailWorkMultiLaneMode = gCsr_tData4C0SendToC1.boRailWorkMultiLaneMode; /*gDb_tRamRailWorkSafetyC0.eRailWorkMode == GE_MULTILANE_MODE*/
	gDb_tRamData4C1RcvFromC0.boPresenceSensorPlate = gCsr_tData4C0SendToC1.boPresenceSensorPlate; /* 03.09.2019 pour gerer l'arret tourelle en cas de presence de mat de contact*/
	gDb_tRamData4C1RcvFromC0.boWhiteLightAV15746Command = gCsr_tData4C0SendToC1.boWhiteLightAV15746Command;
	gDb_tRamData4C1RcvFromC0.boWhiteLightAr15746Command = gCsr_tData4C0SendToC1.boWhiteLightAR15746Command;
	/* affectation of white lights outputs commands*/
	gDb_tRamEcuOutputsC1.boWhiteLightAv15746Command = gDb_tRamData4C1RcvFromC0.boWhiteLightAV15746Command;
	gDb_tRam48XsOutputsC1.boWhiteLightAr15746Command = gDb_tRamData4C1RcvFromC0.boWhiteLightAr15746Command;
	gDb_tRamData4C1RcvFromC0.i16Signal_9 = gCsr_tData4C0SendToC1.i16Signal_9; /*Provisoire boFaultThermicPumpOrElecticControlerDmc*/
	gDb_tRamData4C1RcvFromC0.i16Signal_10 = gCsr_tData4C0SendToC1.i16Signal_10;
	gDb_tRamData4C1RcvFromC0.u8RecoveryReductionRatio = gCsr_tData4C0SendToC1.u8RecoveryReductionRatio;//GREEN MODIF

//NEOTEC IG STRUKTON
	gDb_tRamData4C1RcvFromC0.boAddPerformanceFunc = gCsr_tData5C0SendToC1.boAddPerformanceFunc;
	gDb_tRamData4C1RcvFromC0.boSlopeCaseLess2Deg = gCsr_tData5C0SendToC1.boSlopeCaseLess2Deg;
	gDb_tRamData4C1RcvFromC0.boSlopeCaseLess4Deg = gCsr_tData5C0SendToC1.boSlopeCaseLess4Deg;
	gDb_tRamData4C1RcvFromC0.boSlopeCaseLess6Deg = gCsr_tData5C0SendToC1.boSlopeCaseLess6Deg;
	gDb_tRamData4C1RcvFromC0.boSlopeCaseHigher6Deg = gCsr_tData5C0SendToC1.boSlopeCaseHigher6Deg;
	gDb_tRamData4C1RcvFromC0.boTurretInSpeedZone2Deg = gCsr_tData5C0SendToC1.boTurretInSpeedZone2Deg;
	gDb_tRamData4C1RcvFromC0.boTurretInSpeedZone4Deg = gCsr_tData5C0SendToC1.boTurretInSpeedZone4Deg;
	gDb_tRamData4C1RcvFromC0.boTurretInSpeedZone2DegForBasket = gCsr_tData5C0SendToC1.boTurretInSpeedZone2DegForBasket;
//NEOTEC IG STRUKTON

	/*Trame 5*/
	gDb_tRamEcuC1RcvFromC0.boAutorisationHighSpeedKeyState =gCsr_tData5C0SendToC1.boAutorisationHighSpeedKeyState;
	gDb_tRamEcuC1RcvFromC0.boTransRailElectricRampOngoing =gCsr_tData5C0SendToC1.boTransRailElectricRampOngoing;
	gDb_tRamEcuC1RcvFromC0.boSendAuthorizeReloadBattery = gCsr_tData5C0SendToC1.boSendAuthorizeReloadBattery;
	gDb_tRamEcuC1RcvFromC0.i16RpmPvgTransRail =gCsr_tData5C0SendToC1.i16RpmPvgTransRail;
	gDb_tRamEcuC1RcvFromC0.u8Batt_Soc =gCsr_tData5C0SendToC1.u8Batt_Soc;
	gDb_tRamEcuC1RcvFromC0.i16Ibatt_ist =gCsr_tData5C0SendToC1.i16Ibatt_ist;

//NEOTEC IG SNCF
	gDb_tRamData4C1RcvFromC0.boUpMastSensorNC = gCsr_tData5C0SendToC1.boUpMastSensorNC;
	gDb_tRamData4C1RcvFromC0.boValveInDownPositionSensor = gCsr_tData5C0SendToC1.boValveInDownPositionSensor;
	gDb_tRamData4C1RcvFromC0.boMeasuringMastSensorFolded = gCsr_tData5C0SendToC1.boMeasuringMastSensorFolded;
	/* ============================================================================================= */
	/* 										C0 radio command										 */
	/* ============================================================================================= */
	gDb_tRamRcvRadioCmdC1.boRotFrameClkwiseButton = gCsr_tSendToC1RadioCmd.boRotFrameClkwiseButton;
	gDb_tRamRcvRadioCmdC1.boRotFrameCtClkwiseButton = gCsr_tSendToC1RadioCmd.boRotFrameCtClkwiseButton;
	gDb_tRamRcvRadioCmdC1.boUpPendularOrRotTurretCtClock = gCsr_tSendToC1RadioCmd.boUpPendularOrRotTurretCtClock;
	gDb_tRamRcvRadioCmdC1.boDownPendularOrRotTurretClock = gCsr_tSendToC1RadioCmd.boDownPendularOrRotTurretClock;
	gDb_tRamRcvRadioCmdC1.boSelectorPendular = gCsr_tSendToC1RadioCmd.boSelectorPendular;
	gDb_tRamRcvRadioCmdC1.boSelectorRotTurret = gCsr_tSendToC1RadioCmd.boSelectorRotTurret;
	gDb_tRamRcvRadioCmdC1.boUpAxleOscillant = gCsr_tSendToC1RadioCmd.boUpAxleOscillant;
	gDb_tRamRcvRadioCmdC1.boDownAxleOscillant = gCsr_tSendToC1RadioCmd.boDownAxleOscillant;
	gDb_tRamRcvRadioCmdC1.boUpAxleFixe = gCsr_tSendToC1RadioCmd.boUpAxleFixe;
	gDb_tRamRcvRadioCmdC1.boDownAxleFixe = gCsr_tSendToC1RadioCmd.boDownAxleFixe;
	gDb_tRamRcvRadioCmdC1.boForcingAdvanceTrack = gCsr_tSendToC1RadioCmd.boForcingAdvanceTrack;

	/* ============================================================================================= */
	/* 										48XS													 */
	/* ============================================================================================= */

	/* *******************************     Hearbeat		******************************************** */
	gDb_tRam48XsInputsC1.u8Hearbeat48Xs = gCsr_tHearbeat_48XS.u8State;


	/* affectation for safety 48xs configuration*/
	/* *******************************     PDO1		******************************************** */
	gDb_tRam48XsInputsC1.u16UpInclinaisonBasketButtonValue = gCsr_tPDO1_48XS.u16UpInclinaisonBasket;
	gDb_tRam48XsInputsC1.u16DownInclinaisonBasketButtonValue= gCsr_tPDO1_48XS.u16DownInclinaisonBasket;
	gDb_tRam48XsInputsC1.u16UpPendularButtonValue = gCsr_tPDO1_48XS.u16UpPendular;
	gDb_tRam48XsInputsC1.u16DownPendularButtonValue = gCsr_tPDO1_48XS.u16DownPendular;

	gDb_tRam48XsInputsC1.boUpInclinaisonBasketButton = boSigDbo(&tDboUpTiltBasketButton,(TBoolean)(gDb_tRam48XsInputsC1.u16UpInclinaisonBasketButtonValue < gDb_tNvParametersC1.u16TresholdAnaToBoForInputs48Xs));
	gDb_tRam48XsInputsC1.boDownInclinaisonBasketButton = boSigDbo(&tDboDownTiltBasketButton,(TBoolean)(gDb_tRam48XsInputsC1.u16DownInclinaisonBasketButtonValue < gDb_tNvParametersC1.u16TresholdAnaToBoForInputs48Xs));
	gDb_tRam48XsInputsC1.boUpPendularButton = boSigDbo(&tDboUpPendularButton,(TBoolean)(gDb_tRam48XsInputsC1.u16UpPendularButtonValue < gDb_tNvParametersC1.u16TresholdAnaToBoForInputs48Xs));
	gDb_tRam48XsInputsC1.boDownPendularButton = boSigDbo(&tDboDownPendularButton,(TBoolean)(gDb_tRam48XsInputsC1.u16DownPendularButtonValue < gDb_tNvParametersC1.u16TresholdAnaToBoForInputs48Xs));

	/* ******************************     PDO2		******************************************** */
	gDb_tRam48XsInputsC1.u16RotationClockwiseBasketButtonVal = gCsr_tPDO2_48XS.u16RotationClockwiseBasket;
	gDb_tRam48XsInputsC1.u16RotCtClockwiseBasketButtonVal = gCsr_tPDO2_48XS.u16RotationCtClockwiseBasket;
	gDb_tRam48XsInputsC1.u16HighSectorPlateSensorVal = gCsr_tPDO2_48XS.u16HighSectorPlateSensor;
	gDb_tRam48XsInputsC1.u16FoldedLadderSensorVal = gCsr_tPDO2_48XS.u16FoldedLadderSensor;

	gDb_tRam48XsInputsC1.boRotationCtClockwiseBasketButton = boSigDbo(&tDboRotationCtClockwiseBasketButton,(TBoolean)(gDb_tRam48XsInputsC1.u16RotCtClockwiseBasketButtonVal < gDb_tNvParametersC1.u16TresholdAnaToBoForInputs48Xs));
	gDb_tRam48XsInputsC1.boRotationClockwiseBasketButton = boSigDbo(&tDboRotationClockwiseBasketButton,(TBoolean)(gDb_tRam48XsInputsC1.u16RotationClockwiseBasketButtonVal < gDb_tNvParametersC1.u16TresholdAnaToBoForInputs48Xs));
	gDb_tRam48XsInputsC1.boHighSectorPlateSensor = boSigDbo(&tDboHighSectorPlateSensor,(TBoolean)(gDb_tRam48XsInputsC1.u16HighSectorPlateSensorVal > gDb_tNvParametersC1.u16TresholdAnaToBoForInputs48Xs));
	gDb_tRam48XsInputsC1.boFoldedLadderSensor = boSigDbo(&tDboFoldedLadderSensor,(TBoolean)(gDb_tRam48XsInputsC1.u16FoldedLadderSensorVal < gDb_tNvParametersC1.u16TresholdAnaToBoForInputs48Xs));

	/* ******************************     PDO3		******************************************** */
	gDb_tRam48XsInputsC1.u16SafetyManSystem = gCsr_tPDO3_48XS.u16SafetyManSystem;
	gDb_tRam48XsInputsC1.u16DeltaArmAxisJoystick = gCsr_tPDO3_48XS.u16DeltaArmAxisJoystick;
	gDb_tRam48XsInputsC1.u16ArrowArmAxisJoystick = gCsr_tPDO3_48XS.u16ArrowArmAxisJoystick;
	gDb_tRam48XsInputsC1.u16TelescopeArmAxisJoysitck = gCsr_tPDO3_48XS.u16TelescopeArmAxisJoysitck;

	/* ******************************     PDO4		******************************************** */
	gDb_tRam48XsInputsC1.u16RotationTurretAxisJoystick = gCsr_tPDO4_48XS.u16RotationTurretAxisJoystick;
	gDb_tRam48XsInputsC1.u16RearmementSafetyManSystemVal = gCsr_tPDO4_48XS.u16RearmementSafetyManSystem;
	gDb_tRam48XsInputsC1.u16AbutementNacelleTrackSideVal = gCsr_tPDO4_48XS.u16AbutementNacelleTrackSide;
	gDb_tRam48XsInputsC1.u16AbutementNacelleCenteredSideVal = gCsr_tPDO4_48XS.u16AbutementNacelleCenteredSide;

	gDb_tRam48XsInputsC1.boRearmementSafetyManSystem = boSigDbo(&tDboRearmementSafetyManSystem,(TBoolean)(gDb_tRam48XsInputsC1.u16RearmementSafetyManSystemVal > gDb_tNvParametersC1.u16TresholdAnaToBoForInputs48Xs));
	gDb_tRam48XsInputsC1.boAbutementNacelleTrackSide = boSigDbo(&tDboAbutementNacelleTrackSide,(TBoolean)(gDb_tRam48XsInputsC1.u16AbutementNacelleTrackSideVal < gDb_tNvParametersC1.u16TresholdAnaToBoForInputs48Xs));
	gDb_tRam48XsInputsC1.boAbutementNacelleCenteredSide = boSigDbo(&tDboAbutementNacelleCenteredSide,(TBoolean)(gDb_tRam48XsInputsC1.u16AbutementNacelleCenteredSideVal < gDb_tNvParametersC1.u16TresholdAnaToBoForInputs48Xs));

	/* ******************************     PDO5		******************************************** */
	gDb_tRam48XsOutputsC1.eMotorDefaultLightErrSta = gCsr_tPDO5_48XS.eMotorDefaultLightErrSta;
	gDb_tRam48XsOutputsC1.eOverloadLightErrSta = gCsr_tPDO5_48XS.eOverloadLightErrSta;
	gDb_tRam48XsOutputsC1.eBuzzerErrSta = gCsr_tPDO5_48XS.eBuzzerErrSta;
	gDb_tRam48XsOutputsC1.eWarmingLightErrSta = gCsr_tPDO5_48XS.eWarmingLightErrSta;
	gDb_tRam48XsOutputsC1.eDeversDefaultLightErrSta  = gCsr_tPDO5_48XS.eDeversDefaultLightErrSta;
	gDb_tRam48XsOutputsC1.eGasOilLightErrSta = gCsr_tPDO5_48XS.eGasOilLightErrSta;
	gDb_tRam48XsOutputsC1.eWhiteLightARGBasketErrSta = gCsr_tPDO5_48XS.eWhiteLightARGErrSta;
	gDb_tRam48XsOutputsC1.eRedLightARGBasketErrSta = gCsr_tPDO5_48XS.eRedLightARGErrSta;

	/* ******************************     PDO6		******************************************** */
	gDb_tRam48XsOutputsC1.eWhiteLightARDBasketErrSta = gCsr_tPDO6_48XS.eWhiteLightARDErrSta;
	gDb_tRam48XsOutputsC1.eRedLightARDBasketErrSta = gCsr_tPDO6_48XS.eRedLightARDErrSta;
	gDb_tRam48XsOutputsC1.eWhiteLightAr15746ErrSta = gCsr_tPDO6_48XS.eWhiteLightAr15746ErrSta;

	/* *******************************     SRDO1		******************************************** */
	gDb_tRam48XsInputsC1.u16Overload1Value = gCsr_tSRDO1_48XS.u16Overload1;
	gDb_tRam48XsInputsC1.u16Overload2Value = gCsr_tSRDO1_48XS.u16Overload2;

	gDb_tRam48XsInputsC1.boOverload1 = boSigDbo(&tDboOverload1,(TBoolean)(gDb_tRam48XsInputsC1.u16Overload1Value < gDb_tNvParametersC1.u16TresholdAnaToBoForInputs48Xs));
	gDb_tRam48XsInputsC1.boOverload2 = boSigDbo(&tDboOverload2,(TBoolean)(gDb_tRam48XsInputsC1.u16Overload2Value < gDb_tNvParametersC1.u16TresholdAnaToBoForInputs48Xs));

	/* *******************************     SRDO2		******************************************** */
	gDb_tRam48XsInputsC1.u16LowSectorPendularSensorVal = gCsr_tSRDO2_48XS.u16LowSectorPendularSensor;
	gDb_tRam48XsInputsC1.u16AdvanceAxisJoystick = gCsr_tSRDO2_48XS.u16AdvanceAxisJoystick;

	gDb_tRam48XsInputsC1.boLowSectorPendularSensor = boSigDbo(&tDboLowSectorPendularSensor,(TBoolean)(gDb_tRam48XsInputsC1.u16LowSectorPendularSensorVal > gDb_tNvParametersC1.u16TresholdAnaToBoForInputs48Xs));

	/* *******************************     SRDO3		******************************************** */
	gDb_tRam48XsInputsC1.boDeltaArmJystckCenteredTelescope = boSigDbo(&tDboDeltaArmJystckCenteredTelescope,!gCsr_tSRDO3_48XS.boDeltaArmJystckCenteredTelesc);
	gDb_tRam48XsInputsC1.boArrowJoystickCenteredTurret = boSigDbo(&tDboArrowJoystickCenteredTurret,!gCsr_tSRDO3_48XS.boArrowJoystickCenteredTurret);
	gDb_tRam48XsInputsC1.boCenteredAdvanceJoystick = boSigDbo(&tDboCenteredAdvanceJoystick,!gCsr_tSRDO3_48XS.boCenteredAdvanceJoystick);
	gDb_tRam48XsInputsC1.boDeadManPedal = boSigDbo(&tDboDeadManPedal,gCsr_tSRDO3_48XS.boDeadManPedal);
	gDb_tRam48XsInputsC1.boPressenceInNacelleSensor1 = boSigDbo(&tDboPressenceInNacelleSensor1,gCsr_tSRDO3_48XS.boPressenceInNacelleSensor1);
	gDb_tRam48XsInputsC1.boPressenceInNacelleSensor2 = boSigDbo(&tDboPressenceInNacelleSensor2,gCsr_tSRDO3_48XS.boPressenceInNacelleSensor2);
	gDb_tRam48XsInputsC1.boGachette = boSigDbo(&tDboJoystickTrigger,gCsr_tSRDO3_48XS.boGachette);
	gDb_tRam48XsInputsC1.boKlaxon = boSigDbo(&tDboHorn,gCsr_tSRDO3_48XS.boKlaxon);
	gDb_tRam48XsInputsC1.boStopMotorButton = boSigDbo(&tDboStopMotorButton,gCsr_tSRDO3_48XS.boStopMotorButton);
	gDb_tRam48XsInputsC1.boAuthorizationWorkKey = boSigDbo(&tDboAuthorizationWorkKey,gCsr_tSRDO3_48XS.boAuthorizationWorkKey);
	gDb_tRam48XsInputsC1.boEtallonnageJoystickButton = boSigDbo(&tDboJoystickButtonCalibration,gCsr_tSRDO3_48XS.boEtallonnageJoystickButton);
	gDb_tRam48XsInputsC1.boClosePortillonSensor = boSigDbo(&tDboClosePortillonSensor,gCsr_tSRDO3_48XS.boClosePortillon);
	gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs = gCsr_tSRDO3_48XS.u16BatterieVoltage48Xs;


	/* ============================================================================================= */
	/* 										eVision 4	Opus										 */
	/* ============================================================================================= */
	gDb_tRamEvision4C1.u8LifeByte = gCsr_tMsg1RcvFromOpus.u8gLifeByte;
	gDb_tRamEvision4C1.bogDelta_Arm_Move_Up = gCsr_tMsg1RcvFromOpus.bogDelta_Arm_Move_Up;
	gDb_tRamEvision4C1.bogDelta_Arm_Move_Down = gCsr_tMsg1RcvFromOpus.bogDelta_Arm_Move_Down;
	gDb_tRamEvision4C1.bogArrow_Move_Up = gCsr_tMsg1RcvFromOpus.bogArrow_Arm_Move_Up;
	gDb_tRamEvision4C1.bogArrow_Move_Down = gCsr_tMsg1RcvFromOpus.bogArrow_Arm_Move_Down;
	gDb_tRamEvision4C1.bogPendular_Move_Up = gCsr_tMsg1RcvFromOpus.bogPendular_Arm_Move_Up;
	gDb_tRamEvision4C1.bogPendular_Move_Down = gCsr_tMsg1RcvFromOpus.bogPendular_Arm_Move_Down;
	gDb_tRamEvision4C1.bogTelescope_Move_Out = gCsr_tMsg1RcvFromOpus.bogTelescope_Move_Out;
	gDb_tRamEvision4C1.bogTelescope_Move_In = gCsr_tMsg1RcvFromOpus.bogTelescope_Move_In;
	gDb_tRamEvision4C1.bogBasket_Inclinaison_Move_Up = gCsr_tMsg1RcvFromOpus.bogBasket_Inclinaison_Move_Up;
	gDb_tRamEvision4C1.bogBasket_Inclinaison_Move_Down = gCsr_tMsg1RcvFromOpus.bogBasket_Inclinaison_Move_Down;
	gDb_tRamEvision4C1.bogTurret_Rotate_ClockWise = gCsr_tMsg1RcvFromOpus.bogTurret_Rotate_ClockWise;
	gDb_tRamEvision4C1.bogTurret_Rotate_Counter_ClockWise= gCsr_tMsg1RcvFromOpus.bogTurret_Rotate_Cntr_ClockWise;
	gDb_tRamEvision4C1.bogBasket_Rotate_ClockWise = gCsr_tMsg1RcvFromOpus.bogBasket_Rotation_Move_Up;
	gDb_tRamEvision4C1.bogBasket_Rotate_Counter_ClockWise = gCsr_tMsg1RcvFromOpus.bogBasket_Rotation_Move_Down;
	gDb_tRamEvision4C1.bogKeyRpmSelect = gCsr_tMsg1RcvFromOpus.bogKeyRpmSelect;
	gDb_tRamEvision4C1.bogKeyRpmOff = gCsr_tMsg1RcvFromOpus.bogKeyRpmOff;
	gDb_tRamEvision4C1.bogForcingWhiteRaillight = gCsr_tMsg1RcvFromOpus.bogForcingWhiteRaillight ;
	gDb_tRamEvision4C1.bogForcingNeons = gCsr_tMsg1RcvFromOpus.bogForcingNeons ;
	gDb_tRamEvision4C1.bogKeyCalibMin = gCsr_tMsg1RcvFromOpus.bogKeyCalibMin ;
	gDb_tRamEvision4C1.bogKeyCalibMax = gCsr_tMsg1RcvFromOpus.bogKeyCalibMax ;
	gDb_tRamEvision4C1.bogKeyCalibValid = gCsr_tMsg1RcvFromOpus.bogKeyCalibValid ;
	gDb_tRamEvision4C1.u8gElementChoice = gCsr_tMsg1RcvFromOpus.u8gElementChoice;
	gDb_tRamEvision4C1.bogKeyCalibMax2 = gCsr_tMsg1RcvFromOpus.bogKeyCalibMax2;
	gDb_tRamEvision4C1.bogKeySlopeLgReset = gCsr_tMsg1RcvFromOpus.bogKeySlopeLgReset;
	gDb_tRamEvision4C1.bogKeySlopeTrReset = gCsr_tMsg1RcvFromOpus.bogKeySlopeTrReset;
	gDb_tRamEvision4C1.u8ActivePageOpus = gCsr_tMsg1RcvFromOpus.u8gActivePageOpus;
//GREEN
	gDb_tRamEvision4C1.boKeyYesReloadWithGenerator = gCsr_tMsg1RcvFromOpus.boKeyYesReloadWithGenerator;
	gDb_tRamEvision4C1.boKeyNoReloadWithGenerator = gCsr_tMsg1RcvFromOpus.boKeyNoReloadWithGenerator;


	/* ============================================================================================= */
	/* 										eVision 7												 */
	/* ============================================================================================= */
	gDb_tRamEvision7C1.bogButtonCalibMinMastMeasure = gCsr_tMsg1RcvFromEvision7.bogButtonCalibMinMastMeasure;
	gDb_tRamEvision7C1.bogButtonCalibMaxMastMeasure = gCsr_tMsg1RcvFromEvision7.bogButtonCalibMaxMastMeasure;
	gDb_tRamEvision7C1.boSavePosEncodeurMastMeasureButton = gCsr_tMsg1RcvFromEvision7.boSavePosEncodeurMastButton;
	gDb_tRamEvision7C1.bogActivateMeasuringMast = gCsr_tMsg1RcvFromEvision7.bogActivateMeasuringMast;
	gDb_tRamEvision7C1.boRazDistanceTraveledMastMeasure = gCsr_tMsg1RcvFromEvision7.boRazDistanceTraveledMastMeasure;
	gDb_tRamEvision7C1.bogSerialNumber = gCsr_tMsg1RcvFromEvision7.bogSerialNumber;/*Récéption de la validation du code Tournant.*/
	gDb_tRamEvision7C1.bogBPBasketValidate = gCsr_tMsg1RcvFromEvision7.bogBPBasketValidate;
	gDb_tRamEvision7C1.bogKeyFilterOverload = gCsr_tMsg1RcvFromEvision7.bogKeyFilterOverload;
	gDb_tRamEvision7C1.bogKeyNextMode = gCsr_tMsg1RcvFromEvision7.bogKeyNextMode;
	gDb_tRamEvision7C1.bogKeyPrevMode = gCsr_tMsg1RcvFromEvision7.bogKeyPrevMode;
	gDb_tRamEvision7C1.bogKeySignalDanger = gCsr_tMsg1RcvFromEvision7.bogKeySignalDanger;
	gDb_tRamEvision7C1.bogKeyFlashLightON = gCsr_tMsg1RcvFromEvision7.bogKeyFlashLightON;
	gDb_tRamEvision7C1.bogKeyCalibMastMin = gCsr_tMsg1RcvFromEvision7.bogKeyCalibMastMin;
	gDb_tRamEvision7C1.bogKeyCalibMastMax = gCsr_tMsg1RcvFromEvision7.bogKeyCalibMastMax;
	gDb_tRamEvision7C1.bogKeyCalibMastValid = gCsr_tMsg1RcvFromEvision7.bogKeyCalibMastValid;
	gDb_tRamEvision7C1.bogKeyGeneratorActivate = gCsr_tMsg1RcvFromEvision7.bogKeyGeneratorActivate;


	/* ============================================================================================= */
	/* 										Telescope Sensor 										 */
	/* ============================================================================================= */
	gDb_tRamTelescopeCanC1.u16RetractorTelescopeVal1 = gCsr_tTelescopeFrame1.u16LenghtTelescope1;
	gDb_tRamTelescopeCanC1.u16RetractorTelescopeVal2 = gCsr_tTelescopeFrame2.u16LenghtTelescope2;

	gDb_tRamTelescopeCanC1.u16LenghtTelescope1 = u16CastI16(i16CalcLinear2Dots(i16CastU16(gDb_tRamTelescopeCanC1.u16RetractorTelescopeVal1),i16CastU16(gDb_tNvCalibrationC1.u16LenghtCaliEndStopLowTelescope1),i16CastU16(gDb_tNvCalibrationC1.u16LenghtEndStopLowTelescope1),i16CastU16(gDb_tNvCalibrationC1.u16LenghtCaliEndStopHighTelescope1),i16CastU16(gDb_tNvCalibrationC1.u16LenghtEndStopHighTelescope1)));
	gDb_tRamTelescopeCanC1.u16LenghtTelescope2 = u16CastI16(i16CalcLinear2Dots(i16CastU16(gDb_tRamTelescopeCanC1.u16RetractorTelescopeVal2),i16CastU16(gDb_tNvCalibrationC1.u16LenghtCaliEndStopLowTelescope2),i16CastU16(gDb_tNvCalibrationC1.u16LenghtEndStopLowTelescope2),i16CastU16(gDb_tNvCalibrationC1.u16LenghtCaliEndStopHighTelescope2),i16CastU16(gDb_tNvCalibrationC1.u16LenghtEndStopHighTelescope2)));

	gDb_tRamTelescopeCanC1.u8ErrorRetractorTelescope1 = gCsr_tTelescopeFrame1.u8ErrorTelescope1;
	gDb_tRamTelescopeCanC1.u8ErrorRetractorTelescope2 = gCsr_tTelescopeFrame2.u8ErrorTelescope2;

	/* ============================================================================================= */
	/* 										Portilon & ladder										 */
	/* ============================================================================================= */
	gDb_tRamGeneralC1.boPortillonLadderClose = ((gDb_tNvOptionsC1.boPortillon == TRUE && gDb_tRam48XsInputsC1.boClosePortillonSensor == TRUE) || gDb_tNvOptionsC1.boPortillon == FALSE)
											&& ((gDb_tNvOptionsC1.boLadder == TRUE && gDb_tRam48XsInputsC1.boFoldedLadderSensor == TRUE) || gDb_tNvOptionsC1.boLadder == FALSE);

	/* ============================================================================================= */
	/* 										MOTOR J1939												 */
	/* ============================================================================================= */
	gDb_tRamGeneralNeotecC1.i16WaterTempJ1939 = gCsr_tET1.i16EngineCoolantTemperature;
	gDb_tRamGeneralNeotecC1.u16OilPressureJ1939 = gCsr_tEFL_P1.u16EngineOilPressure;
	gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939 = gCsr_tEEC1.u16EngineSpeed;
	gDb_tRamGeneralNeotecC1.i32AlternatorCurentJ1939 = gCsr_tVEP3.i32AlternatorCurrent;
	gDb_tRamGeneralNeotecC1.eMotorStateJ1939 = gCsr_tEOI.eEngineOperatingState;
	gDb_tRamGeneralNeotecC1.i16PowerBatterie = gCsr_tVEP1.u16BatteryPotentialPowerInput1;
	gDb_tRamGeneralNeotecC1.eHighPressureOilJ1939 = gCsr_tDLCD1.eEngineOilPressureLowLampData;
	gDb_tRamGeneralNeotecC1.eWarmingActiveJ1939 = gCsr_tSHUTDN.eEngineWaitToStartLamp;
	gDb_tRamGeneralNeotecC1.eStopMotorJ1939 = gCsr_tEBC1.eEngineAuxiliaryShutdownSwitch;

#endif
}
