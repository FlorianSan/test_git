//==================================================================================================
//! @file WriteOutputsFunc.c
//! @brief Write outputs
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 23.07.2018 HYDAC/CK
//! @history: #- CK 23.07.2017 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
#include <WriteOutputsFunc.h>
#include <Datalog.h>

//! @brief set outputs
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
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vSetOutputs(TVoid)
{
	/* set digital output*/
	vSetDigitalOutput(&gDig_tEvDeflectorTransmission,gDb_tRamEcuOutputsC0.boEvDeflectorTransmissionCommand,&gDb_tRamEcuOutputsC0.eEvDeflectorTransmissionValue);
	vSetDigitalOutput(&gDig_tEv2DeflectorTransmission,gDb_tRamEcuOutputsC0.boEvDeflectorTransmissionCommand,&gDb_tRamEcuOutputsC0.eEv2DeflectorTransmissionValue);
	vSetDigitalOutput(&gDig_tEvUpMeasuringMast,gDb_tRamEcuOutputsC0.boEvUpMeasuringMastCommand,&gDb_tRamEcuOutputsC0.eEvUpMeasuringMastValue);
	vSetDigitalOutput(&gDig_tEvDownMeasuringMast,gDb_tRamEcuOutputsC0.boEvDownMeasuringMastCommand,&gDb_tRamEcuOutputsC0.eEvDownMeasuringMastValue);
	vSetDigitalOutput(&gDig_tEvServiceBrakeTrack,gDb_tRamEcuOutputsC0.boEvServiceBrakeTrackCommand,&gDb_tRamEcuOutputsC0.eEvServiceBrakeTrackValue);
	vSetDigitalOutput(&gDig_tEvPowerReduction,gDb_tRamEcuOutputsC0.boEvPowerReductionCommand,&gDb_tRamEcuOutputsC0.eEvPowerReductionValue);
	vSetDigitalOutput(&gDig_tSupplyRadioReceiver,gDb_tRamEcuOutputsC0.boSupplyRadioReceiverCommand,&gDb_tRamEcuOutputsC0.eSupplyRadioReceiverValue);
	vSetDigitalOutput(&gDig_tBuzzerLynxMovingMachine,gDb_tRamEcuOutputsC0.boBuzzerLynxMovingMachineCommand,&gDb_tRamEcuOutputsC0.eBuzzerLynxMovingMachineValue);
	vSetDigitalOutput(&gDig_tWhiteLightAVG,gDb_tRamEcuOutputsC0.boWhiteLightAVGCommand,&gDb_tRamEcuOutputsC0.eWhiteLightAVGValue);
	vSetDigitalOutput(&gDig_tWhiteLightAVD,gDb_tRamEcuOutputsC0.boWhiteLightAVDCommand,&gDb_tRamEcuOutputsC0.eWhiteLightAVDValue);
	vSetDigitalOutput(&gDig_tRedLightAVG,gDb_tRamEcuOutputsC0.boRedLightAVGCommand,&gDb_tRamEcuOutputsC0.eRedLightAVGValue);
	vSetDigitalOutput(&gDig_tRedLightAVD,gDb_tRamEcuOutputsC0.boRedLightAVDCommand,&gDb_tRamEcuOutputsC0.eRedLightAVDValue);
	vSetDigitalOutput(&gDig_tWhiteLightARG,gDb_tRamEcuOutputsC0.boWhiteLightARGCommand,&gDb_tRamEcuOutputsC0.eWhiteLightARGValue);
	vSetDigitalOutput(&gDig_tWhiteLightARD,gDb_tRamEcuOutputsC0.boWhiteLightARDCommand,&gDb_tRamEcuOutputsC0.eWhiteLightARDValue);
	vSetDigitalOutput(&gDig_tRedLightARG,gDb_tRamEcuOutputsC0.boRedLightARGCommand,&gDb_tRamEcuOutputsC0.eRedLightARGValue);
	vSetDigitalOutput(&gDig_tRedLightARD,gDb_tRamEcuOutputsC0.boRedLightARDCommand,&gDb_tRamEcuOutputsC0.eRedLightARDValue);
	vSetDigitalOutput(&gDig_tSupplyPvgLeftTrack,gDb_tRamEcuOutputsC0.boSupllyPvgLeftTrackCommand,&gDb_tRamEcuOutputsC0.eSupllyPvgLeftTrackValue);
	vSetDigitalOutput(&gDig_tSupplyPvgRightTrack,gDb_tRamEcuOutputsC0.boSupllyPvgRightTrackCommand,&gDb_tRamEcuOutputsC0.eSupllyPvgRightTrackValue);
	vSetDigitalOutput(&gDig_tWhiteTrailerLights,gDb_tRamEcuOutputsC0.boWhiteLightsTrailerCommand,&gDb_tRamEcuOutputsC0.eWhiteLightsTrailerValue);
	vSetDigitalOutput(&gDig_tRedTrailerLights,gDb_tRamEcuOutputsC0.boRedLightsTrailerCommand,&gDb_tRamEcuOutputsC0.eRedLightsTrailerValue);
	vSetDigitalOutput(&gDig_tSupplyAnaSensors,gDb_tRamEcuOutputsC0.boSupplyAnaSensorsCommand,&gDb_tRamEcuOutputsC0.eSupplyAnaSensorsValue);
	vSetDigitalOutput(&gDig_tReturnLowSideEvForwardPump,gDb_tRamEcuOutputsC0.boReturnLowSideEvForwardPumpCmd,&gDb_tRamEcuOutputsC0.eReturnLowSideEvForwardPumpState);
	vSetDigitalOutput(&gDig_tReturnLowSideEvBackwardPump,gDb_tRamEcuOutputsC0.boReturnLowSideEvBackwardPumpCmd,&gDb_tRamEcuOutputsC0.eReturnLowSideEvBackwardPumpState);
	vSetDigitalOutput(&gDig_tKlaxonNeotec,gDb_tRamEcuOutputsC0.boKlaxonNeotecCmdBool,&gDb_tRamEcuOutputsC0.eKlaxonNeotecState);
	vSetDigitalOutput(&gDig_tEvUnBlockOscillationAxle,gDb_tRamEcuOutputsC0.boEvUnBlockOscillationAxleCmdBool,&gDb_tRamEcuOutputsC0.eEvUnBlockOscillationAxleState);
	vSetDigitalOutput(&gDig_tEvParkBrakeAxleOscillant,gDb_tRamEcuOutputsC0.boEvParkBrakeAxleOscillantCmdBool,&gDb_tRamEcuOutputsC0.eEvParkBrakeAxleOscillantState);
	vSetDigitalOutput(&gDig_tEvParkBrakeAxleFixe,gDb_tRamEcuOutputsC0.boEvParkBrakeAxleFixeCmdBool,&gDb_tRamEcuOutputsC0.eEvParkBrakeAxleFixeState);
	vSetDigitalOutput(&gDig_tEvServiceBrakeAxleOscillant,gDb_tRamEcuOutputsC0.boEvServiceBrakeAxleOsciCmdBool,&gDb_tRamEcuOutputsC0.eEvServiceBrakeAxleOscillantState);
	/*Double freins*/
 	vSetDigitalOutput(&gDig_tEv2ndParkBrakeAxleFixe,gDb_tRamEcuOutputsC0.boEv2ndParkBrakeAxleFixe,&gDb_tRamEcuOutputsC0.eEv2ndParkBrakeAxleFixeState);
 	vSetDigitalOutput(&gDig_tEv2ndParkBrakeAxleOsci,gDb_tRamEcuOutputsC0.boEv2ndParkBrakeAxleOsci,&gDb_tRamEcuOutputsC0.eEv2ndParkBrakeAxleOsciState);
 	vSetDigitalOutput(&gDig_tEvServiceBrakeAxleFixe,gDb_tRamEcuOutputsC0.boEvServiceBrakeAxleFixeCmdBool,&gDb_tRamEcuOutputsC0.eEvServiceBrakeAxleFixeState);
 	vSetDigitalOutput(&gDig_tEvUpAxleOscillant,gDb_tRamEcuOutputsC0.boEvUpAxleOscillantCommandBool,&gDb_tRamEcuOutputsC0.eEvUpAxleOscillantState);
	vSetDigitalOutput(&gDig_tEvUpAxleFixe,gDb_tRamEcuOutputsC0.boEvUpAxleFixeCommandBool,&gDb_tRamEcuOutputsC0.eEvUpAxleFixeState);
	vSetDigitalOutput(&gDig_tEvDownAxleOscillant,gDb_tRamEcuOutputsC0.boEvDownAxleOscillantCommandBool,&gDb_tRamEcuOutputsC0.eEvDownAxleOscillantState);
	vSetDigitalOutput(&gDig_tEvDownAxleFixe,gDb_tRamEcuOutputsC0.boEvDownAxleFixeCommandBool,&gDb_tRamEcuOutputsC0.eEvDownAxleFixeState);
	vSetDigitalOutput(&gDig_tPvgLeftTrackLowside,gDb_tRamEcuOutputsC0.boPvgLeftTrackLowsideCommand,&gDb_tRamEcuOutputsC0.ePvgLeftTrackLowsideValue);
	vSetDigitalOutput(&gDig_tPvgRightTrackLowside,gDb_tRamEcuOutputsC0.boPvgRightTrackLowsideCommand,&gDb_tRamEcuOutputsC0.ePvgRightTrackLowsideValue);
	vSetDigitalOutput(&gDig_tNeonLights,gDb_tRamEcuOutputsC0.boNeonLightsCmd,&gDb_tRamEcuOutputsC0.eNeonLightsValue);
	vSetDigitalOutput(&gDig_tCoolingRelay,gDb_tRamEcuOutputsC0.boCoolingRelayCommand,&gDb_tRamEcuOutputsC0.eCoolingRelayState);
	//GREEN
	vSetDigitalOutput(&gDig_tRelayCutOffVariatorElectric,gDb_tRamEcuOutputsC0.boRelayCutOffVariatorElectricCmd,&gDb_tRamEcuOutputsC0.eRelayCutOffVariatorElectricState);
	vSetDigitalOutput(&gDig_tEvDevRailElectricMode,gDb_tRamEcuOutputsC0.boEvDevRailElectricModeCmd,&gDb_tRamEcuOutputsC0.eEvDevRailElectricModeState);
	vSetDigitalOutput(&gDig_tSupplyPvgTransRailElectric,gDb_tRamEcuOutputsC0.boSupllyPvgTransRailElectricCmd,&gDb_tRamEcuOutputsC0.eSupllyPvgTransRailElectricState);
	vSetDigitalOutput(&gDig_tRelayEnableBattery,gDb_tRamEcuOutputsC0.boRelayEnableBatteryCmd,&gDb_tRamEcuOutputsC0.eRelayEnableBatteryState);

	/* set proportional current output*/
	vSetProportionalOutput(&gPro_tEvForwardPump,gDb_tRamEcuOutputsC0.u16ForwardPumpCommand,&gDb_tRamEcuOutputsC0.eForwardPumpState,&gDb_tRamEcuOutputsC0.u16ForwardPumpCurrent);
	vSetProportionalOutput(&gPro_tEvBackwardPump,gDb_tRamEcuOutputsC0.u16BackwardPumpCommand,&gDb_tRamEcuOutputsC0.eBackwardPumpState,&gDb_tRamEcuOutputsC0.u16BackwardPumpCurrent);

	/* set proportional voltage output*/
	vSetProportionalVoltageOutput(&gOutVoltPro_tPvgLeftTrack,gDb_tRamEcuOutputsC0.u16PvgLeftTrackCommand,&gDb_tRamEcuOutputsC0.u16PvgLeftTrackVoltage);
	vSetProportionalVoltageOutput(&gOutVoltPro_tPvgRightTrack,gDb_tRamEcuOutputsC0.u16PvgRightTrackCommand,&gDb_tRamEcuOutputsC0.u16PvgRightTrackVoltage);
	vSetProportionalVoltageOutput(&gOutVoltPro_tPvgTransRailElectric,gDb_tRamEcuOutputsC0.u16PvgTransRailElectricCmd,&gDb_tRamEcuOutputsC0.u16PvgTransRailElectricVoltage);

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
//! @change  10.04.2019 NEOTEC stop rotation frame if hook down and Mode Authorized work
//! @change  10.05.2019 NEOTEC change gCsr_tMsg1C0SendToEvision7.bogTrainModeAllow
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vWriteCanOutputs(TVoid)
{
	/*NEOTEC VERSION*/
	/*Versioning, pour que ce soit apparent sur le fichier paramètres (provisoire)*/
	const TUint8 MAJOR = gDb_tNvParametersC0.u8VersionMajor = 20;		//3; //3  //20
	const TUint8 MINOR = gDb_tNvParametersC0.u8VersionMinior = 1;		//2; //3  //1
	const TUint8 PATCH = gDb_tNvParametersC0.u8VersionPatch = 1; 		//0; //0  //1
	const TUint8 CUSTOM = gDb_tNvParametersC0.u8VersionCustom = 3;	    //5; //6  //2


    /* ============================================================================================= */
  	/* 							Data send to C1														 */
  	/* ============================================================================================= */
	gCsr_tDataSendToC1.boRestrictedModeAruRadio = (boBloErrGetErrStaBit(&gErr_tSpecificErrorC0, DM_ARU_ACTIVE_CO) == TRUE);
	gCsr_tDataSendToC1.boTranslationIsSolicited = gDb_tRamGeneralC0.boTranslationMovementIsSolicited;
    gCsr_tDataSendToC1.bi2SelectedControlPost = (TBit2)gDb_tRamSelectControlPost.eSelectedControlPost;

    gCsr_tDataSendToC1.boAxleMovementIsSolicited = gDb_tRamEcuOutputsC0.boEvUpAxleOscillantCommandBool || gDb_tRamEcuOutputsC0.boEvDownAxleOscillantCommandBool
    												 || gDb_tRamEcuOutputsC0.boEvUpAxleFixeCommandBool || gDb_tRamEcuOutputsC0.boEvDownAxleFixeCommandBool;

    gCsr_tDataSendToC1.boDownAxleFixeSensor = (gDb_tRamEcuInputsC0.eDownAxleFixeState == GE_DI_ON);
    gCsr_tDataSendToC1.boDownAxleOscillantSensor = (gDb_tRamEcuInputsC0.eDownAxleOscillantState == GE_DI_ON);
    gCsr_tDataSendToC1.u16SlopeAngle = gDb_tRamCanSensorC0.u16SelectedSlopeAngle;
    gCsr_tDataSendToC1.boReduceSpeedRotTurretClockwise = gDb_tRamRailWorkSafetyC0.boReduceSpeedRotTurretClockwise;
    gCsr_tDataSendToC1.boReduceSpeedRotTurretCtClock = gDb_tRamRailWorkSafetyC0.boReduceSpeedRotTurretCounterClock;
    gCsr_tDataSendToC1.boReduceSpeedArrowArmDown = gDb_tRamRailWorkSafetyC0.boReduceSpeedArrowArmDown;
    gCsr_tDataSendToC1.boStopRotTurretClockwise = gDb_tRamRailWorkSafetyC0.boStopRotTurretClockwise;
    gCsr_tDataSendToC1.boStopRotTurretCounterClockwise = gDb_tRamRailWorkSafetyC0.boStopRotTurretCounterClockwise;
    gCsr_tDataSendToC1.boStopRotBasketClockwise = gDb_tRamRailWorkSafetyC0.boStopRotBasketClockwise;
    gCsr_tDataSendToC1.boStopRotBasketCounterClockwise = gDb_tRamRailWorkSafetyC0.boStopRotBasketCounterClockwise;
    gCsr_tDataSendToC1.boStopArrowArmDown = gDb_tRamRailWorkSafetyC0.boStopArrowArmDown;
    gCsr_tDataSendToC1.boStopTelescopeOut = gDb_tRamRailWorkSafetyC0.boStopTelescopeOut;
    gCsr_tDataSendToC1.i16EncodeurTurret1Angle = gDb_tRamCanSensorC0.i16EncodeurTurret1Angle;
    gCsr_tDataSendToC1.boNacelleBasketLeftSideSensor1 = gDb_tRam48XsInputsC0.boNacelleBasketLeftSideSensor1;
    gCsr_tDataSendToC1.boNacelleBasketLeftSideSensor2 = gDb_tRam48XsInputsC0.boNacelleBasketLeftSideSensor2;
    gCsr_tDataSendToC1.boNacelleBasketRightSideSensor1 = gDb_tRam48XsInputsC0.boNacelleBasketRightSideSensor1;
	gCsr_tDataSendToC1.boNacelleBasketRightSideSensor2 = gDb_tRam48XsInputsC0.boNacelleBasketRightSideSensor2;
    gCsr_tData2SendToC1.boRedLightARDBasketCmd= gDb_tRamGeneralC0.boRedLightARDBasketCmd;
    gCsr_tData2SendToC1.boRedLightARGBasketCmd= gDb_tRamGeneralC0.boRedLightARGBasketCmd;
    gCsr_tData2SendToC1.boWhiteLightARDBasketCmd = gDb_tRamGeneralC0.boWhiteLightARDBasketCmd;
    gCsr_tData2SendToC1.boWhiteLightARGBasketCmd = gDb_tRamGeneralC0.boWhiteLightARGBasketCmd;
    gCsr_tData2SendToC1.u32EncodeurMastMeasureRaw = gDb_tRamCanSensorC0.u32EncodeurMastMeasureRaw;
    /*Double freins*/
    gCsr_tData2SendToC1.boSecondParkBrakeActive = gDb_tNvOptionsC0.boSecondParkBrakeActive; /*Envoie de l'option double freins au C1*/
    gCsr_tData2SendToC1.boStopMovementByBrakeTest = gDb_tRamBrakeTest.boStopMovementByBrakeTest;
    gCsr_tData2SendToC1.boStopMovementByBreakInBrake = gDb_tRamBreakInBrakeC0.boStopMovementByBreakInBrake;
    gCsr_tData2SendToC1.boCenteredTurretState = (gDb_tRamEcuInputsC0.eCenteredTurretState == GE_DI_ON);
    gCsr_tData2SendToC1.boAuthorizeWork = boModeWorkAuthorized;
    gCsr_tData2SendToC1.boUpFixeAxlePos = gDb_tRamEcuInputsC0.eUpAxleFixeState == GE_DI_ON;
    gCsr_tData2SendToC1.boUpOsciAxlePos = gDb_tRamEcuInputsC0.eUpAxleOscillantState == GE_DI_ON;
    gCsr_tData2SendToC1.eRailWorkMode = gDb_tRamRailWorkSafetyC0.eRailWorkMode;

    /* check max value beetween two speed sensor*/
	if(gDb_tRamEcuInputsC0.i32OscillantAxleFrequency > gDb_tRamEcuInputsC0.i32FixeAxleFrequency)
		gCsr_tData3SendToC1.i32SpeedVehicleKmhx100 = gDb_tRamEcuInputsC0.i32OscillantAxleFrequency;
	else
		gCsr_tData3SendToC1.i32SpeedVehicleKmhx100 = gDb_tRamEcuInputsC0.i32FixeAxleFrequency;

    gCsr_tData3SendToC1.u16EvForwardCommand = gDb_tRamEcuOutputsC0.u16ForwardPumpCommand;
    gCsr_tData3SendToC1.u16EvBackwardCommand = gDb_tRamEcuOutputsC0.u16BackwardPumpCommand;

    gCsr_tFailuresC0SendToC1.boDm_Swi_Dbl_NcNo_Inc_FrameRot = boBloSwiDblNoNcGetErrStaBit(&gSwiDblNoNc_tFrameRotationSensor1,DM_SWI_DBL_NONC_INCONSISTENT);
    gCsr_tFailuresC0SendToC1.boDm_Turret_Sensor_Fault =  boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_5, DM_TURRET_SENSOR_FAULT);
    gCsr_tFailuresC0SendToC1.boEvParkBrakeAxleOscillantFault = boBloDigGetErrStaBit(&gDig_tEvParkBrakeAxleOscillant,DM_DIG_5XX_OL)
																	|| boBloDigGetErrStaBit(&gDig_tEvParkBrakeAxleOscillant,DM_DIG_5XX_SP)
																	|| boBloDigGetErrStaBit(&gDig_tEvParkBrakeAxleOscillant,DM_DIG_5XX_SG)
																	|| boBloDigGetErrStaBit(&gDig_tEvParkBrakeAxleOscillant,DM_DIG_5XX_INT);

	gCsr_tFailuresC0SendToC1.boEvParkBrakeAxleFixeFault = boBloDigGetErrStaBit(&gDig_tEvParkBrakeAxleFixe,DM_DIG_5XX_OL)
																	|| boBloDigGetErrStaBit(&gDig_tEvParkBrakeAxleFixe,DM_DIG_5XX_SP)
																	|| boBloDigGetErrStaBit(&gDig_tEvParkBrakeAxleFixe,DM_DIG_5XX_SG)
																	|| boBloDigGetErrStaBit(&gDig_tEvParkBrakeAxleFixe,DM_DIG_5XX_INT);

	gCsr_tFailuresC0SendToC1.boEvServiceBrakeAxleOsciFault = boBloDigGetErrStaBit(&gDig_tEvServiceBrakeAxleOscillant,DM_DIG_5XX_OL)
																	|| boBloDigGetErrStaBit(&gDig_tEvServiceBrakeAxleOscillant,DM_DIG_5XX_SP)
																	|| boBloDigGetErrStaBit(&gDig_tEvServiceBrakeAxleOscillant,DM_DIG_5XX_SG)
																	|| boBloDigGetErrStaBit(&gDig_tEvServiceBrakeAxleOscillant,DM_DIG_5XX_INT);

	gCsr_tFailuresC0SendToC1.boEvServiceBrakeAxleFixeFault = boBloDigGetErrStaBit(&gDig_tEvServiceBrakeAxleFixe,DM_DIG_5XX_OL)
																	|| boBloDigGetErrStaBit(&gDig_tEvServiceBrakeAxleFixe,DM_DIG_5XX_SP)
																	|| boBloDigGetErrStaBit(&gDig_tEvServiceBrakeAxleFixe,DM_DIG_5XX_SG)
																	|| boBloDigGetErrStaBit(&gDig_tEvServiceBrakeAxleFixe,DM_DIG_5XX_INT);

	gCsr_tFailuresC0SendToC1.boEvServiceBrakeTrackFault = boBloDigGetErrStaBit(&gDig_tEvServiceBrakeTrack,DM_DIG_5XX_OL)
																	|| boBloDigGetErrStaBit(&gDig_tEvServiceBrakeTrack,DM_DIG_5XX_SP)
																	|| boBloDigGetErrStaBit(&gDig_tEvServiceBrakeTrack,DM_DIG_5XX_SG)
																	|| boBloDigGetErrStaBit(&gDig_tEvServiceBrakeTrack,DM_DIG_5XX_INT);
	/*Double freins*/
	gCsr_tFailuresC0SendToC1.boEv2ndParkBrakeAxleOsciFault = boBloDigGetErrStaBit(&gDig_tEvParkBrakeAxleOscillant,DM_DIG_5XX_OL)
																	|| boBloDigGetErrStaBit(&gDig_tEvParkBrakeAxleOscillant,DM_DIG_5XX_SP)/*Variables provisoire*/
																	|| boBloDigGetErrStaBit(&gDig_tEvParkBrakeAxleOscillant,DM_DIG_5XX_SG)
																	|| boBloDigGetErrStaBit(&gDig_tEvParkBrakeAxleOscillant,DM_DIG_5XX_INT);
	/*Double freins*/
	gCsr_tFailuresC0SendToC1.boEv2ndParkBrakeAxleFixeFault = boBloDigGetErrStaBit(&gDig_tEvParkBrakeAxleFixe,DM_DIG_5XX_OL)
																	|| boBloDigGetErrStaBit(&gDig_tEvParkBrakeAxleFixe,DM_DIG_5XX_SP)
																	|| boBloDigGetErrStaBit(&gDig_tEvParkBrakeAxleFixe,DM_DIG_5XX_SG)
																	|| boBloDigGetErrStaBit(&gDig_tEvParkBrakeAxleFixe,DM_DIG_5XX_INT);

   	gCsr_tData4C0SendToC1.boTurretPostorRadoPostOn = (gDb_tRamEcuC0RcvFromC1.eC1RadioPostSelector == TRUE || gDb_tRamEcuC0RcvFromC1.eC1TurretPostSelector == GE_DI_ON);
  	gCsr_tData4C0SendToC1.boRadioPostSelectorOn = gDb_tRamEcuC0RcvFromC1.eC1RadioPostSelector == TRUE;
    gCsr_tData4C0SendToC1.boSlopeHighWithWorkOnCrawler = (gDb_tRamSelectControlPost.boSlopeIsLow == FALSE && gDb_tRamEcuC0RcvFromC1.eC1RadioPostSelector != GE_DI_ON && (gDb_tRamEcuInputsC0.eDownAxleFixeState != GE_DI_ON ||  gDb_tRamEcuInputsC0.eDownAxleOscillantState != GE_DI_ON));
	gCsr_tData4C0SendToC1.boErrorActiveOnC0 = (gDb_tRamGeneralC0.boActiveFailure == TRUE); /* Erreur Active sur C0 pour affichage Sys sur Ecran 7" et 4"*/
	gCsr_tData4C0SendToC1.boRailWorkMultiLaneMode = (gDb_tRamRailWorkSafetyC0.eRailWorkMode == GE_MULTILANE_MODE);
	gCsr_tData4C0SendToC1.boPresenceSensorPlate = gDb_tNvOptionsC0.boPresenceSensorPlate; /* AVANT gDb_tRamRailWorkSafetyC0.boTestFranceConfig MODI FR*/
	/*Feu EN15746*/
	gCsr_tData4C0SendToC1.boWhiteLightAV15746Command = gDb_tRamGeneralC0.boWhiteLightAv15746Command;
	gCsr_tData4C0SendToC1.boWhiteLightAR15746Command = gDb_tRamGeneralC0.boWhiteLightAr15746Command;
	gCsr_tData4C0SendToC1.u8RecoveryReductionRatio = gDb_tRamFlashBatteryC0.u8Batt_RecoveryReductionRatio;//GREEN MODIF

	/*Trame 5*/
	gCsr_tData5C0SendToC1.boAutorisationHighSpeedKeyState = gDb_tRamEcuInputsC0.eAutorisationHighSpeedKeyState;
	gCsr_tData5C0SendToC1.boTransRailElectricRampOngoing = gDb_tRamGreenEffC0.boTransRailElectricRampOngoing;
	gCsr_tData5C0SendToC1.boSendAuthorizeReloadBattery = gDb_tRamDMC_C0.boDC_RegenEnableByte6Bit6;
	gCsr_tData5C0SendToC1.boPreventLimitSpeedExceeding = gDb_tRamSpeedMaxRail.boPreventLimitSpeedExceeding;
	gCsr_tData5C0SendToC1.i16RpmPvgTransRail = gDb_tRamGreenEffC0.i16RpmPvgTransRail;
	gCsr_tData5C0SendToC1.u8Batt_Soc = gDb_tRamFlashBatteryC0.u8Batt_Soc;
	gCsr_tData5C0SendToC1.i16Ibatt_ist =gDb_tRamFlashBatteryC0.i16Ibatt_ist;

	//NEOTEC IG STRUKTON DEBUT
	gCsr_tData5C0SendToC1.boAddPerformanceFunc =  gDb_tNvOptionsC0.boAddPerformanceFunc;
	gCsr_tData5C0SendToC1.boSlopeCaseHigher6Deg = gDb_tRamSpeedMaxRail.boSlopeCaseHigher6Deg;
	gCsr_tData5C0SendToC1.boSlopeCaseLess2Deg = gDb_tRamSpeedMaxRail.boSlopeCaseLess2Deg;
	gCsr_tData5C0SendToC1.boSlopeCaseLess4Deg = gDb_tRamSpeedMaxRail.boSlopeCaseLess4Deg;
	gCsr_tData5C0SendToC1.boSlopeCaseLess6Deg = gDb_tRamSpeedMaxRail.boSlopeCaseLess6Deg;
	gCsr_tData5C0SendToC1.boTurretInSpeedZone2Deg = FALSE;
	gCsr_tData5C0SendToC1.boTurretInSpeedZone2DegForBasket = FALSE;
	gCsr_tData5C0SendToC1.boTurretInSpeedZone4Deg = FALSE;
	gCsr_tData5C0SendToC1.u8SelectedControlPost =  gDb_tRamSelectControlPost.eSelectedControlPost;
	gCsr_tData5C0SendToC1.boPreventLimitSpeedExceeding = gDb_tRamSpeedMaxRail.boPreventLimitSpeedExceeding;
	//SNCF
	gCsr_tData5C0SendToC1.boUpMastSensorNC = (gDb_tRamEcuInputsC0.eUpMastSensorNCState == GE_DI_OFF);
	gCsr_tData5C0SendToC1.boValveInDownPositionSensor = (gDb_tRamEcuInputsC0.eValveInDownPositionSensorState == GE_DI_ON);
	gCsr_tData5C0SendToC1.boMeasuringMastSensorFolded = (gDb_tRamEcuInputsC0.eMeasuringMastSensorFoldedState == GE_DI_OFF);

	//NEOTEC IG STRUKTON FIN

    /* ============================================================================================= */
  	/* 							Radio command send to C1											 */
  	/* ============================================================================================= */
	gCsr_tSendToC1RadioCmd.boRotFrameClkwiseButton = (gDb_tRamEcuInputRadioControl.boRotationFrameClkwise && gDb_tRamEcuInputsC0.eRailHookSensorState != GE_DI_ON);/*hook up*/
	gCsr_tSendToC1RadioCmd.boRotFrameCtClkwiseButton = (gDb_tRamEcuInputRadioControl.boRotationFrameCtClkwise && gDb_tRamEcuInputsC0.eRailHookSensorState != GE_DI_ON);/*hook up*/
	gCsr_tSendToC1RadioCmd.boUpPendularOrRotTurretCtClock = gDb_tRamEcuInputRadioControl.boUpPendularOrRotCtClkTurret;
	gCsr_tSendToC1RadioCmd.boDownPendularOrRotTurretClock = gDb_tRamEcuInputRadioControl.boDownPendularOrRotClkTurret;
	gCsr_tSendToC1RadioCmd.boSelectorPendular = gDb_tRamEcuInputRadioControl.boSelectorPendular;
	gCsr_tSendToC1RadioCmd.boSelectorRotTurret = gDb_tRamEcuInputRadioControl.boSelectorRotTurret;
	gCsr_tSendToC1RadioCmd.boUpAxleOscillant = gDb_tRamEcuInputRadioControl.boUpAxleAvOscillant;
	gCsr_tSendToC1RadioCmd.boDownAxleOscillant = gDb_tRamEcuInputRadioControl.boDownAxleAvOscillant;
	gCsr_tSendToC1RadioCmd.boUpAxleFixe = gDb_tRamEcuInputRadioControl.boUpAxleArFixe;
	gCsr_tSendToC1RadioCmd.boDownAxleFixe = gDb_tRamEcuInputRadioControl.boDownAxleArFixe;
	gCsr_tSendToC1RadioCmd.boForcingAdvanceTrack = gDb_tRamEcuInputRadioControl.boForcingAdvanceTrack;

    /* ============================================================================================= */
  	/* 							eVision 7															 */
  	/* ============================================================================================= */
	/* affect global variable to Can Msg 1 send to eVision7*/
	gCsr_tMsg1C0SendToEvision7.bogBreak_Parking_On_Off = (gDb_tRamEcuOutputsC0.eEvParkBrakeAxleFixeState == GE_DIG_ON
														|| gDb_tRamEcuOutputsC0.eEvParkBrakeAxleOscillantState == GE_DIG_ON);

	gCsr_tMsg1C0SendToEvision7.bogMovement_Allow_Nacelle = gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_NACELLE;
	gCsr_tMsg1C0SendToEvision7.bogTurretSectorInCenter = gDb_tRamSpeedMaxRail.boTurretInLowSpeedZone;
	gCsr_tMsg1C0SendToEvision7.bogTurretInCenter = gDb_tRamEcuInputsC0.eCenteredTurretState == GE_DI_ON;
	gCsr_tMsg1C0SendToEvision7.bogIncoherenceLateralStopAndKey = gDb_tRamRailWorkSafetyC0.boWrongAbutments;
	gCsr_tMsg1C0SendToEvision7.bogWorkMode = boModeConfiguration;//NEOTEC V3 IG A VOIR Anciennement boModeWorkAuthorized
	gCsr_tMsg1C0SendToEvision7.bogDownhill150mm = (gDb_tRamSpeedMaxRail.boSlopeLowerLowSpeedTresh == FALSE && gDb_tRamGeneralC0.eRailSpeedMode == GE_NO_SPEED_MAX_RAIL_MODE);
	gCsr_tMsg1C0SendToEvision7.bogTrainModeAllow = gDb_tRamSpeedMaxRail.boKinematicTrainAllow;/* Affichage Flèche verte position cinematique (bras-essieux-chenillard)*/
/*Double freins*/
	gCsr_tMsg1C0SendToEvision7.bogBrakeTestService = gDb_tRamBrakeTest.boNeedTestBrake || gDb_tRamBrakeTest.boNeedTest2ndParkBrake;
	gCsr_tMsg1C0SendToEvision7.bogBrakePressureFault = boPressureBrakeFault || boBloErrGetErrStaBit(&gErr_tSpecificErrorC0,DM_SERVICE_BRAKE_PRESSURE_FAULT);
	gCsr_tMsg1C0SendToEvision7.bogActivateMeasuringMast = gDb_tRamEcuOutputsC0.boEvUpMeasuringMastCommand || gDb_tRamEcuOutputsC0.boEvDownMeasuringMastCommand;
	gCsr_tMsg1C0SendToEvision7.bogAutoMovementDirectionLight = gDb_tRamEcuOutputsC0.boWhiteLightARGCommand  || gDb_tRamEcuOutputsC0.boWhiteLightARDCommand || gDb_tRamEcuOutputsC0.boRedLightAVGCommand || gDb_tRamEcuOutputsC0.boRedLightAVDCommand || gDb_tRamEcuOutputsC0.boRedLightAVGCommand || gDb_tRamEcuOutputsC0.boRedLightAVDCommand || gDb_tRamEcuOutputsC0.boRedLightARGCommand || gDb_tRamEcuOutputsC0.boRedLightARDCommand;
	gCsr_tMsg1C0SendToEvision7.bogBackRailwayAxleLowPosition = gDb_tRamEcuInputsC0.eDownAxleFixeState == GE_DI_ON;
	gCsr_tMsg1C0SendToEvision7.bogFrontRailwayAxleLowPosition = gDb_tRamEcuInputsC0.eDownAxleOscillantState == GE_DI_ON;
	gCsr_tMsg1C0SendToEvision7.bogBackRailwayAxleServiceBrake = gDb_tRamEcuOutputsC0.boEvServiceBrakeAxleFixeCmdBool;
	gCsr_tMsg1C0SendToEvision7.bogFrontRailwayAxleServiceBrake = gDb_tRamEcuOutputsC0.boEvServiceBrakeAxleOsciCmdBool;
	gCsr_tMsg1C0SendToEvision7.bogBackRailwayAxleParkBrake = !gDb_tRamEcuOutputsC0.boEvParkBrakeAxleFixeCmdBool;
	gCsr_tMsg1C0SendToEvision7.bogFrontRailwayAxleParkBrake = !gDb_tRamEcuOutputsC0.boEvParkBrakeAxleOscillantCmdBool;
	gCsr_tMsg1C0SendToEvision7.bogStatusFrontLeftTrainBrakeTest = gDb_tRamBrakeTest.boValidOsciServiceBrakeTest;
	gCsr_tMsg1C0SendToEvision7.bogStatFrontRightTrainBrakeTest = gDb_tRamBrakeTest.boValidOsciParkingBrakeTest;
	gCsr_tMsg1C0SendToEvision7.bogStatusBackLeftTrainBrakeTest = gDb_tRamBrakeTest.boValidFixeServiceBrakeTest;
	gCsr_tMsg1C0SendToEvision7.bogStatusBackRightTrainBrakeTest = gDb_tRamBrakeTest.boValidFixeParkingBrakeTest;
	gCsr_tMsg1C0SendToEvision7.bogAlarmAru = (bo_ARU_C0_Actived == TRUE || bo_ARU_RADIO_C0_Actived == TRUE);
	gCsr_tMsg1C0SendToEvision7.bogLitmitSpeedExceeded = gDb_tRamSpeedMaxRail.boLitmitSpeedExceeded;
	gCsr_tMsg1C0SendToEvision7.bogShowCamera = gDb_tRamGeneralC0.boTranslationMovementIsSolicited || gDb_tRam48XsInputsC0.boGachette;
	gCsr_tMsg1C0SendToEvision7.bogFixeAxleFrequencyFault = boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_2, DM_ONE_SPEED_SENSOR_FAULT); /*Penser à changer les noms sert pour un defaut*/
	gCsr_tMsg1C0SendToEvision7.bogOscillantAxleFrequencyFault = boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_2, DM_TWO_SPEED_SENSOR_FAULT);/*Penser à changer les noms sert pourdeux defaut*/
	//NEOTEC IG EVO3
//	gCsr_tMsg1C0SendToEvision7.bogTemperatureTransmAlarm = boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_2, DM_ALARM_HYDRAULIC_TEMP_CRAWLER) == TRUE
//														|| boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_2, DM_ALARM_HYDRAULIC_TEMP_RAIL) == TRUE;
	gCsr_tMsg1C0SendToEvision7.bogTemperatureTransmAlarm = gDb_tRamGeneralC0.boAlarmHydTempCrawlerActive == TRUE || gDb_tRamGeneralC0.boAlarmHydTempRailActive == TRUE;


	gCsr_tMsg1C0SendToEvision7.bogRequestForwardTransRail = gDb_tRamGeneralC0.boAuthorizeTransRailMovement == TRUE && gDb_tRamGeneralC0.i16JoystickAdvanceScalingValue > 0;
	gCsr_tMsg1C0SendToEvision7.bogRequestBackwardTransRail = gDb_tRamGeneralC0.boAuthorizeTransRailMovement == TRUE && gDb_tRamGeneralC0.i16JoystickAdvanceScalingValue < 0;
	gCsr_tMsg1C0SendToEvision7.bogEvForwardFault = boBloProGetErrStaBit(&gPro_tEvForwardPump,DM_PRO_5XX_HS_OL) || boBloProGetErrStaBit(&gPro_tEvForwardPump,DM_PRO_5XX_HS_HSP) || boBloProGetErrStaBit(&gPro_tEvForwardPump,DM_PRO_5XX_HS_HSG);
	gCsr_tMsg1C0SendToEvision7.bogEvBackwardFault = boBloProGetErrStaBit(&gPro_tEvBackwardPump,DM_PRO_5XX_HS_OL) || boBloProGetErrStaBit(&gPro_tEvBackwardPump,DM_PRO_5XX_HS_HSP) || boBloProGetErrStaBit(&gPro_tEvBackwardPump,DM_PRO_5XX_HS_HSG);
	gCsr_tMsg1C0SendToEvision7.bogIncoherenceModeTravail = gDb_tRamRailWorkSafetyC0.eAbutmentWorkMode == GE_NO_RAIL_WORK_MODE;
	gCsr_tMsg1C0SendToEvision7.bogIncoherenceBasketStopAndKey = gDb_tRamRailWorkSafetyC0.boWrongAbutments;
	gCsr_tMsg1C0SendToEvision7.bogCenteredAdvanceJoystick = gDb_tRam48XsInputsC0.boCenteredAdvanceJoystick;
	gCsr_tMsg1C0SendToEvision7.bogKlaxon = gDb_tRamEcuOutputsC0.boKlaxonNeotecCmdBool;
	gCsr_tMsg1C0SendToEvision7.bogGachette = gDb_tRam48XsInputsC0.boGachette;
	gCsr_tMsg1C0SendToEvision7.bogStopMoteur = gDb_tRam48XsInputsC0.boStopMotorButton;
	gCsr_tMsg1C0SendToEvision7.bogDeadMan = gDb_tRam48XsInputsC0.boDeadManPedal;
	/*Double freins*/
	gCsr_tMsg1C0SendToEvision7.bogLimitSpeedLowSpeedBrakeTest = gDb_tRamBrakeTest.boCycleBrakeOverCriticalNumber || gDb_tRamBrakeTest.boCycle2ndParkBrakeCritical || gDb_tRamGeneralC0.eRailSpeedMode == GE_LOW_SPEED_BRAKE_TEST_NEEDED;
	gCsr_tMsg1C0SendToEvision7.bogSlopeSensorFault = boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_3, DM_SLOPE_FAULT);
	gCsr_tMsg1C0SendToEvision7.bogMastMeasureFault = boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_3, DM_MAT_MEASURE_FAULT)== TRUE; // Mat de mesure Fault
	gCsr_tMsg1C0SendToEvision7.i16gEncodeurTurretAngle = gDb_tRamCanSensorC0.i16EncodeurTurret1Angle;

	/* affect global variable to Can Msg 2 send to eVision7*/
	gCsr_tMsg2C0SendToEvision7.u16gEngine_Use_Time = u32CoreGetEngineTime()/3600;
	gCsr_tMsg2C0SendToEvision7.u16gEngine_RPM = u16CastI32(gDb_tRamEcuC0RcvFromC1.i32RegimeMotorAlternatorRpm);
	gCsr_tMsg2C0SendToEvision7.u16gVehiculeSpeed = u16CastI32(gCsr_tData3SendToC1.i32SpeedVehicleKmhx100);
	gCsr_tMsg2C0SendToEvision7.u8gLateralizationStop =  gDb_tRamRailWorkSafetyC0.eAbutmentWorkMode;
	gCsr_tMsg2C0SendToEvision7.u8gKeySelector = gDb_tRamRailWorkSafetyC0.eRailWorkMode;

	/* affect global variable of message Msg 3 send to eVision7*/
	gCsr_tMsg3C0SendToEvision7.u16gAvdvancePeriod = gDb_tRamBreakInBrakeC0.u16AdvancementPeriodMs10;

	/* affect global variable to Can Msg 3 send to eVision7*/
	gCsr_tMsg3C0SendToEvision7.u16gFrontSpeedRailWayAxle = u16CastU32(gDb_tRamEcuInputsC0.i32OscillantAxleFrequency);
	gCsr_tMsg3C0SendToEvision7.u16gBackSpeedRailWayAxle = u16CastU32(gDb_tRamEcuInputsC0.i32FixeAxleFrequency);
	gCsr_tMsg3C0SendToEvision7.u16gPressureEfficiencyRate = gDb_tRamBrakeTest.u16PressureEfficiencyRate;

	/* affect global variable to Can Msg 4 send to eVision7*/
	gCsr_tMsg4C0SendToEvision7.u16gForwardPumpCurrent = gDb_tRamEcuOutputsC0.u16ForwardPumpCurrent;
	gCsr_tMsg4C0SendToEvision7.u16gBackwardPumpCurrent = gDb_tRamEcuOutputsC0.u16BackwardPumpCurrent;
	gCsr_tMsg4C0SendToEvision7.i16gTrans1PressureSensorValue = gDb_tRamEcuC0RcvFromC1.i16Transmission1Pressure;
	gCsr_tMsg4C0SendToEvision7.i16gTrans2PressureSensorValue = gDb_tRamEcuC0RcvFromC1.i16Transmission2Pressure;
	//-----------------------------------------------------------------------------------------------------
	// debug message
	//-----------------------------------------------------------------------------------------------------
	/* affect global variable to Can Msg 5 send to eVision7*/
	gCsr_tMsg5C0SendToEvision7.boAbutementNacelleTrackSide = gDb_tRam48XsInputsC0.boAbutementNacelleTrackSide; /* Sensor supply */
	gCsr_tMsg5C0SendToEvision7.boAbutementNacelleCenteredSide = gDb_tRam48XsInputsC0.boAbutementNacelleCenteredSide; /* Sensor supply*/
	gCsr_tMsg5C0SendToEvision7.boBasketTurretLimitation = gDb_tNvOptionsC0.boBasketTurretLimitation; //Avant gDb_tRamRailWorkSafetyC0.boTestFranceConfig MODIF FR
	gCsr_tMsg5C0SendToEvision7.boPin217Fault = gDb_tRamEcuInputsC0.eAutorisationHighSpeedKeyState; /*NEOTEC IG EVO/ Envoie de la position de la clé d'autorisation de grande vitesse PROVISOIRE*/
	gCsr_tMsg5C0SendToEvision7.boPin230Fault = gDb_tRamGeneralC0.eRailSpeedMode == GE_LOW_SPEED_BRAKE_TEST_NEEDED; /*NEOTEC IG EVO/ Envoie de la vitesse défaut pour information PROVISOIRE*/
	//NEOTEC IG EVO3
	gCsr_tMsg5C0SendToEvision7.boPin243Fault = boBloErrGetErrStaBit(&gErr_tSpecificErrorC0, DM_HIGH_HYDRAULIC_TEMP_CRAWLER)== TRUE
										 	|| boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_2, DM_HIGH_HYDRAULIC_TEMP_RAIL)== TRUE;
	gCsr_tMsg5C0SendToEvision7.boPin244Fault = FALSE; /* Sensor GND*/
	gCsr_tMsg5C0SendToEvision7.boPin245Fault = FALSE; /* Sensor GND*/
	gCsr_tMsg5C0SendToEvision7.boPin256Fault = FALSE; /* Sensor GND*/
	gCsr_tMsg5C0SendToEvision7.boPin257Fault = FALSE; /* Sensor GND*/
	gCsr_tMsg5C0SendToEvision7.boPin258Fault = FALSE; /* Sensor GND*/
	gCsr_tMsg5C0SendToEvision7.boPin103Fault = u16BloInCurGetErrStaAll(&gInCur_tPressureBlockOscillationSensor) != 0; /* PressureBlockOscillationSensor Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin127Fault = u16BloInCurGetErrStaAll(&gInCur_tPressureBrakeSensor) != 0; /* PressureBrakeSensor Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin104Fault = u16BloInCurGetErrStaAll(&gInCur_tTemperatureTransmissionSensor) != 0; /* TemperatureTransmissionSensor Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin128Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tAruRadio1Contact) != 0; /* AruRadio1Contact Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin105Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tAruRadio2Contact) != 0; /* AruRadio2Contact Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin129Fault = u16BloInCurGetErrStaAll(&gInCur_tElectricPumpPressure) != 0; /*Pression pompe électrique en défaut GREEN*/
	gCsr_tMsg5C0SendToEvision7.boPin106Fault = FALSE; /* Not used*/
	gCsr_tMsg5C0SendToEvision7.boPin130Fault = FALSE; /* Not used*/
	gCsr_tMsg5C0SendToEvision7.boPin107Fault = u16BloSwiDblNoNcGetErrStaAll(&gSwiDblNoNc_tFrameRotationSensor1) != 0; /* FrameRotationSensor1 Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin131Fault = u16BloSwiDblNcNoGetErrStaAll(&gSwiDblNcNo_tDownOscillantAxle) != 0; /* DownOscillantAxle Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin108Fault = u16BloSwiDblNcNoGetErrStaAll(&gSwiDblNcNo_tDownFixeAxle) != 0; /* DownFixeAxle Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin132Fault = u16BloSwiNcGetErrStaAll(&gSwiNc_tUpOscillantAxle) != 0; /* UpOscillantAxle Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin109Fault = u16BloSwiNcGetErrStaAll(&gSwiNc_tUpFixeAxle) != 0; /* UpFixeAxle Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin133Fault = u16BloSwiDblNoNcGetErrStaAll(&gSwiDblNoNc_tFrameRotationSensor1) != 0; /*FrameRotationSensor1 Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin110Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tRailHookSensor) != 0; /* RailHookSensor Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin134Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tInductiveRailSensor) != 0; /* InductiveRailSensor Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin111Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tCenteredTurret) != 0; /* CenteredTurret Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin135Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tWorkKeyTrackSide) != 0; /* WorkKeyTrackSide Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin112Fault = u16BloSwiDblNoNcGetErrStaAll(&gSwiDblNoNc_tFrameRotationSensor2) != 0; // FrameRotationSensor2 Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin136Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tWorkKeyBilateral) != 0; /* WorkKeyBilateral Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin113Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tWorkKeyCentred) != 0; /* WorkKeyCentred Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin137Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tAbutmentTurretTrackSide) != 0; /* AbutmentTurretTrackSide Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin114Fault = u16BloSwiDblNoNcGetErrStaAll(&gSwiDblNoNc_tFrameRotationSensor2) != 0; /* FrameRotationSensor2 Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin138Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tAbutmentTurretCentredSide) != 0; /* AbutmentTurretCentredSide Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin115Fault = u16BloInFreqGetErrStaAll(&gInFreq_tOscillantAxleSpeedSensor) != 0; /* OscillantAxleSpeedSensor Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin139Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tOscillantAxleSpeedSensorDir) != 0; /* OscillantAxleSpeedSensorDir Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin116Fault = u16BloInFreqGetErrStaAll(&gInFreq_tFixeAxleSpeedSensor) != 0; /* FixeAxleSpeedSensor Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin140Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tFixeAxleSpeedSensorDir) != 0; /* FixeAxleSpeedSensorDir Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin117Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tTrailerGache) != 0; /* TrailerGache Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin122Fault = u16BloSwiDblNcNoGetErrStaAll(&gSwiDblNcNo_tDownOscillantAxle) != 0; /* DownOscillantAxle Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin146Fault = u16BloSwiDblNcNoGetErrStaAll(&gSwiDblNcNo_tDownFixeAxle) != 0; /* DownFixeAxle Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin123Fault = FALSE; /* Not used*/
	gCsr_tMsg5C0SendToEvision7.boPin147Fault = FALSE; /* Not used*/
	gCsr_tMsg5C0SendToEvision7.boPin124Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tAru1Contact) != 0; /* Aru1Contact Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin148Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tAru2Contact) != 0; /* Aru2Contact Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin153Fault = gDig_tEvDeflectorTransmission.tOut.ePinSta != 0; /* EvDeflectorTransmission Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin177Fault = gDig_tEvUnBlockOscillationAxle.tOut.ePinSta != 0; /* EvUnBlockOscillationAxle Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin156Fault = gDig_tSupplyAnaSensors.tOut.ePinSta != 0; /* SupplyAnaSensors Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin180Fault = FALSE; /* Not used*/
	gCsr_tMsg5C0SendToEvision7.boPin159Fault = gDig_tEv2DeflectorTransmission.tOut.ePinSta != 0; /* Ev2DeflectorTransmission Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin183Fault = FALSE; /* Not used*/
	gCsr_tMsg5C0SendToEvision7.boPin186Fault = gDig_tEvParkBrakeAxleOscillant.tOut.ePinSta != 0; /* EvParkBrakeAxleOscillant Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin162Fault = gDig_tEvParkBrakeAxleFixe.tOut.ePinSta != 0; /* EvParkBrakeAxleFixe Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin189Fault = gDig_tEvServiceBrakeAxleOscillant.tOut.ePinSta != 0; /* EvServiceBrakeAxleOscillant Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin165Fault = gDig_tEvServiceBrakeAxleFixe.tOut.ePinSta != 0; /* EvServiceBrakeAxleFixe Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin192Fault = FALSE; /* Not used*/
	gCsr_tMsg5C0SendToEvision7.boPin168Fault = FALSE; /* Not used*/
	gCsr_tMsg5C0SendToEvision7.boPin195Fault = gDig_tEvServiceBrakeTrack.tOut.ePinSta != 0; /* EvServiceBrakeTrack Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin171Fault = gDig_tEvPowerReduction.tOut.ePinSta != 0; /* EvPowerReduction Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin154Fault = gDig_tNeonLights.tOut.ePinSta != 0; /* NeonLights Fault*/
	gCsr_tMsg5C0SendToEvision7.boPin178Fault = FALSE; /* Not used*/
	gCsr_tMsg5C0SendToEvision7.boPin157Fault = FALSE; /* Not used*/

	/* affect global variable to Can Msg 6 send to eVision7*/
	gCsr_tMsg6C0SendToEvision7.boPin181Fault = FALSE; /* Not used*/
	gCsr_tMsg6C0SendToEvision7.boPin160Fault = gDig_tSupplyRadioReceiver.tOut.ePinSta != 0; /* SupplyRadioReceiver Fault*/
	gCsr_tMsg6C0SendToEvision7.boPin184Fault = gDig_tBuzzerLynxMovingMachine.tOut.ePinSta != 0; /* BuzzerLynxMovingMachine Fault*/
	gCsr_tMsg6C0SendToEvision7.boPin187Fault = gDig_tEvDevRailElectricMode.tOut.ePinSta != 0; /* Ev Déviateur Rail en mode électrique en défaut*/
	gCsr_tMsg6C0SendToEvision7.boPin163Fault = gDig_tKlaxonNeotec.tOut.ePinSta != 0; /* KlaxonNeotec Fault*/
	gCsr_tMsg6C0SendToEvision7.boPin190Fault = gDig_tEvUpMeasuringMast.tOut.ePinSta != 0; /* EvUpMeasuringMast Fault*/
	gCsr_tMsg6C0SendToEvision7.boPin166Fault = gDig_tEvDownMeasuringMast.tOut.ePinSta != 0; /* EvDownMeasuringMast Fault*/
	gCsr_tMsg6C0SendToEvision7.boPin193Fault = gDig_tEvUpAxleOscillant.tOut.ePinSta != 0; /* EvUpAxleOscillant Fault*/
	gCsr_tMsg6C0SendToEvision7.boPin169Fault = gDig_tEvDownAxleOscillant.tOut.ePinSta != 0; /* EvDownAxleOscillant Fault*/
	gCsr_tMsg6C0SendToEvision7.boPin196Fault = gDig_tEvUpAxleFixe.tOut.ePinSta != 0; /* EvUpAxleFixe Fault*/
	gCsr_tMsg6C0SendToEvision7.boPin172Fault = gDig_tEvDownAxleFixe.tOut.ePinSta != 0; /* EvDownAxleFixe Fault*/
	gCsr_tMsg6C0SendToEvision7.boPin101Fault = gPro_tEvForwardPump.tOut.ePinStaHs != 0; /* EvForwardPump Fault*/
	gCsr_tMsg6C0SendToEvision7.boPin125Fault = gPro_tEvBackwardPump.tOut.ePinStaHs != 0; /* EvBackwardPump Fault*/
	gCsr_tMsg6C0SendToEvision7.boPin150Fault = FALSE; /* Not used*/
	gCsr_tMsg6C0SendToEvision7.boPin174Fault = FALSE; /* Not used*/
	gCsr_tMsg6C0SendToEvision7.boPin102Fault = FALSE; /* Not used*/
	gCsr_tMsg6C0SendToEvision7.boPin126Fault = gDig_tRelayEnableBattery.tOut.ePinSta != 0; /* Enable batterie en défaut*/
	gCsr_tMsg6C0SendToEvision7.boPin151Fault = FALSE; /* Not used*/
	gCsr_tMsg6C0SendToEvision7.boPin175Fault = gDig_tRelayCutOffVariatorElectric.tOut.ePinSta != 0; /* Relais RAZ du variateur électrique*/
	gCsr_tMsg6C0SendToEvision7.boPin149Fault = gDig_tWhiteLightAVG.tOut.ePinSta != 0; /* WhiteLightAVG Fault*/
	gCsr_tMsg6C0SendToEvision7.boPin173Fault = gDig_tWhiteLightAVD.tOut.ePinSta != 0; /* WhiteLightAVD Fault*/
	gCsr_tMsg6C0SendToEvision7.boPin152Fault = gDig_tRedLightAVG.tOut.ePinSta != 0; /* RedLightAVG Fault*/
	gCsr_tMsg6C0SendToEvision7.boPin176Fault = gDig_tRedLightAVD.tOut.ePinSta != 0; /* RedLightAVD Fault*/
	gCsr_tMsg6C0SendToEvision7.boPin155Fault = gDig_tWhiteLightARG.tOut.ePinSta != 0; /* WhiteLightARG Fault*/
	gCsr_tMsg6C0SendToEvision7.boPin179Fault = gDig_tWhiteLightARD.tOut.ePinSta != 0; /* WhiteLightARD Fault*/
	gCsr_tMsg6C0SendToEvision7.boPin158Fault = gDig_tRedLightARG.tOut.ePinSta != 0; /* RedLightARG Fault*/
	gCsr_tMsg6C0SendToEvision7.boPin182Fault = gDig_tRedLightARD.tOut.ePinSta != 0; /* RedLightARD Fault*/
	gCsr_tMsg6C0SendToEvision7.boPin251Fault = gDig_tReturnLowSideEvForwardPump.tOut.ePinSta != 0; /* ReturnLowSideEvForwardPump Fault*/
	gCsr_tMsg6C0SendToEvision7.boPin238Fault = gDig_tReturnLowSideEvBackwardPump.tOut.ePinSta != 0; /* ReturnLowSideEvBackwardPump Fault*/
	gCsr_tMsg6C0SendToEvision7.boPin252Fault = gDig_tPvgRightTrackLowside.tOut.ePinSta != 0; /* PvgLeftTrackLowside Fault*/
	gCsr_tMsg6C0SendToEvision7.boPin239Fault = gDig_tPvgRightTrackLowside.tOut.ePinSta != 0; /* PvgRightTrackLowside Fault*/
	gCsr_tMsg6C0SendToEvision7.boPin253Fault = FALSE; /* Not used*/
	gCsr_tMsg6C0SendToEvision7.boPin240Fault = FALSE; /* Not used*/
	gCsr_tMsg6C0SendToEvision7.boPin254Fault = FALSE; /* Not used*/
	gCsr_tMsg6C0SendToEvision7.boPin241Fault = FALSE; /* Not used*/
	gCsr_tMsg6C0SendToEvision7.boPin161Fault = gOutVoltPro_tPvgLeftTrack.tOut.ePinState != 0; /* PvgLeftTrack Fault*/
	gCsr_tMsg6C0SendToEvision7.boPin185Fault = gOutVoltPro_tPvgRightTrack.tOut.ePinState != 0; /* PvgRightTrack Fault*/
	gCsr_tMsg6C0SendToEvision7.boPin188Fault = gDig_tSupplyPvgLeftTrack.tOut.ePinSta != 0; /* SupplyPvgLeftTrack Fault*/
	gCsr_tMsg6C0SendToEvision7.boPin164Fault = gDig_tSupplyPvgRightTrack.tOut.ePinSta != 0; /* SupplyPvgRightTrack Fault*/
	gCsr_tMsg6C0SendToEvision7.boPin191Fault = gOutVoltPro_tPvgTransRailElectric.tOut.ePinState != 0; /*PvgTransRailElectric Fault*/
	gCsr_tMsg6C0SendToEvision7.boPin167Fault = FALSE; /* Not used*/
	gCsr_tMsg6C0SendToEvision7.boPin194Fault = gDig_tWhiteTrailerLights.tOut.ePinSta != 0; /* WhiteTrailerLights Fault*/
	gCsr_tMsg6C0SendToEvision7.boPin170Fault = gDig_tRedTrailerLights.tOut.ePinSta != 0; /* RedTrailerLights Fault*/

	/* affect global variable to Can Msg 7 send to eVision7*/
	gCsr_tMsg7C0SendToEvision7.boPin107 = gDb_tRamEcuInputsC0.eFrameRotationSensor1State == GE_DI_ON;
	gCsr_tMsg7C0SendToEvision7.boPin131 = gDb_tRamEcuInputsC0.eDownAxleOscillantState == GE_DI_ON;
	gCsr_tMsg7C0SendToEvision7.boPin108 = gDb_tRamEcuInputsC0.eDownAxleFixeState == GE_DI_ON;
	gCsr_tMsg7C0SendToEvision7.boPin132 = gDb_tRamEcuInputsC0.eUpAxleOscillantState == GE_DI_ON;
	gCsr_tMsg7C0SendToEvision7.boPin109 = gDb_tRamEcuInputsC0.eUpAxleFixeState == GE_DI_ON;
	gCsr_tMsg7C0SendToEvision7.boPin133 = gDb_tRamEcuInputsC0.eFrameRotationSensor1State == GE_DI_ON;
	gCsr_tMsg7C0SendToEvision7.boPin110 = gDb_tRamEcuInputsC0.eRailHookSensorState == GE_DI_ON;
	gCsr_tMsg7C0SendToEvision7.boPin134 = gDb_tRamEcuInputsC0.eInductiveRailSensorState == GE_DI_ON;
	gCsr_tMsg7C0SendToEvision7.boPin111 = gDb_tRamEcuInputsC0.eCenteredTurretState == GE_DI_ON;
	gCsr_tMsg7C0SendToEvision7.boPin135 = gDb_tRamEcuInputsC0.eWorkKeyTrackSideState == GE_DI_ON;
	gCsr_tMsg7C0SendToEvision7.boPin112 = gDb_tRamEcuInputsC0.eFrameRotationSensor2State == GE_DI_ON;
	gCsr_tMsg7C0SendToEvision7.boPin136 = gDb_tRamEcuInputsC0.eWorkKeyBilateralState == GE_DI_ON;
	gCsr_tMsg7C0SendToEvision7.boPin113 = gDb_tRamEcuInputsC0.eWorkKeyCentredState == GE_DI_ON;
	gCsr_tMsg7C0SendToEvision7.boPin137 = gDb_tRamEcuInputsC0.eAbutmentTurretTrackSideState == GE_DI_ON;
	gCsr_tMsg7C0SendToEvision7.boPin114 = gDb_tRamEcuInputsC0.eFrameRotationSensor2State == GE_DI_ON;
	gCsr_tMsg7C0SendToEvision7.boPin138 = gDb_tRamEcuInputsC0.eAbutmentTurretCentredSideState == GE_DI_ON;
	gCsr_tMsg7C0SendToEvision7.boPin140 = gDb_tRamEcuInputsC0.eFixeAxleSpeedSensorDirState == GE_DI_ON;
	gCsr_tMsg7C0SendToEvision7.boPin117 = gDb_tRamEcuInputsC0.eTrailerGacheState == GE_DI_ON;
	gCsr_tMsg7C0SendToEvision7.boPin141 =gDb_tRamEcuC0RcvFromC1.boFoldedMastMeasure == TRUE;
	gCsr_tMsg7C0SendToEvision7.boPin122 = gDb_tRamEcuInputsC0.eDownAxleOscillantState == GE_DI_ON;
	gCsr_tMsg7C0SendToEvision7.boPin146 = gDb_tRamEcuInputsC0.eDownAxleFixeState == GE_DI_ON;
	/*Double freins*/
	gCsr_tMsg7C0SendToEvision7.boPin123 = gDb_tRamEvision4C0.bogKeyCalibMax2; /* Envoie du défault moteur du 4.3 pouces au 7'pouces.*/
	gCsr_tMsg7C0SendToEvision7.boPin187 = gDig_tEvDevRailElectricMode.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin192 = gDb_tRamEcuOutputsC0.boEv2ndParkBrakeAxleFixe;
	gCsr_tMsg7C0SendToEvision7.boPin168 = gDb_tRamEcuOutputsC0.boEv2ndParkBrakeAxleOsci;
	gCsr_tMsg7C0SendToEvision7.boPin124 = gDb_tRamEcuInputsC0.eAru1ContactState == GE_DI_ON;
	gCsr_tMsg7C0SendToEvision7.boPin148 = gDb_tRamEcuInputsC0.eAru2ContactState == GE_DI_ON;
	gCsr_tMsg7C0SendToEvision7.boPin153 = gDig_tEvDeflectorTransmission.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin177 = gDig_tEvUnBlockOscillationAxle.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin156 = gDig_tSupplyAnaSensors.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin159 = gDig_tEv2DeflectorTransmission.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin186 = gDig_tEvParkBrakeAxleOscillant.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin162 = gDig_tEvParkBrakeAxleFixe.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin189 = gDig_tEvServiceBrakeAxleOscillant.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin165 = gDig_tEvServiceBrakeAxleFixe.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin195 = gDig_tEvServiceBrakeTrack.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin171 = gDig_tEvPowerReduction.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin154 = gDig_tNeonLights.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin160 = gDig_tSupplyRadioReceiver.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin184 = gDig_tBuzzerLynxMovingMachine.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin163 = gDig_tKlaxonNeotec.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin190 = gDig_tEvUpMeasuringMast.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin166 = gDig_tEvDownMeasuringMast.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin193 = gDig_tEvUpAxleOscillant.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin169 = gDig_tEvDownAxleOscillant.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin196 = gDig_tEvUpAxleFixe.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin172 = gDig_tEvDownAxleFixe.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin149 = gDig_tWhiteLightAVG.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin173 = gDig_tWhiteLightAVD.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin152 = gDig_tRedLightAVG.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin176 = gDig_tRedLightAVD.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin155 = gDig_tWhiteLightARG.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin179 = gDig_tWhiteLightARD.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin158 = gDig_tRedLightARG.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin182 = gDig_tRedLightARD.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin252 = gDig_tPvgLeftTrackLowside.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin239 = gDig_tPvgRightTrackLowside.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin188 = gDig_tSupplyPvgLeftTrack.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin164 = gDig_tSupplyPvgRightTrack.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin191 = FALSE; /*Not used*/
	gCsr_tMsg7C0SendToEvision7.boPin167 = gDig_tSupplyPvgTransRailElectric.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin194 = gDig_tWhiteTrailerLights.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg7C0SendToEvision7.boPin170 = gDig_tRedTrailerLights.tOut.eValSta == DIG_STA_ON;


	/* affect global variable to Can Msg 8 send to eVision7*/
	gCsr_tMsg8C0SendToEvision7.boPin136_48XSFault = FALSE; /* Alim. capteur échelle repliée Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin148_48XSFault = FALSE; /* Not used*/
	gCsr_tMsg8C0SendToEvision7.boPin135_48XSFault = FALSE; /* Alim. capt. panier / pend. / assiette Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin147_48XSFault = FALSE; /* Not used*/
	gCsr_tMsg8C0SendToEvision7.boPin269_48XSFault = FALSE; /* Not used*/
	gCsr_tMsg8C0SendToEvision7.boPin118_48XSFault = FALSE; /* Voyant défaut moteur Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin106_48XSFault = FALSE; /* Voyant surcharge Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin117_48XSFault = FALSE; /*  Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin105_48XSFault = FALSE; /* Buzzer Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin116_48XSFault = FALSE; /*  Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin104_48XSFault = FALSE; /* Voyant préchauffage Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin115_48XSFault =  gCsr_tData4C0SendToC1.boSlopeHighWithWorkOnCrawler; /* Voyant défaut dévers Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin103_48XSFault = FALSE; /* Voyant gasoil Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin120_48XSFault = FALSE; /* Feux blancs (x2) Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin108_48XSFault = FALSE; /* Feux rouge (x2) Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin119_48XSFault = FALSE; /*  Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin107_48XSFault = FALSE; /*  Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin144_48XSFault = FALSE; /* Bouton montée inclinaison panier Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin132_48XSFault = FALSE; /* Bouton descente inclinaison panier Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin143_48XSFault = FALSE; /* Bouton montée pendulaire Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin131_48XSFault = FALSE; /* Bouton descente pendulaire Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin142_48XSFault = FALSE; /* Bouton rotation panier antihoraire Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin130_48XSFault = FALSE; /* Bouton rotation panier horaire Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin141_48XSFault = FALSE; /* Surcharge 1 NC Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin129_48XSFault = FALSE; /* Surcharge 2 NC Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin152_48XSFault = FALSE; /* Capteur panier nacelle côté droit NC Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin140_48XSFault = FALSE; /* Capteur panier nacelle côté droit NO Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin151_48XSFault = FALSE; /* Capt. panier nacelle côté gauche NC Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin139_48XSFault = FALSE; /* Capt. panier nacelle côté gauche NO Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin150_48XSFault = FALSE; /* Capteur pendulaire secteur bas NC Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin138_48XSFault = FALSE; /* Capteur assiette secteur haut Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin149_48XSFault = FALSE; /* Capteur échelle repliée Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin137_48XSFault = FALSE; /*Safety Man System Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin126_48XSFault = FALSE; /* Axe joystick bras delta Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin114_48XSFault = FALSE; /* Axe joystick bras flèche Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin125_48XSFault = FALSE; /* Axe joystick bras télescope Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin113_48XSFault = FALSE; /* Axe joystick rotation tourelle Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin124_48XSFault = FALSE; /* Axe joystick avance Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin112_48XSFault = FALSE; /* Réarmement Safety Man System Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin123_48XSFault = FALSE; /* Butée nacelle travail coté piste Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin111_48XSFault = FALSE; /* Butée nacelle travail mode axé Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin133_48XSFault = FALSE; /* Masse joystick bras delta / télescope Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin134_48XSFault = FALSE; /* Masse joystick bras flèche / tourelle Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin145_48XSFault = FALSE; /* Masse joystick avance Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin146_48XSFault = FALSE; /* Masse Safety Man System Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin263_48XSFault = FALSE; /* Joystick bras delta / télescope centré Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin256_48XSFault = FALSE; /* Joystick bras flèche / tourelle centré Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin262_48XSFault = FALSE; /* Joystick avance centré Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin255_48XSFault = FALSE; /* Pédale homme mort Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin261_48XSFault = FALSE; /* Capteur présence dans nacelle 1 Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin254_48XSFault = FALSE; /* Capteur présence dans nacelle 2 Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin260_48XSFault = FALSE; /* Gâchette Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin253_48XSFault = FALSE; /* Klaxon Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin270_48XSFault = FALSE; /* Masse boutons élévation Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin276_48XSFault = FALSE; /* Masse capteur surcharge 1 Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin277_48XSFault = FALSE; /* Masse capteur surcharge 2 Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin275_48XSFault = FALSE; /* Bouton stop moteur Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin268_48XSFault = FALSE; /* Clé autorisation travail Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin274_48XSFault = FALSE; /* Bouton étalonnage joysticks Fault*/
	gCsr_tMsg8C0SendToEvision7.boPin267_48XSFault = FALSE; /* Capteur portillon fermé Fault*/

	/* affect global variable to Can Msg 9 send to eVision7*/
	gCsr_tMsg9C0SendToEvision7.boPin144_48XS = gDb_tRam48XsInputsC0.boUpInclinaisonBasketButton; /*Bouton montée inclinaison panier State*/
	gCsr_tMsg9C0SendToEvision7.boPin132_48XS = gDb_tRam48XsInputsC0.boDownInclinaisonBasketButton; /*Bouton descente inclinaison panier State*/
	gCsr_tMsg9C0SendToEvision7.boPin143_48XS = gDb_tRam48XsInputsC0.boUpPendularButton; /*Bouton montée pendulaire State*/
	gCsr_tMsg9C0SendToEvision7.boPin131_48XS = gDb_tRam48XsInputsC0.boDownPendularButton; /*Bouton descente pendulaire State*/
	gCsr_tMsg9C0SendToEvision7.boPin142_48XS = gDb_tRam48XsInputsC0.boRotationCtClockwiseBasketButton; /*Bouton rotation panier antihoraire State*/
	gCsr_tMsg9C0SendToEvision7.boPin130_48XS = gDb_tRam48XsInputsC0.boRotationClockwiseBasketButton; /*Bouton rotation panier horaire State*/
	gCsr_tMsg9C0SendToEvision7.boPin141_48XS = gDb_tRam48XsInputsC0.boOverload1; /*Surcharge 1 NC State*/
	gCsr_tMsg9C0SendToEvision7.boPin129_48XS = gDb_tRam48XsInputsC0.boOverload2; /*Surcharge 2 NC State*/
	gCsr_tMsg9C0SendToEvision7.boPin152_48XS = gDb_tRam48XsInputsC0.boNacelleBasketRightSideSensor1; /*Capteur panier nacelle côté droit NC State*/
	gCsr_tMsg9C0SendToEvision7.boPin140_48XS = gDb_tRam48XsInputsC0.boNacelleBasketRightSideSensor2; /*Capteur panier nacelle côté droit NO State*/
	gCsr_tMsg9C0SendToEvision7.boPin151_48XS = gDb_tRam48XsInputsC0.boNacelleBasketLeftSideSensor1; /*Capt. panier nacelle côté gauche NC State*/
	gCsr_tMsg9C0SendToEvision7.boPin139_48XS = gDb_tRam48XsInputsC0.boNacelleBasketLeftSideSensor2; /*Capt. panier nacelle côté gauche NO State*/
	gCsr_tMsg9C0SendToEvision7.boPin150_48XS = gDb_tRam48XsInputsC0.boLowSectorPendularSensor; /*Capteur pendulaire secteur bas NC State*/
	gCsr_tMsg9C0SendToEvision7.boPin138_48XS = gDb_tRam48XsInputsC0.boHighSectorPlateSensor; /*Capteur assiette secteur haut State*/
	gCsr_tMsg9C0SendToEvision7.boPin149_48XS = gDb_tRam48XsInputsC0.boFoldedLadderSensor; /*Capteur échelle repliée State*/
	gCsr_tMsg9C0SendToEvision7.boPin263_48XS = gDb_tRam48XsInputsC0.boDeltaArmJystckCenteredTelescope; /*Joystick bras delta / télescope centré State*/
	gCsr_tMsg9C0SendToEvision7.boPin256_48XS = gDb_tRam48XsInputsC0.boArrowJoystickCenteredTurret; /*Joystick bras flèche / tourelle centré State*/
	gCsr_tMsg9C0SendToEvision7.boPin262_48XS = gDb_tRam48XsInputsC0.boCenteredAdvanceJoystick; /*Joystick avance centré State*/
	gCsr_tMsg9C0SendToEvision7.boPin255_48XS = gDb_tRam48XsInputsC0.boDeadManPedal; /*Pédale homme mort State*/
	gCsr_tMsg9C0SendToEvision7.boPin261_48XS = gDb_tRam48XsInputsC0.boPressenceInNacelleSensor1; /*Capteur présence dans nacelle 1 State*/
	gCsr_tMsg9C0SendToEvision7.boPin254_48XS = gDb_tRam48XsInputsC0.boPressenceInNacelleSensor2; /*Capteur présence dans nacelle 2 State*/
	gCsr_tMsg9C0SendToEvision7.boPin260_48XS = gDb_tRam48XsInputsC0.boGachette; /*Gâchette State*/
	gCsr_tMsg9C0SendToEvision7.boPin253_48XS = gDb_tRam48XsInputsC0.boKlaxon; /*Klaxon State*/
	gCsr_tMsg9C0SendToEvision7.boPin275_48XS = gDb_tRam48XsInputsC0.boStopMotorButton; /*Bouton stop moteur State*/
	gCsr_tMsg9C0SendToEvision7.boPin268_48XS = gDb_tRam48XsInputsC0.boAuthorizationWorkKey; /*Clé autorisation travail State*/
	gCsr_tMsg9C0SendToEvision7.boPin274_48XS = gDb_tRam48XsInputsC0.boEtallonnageJoystickButton; /*Bouton étalonnage joysticks State*/
	gCsr_tMsg9C0SendToEvision7.boPin267_48XS = gDb_tRam48XsInputsC0.boClosePortillonSensor; /*Capteur portillon fermé State*/
	gCsr_tMsg9C0SendToEvision7.i16gPressureBrakeSensorValue = gDb_tRamEcuInputsC0.i16PressureBrakeSensorValue;
	gCsr_tMsg9C0SendToEvision7.u8gLightsMode =gDb_tNvMemoryC0.u8LightMode;
	gCsr_tMsg9C0SendToEvision7.bogOsciServiceBrakinBrakeOn = gDb_tRamBreakInBrakeC0.boOsciServiceBrakinBrakeOn;
	gCsr_tMsg9C0SendToEvision7.bogFixeServiceBrakinBrakeOn = gDb_tRamBreakInBrakeC0.boFixeServiceBrakinBrakeOn;
	gCsr_tMsg9C0SendToEvision7.bogBothServiceBrakinBrakeOn = gDb_tRamBreakInBrakeC0.boBothServiceBrakinBrakeOn;
	gCsr_tMsg9C0SendToEvision7.bogActiveWhiteLights15746 = gDb_tRamGeneralC0.boActiveWhiteLights15746;

	/* affect global variable to Can Msg 10 send to eVision7*/
	gCsr_tMsg10C0SendToEvision7.i16gPressureBlockOscillation = gDb_tRamEcuInputsC0.i16PressureBlockOscillationValue;
	gCsr_tMsg10C0SendToEvision7.u8gTTC580Version_Major = MAJOR;
	gCsr_tMsg10C0SendToEvision7.u8gTTC580Version_Minor = MINOR;
	gCsr_tMsg10C0SendToEvision7.u8gTTC580Version_Patch = PATCH;
	gCsr_tMsg10C0SendToEvision7.u8gTTC580Version_Custom = CUSTOM;
	gCsr_tMsg10C0SendToEvision7.i16gJoystAdvanceScaling = gDb_tRamGeneralC0.i16JoystickAdvanceScalingValue;

	/* affect global variable to Can Msg 11 send to eVision7*/
	gCsr_tMsg11C0SendToEvision7.i16gSlopeLongAngle = gDb_tRamCanSensorC0.i16SlopeLongAngleValue;
	gCsr_tMsg11C0SendToEvision7.i16gSlopeTransAngle = gDb_tRamCanSensorC0.i16SlopeTransAngleValue;
	gCsr_tMsg11C0SendToEvision7.i16gSlopeResultAngle = (TInt16)gDb_tRamCanSensorC0.u16SelectedSlopeAngle;
	gCsr_tMsg11C0SendToEvision7.i16gTemperatureTransmissionValue =gDb_tRamEcuInputsC0.i16TemperatureTransmissionValue;

	/* affect global variable to Can Msg 12 send to eVision7*/
	gCsr_tMsg12C0SendToEvision7.i32gDistanceTraveledMeasureMast = gDb_tNvMemoryC0.i32gDistanceTraveledMeasureMast ;
	gCsr_tMsg12C0SendToEvision7.u32gTotalDistance = (gDb_tRamGeneralC0.u32TotalDistance/1000); /*1000 pour des kilometres;*/

	/* affect global variable to Can Msg 13 send to eVision7*/
	  /*Double freins*/
	gCsr_tMsg13C0SendToEvision7.u8gPourcentCycle2ndParkBrake = gDb_tRamBrakeTest.u8PourcentCycle2ndParkBrake;/* Envoie du pourcentage du NB de cycle de freins.*/
	gCsr_tMsg13C0SendToEvision7.u8gReductionPumpRail = gDb_tRamGeneralC0.u8ReductionPumpRail;
	gCsr_tMsg13C0SendToEvision7.u8gPourcentCycleBrake = gDb_tRamBrakeTest.u8PourcentCycleBrake;
	gCsr_tMsg13C0SendToEvision7.boStatBack2eParkTrainBrakeTest = gDb_tRamBrakeTest.boValidFixe2ndParkBrakeTest;
	gCsr_tMsg13C0SendToEvision7.boStatFront2eParkTrainBrakeTest = gDb_tRamBrakeTest.boValidOsci2ndParkBrakeTest;
	gCsr_tMsg13C0SendToEvision7.bogSecondParkBrakeActive = gDb_tNvOptionsC0.boSecondParkBrakeActive;
	//GREEN
	gCsr_tMsg13C0SendToEvision7.boAutorizeRazController  = gDb_tRamGreenEffC0.boAutorizeRazController ==TRUE;
	gCsr_tMsg13C0SendToEvision7.boVoltageDcConverterFault = gDb_tRamGreenEffC0.boVoltageDcConverterFault;
	gCsr_tMsg13C0SendToEvision7.boBatteryLowLevel = gDb_tRamGreenEffC0.boBatteryLowLevel;
	gCsr_tMsg13C0SendToEvision7.boBattErrorCode1 = gDb_tRamGreenEffC0.boBattErrorCode1;
	gCsr_tMsg13C0SendToEvision7.boActiveFaultRazDmc   = gDb_tRamDMC_C0.boActiveFaultRazDmc  ;

	gCsr_tMsg13C0SendToEvision7.i16Motor_Rpm = gDb_tRamDMC_C0.i16MS_ActualSpeedRpm;
	gCsr_tMsg13C0SendToEvision7.i8Controller_Temp = gDb_tRamDMC_C0.i8CS_ControlerTemp;
	gCsr_tMsg13C0SendToEvision7.i8Motor_Temp = gDb_tRamDMC_C0.i8CS_MotorTemp;

	/* affect global variable to Can Msg 14 send to eVision7*/
	//GREEN
	gCsr_tMsg14C0SendToEvision7.i16Ibatt_ist = gDb_tRamFlashBatteryC0.i16Ibatt_ist;
	gCsr_tMsg14C0SendToEvision7.u16Vbatt_ist = gDb_tRamFlashBatteryC0.u16Vbatt_ist;
	gCsr_tMsg14C0SendToEvision7.u8Batt_Soc = gDb_tRamFlashBatteryC0.u8Batt_Soc;
	gCsr_tMsg14C0SendToEvision7.boAddParkBrakeActive = gDb_tRamBrakeTest.boAddParkBrakeActive;//NEOTEC IG EVO V4
	gCsr_tMsg14C0SendToEvision7.boPreventLimitSpeedExceeding = gDb_tRamSpeedMaxRail.boPreventLimitSpeedExceeding;

	/* affect global variable to Can Msg 15 send to eVision7*/
	//GREEN
	gCsr_tMsg15C0SendToEvision7.i16ElectricPumpPressureValue = gDb_tRamEcuInputsC0.i16ElectricPumpPressureValue;
	gCsr_tMsg15C0SendToEvision7.u16PvgTransRailElectricVoltage = gDb_tRamEcuOutputsC0.u16PvgTransRailElectricVoltage;
	gCsr_tMsg15C0SendToEvision7.boRelayCutOffVariatorElectricCmd = gDb_tRamEcuOutputsC0.boRelayCutOffVariatorElectricCmd;
	gCsr_tMsg15C0SendToEvision7.boRelayEnableBatteryCmd = gDb_tRamEcuOutputsC0.boRelayEnableBatteryCmd;
	gCsr_tMsg15C0SendToEvision7.boPictoAskResartController = gDb_tRamGreenEffC0.boPictoAskResartController;
	gCsr_tMsg15C0SendToEvision7.boPictoReloadBatteryImpossible= gDb_tRamGreenEffC0.boPictoReloadBatteryImpossible;
	gCsr_tMsg15C0SendToEvision7.u8Controller_FaultCode = gDb_tRamDMC_C0.u8MS_FaultCode;
	gCsr_tMsg15C0SendToEvision7.u16Controller_FaultSubCode = gDb_tRamDMC_C0.u16MS_FaultSubCode;

//DEBUG CPU TO Evision7
	gCsr_tMsgDebugC0SendToEvision7.u16FaultyValue = gDb_tRamGeneralC0.u16FaultyValue;
	gCsr_tMsgDebugC0SendToEvision7.u8DeviceNum = gDb_tRamGeneralC0.u8DeviceNum;
	gCsr_tMsgDebugC0SendToEvision7.u8ErrorCode = gDb_tRamGeneralC0.u8ErrorCode;

    /* ============================================================================================= */
  	/* 							Opus A3																 */
  	/* ============================================================================================= */
	/* affect global variable to Can Msg 1 send to Opus A3*/
	gCsr_tMsg1C0SendToOpus.boBreakParkingOnOff  = (gDb_tRamEcuOutputsC0.eEvParkBrakeAxleFixeState == GE_DIG_ON
													|| gDb_tRamEcuOutputsC0.eEvParkBrakeAxleOscillantState == GE_DIG_ON);
	gCsr_tMsg1C0SendToOpus.boTurretSectorInCenter = gDb_tRamSpeedMaxRail.boTurretInLowSpeedZone;
	gCsr_tMsg1C0SendToOpus.boTurretInCenter = gDb_tRamEcuInputsC0.eCenteredTurretState == GE_DI_ON;
	gCsr_tMsg1C0SendToOpus.boAlarmAru =(bo_ARU_C0_Actived == TRUE || bo_ARU_RADIO_C0_Actived == TRUE);
	gCsr_tMsg1C0SendToOpus.boBackRailwayAxleLowPosition = gDb_tRamEcuInputsC0.eDownAxleFixeState == GE_DI_ON;
	gCsr_tMsg1C0SendToOpus.boFrontRailwayAxleLowPosition = gDb_tRamEcuInputsC0.eDownAxleOscillantState == GE_DI_ON;
	gCsr_tMsg1C0SendToOpus.boIncoherenceLateralStopAndKey = gDb_tRamRailWorkSafetyC0.boWrongAbutments;
	gCsr_tMsg1C0SendToOpus.boBrakePressureFault = boPressureBrakeFault ||boBloErrGetErrStaBit(&gErr_tSpecificErrorC0,DM_SERVICE_BRAKE_PRESSURE_FAULT);
	//NEOTEC IG EVO3
//	gCsr_tMsg1C0SendToOpus.boTemperatureTransmissionAlarm = boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_2, DM_ALARM_HYDRAULIC_TEMP_CRAWLER) == TRUE
//														 || boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_2, DM_ALARM_HYDRAULIC_TEMP_RAIL) == TRUE;
	gCsr_tMsg1C0SendToOpus.boTemperatureTransmissionAlarm = gDb_tRamGeneralC0.boAlarmHydTempCrawlerActive == TRUE || gDb_tRamGeneralC0.boAlarmHydTempRailActive == TRUE;
//	gCsr_tMsg1C0SendToOpus.boTemperatureTransmissionAlarm = u16BloInCurGetErrStaAll(&gInCur_tTemperatureTransmissionSensor) != 0;
	gCsr_tMsg1C0SendToOpus.boUpAxleArFixeRadio = gDb_tRamEcuInputRadioControl.boUpAxleArFixe;
	gCsr_tMsg1C0SendToOpus.boDownAxleArFixeRadio = gDb_tRamEcuInputRadioControl.boDownAxleArFixe;
	gCsr_tMsg1C0SendToOpus.boUpAxleAvOscillantRadio = gDb_tRamEcuInputRadioControl.boUpAxleAvOscillant;
	gCsr_tMsg1C0SendToOpus.boDownAxleAvOscillantRadio = gDb_tRamEcuInputRadioControl.boDownAxleAvOscillant;
	gCsr_tMsg1C0SendToOpus.boRotationFrameCtClkwiseRadio = gDb_tRamEcuInputRadioControl.boRotationFrameCtClkwise;
	gCsr_tMsg1C0SendToOpus.boRotationFrameClkwiseRadio = gDb_tRamEcuInputRadioControl.boRotationFrameClkwise;
	gCsr_tMsg1C0SendToOpus.boSelectorRotTurretRadio = gDb_tRamEcuInputRadioControl.boSelectorRotTurret;
	gCsr_tMsg1C0SendToOpus.boSelectorPendularRadio = gDb_tRamEcuInputRadioControl.boSelectorPendular;
	gCsr_tMsg1C0SendToOpus.boUpPendulOrRotCtClkTurretRadio = gDb_tRamEcuInputRadioControl.boUpPendularOrRotCtClkTurret;
	gCsr_tMsg1C0SendToOpus.boDownPendulOrRotClkTurretRadio = gDb_tRamEcuInputRadioControl.boDownPendularOrRotClkTurret;
	gCsr_tMsg1C0SendToOpus.boStartRadioCommand = gDb_tRamEcuInputRadioControl.boStartRadioCommand;
	gCsr_tMsg1C0SendToOpus.boKlaxonCommand = gDb_tRamEcuInputRadioControl.boKlaxonCommand;
	gCsr_tMsg1C0SendToOpus.boStopRadioCommand = gDb_tRamEcuInputRadioControl.boStopRadioCommand;
	gCsr_tMsg1C0SendToOpus.boForcingAdvanceTrack = gDb_tRamEcuInputRadioControl.boForcingAdvanceTrack;
	gCsr_tMsg1C0SendToOpus.boInductiveRailSensor = gDb_tRamEcuInputsC0.eInductiveRailSensorState == GE_DI_ON;
	gCsr_tMsg1C0SendToOpus.boAuthorizeForwardCrawler = gDb_tRamGeneralC0.boAuthorizeForwardCrawler;
	gCsr_tMsg1C0SendToOpus.boAuthoriseBackwardCrawler = gDb_tRamGeneralC0.boAuthorizeBackwardCrawler;
	gCsr_tMsg1C0SendToOpus.boIncoherenceBasketStopAndKey = gDb_tRamRailWorkSafetyC0.boWrongAbutments;
	gCsr_tMsg1C0SendToOpus.boLoginStatus = gDb_tRamEvision7C0.boLoginStatus;
	gCsr_tMsg1C0SendToOpus.boMovement_Allow_On_Off = gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_NACELLE;
	gCsr_tMsg1C0SendToOpus.boIncoherenceModeTravail = (gDb_tRamRailWorkSafetyC0.boWrongAbutments == TRUE || gDb_tRamRailWorkSafetyC0.boWrongPosition == TRUE) ;
	gCsr_tMsg1C0SendToOpus.bogSlopeSensorFault = boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_3, DM_SLOPE_FAULT);
	gCsr_tMsg1C0SendToOpus.bogMastMeasureFault = boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_3, DM_MAT_MEASURE_FAULT)== TRUE; // Mat de mesure Fault
	gCsr_tMsg1C0SendToOpus.u8gReductionPumpTrack = gDb_tRamGeneralC0.u8ReductionPumpTrack;
	gCsr_tMsg1C0SendToOpus.i16gPressureBrakeSensorValue = gDb_tRamEcuInputsC0.i16PressureBrakeSensorValue;

	/* affect global variable to Can Msg 2 send to Opus A3*/
	gCsr_tMsg2C0SendToOpus.u16gEngine_Use_Time = u32CoreGetEngineTime()/3600;
	gCsr_tMsg2C0SendToOpus.i16gEncodeurTurretAngle = gDb_tRamCanSensorC0.i16EncodeurTurret1Angle;
	gCsr_tMsg2C0SendToOpus.u8gTTC580Version_Major = MAJOR;
	gCsr_tMsg2C0SendToOpus.u8gTTC580Version_Minor = MINOR;
	gCsr_tMsg2C0SendToOpus.u8gTTC580Version_Patch = PATCH;
	gCsr_tMsg2C0SendToOpus.u8gTTC580Version_Custom = CUSTOM;

	/* affect global variable to Can Msg 3 send to Opus A3*/
	gCsr_tMsg3C0SendToOpus.u8gKeySelector = gDb_tRamRailWorkSafetyC0.eRailWorkMode;
	gCsr_tMsg3C0SendToOpus.u8gLeftManipulatorPosRadio = gDb_tRamEcuInputRadioControl.eLeftManipulatorPosition;
	gCsr_tMsg3C0SendToOpus.u8gRightManipulatorPosRadio = gDb_tRamEcuInputRadioControl.eRightManipulatorPosition;
	gCsr_tMsg3C0SendToOpus.u16gLeftManipulatorRadioVari = (TUint16)gDb_tRamGeneralC0.i16OutputLutLeftManipulator;
	gCsr_tMsg3C0SendToOpus.u16gRightManipulatorRadioVari = (TUint16)gDb_tRamGeneralC0.i16OutputLutRightManipulator;
	gCsr_tMsg3C0SendToOpus.u8gLateralizationStop = gDb_tRamRailWorkSafetyC0.eAbutmentWorkMode;

	/* affect global variable to Can Msg 4 send to Opus A3*/
	gCsr_tMsg4C0SendToOpus.boAbutementNacelleTrackSide = gDb_tRam48XsInputsC0.boAbutementNacelleTrackSide; /* Sensor supply*/
	gCsr_tMsg4C0SendToOpus.boAbutementNacelleCenteredSide = gDb_tRam48XsInputsC0.boAbutementNacelleCenteredSide; /* Sensor supply*/
	gCsr_tMsg4C0SendToOpus.boBasketTurretLimitation = gDb_tNvOptionsC0.boBasketTurretLimitation; //Avant gDb_tRamRailWorkSafetyC0.boTestFranceConfig MODIF FR
	gCsr_tMsg4C0SendToOpus.boPin217Fault = FALSE; /* Sensor GND*/
	gCsr_tMsg4C0SendToOpus.boPin230Fault = FALSE; /* Sensor GND*/
	//NEOTEC IG EVO3
	gCsr_tMsg4C0SendToOpus.boPin243Fault = boBloErrGetErrStaBit(&gErr_tSpecificErrorC0, DM_HIGH_HYDRAULIC_TEMP_CRAWLER)== TRUE
										|| boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_2, DM_HIGH_HYDRAULIC_TEMP_RAIL)== TRUE;
	gCsr_tMsg4C0SendToOpus.boPin244Fault = FALSE; /* Sensor GND*/
	gCsr_tMsg4C0SendToOpus.boPin245Fault = FALSE; /* Sensor GND*/
	gCsr_tMsg4C0SendToOpus.boPin256Fault = FALSE; /* Sensor GND*/
	gCsr_tMsg4C0SendToOpus.boPin257Fault = FALSE; /* Sensor GND*/
	gCsr_tMsg4C0SendToOpus.boPin258Fault = FALSE; /* Sensor GND*/
	gCsr_tMsg4C0SendToOpus.boPin103Fault = u16BloInCurGetErrStaAll(&gInCur_tPressureBlockOscillationSensor) != 0; /* PressureBlockOscillationSensor Fault*/
	gCsr_tMsg4C0SendToOpus.boPin127Fault = u16BloInCurGetErrStaAll(&gInCur_tPressureBrakeSensor) != 0; /* PressureBrakeSensor Fault*/
	gCsr_tMsg4C0SendToOpus.boPin104Fault = u16BloInCurGetErrStaAll(&gInCur_tTemperatureTransmissionSensor) != 0; /* TemperatureTransmissionSensor Fault*/
	gCsr_tMsg4C0SendToOpus.boPin128Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tAruRadio1Contact) != 0; /* AruRadio1Contact Fault*/
	gCsr_tMsg4C0SendToOpus.boPin105Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tAruRadio2Contact) != 0; /* AruRadio2Contact Fault*/
	gCsr_tMsg4C0SendToOpus.boPin129Fault = u16BloInCurGetErrStaAll(&gInCur_tElectricPumpPressure) != 0; /*Pression pompe électrique en défaut GREEN*/
	gCsr_tMsg4C0SendToOpus.boPin106Fault = FALSE; /* Not used*/
	gCsr_tMsg4C0SendToOpus.boPin130Fault = FALSE; /* Not used*/
	gCsr_tMsg4C0SendToOpus.boPin107Fault = u16BloSwiDblNoNcGetErrStaAll(&gSwiDblNoNc_tFrameRotationSensor1) != 0; /* FrameRotationSensor1 Fault*/
	gCsr_tMsg4C0SendToOpus.boPin131Fault = u16BloSwiDblNcNoGetErrStaAll(&gSwiDblNcNo_tDownOscillantAxle) != 0; /* DownOscillantAxle Fault*/
	gCsr_tMsg4C0SendToOpus.boPin108Fault = u16BloSwiDblNcNoGetErrStaAll(&gSwiDblNcNo_tDownFixeAxle) != 0; /* DownFixeAxle Fault*/
	gCsr_tMsg4C0SendToOpus.boPin132Fault = u16BloSwiNcGetErrStaAll(&gSwiNc_tUpOscillantAxle) != 0; /* UpOscillantAxle Fault*/
	gCsr_tMsg4C0SendToOpus.boPin109Fault = u16BloSwiNcGetErrStaAll(&gSwiNc_tUpFixeAxle) != 0; /* UpFixeAxle Fault*/
	gCsr_tMsg4C0SendToOpus.boPin133Fault = u16BloSwiDblNoNcGetErrStaAll(&gSwiDblNoNc_tFrameRotationSensor1) != 0; /* FrameRotationSensor1 Fault*/
	gCsr_tMsg4C0SendToOpus.boPin110Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tRailHookSensor) != 0; /* RailHookSensor Fault*/
	gCsr_tMsg4C0SendToOpus.boPin134Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tInductiveRailSensor) != 0; /* InductiveRailSensor Fault*/
	gCsr_tMsg4C0SendToOpus.boPin111Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tCenteredTurret) != 0; /* CenteredTurret Fault*/
	gCsr_tMsg4C0SendToOpus.boPin135Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tWorkKeyTrackSide) != 0; /* WorkKeyTrackSide Fault*/
	gCsr_tMsg4C0SendToOpus.boPin112Fault = u16BloSwiDblNoNcGetErrStaAll(&gSwiDblNoNc_tFrameRotationSensor2) != 0; /* FrameRotationSensor2 Fault*/
	gCsr_tMsg4C0SendToOpus.boPin136Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tWorkKeyBilateral) != 0; /* WorkKeyBilateral Fault*/
	gCsr_tMsg4C0SendToOpus.boPin113Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tWorkKeyCentred) != 0; /* WorkKeyCentred Fault*/
	gCsr_tMsg4C0SendToOpus.boPin137Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tAbutmentTurretTrackSide) != 0; /* AbutmentTurretTrackSide Fault*/
	gCsr_tMsg4C0SendToOpus.boPin114Fault = u16BloSwiDblNoNcGetErrStaAll(&gSwiDblNoNc_tFrameRotationSensor2) != 0; /* FrameRotationSensor2 Fault*/
	gCsr_tMsg4C0SendToOpus.boPin138Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tAbutmentTurretCentredSide) != 0; /* AbutmentTurretCentredSide Fault*/
	gCsr_tMsg4C0SendToOpus.boPin115Fault = u16BloInFreqGetErrStaAll(&gInFreq_tOscillantAxleSpeedSensor) != 0; /* OscillantAxleSpeedSensor Fault*/
	gCsr_tMsg4C0SendToOpus.boPin139Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tOscillantAxleSpeedSensorDir) != 0; /* OscillantAxleSpeedSensorDir Fault*/
	gCsr_tMsg4C0SendToOpus.boPin116Fault = u16BloInFreqGetErrStaAll(&gInFreq_tFixeAxleSpeedSensor) != 0; /* FixeAxleSpeedSensor Fault*/
	gCsr_tMsg4C0SendToOpus.boPin140Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tFixeAxleSpeedSensorDir) != 0; /* FixeAxleSpeedSensorDir Fault*/
	gCsr_tMsg4C0SendToOpus.boPin117Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tTrailerGache) != 0; /* TrailerGache Fault*/
	gCsr_tMsg4C0SendToOpus.boPin122Fault = u16BloSwiDblNcNoGetErrStaAll(&gSwiDblNcNo_tDownOscillantAxle) != 0; // DownOscillantAxle Fault
	gCsr_tMsg4C0SendToOpus.boPin146Fault = u16BloSwiDblNcNoGetErrStaAll(&gSwiDblNcNo_tDownFixeAxle) != 0; // DownFixeAxle Fault
	gCsr_tMsg4C0SendToOpus.boPin123Fault = FALSE; /* Not used*/
	gCsr_tMsg4C0SendToOpus.boPin147Fault = FALSE; /* Not used*/
	gCsr_tMsg4C0SendToOpus.boPin124Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tAru1Contact) != 0; /* Aru1Contact Fault*/
	gCsr_tMsg4C0SendToOpus.boPin148Fault = u16BloSwiNoGetErrStaAll(&gSwiNo_tAru2Contact) != 0; /* Aru2Contact Fault*/
	gCsr_tMsg4C0SendToOpus.boPin153Fault = gDig_tEvDeflectorTransmission.tOut.ePinSta != 0; /* EvDeflectorTransmission Fault*/
	gCsr_tMsg4C0SendToOpus.boPin177Fault = gDig_tEvUnBlockOscillationAxle.tOut.ePinSta != 0; /* EvUnBlockOscillationAxle Fault*/
	gCsr_tMsg4C0SendToOpus.boPin156Fault = gDig_tSupplyAnaSensors.tOut.ePinSta != 0; /* SupplyAnaSensors Fault*/
	gCsr_tMsg4C0SendToOpus.boPin180Fault = FALSE; /* Not used*/
	gCsr_tMsg4C0SendToOpus.boPin159Fault = gDig_tEv2DeflectorTransmission.tOut.ePinSta != 0; /* Ev2DeflectorTransmission Fault*/
	gCsr_tMsg4C0SendToOpus.boPin183Fault = FALSE; /* Not used*/
	gCsr_tMsg4C0SendToOpus.boPin186Fault = gDig_tEvParkBrakeAxleOscillant.tOut.ePinSta != 0; /* EvParkBrakeAxleOscillant Fault*/
	gCsr_tMsg4C0SendToOpus.boPin162Fault = gDig_tEvParkBrakeAxleFixe.tOut.ePinSta != 0; /* EvParkBrakeAxleFixe Fault*/
	gCsr_tMsg4C0SendToOpus.boPin189Fault = gDig_tEvServiceBrakeAxleOscillant.tOut.ePinSta != 0; /* EvServiceBrakeAxleOscillant Fault*/
	gCsr_tMsg4C0SendToOpus.boPin165Fault = gDig_tEvServiceBrakeAxleFixe.tOut.ePinSta != 0; /* EvServiceBrakeAxleFixe Fault*/
	gCsr_tMsg4C0SendToOpus.boPin192Fault = FALSE; /* Not used*/
	gCsr_tMsg4C0SendToOpus.boPin168Fault = FALSE; /* Not used*/
	gCsr_tMsg4C0SendToOpus.boPin195Fault = gDig_tEvServiceBrakeTrack.tOut.ePinSta != 0; /* EvServiceBrakeTrack Fault*/
	gCsr_tMsg4C0SendToOpus.boPin171Fault = gDig_tEvPowerReduction.tOut.ePinSta != 0; /* EvPowerReduction Fault*/
	gCsr_tMsg4C0SendToOpus.boPin154Fault = gDig_tNeonLights.tOut.ePinSta != 0; /* NeonLights Fault*/
	gCsr_tMsg4C0SendToOpus.boPin178Fault = FALSE; /* Not used*/
	gCsr_tMsg4C0SendToOpus.boPin157Fault = FALSE; /* Not used*/

	/* affect global variable to Can Msg 5 send to Opus A3*/
	gCsr_tMsg5C0SendToOpus.boPin181Fault = FALSE; /* Not used*/
	gCsr_tMsg5C0SendToOpus.boPin160Fault = gDig_tSupplyRadioReceiver.tOut.ePinSta != 0; /* SupplyRadioReceiver Fault*/
	gCsr_tMsg5C0SendToOpus.boPin184Fault = gDig_tBuzzerLynxMovingMachine.tOut.ePinSta != 0; /* BuzzerLynxMovingMachine Fault*/
	gCsr_tMsg5C0SendToOpus.boPin187Fault = gDig_tEvDevRailElectricMode.tOut.ePinSta != 0; /* Ev Déviateur Rail en mode électrique en défaut*/
	gCsr_tMsg5C0SendToOpus.boPin163Fault = gDig_tKlaxonNeotec.tOut.ePinSta != 0; /* KlaxonNeotec Fault*/
	gCsr_tMsg5C0SendToOpus.boPin190Fault = gDig_tEvUpMeasuringMast.tOut.ePinSta != 0; /* EvUpMeasuringMast Fault*/
	gCsr_tMsg5C0SendToOpus.boPin166Fault = gDig_tEvDownMeasuringMast.tOut.ePinSta != 0; /* EvDownMeasuringMast Fault*/
	gCsr_tMsg5C0SendToOpus.boPin193Fault = gDig_tEvUpAxleOscillant.tOut.ePinSta != 0; /* EvUpAxleOscillant Fault*/
	gCsr_tMsg5C0SendToOpus.boPin169Fault = gDig_tEvDownAxleOscillant.tOut.ePinSta != 0; /* EvDownAxleOscillant Fault*/
	gCsr_tMsg5C0SendToOpus.boPin196Fault = gDig_tEvUpAxleFixe.tOut.ePinSta != 0; /* EvUpAxleFixe Fault*/
	gCsr_tMsg5C0SendToOpus.boPin172Fault = gDig_tEvDownAxleFixe.tOut.ePinSta != 0; /* EvDownAxleFixe Fault*/
	gCsr_tMsg5C0SendToOpus.boPin101Fault = gPro_tEvForwardPump.tOut.ePinStaHs != 0; /* EvForwardPump Fault*/
	gCsr_tMsg5C0SendToOpus.boPin125Fault = gPro_tEvBackwardPump.tOut.ePinStaHs != 0; /* EvBackwardPump Fault*/
	gCsr_tMsg5C0SendToOpus.boPin150Fault = FALSE; /* Not used*/
	gCsr_tMsg5C0SendToOpus.boPin174Fault = FALSE; /* Not used*/
	gCsr_tMsg5C0SendToOpus.boPin102Fault = FALSE; /* Not used*/
	gCsr_tMsg5C0SendToOpus.boPin126Fault = gDig_tRelayEnableBattery.tOut.ePinSta != 0; /* Enable batterie en défaut*/
	gCsr_tMsg5C0SendToOpus.boPin151Fault = FALSE; /* Not used*/
	gCsr_tMsg5C0SendToOpus.boPin175Fault = gDig_tRelayCutOffVariatorElectric.tOut.ePinSta != 0; /* Relais RAZ du variateur électrique*/
	gCsr_tMsg5C0SendToOpus.boPin149Fault = gDig_tWhiteLightAVG.tOut.ePinSta != 0; /* WhiteLightAVG Fault*/
	gCsr_tMsg5C0SendToOpus.boPin173Fault = gDig_tWhiteLightAVD.tOut.ePinSta != 0; /* WhiteLightAVD Fault*/
	gCsr_tMsg5C0SendToOpus.boPin152Fault = gDig_tRedLightAVG.tOut.ePinSta != 0; /* RedLightAVG Fault*/
	gCsr_tMsg5C0SendToOpus.boPin176Fault = gDig_tRedLightAVD.tOut.ePinSta != 0; /* RedLightAVD Fault*/
	gCsr_tMsg5C0SendToOpus.boPin155Fault = gDig_tWhiteLightARG.tOut.ePinSta != 0; /* WhiteLightARG Fault*/
	gCsr_tMsg5C0SendToOpus.boPin179Fault = gDig_tWhiteLightARD.tOut.ePinSta != 0; /* WhiteLightARD Fault*/
	gCsr_tMsg5C0SendToOpus.boPin158Fault = gDig_tRedLightARG.tOut.ePinSta != 0; /* RedLightARG Fault*/
	gCsr_tMsg5C0SendToOpus.boPin182Fault = gDig_tRedLightARD.tOut.ePinSta != 0; /* RedLightARD Fault*/
	gCsr_tMsg5C0SendToOpus.boPin251Fault = gDig_tReturnLowSideEvForwardPump.tOut.ePinSta != 0; /* ReturnLowSideEvForwardPump Fault*/
	gCsr_tMsg5C0SendToOpus.boPin238Fault = gDig_tReturnLowSideEvBackwardPump.tOut.ePinSta != 0; /* ReturnLowSideEvBackwardPump Fault*/
	gCsr_tMsg5C0SendToOpus.boPin252Fault = gDig_tPvgRightTrackLowside.tOut.ePinSta != 0; /* PvgLeftTrackLowside Fault*/
	gCsr_tMsg5C0SendToOpus.boPin239Fault = gDig_tPvgRightTrackLowside.tOut.ePinSta != 0; /* PvgRightTrackLowside Fault*/
	gCsr_tMsg5C0SendToOpus.boPin253Fault = FALSE; /* Not used*/
	gCsr_tMsg5C0SendToOpus.boPin240Fault = FALSE; /* Not used*/
	gCsr_tMsg5C0SendToOpus.boPin254Fault = FALSE; /* Not used*/
	gCsr_tMsg5C0SendToOpus.boPin241Fault = FALSE; /* Not used*/
	gCsr_tMsg5C0SendToOpus.boPin161Fault = gOutVoltPro_tPvgLeftTrack.tOut.ePinState != 0; /* PvgLeftTrack Fault*/
	gCsr_tMsg5C0SendToOpus.boPin185Fault = gOutVoltPro_tPvgRightTrack.tOut.ePinState != 0; /* PvgRightTrack Fault*/
	gCsr_tMsg5C0SendToOpus.boPin188Fault = gDig_tSupplyPvgLeftTrack.tOut.ePinSta != 0; /* SupplyPvgLeftTrack Fault*/
	gCsr_tMsg5C0SendToOpus.boPin164Fault = gDig_tSupplyPvgRightTrack.tOut.ePinSta != 0; /* SupplyPvgRightTrack Fault*/
	gCsr_tMsg5C0SendToOpus.boPin191Fault = gOutVoltPro_tPvgTransRailElectric.tOut.ePinState != 0; /*PvgTransRailElectric Fault*/
	gCsr_tMsg5C0SendToOpus.boPin167Fault = FALSE; /* Not used*/
	gCsr_tMsg5C0SendToOpus.boPin194Fault = gDig_tWhiteTrailerLights.tOut.ePinSta != 0; /* WhiteTrailerLights Fault*/
	gCsr_tMsg5C0SendToOpus.boPin170Fault = gDig_tRedTrailerLights.tOut.ePinSta != 0; /* RedTrailerLights Fault*/

	if(gDb_tRamSelectControlPost.eSelectedControlPost == GE_ECONTROLPOST_16BIT)
		gCsr_tMsg5C0SendToOpus.u8gSelectedControlPost =	255;
	else
		gCsr_tMsg5C0SendToOpus.u8gSelectedControlPost =	(TUint8)gDb_tRamSelectControlPost.eSelectedControlPost;

	/* affect global variable to Can Msg 6 send to Opus A3*/
	gCsr_tMsg6C0SendToOpus.boPin107 = gDb_tRamEcuInputsC0.eFrameRotationSensor1State == GE_DI_ON;
	gCsr_tMsg6C0SendToOpus.boPin131 = gDb_tRamEcuInputsC0.eDownAxleOscillantState == GE_DI_ON;
	gCsr_tMsg6C0SendToOpus.boPin108 = gDb_tRamEcuInputsC0.eDownAxleFixeState == GE_DI_ON;
	gCsr_tMsg6C0SendToOpus.boPin132 = gDb_tRamEcuInputsC0.eUpAxleOscillantState == GE_DI_ON;
	gCsr_tMsg6C0SendToOpus.boPin109 = gDb_tRamEcuInputsC0.eUpAxleFixeState == GE_DI_ON;
	gCsr_tMsg6C0SendToOpus.boPin133 = gDb_tRamEcuInputsC0.eFrameRotationSensor1State == GE_DI_ON;
	gCsr_tMsg6C0SendToOpus.boPin110 = gDb_tRamEcuInputsC0.eRailHookSensorState == GE_DI_ON;
	gCsr_tMsg6C0SendToOpus.boPin134 = gDb_tRamEcuInputsC0.eInductiveRailSensorState == GE_DI_ON;
	gCsr_tMsg6C0SendToOpus.boPin111 = gDb_tRamEcuInputsC0.eCenteredTurretState == GE_DI_ON;
	gCsr_tMsg6C0SendToOpus.boPin135 = gDb_tRamEcuInputsC0.eWorkKeyTrackSideState == GE_DI_ON;
	gCsr_tMsg6C0SendToOpus.boPin112 = gDb_tRamEcuInputsC0.eFrameRotationSensor2State == GE_DI_ON;
	gCsr_tMsg6C0SendToOpus.boPin136 = gDb_tRamEcuInputsC0.eWorkKeyBilateralState == GE_DI_ON;
	gCsr_tMsg6C0SendToOpus.boPin113 = gDb_tRamEcuInputsC0.eWorkKeyCentredState == GE_DI_ON;
	gCsr_tMsg6C0SendToOpus.boPin137 = gDb_tRamEcuInputsC0.eAbutmentTurretTrackSideState == GE_DI_ON;
	gCsr_tMsg6C0SendToOpus.boPin114 = gDb_tRamEcuInputsC0.eFrameRotationSensor2State == GE_DI_ON;
	gCsr_tMsg6C0SendToOpus.boPin138 = gDb_tRamEcuInputsC0.eAbutmentTurretCentredSideState == GE_DI_ON;
	gCsr_tMsg6C0SendToOpus.boPin140 = gDb_tRamEcuInputsC0.eFixeAxleSpeedSensorDirState == GE_DI_ON;
	gCsr_tMsg6C0SendToOpus.boPin117 = gDb_tRamEcuInputsC0.eTrailerGacheState == GE_DI_ON;
	gCsr_tMsg6C0SendToOpus.boPin141 = gDb_tRamEcuInputsC0.eMeasuringMastSensorFoldedState == GE_DI_ON;
	gCsr_tMsg6C0SendToOpus.boPin122 = gDb_tRamEcuInputsC0.eDownAxleOscillantState == GE_DI_ON;
	gCsr_tMsg6C0SendToOpus.boPin146 = gDb_tRamEcuInputsC0.eDownAxleFixeState == GE_DI_ON;
	gCsr_tMsg6C0SendToOpus.boPin123 = FALSE; /* Not used*/
	gCsr_tMsg6C0SendToOpus.boPin147 = FALSE; /* Not used*/
	gCsr_tMsg6C0SendToOpus.boPin124 = gDb_tRamEcuInputsC0.eAru1ContactState == GE_DI_ON;
	gCsr_tMsg6C0SendToOpus.boPin148 = gDb_tRamEcuInputsC0.eAru2ContactState == GE_DI_ON;
	gCsr_tMsg6C0SendToOpus.boPin153 = gDig_tEvDeflectorTransmission.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin177 = gDig_tEvUnBlockOscillationAxle.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin156 = gDig_tSupplyAnaSensors.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin159 = gDig_tEv2DeflectorTransmission.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin186 = gDig_tEvParkBrakeAxleOscillant.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin162 = gDig_tEvParkBrakeAxleFixe.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin189 = gDig_tEvServiceBrakeAxleOscillant.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin165 = gDig_tEvServiceBrakeAxleFixe.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin195 = gDig_tEvServiceBrakeTrack.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin171 = gDig_tEvPowerReduction.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin154 = gDig_tNeonLights.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin160 = gDig_tSupplyRadioReceiver.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin184 = gDig_tBuzzerLynxMovingMachine.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin163 = gDig_tKlaxonNeotec.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin190 = gDig_tEvUpMeasuringMast.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin166 = gDig_tEvDownMeasuringMast.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin193 = gDig_tEvUpAxleOscillant.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin169 = gDig_tEvDownAxleOscillant.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin196 = gDig_tEvUpAxleFixe.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin172 = gDig_tEvDownAxleFixe.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin149 = gDig_tWhiteLightAVG.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin173 = gDig_tWhiteLightAVD.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin152 = gDig_tRedLightAVG.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin176 = gDig_tRedLightAVD.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin155 = gDig_tWhiteLightARG.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin179 = gDig_tWhiteLightARD.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin158 = gDig_tRedLightARG.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin182 = gDig_tRedLightARD.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin252 = gDig_tPvgLeftTrackLowside.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin239 = gDig_tPvgRightTrackLowside.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin188 = gDig_tSupplyPvgLeftTrack.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin164 = gDig_tSupplyPvgRightTrack.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin191 = gDb_tRamEcuInputsC0.eFaultPvgLeftTrakState == GE_DI_ON;
	gCsr_tMsg6C0SendToOpus.boPin167 = gDb_tRamEcuInputsC0.eFaultPvgRightTrakState == GE_DI_ON;
	gCsr_tMsg6C0SendToOpus.boPin194 = gDig_tWhiteTrailerLights.tOut.eValSta == DIG_STA_ON;
	gCsr_tMsg6C0SendToOpus.boPin170 = gDig_tRedTrailerLights.tOut.eValSta == DIG_STA_ON;

	/* affect global variable to Can Msg 7 send to Opus A3*/
	gCsr_tMsg7C0SendToOpus.boPin136_48XSFault = FALSE; /* Alim. capteur échelle repliée Fault*/
	gCsr_tMsg7C0SendToOpus.boPin148_48XSFault = FALSE; /* Not used*/
	gCsr_tMsg7C0SendToOpus.boPin135_48XSFault = FALSE; /* Alim. capt. panier / pend. / assiette Fault*/
	gCsr_tMsg7C0SendToOpus.boPin147_48XSFault = FALSE; /* Not used*/
	gCsr_tMsg7C0SendToOpus.boPin269_48XSFault = FALSE; /* Not used*/
	gCsr_tMsg7C0SendToOpus.boPin118_48XSFault = FALSE; /* Voyant défaut moteur Fault*/
	gCsr_tMsg7C0SendToOpus.boPin106_48XSFault = FALSE; /* Voyant surcharge Fault*/
	gCsr_tMsg7C0SendToOpus.boPin117_48XSFault = FALSE; /*  Fault*/
	gCsr_tMsg7C0SendToOpus.boPin105_48XSFault = FALSE; /* Buzzer Fault*/
	gCsr_tMsg7C0SendToOpus.boPin116_48XSFault = FALSE; /*  Fault*/
	gCsr_tMsg7C0SendToOpus.boPin104_48XSFault = FALSE; /* Voyant préchauffage Fault*/
	gCsr_tMsg7C0SendToOpus.boPin115_48XSFault = FALSE; /* Voyant défaut dévers Fault*/
	gCsr_tMsg7C0SendToOpus.boPin103_48XSFault = FALSE; /* Voyant gasoil Fault*/
	gCsr_tMsg7C0SendToOpus.boPin120_48XSFault = FALSE; /* Feux blancs (x2) Fault*/
	gCsr_tMsg7C0SendToOpus.boPin108_48XSFault = FALSE; /* Feux rouge (x2) Fault*/
	gCsr_tMsg7C0SendToOpus.boPin119_48XSFault = FALSE; /*  Fault*/
	gCsr_tMsg7C0SendToOpus.boPin107_48XSFault = FALSE; /*  Fault*/
	gCsr_tMsg7C0SendToOpus.boPin144_48XSFault = FALSE; /* Bouton montée inclinaison panier Fault*/
	gCsr_tMsg7C0SendToOpus.boPin132_48XSFault = FALSE; /* Bouton descente inclinaison panier Fault*/
	gCsr_tMsg7C0SendToOpus.boPin143_48XSFault = FALSE; /* Bouton montée pendulaire Fault*/
	gCsr_tMsg7C0SendToOpus.boPin131_48XSFault = FALSE; /* Bouton descente pendulaire Fault*/
	gCsr_tMsg7C0SendToOpus.boPin142_48XSFault = FALSE; /* Bouton rotation panier antihoraire Fault*/
	gCsr_tMsg7C0SendToOpus.boPin130_48XSFault = FALSE; /* Bouton rotation panier horaire Fault*/
	gCsr_tMsg7C0SendToOpus.boPin141_48XSFault = FALSE; /* Surcharge 1 NC Fault*/
	gCsr_tMsg7C0SendToOpus.boPin129_48XSFault = FALSE; /* Surcharge 2 NC Fault*/
	gCsr_tMsg7C0SendToOpus.boPin152_48XSFault = FALSE; /* Capteur panier nacelle côté droit NC Fault*/
	gCsr_tMsg7C0SendToOpus.boPin140_48XSFault = FALSE; /* Capteur panier nacelle côté droit NO Fault*/
	gCsr_tMsg7C0SendToOpus.boPin151_48XSFault = FALSE; /* Capt. panier nacelle côté gauche NC Fault*/
	gCsr_tMsg7C0SendToOpus.boPin139_48XSFault = FALSE; /* Capt. panier nacelle côté gauche NO Fault*/
	gCsr_tMsg7C0SendToOpus.boPin150_48XSFault = FALSE; /* Capteur pendulaire secteur bas NC Fault*/
	gCsr_tMsg7C0SendToOpus.boPin138_48XSFault = FALSE; /* Capteur assiette secteur haut Fault*/
	gCsr_tMsg7C0SendToOpus.boPin149_48XSFault = FALSE; /* Capteur échelle repliée Fault*/
	gCsr_tMsg7C0SendToOpus.boPin137_48XSFault = FALSE; /* Safety Man System Fault*/
	gCsr_tMsg7C0SendToOpus.boPin126_48XSFault = FALSE; /* Axe joystick bras delta Fault*/
	gCsr_tMsg7C0SendToOpus.boPin114_48XSFault = FALSE; /* Axe joystick bras flèche Fault*/
	gCsr_tMsg7C0SendToOpus.boPin125_48XSFault = FALSE; /* Axe joystick bras télescope Fault*/
	gCsr_tMsg7C0SendToOpus.boPin113_48XSFault = FALSE; /* Axe joystick rotation tourelle Fault*/
	gCsr_tMsg7C0SendToOpus.boPin124_48XSFault = FALSE; /* Axe joystick avance Fault*/
	gCsr_tMsg7C0SendToOpus.boPin112_48XSFault = FALSE; /* Réarmement Safety Man System Fault*/
	gCsr_tMsg7C0SendToOpus.boPin123_48XSFault = FALSE; /* Butée nacelle travail coté piste Fault*/
	gCsr_tMsg7C0SendToOpus.boPin111_48XSFault = FALSE; /* Butée nacelle travail mode axé Fault*/
	gCsr_tMsg7C0SendToOpus.boPin133_48XSFault = FALSE; /* Masse joystick bras delta / télescope Fault*/
	gCsr_tMsg7C0SendToOpus.boPin134_48XSFault = FALSE; /* Masse joystick bras flèche / tourelle Fault*/
	gCsr_tMsg7C0SendToOpus.boPin145_48XSFault = FALSE; /* Masse joystick avance Fault*/
	gCsr_tMsg7C0SendToOpus.boPin146_48XSFault = FALSE; /* Masse Safety Man System Fault*/
	gCsr_tMsg7C0SendToOpus.boPin263_48XSFault = FALSE; /* Joystick bras delta / télescope centré Fault*/
	gCsr_tMsg7C0SendToOpus.boPin256_48XSFault = FALSE; /* Joystick bras flèche / tourelle centré Fault*/
	gCsr_tMsg7C0SendToOpus.boPin262_48XSFault = FALSE; /* Joystick avance centré Fault*/
	gCsr_tMsg7C0SendToOpus.boPin255_48XSFault = FALSE; /* Pédale homme mort Fault*/
	gCsr_tMsg7C0SendToOpus.boPin261_48XSFault = FALSE; /* Capteur présence dans nacelle 1 Fault*/
	gCsr_tMsg7C0SendToOpus.boPin254_48XSFault = FALSE; /* Capteur présence dans nacelle 2 Fault*/
	gCsr_tMsg7C0SendToOpus.boPin260_48XSFault = FALSE; /* Gâchette Fault*/
	gCsr_tMsg7C0SendToOpus.boPin253_48XSFault = FALSE; /* Klaxon Fault*/
	gCsr_tMsg7C0SendToOpus.boPin270_48XSFault = FALSE; /* Masse boutons élévation Fault*/
	gCsr_tMsg7C0SendToOpus.boPin276_48XSFault = FALSE; /* Masse capteur surcharge 1 Fault*/
	gCsr_tMsg7C0SendToOpus.boPin277_48XSFault = FALSE; /* Masse capteur surcharge 2 Fault*/
	gCsr_tMsg7C0SendToOpus.boPin275_48XSFault = FALSE; /* Bouton stop moteur Fault*/
	gCsr_tMsg7C0SendToOpus.boPin268_48XSFault = FALSE; /* Clé autorisation travail Fault*/
	gCsr_tMsg7C0SendToOpus.boPin274_48XSFault = FALSE; /* Bouton étalonnage joysticks Fault*/
	gCsr_tMsg7C0SendToOpus.boPin267_48XSFault = FALSE; /* Capteur portillon fermé Fault*/

	/* affect global variable to Can Msg 8 send to Opus A3*/
	gCsr_tMsg8C0SendToOpus.boPin144_48XS = gDb_tRam48XsInputsC0.boUpInclinaisonBasketButton; /*Bouton montée inclinaison panier State*/
	gCsr_tMsg8C0SendToOpus.boPin132_48XS = gDb_tRam48XsInputsC0.boDownInclinaisonBasketButton; /*Bouton descente inclinaison panier State*/
	gCsr_tMsg8C0SendToOpus.boPin143_48XS = gDb_tRam48XsInputsC0.boUpPendularButton; /*Bouton montée pendulaire State*/
	gCsr_tMsg8C0SendToOpus.boPin131_48XS = gDb_tRam48XsInputsC0.boDownPendularButton; /*Bouton descente pendulaire State*/
	gCsr_tMsg8C0SendToOpus.boPin142_48XS = gDb_tRam48XsInputsC0.boRotationCtClockwiseBasketButton; /*Bouton rotation panier antihoraire State*/
	gCsr_tMsg8C0SendToOpus.boPin130_48XS = gDb_tRam48XsInputsC0.boRotationClockwiseBasketButton; /*Bouton rotation panier horaire State*/
	gCsr_tMsg8C0SendToOpus.boPin141_48XS = gDb_tRam48XsInputsC0.boOverload1; /*Surcharge 1 NC State*/
	gCsr_tMsg8C0SendToOpus.boPin129_48XS = gDb_tRam48XsInputsC0.boOverload2; /*Surcharge 2 NC State*/
	gCsr_tMsg8C0SendToOpus.boPin152_48XS = gDb_tRam48XsInputsC0.boNacelleBasketRightSideSensor1; /*Capteur panier nacelle côté droit NC State*/
	gCsr_tMsg8C0SendToOpus.boPin140_48XS = gDb_tRam48XsInputsC0.boNacelleBasketRightSideSensor2; /*Capteur panier nacelle côté droit NO State*/
	gCsr_tMsg8C0SendToOpus.boPin151_48XS = gDb_tRam48XsInputsC0.boNacelleBasketLeftSideSensor1; /*Capt. panier nacelle côté gauche NC State*/
	gCsr_tMsg8C0SendToOpus.boPin139_48XS = gDb_tRam48XsInputsC0.boNacelleBasketLeftSideSensor2; /*Capt. panier nacelle côté gauche NO State*/
	gCsr_tMsg8C0SendToOpus.boPin150_48XS = gDb_tRam48XsInputsC0.boLowSectorPendularSensor; /*Capteur pendulaire secteur bas NC State*/
	gCsr_tMsg8C0SendToOpus.boPin138_48XS = gDb_tRam48XsInputsC0.boHighSectorPlateSensor; /*Capteur assiette secteur haut State*/
	gCsr_tMsg8C0SendToOpus.boPin149_48XS = gDb_tRam48XsInputsC0.boFoldedLadderSensor; /*Capteur échelle repliée State*/
	gCsr_tMsg8C0SendToOpus.boPin263_48XS = gDb_tRam48XsInputsC0.boDeltaArmJystckCenteredTelescope; /*Joystick bras delta / télescope centré State*/
	gCsr_tMsg8C0SendToOpus.boPin256_48XS = gDb_tRam48XsInputsC0.boArrowJoystickCenteredTurret; /*Joystick bras flèche / tourelle centré State*/
	gCsr_tMsg8C0SendToOpus.boPin262_48XS = gDb_tRam48XsInputsC0.boCenteredAdvanceJoystick; /*Joystick avance centré State*/
	gCsr_tMsg8C0SendToOpus.boPin255_48XS = gDb_tRam48XsInputsC0.boDeadManPedal; /*Pédale homme mort State*/
	gCsr_tMsg8C0SendToOpus.boPin261_48XS = gDb_tRam48XsInputsC0.boPressenceInNacelleSensor1; /*Capteur présence dans nacelle 1 State*/
	gCsr_tMsg8C0SendToOpus.boPin254_48XS = gDb_tRam48XsInputsC0.boPressenceInNacelleSensor2; /*Capteur présence dans nacelle 2 State*/
	gCsr_tMsg8C0SendToOpus.boPin260_48XS = gDb_tRam48XsInputsC0.boGachette; /*Gâchette State*/
	gCsr_tMsg8C0SendToOpus.boPin253_48XS = gDb_tRam48XsInputsC0.boKlaxon; /*Klaxon State*/
	gCsr_tMsg8C0SendToOpus.boPin275_48XS = gDb_tRam48XsInputsC0.boStopMotorButton; /*Bouton stop moteur State*/
	gCsr_tMsg8C0SendToOpus.boPin268_48XS = gDb_tRam48XsInputsC0.boAuthorizationWorkKey; /*Clé autorisation travail State*/
	gCsr_tMsg8C0SendToOpus.boPin274_48XS = gDb_tRam48XsInputsC0.boEtallonnageJoystickButton; /*Bouton étalonnage joysticks State*/
	gCsr_tMsg8C0SendToOpus.boPin267_48XS = gDb_tRam48XsInputsC0.boClosePortillonSensor; /*Capteur portillon fermé State*/
	gCsr_tMsg8C0SendToOpus.u16gPvgLeftTrackVoltage = gDb_tRamEcuOutputsC0.u16PvgLeftTrackVoltage;
	gCsr_tMsg8C0SendToOpus.u16gPvgRightTrackVoltage = gDb_tRamEcuOutputsC0.u16PvgRightTrackVoltage;

	/* affect global variable to Can Msg 9 send to Opus A3*/
	gCsr_tMsg9C0SendToOpus.i16gSlopeLongAngle = gDb_tRamCanSensorC0.i16SlopeLongAngleValue;
	gCsr_tMsg9C0SendToOpus.i16gSlopeTransAngle = gDb_tRamCanSensorC0.i16SlopeTransAngleValue;
	gCsr_tMsg9C0SendToOpus.i16gSlopeResultAngle = (TInt16)gDb_tRamCanSensorC0.u16SelectedSlopeAngle;
	gCsr_tMsg9C0SendToOpus.i16gTemperatureTransmissionValue =gDb_tRamEcuInputsC0.i16TemperatureTransmissionValue;

	/* affect global variable to Can Msg 10 send to Opus A3*/
	gCsr_tMsg10C0SendToOpus.u16gForwardPumpCurrent = gDb_tRamEcuOutputsC0.u16ForwardPumpCurrent;
	gCsr_tMsg10C0SendToOpus.u16gBackwardPumpCurrent = gDb_tRamEcuOutputsC0.u16BackwardPumpCurrent;
	gCsr_tMsg10C0SendToOpus.i16gTransmis1PressureSensorValue = gDb_tRamEcuC0RcvFromC1.i16Transmission1Pressure;
	gCsr_tMsg10C0SendToOpus.i16gTransmis2PressureSensorValue = gDb_tRamEcuC0RcvFromC1.i16Transmission2Pressure;

	/*GREEN*/
	gCsr_tMsg11C0SendToOpus.boPictoReloadbatteryImpossible = gDb_tRamGreenEffC0.boPictoReloadBatteryImpossible;
	gCsr_tMsg11C0SendToOpus.boBatteryLowLevel = gDb_tRamGreenEffC0.boBatteryLowLevel;
	gCsr_tMsg11C0SendToOpus.boVoltageDcConverterFault = gDb_tRamGreenEffC0.boVoltageDcConverterFault;
	gCsr_tMsg11C0SendToOpus.boBattErrorCode1 = gDb_tRamGreenEffC0.boBattErrorCode1;
	gCsr_tMsg11C0SendToOpus.boActiveFaultRazDmc  = gDb_tRamDMC_C0.boActiveFaultRazDmc;
	gCsr_tMsg11C0SendToOpus.u8Batt_Soc = gDb_tRamFlashBatteryC0.u8Batt_Soc;
	gCsr_tMsg11C0SendToOpus.i16Motor_Rpm = gDb_tRamDMC_C0.i16MS_ActualSpeedRpm;


    /* ============================================================================================= */
  	/* 							Datalogger															 */
  	/* ============================================================================================= */
	vDataLogger();
	/* management of the event transmission of the datalogger message, check if rising edge of SendEvent Cmd*/
	if(bi2SigTrigger(&tTriggerSendEventDataloggerMsg,gDb_tRamGeneralC0.boSendEventDataloggerMessage == TRUE))
	{
		/* Send now the send*/
		gCSnd_tDatalogger.tInp.boSndNow = TRUE;
	}


    /* ============================================================================================= */
  	/* 							HMG																	 */
  	/* ============================================================================================= */
	gCsr_tHMG_1.u8Byte0 = u8CastI16(((gCsr_tMsg3C0SendToEvision7.u16gFrontSpeedRailWayAxle/10) & 0x00FF)); //vitesse essieu oscillant en 10eme kmh
	gCsr_tHMG_1.u8Byte1 = u8CastI16(((gCsr_tMsg3C0SendToEvision7.u16gFrontSpeedRailWayAxle/10) & 0xFF00)/256); //vitesse essieu oscillant en 10eme kmh

	gCsr_tHMG_1.u8Byte2 = u8CastI16(((gCsr_tMsg3C0SendToEvision7.u16gBackSpeedRailWayAxle/10) & 0x00FF)); //vitesse essieu fixe en 10eme kmh
	gCsr_tHMG_1.u8Byte3 = u8CastI16(((gCsr_tMsg3C0SendToEvision7.u16gBackSpeedRailWayAxle/10) & 0xFF00)/256); //vitesse essieu fixe en 10eme kmh


	TInt16 i16TemperatureTransmissionHMG = 0;
	i16TemperatureTransmissionHMG = gDb_tRamEcuInputsC0.i16TemperatureTransmissionValue*10; //Temperature en 10eme pour l'HMG
	gCsr_tHMG_1.u8Byte4 = u8CastI16((i16TemperatureTransmissionHMG & 0x00FF));
	gCsr_tHMG_1.u8Byte5 = u8CastI16((i16TemperatureTransmissionHMG & 0xFF00)/256);

	TInt16 i16MotorSpeedCmdJ1939 = 0;
	i16MotorSpeedCmdJ1939 = -gDb_tRamEcuC0RcvFromC1.i16MotorspeedCmdJ1939; //CONSIGNE RPM THERMIQUE
	gCsr_tHMG_1.u8Byte6 = u8CastI16((i16MotorSpeedCmdJ1939 & 0x00FF));
	gCsr_tHMG_1.u8Byte7 = u8CastI16((i16MotorSpeedCmdJ1939 & 0xFF00)/256);



	gCsr_tHMG_2.u8Byte0 = u8CastI16((gDb_tRamEcuInputsC0.i16ElectricPumpPressureValue & 0x00FF)); //gDb_tRamEcuInputsC0.i16ElectricPumpPressureValue
	gCsr_tHMG_2.u8Byte1 = u8CastI16((gDb_tRamEcuInputsC0.i16ElectricPumpPressureValue & 0xFF00)/256); //gDb_tRamEcuInputsC0.i16ElectricPumpPressureValue
	gCsr_tHMG_2.u8Byte2 = u8CastI16((gDb_tRamEcuOutputsC0.u16PvgTransRailElectricVoltage & 0x00FF));//gDb_tRamEcuOutputsC0.u16PvgTransRailElectricVoltage
	gCsr_tHMG_2.u8Byte3 = u8CastI16((gDb_tRamEcuOutputsC0.u16PvgTransRailElectricVoltage & 0xFF00)/256);//gDb_tRamEcuOutputsC0.u16PvgTransRailElectricVoltage
	gCsr_tHMG_2.u8Byte4 = u8CastI16((gDb_tRamEcuOutputsC0.u16PvgTransRailElectricCmd & 0x00FF));//gDb_tRamEcuOutputsC0.u16PvgTransRailElectricCmd
	gCsr_tHMG_2.u8Byte5 = u8CastI16((gDb_tRamEcuOutputsC0.u16PvgTransRailElectricCmd & 0xFF00)/256);//gDb_tRamEcuOutputsC0.u16PvgTransRailElectricCmd
	gCsr_tHMG_2.u8Byte6 = u8CastU16((gDb_tRamDMC_C0.u16BCL_HMI_RegenBattCurLimit & 0x00FF)); //gDb_tRamCurtisControllerC0.u8SendPourcMaxRegenThermic N'existe plus
	gCsr_tHMG_2.u8Byte7 = u8CastU16((gDb_tRamDMC_C0.u16BCL_HMI_RegenBattCurLimit & 0xFF00)/256);


	gCsr_tHMG_3.u8Byte0 = 0;
	gCsr_tHMG_3.u8Byte1 = 1;
	gCsr_tHMG_3.u8Byte2 = 2;
	gCsr_tHMG_3.u8Byte3 = 3;
	gCsr_tHMG_3.u8Byte4 = 4;
	gCsr_tHMG_3.u8Byte5 = 5;
	gCsr_tHMG_3.u8Byte6 = 6;
	gCsr_tHMG_3.u8Byte7 = 7;
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

	/* if current is higher than 0*/
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

	/* if command bool is true*/
	if(boCommand == TRUE)
	{
		/* set command output to ON u16Current*/
		*u16Command = u16Current;
	}
	else
	{
		/* set command output to 0*/
		*u16Command = 0;
	}

	/* if current is higher than 0*/
	if (*u16Command > 0)
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
	ptProOut->tInp.u16Ic = *u16Command;

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
