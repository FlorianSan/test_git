//==================================================================================================
//! @file AlarmManagement.c
//! @brief Management of specific alarms
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 10.12.2018 HYDAC/CK
//! @history: #- CK 04.04.2018 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "AlarmManagement.h"

// GLOBAL VARIABLES DECLARATIONS ==================================================================
//NEOTEC
 TBoolean boPressureBrakeFault; //Global Variable
//NEOTEC

//-----------------------------------------------------------------------------------------------------
//! @brief Alarms management
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 10.12.2018 HYDAC/CK
//!
//! @change  19.02.2018 HYDAC/CK remove release condition ARU radio
//! @change  30.04.2019 NEOTEC/FV supression provisoire car plus rien ne fonctionne
//! @change  27.05.2019 HYDAC/CK	- Slope alarm detect on the processed values
//!									- One speed axle default , change condition according to vitesse.doc
//!									- Two speed axle default , change condition according to vitesse.doc
//! @change  05.06.2019 HYDAC/CK	- add condition supplyPVG == GE_DI_ON for alarme DM_PVG_TRACK_LEFT  DM_PVG_TRACK_RIGHT
//! @change  06.06.2019 HYDAC/CK	- add condition DM_MAT_MEASURE_FAULT emergency message , error code and register != 0
//! @change  12.06.2019 HYDAC/CK 	 add restriced mode RM_COM_CAN_C0_C1_LOSS trigged watchdog
//! @change  24.06.2019 HYDAC/CK 	 delete alarme DM_OPTION_LIGHT_FAULT
//!	@change  24.06.2019 HYDAC/CK     add DM_OVERLOAD_DETECTED_BY_C1 failure
//!	@change  24.06.2019 HYDAC/CK     add condition gDb_tRamBreakInBrakeC0.boBreakInBrakeRunning to DM_SERVICE_BRAKE_PRESSURE_FAULT failure
//!	@change  25.06.2019 HYDAC/CK     add release condition for Ev service brake track fault
//!	@change  25.06.2019 HYDAC/CK     add set condition to failure incosistency NcNo of Frame rotation sensor 2
//!	@change  25.06.2019 HYDAC/CK     add condition DM_MAT_MEASURE_FAULT detect timeout message if the option is selected
//!	@change  26.06.2019 HYDAC/CK     add call block SpecificErrorC0
//!	@change  26.06.2019 HYDAC/CK     rename RC02_ARU_VEHICLE_STOPPED to RC02_ARU_VEHICLE_STOPPED_C0
//!	@change  26.06.2019 HYDAC/CK     add DM_EV_BYPASS_FAULT_BY_C1 failure
//!	@change  10.07.2019 HYDAC/CK  	 add failure 48Xs SpecificErrorC0_6 SpecificErrorC0_7 SpecificErrorC0_8
//!	@change  16.07.2019 HYDAC/CK  	 add failure DM_HEARTBEAT_48XS_DEFAULT_C0 of block SpecificErrorC0_5
//!	@change  22.07.2019 HYDAC/CK  	 add restricted mode RM_COM_CAN_RADIO_LOSS, add set condition SC_SUPPLY_RADIO_ON for timeout failure of radio command, add restricted mode RM_COM_CAN_48XS_LOSS
//! @change  16.12.2019 HYDAC/CK	 Change parameter gDb_tNvParametersC0.u16LimitTresholdAngleRadioControl to gDb_tNvParamSelectControlPost.u16SlopeCrawlerMaxTres for local i16HystTempTrans variable
//!
//!
//! @care
//! @todo
//
//07.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vAlarmsManagement(TVoid)
{
//NEOTEC
	TInt16 i16Thres;
	TInt16 i16HystTempTrans = gDb_tNvParamAlarmC0.u16HystTempTrans; //parametre provisoire
//DEPLACER DANS AppCode.c
////modif provisoire pour vérifier si le moteur est démarrer pour que les pressions soient stables
//	static TUint16 u16cpt =0;
//	TUint16 u16cptmax =125; //125x20ms = 2500ms
//	if(gDb_tRamEcuC0RcvFromC1.i32RegimeMotorAlternatorRpm >= 500)
//	{
//		if (u16cpt>=u16cptmax)
//			u16cpt=u16cptmax;
//		else
//			u16cpt=u16cpt+1;
//	}
//	else if (gDb_tRamEcuC0RcvFromC1.i32RegimeMotorAlternatorRpm < 500)
//		u16cpt=0;
//
//	if ( u16cpt == u16cptmax)
//		gDb_tRamGeneralC0.boEngineRunningStable = TRUE;
//	else
//		gDb_tRamGeneralC0.boEngineRunningStable = FALSE;

//DEPLACER DANS AppCode.c
////modif provisoire pour vérifier si le 48x est démarrer pour que les détections des entrées soient stables
//	static TUint16 u16cpt48x =0;
//	TUint16 u16cptmax48x =250;
//	if(gDb_tRam48XsInputsC0.u16BatterieVoltage48Xs >= 8000)
//	{
//		if (u16cpt48x>=u16cptmax48x)
//			u16cpt48x=u16cptmax48x;
//		else
//			u16cpt48x=u16cpt48x+1;
//	}
//	else if (gDb_tRam48XsInputsC0.u16BatterieVoltage48Xs < 8000)
//		u16cpt48x=0;
//
//	if ( u16cpt48x == u16cptmax48x)
//		gDb_tRamGeneralC0.boRunningStable48XS = TRUE;
//	else
//		gDb_tRamGeneralC0.boRunningStable48XS = FALSE;

//modif provisoire attente la stabilisation des mesures des capteurs analogique à la mise sous tension
	static TBoolean BoPowerStable =FALSE;
	static TUint16 u16cptPower =0;
	TUint16 u16cptPowerMax =125; //125x20ms = 2500ms
	if (u16cptPower < u16cptPowerMax)
		u16cptPower=u16cptPower+1;
	else
		BoPowerStable = TRUE;

	//boTrackStopped
	static TBoolean boTrackStopped  = FALSE;
	if( gDb_tRamGeneralC0.u16EvForwardTrackConsigne == 0
	&& gDb_tRamEcuOutputsC0.u16ForwardPumpCommand == 0
	&& gDb_tRamEcuOutputsC0.u16BackwardPumpCommand == 0
	&& gDb_tRamEcuInputRadioControl.eLeftManipulatorPosition == GE_NEUTRAL
	&& gDb_tRamEcuInputRadioControl.eRightManipulatorPosition == GE_NEUTRAL
	)
		boTrackStopped  = TRUE;
	else
		boTrackStopped  = FALSE;

	//boTemperatureTranSysFault
	static TBoolean boTemperatureTranSysFault = FALSE;
	if(boBloInCurGetErrStaBit(&gInCur_tTemperatureTransmissionSensor,DM_INCUR_SP)
	|| boBloInCurGetErrStaBit(&gInCur_tTemperatureTransmissionSensor,DM_INCUR_SG_OL)
	|| boBloInCurGetErrStaBit(&gInCur_tTemperatureTransmissionSensor,DM_INCUR_PARAM)
	|| boBloInCurGetErrStaBit(&gInCur_tTemperatureTransmissionSensor,DM_INCUR_UNKNOWN)
	)
		boTemperatureTranSysFault = TRUE;
	else
		boTemperatureTranSysFault = FALSE;
//NEOTEC


	/* =============================================================================================================================================== */
	/*													Set condition  Alarm  SpecificErrorC0 											     	       */
	/* =============================================================================================================================================== */
	//-----------------------------------------------------------------------------------------------------
	// DM_WORKMODE_SELETOR
	//-----------------------------------------------------------------------------------------------------

	vBloErrSetInpBit(&gErr_tSpecificErrorC0, DM_WORKMODE_SELETOR,!((gDb_tRamEcuInputsC0.eWorkKeyBilateralState == GE_DI_ON && gDb_tRamEcuInputsC0.eWorkKeyCentredState == GE_DI_OFF && gDb_tRamEcuInputsC0.eWorkKeyTrackSideState == GE_DI_OFF)
			|| (gDb_tRamEcuInputsC0.eWorkKeyBilateralState == GE_DI_OFF && gDb_tRamEcuInputsC0.eWorkKeyCentredState == GE_DI_ON && gDb_tRamEcuInputsC0.eWorkKeyTrackSideState == GE_DI_OFF)
			|| (gDb_tRamEcuInputsC0.eWorkKeyBilateralState == GE_DI_OFF && gDb_tRamEcuInputsC0.eWorkKeyCentredState == GE_DI_OFF && gDb_tRamEcuInputsC0.eWorkKeyTrackSideState == GE_DI_ON)));

	//-----------------------------------------------------------------------------------------------------
	// DM_INC_ABUTMENT_TURRET
	//-----------------------------------------------------------------------------------------------------

	vBloErrSetInpBit(&gErr_tSpecificErrorC0, DM_INC_ABUTMENT_TURRET,gDb_tRamEcuInputsC0.eAbutmentTurretCentredSideState == GE_DI_ON && gDb_tRamEcuInputsC0.eAbutmentTurretTrackSideState == GE_DI_ON);

	//-----------------------------------------------------------------------------------------------------
	// DM_INC_ABUTMENT_NACELLE
	//-----------------------------------------------------------------------------------------------------

	vBloErrSetInpBit(&gErr_tSpecificErrorC0, DM_INC_ABUTMENT_NACELLE,(gDb_tRamGeneralC0.boRunningStable48XS == TRUE && gDb_tNvOptionsC0.boBasketTurretLimitation ==TRUE && (  gDb_tRam48XsInputsC0.boAbutementNacelleTrackSide ==TRUE && gDb_tRam48XsInputsC0.boAbutementNacelleCenteredSide== TRUE)));
//Avant gDb_tRamRailWorkSafetyC0.boTestFranceConfig MODIF FR
	//-----------------------------------------------------------------------------------------------------
	// DM_OSCILLANT_CIRCUIT_FAULT
	//-----------------------------------------------------------------------------------------------------
	// circuit oscillant
	//boPressureOscillantSysFault
	static TBoolean boPressureOscillantSysFault = FALSE;
	if(boBloInCurGetErrStaBit(&gInCur_tPressureBlockOscillationSensor,DM_INCUR_SP)
	|| boBloInCurGetErrStaBit(&gInCur_tPressureBlockOscillationSensor,DM_INCUR_SG_OL)
	|| boBloInCurGetErrStaBit(&gInCur_tPressureBlockOscillationSensor,DM_INCUR_PARAM)
	|| boBloInCurGetErrStaBit(&gInCur_tPressureBlockOscillationSensor,DM_INCUR_UNKNOWN)
	)
		boPressureOscillantSysFault = TRUE;
	else
		boPressureOscillantSysFault = FALSE;

	//boPressureOscFault
	static TBoolean boPressureOscFault = FALSE;
	//Cas moteur thermique deblocage
	if ((gDb_tRamGeneralC0.boEngineRunningStable == TRUE
	&& gDb_tRamEcuOutputsC0.boEvUnBlockOscillationAxleCmdBool == TRUE
	&& (gDb_tRamEcuInputsC0.i16PressureBlockOscillationValue < gDb_tNvParamAlarmC0.u16UnblockOscillationAxlePressure))
	||
	//Cas moteur thermique blocage
	(gDb_tRamGeneralC0.boEngineRunningStable == TRUE
	&& gDb_tRamEcuOutputsC0.boEvUnBlockOscillationAxleCmdBool == FALSE
	&& (gDb_tRamEcuInputsC0.i16PressureBlockOscillationValue > gDb_tNvParamAlarmC0.u16BlockOscillationAxlePressure))
	||
	//Cas moteur electrique deblocage
	(gDb_tRamGeneralC0.boEngineRunningStable == FALSE
	&& gDb_tRamGreenEffC0.boTransRailElectricRampOngoing == TRUE
	&& gDb_tRamGreenEffC0.boTransRailThermiqueRampOngoing == FALSE
	&& gDb_tRamEcuOutputsC0.boEvUnBlockOscillationAxleCmdBool == TRUE
	&& (gDb_tRamEcuInputsC0.i16PressureBlockOscillationValue < gDb_tNvParamAlarmC0.u16UnblockOscillationAxlePressure))
	||
	//Cas moteur electrique blocage
	(gDb_tRamGeneralC0.boEngineRunningStable == FALSE
	&& gDb_tRamGreenEffC0.boTransRailElectricRampOngoing == FALSE
	&& gDb_tRamGreenEffC0.boTransRailThermiqueRampOngoing == FALSE
	&& gDb_tRamEcuOutputsC0.boEvUnBlockOscillationAxleCmdBool == FALSE
	&& (gDb_tRamEcuInputsC0.i16PressureBlockOscillationValue > gDb_tNvParamAlarmC0.u16BlockOscillationAxlePressure))
	||
	boPressureOscillantSysFault == TRUE
	||
	gDb_tRamEcuOutputsC0.eEvUnBlockOscillationAxleState == GE_DIG_ERROR)
		boPressureOscFault = TRUE;
	else
		boPressureOscFault = FALSE;

	vBloErrSetInpBit(&gErr_tSpecificErrorC0, DM_OSCILLANT_CIRCUIT_FAULT,boPressureOscFault);

	//-----------------------------------------------------------------------------------------------------
	// DM_SERVICE_BRAKE_PRESSURE_FAULT
	//-----------------------------------------------------------------------------------------------------
	// control pressure service brake

//	static TBoolean boPressureBrakeFault = FALSE; //Global Variable
	static TBoolean boSetPressureBrakeFault = FALSE;
	static TUint16 u16cptPressureBrakeFault = 0;
	TUint16 u16cpPressureBrakeFaultMax = gDb_tNvParamAlarmC0.u16CptPressureBrakeFaultMax;// Ancien paramètre : u16NvParametersC0_11  !!! ne pas le mettre a 0 !!!

	//Reset
	if(gDb_tRamEcuInputsC0.i32OscillantAxleFrequency == 0
	&& gDb_tRamEcuInputsC0.i32FixeAxleFrequency == 0
	&& gDb_tRamSelectControlPost.boAllNacelleCommandsDisabled == TRUE
	&& gDb_tRamEcuOutputsC0.u16ForwardPumpCommand == 0
	&& gDb_tRamEcuOutputsC0.u16BackwardPumpCommand == 0
	&& gDb_tRam48XsInputsC0.boDeadManPedal == FALSE
	&& gDb_tRam48XsInputsC0.boGachette == FALSE
//NEOTEC IG V2
	&& gDb_tRamEcuInputsC0.i16PressureBrakeSensorValue > gDb_tNvParamAlarmC0.u16MinServiceBrakeFaultPressure
	&& gDb_tRamEcuInputsC0.i16PressureBrakeSensorValue < gDb_tNvParamAlarmC0.u16MaxServiceBrakeFaultPressure
//NEOTEC IG V2//Pour empecher le reset du défaut frein lors d'un arrêt.
	)
		boPressureBrakeFault = FALSE;
		
	//Set
	if (((gDb_tRamEcuInputsC0.i16PressureBrakeSensorValue < gDb_tNvParamAlarmC0.u16MinServiceBrakeFaultPressure)
	|| (gDb_tRamEcuInputsC0.i16PressureBrakeSensorValue > gDb_tNvParamAlarmC0.u16MaxServiceBrakeFaultPressure))
	&& gDb_tRamEvision7C0.bogOffTrackRunInBrakeActivated == FALSE

	)
	{
		boSetPressureBrakeFault = TRUE;
	}
	else
	{
		boSetPressureBrakeFault = FALSE;
	}

	// cpt set default
	if(boSetPressureBrakeFault == TRUE)
	{
		if (u16cptPressureBrakeFault>=u16cpPressureBrakeFaultMax)
			u16cptPressureBrakeFault=u16cpPressureBrakeFaultMax;
		else
			u16cptPressureBrakeFault=u16cptPressureBrakeFault+1;
	}
	else if (boSetPressureBrakeFault == FALSE)
		u16cptPressureBrakeFault=0;

	if ( u16cptPressureBrakeFault == u16cpPressureBrakeFaultMax)
		boPressureBrakeFault = TRUE;

//DEBUG PB TRANS ELECTRIQUE
	gDb_tRamGeneralC0.boRamGeneralNeotecC0_1 = boPressureBrakeFault;
	if(boPressureBrakeFault == TRUE)
		gDb_tRamGeneralC0.u16RamGeneralNeotecC0_3_1 = gDb_tRamGeneralC0.u16RamGeneralNeotecC0_3_1 +1;

	//boPressureBrakeSysFault
	static TBoolean boPressureBrakeSysFault = FALSE;
	if( boBloInCurGetErrStaBit(&gInCur_tPressureBrakeSensor,DM_INCUR_SP)
	|| boBloInCurGetErrStaBit(&gInCur_tPressureBrakeSensor,DM_INCUR_SG_OL)
	|| boBloInCurGetErrStaBit(&gInCur_tPressureBrakeSensor,DM_INCUR_PARAM)
	|| boBloInCurGetErrStaBit(&gInCur_tPressureBrakeSensor,DM_INCUR_UNKNOWN)
	)
		boPressureBrakeSysFault = TRUE;
	else
		boPressureBrakeSysFault = FALSE;


	vBloErrSetInpBit(&gErr_tSpecificErrorC0, DM_SERVICE_BRAKE_PRESSURE_FAULT,((boPressureBrakeFault == TRUE && gDb_tRamGeneralC0.boEngineRunningStable ==	TRUE) || boPressureBrakeSysFault == TRUE));
//NEOTEC

	//-----------------------------------------------------------------------------------------------------
	// DM_HIGH_HYDRAULIC_TEMP_CRAWLER
	//-----------------------------------------------------------------------------------------------------

	static TBoolean boHighHydTempCrawlerActive = FALSE;
	//set
	if( gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_RADIO
	&& ((gDb_tRamEcuInputsC0.i16TemperatureTransmissionValue >= gDb_tNvParamAlarmC0.u16TempTrackOverFaultThres)
	|| boTemperatureTranSysFault == TRUE))
		boHighHydTempCrawlerActive = TRUE;
	//reset
	i16Thres = 0;
	if(gDb_tNvParamAlarmC0.u16TempTrackOverFaultThres > i16HystTempTrans)
		i16Thres = gDb_tNvParamAlarmC0.u16TempRailOverFaultThres - i16HystTempTrans;

	if(gDb_tRamEcuInputsC0.i16TemperatureTransmissionValue <= i16Thres
	|| gDb_tRamSelectControlPost.eSelectedControlPost != GE_POST_RADIO)
		boHighHydTempCrawlerActive = FALSE;

	vBloErrSetInpBit(&gErr_tSpecificErrorC0, DM_HIGH_HYDRAULIC_TEMP_CRAWLER,boHighHydTempCrawlerActive);
//NEOTEC
	/* =============================================================================================================================================== */
	/*													Set condition  Alarm  SpecificErrorC0_2 											     	   */
	/* =============================================================================================================================================== */

	//-----------------------------------------------------------------------------------------------------
	// DM_HIGH_HYDRAULIC_TEMP_RAIL
	//-----------------------------------------------------------------------------------------------------
	//

	static TBoolean boHighHydTempRailActive = FALSE;
	//set
	if(gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_NACELLE
	&& ((gDb_tRamEcuInputsC0.i16TemperatureTransmissionValue >= gDb_tNvParamAlarmC0.u16TempRailOverFaultThres)
	|| boTemperatureTranSysFault == TRUE))
		boHighHydTempRailActive = TRUE;
	//reset
	i16Thres = 0;
	if(gDb_tNvParamAlarmC0.u16TempRailOverFaultThres > i16HystTempTrans)
		i16Thres = gDb_tNvParamAlarmC0.u16TempRailOverFaultThres - i16HystTempTrans;

	if(gDb_tRamEcuInputsC0.i16TemperatureTransmissionValue <= i16Thres
	|| gDb_tRamSelectControlPost.eSelectedControlPost != GE_POST_NACELLE)
		boHighHydTempRailActive = FALSE;

	vBloErrSetInpBit(&gErr_tSpecificErrorC0_2, DM_HIGH_HYDRAULIC_TEMP_RAIL,boHighHydTempRailActive);
//NEOTEC

//MODIF A FAIRE  SUPPRESSION
//	//-----------------------------------------------------------------------------------------------------
//	// DM_ALARM_HYDRAULIC_TEMP_CRAWLER
//	//-----------------------------------------------------------------------------------------------------
//
//	static TBoolean boAlarmHydTempCrawlerActive = FALSE;
//	//set
//	if(gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_RADIO
//	&& ((gDb_tRamEcuInputsC0.i16TemperatureTransmissionValue >= gDb_tNvParamAlarmC0.u16TempTrackOverAlarmThres)
//	|| boTemperatureTranSysFault == TRUE))
//		boAlarmHydTempCrawlerActive = TRUE;
//	//reset
//	i16Thres = 0;
//	if(gDb_tNvParamAlarmC0.u16TempTrackOverAlarmThres > i16HystTempTrans)
//		i16Thres = gDb_tNvParamAlarmC0.u16TempTrackOverAlarmThres - i16HystTempTrans;
//
//	if(gDb_tRamEcuInputsC0.i16TemperatureTransmissionValue <= i16Thres
//	|| gDb_tRamSelectControlPost.eSelectedControlPost != GE_POST_RADIO)
//		boAlarmHydTempCrawlerActive = FALSE;
//
//	vBloErrSetInpBit(&gErr_tSpecificErrorC0_2, DM_ALARM_HYDRAULIC_TEMP_CRAWLER,boAlarmHydTempCrawlerActive);
//NEOTEC

//	//-----------------------------------------------------------------------------------------------------
//	// DM_ALARM_HYDRAULIC_TEMP_RAIL
//	//-----------------------------------------------------------------------------------------------------
//
//	static TBoolean boAlarmHydTempRailActive = FALSE;
//	//set
//	if(gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_NACELLE
//	&& ((gDb_tRamEcuInputsC0.i16TemperatureTransmissionValue >= gDb_tNvParamAlarmC0.u16TempRailOverAlarmThres)
//	|| boTemperatureTranSysFault == TRUE))
//		boAlarmHydTempRailActive = TRUE;
//	//reset
//	i16Thres = 0;
//	if(gDb_tNvParamAlarmC0.u16TempRailOverAlarmThres > i16HystTempTrans)
//		i16Thres = gDb_tNvParamAlarmC0.u16TempRailOverAlarmThres - i16HystTempTrans;
//
//	if(gDb_tRamEcuInputsC0.i16TemperatureTransmissionValue <= i16Thres
//	|| gDb_tRamSelectControlPost.eSelectedControlPost != GE_POST_NACELLE)
//		boAlarmHydTempRailActive = FALSE;
//
//	vBloErrSetInpBit(&gErr_tSpecificErrorC0_2, DM_ALARM_HYDRAULIC_TEMP_RAIL,boAlarmHydTempRailActive);
//NEOTEC

	//-----------------------------------------------------------------------------------------------------
	// DM_INC_POS_AXLE_OSCILLANT
	//-----------------------------------------------------------------------------------------------------

	vBloErrSetInpBit(&gErr_tSpecificErrorC0_2, DM_INC_POS_AXLE_OSCILLANT,(EDiState) gSwiNc_tUpOscillantAxle.tOut.bi2SwiNcState == GE_DI_ON && ((EDiState) gSwiDblNcNo_tDownOscillantAxle.tOut.bi2SwiDblNcNoState == GE_DI_ON));

	//-----------------------------------------------------------------------------------------------------
	// DM_INC_POS_AXLE_FIXE
	//-----------------------------------------------------------------------------------------------------

	vBloErrSetInpBit(&gErr_tSpecificErrorC0_2, DM_INC_POS_AXLE_FIXE,(EDiState) gSwiNc_tUpFixeAxle.tOut.bi2SwiNcState == GE_DI_ON && ((EDiState) gSwiDblNcNo_tDownFixeAxle.tOut.bi2SwiDblNcNoState == GE_DI_ON));

	//-----------------------------------------------------------------------------------------------------
	// DM_ONE_SPEED_SENSOR_FAULT
	//-----------------------------------------------------------------------------------------------------

	static TBoolean boAlarmOneSpeedSensorFault = FALSE;

	// Set alarm
	if(((gDb_tRamEcuInputsC0.i32OscillantAxleFrequency  == 0 && gDb_tRamEcuInputsC0.i32FixeAxleFrequency != 0)
		|| (gDb_tRamEcuInputsC0.i32OscillantAxleFrequency  != 0 && gDb_tRamEcuInputsC0.i32FixeAxleFrequency == 0))
		&& (gDb_tRamBrakeTest.boBrakeTestRunning == FALSE)
		&& (gDb_tRamEvision7C0.bogOsciServiceBrakeSelect== FALSE)
		&& (gDb_tRamEvision7C0.bogFixedServiceBrakeSelect == FALSE)
		&& (gDb_tRamEvision7C0.bogOsciParkBrakeSelect == FALSE)
		&& (gDb_tRamEvision7C0.bogFixedParkBrakeSelect == FALSE)
//NEOTEC IG Double freins
		&& (gDb_tRamEvision7C0.bogFixe2ndParkBrakeSelect == FALSE)
		&& (gDb_tRamEvision7C0.bogOsci2ndParkBrakeSelect == FALSE)
//NEOTEC IG Double freins
		&& (gDb_tRamBreakInBrakeC0.boBreakInBrakeRunning == FALSE)
		&& gDb_tRamEcuC0RcvFromC1.eC1NacellePostSelector == GE_DI_ON

	   )
	{
		boAlarmOneSpeedSensorFault = TRUE;
	}
	else
	{
		boAlarmOneSpeedSensorFault = FALSE;
	}

	// set activation condition bit
	vBloErrSetInpBit(&gErr_tSpecificErrorC0_2, DM_ONE_SPEED_SENSOR_FAULT,boAlarmOneSpeedSensorFault);


	//-----------------------------------------------------------------------------------------------------
	// DM_TWO_SPEED_SENSOR_FAULT
	//-----------------------------------------------------------------------------------------------------
	static TBoolean boAlarmTwoSpeedSensorFault = FALSE;

	if((gDb_tRamEcuInputsC0.i32OscillantAxleFrequency == 0 && gDb_tRamEcuInputsC0.i32FixeAxleFrequency == 0)
		&& (gDb_tRamEcuOutputsC0.u16ForwardPumpCommand > 0 || gDb_tRamEcuOutputsC0.u16BackwardPumpCommand > 0)
		&& (gDb_tRamBrakeTest.boBrakeTestRunning == FALSE)
		&& (gDb_tRamEvision7C0.bogOsciServiceBrakeSelect== FALSE)
		&& (gDb_tRamEvision7C0.bogFixedServiceBrakeSelect == FALSE)
		&& (gDb_tRamEvision7C0.bogOsciParkBrakeSelect == FALSE)
		&& (gDb_tRamEvision7C0.bogFixedParkBrakeSelect == FALSE)
		&& (gDb_tRamBreakInBrakeC0.boBreakInBrakeRunning == FALSE)
//NEOTEC
		&& gDb_tRamEcuC0RcvFromC1.eC1NacellePostSelector == GE_DI_ON
		&& abs(gDb_tRamGeneralC0.i16JoystickAdvanceScalingValue) >= gDb_tNvParametersC0.i16RailJoyRatioTwoSpeedFault
//NEOTEC
		)
	{
		boAlarmTwoSpeedSensorFault = TRUE;
	}
	else
	{
		boAlarmTwoSpeedSensorFault = FALSE;
	}
	vBloErrSetInpBit(&gErr_tSpecificErrorC0_2, DM_TWO_SPEED_SENSOR_FAULT,boAlarmTwoSpeedSensorFault);

////NEOTEC DEB
	//-----------------------------------------------------------------------------------------------------
	// DM_OVERSPEED_PV_FAULT
	//-----------------------------------------------------------------------------------------------------
	// set activation condition

	vBloErrSetInpBit(&gErr_tSpecificErrorC0_2, DM_OVERSPEED_PV_FAULT,(gDb_tRamSpeedMaxRail.boLimitSpeedLowSpeedExceeded || gDb_tRamSpeedMaxRail.boLimitSpeedLowSpeedBrakeTestExced));


	/* =============================================================================================================================================== */
	/*													Set condition  Alarm  SpecificErrorC0_3												     	   */
	/* =============================================================================================================================================== */
	//-----------------------------------------------------------------------------------------------------
	// DM_OVERSPEED_GV_FAULT
	//-----------------------------------------------------------------------------------------------------
	// set activation condition

	vBloErrSetInpBit(&gErr_tSpecificErrorC0_3, DM_OVERSPEED_GV_FAULT,(gDb_tRamSpeedMaxRail.boLimitSpeedAccesSiteSpeedExceeded || gDb_tRamSpeedMaxRail.boLimitSpeedHighSpeedExceeded));


	//-----------------------------------------------------------------------------------------------------
	// DM_MAT_MEASURE_FAULT
	//-----------------------------------------------------------------------------------------------------
//NEOTEC
	static TUint16 u16cptTimeOutMatMeasure = 0;
	TUint16 u16cpTimeOutMatMeasureMax = 50; //50x20ms = 1000ms
	//u16cptTimeOutMatMeasure
	if(boBloCRcvGetErrStaBit(&gCRcv_tMastMeasure,DM_CRCV_TIMEOUT) == TRUE)
	{
		if (u16cptTimeOutMatMeasure>=u16cpTimeOutMatMeasureMax)
			u16cptTimeOutMatMeasure=u16cpTimeOutMatMeasureMax;
		else
			u16cptTimeOutMatMeasure=u16cptTimeOutMatMeasure+1;
	}
	else if (boBloCRcvGetErrStaBit(&gCRcv_tMastMeasure,DM_CRCV_TIMEOUT) == FALSE)
		u16cptTimeOutMatMeasure=0;

	//boTimeOutMatMeasure
	static TBoolean boTimeOutMatMeasure = FALSE;
	if ( u16cptTimeOutMatMeasure == u16cpTimeOutMatMeasureMax)
		boTimeOutMatMeasure = TRUE;
	else
		boTimeOutMatMeasure = FALSE;
//NEOTEC

	static TUint32 u32PreviousRcvCnt = 0;
	const TUint32 u32U30MAX = 1073741823;
	vBloErrSetInpBit(&gErr_tSpecificErrorC0_3, DM_MAT_MEASURE_FAULT,(boTimeOutMatMeasure == TRUE && gDb_tNvOptionsC0.boMeasuringMat == TRUE)
																	|| (gDb_tNvOptionsC0.boMeasuringMat == FALSE && (gCRcv_tMastMeasure.tOut.u32RcvCnt != u32PreviousRcvCnt))
																	|| (gDb_tRamCanSensorC0.u32EncodeurMastMeasureRaw > u32U30MAX && gDb_tNvOptionsC0.boMeasuringMat == TRUE)
																	|| (gDb_tRamCanSensorC0.u16ErrorCodeMastMeasure != 0)
																	|| (gDb_tRamCanSensorC0.u16ErrorRegisterMastMeasure != 0));

	// Get previous value of receive counte of mast measure can msg
	u32PreviousRcvCnt = gCRcv_tMastMeasure.tOut.u32RcvCnt;
//	//-----------------------------------------------------------------------------------------------------
//	// DM_INC_FOLDED_MAT_MEASURE
//	//-----------------------------------------------------------------------------------------------------

	//-----------------------------------------------------------------------------------------------------
	// DM_TRANS_CRAWLER_PRESSURE_HOOK
	//-----------------------------------------------------------------------------------------------------
	static TBoolean boAlarmTransCrawlerPressureHook = FALSE;
	if(boFaultPressurePowerReduction == TRUE)
	{
		boAlarmTransCrawlerPressureHook = TRUE;
	}
	else
	{
		boAlarmTransCrawlerPressureHook = FALSE;
	}

	// write out of range C1 transmission pressure
	vBloErrSetInpBit(&gErr_tSpecificErrorC0_3, DM_TRANS_CRAWLER_PRESSURE_HOOK,boAlarmTransCrawlerPressureHook);

//	//-----------------------------------------------------------------------------------------------------
//	// DM_INC_INDUCTIVE_POS_TURRET
//	//-----------------------------------------------------------------------------------------------------

	//-----------------------------------------------------------------------------------------------------
	// DM_PVG_TRACK_LEFT
	//-----------------------------------------------------------------------------------------------------

	static TBoolean BoPvgTrackLeftFault =FALSE;
	//set
	if(gDb_tRamEcuInputsC0.eFaultPvgLeftTrakState != GE_DI_OFF
	&& gDb_tRamEcuOutputsC0.eSupllyPvgLeftTrackValue == GE_DIG_ON )
		BoPvgTrackLeftFault = TRUE;
	//reset
	if(boTrackStopped == TRUE)
		BoPvgTrackLeftFault = FALSE;

	vBloErrSetInpBit(&gErr_tSpecificErrorC0_3, DM_PVG_TRACK_LEFT,BoPvgTrackLeftFault);
//NEOTEC


	//-----------------------------------------------------------------------------------------------------
	// DM_INC_POS_DELTA_ARROW_FOLDED
	//-----------------------------------------------------------------------------------------------------
	//
	vBloErrSetInpBit(&gErr_tSpecificErrorC0_3, DM_INC_POS_DELTA_ARROW_FOLDED, gDb_tRamEcuC0RcvFailluresFromC1.boDm_Inc_Pos_Folded_Delta_Arrow);

	//-----------------------------------------------------------------------------------------------------
	// DM_SLOPE_FAULT
	//-----------------------------------------------------------------------------------------------------

	TInt16 i16_diffLong;
	i16_diffLong = gDb_tRamCanSensorC0.i16SlopeLongAngleValue - gDb_tRamCanSensorC0.i16SlopeLongAngleValue2;
	TInt16 i16_diffTrans;
	i16_diffTrans = gDb_tRamCanSensorC0.i16SlopeTransAngleValue - gDb_tRamCanSensorC0.i16SlopeTransAngleValue2;
	vBloErrSetInpBit(&gErr_tSpecificErrorC0_3, DM_SLOPE_FAULT,( BoPowerStable == TRUE
																&& ( (abs(i16_diffLong) >= abs(gDb_tNvParamAlarmC0.u16SlopeLongToleranceThres))
																|| (abs(i16_diffTrans) >= abs(gDb_tNvParamAlarmC0.u16SlopeTransToleranceThres))
//NEOTEC
																|| (gDb_tRamCanSensorC0.u8SlopeAlarm1 != 0)
																|| (gDb_tRamCanSensorC0.u8SlopeAlarm2 != 0)
																|| (boBloCRcvGetErrStaBit(&gCRcv_tDeversFrame1,DM_CRCV_TIMEOUT))
																|| (boBloCRcvGetErrStaBit(&gCRcv_tDeversFrame2,DM_CRCV_TIMEOUT))))
																);

	/* =============================================================================================================================================== */
	/*													Set condition  Alarm  SpecificErrorC0_4												     	   */
	/* =============================================================================================================================================== */
	//-----------------------------------------------------------------------------------------------------
	// DM_PVG_TRACK_RIGHT
	//-----------------------------------------------------------------------------------------------------

	static TBoolean BoPvgTrackRightFault =FALSE;
	//set
	if(gDb_tRamEcuInputsC0.eFaultPvgRightTrakState != GE_DI_OFF
	&& gDb_tRamEcuOutputsC0.eSupllyPvgRightTrackValue == GE_DIG_ON )
		BoPvgTrackRightFault = TRUE;
	//reset
	if(boTrackStopped == TRUE)
		BoPvgTrackRightFault = FALSE;

	vBloErrSetInpBit(&gErr_tSpecificErrorC0_4, DM_PVG_TRACK_RIGHT,BoPvgTrackRightFault);

	//-----------------------------------------------------------------------------------------------------
	// DM_NEED_TEST_BRAKE
	//-----------------------------------------------------------------------------------------------------

	//-----------------------------------------------------------------------------------------------------
	// DM_TEST_BRAKE_NOT_VALIDATED
	//-----------------------------------------------------------------------------------------------------

//NEOTEC IG Double freins
	vBloErrSetInpBit(&gErr_tSpecificErrorC0_4, DM_TEST_BRAKE_NOT_VALIDATED,gDb_tRamBrakeTest.boCycleBrakeOverCriticalNumber || gDb_tRamBrakeTest.boCycle2ndParkBrakeCritical);
//NEOTEC IG Double freins
	//-----------------------------------------------------------------------------------------------------
	// DM_INC_RIGHT_BASKET_SENSOR
	//-----------------------------------------------------------------------------------------------------
	// Check coherence of position right basket

	static TBoolean boBaskestRightFault = FALSE;
	if(boSigDbo(&tDboNacelleBasketRightSideSensor1,(TBoolean)(gDb_tRam48XsInputsC0.u16NacelleBasketRightSideSensor1Val > gDb_tNvParametersC0.u16TresholdAnaToBoForInputs48Xs))
	== boSigDbo(&tDboNacelleBasketRightSideSensor2,(TBoolean)(gDb_tRam48XsInputsC0.u16NacelleBasketRightSideSensor2Val > gDb_tNvParametersC0.u16TresholdAnaToBoForInputs48Xs))
	)
		boBaskestRightFault = TRUE;
	else
		boBaskestRightFault = FALSE;
	vBloErrSetInpBit(&gErr_tSpecificErrorC0_4, DM_INC_RIGHT_BASKET_SENSOR,(gDb_tRamGeneralC0.boRunningStable48XS == TRUE && boBaskestRightFault== TRUE));

	//-----------------------------------------------------------------------------------------------------
	// DM_INC_LEFT_BASKET_SENSOR
	//-----------------------------------------------------------------------------------------------------
	// Check coherence of position leftbasket

	static TBoolean boBaskestLeftFault = FALSE;
	if(boSigDbo(&tDboNacelleBasketLeftSideSensor1,(TBoolean)(gDb_tRam48XsInputsC0.u16NacelleBasketLeftSideSensor1Val > gDb_tNvParametersC0.u16TresholdAnaToBoForInputs48Xs))
	== boSigDbo(&tDboNacelleBasketLeftSideSensor2,(TBoolean)(gDb_tRam48XsInputsC0.u16NacelleBasketLeftSideSensor2Val > gDb_tNvParametersC0.u16TresholdAnaToBoForInputs48Xs))
	)
		boBaskestLeftFault = TRUE;
	else
		boBaskestLeftFault = FALSE;

	vBloErrSetInpBit(&gErr_tSpecificErrorC0_4, DM_INC_LEFT_BASKET_SENSOR,(gDb_tRamGeneralC0.boRunningStable48XS == TRUE && boBaskestLeftFault == TRUE));


	//-----------------------------------------------------------------------------------------------------
	// DM_INC_RIGHT_LEFT_BASKET
	//-----------------------------------------------------------------------------------------------------
	// Check coherence of position left and right basket

	static TBoolean boBaskestRightSide = FALSE;
	static TBoolean boBaskestLeftSide = FALSE;

	if(boSigDbo(&tDboNacelleBasketRightSideSensor1,(TBoolean)(gDb_tRam48XsInputsC0.u16NacelleBasketRightSideSensor1Val > gDb_tNvParametersC0.u16TresholdAnaToBoForInputs48Xs)) == FALSE
	&& 	boSigDbo(&tDboNacelleBasketRightSideSensor2,(TBoolean)(gDb_tRam48XsInputsC0.u16NacelleBasketRightSideSensor2Val > gDb_tNvParametersC0.u16TresholdAnaToBoForInputs48Xs)) == TRUE	)
		boBaskestRightSide = TRUE;
	else
		boBaskestRightSide = FALSE;

	if(boSigDbo(&tDboNacelleBasketLeftSideSensor1,(TBoolean)(gDb_tRam48XsInputsC0.u16NacelleBasketLeftSideSensor1Val > gDb_tNvParametersC0.u16TresholdAnaToBoForInputs48Xs)) == FALSE
	&& 	boSigDbo(&tDboNacelleBasketLeftSideSensor2,(TBoolean)(gDb_tRam48XsInputsC0.u16NacelleBasketLeftSideSensor2Val > gDb_tNvParametersC0.u16TresholdAnaToBoForInputs48Xs)) == TRUE	)
		boBaskestLeftSide = TRUE;
	else
		boBaskestLeftSide = FALSE;

	vBloErrSetInpBit(&gErr_tSpecificErrorC0_4, DM_INC_RIGHT_LEFT_BASKET,(gDb_tRamGeneralC0.boRunningStable48XS == TRUE && (boBaskestRightSide == TRUE && boBaskestLeftSide == TRUE)));

	//-----------------------------------------------------------------------------------------------------
	// DM_ACTIVE_HELP_FROM_C1
	//-----------------------------------------------------------------------------------------------------
	// Check coherence of position left and right basket
	vBloErrSetInpBit(&gErr_tSpecificErrorC0_4, DM_ACTIVE_HELP_FROM_C1,gDb_tRamEcuC0RcvFailluresFromC1.boDm_Active_Help);




	/* =============================================================================================================================================== */
	/*													Set condition  Alarm  SpecificErrorC0_5 											     	   */
	/* =============================================================================================================================================== */
	//-----------------------------------------------------------------------------------------------------
	// DM_TURRET_SENSOR_FAULT
	//-----------------------------------------------------------------------------------------------------
	static TBoolean boAlarmTurretSensor  = FALSE;

	TInt16	i16DiffChannels = 0;
	// calculation difference between two channels
	i16DiffChannels = gDb_tRamCanSensorC0.i16EncodeurTurret1Angle - gDb_tRamCanSensorC0.i16EncodeurTurret2Angle;

	// check internal default , inconsistency beetwen two channel and error can
	if(gDb_tRamCanSensorC0.u16ErrorCodeEncodeurTurret1 != 0
		|| gDb_tRamCanSensorC0.u16ErrorRegisterEncodeurTurret1 != 0
		|| gDb_tRamCanSensorC0.u16ErrorCodeEncodeurTurret2 != 0
		|| gDb_tRamCanSensorC0.u16ErrorRegisterEncodeurTurret2 != 0
		|| abs(i16DiffChannels) >= abs(gDb_tNvParamAlarmC0.u16TurretSensorToleranceThres)
		|| boBloCRcvGetErrStaBit(&gCRcv_tEncodeurTurret1,DM_CRCV_TIMEOUT)
		|| boBloCRcvGetErrStaBit(&gCRcv_tEncodeurTurret2,DM_CRCV_TIMEOUT)
	  )
	{
		boAlarmTurretSensor = TRUE;
	}
	else
	{
		boAlarmTurretSensor = FALSE;
	}
	// Set input bit block error
	vBloErrSetInpBit(&gErr_tSpecificErrorC0_5,DM_TURRET_SENSOR_FAULT,boAlarmTurretSensor);

	//-----------------------------------------------------------------------------------------------------
	// DM_OVERLOAD_DETECTED_BY_C1
	//-----------------------------------------------------------------------------------------------------
	/* Set input bit block error*/
//GREEN	vBloErrSetInpBit(&gErr_tSpecificErrorC0_5,DM_OVERLOAD_DETECTED_BY_C1,gDb_tRamEcuC0RcvFailluresFromC1.boDm_Overload_Detected_By_C1); //PAS DE DETECTION D'ERREUR POSSIBLE

	//-----------------------------------------------------------------------------------------------------
	// DM_EV_BYPASS_FAULT_BY_C1
	//-----------------------------------------------------------------------------------------------------
	/* Set input bit block error*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC0_5,DM_EV_BYPASS_FAULT_BY_C1,gDb_tRamEcuC0RcvFailluresFromC1.boDm_Ev_Bypass_Fault);

	//-----------------------------------------------------------------------------------------------------
	// DM_HEARTBEAT_48XS_DEFAULT_C0
	//-----------------------------------------------------------------------------------------------------
	/* Set input bit block error*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC0_5,DM_HEARTBEAT_48XS_DEFAULT_C0,(gDb_tRamGeneralC0.boRunningStable48XS == TRUE && gDb_tRam48XsInputsC0.u8Hearbeat48Xs != 5));


	//-----------------------------------------------------------------------------------------------------
	// DM_VOLTAGE_DC_CONVERTER_C0
	//-----------------------------------------------------------------------------------------------------
	/*TON*/
	static TUint16 u16CptVoltageDcConverter =0;
	TUint16 u16CptMaxVoltageDcConverter = gDb_tNvParamGreenEffC0.u16NbrCycleFaultDcConverter; //30x10ms = 300ms
	if(gDb_tRamGeneralC0.u16EcuVoltage > 5000 //5000 = 5V
	&& gDb_tRamGeneralC0.u16EcuVoltage < gDb_tNvParamGreenEffC0.u16MinVoltageDcConverter
	&& gDb_tRamEcuOutputsC0.boRelayEnableBatteryCmd == TRUE)
	{
		if (u16CptVoltageDcConverter>=u16CptMaxVoltageDcConverter)
			u16CptVoltageDcConverter=u16CptMaxVoltageDcConverter;
		else
			u16CptVoltageDcConverter=u16CptVoltageDcConverter+1;
	}
	else
		u16CptVoltageDcConverter=0;
	if ( u16CptVoltageDcConverter == u16CptMaxVoltageDcConverter)
		gDb_tRamGreenEffC0.boVoltageDcConverterFault = TRUE;
	else
		gDb_tRamGreenEffC0.boVoltageDcConverterFault = FALSE;
	/* Set input bit block error*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC0_5,DM_VOLTAGE_DC_CONVERTER_C0,gDb_tRamGreenEffC0.boVoltageDcConverterFault == TRUE);


	//-----------------------------------------------------------------------------------------------------
	// DM_BATT_ERROR_CODE1_C0
	//-----------------------------------------------------------------------------------------------------
	static TUint8 u8Batt_ErrorCode1Old = 0;
	static TBoolean boBatt_ErrorCode1Change = FALSE;
	if(gDb_tRamFlashBatteryC0.u8Batt_ErrorCode1 != u8Batt_ErrorCode1Old)
		boBatt_ErrorCode1Change = TRUE;
	else
		boBatt_ErrorCode1Change = FALSE;

	u8Batt_ErrorCode1Old = gDb_tRamFlashBatteryC0.u8Batt_ErrorCode1;

	if(boBatt_ErrorCode1Change == TRUE
	&& gDb_tRamEcuOutputsC0.boRelayEnableBatteryCmd == TRUE)
		gDb_tRamGreenEffC0.boBattErrorCode1 = TRUE;
	else
		gDb_tRamGreenEffC0.boBattErrorCode1 = FALSE;
	/* Set input bit block error*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC0_5,DM_BATT_ERROR_CODE1_C0,gDb_tRamGreenEffC0.boBattErrorCode1 == TRUE);


	//-----------------------------------------------------------------------------------------------------
	// DM_DMC_ERROR_C0
	//-----------------------------------------------------------------------------------------------------
//A CHANGER DE NOM
	/* Set input bit block error*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC0_5,DM_DMC_ERROR_C0,gDb_tRamDMC_C0.boActiveFaultDmc ==TRUE );


	//-----------------------------------------------------------------------------------------------------
	// DM_C0_FAULT_THERMIC_OR_ELECTRIC_PUMP
	//-----------------------------------------------------------------------------------------------------
	/* Set input bit block error*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC0_9,DM_C0_FAULT_THERMIC_OR_ELECTRIC_PUMP,gDb_tRamEcuAlarmC0.boFaultThermicPumpOrElecticDmc);//NEOTEC IG

	/* ============================================================================================= */
	/*									Release condition  Alarm 									 */
	/* ============================================================================================= */

	/* ============================================================================================= */
	/*									Run block													 */
	/* ============================================================================================= */

	/* ============================================================================================= */
	/*									Restricted Mode management									 */
	/* ============================================================================================= */

}
