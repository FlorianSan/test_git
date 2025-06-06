//==================================================================================================
//! @file WriteOutputsFunc.h
//! @brief Write outputs
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 23.07.2018 HYDAC/CK
//! @history: #- CK 23.07.2017 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include <WriteOutputsFunc.h>

//! @brief set outputs
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 23.07.2018 HYDAC/CK
//!
//! @change  19.12.2019 HYDAC/CK	- add WhitLighAr15746, WhitLighAv15746 and EvCrawlerOnlyCommand outputs
//!			 08.01.2020 HYDAC/CK    - remove WhitLighAr15746
//! 		 28.10.2020 HYDAC/CK	- remove gDig_tAntiStartup, gDig_tStopMotor, gDig_tWarming , gDig_tReturnLowSideEvProAccMotor , gPro_tEvPropMotorAccelerator
//!			 19.11.2020 HYDAC/CK 	- Add send message to motor J1939
//! @care
//! @todo
//
//11.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vSetOutputs(TVoid)
{

    /* ============================================================================================= */
	/* 										digital output											 */
	/* ============================================================================================= */

	/* BlueFire*/
	vSetDigitalOutput(&gDig_tBlueFire,gDb_tRamEcuOutputsC1.boBlueFireCommand,&gDb_tRamEcuOutputsC1.eBlueFireValue);
	/* OrangeFlashingLight*/
	vSetDigitalOutput(&gDig_tOrangeFlashingLight,gDb_tRamEcuOutputsC1.boOrangeFlashingLightCommand,&gDb_tRamEcuOutputsC1.eOrangeFlashingLightValue);
	/* EvBypass*/
	vSetDigitalOutput(&gDig_tEvBypass,gDb_tRamEcuOutputsC1.boEvBypassCommand,&gDb_tRamEcuOutputsC1.eEvBypassValue);
	/* SupplyPvgDeltaArm*/
	vSetDigitalOutput(&gDig_tSupplyPvgDeltaArm,gDb_tRamEcuOutputsC1.boSupplyPvgDeltaArmCommand,&gDb_tRamEcuOutputsC1.eSupplyPvgDeltaArmValue);
	/* SupplyPvgArrowArm*/
	vSetDigitalOutput(&gDig_tSupplyPvgBoomArm,gDb_tRamEcuOutputsC1.boSupplyPvgArrowArmCommand,&gDb_tRamEcuOutputsC1.eSupplyPvgArrowArmValue);
	/* SupplyPvgTelescopeArm*/
	vSetDigitalOutput(&gDig_tSupplyPvgTelescopeArm,gDb_tRamEcuOutputsC1.boSupplyPvgTelescopeArmCommand,&gDb_tRamEcuOutputsC1.eSupplyPvgTelescopeArmValue);
	/* SupplyPvgPropEvTOR*/
	vSetDigitalOutput(&gDig_tSupplyPvgPropEvTOR,boSupplyPvgPropEvTorCommandIO,&gDb_tRamEcuOutputsC1.eSupplyPvgPropEvTorValue);
	/* OverloadSecurity*/
	vSetDigitalOutput(&gDig_tOverloadSecurity,gDb_tRamEcuOutputsC1.boOverloadSecurityCommand,&gDb_tRamEcuOutputsC1.eOverloadSecurityValue);
	/* SupllyTorSensors*/
	vSetDigitalOutput(&gDig_tSupllyTorSensors,gDb_tRamEcuOutputsC1.boSupllyTorSensorsCommand,&gDb_tRamEcuOutputsC1.eSupllyTorSensorsValue);
	/* SupllyAnaSensors*/
	vSetDigitalOutput(&gDig_tSupllyAnaSensors,gDb_tRamEcuOutputsC1.boSupllyAnaSensorsCommand,&gDb_tRamEcuOutputsC1.eSupllyAnaSensorsValue);
	/* EvSyncRotation*/
	vSetDigitalOutput(&gDig_tEvSyncRotation,gDb_tRamEcuOutputsC1.boEvSyncRotationCommand,&gDb_tRamEcuOutputsC1.eEvSyncRotationValue);
	/* Ev selector turret*/
	vSetDigitalOutput(&gDig_tEvSelectorRotTurret,gDb_tRamEcuOutputsC1.boEvSelectorRotTurretCmd,&gDb_tRamEcuOutputsC1.eEvSelectorRotTurretValue);
	/* EvRotationTurretCounterClockwise*/
	vSetDigitalOutput(&gDig_tEvRotTurretCtClkwise,gDb_tRamEcuOutputsC1.boEvRotTurretCtClockwiseCmdBool,&gDb_tRamEcuOutputsC1.eEvRotationTurretCtClockwiseState);
	/*EvRotationTurretClockwise*/
	vSetDigitalOutput(&gDig_tEvRotTurretClkwise,gDb_tRamEcuOutputsC1.boEvRotTurretClockwiseCmdBool,&gDb_tRamEcuOutputsC1.eEvRotationTurretClockwiseState);
	/* Ev rotation basket counter clockwise*/
	vSetDigitalOutput(&gDig_tEvRotBasketCtClkwise,gDb_tRamEcuOutputsC1.boEvRotationBasketCtClkWiseCmdBool,&gDb_tRamEcuOutputsC1.eEvRotationBasketCtClockwiseState);
	/* Ev rotation basket clockwise*/
	vSetDigitalOutput(&gDig_tEvRotBasketClkwise,gDb_tRamEcuOutputsC1.boEvRotationBasketClkWiseCmdBool,&gDb_tRamEcuOutputsC1.eEvRotationBasketClockwiseState);
	/* EvUpPendular*/
	vSetDigitalOutput(&gDig_tEvUpPendular,gDb_tRamEcuOutputsC1.boEvUpPendularCommandBool,&gDb_tRamEcuOutputsC1.eEvUpPendularState);
	/* EvDownPendular*/
	vSetDigitalOutput(&gDig_tEvDownPendular,gDb_tRamEcuOutputsC1.boEvDownPendularCommandBool,&gDb_tRamEcuOutputsC1.eEvDownPendularState);
	/* UpInclinaisonBasket*/
	vSetDigitalOutput(&gDig_tEvUpInclinaisonBasket,gDb_tRamEcuOutputsC1.boEvUpInclinaisonBasketCmdBool,&gDb_tRamEcuOutputsC1.eEvUpInclinaisonBasketState);
	/*EvDownInclinaisonBasket*/
	vSetDigitalOutput(&gDig_tEvDownInclinaisonBasket,gDb_tRamEcuOutputsC1.boEvDownInclinaisonBasketCmdBool,&gDb_tRamEcuOutputsC1.eEvDownInclinaisonBasketState);
	/* noise marker*/
	vSetDigitalOutput(&gDig_tNoisemaker,gDb_tRamEcuOutputsC1.boNoisemakerCommand,&gDb_tRamEcuOutputsC1.eNoisemakerState);
	/* ReturnLowSideEvProGenerator*/
	vSetDigitalOutput(&gDig_tReturnLowSideEvProGenerator,gDb_tRamEcuOutputsC1.boReturnLowSideEvProGeneratorCmd,&gDb_tRamEcuOutputsC1.eReturnLowSideEvProGeneratorValue);
	/* WhiteLightAv15746*/
	vSetDigitalOutput(&gDig_tWhiteLightAv15746,gDb_tRamEcuOutputsC1.boWhiteLightAv15746Command,&gDb_tRamEcuOutputsC1.eWhiteLightAv15746Value);
	/*EvCrawlerOnly*/
	vSetDigitalOutput(&gDig_tEvCrawlerOnly,gDb_tRamEcuOutputsC1.boEvCrawlerOnlyCommand,&gDb_tRamEcuOutputsC1.eEvCrawlerOnlyValue);
	/*RelayReloadWithGenerator*/
	vSetDigitalOutput(&gDig_tRelayReloadWithGenerator,gDb_tRamEcuOutputsC1.boRelayReloadWithGeneratorCmd,&gDb_tRamEcuOutputsC1.eRelayReloadWithGeneratorState);
	/*EvDevMvts*/
	vSetDigitalOutput(&gDig_tEvDevMvts,gDb_tRamEcuOutputsC1.boEvDevMvtsCmd,&gDb_tRamEcuOutputsC1.eEvDevMvtsState);
	/*AntiStartupCommand*/
	vSetDigitalOutput(&gDig_tAntiStartupCommand,gDb_tRamEcuOutputsC1.boAntiStartupCommand,&gDb_tRamEcuOutputsC1.eAntiStartupValue);
	/*EvBoostRegenCmd */
	vSetDigitalOutput(&gDig_tEvBoostRegen,gDb_tRamEcuOutputsC1.boEvBoostRegenCmd,&gDb_tRamEcuOutputsC1.eEvBoostRegenState);


	/* ============================================================================================= */
	/* 								Proportional current output 									 */
	/* ============================================================================================= */
	vSetProportionalOutput(&gPro_tEvPropGenerator,gDb_tRamEcuOutputsC1.u16EvPropGeneratorCommand,&gDb_tRamEcuOutputsC1.eEvPropGeneratorState,&gDb_tRamEcuOutputsC1.u16EvPropGeneratorCurrent);

    /* ============================================================================================= */
	/* 								Proportional voltage output 									 */
	/* ============================================================================================= */
	/* Pvg Ev Tor*/
	vSetProportionalVoltageOutput(&gOutVoltPro_tPvgPropEvTOR,u16PvgEvTorCommandIO,&gDb_tRamEcuOutputsC1.u16PvgEvTorVoltage);
	/* Pvg Delta arm*/
	vSetProportionalVoltageOutput(&gOutVoltPro_tPvgDeltaArm,gDb_tRamEcuOutputsC1.u16PvgDeltaArmCommand,&gDb_tRamEcuOutputsC1.u16PvgDeltaArmVoltage);
	/* Pvg Arrow arm*/
	vSetProportionalVoltageOutput(&gOutVoltPro_tPvgArrowArm,gDb_tRamEcuOutputsC1.u16PvgArrowArmCommand,&gDb_tRamEcuOutputsC1.u16PvgArrowArmVoltage);
	/* Pvg Telescope arm*/
	vSetProportionalVoltageOutput(&gOutVoltPro_tPvgTelescopeArm,gDb_tRamEcuOutputsC1.u16PvgTelescopeArmCommand,&gDb_tRamEcuOutputsC1.u16PvgTelescopeArmVoltage);
}


//----------------------------------------------------------------------------------------------------
//! @brief write CAN outputs
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 23.07.2018 HYDAC/CK
//!
//! @change 10.05.2019 Change gCsr_tData3RcvFromC1.boMastMeasureFonctionActive
//!			11.02.2021 Add gDb_tRamGeneralNeotecC1.eStopMotorJ1939 because this frame was receive before
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vWriteCanOutputs(TVoid)
{
/*NEOTEC VERSION*/
	const TUint8 MAJOR = 20;	//3; //3  //20
	const TUint8 MINOR = 1;		//2; //3  //1
	const TUint8 PATCH = 1;		//0; //0  //1
	const TUint8 CUSTOM = 3;	//5; //6  //2
/*NEOTEC VERSION*/
	/* ============================================================================================= */
	/* 										Data Sent to evision7									 */
	/* ============================================================================================= */
	/* affect global variable to Can Msg 1 send to eVision7*/
	gCsr_tMsg1C1SendToEvision7.bogBattery_On_Off = gDb_tRamEcuInputsC1.eAlternatorChargeOkState == GE_DI_ON;
	gCsr_tMsg1C1SendToEvision7.bogEngine_Faillure_On_Off = gDb_tRamEcuInputsC1.eWaterTemperatureState == GE_DI_ON;
	gCsr_tMsg1C1SendToEvision7.bogMaintenance_On_Off = gDb_tRamGeneralNeotecC1.i16WaterTempJ1939 >= 116;/* préconisation moteur perkins*/
	gCsr_tMsg1C1SendToEvision7.bogOil_On_OFF = gDb_tRamGeneralNeotecC1.u16OilPressureJ1939 == 0;
	gCsr_tMsg1C1SendToEvision7.bogDeltaArmSectorDown = !gDb_tRamLimitWorkEnvelopeC1.boDeltaArmInUpperZone;
	gCsr_tMsg1C1SendToEvision7.bogArrowArmSectorDown = gDb_tRamLimitWorkEnvelopeC1.boArrowArmInLowerZone;
	gCsr_tMsg1C1SendToEvision7.bogPendularSectorDown = gDb_tRam48XsInputsC1.boLowSectorPendularSensor;
	gCsr_tMsg1C1SendToEvision7.bogDeltaArmInCenter = ((gDb_tRamEcuInputsC1.eFoldedDeltaArmSensorState == GE_DI_ON && gDb_tRamEcuInputsC1.eFoldedBoomArmSensorState == GE_DI_ON) || gDb_tRamMvtEndStopC1.boFoldedDeltaArm == TRUE);
	gCsr_tMsg1C1SendToEvision7.bogArrowArmInCenter =  (gDb_tRamEcuInputsC1.eFoldedDeltaArmSensorState == GE_DI_ON && gDb_tRamEcuInputsC1.eFoldedBoomArmSensorState == GE_DI_ON);
	gCsr_tMsg1C1SendToEvision7.bogPendularInCenter = gDb_tRam48XsInputsC1.boLowSectorPendularSensor;
	gCsr_tMsg1C1SendToEvision7.bogBasketRotationInCenter = gDb_tRamAutoStopC1.boBasketInCentrerPos;
	gCsr_tMsg1C1SendToEvision7.bogTelescopeInCenter = gDb_tRamEcuInputsC1.eEntryTelescopeFdcSensorState == GE_DI_ON;

	if(gDb_tRamData4C1RcvFromC0.boPresenceSensorPlate == FALSE) /* Avant gDb_tRamData4C1RcvFromC0.boTestFrance MODIF FR*/
		gCsr_tMsg1C1SendToEvision7.bogBasketInclinaisonInCenter = TRUE;
	else
		gCsr_tMsg1C1SendToEvision7.bogBasketInclinaisonInCenter = gDb_tRam48XsInputsC1.boHighSectorPlateSensor;

	gCsr_tMsg1C1SendToEvision7.bogDeltaArmMoveUpAllow = gDb_tRamLimitMoveC1.boAutorizeUpDeltaArm;
	gCsr_tMsg1C1SendToEvision7.bogDeltaArmMoveDownAllow =gDb_tRamLimitMoveC1.boAutorizeDownDeltaArm ;
	gCsr_tMsg1C1SendToEvision7.bogArrowArmMoveUpAllow = gDb_tRamLimitMoveC1.boAutorizeUpArrowArm;
	gCsr_tMsg1C1SendToEvision7.bogArrowArmMoveDownAllow = gDb_tRamLimitMoveC1.boAutorizeDownArrowArm;
	gCsr_tMsg1C1SendToEvision7.bogPendularMoveUpAllow = gDb_tRamLimitMoveC1.boAutorizeUpPendular;
	gCsr_tMsg1C1SendToEvision7.bogPendularMoveDownAllow = gDb_tRamLimitMoveC1.boAutorizeDownPendular;
	gCsr_tMsg1C1SendToEvision7.bogTelescopeMoveOutAllow =gDb_tRamLimitMoveC1.boAutorizeOutTelescopeArm;
	gCsr_tMsg1C1SendToEvision7.bogTelescopeMoveInAllow =gDb_tRamLimitMoveC1.boAutorizeInTelescopeArm;
	gCsr_tMsg1C1SendToEvision7.bogTurretCtClockWiseMoveAllow  = gDb_tRamLimitMoveC1.boAutorizeRotTurretCtClkwise;
	gCsr_tMsg1C1SendToEvision7.bogTurretClockWiseMoveAllow = gDb_tRamLimitMoveC1.boAutorizeRotTurretClkwise;
	gCsr_tMsg1C1SendToEvision7.bogBasketRotCtClockWiseMoveAllow = gDb_tRamLimitMoveC1.boAutorizeRotBasketCtClkwise;
	gCsr_tMsg1C1SendToEvision7.bogBasketRotClockWiseMoveAllow = gDb_tRamLimitMoveC1.boAutorizeRotBasketClkwise;
	gCsr_tMsg1C1SendToEvision7.bogBasketInclinMoveUpAllow = gDb_tRamLimitMoveC1.boAutorizeUpInclinaisonBasket;
	gCsr_tMsg1C1SendToEvision7.bogBasketInclinMoveDownAllow = gDb_tRamLimitMoveC1.boAutorizeDownInclinaisonBasket;
	gCsr_tMsg1C1SendToEvision7.bogTelescopeOutputPossible = !gDb_tRamLimitWorkEnvelopeC1.boStopAllMovements && !gDb_tRamLimitWorkEnvelopeC1.boStopTelescopeOut && gDb_tRamGeneralC1.boPortillonLadderClose == TRUE && gDb_tRamEcuC1RcvFromC0.boTranslationMovementIsSolicited == FALSE && gDb_tRamMastMeasureC1.boStop_Movement_By_Mast == FALSE;
	gCsr_tMsg1C1SendToEvision7.bogTelescopeWinderFault = boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_3,DM_TELESCOPE_SENSOR_FAULT);
	gCsr_tMsg1C1SendToEvision7.bogNacellePostSelector = gDb_tRamEcuInputsC1.eNacellePostSelectorState == GE_DI_ON;
	gCsr_tMsg1C1SendToEvision7.bogSTOP_On_Off = gDb_tRam48XsOutputsC1.boGasOilLight;//Réserve de gasoil active
	gCsr_tMsg1C1SendToEvision7.bogSafeManSystem = (gDb_tRam48XsInputsC1.u16SafetyManSystem > 0 && gDb_tRam48XsInputsC1.u16SafetyManSystem< 65535);
	/*Option feux EN15746 pour evision7*/
	gCsr_tMsg1C1SendToEvision7.bogHighSpeedAllow = gDb_tNvOptionsC1.boWhiteLight15746;
	/*detection dans C0	gCsr_tMsg1C1SendToEvision7.bogMeasuringMastFault = ;*/
	gCsr_tMsg1C1SendToEvision7.bogMeasuringMatOption = gDb_tNvOptionsC1.boMeasuringMat;
	gCsr_tMsg1C1SendToEvision7.bogBasketAccessLocked = gDb_tRam48XsInputsC1.boClosePortillonSensor;
	gCsr_tMsg1C1SendToEvision7.bogAnticlockwiseBasketSlew = gDb_tRamEcuOutputsC1.boEvRotBasketCtClkWiseActivation;
	gCsr_tMsg1C1SendToEvision7.bogClockwiseBasketSlew = gDb_tRamEcuOutputsC1.boEvRotBasketClkWiseActivation;
	gCsr_tMsg1C1SendToEvision7.bogFlashLightForced =gDb_tRamEcuOutputsC1.boOrangeFlashingLightCommand;
	gCsr_tMsg1C1SendToEvision7.bogBasketAccessLockOption = gDb_tNvOptionsC1.boPortillon;
	gCsr_tMsg1C1SendToEvision7.bogBasketStepClosed = gDb_tRam48XsInputsC1.boFoldedLadderSensor;

	/*Désactivation de la remonté du défaut système.*/
	if(gDb_tNvParametersC1.boActiveSystemFault == FALSE)
		gCsr_tMsg1C1SendToEvision7.bogSystemFault = (gDb_tRamGeneralC1.boActiveFailure == TRUE || gDb_tRamData4C1RcvFromC0.boErrorActiveOnC0 == TRUE);
	else
		gCsr_tMsg1C1SendToEvision7.bogSystemFault = FALSE;

	gCsr_tMsg1C1SendToEvision7.bogTrans1PressureSensorFault = boBloInCurGetErrStaBit(&gInCur_tTransmission1PressureSensor,DM_INCUR_SP) || boBloInCurGetErrStaBit(&gInCur_tTransmission1PressureSensor,DM_INCUR_SG_OL);
	gCsr_tMsg1C1SendToEvision7.bogTrans2PressureSensorFault = boBloInCurGetErrStaBit(&gInCur_tTransmission2PressureSensor,DM_INCUR_SP) || boBloInCurGetErrStaBit(&gInCur_tTransmission2PressureSensor,DM_INCUR_SG_OL);
	gCsr_tMsg1C1SendToEvision7.bogOverloadSecurity = !boOverloadActive;
	gCsr_tMsg1C1SendToEvision7.bogDeltaArmJoysCenteredTeles = gDb_tRam48XsInputsC1.boDeltaArmJystckCenteredTelescope;
	gCsr_tMsg1C1SendToEvision7.bogArrowJoystickCenteredTurret = gDb_tRam48XsInputsC1.boArrowJoystickCenteredTurret;
	gCsr_tMsg1C1SendToEvision7.bogDeltaArmMoveUp = gDb_tRamGeneralC1.i16ScalingJoysDeltaArm < 0;
	gCsr_tMsg1C1SendToEvision7.bogDeltaArmMoveDown = gDb_tRamGeneralC1.i16ScalingJoysDeltaArm > 0;
	gCsr_tMsg1C1SendToEvision7.bogArrowArmMoveUp = gDb_tRamGeneralC1.i16ScalingJoysArrowArm < 0;
	gCsr_tMsg1C1SendToEvision7.bogArrowArmMoveDown = gDb_tRamGeneralC1.i16ScalingJoysArrowArm > 0;
	gCsr_tMsg1C1SendToEvision7.bogTelescopeMoveOut = gDb_tRamGeneralC1.i16ScalingJoysTelescopeArm > 0;
	gCsr_tMsg1C1SendToEvision7.bogTelescopeMoveIn = gDb_tRamGeneralC1.i16ScalingJoysTelescopeArm < 0;
	gCsr_tMsg1C1SendToEvision7.bogTurretCounterClockWiseMove = gDb_tRamGeneralC1.i16ScalingJoysTurret > 0;
	gCsr_tMsg1C1SendToEvision7.bogTurretClockWiseMove = gDb_tRamGeneralC1.i16ScalingJoysTurret < 0;
	gCsr_tMsg1C1SendToEvision7.bogTurretEncoderFault = gCsr_tFailuresC0SendToC1.boDm_Turret_Sensor_Fault;
	gCsr_tMsg1C1SendToEvision7.bogGeneratorOption = gDb_tNvOptionsC1.boGenerator;
	gCsr_tMsg1C1SendToEvision7.bogGeneratorActive = gDb_tRamGreenEffC1.boGeneratorOn;

	/* affect global variable to Can Msg 2 send to eVision7*/
	gCsr_tMsg2C1SendToEvision7.u8gFuel = u8CastU16(gDb_tRamEcuInputsC1.i16GasGaugeValue);
	gCsr_tMsg2C1SendToEvision7.u16gBattery_Voltage = gDb_tRamGeneralC1.u16EcuVoltage;
	gCsr_tMsg2C1SendToEvision7.u8gTrainTransmissionPressure = u8CastI16(i16Div(gDb_tRamEcuInputsC1.i16Transmission1PressureSensorValue, 10));

	/* affect global variable to Can Msg 3 send to eVision7*/
	gCsr_tMsg3C1SendToEvision7.u32MinValueEncodeurMast = gDb_tNvParamMastC1.u32MinValueEncodeurMast;
	gCsr_tMsg3C1SendToEvision7.u32MaxValueEncodeurMast = gDb_tNvParamMastC1.u32MaxValueEncodeurMast;

	/* affect global variable to Can Msg 4 send to eVision7*/
	gCsr_tMsg4C1SendToEvision7.u32EncodeurMastMeasureRaw = gDb_tRamEcuC1RcvFromC0.u32EncodeurMastMeasureRaw;
	gCsr_tMsg4C1SendToEvision7.u16EncodeurMastMeasureCentimeter = gDb_tRamMastMeasureC1.u16EncodeurMastMeasureCentimeter;;

//DEBUG CPU TO Evision7
	gCsr_tMsgDebugC1SendToEvision7.u16FaultyValue = gDb_tRamGeneralC1.u16FaultyValue;
	gCsr_tMsgDebugC1SendToEvision7.u8DeviceNum = gDb_tRamGeneralC1.u8DeviceNum;
	gCsr_tMsgDebugC1SendToEvision7.u8ErrorCode = gDb_tRamGeneralC1.u8ErrorCode;
	gCsr_tMsgDebugC1SendToEvision7.i16DebugVehicleSlope = i16CastU16(gDb_tRamEcuC1RcvFromC0.u16SlopeAngle);

	/* affect global variable to Can Msg 5 send to eVision7*/
	gCsr_tMsg5C1SendToEvision7.boPin107 = gDb_tRamGeneralNeotecC1.eMotorStateJ1939 == GE_Stopped;
	gCsr_tMsg5C1SendToEvision7.boPin131 = gDb_tRamEcuInputsC1.eTurretPostSelectorState == GE_DI_ON;
	gCsr_tMsg5C1SendToEvision7.boPin108 = gDb_tRamEcuInputsC1.eRadioPostSelectorState == GE_DI_ON;
	gCsr_tMsg5C1SendToEvision7.boPin132 = gDb_tRamEcuInputsC1.eNacellePostSelectorState == GE_DI_ON;
	gCsr_tMsg5C1SendToEvision7.boPin109 = gDb_tRamGeneralNeotecC1.u16OilPressureJ1939 == 0;
	gCsr_tMsg5C1SendToEvision7.boPin133 = gDb_tRamGeneralNeotecC1.i16WaterTempJ1939 >= 116;/* préconisation moteur perkins*/
//	gCsr_tMsg5C1SendToEvision7.boPin110 = FALSE; /* Not used*/
	gCsr_tMsg5C1SendToEvision7.boPin110 = gDb_tRamGeneralNeotecC1.eWarmingActiveJ1939;/*Envoie info préchauffage du moteur*/
	gCsr_tMsg5C1SendToEvision7.boPin134 = FALSE; /* Not used*/
	gCsr_tMsg5C1SendToEvision7.boPin111 = gDb_tRamEcuInputsC1.eFaultPvgDeltaArmState == GE_DI_ON;
	gCsr_tMsg5C1SendToEvision7.boPin135 = gDb_tRamEcuInputsC1.eFaultPvgArrowArmState == GE_DI_ON;
	gCsr_tMsg5C1SendToEvision7.boPin112 = gDb_tRamEcuInputsC1.eFaultPvgTelescopeArmState == GE_DI_ON;
	gCsr_tMsg5C1SendToEvision7.boPin136 = gDb_tRamEcuInputsC1.eFaultPvgEvProTorState == GE_DI_ON;
	gCsr_tMsg5C1SendToEvision7.boPin113 = gDb_tRamEcuInputsC1.eEntryTelescopeFdcSensorState == GE_DI_ON;
	gCsr_tMsg5C1SendToEvision7.boPin137 = gDb_tRamEcuInputsC1.eAru1State == GE_DI_ON;
	gCsr_tMsg5C1SendToEvision7.boPin114 = FALSE; // Not used
	gCsr_tMsg5C1SendToEvision7.boPin138 = gDb_tRamEcuInputsC1.eAru2State == GE_DI_ON;
	gCsr_tMsg5C1SendToEvision7.boPin140 = FALSE; // Not used
	gCsr_tMsg5C1SendToEvision7.boPin117 = gDb_tRamEcuInputsC1.eFoldedDeltaArmSensorState == GE_DI_ON;
	gCsr_tMsg5C1SendToEvision7.boPin141 = gDb_tRamEcuInputsC1.eFoldedBoomArmSensorState == GE_DI_ON;
	gCsr_tMsg5C1SendToEvision7.boPin124 = gDb_tRamEcuInputsC1.eActiveHelpState == GE_DI_ON;
	gCsr_tMsg5C1SendToEvision7.boPin148 = gDb_tRamEcuInputsC1.eAlternatorChargeOkState == GE_DI_ON;
	gCsr_tMsg5C1SendToEvision7.boPin153 = gDig_tSupllyAnaSensors.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg5C1SendToEvision7.boPin177 = gDig_tEvSelectorRotTurret.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg5C1SendToEvision7.boPin159 = gDig_tEvSyncRotation.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg5C1SendToEvision7.boPin183 = gDig_tNoisemaker.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg5C1SendToEvision7.boPin154 = gDig_tEvRotTurretClkwise.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg5C1SendToEvision7.boPin178 = gDig_tEvRotTurretCtClkwise.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg5C1SendToEvision7.boPin157 = gDig_tEvRotBasketCtClkwise.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg5C1SendToEvision7.boPin181 = gDig_tEvRotBasketClkwise.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg5C1SendToEvision7.boPin160 = gDig_tEvUpPendular.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg5C1SendToEvision7.boPin184 = gDig_tEvDownPendular.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg5C1SendToEvision7.boPin187 = gDig_tEvUpInclinaisonBasket.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg5C1SendToEvision7.boPin163 = gDig_tEvDownInclinaisonBasket.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg5C1SendToEvision7.boPin149 = gDig_tBlueFire.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg5C1SendToEvision7.boPin173 = gDig_tOrangeFlashingLight.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg5C1SendToEvision7.boPin152 = gDig_tSupllyTorSensors.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg5C1SendToEvision7.boPin176 = gDig_tOverloadSecurity.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg5C1SendToEvision7.boPin155 = FALSE; /* Not used*/
	gCsr_tMsg5C1SendToEvision7.boPin179 = gDig_tEvDevMvts.tOut.eValSta == DIG_STA_ON; /*Ev Alimentation mouvements*/
	gCsr_tMsg5C1SendToEvision7.boPin158 = FALSE; /* Not used*/
	gCsr_tMsg5C1SendToEvision7.boPin182 = gDig_tEvBypass.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg5C1SendToEvision7.boPin251 = FALSE; /* Not used*/
	gCsr_tMsg5C1SendToEvision7.boPin186 = gDig_tEvCrawlerOnly.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg5C1SendToEvision7.boPin239 = gDig_tRelayReloadWithGenerator.tOut.eValSta == DIG_STA_ON; /*Contacteur Génératrice*/

	/* affect global variable to Can Msg 6 send to eVision7*/
	gCsr_tMsg6C1SendToEvision7.boPin230Fault = FALSE; /* Sensor GND*/
	gCsr_tMsg6C1SendToEvision7.boPin243Fault = FALSE; /* Sensor GND*/
	gCsr_tMsg6C1SendToEvision7.boPin244Fault = FALSE; /* Sensor GND*/
	gCsr_tMsg6C1SendToEvision7.boPin245Fault = FALSE; /* Sensor GND*/
	gCsr_tMsg6C1SendToEvision7.boPin256Fault = FALSE; /* Sensor GND*/
	gCsr_tMsg6C1SendToEvision7.boPin257Fault = FALSE; /* Sensor GND*/
	gCsr_tMsg6C1SendToEvision7.boPin258Fault = FALSE; /* Sensor GND*/
	gCsr_tMsg6C1SendToEvision7.boPin103Fault = u16BloInCurGetErrStaAll(&gInCur_tTransmission1PressureSensor) != 0; /* Transmission1PressureSensor Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin127Fault = u16BloInCurGetErrStaAll(&gInCur_tTransmission2PressureSensor) != 0; /* Transmission2PressureSensor Fault*/

	TUint16 TempErrStaAll = 0;
	eBloInCurDblGetErrStaAll(&gInCurDbl_tDeltaArmAngularSensor,&TempErrStaAll);
	gCsr_tMsg6C1SendToEvision7.boPin104Fault = TempErrStaAll != 0; /* DeltaArm1AngularSensor Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin128Fault = TempErrStaAll != 0; /* DeltaArm2AngularSensor Fault*/
	eBloInCurDblGetErrStaAll(&gInCurDbl_tArrowArmAngularSensor,&TempErrStaAll);
	gCsr_tMsg6C1SendToEvision7.boPin105Fault = TempErrStaAll != 0; /* ArrowArm1AngularSensor Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin129Fault = TempErrStaAll != 0; /* ArrowArm2AngularSensor Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin106Fault = u16BloInResistGetErrStaAll(&gInResist_tGasGauge) != 0; /* GasGauge Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin130Fault = u16BloInCurGetErrStaAll(&gInCur_tBypassPressureSensor) != 0; /* BypassPressureSensor Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin131Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tTurretPostSelector) != 0; /* TurretPostSelector Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin108Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tRadioPostSelector) != 0; /* RadioPostSelector Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin132Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tNacellePostSelector) != 0; /* NacellePostSelector Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin110Fault = u16BloInCurGetErrStaAll(&gInCur_tOilTankTemperature) != 0;; /* InCur_tOilTankTemperature*/
	gCsr_tMsg6C1SendToEvision7.boPin134Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToEvision7.boPin111Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tFaultPvgDeltaArm) != 0; /* FaultPvgDeltaArm Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin135Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tFaultPvgArrowArm) != 0; /* FaultPvgArrowArm Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin112Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tFaultPvgTelescopeArm) != 0;/* FaultPvgTelescopeArm Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin136Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tFaultPvgEvProTOR) != 0; /* FaultPvgEvProTOR Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin113Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tEntryTelescopeFdcSensor) != 0;/* EntryTelescopeFdcSensor Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin137Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tAru1) != 0; /* Aru1 Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin114Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToEvision7.boPin138Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tAru2) != 0; /* Aru2 Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin115Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToEvision7.boPin139Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToEvision7.boPin116Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToEvision7.boPin140Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToEvision7.boPin117Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tDeltaArmFoldedSensor) != 0; /* DeltaArmFoldedSensor Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin141Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tBoomArmFoldedSensor) != 0; /* BoomArmFoldedSensor Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin122Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToEvision7.boPin146Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToEvision7.boPin147Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToEvision7.boPin124Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tActiveHelp) != 0; /* ActiveHelp Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin148Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tAlternatorChargeOK) != 0; /* AlternatorChargeOK Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin153Fault = gDig_tSupllyAnaSensors.tOut.ePinSta != 0; /* SupllyAnaSensors Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin177Fault = gDig_tEvSelectorRotTurret.tOut.ePinSta != 0; /* Not used ? (EV sélection rotation tourelle)*/
	gCsr_tMsg6C1SendToEvision7.boPin180Fault = gPro_tEvPropGenerator.tOut.ePinStaHs != 0; /* EvPropGenerator Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin159Fault = gDig_tEvSyncRotation.tOut.ePinSta != 0; /* EvSyncRotation Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin183Fault = gDig_tNoisemaker.tOut.ePinSta != 0; /* Noisemaker Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin186Fault = gDig_tEvCrawlerOnly.tOut.ePinSta != 0; /* EvCrawlerOnly Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin162Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToEvision7.boPin189Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToEvision7.boPin165Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToEvision7.boPin192Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToEvision7.boPin168Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToEvision7.boPin195Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToEvision7.boPin171Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToEvision7.boPin154Fault = gDig_tEvRotTurretClkwise.tOut.ePinSta != 0; /* EvRotationTurretClockwise Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin178Fault = gDig_tEvRotTurretCtClkwise.tOut.ePinSta != 0; /* EvRotationTurretCounterClockwise Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin157Fault = gDig_tEvRotBasketCtClkwise.tOut.ePinSta != 0; /* EvRotationBasketCounterClockwise Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin181Fault = gDig_tEvRotBasketClkwise.tOut.ePinSta != 0; /* EvRotationBasketClockwise Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin160Fault = gDig_tEvUpPendular.tOut.ePinSta != 0; /* EvUpPendular Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin184Fault = gDig_tEvDownPendular.tOut.ePinSta != 0; /* EvDownPendular Fault*/
	gCsr_tMsg6C1SendToEvision7.boPin187Fault = gDig_tEvUpInclinaisonBasket.tOut.ePinSta != 0; /* EvUpInclinaisonBasket Fault*/

	/* affect global variable to Can Msg 7 send to eVision7*/
	gCsr_tMsg7C1SendToEvision7.boPin163Fault = gDig_tEvDownInclinaisonBasket.tOut.ePinSta != 0; /* EvDownInclinaisonBasket Fault*/
	gCsr_tMsg7C1SendToEvision7.boPin190Fault = FALSE; /* Not used*/
	gCsr_tMsg7C1SendToEvision7.boPin166Fault = FALSE; /* Not used*/
	gCsr_tMsg7C1SendToEvision7.boPin193Fault = FALSE; /* Not used*/
	gCsr_tMsg7C1SendToEvision7.boPin169Fault = FALSE; /* Not used*/
	gCsr_tMsg7C1SendToEvision7.boPin196Fault = FALSE; /* Not used*/
	gCsr_tMsg7C1SendToEvision7.boPin172Fault = FALSE; /* Not used*/
	gCsr_tMsg7C1SendToEvision7.boPin101Fault = FALSE; /* Not used*/
	gCsr_tMsg7C1SendToEvision7.boPin125Fault = FALSE; /* Not used*/
	gCsr_tMsg7C1SendToEvision7.boPin150Fault = FALSE; /* Not used*/
	gCsr_tMsg7C1SendToEvision7.boPin174Fault = FALSE; /* Not used*/
	gCsr_tMsg7C1SendToEvision7.boPin102Fault = FALSE; /* Not used*/
	gCsr_tMsg7C1SendToEvision7.boPin126Fault = FALSE; /* Not used*/
	gCsr_tMsg7C1SendToEvision7.boPin151Fault = FALSE; /* Not used*/
	gCsr_tMsg7C1SendToEvision7.boPin175Fault = FALSE; /* Not used*/
	gCsr_tMsg7C1SendToEvision7.boPin149Fault = gDig_tBlueFire.tOut.ePinSta != 0; /* BlueFire Fault*/
	gCsr_tMsg7C1SendToEvision7.boPin173Fault = gDig_tOrangeFlashingLight.tOut.ePinSta != 0; /* OrangeFlashingLight Fault*/
	gCsr_tMsg7C1SendToEvision7.boPin152Fault = gDig_tSupllyTorSensors.tOut.ePinSta != 0; /* SupllyTorSensors Fault*/
	gCsr_tMsg7C1SendToEvision7.boPin176Fault = gDig_tOverloadSecurity.tOut.ePinSta != 0; /* OverloadSecurity Fault*/
	gCsr_tMsg7C1SendToEvision7.boPin155Fault = FALSE; /* Not used*/
	gCsr_tMsg7C1SendToEvision7.boPin179Fault = gDig_tEvDevMvts.tOut.ePinSta != 0; /* Défaut EV déviation mouvements*/
	gCsr_tMsg7C1SendToEvision7.boPin158Fault = FALSE; /* Not used*/
	gCsr_tMsg7C1SendToEvision7.boPin182Fault = gDig_tEvBypass.tOut.ePinSta != 0; /* EvBypass Fault*/
	gCsr_tMsg7C1SendToEvision7.boPin251Fault = FALSE; /* Not used*/
	gCsr_tMsg7C1SendToEvision7.boPin252Fault = gDig_tReturnLowSideEvProGenerator.tOut.ePinSta != 0; /* ReturnLowSideEvProGenerator Fault*/
	gCsr_tMsg7C1SendToEvision7.boPin239Fault = gDig_tRelayReloadWithGenerator.tOut.ePinSta != 0; /* Défaut contacteur génératrice*/
	gCsr_tMsg7C1SendToEvision7.boPin253Fault = FALSE; /* Not used*/
	gCsr_tMsg7C1SendToEvision7.boPin240Fault = FALSE; /* Not used*/
	gCsr_tMsg7C1SendToEvision7.boPin254Fault = FALSE; /* Not used*/
	gCsr_tMsg7C1SendToEvision7.boPin241Fault = FALSE; /* Not used*/
	gCsr_tMsg7C1SendToEvision7.boPin161Fault = gOutVoltPro_tPvgDeltaArm.tOut.ePinState != 0; /* PvgDeltaArm Fault*/
	gCsr_tMsg7C1SendToEvision7.boPin185Fault = gOutVoltPro_tPvgArrowArm.tOut.ePinState != 0; /* PvgArrowArm Fault*/
	gCsr_tMsg7C1SendToEvision7.boPin188Fault = gOutVoltPro_tPvgTelescopeArm.tOut.ePinState != 0; /* PvgTelescopeArm Fault*/
	gCsr_tMsg7C1SendToEvision7.boPin164Fault = gOutVoltPro_tPvgPropEvTOR.tOut.ePinState != 0; /* PvgPropEvTOR Fault*/
	gCsr_tMsg7C1SendToEvision7.boPin191Fault = gDig_tSupplyPvgDeltaArm.tOut.ePinSta != 0; /* SupplyPvgDeltaArm Fault*/
	gCsr_tMsg7C1SendToEvision7.boPin167Fault = gDig_tSupplyPvgBoomArm.tOut.ePinSta != 0; /* SupplyPvgBoomArm Fault*/
	gCsr_tMsg7C1SendToEvision7.boPin194Fault = gDig_tSupplyPvgTelescopeArm.tOut.ePinSta != 0; /* SupplyPvgTelescopeArm Fault*/
	gCsr_tMsg7C1SendToEvision7.boPin170Fault = gDig_tSupplyPvgPropEvTOR.tOut.ePinSta != 0; /* SupplyPvgPropEvTOR Fault*/

	/* affect global variable to Can Msg 8 send to eVision7*/
	gCsr_tMsg8C1SendToEvision7.u16gPvgDeltaArmVoltage = gDb_tRamEcuOutputsC1.u16PvgDeltaArmVoltage;
	gCsr_tMsg8C1SendToEvision7.u16gPvgArrowArmVoltage = gDb_tRamEcuOutputsC1.u16PvgArrowArmVoltage;
	gCsr_tMsg8C1SendToEvision7.u16gPvgTelescopeArmVoltage = gDb_tRamEcuOutputsC1.u16PvgTelescopeArmVoltage;
	gCsr_tMsg8C1SendToEvision7.u16gPvgEvTorVoltage = gDb_tRamEcuOutputsC1.u16PvgEvTorVoltage;

	/* affect global variable to Can Msg 9 send to eVision7*/
	gCsr_tMsg9C1SendToEvision7.bogPendularMoveUp = gDb_tRamEcuOutputsC1.boEvUpPendularCommandBool;
	gCsr_tMsg9C1SendToEvision7.bogPendularMoveDown = gDb_tRamEcuOutputsC1.boEvDownPendularCommandBool;
	gCsr_tMsg9C1SendToEvision7.bogBasketRotCtClockWiseMove = gDb_tRamEcuOutputsC1.boEvRotationBasketCtClkWiseCmdBool;
	gCsr_tMsg9C1SendToEvision7.bogBasketRtClockWiseMove = gDb_tRamEcuOutputsC1.boEvRotationBasketClkWiseCmdBool;
	gCsr_tMsg9C1SendToEvision7.bogBasketInclinaisonMoveUp = gDb_tRamEcuOutputsC1.boEvUpInclinaisonBasketCmdBool;
	gCsr_tMsg9C1SendToEvision7.bogBasketInclinaisonMoveDown = gDb_tRamEcuOutputsC1.boEvDownInclinaisonBasketCmdBool;
	gCsr_tMsg9C1SendToEvision7.bogFuelLow = u8CastU16(gDb_tRamEcuInputsC1.i16GasGaugeValue);
	gCsr_tMsg9C1SendToEvision7.i16gDeltaArmAngleValue = gDb_tRamEcuInputsC1.i16DeltaArmAngleValue;
	gCsr_tMsg9C1SendToEvision7.i16gArrowArmAngleValue = gDb_tRamEcuInputsC1.i16ArrowArmAngleValue;
	gCsr_tMsg9C1SendToEvision7.i16gTelescopePositionValue = i16CastU16(gDb_tRamTelescopeCanC1.u16LenghtTelescope1);

	/* affect global variable to Can Msg 10 send to eVision7*/
	gCsr_tMsg10C1SendToEvision7.u8gTTC510Version_Major = MAJOR;
	gCsr_tMsg10C1SendToEvision7.u8gTTC510Version_Minor = MINOR;
	gCsr_tMsg10C1SendToEvision7.u8gTTC510Version_Patch = PATCH;
	gCsr_tMsg10C1SendToEvision7.u8gTTC510Version_Custom = CUSTOM;
	gCsr_tMsg10C1SendToEvision7.u8gTTC48XSVersion_Major = gDb_tRamGeneralC1.u8Major_48XS;
	gCsr_tMsg10C1SendToEvision7.u8gTTC48XSVersion_Minor = gDb_tRamGeneralC1.u8Minor_48XS;
	gCsr_tMsg10C1SendToEvision7.u8gTTC48XSVersion_Patch = gDb_tRamGeneralC1.u8Patch_48XS;
	gCsr_tMsg10C1SendToEvision7.u8gTTC48XSVersion_Custom = gDb_tRamGeneralC1.u8Custom_48XS;

	/* affect global variable to Can Msg 11 send to eVision7*/
	gCsr_tMsg11C1SendToEvision7.i16gScalingJoysTurret = gDb_tRamGeneralC1.i16ScalingJoysTurret;
	gCsr_tMsg11C1SendToEvision7.i16gScalingJoysDeltaArm = gDb_tRamGeneralC1.i16ScalingJoysDeltaArm;
	gCsr_tMsg11C1SendToEvision7.i16gScalingJoysArrowArm = gDb_tRamGeneralC1.i16ScalingJoysArrowArm;
	gCsr_tMsg11C1SendToEvision7.i16gScalingJoysTelescopeArm = gDb_tRamGeneralC1.i16ScalingJoysTelescopeArm;

	/* affect global variable to Can Msg 12 send to eVision7*/
	gCsr_tMsg12C1SendToEvision7.i16gGeneratorSolenoidValue = gDb_tRamEcuOutputsC1.u16EvPropGeneratorCurrent;

	/* affect global variable to Can Msg 13 send to eVision7*/
	gCsr_tMsg13C1SendToEvision7.i16gBypassPressureSensorValue = gDb_tRamEcuInputsC1.i16BypassPressureSensorValue;
//GREEN
	gCsr_tMsg13C1SendToEvision7.u16gBatteryVoltageMv =  gDb_tRamGeneralC1.u16EcuVoltage;
	gCsr_tMsg13C1SendToEvision7.u16RemainingRegenTimeAverage = gDb_tRamGreenEffC1.u16RemainingRegenTimeAverage;
	gCsr_tMsg13C1SendToEvision7.boElectricMotorForbidden = gDb_tRamGreenEffC1.boElectricMotorForbidden;
	gCsr_tMsg13C1SendToEvision7.boReloadWithGeneratorOn = gDb_tRamGreenEffC1.boReloadWithGeneratorOn;
	gCsr_tMsg13C1SendToEvision7.boPictoColdOilTankTemperature = gDb_tRamGreenEffC1.boPictoColdOilTankTemperature;
	gCsr_tMsg13C1SendToEvision7.boPictoWarningValidCycleMast = gDb_tRamMastMeasureC1.boPictoWarningFirstValidCycleMast;

	/* affect global variable to Can Msg 14 send to eVision7*/
	gCsr_tMsg14C1SendToEvision7.i16OilTankTemperatureValue = gDb_tRamEcuInputsC1.i16OilTankTemperatureValue;
	gCsr_tMsg14C1SendToEvision7.u16TotalRegenHours = gDb_tRamGreenEffC1.u16TotalRegenHours;
	gCsr_tMsg14C1SendToEvision7.u16TotalElectricHours = gDb_tRamGreenEffC1.u16TotalElectricHours;

    /* ============================================================================================= */
	/* 										Data Sent to C0											 */
	/* ============================================================================================= */
	gCsr_tDataRcvFromC1.bi2C1NacellePostSelector = (TBit2)gDb_tRamEcuInputsC1.eNacellePostSelectorState;
	gCsr_tDataRcvFromC1.bi2C1RadioPostSelector = (TBit2)gDb_tRamEcuInputsC1.eRadioPostSelectorState;
	gCsr_tDataRcvFromC1.bi2C1TurretPostSelector = (TBit2)gDb_tRamEcuInputsC1.eTurretPostSelectorState;
	gCsr_tDataRcvFromC1.boUpAxleOscillantCommand = gDb_tRamEcuOutputsC1.boEvUpAxleOscillantCmd;
	gCsr_tDataRcvFromC1.boDownAxleOscillantCommand = gDb_tRamEcuOutputsC1.boEvDownAxleOscillantCmd;
	gCsr_tDataRcvFromC1.boUpAxleFixeCommand = gDb_tRamEcuOutputsC1.boEvUpAxleFixeCmd;
	gCsr_tDataRcvFromC1.boDownAxleFixeCommand = gDb_tRamEcuOutputsC1.boEvDownAxleFixeCmd;
	gCsr_tDataRcvFromC1.i32RegimeMotorAlternatorRpm = gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939;
	gCsr_tDataRcvFromC1.boEntryTelescopeFdcSensor = gDb_tRamEcuInputsC1.eEntryTelescopeFdcSensorState == GE_DI_ON;
	gCsr_tDataRcvFromC1.boDeltaArmFoldedSensor = gDb_tRamEcuInputsC1.eFoldedDeltaArmSensorState == GE_DI_ON;
	gCsr_tDataRcvFromC1.boBoomArmFoldedSensor = gDb_tRamEcuInputsC1.eFoldedBoomArmSensorState == GE_DI_ON;
	gCsr_tDataRcvFromC1.boDeltaArmInLowerZone = gDb_tRamMvtEndStopC1.boFoldedDeltaArm;
	gCsr_tDataRcvFromC1.i16ArrowArmAngularSensor = gDb_tRamEcuInputsC1.i16ArrowArmAngularSensorValue;
	gCsr_tDataRcvFromC1.boTurretInRearCenterPos = gDb_tRamAutoStopC1.boTurretInRearCenterPos;
	gCsr_tDataRcvFromC1.boTurretInFrontCenterPos = gDb_tRamAutoStopC1.boTurretInFrontPositiveCenterPos || gDb_tRamAutoStopC1.boTurretInFrontNegativeCenterPos;
	gCsr_tData2RdvFromC1.boEvUpMeasuringMastCmd = gDb_tRamEcuOutputsC1.boEvUpMastMeasureActivation;
	gCsr_tData2RdvFromC1.boEvDownMeasuringMastCmd = gDb_tRamEcuOutputsC1.boEvDownMastMeasureActivation;
	gCsr_tData2RdvFromC1.i16DeltaArmAngularSensorValue = gDb_tRamEcuInputsC1.i16DeltaArmAngularSensorValue;
	gCsr_tData2RdvFromC1.boFoldedMastMeasure = gDb_tRamMastMeasureC1.boFolded_Position_Mast;
	gCsr_tData2RdvFromC1.i16Transmission1Pressure = gDb_tRamEcuInputsC1.i16Transmission1PressureSensorValue;
	gCsr_tData2RdvFromC1.i16Transmission2Pressure = gDb_tRamEcuInputsC1.i16Transmission2PressureSensorValue;
	gCsr_tData2RdvFromC1.bi2ActiveHelpState = (TBit2)gDb_tRamEcuInputsC1.eActiveHelpState;
	gCsr_tData2RdvFromC1.boBasketInCentrerPos = gDb_tRamAutoStopC1.boBasketInCentrerPos;
	gCsr_tData2RdvFromC1.boStopAllMovementsNacellePost = gDb_tRamGeneralC1.boStopAllMovementsNacellePost;

	if (gDb_tRamEcuInputsC1.eFoldedDeltaArmSensorState == GE_DI_ON && gDb_tRamEcuInputsC1.eFoldedBoomArmSensorState == GE_DI_ON)
	{	gCsr_tData2RdvFromC1.boFoldedDeltaArmZone = TRUE;
		gCsr_tData2RdvFromC1.boFoldedArrowArmZone = TRUE;
	}
	else
	{	gCsr_tData2RdvFromC1.boFoldedDeltaArmZone = FALSE;
		gCsr_tData2RdvFromC1.boFoldedArrowArmZone = FALSE;
	}

	gCsr_tData3RcvFromC1.u16EncodeurMastMeasureCentimeter = gDb_tRamMastMeasureC1.u16EncodeurMastMeasureCentimeter;
	gCsr_tFailuresC1SendToC0.boOutOfRangeTransmissionPressure = boBloInCurGetErrStaBit(&gInCur_tTransmission1PressureSensor,DM_INCUR_SP) || boBloInCurGetErrStaBit(&gInCur_tTransmission1PressureSensor,DM_INCUR_SG_OL);
	gCsr_tData3RcvFromC1.boMastMeasureFonctionActive = (gDb_tRamMastMeasureC1.boFonction_Active == TRUE || gDb_tRamMastMeasureC1.boFolded_Position_Mast == FALSE);
	gCsr_tData3RcvFromC1.boBeacon = gDb_tRamEcuOutputsC1.boOrangeFlashingLightCommand;
	gCsr_tData3RcvFromC1.boFaultLenghtSensor =boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_3,DM_TELESCOPE_SENSOR_FAULT) == TRUE;
	gCsr_tData3RcvFromC1.boOptionWhiteLight15746 = gDb_tNvOptionsC1.boWhiteLight15746;
	gCsr_tData3RcvFromC1.bogSafeManSystem = (gDb_tRam48XsInputsC1.u16SafetyManSystem > 0 && gDb_tRam48XsInputsC1.u16SafetyManSystem< 65535) ;
	gCsr_tFailuresC1SendToC0.boDm_Inc_Pos_Folded_Delta_Arrow = boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_3,DM_INC_POS_FOLDED_DELTA_ARROW);
	gCsr_tFailuresC1SendToC0.boDm_Active_Help = boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_2,DM_ACTIVE_HELP);
	gCsr_tFailuresC1SendToC0.boDm_Ev_Bypass_Fault = boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_2,DM_EV_BYPASS_FAULT);
	gCsr_tFailuresC1SendToC0.boDm_Overload_Detected_By_C1 = boOverloadActive;
	gCsr_tData4C1SendToC0.boNoMovementRunning = (gDb_tRamEcuOutputsC1.boEvBypassCommand == TRUE /*|| gDb_tRamEcuOutputsC1.u16EvPropGeneratorCommand != 0*/);//GREEN
	gCsr_tData4C1SendToC0.boStopMoveLimitEnvelop = boBloErrGetErrStaBit(&gErr_tSpecificErrorC1, DM_STOP_MOVE_LIMIT_ENVLP_C1);// DM_STOP_MOVE_LIMIT_ENVLP_C1
	gCsr_tData4C1SendToC0.boTransmissionPressureFault = boBloErrGetErrStaBit(&gErr_tSpecificErrorC1,DM_TRANSMISSION_PRESSURE_FAULT);
	gCsr_tData4C1SendToC0.boLynxOnAllMvts = gDb_tRamGeneralC1.boLynxOnAllMvts;
	/*Multi Gage*/
	gCsr_tData2RdvFromC1.boSlopeModeFromC1 = gDb_tNvParamLimitWorkEnvelopeC1.boSlopeTelescopeMode;

//GREEN
	gCsr_tData5C1SendToC0.boColdOilTankTemperature = gDb_tRamGreenEffC1.boColdOilTankTemperature;
	gCsr_tData5C1SendToC0.boElectricMotorForbidden = gDb_tRamGreenEffC1.boElectricMotorForbidden;
	gCsr_tData5C1SendToC0.boSocStopRegen = gDb_tRamGreenEffC1.boSocStopRegen;
	gCsr_tData5C1SendToC0.boGeneratorOn = gDb_tRamGreenEffC1.boGeneratorOn; //AVANT gCsr_tData4C1SendToC0.boSignal_4 = gDb_tRamGreenEffC1.boGeneratorOn;
	gCsr_tData5C1SendToC0.boEvDevMvtsCmd = gDb_tRamEcuOutputsC1.boEvDevMvtsCmd; //AVANT gCsr_tData4C1SendToC0.boSignal_5 = gDb_tRamEcuOutputsC1.boEvDevMvtsCmd;
	gCsr_tData5C1SendToC0.i16RpmMotorElectric = gDb_tRamGreenEffC1.i16RpmMotorElectric;
	gCsr_tData5C1SendToC0.i16OilTankTemperatureValue = gDb_tRamEcuInputsC1.i16OilTankTemperatureValue;

	gCsr_tData5C1SendToC0.boAutoModeActivate = gDb_tRamGreenEffC1.boAutoModeActivate;
	gCsr_tData5C1SendToC0.boSilenceModeActivate = gDb_tRamGreenEffC1.boSilenceModeActivate;
	gCsr_tData5C1SendToC0.boForcingRegenlow = gDb_tRamGreenEffC1.boForcingRegenlow;
	gCsr_tData5C1SendToC0.boForcingRegenHigh = gDb_tRamGreenEffC1.boForcingRegenHigh;

	gCsr_tData5C1SendToC0.boEvBypassCommand = gDb_tRamEcuOutputsC1.boEvBypassCommand;
	gCsr_tData5C1SendToC0.i16MotorspeedCmdJ1939 = gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939;/*gDb_tRamGeneralNeotecC1.u16MotorSpeedCmdJ1939;*/

//NEOTEC IG STRUKTON DEBUT
	gCsr_tData5C1SendToC0.boPerformAutoriseTransArrow = gDb_tRamMvtEndStopC1.boPerformAutoriseTransSlopeArrow;
	gCsr_tData5C1SendToC0.boValidTelescopeSector = gDb_tRamMvtEndStopC1.boValidSectorTelescope;
	gCsr_tData5C1SendToC0.boValidFirstSectorTelescope = gDb_tRamMvtEndStopC1.boValidFirstSectorTelescope;
	gCsr_tData5C1SendToC0.boInterdictOfNacelTurretPost = gDb_tRamMastMeasureC1.boInterdictionOfNacelleTurretPost;
	gCsr_tData5C1SendToC0.boPostInterdictionMastSNCF = gDb_tRamMastMeasureC1.boPostInterdictionMastSNCF;
	gCsr_tData5C1SendToC0.boMastPanthoFoldedSNCF = (gDb_tRamMastMeasureC1.boMastPanthoInFoldedPosition == TRUE || gDb_tNvOptionsC1.boContactMastSNCFOption == FALSE);
//NEOTEC IG STRUKTON FIN
	/* ============================================================================================= */
	/* 										48XS													 */
	/* ============================================================================================= */
	/* for safety configuration 48Xs*/
	/* affect data*/
	gDb_tRam48XsOutputsC1.boRedLightARDBasket = gDb_tRamEcuC1RcvFromC0.boRedLightARDBasketCmd;
	gDb_tRam48XsOutputsC1.boRedLightARGBasket = gDb_tRamEcuC1RcvFromC0.boRedLightARGBasketCmd;
	gDb_tRam48XsOutputsC1.boWhiteLightARDBasket = gDb_tRamEcuC1RcvFromC0.boWhiteLightARDBasketCmd;
	gDb_tRam48XsOutputsC1.boWhiteLightARGBasket = gDb_tRamEcuC1RcvFromC0.boWhiteLightARGBasketCmd;
	/*Moteur J1939*/
	gCsr_tSRDO4_48XS.boMotorDefaultLight = (gDb_tRamEcuInputsC1.eAlternatorChargeOkState == GE_DI_ON  || gDb_tRamGeneralNeotecC1.u16OilPressureJ1939 == 0 || gDb_tRamGeneralNeotecC1.i16WaterTempJ1939 >= 116);
	gCsr_tSRDO4_48XS.boOverloadLight = boOverloadActive;
	gCsr_tSRDO4_48XS.boWhiteLightAr15746 = gDb_tRam48XsOutputsC1.boWhiteLightAr15746Command;
	gCsr_tSRDO4_48XS.boBuzzer = gDb_tRam48XsOutputsC1.boBuzzer;
	gCsr_tSRDO4_48XS.boSupplyDeadManPedalAndJoysticks = gDb_tRam48XsOutputsC1.boSupplyDeadManPedalAndJoysticks;
	gCsr_tSRDO4_48XS.boDeversDefaultLight = gDb_tRamData4C1RcvFromC0.boSlopeHighWithWorkOnCrawler;
	gCsr_tSRDO4_48XS.boGasOilLight = gDb_tRam48XsOutputsC1.boGasOilLight;
	gCsr_tSRDO4_48XS.boWhiteLightARD = gDb_tRam48XsOutputsC1.boWhiteLightARDBasket;
	gCsr_tSRDO4_48XS.boWhiteLightARG = gDb_tRam48XsOutputsC1.boWhiteLightARGBasket;
	gCsr_tSRDO4_48XS.boRedLightARD = gDb_tRam48XsOutputsC1.boRedLightARDBasket;
	gCsr_tSRDO4_48XS.boRedLightARG = gDb_tRam48XsOutputsC1.boRedLightARGBasket;

	/* ============================================================================================= */
	/* 										evision 4												 */
	/* ============================================================================================= */
	/* affect global variable to Can Msg 1 send to eVision4*/
	gCsr_tMsg1C1SendToOpus.bogBattery_On_Off =  gDb_tRamEcuInputsC1.eAlternatorChargeOkState == GE_DI_ON;
	/*Moteur J1939*/
	gCsr_tMsg1C1SendToOpus.bogSTOP_On_Off = gDb_tRam48XsOutputsC1.boGasOilLight;//Réserve de gasoil active
	gCsr_tMsg1C1SendToOpus.bogEngine_Faillure_On_Off = gDb_tRamEcuInputsC1.eWaterTemperatureState == GE_DI_ON;
	gCsr_tMsg1C1SendToOpus.bogEngine_Faillure_On_Off = gDb_tRamGeneralNeotecC1.i16WaterTempJ1939 >= 116;//Voir préconisation moteur perkins
	gCsr_tMsg1C1SendToOpus.bogMaintenance_On_Off = gDb_tRamEcuInputsC1.eActiveHelpState == GE_DI_ON;
	gCsr_tMsg1C1SendToOpus.bogOil_On_OFF = gDb_tRamGeneralNeotecC1.u16OilPressureJ1939 == 0;
	gCsr_tMsg1C1SendToOpus.bogDeltaSectorDown = !gDb_tRamLimitWorkEnvelopeC1.boDeltaArmInUpperZone;
	gCsr_tMsg1C1SendToOpus.bogArrowSectorDown = gDb_tRamLimitWorkEnvelopeC1.boArrowArmInLowerZone;
	gCsr_tMsg1C1SendToOpus.bogPendularSectorDown = gDb_tRam48XsInputsC1.boLowSectorPendularSensor;
	gCsr_tMsg1C1SendToOpus.bogDeltaArmInCenter = gDb_tRamEcuInputsC1.eFoldedDeltaArmSensorState == GE_DI_ON || gDb_tRamMvtEndStopC1.boFoldedDeltaArm;
	gCsr_tMsg1C1SendToOpus.bogArrowArmInCenter = gDb_tRamEcuInputsC1.eFoldedBoomArmSensorState == GE_DI_ON || gDb_tRamMvtEndStopC1.boFoldedArrowArm;
	gCsr_tMsg1C1SendToOpus.bogBasketRotationInCenter = gDb_tRamAutoStopC1.boBasketInCentrerPos;
	gCsr_tMsg1C1SendToOpus.bogTelescopeInCenter = gDb_tRamEcuInputsC1.eEntryTelescopeFdcSensorState == GE_DI_ON;

	/* 03.09.2019 pour gerer l'arret tourelle en cas de presence de mat de contact*/
	if(gDb_tRamData4C1RcvFromC0.boPresenceSensorPlate == FALSE) /* Avant gDb_tRamData4C1RcvFromC0.boTestFrance MODIF FR*/
		gCsr_tMsg1C1SendToOpus.bogBasketInclinaisonInCenter = TRUE;
	else
		gCsr_tMsg1C1SendToOpus.bogBasketInclinaisonInCenter = gDb_tRam48XsInputsC1.boHighSectorPlateSensor;

	gCsr_tMsg1C1SendToOpus.bogDeltaArmMoveUpAllow = gDb_tRamLimitMoveC1.boAutorizeUpDeltaArm;
	gCsr_tMsg1C1SendToOpus.bogDeltaArmMoveDownAllow =gDb_tRamLimitMoveC1.boAutorizeDownDeltaArm ;
	gCsr_tMsg1C1SendToOpus.bogArrowArmMoveUpAllow = gDb_tRamLimitMoveC1.boAutorizeUpArrowArm;
	gCsr_tMsg1C1SendToOpus.bogArrowArmMoveDownAllow = gDb_tRamLimitMoveC1.boAutorizeDownArrowArm;
	gCsr_tMsg1C1SendToOpus.bogPendularMoveUpAllow = gDb_tRamLimitMoveC1.boAutorizeUpPendular;
	gCsr_tMsg1C1SendToOpus.bogPendularMoveDownAllow = gDb_tRamLimitMoveC1.boAutorizeDownPendular;
	gCsr_tMsg1C1SendToOpus.bogTelescopeMoveOutAllow =gDb_tRamLimitMoveC1.boAutorizeOutTelescopeArm;
	gCsr_tMsg1C1SendToOpus.bogTelescopeMoveInAllow =gDb_tRamLimitMoveC1.boAutorizeInTelescopeArm;
	gCsr_tMsg1C1SendToOpus.bogTurretCntrClockWiseMoveAllow  = gDb_tRamLimitMoveC1.boAutorizeRotTurretCtClkwise;
	gCsr_tMsg1C1SendToOpus.bogTurretClockWiseMoveAllow = gDb_tRamLimitMoveC1.boAutorizeRotTurretClkwise;
	gCsr_tMsg1C1SendToOpus.bogBasketRotCtClockWiseMoveAllow = gDb_tRamLimitMoveC1.boAutorizeRotBasketCtClkwise;
	gCsr_tMsg1C1SendToOpus.bogBasketRotClockWiseMoveAllow = gDb_tRamLimitMoveC1.boAutorizeRotBasketClkwise;
	gCsr_tMsg1C1SendToOpus.bogBasketInclinaisonMoveUpAllow = gDb_tRamLimitMoveC1.boAutorizeUpInclinaisonBasket;
	gCsr_tMsg1C1SendToOpus.bogBasketIncliMoveDownAllow = gDb_tRamLimitMoveC1.boAutorizeDownInclinaisonBasket;
	gCsr_tMsg1C1SendToOpus.bogOverloadSecurity = !boOverloadActive;
	gCsr_tMsg1C1SendToOpus.bogBasketStepClosed = gDb_tRam48XsInputsC1.boFoldedLadderSensor;
	gCsr_tMsg1C1SendToOpus.bogBasketAccessLocked = gDb_tRam48XsInputsC1.boClosePortillonSensor;
	/*Désactivation de la remonté du défaut système.*/
	if(gDb_tNvParametersC1.boActiveSystemFault == FALSE)
		gCsr_tMsg1C1SendToOpus.bogSystemFault = (gDb_tRamGeneralC1.boActiveFailure == TRUE || gDb_tRamData4C1RcvFromC0.boErrorActiveOnC0 == TRUE);
	else
		gCsr_tMsg1C1SendToOpus.bogSystemFault = FALSE;

	gCsr_tMsg1C1SendToOpus.bogMeasuringMatOption = gDb_tNvOptionsC1.boMeasuringMat;
	gCsr_tMsg1C1SendToOpus.bogSafeManSystem = (gDb_tRam48XsInputsC1.u16SafetyManSystem > 0 && gDb_tRam48XsInputsC1.u16SafetyManSystem< 65535); // provisoire il faudra creer une option
	gCsr_tMsg1C1SendToOpus.bogTurretEncoderFault = gCsr_tFailuresC0SendToC1.boDm_Turret_Sensor_Fault;
	gCsr_tMsg1C1SendToOpus.u8gFuel = u8CastU16(gDb_tRamEcuInputsC1.i16GasGaugeValue);
	gCsr_tMsg1C1SendToOpus.i16gelescopePositionValue = i16CastU16(gDb_tRamTelescopeCanC1.u16LenghtTelescope1);

	/* affect global variable to Can Msg 2 send to eVision4*/
	gCsr_tMsg2C1SendToOpus.u16gBatteryVoltageMv = gDb_tRamGeneralC1.u16EcuVoltage;
	gCsr_tMsg2C1SendToOpus.u16gEngineRPM = u16CastI32(gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939);
	gCsr_tMsg2C1SendToOpus.i16gDeltaArmAngleValue = gDb_tRamEcuInputsC1.i16DeltaArmAngleValue;
	gCsr_tMsg2C1SendToOpus.i16gArrowArmAngleValue = gDb_tRamEcuInputsC1.i16ArrowArmAngleValue;

	/* affect global variable to Can Msg 3 send to eVision4*/
	gCsr_tMsg3C1SendToOpus.i16DebugDeltaArmAngle = gDb_tRamEcuInputsC1.i16DeltaArmAngleValue;
	gCsr_tMsg3C1SendToOpus.i16DebugArrowArmAngle = gDb_tRamEcuInputsC1.i16ArrowArmAngleValue;
	gCsr_tMsg3C1SendToOpus.i16DebugTelescopePosition = i16CastU16(gDb_tRamTelescopeCanC1.u16LenghtTelescope1);
	gCsr_tMsg3C1SendToOpus.i16DebugVehicleSlope = i16CastU16(gDb_tRamEcuC1RcvFromC0.u16SlopeAngle);

	/* affect global variable to Can Msg 4 send to eVision4*/
	gCsr_tMsg4C1SendToOpus.boPin107 = gDb_tRamGeneralNeotecC1.eMotorStateJ1939 == GE_Stopped;
	gCsr_tMsg4C1SendToOpus.boPin131 = gDb_tRamEcuInputsC1.eTurretPostSelectorState == GE_DI_ON;
	gCsr_tMsg4C1SendToOpus.boPin108 = gDb_tRamEcuInputsC1.eRadioPostSelectorState == GE_DI_ON;
	gCsr_tMsg4C1SendToOpus.boPin132 = gDb_tRamEcuInputsC1.eNacellePostSelectorState == GE_DI_ON;
	gCsr_tMsg4C1SendToOpus.boPin109 = gDb_tRamGeneralNeotecC1.u16OilPressureJ1939 == 0;
	gCsr_tMsg4C1SendToOpus.boPin133 = gDb_tRamGeneralNeotecC1.i16WaterTempJ1939 >= 116;/*préconisation moteur perkins*/
	gCsr_tMsg4C1SendToOpus.boPin110 = gDb_tRamEvision7C1.bogSerialNumber; /* Renvoie du code tournant au 4' pouces.*/
	gCsr_tMsg4C1SendToOpus.boPin134 = FALSE; /* Not used*/
	gCsr_tMsg4C1SendToOpus.boPin111 = gDb_tRamEcuInputsC1.eFaultPvgDeltaArmState == GE_DI_ON;
	gCsr_tMsg4C1SendToOpus.boPin135 = gDb_tRamEcuInputsC1.eFaultPvgArrowArmState == GE_DI_ON;
	gCsr_tMsg4C1SendToOpus.boPin112 = gDb_tRamEcuInputsC1.eFaultPvgTelescopeArmState == GE_DI_ON;
	gCsr_tMsg4C1SendToOpus.boPin136 = gDb_tRamEcuInputsC1.eFaultPvgEvProTorState == GE_DI_ON;
	gCsr_tMsg4C1SendToOpus.boPin113 = gDb_tRamEcuInputsC1.eEntryTelescopeFdcSensorState == GE_DI_ON;
	gCsr_tMsg4C1SendToOpus.boPin137 = gDb_tRamEcuInputsC1.eAru1State == GE_DI_ON;
	gCsr_tMsg4C1SendToOpus.boPin114 = FALSE; /* Not used*/
	gCsr_tMsg4C1SendToOpus.boPin138 = gDb_tRamEcuInputsC1.eAru2State == GE_DI_ON;
	gCsr_tMsg4C1SendToOpus.boPin140 = FALSE; /* Not used*/
	gCsr_tMsg4C1SendToOpus.boPin117 = gDb_tRamEcuInputsC1.eFoldedDeltaArmSensorState == GE_DI_ON;
	gCsr_tMsg4C1SendToOpus.boPin141 = gDb_tRamEcuInputsC1.eFoldedBoomArmSensorState == GE_DI_ON;
	gCsr_tMsg4C1SendToOpus.boPin124 = gDb_tRamEcuInputsC1.eActiveHelpState == GE_DI_ON;
	gCsr_tMsg4C1SendToOpus.boPin148 = gDb_tRamEcuInputsC1.eAlternatorChargeOkState == GE_DI_ON;
	gCsr_tMsg4C1SendToOpus.boPin153 = gDig_tSupllyAnaSensors.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg4C1SendToOpus.boPin177 = gDig_tEvSelectorRotTurret.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg4C1SendToOpus.boPin159 = gDig_tEvSyncRotation.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg4C1SendToOpus.boPin183 = gDig_tNoisemaker.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg4C1SendToOpus.boPin154 = gDig_tEvRotTurretClkwise.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg4C1SendToOpus.boPin178 = gDig_tEvRotTurretCtClkwise.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg4C1SendToOpus.boPin157 = gDig_tEvRotBasketCtClkwise.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg4C1SendToOpus.boPin181 = gDig_tEvRotBasketClkwise.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg4C1SendToOpus.boPin160 = gDig_tEvUpPendular.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg4C1SendToOpus.boPin184 = gDig_tEvDownPendular.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg4C1SendToOpus.boPin187 = gDig_tEvUpInclinaisonBasket.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg4C1SendToOpus.boPin163 = gDig_tEvDownInclinaisonBasket.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg4C1SendToOpus.boPin149 = gDig_tBlueFire.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg4C1SendToOpus.boPin173 = gDig_tOrangeFlashingLight.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg4C1SendToOpus.boPin152 = gDig_tSupllyTorSensors.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg4C1SendToOpus.boPin176 = gDig_tOverloadSecurity.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg4C1SendToOpus.boPin155 = FALSE; /* Not used*/
	gCsr_tMsg4C1SendToOpus.boPin179 = gDig_tEvDevMvts.tOut.eValSta == DIG_STA_ON; /*Ev Alimentation mouvements*/
	gCsr_tMsg4C1SendToOpus.boPin158 = FALSE; /* Not used*/
	gCsr_tMsg4C1SendToOpus.boPin182 = gDig_tEvBypass.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg4C1SendToOpus.boPin251 = FALSE; /* Not used*/
	gCsr_tMsg4C1SendToOpus.boPin239 = gDig_tRelayReloadWithGenerator.tOut.eValSta == DIG_STA_ON; /*Contacteur Génératrice*/
	gCsr_tMsg4C1SendToOpus.boPin186 = gDig_tEvCrawlerOnly.tOut.eValSta == DIG_STA_ON;
	/* Message 05*/
	gCsr_tMsg5C1SendToOpus.boPin230Fault = FALSE; /* Sensor GND*/
	gCsr_tMsg5C1SendToOpus.boPin243Fault = FALSE; /* Sensor GND*/
	gCsr_tMsg5C1SendToOpus.boPin244Fault = FALSE; /* Sensor GND*/
	gCsr_tMsg5C1SendToOpus.boPin245Fault = FALSE; /* Sensor GND*/
	gCsr_tMsg5C1SendToOpus.boPin256Fault = FALSE; /* Sensor GND*/
	gCsr_tMsg5C1SendToOpus.boPin257Fault = FALSE; /* Sensor GND*/
	gCsr_tMsg5C1SendToOpus.boPin258Fault = FALSE; /* Sensor GND*/
	gCsr_tMsg5C1SendToOpus.boPin103Fault = u16BloInCurGetErrStaAll(&gInCur_tTransmission1PressureSensor) != 0; /* Transmission1PressureSensor Fault*/
	gCsr_tMsg5C1SendToOpus.boPin127Fault = u16BloInCurGetErrStaAll(&gInCur_tTransmission2PressureSensor) != 0; /* Transmission2PressureSensor Fault*/
	TUint16 TempErrStaAllOpus = 0;
	eBloInCurDblGetErrStaAll(&gInCurDbl_tDeltaArmAngularSensor,&TempErrStaAllOpus);
	gCsr_tMsg5C1SendToOpus.boPin104Fault = TempErrStaAllOpus != 0; /* DeltaArm1AngularSensor Fault*/
	gCsr_tMsg5C1SendToOpus.boPin128Fault = TempErrStaAllOpus != 0; /* DeltaArm2AngularSensor Fault*/
	eBloInCurDblGetErrStaAll(&gInCurDbl_tArrowArmAngularSensor,&TempErrStaAllOpus);
	gCsr_tMsg5C1SendToOpus.boPin105Fault = TempErrStaAllOpus != 0; /* ArrowArm1AngularSensor Fault*/
	gCsr_tMsg5C1SendToOpus.boPin129Fault = TempErrStaAllOpus != 0; /* ArrowArm2AngularSensor Fault*/
	gCsr_tMsg5C1SendToOpus.boPin106Fault = u16BloInResistGetErrStaAll(&gInResist_tGasGauge) != 0; /* GasGauge Fault*/
	gCsr_tMsg5C1SendToOpus.boPin130Fault = u16BloInCurGetErrStaAll(&gInCur_tBypassPressureSensor) != 0; /* BypassPressureSensor Fault*/
	gCsr_tMsg5C1SendToOpus.boPin131Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tTurretPostSelector) != 0; /* TurretPostSelector Fault*/
	gCsr_tMsg5C1SendToOpus.boPin108Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tRadioPostSelector) != 0; /* RadioPostSelector Fault*/
	gCsr_tMsg5C1SendToOpus.boPin132Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tNacellePostSelector) != 0; /* NacellePostSelector Fault*/
	gCsr_tMsg5C1SendToOpus.boPin110Fault = u16BloInCurGetErrStaAll(&gInCur_tOilTankTemperature) != 0;; /* InCur_tOilTankTemperature*/
	gCsr_tMsg5C1SendToOpus.boPin134Fault = FALSE; /* Not used*/
	gCsr_tMsg5C1SendToOpus.boPin111Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tFaultPvgDeltaArm) != 0; /* FaultPvgDeltaArm Fault*/
	gCsr_tMsg5C1SendToOpus.boPin135Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tFaultPvgArrowArm) != 0; /* FaultPvgArrowArm Fault*/
	gCsr_tMsg5C1SendToOpus.boPin112Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tFaultPvgTelescopeArm) != 0; /* FaultPvgTelescopeArm Fault*/
	gCsr_tMsg5C1SendToOpus.boPin136Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tFaultPvgEvProTOR) != 0; /* FaultPvgEvProTOR Fault*/
	gCsr_tMsg5C1SendToOpus.boPin113Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tEntryTelescopeFdcSensor) != 0; /* EntryTelescopeFdcSensor Fault*/
	gCsr_tMsg5C1SendToOpus.boPin137Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tAru1) != 0; /* Aru1 Fault*/
	gCsr_tMsg5C1SendToOpus.boPin114Fault = FALSE; /* Not used*/
	gCsr_tMsg5C1SendToOpus.boPin138Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tAru2) != 0; /* Aru2 Fault*/
	gCsr_tMsg5C1SendToOpus.boPin115Fault = FALSE; /* Not used*/
	gCsr_tMsg5C1SendToOpus.boPin139Fault = FALSE; /* Not used*/
	gCsr_tMsg5C1SendToOpus.boPin116Fault = FALSE; /* Not used*/
	gCsr_tMsg5C1SendToOpus.boPin140Fault = FALSE; /* Not used*/
	gCsr_tMsg5C1SendToOpus.boPin117Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tDeltaArmFoldedSensor) != 0; /* DeltaArmFoldedSensor Fault*/
	gCsr_tMsg5C1SendToOpus.boPin141Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tBoomArmFoldedSensor) != 0; /* BoomArmFoldedSensor Fault*/
	gCsr_tMsg5C1SendToOpus.boPin122Fault = FALSE; /* Not used*/
	gCsr_tMsg5C1SendToOpus.boPin146Fault = FALSE; /* Not used*/
	gCsr_tMsg5C1SendToOpus.boPin147Fault = FALSE; /* Not used*/
	gCsr_tMsg5C1SendToOpus.boPin124Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tActiveHelp) != 0; /* ActiveHelp Fault*/
	gCsr_tMsg5C1SendToOpus.boPin148Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tAlternatorChargeOK) != 0; /* AlternatorChargeOK Fault*/
	gCsr_tMsg5C1SendToOpus.boPin153Fault = gDig_tSupllyAnaSensors.tOut.ePinSta != 0; /* SupllyAnaSensors Fault*/
	gCsr_tMsg5C1SendToOpus.boPin177Fault = gDig_tEvSelectorRotTurret.tOut.ePinSta != 0; /* Not used ? (EV sélection rotation tourelle)*/
	gCsr_tMsg5C1SendToOpus.boPin180Fault = gPro_tEvPropGenerator.tOut.ePinStaHs != 0; /* EvPropGenerator Fault*/
	gCsr_tMsg5C1SendToOpus.boPin159Fault = gDig_tEvSyncRotation.tOut.ePinSta != 0; /* EvSyncRotation Fault*/
	gCsr_tMsg5C1SendToOpus.boPin183Fault = gDig_tNoisemaker.tOut.ePinSta != 0; /* Noisemaker Fault*/
	gCsr_tMsg5C1SendToOpus.boPin186Fault = gDig_tEvCrawlerOnly.tOut.ePinSta !=0; /* EvCrawlerOnly Fault*/
	gCsr_tMsg5C1SendToOpus.boPin162Fault = FALSE; /* Not used*/
	gCsr_tMsg5C1SendToOpus.boPin189Fault = FALSE; /* Not used*/
	gCsr_tMsg5C1SendToOpus.boPin165Fault = FALSE; /* Not used*/
	gCsr_tMsg5C1SendToOpus.boPin192Fault = FALSE; /* Not used*/
	gCsr_tMsg5C1SendToOpus.boPin168Fault = FALSE; /* Not used*/
	gCsr_tMsg5C1SendToOpus.boPin195Fault = FALSE; /* Not used*/
	gCsr_tMsg5C1SendToOpus.boPin171Fault = FALSE; /* Not used*/
	gCsr_tMsg5C1SendToOpus.boPin154Fault = gDig_tEvRotTurretClkwise.tOut.ePinSta != 0; /* EvRotationTurretClockwise Fault*/
	gCsr_tMsg5C1SendToOpus.boPin178Fault = gDig_tEvRotTurretCtClkwise.tOut.ePinSta != 0; /* EvRotationTurretCounterClockwise Fault*/
	gCsr_tMsg5C1SendToOpus.boPin157Fault = gDig_tEvRotBasketCtClkwise.tOut.ePinSta != 0; /* EvRotationBasketCounterClockwise Fault*/
	gCsr_tMsg5C1SendToOpus.boPin181Fault = gDig_tEvRotBasketClkwise.tOut.ePinSta != 0; /* EvRotationBasketClockwise Fault*/
	gCsr_tMsg5C1SendToOpus.boPin160Fault = gDig_tEvUpPendular.tOut.ePinSta != 0; /* EvUpPendular Fault*/
	gCsr_tMsg5C1SendToOpus.boPin184Fault = gDig_tEvDownPendular.tOut.ePinSta != 0; /* EvDownPendular Fault*/
	gCsr_tMsg5C1SendToOpus.boPin187Fault = gDig_tEvUpInclinaisonBasket.tOut.ePinSta != 0; /* EvUpInclinaisonBasket Fault*/

	/* affect global variable to Can Msg 6 send to eVision4*/
	gCsr_tMsg6C1SendToOpus.boPin163Fault = gDig_tEvDownInclinaisonBasket.tOut.ePinSta != 0; /* EvDownInclinaisonBasket Fault*/
	gCsr_tMsg6C1SendToOpus.boPin190Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToOpus.boPin166Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToOpus.boPin193Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToOpus.boPin169Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToOpus.boPin196Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToOpus.boPin172Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToOpus.boPin101Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToOpus.boPin125Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToOpus.boPin150Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToOpus.boPin174Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToOpus.boPin102Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToOpus.boPin126Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToOpus.boPin151Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToOpus.boPin175Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToOpus.boPin149Fault = gDig_tBlueFire.tOut.ePinSta != 0; /* BlueFire Fault*/
	gCsr_tMsg6C1SendToOpus.boPin173Fault = gDig_tOrangeFlashingLight.tOut.ePinSta != 0; /* OrangeFlashingLight Fault*/
	gCsr_tMsg6C1SendToOpus.boPin152Fault = gDig_tSupllyTorSensors.tOut.ePinSta != 0; /* SupllyTorSensors Fault*/
	gCsr_tMsg6C1SendToOpus.boPin176Fault = gDig_tOverloadSecurity.tOut.ePinSta != 0; /* OverloadSecurity Fault*/
	gCsr_tMsg6C1SendToOpus.boPin155Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToOpus.boPin179Fault = gDig_tEvDevMvts.tOut.ePinSta != 0; /* Défaut EV déviation mouvements*/
	gCsr_tMsg6C1SendToOpus.boPin158Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToOpus.boPin182Fault = gDig_tEvBypass.tOut.ePinSta != 0; /* EvBypass Fault*/
	gCsr_tMsg6C1SendToOpus.boPin251Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToOpus.boPin252Fault = gDig_tReturnLowSideEvProGenerator.tOut.ePinSta != 0; /* ReturnLowSideEvProGenerator Fault*/
	gCsr_tMsg6C1SendToOpus.boPin239Fault = gDig_tRelayReloadWithGenerator.tOut.ePinSta != 0; /* Défaut contacteur génératrice*/
	gCsr_tMsg6C1SendToOpus.boPin253Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToOpus.boPin240Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToOpus.boPin254Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToOpus.boPin241Fault = FALSE; /* Not used*/
	gCsr_tMsg6C1SendToOpus.boPin161Fault = gOutVoltPro_tPvgDeltaArm.tOut.ePinState != 0; /* PvgDeltaArm Fault*/
	gCsr_tMsg6C1SendToOpus.boPin185Fault = gOutVoltPro_tPvgArrowArm.tOut.ePinState != 0; /* PvgArrowArm Fault*/
	gCsr_tMsg6C1SendToOpus.boPin188Fault = gOutVoltPro_tPvgTelescopeArm.tOut.ePinState != 0; /* PvgTelescopeArm Fault*/
	gCsr_tMsg6C1SendToOpus.boPin164Fault = gOutVoltPro_tPvgPropEvTOR.tOut.ePinState != 0; /* PvgPropEvTOR Fault*/
	gCsr_tMsg6C1SendToOpus.boPin191Fault = gDig_tSupplyPvgDeltaArm.tOut.ePinSta != 0; /* SupplyPvgDeltaArm Fault*/
	gCsr_tMsg6C1SendToOpus.boPin167Fault = gDig_tSupplyPvgBoomArm.tOut.ePinSta != 0; /* SupplyPvgBoomArm Fault*/
	gCsr_tMsg6C1SendToOpus.boPin194Fault = gDig_tSupplyPvgTelescopeArm.tOut.ePinSta != 0; /* SupplyPvgTelescopeArm Fault*/
	gCsr_tMsg6C1SendToOpus.boPin170Fault = gDig_tSupplyPvgPropEvTOR.tOut.ePinSta != 0; /* SupplyPvgPropEvTOR Fault*/
	gCsr_tMsg6C1SendToOpus.i16gBypassPressureSensorValue = gDb_tRamEcuInputsC1.i16BypassPressureSensorValue;

	/* affect global variable to Can Msg 7 send to eVision4*/
	gCsr_tMsg7C1SendToOpus.u16gPvgDeltaArmVoltage = gDb_tRamEcuOutputsC1.u16PvgDeltaArmVoltage;
	gCsr_tMsg7C1SendToOpus.u16gPvgArrowArmVoltage = gDb_tRamEcuOutputsC1.u16PvgArrowArmVoltage;
	gCsr_tMsg7C1SendToOpus.u16gPvgTelescopeArmVoltage = gDb_tRamEcuOutputsC1.u16PvgTelescopeArmVoltage;
	gCsr_tMsg7C1SendToOpus.u16gPvgEvTorVoltage = gDb_tRamEcuOutputsC1.u16PvgEvTorVoltage;

	/* affect global variable to Can Msg 8   send to eVision4*/
	gCsr_tMsg8C1SendToOpus.u8gTTC510Version_Major = MAJOR;
	gCsr_tMsg8C1SendToOpus.u8gTTC510Version_Minor = MINOR;
	gCsr_tMsg8C1SendToOpus.u8gTTC510Version_Patch = PATCH;
	gCsr_tMsg8C1SendToOpus.u8gTTC510Version_Custom = CUSTOM;

	gCsr_tMsg8C1SendToOpus.u8gTTC48XSVersion_Major = gDb_tRamGeneralC1.u8Major_48XS;
	gCsr_tMsg8C1SendToOpus.u8gTTC48XSVersion_Minor = gDb_tRamGeneralC1.u8Minor_48XS;
	gCsr_tMsg8C1SendToOpus.u8gTTC48XSVersion_Patch = gDb_tRamGeneralC1.u8Patch_48XS;
	gCsr_tMsg8C1SendToOpus.u8gTTC48XSVersion_Custom = gDb_tRamGeneralC1.u8Custom_48XS;

	/*GREEN*/
	gCsr_tMsg9C1SendToOpus.boAutoModeActivate = gDb_tRamGreenEffC1.boAutoModeActivate;
	gCsr_tMsg9C1SendToOpus.boSilenceModeActivate = gDb_tRamGreenEffC1.boSilenceModeActivate;
	gCsr_tMsg9C1SendToOpus.boForcingModeActivate = gDb_tRamGreenEffC1.boForcingModeActivate;
	gCsr_tMsg9C1SendToOpus.boForcingRegenlow = gDb_tRamGreenEffC1.boForcingRegenlow;
	gCsr_tMsg9C1SendToOpus.boForcingRegenHigh = gDb_tRamGreenEffC1.boForcingRegenHigh;
	gCsr_tMsg9C1SendToOpus.boAskReloadWithGenerator = gDb_tRamGreenEffC1.boAskReloadWithGenerator;
	gCsr_tMsg9C1SendToOpus.boReloadWithGeneratorOn = gDb_tRamGreenEffC1.boReloadWithGeneratorOn;
	gCsr_tMsg9C1SendToOpus.boAlarmCptNbrRegenFinish = gDb_tRamGreenEffC1.boAlarmCptNbrRegenFinish;
	gCsr_tMsg9C1SendToOpus.boElectricMotorForbidden = gDb_tRamGreenEffC1.boElectricMotorForbidden;
	gCsr_tMsg9C1SendToOpus.boPictoColdOilTankTemperature = gDb_tRamGreenEffC1.boPictoColdOilTankTemperature; //GREEN A DECLARER DANS PDT
	gCsr_tMsg9C1SendToOpus.boRecoveryReductionRatio = gDb_tRamGreenEffC1.boPictoRecoveryReductionRatio;//GREEN
	gCsr_tMsg9C1SendToOpus.u16RemainingRegenTimeAverage = gDb_tRamGreenEffC1.u16RemainingRegenTimeAverage;
	gCsr_tMsg9C1SendToOpus.u16TotalRegenHours = gDb_tRamGreenEffC1.u16TotalRegenHours;

	/* ============================================================================================= */
	/* 										MOTOR J1939												 */
	/* ============================================================================================= */
	gDb_tRamGeneralNeotecC1.u8OverrideControlModeCmdJ1939 = 0x2D;/* 0x2D = 45 en décimal pour override à 01 et la priority à medium, avec mode PTO*/

	gCsr_tTSC1.u8OverrideControlMode = gDb_tRamGeneralNeotecC1.u8OverrideControlModeCmdJ1939;
	gCsr_tTSC1.u16RequestedEngineSpeed = gDb_tRamGeneralNeotecC1.u16MotorSpeedCmdJ1939;
	gCsr_tTSC1.i8RequestedTorqueLimit = 0xFF;
	gCsr_tTSC1.u8TSC1ControlPurpose = 0xFE; /* FF(pour 10ms) ou FE(pour 20ms) ou FD (pour 50ms)*/
	gCsr_tTSC1.u8RequestedEngineTorque = 0xFF;
	gCsr_tTSC1.u8MessageCounterChecksum = 0xFF;


/*Test Provisoire, normalement inutile*/
//	gDb_tRamGeneralNeotecC1.eStopMotorJ1939 = gDb_tRam48XsInputsC1.boStopMotorButton;
	gCsr_tEBC1.eEngineAuxiliaryShutdownSwitch = gDb_tRamGeneralNeotecC1.eStopMotorJ1939;
}

//-----------------------------------------------------------------------------------------------------
//! @brief Digital output control function
//!
//! @param[in] ptDout 			- digital output block
//! @param[in] boDoutCmd 		- output command
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 06.07.2016 HYDAC/MS
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vSetDigitalOutput(TBloDig* ptDout, TBoolean boDoutCmd, EDigStatus* peDigStatus)
{
	/* local variable*/
	ERetVal		eBlockRetVal;

	/* set output*/
	ptDout->tInp.boCom = boDoutCmd;

	/* call block function*/
	eBlockRetVal = eBloDig(ptDout);

	/* if the function has been executed without error*/
	if (eBlockRetVal == R_OKAY)
	{
		/* get status*/
		*peDigStatus = (EDigStatus) ptDout->tOut.eValSta;

	}

}

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
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vSetProportionalOutput(TBloPro* ptProOut, TUint16 u16Command, EProStatus* peProStatus, TUint16* pu16Current)
{
	/* local variable*/
	ERetVal		eBlockRetVal;

	/*if current is higher than 0*/
	if (u16Command > 0)
	{
		/* set output to ON*/
		ptProOut->tInp.eSta = PROSTA_ON;
	}
	/* else if current is 0*/
	else
	{
		/* set output to OFF*/
		ptProOut->tInp.eSta = PROSTA_OFF;
	}

	/* set current setpoint in mA/10*/
	ptProOut->tInp.u16Ic = u16Command;

	/* call block function*/
	eBlockRetVal = eBloPro(ptProOut);

	/* if the function has been executed without error*/
	if (eBlockRetVal == R_OKAY)
	{
		/* get status*/
		*peProStatus = (EProStatus) ptProOut->tOut.eValSta;
		/* get current*/
		*pu16Current = ptProOut->tOut.u16Ia;
	}
}

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
TVoid vSetProportionalVoltageOutput(TBloOutVoltPro* ptOutVoltPro, TUint16 u16Command, TUint16* pu16Voltage)
{
	/* local variable*/
	ERetVal		eBlockRetVal;

	/* set current setpoint in mV/10*/
	ptOutVoltPro->tInp.u16OutVoltProSetVal = u16Command;

	/* call block function*/
	eBlockRetVal = eBloOutVoltPro(ptOutVoltPro);

	/* if the function has been executed without error*/
	if (eBlockRetVal == R_OKAY)
	{
		/* get voltage*/
		*pu16Voltage = ptOutVoltPro->tOut.u16Ua;
	}
}

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
TVoid vSetProportionalOutputByDigitalCommand(TBloPro* ptProOut, TBoolean boCommand ,TUint16 u16Current,TUint16 *u16Command, EProStatus* peProStatus, TUint16* pu16Current)
{
	/* local variable*/
	ERetVal		eBlockRetVal;
	TUint16		u16Cmd;

	/* if command bool is true*/
	if(boCommand == TRUE)
	{
		/* set command output to ON u16Current*/
		u16Cmd = u16Current;
	}
	else
	{
		/* set command output to 0*/
		u16Cmd = 0;
	}

	/* if current is higher than 0*/
	if (u16Cmd > 0)
	{
		/* set output to ON*/
		ptProOut->tInp.eSta = PROSTA_ON;
	}
	/* else if current is 0*/
	else
	{
		/* set output to OFF*/
		ptProOut->tInp.eSta = PROSTA_OFF;
	}

	/* set current setpoint in mA/10*/
	ptProOut->tInp.u16Ic = u16Cmd;

	/* call block function*/
	eBlockRetVal = eBloPro(ptProOut);

	/* if the function has been executed without error*/
	if (eBlockRetVal == R_OKAY)
	{
		/* get status*/
		*peProStatus = (EProStatus) ptProOut->tOut.eValSta;
		/* get current*/
		*pu16Current = ptProOut->tOut.u16Ia;
		/* get command*/
		*u16Command = u16Cmd;
	}
}
