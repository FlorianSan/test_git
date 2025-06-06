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
//! @change  20.12.2018 HYDAC/CK restriced mode RM_ARU_ACTIVE_C1 =>  Pilot stop motor
//! @change  30.04.2019 NEOTEC/FV supression provisoire car plus rien ne fonctionne
//! @change  07.06.2019 HYDAC/CK  add condition for DM_TELESCOPE_SENSOR_FAULT  gDb_tRamTelescopeCanC1.u8ErrorRetractorTelescope1 and 2
//! @change  11.06.2019 HYDAC/CK  add alarm specific DM_TURRET_SENSOR_FAULT_C1
//! @change  12.06.2019 HYDAC/CK  add restriced mode RM_COM_CAN_C0_C1_LOSS trigged watchdog
//!	@change  24.06.2019 HYDAC/CK  add DM_OVERLOAD_DETECTED failure
//!	@change  25.06.2019 HYDAC/CK  add DM_EV_PARK_BRAKE_AXLE_OSCILLANT , DM_EV_PARK_BRAKE_AXLE_FIXE, DM_EV_SERVICE_BRAKE_AXLE_OSCI, DM_EV_SERVICE_BRAKE_AXLE_FIXE, DM_EV_SERVICE_BRAKE_TRACK  failures
//!	@change  26.06.2019 HYDAC/CK  add release condition RC05_ARU_VEHICLE_STOPPED_C1 for DM_EV_BYPASS_FAULT alarm
//!	@change  26.06.2019 HYDAC/CK  change set condition of DM_EV_BYPASS_FAULT alarm
//!	@change  10.07.2019 HYDAC/CK  add failure 48Xs SpecificErrorC1_4  SpecificErrorC1_5  SpecificErrorC1_6
//!	@change  15.07.2019 HYDAC/CK  add condition supply ON to detect inconsistency pilotage of PVG for  DM_PVG_EV_TOR  DM_PVG_TELESCOPE DM_PVG_DELTA_FAULT  DM_PVG_ARROW_FAULT
//!	@change  16.07.2019 HYDAC/CK  add failure DM_HEARTBEAT_48XS_DEFAULT_C1 of block SpecificErrorC1_7 , add call block SpecificErrorC1_7
//!	@change  22.07.2019 HYDAC/CK  add restricted mode RM_COM_CAN_48XS_LOSS, add restricted mode RM_COM_CAN_RADIO_LOSS_BY_C0 , add failure DM_RM_COM_CAN_RADIO_LOSS_BY_C0
//! @change  19.09.2019 HYDAC/CK  update name of white and red light to whiteARD ARG, add 4 alarms for news outputs White and Red light (ARD ARG)
//! @change  28.01.2020 HYDAC/CK  Add specific error block 8 , start 48xs failure
//!
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vAlarmsManagement(TVoid)
{
	/*modif provisoire attente la stabilisation des mesures des capteurs analogique à la mise sous tension*/
	static TBoolean BoPowerStable =FALSE;
	static TUint16 u16cptPower =0;
	TUint16 u16cptPowerMax =125; //125x20ms = 2500ms
	if (u16cptPower < u16cptPowerMax)
		u16cptPower=u16cptPower+1;
	else
		BoPowerStable = TRUE;
//DEPLACER DANS AppCode.c
//	/*modif provisoire pour vérifier si le moteur est démarrer pour que les pressions soient stables*/
//	static TBoolean BoEngineRunningStable =FALSE;
//	static TUint16 u16cpt =0;
//	TUint16 u16cptmax = 200; //200x20ms = 4000ms
//	if(gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939 >= 500)/*entrée non J1939 gDb_tRamEcuInputsC1.i32RegimeMotorAlternatorRpm*/
//	{
//		if (u16cpt>=u16cptmax)
//			u16cpt=u16cptmax;
//		else
//			u16cpt=u16cpt+1;
//	}
//	else if (gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939 < 500)/*entrée non J1939 gDb_tRamEcuInputsC1.i32RegimeMotorAlternatorRpm*/
//		u16cpt=0;
//
//	if ( u16cpt == u16cptmax)
//		BoEngineRunningStable = TRUE;
//	else
//		BoEngineRunningStable = FALSE;

//DEPLACER DANS AppCode.c
//	//modif provisoire pour vérifier si le 48x est démarrer pour que les détections des entrées soient stables
//		static TUint16 u16cpt48x =0;
//		TUint16 u16cptmax48x =250;
//		if(gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs >= 8000)
//		{
//			if (u16cpt48x>=u16cptmax48x)
//				u16cpt48x=u16cptmax48x;
//			else
//				u16cpt48x=u16cpt48x+1;
//		}
//		else if (gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs < 8000)
//			u16cpt48x=0;
//
//		if ( u16cpt48x == u16cptmax48x)
//			gDb_tRamGeneralC1.boRunningStable48XS = TRUE;
//		else
//			gDb_tRamGeneralC1.boRunningStable48XS = FALSE;

	/*boMovementsStopped*/
	static TBoolean boMovementsStopped  = FALSE;
	if(gDb_tRamEcuOutputsC1.boEvBypassCommand == FALSE
	&& gDb_tRamEcuOutputsC1.boSupplyPvgDeltaArmCommand == FALSE
	&& gDb_tRamEcuOutputsC1.boSupplyPvgArrowArmCommand == FALSE
	&& gDb_tRamEcuOutputsC1.boSupplyPvgTelescopeArmCommand == FALSE
	&& gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand == FALSE
	&& gDb_tRam48XsInputsC1.boDeadManPedal == FALSE
	&& gDb_tRamEcuC1RcvFromC0.eSelectedControlPost != GE_POST_TURRET /*Cas poste tourelle*/
	&& gDb_tRamEcuC1RcvFromC0.eSelectedControlPost != GE_POST_RADIO /*Cas poste radio*/
	)
		boMovementsStopped  = TRUE;
	else
		boMovementsStopped  = FALSE;

	/* =============================================================================================================================================== */
	/*													Set condition  Alarm  SpecificErrorC1 											     		   */
	/* =============================================================================================================================================== */

	vBloErrSetInpBit(&gErr_tSpecificErrorC1, DM_STOP_MOVE_LIMIT_ENVLP_C1,gDb_tRamLimitWorkEnvelopeC1.boStopAllMovements == TRUE);

	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_INC_OVERLOAD_SENSOR*/
	/*----------------------------------------------------------------------------------------------------*/
	/* Check coherence overload sensor*/
//GREEN	vBloErrSetInpBit(&gErr_tSpecificErrorC1, DM_INC_OVERLOAD_SENSOR,gDb_tRam48XsInputsC1.boOverload1 != gDb_tRam48XsInputsC1.boOverload2); //PAS DE DETECTION D'ERREUR POSSIBLE

	//-----------------------------------------------------------------------------------------------------
	// DM_TRANSMISSION_PRESSURE_FAULT
	//-----------------------------------------------------------------------------------------------------
	/* Check coherence of position right basket*/

	vBloErrSetInpBit(&gErr_tSpecificErrorC1, DM_TRANSMISSION_PRESSURE_FAULT,boBloInCurGetErrStaBit(&gInCur_tTransmission1PressureSensor,DM_INCUR_SP)
																	|| boBloInCurGetErrStaBit(&gInCur_tTransmission1PressureSensor,DM_INCUR_SG_OL)
																	|| boBloInCurGetErrStaBit(&gInCur_tTransmission1PressureSensor,DM_INCUR_PARAM)
																	|| boBloInCurGetErrStaBit(&gInCur_tTransmission1PressureSensor,DM_INCUR_UNKNOWN)
																	|| boBloInCurGetErrStaBit(&gInCur_tTransmission2PressureSensor,DM_INCUR_SP)
																	|| boBloInCurGetErrStaBit(&gInCur_tTransmission2PressureSensor,DM_INCUR_SG_OL)
																	|| boBloInCurGetErrStaBit(&gInCur_tTransmission2PressureSensor,DM_INCUR_PARAM)
																	|| boBloInCurGetErrStaBit(&gInCur_tTransmission2PressureSensor,DM_INCUR_UNKNOWN)
																	);


	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_TURRET_SENSOR_FAULT_C1*/
	/*-----------------------------------------------------------------------------------------------------*/

	vBloErrSetInpBit(&gErr_tSpecificErrorC1, DM_TURRET_SENSOR_FAULT_C1,gDb_tRamEcuC1RcvFailluresFromC0.boDm_Turret_Sensor_Fault);

	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_INPUT_OIL_PRESSURE_FAULT*/
	/*-----------------------------------------------------------------------------------------------------*/

	vBloErrSetInpBit(&gErr_tSpecificErrorC1, DM_INPUT_OIL_PRESSURE_FAULT,(gDb_tRamEcuInputsC1.eOilPressureState == GE_DI_ON && gDb_tRamGeneralC1.boEngineRunningStable == TRUE));


	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_INPUT_WATER_TEMPERATURE*/
	/*-----------------------------------------------------------------------------------------------------*/

	vBloErrSetInpBit(&gErr_tSpecificErrorC1, DM_INPUT_WATER_TEMPERATURE,gDb_tRamGeneralNeotecC1.i16WaterTempJ1939 >= 116);/*Voir préconisation moteur Perkins*/

	/* =============================================================================================================================================== */
	/*													Set condition  Alarm  SpecificErrorC1_2 											     	   */
	/* =============================================================================================================================================== */
	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_PVG_EV_TOR*/
	/*-----------------------------------------------------------------------------------------------------*/
	/* Check coherence pilotage of Pvg Ev Tor*/

	static TBoolean BoPvgTorFault =FALSE;
	/*set*/
	if(gDb_tRamEcuInputsC1.eFaultPvgEvProTorState != GE_DI_OFF)
		BoPvgTorFault = TRUE;
	/*reset*/
	if(boMovementsStopped == TRUE)
		BoPvgTorFault = FALSE;

	vBloErrSetInpBit(&gErr_tSpecificErrorC1_2, DM_PVG_EV_TOR,BoPvgTorFault == TRUE);


	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_PVG_TELESCOPE*/
	/*-----------------------------------------------------------------------------------------------------*/
	/* Check coherence pilotage of Pvg telescope*/
	static TBoolean BoPvgTelescopeFault =FALSE;
	/*set*/
	if(gDb_tRamEcuInputsC1.eFaultPvgTelescopeArmState != GE_DI_OFF)
		BoPvgTelescopeFault = TRUE;
	/*reset*/
	if(boMovementsStopped == TRUE)
		BoPvgTelescopeFault = FALSE;

	vBloErrSetInpBit(&gErr_tSpecificErrorC1_2, DM_PVG_TELESCOPE,BoPvgTelescopeFault == TRUE);

	/*-----------------------------------------------------------------------------------------------------*/
	/* DM__INC_ALTERNATOR_CHARGE_FAULT*/
	/*-----------------------------------------------------------------------------------------------------*/
	/* Check if the alternator regime is over a treshold with mini battery voltage*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC1_2, DM__INC_ALTERNATOR_CHARGE_FAULT,gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939 > gDb_tNvParamAlarmC1.i32AlternatorRegimeMaxThres && gDb_tRamEcuInputsC1.eAlternatorChargeOkState == GE_DI_ON); //gDb_tRamGeneralC1.u16EcuVoltage < gDb_tNvParamAlarmC1.u16BatteryVoltageMinThres);//Ancienne entrée : gDb_tRamEcuInputsC1.i32RegimeMotorAlternatorRpm

	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_ACTIVE_HELP*/
	/*-----------------------------------------------------------------------------------------------------*/
	/* Check if active help is used*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC1_2, DM_ACTIVE_HELP,gDb_tRamEcuInputsC1.eActiveHelpState != GE_DI_OFF);

	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_EV_BYPASS_FAULT*/
	/*-----------------------------------------------------------------------------------------------------*/
	/*set condition, Check coherence pilotage of bypass and pressure*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC1_2, DM_EV_BYPASS_FAULT,(boMemFaultBypass == TRUE));

	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_PVG_DELTA_FAULT*/
	/*-----------------------------------------------------------------------------------------------------*/
	/* Check coherence pilotage of Pvg delta*/
	static TBoolean BoPvgDeltaFault =FALSE;
	/*set*/
	if(gDb_tRamEcuInputsC1.eFaultPvgDeltaArmState != GE_DI_OFF)
		BoPvgDeltaFault = TRUE;
	/*reset*/
	if(boMovementsStopped == TRUE)
		BoPvgDeltaFault = FALSE;

	vBloErrSetInpBit(&gErr_tSpecificErrorC1_2, DM_PVG_DELTA_FAULT,BoPvgDeltaFault == TRUE);

	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_PVG_ARROW_FAULT*/
	/*-----------------------------------------------------------------------------------------------------*/
	/* Check coherence pilotage of Pvg arrow*/
	static TBoolean BoPvgArrowFault =FALSE;
	/*set*/
	if(gDb_tRamEcuInputsC1.eFaultPvgArrowArmState != GE_DI_OFF)
		BoPvgArrowFault = TRUE;
	/*reset*/
	if(boMovementsStopped == TRUE)
		BoPvgArrowFault = FALSE;

	vBloErrSetInpBit(&gErr_tSpecificErrorC1_2, DM_PVG_ARROW_FAULT,BoPvgArrowFault == TRUE);

	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_SWI_DBL_INC_FRAME_ROT*/
	/*-----------------------------------------------------------------------------------------------------*/
	/* Check coherence double swith Nc No frame rotation position*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC1_2, DM_SWI_DBL_INC_FRAME_ROT,gDb_tRamEcuC1RcvFailluresFromC0.boDm_Swi_Dbl_NcNo_Inc_FrameRot);

	/* =============================================================================================================================================== */
	/*													Set condition  Alarm  SpecificErrorC1_3 											     	   */
	/* =============================================================================================================================================== */
	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_INC_POS_FOLDED_DELTA_ARROW*/
	/*-----------------------------------------------------------------------------------------------------*/

	vBloErrSetInpBit(&gErr_tSpecificErrorC1_3, DM_INC_POS_FOLDED_DELTA_ARROW,((gDb_tRamEcuInputsC1.eFoldedDeltaArmSensorState == GE_DI_ON && gDb_tRamMvtEndStopC1.boFoldedDeltaArm == FALSE)
																			|| (gDb_tRamEcuInputsC1.eFoldedBoomArmSensorState == GE_DI_ON && gDb_tRamMvtEndStopC1.boFoldedArrowArm == FALSE)));


	/* ============================================================================================= */
	/*									Release condition  Alarm 									 */
	/* ============================================================================================= */

	TInt16 i16_TelescopeLenghtTelescope1;
	TInt16 i16_TelescopeLenghtTelescope2;
	TInt16 i16_TelescopeLenghtDiff;
	static TBoolean boTelescopeLenghtSensorFault = FALSE;

	i16_TelescopeLenghtTelescope1 = u16CastI16(i16CalcLinear2Dots(i16CastU16(gDb_tRamTelescopeCanC1.u16RetractorTelescopeVal1),i16CastU16(gDb_tNvCalibrationC1.u16LenghtCaliEndStopLowTelescope1),i16CastU16(gDb_tNvCalibrationC1.u16LenghtEndStopLowTelescope1),i16CastU16(gDb_tNvCalibrationC1.u16LenghtCaliEndStopHighTelescope1),i16CastU16(gDb_tNvCalibrationC1.u16LenghtEndStopHighTelescope1)));
	i16_TelescopeLenghtTelescope2 = u16CastI16(i16CalcLinear2Dots(i16CastU16(gDb_tRamTelescopeCanC1.u16RetractorTelescopeVal2),i16CastU16(gDb_tNvCalibrationC1.u16LenghtCaliEndStopLowTelescope2),i16CastU16(gDb_tNvCalibrationC1.u16LenghtEndStopLowTelescope2),i16CastU16(gDb_tNvCalibrationC1.u16LenghtCaliEndStopHighTelescope2),i16CastU16(gDb_tNvCalibrationC1.u16LenghtEndStopHighTelescope2)));

	i16_TelescopeLenghtDiff = u16CastI16(i16_TelescopeLenghtTelescope1) - u16CastI16(i16_TelescopeLenghtTelescope2);

	/*set*/
	if(BoPowerStable == TRUE
	&&( ((abs(i16_TelescopeLenghtDiff)>=abs(gDb_tNvParamAlarmC1.i16TelescopeToleranceChannels)) && gDb_tRamGeneralC1.boBypassArmTelescope == FALSE )
	|| (gDb_tRamTelescopeCanC1.u16RetractorTelescopeVal1 <= 100)/*Valeur impossible mécanniquement*/
	|| (gDb_tRamEcuInputsC1.eEntryTelescopeFdcSensorState == GE_DI_ON && (i16_TelescopeLenghtTelescope1 > gDb_tNvParamAlarmC1.i16TelescopeInToleranceInductive))
	|| (gDb_tRamEcuInputsC1.eEntryTelescopeFdcSensorState == GE_DI_ON && (i16_TelescopeLenghtTelescope2 > gDb_tNvParamAlarmC1.i16TelescopeInToleranceInductive))
	|| (gDb_tRamTelescopeCanC1.u8ErrorRetractorTelescope1 != 0 )
	|| (gDb_tRamTelescopeCanC1.u8ErrorRetractorTelescope2 != 0 )
	|| boBloCRcvGetErrStaBit(&gCRcv_tTelescopeFrame1,DM_CRCV_TIMEOUT)
	|| boBloCRcvGetErrStaBit(&gCRcv_tTelescopeFrame2,DM_CRCV_TIMEOUT)))
		boTelescopeLenghtSensorFault = TRUE;
	/* set condition*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC1_3, DM_TELESCOPE_SENSOR_FAULT,boTelescopeLenghtSensorFault == TRUE);

	/*Reset*/
	if(gDb_tRamEcuInputsC1.eEntryTelescopeFdcSensorState == GE_DI_ON)
		boTelescopeLenghtSensorFault = FALSE;
	/* reset condition*/
	vCoreSetErrRelCond(RC03_TELESCOPE_IN_INDUCTIVE_ON,boTelescopeLenghtSensorFault == FALSE);

	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_OVERLOAD_DETECTED*/
	/*-----------------------------------------------------------------------------------------------------*/
	/* set condition, check if input detected an overload*/
//GREEN	vBloErrSetInpBit(&gErr_tSpecificErrorC1_3, DM_OVERLOAD_DETECTED,boOverloadActive == TRUE); //PAS DE DETECTION D'ERREUR POSSIBLE

	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_EV_PARK_BRAKE_AXLE_OSCILLANT*/
	/*-----------------------------------------------------------------------------------------------------*/
	/* set condition*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC1_3, DM_EV_PARK_BRAKE_AXLE_OSCILLANT, gDb_tRamEcuC1RcvFailluresFromC0.boEvParkBrakeAxleOscillantFault == TRUE);
	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_EV_PARK_BRAKE_AXLE_FIXE*/
	/*-----------------------------------------------------------------------------------------------------*/
	/* set condition*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC1_3, DM_EV_PARK_BRAKE_AXLE_FIXE, gDb_tRamEcuC1RcvFailluresFromC0.boEvParkBrakeAxleFixeFault == TRUE);
	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_EV_2ND_PARK_BRAKE_AXLE_OSCILLANT  Double freins*/
	/*-----------------------------------------------------------------------------------------------------*/
	/*Double freins*/
	// set condition
	vBloErrSetInpBit(&gErr_tSpecificErrorC1_3, DM_EV_PARK_BRAKE_AXLE_OSCILLANT, gDb_tRamEcuC1RcvFailluresFromC0.boEv2ndParkBrakeAxleOsciFault == TRUE && gDb_tRamEcuC1RcvFromC0.boSecondParkBrakeActive == TRUE);
	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_EV_2ND_PARK_BRAKE_AXLE_FIXE  Double freins*/
	/*-----------------------------------------------------------------------------------------------------*/
	/*Double freins*/
	// set condition
	vBloErrSetInpBit(&gErr_tSpecificErrorC1_3, DM_EV_PARK_BRAKE_AXLE_FIXE, gDb_tRamEcuC1RcvFailluresFromC0.boEv2ndParkBrakeAxleFixeFault == TRUE && gDb_tRamEcuC1RcvFromC0.boSecondParkBrakeActive == TRUE);
	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_EV_SERVICE_BRAKE_AXLE_OSCI*/
	/*-----------------------------------------------------------------------------------------------------*/
	/* set condition*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC1_3, DM_EV_SERVICE_BRAKE_AXLE_OSCI, gDb_tRamEcuC1RcvFailluresFromC0.boEvServiceBrakeAxleOscillantFault == TRUE);
	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_EV_SERVICE_BRAKE_AXLE_FIXE*/
	/*-----------------------------------------------------------------------------------------------------*/
	/* set condition*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC1_3, DM_EV_SERVICE_BRAKE_AXLE_FIXE, gDb_tRamEcuC1RcvFailluresFromC0.boEvServiceBrakeAxleFixeFault == TRUE);
	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_EV_SERVICE_BRAKE_TRACK*/
	/*-----------------------------------------------------------------------------------------------------*/
	/* set condition*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC1_3, DM_EV_SERVICE_BRAKE_TRACK, gDb_tRamEcuC1RcvFailluresFromC0.boEvServiceBrakeTrackFault == TRUE);

	/* =============================================================================================================================================== */
	/*													Set condition  Alarm  SpecificErrorC1_6 											     	   */
	/* =============================================================================================================================================== */
	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_C1_OUT_OF_RANGE_JOY_DELTA_ARM_48XS*/
	/*-----------------------------------------------------------------------------------------------------*/
	static TBoolean boAlarmOutOfRangeJoyDeltaArm48XS  = FALSE;

	if((gDb_tRam48XsInputsC1.u16DeltaArmAxisJoystick < gDb_tNvParamAlarmC1.u8MinAlarmJoyDeltaArmPrctBat * gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs / 100)
		||
		(gDb_tRam48XsInputsC1.u16DeltaArmAxisJoystick > gDb_tNvParamAlarmC1.u8MaxAlarmJoyDeltaArmPrctBat * gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs / 100)
	  )
	{
		boAlarmOutOfRangeJoyDeltaArm48XS  = TRUE;
	}
	else
	{
		boAlarmOutOfRangeJoyDeltaArm48XS  = FALSE;
	}

	/* Set input bit block error*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC1_6,DM_C1_OUT_OF_RANGE_JOY_DELTA_ARM_48XS,(gDb_tRamGeneralC1.boRunningStable48XS == TRUE && boAlarmOutOfRangeJoyDeltaArm48XS == TRUE));

	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_C1_OUT_OF_RANGE_JOY_ARROW_ARM_48XS*/
	/*-----------------------------------------------------------------------------------------------------*/
	static TBoolean boAlarmOutOfRangeJoyArrowArm48XS  = FALSE;

	if((gDb_tRam48XsInputsC1.u16ArrowArmAxisJoystick < gDb_tNvParamAlarmC1.u8MinAlarmJoyArrowArmPrctBat * gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs / 100)
		||
		(gDb_tRam48XsInputsC1.u16ArrowArmAxisJoystick > gDb_tNvParamAlarmC1.u8MaxAlarmJoyArrowArmPrctBat * gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs / 100)
	  )
	{
		boAlarmOutOfRangeJoyArrowArm48XS  = TRUE;
	}
	else
	{
		boAlarmOutOfRangeJoyArrowArm48XS  = FALSE;
	}

	/* Set input bit block error*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC1_6,DM_C1_OUT_OF_RANGE_JOY_ARROW_ARM_48XS,(gDb_tRamGeneralC1.boRunningStable48XS == TRUE && boAlarmOutOfRangeJoyArrowArm48XS == TRUE));

	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_C1_OUT_OF_RANGE_JOY_TELESCOPE_ARM_48XS*/
	/*-----------------------------------------------------------------------------------------------------*/
	static TBoolean boAlarmOutOfRangeJoyTelescopeArm48XS  = FALSE;

	if((gDb_tRam48XsInputsC1.u16TelescopeArmAxisJoysitck < gDb_tNvParamAlarmC1.u8MinAlarmJoyTelescopeArmPrctBat * gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs / 100)
		||
		(gDb_tRam48XsInputsC1.u16TelescopeArmAxisJoysitck > gDb_tNvParamAlarmC1.u8MaxAlarmJoyTelescopeArmPrctBat * gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs / 100)
	  )
	{
		boAlarmOutOfRangeJoyTelescopeArm48XS  = TRUE;
	}
	else
	{
		boAlarmOutOfRangeJoyTelescopeArm48XS  = FALSE;
	}

	/* Set input bit block error*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC1_6,DM_C1_OUT_OF_RANGE_JOY_TELESCOPE_ARM_48XS,(gDb_tRamGeneralC1.boRunningStable48XS == TRUE && boAlarmOutOfRangeJoyTelescopeArm48XS == TRUE));

	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_C1_OUT_OF_RANGE_JOY_ROR_TURRET_48XS*/
	/*-----------------------------------------------------------------------------------------------------*/
	static TBoolean boAlarmOutOfRangeJoyRotTurret48XS  = FALSE;

	if((gDb_tRam48XsInputsC1.u16RotationTurretAxisJoystick < gDb_tNvParamAlarmC1.u8MinAlarmJoyRotTurretArmPrctBat* gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs / 100)
		||
		(gDb_tRam48XsInputsC1.u16RotationTurretAxisJoystick > gDb_tNvParamAlarmC1.u8MaxAlarmJoyRotTurretArmPrctBat * gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs / 100)
	  )
	{
		boAlarmOutOfRangeJoyRotTurret48XS  = TRUE;
	}
	else
	{
		boAlarmOutOfRangeJoyRotTurret48XS  = FALSE;
	}

	/* Set input bit block error*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC1_6,DM_C1_OUT_OF_RANGE_JOY_ROR_TURRET_48XS,(gDb_tRamGeneralC1.boRunningStable48XS == TRUE && boAlarmOutOfRangeJoyRotTurret48XS == TRUE));

	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_C1_OUT_OF_RANGE_JOY_ADVANCEMENT_48XS*/
	/*-----------------------------------------------------------------------------------------------------*/
	static TBoolean boAlarmOutOfRangeJoyAdvancemennt48XS  = FALSE;

	if((gDb_tRam48XsInputsC1.u16AdvanceAxisJoystick < gDb_tNvParamAlarmC1.u8MinAlarmJoyRotTurretArmPrctBat* gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs / 100)
		||
		(gDb_tRam48XsInputsC1.u16AdvanceAxisJoystick > gDb_tNvParamAlarmC1.u8MaxAlarmJoyRotTurretArmPrctBat * gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs / 100)
	  )
	{
		boAlarmOutOfRangeJoyAdvancemennt48XS  = TRUE;
	}
	else
	{
		boAlarmOutOfRangeJoyAdvancemennt48XS  = FALSE;
	}

	/* Set input bit block error*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC1_6,DM_C1_OUT_OF_RANGE_JOY_ADVANCEMENT_48XS,(gDb_tRamGeneralC1.boRunningStable48XS == TRUE && boAlarmOutOfRangeJoyAdvancemennt48XS == TRUE));


	/* =============================================================================================================================================== */
	/*													Set condition  Alarm  SpecificErrorC1_7 											     	   */
	/* =============================================================================================================================================== */
	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_HEARTBEAT_48XS_DEFAULT_C1*/
	/*-----------------------------------------------------------------------------------------------------*/
	/* Set input bit block error*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC1_7,DM_HEARTBEAT_48XS_DEFAULT_C1,(gDb_tRamGeneralC1.boRunningStable48XS == TRUE && gDb_tRam48XsInputsC1.u8Hearbeat48Xs != 5));

	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_RM_COM_CAN_RADIO_LOSS_BY_C0*/
	/*-----------------------------------------------------------------------------------------------------*/
	/* Set input bit block error*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC1_7,DM_RM_COM_CAN_RADIO_LOSS_BY_C0,gDb_tRamEcuC1RcvFailluresFromC0.boRm_Com_Can_Radio_Loss);

	/* =============================================================================================================================================== */
	/*													Set condition  Alarm  SpecificErrorC1_8											     	   */
	/* =============================================================================================================================================== */
	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_TIMEOUT_SDO_REQUEST_48XS*/
	/*-----------------------------------------------------------------------------------------------------*/
	/* Set input bit block error*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC1_8,DM_TIMEOUT_SDO_REQUEST_48XS,gDb_tRamGeneralC1.i16ReturnValStart48XsFunc == R_TIMEOUT);

	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_WRONG_CHECKSUM_CONFIG_48XS*/
	/*-----------------------------------------------------------------------------------------------------*/
	/* Set input bit block error*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC1_8,DM_WRONG_CHECKSUM_CONFIG_48XS,gDb_tRamGeneralC1.i16ReturnValStart48XsFunc == R_CHECKSUM);

	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_SIL_48XS*/
	/*-----------------------------------------------------------------------------------------------------*/
	/* Set input bit block error*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC1_8,DM_SIL_48XS,gDb_tRamGeneralC1.i16ReturnValStart48XsFunc == R_SIL_CRITICAL);

	/*-----------------------------------------------------------------------------------------------------*/
	/* DM_DEFAULT_CASE_START_48XS*/
	/*-----------------------------------------------------------------------------------------------------*/
	/* Set input bit block error*/
	vBloErrSetInpBit(&gErr_tSpecificErrorC1_8,DM_DEFAULT_CASE_START_48XS,gDb_tRamGeneralC1.i16ReturnValStart48XsFunc == R_SUPPORT);

}
