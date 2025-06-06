//==================================================================================================
//! @file ControlTrackTranslationFunc.c
//! @brief Control Track translation on chenillard
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 23.07.2018 HYDAC/CK
//! @history: #- CK 23.07.2018 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "ControlTrackTranslationFunc.h"

// GLOBAL VARIABLES DECLARATIONS ==================================================================

TBoolean boFaultPressurePowerReduction;



//-----------------------------------------------------------------------------------------------------
//! @brief Control track translation
//!
//!
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 23.07.2018 HYDAC/CK
//! @change	13.05.2019 NEOTEC/FV	 Deleted vAngularRadioControl because doesn't exist.
//! @change	 14.05.2019 HYDAC/CK	Change gDb_tRamEcuOutputsC0.EvForwardCommand to gDb_tRamGeneralC0.u16EvForwardTrackConsigne
//!
//! @care
//! @todo
//
//07.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vControlTrackTranslation(TVoid)
{
	/* Control crawler advancement*/
	vCrawlerAdvancement(gDb_tRamSelectControlPost.eSelectedControlPost,(TUint16)gDb_tRamEcuInputRadioControl.u8LeftManipulator,
						(TUint16)gDb_tRamEcuInputRadioControl.u8RightManipulator, gDb_tRamEcuInputRadioControl.eLeftManipulatorPosition,
						gDb_tRamEcuInputRadioControl.eRightManipulatorPosition, &gDb_tRamEcuOutputsC0.u16PvgLeftTrackCommand,&gDb_tRamEcuOutputsC0.u16PvgRightTrackCommand,
						&gDb_tRamEcuOutputsC0.boSupllyPvgLeftTrackCommand,&gDb_tRamEcuOutputsC0.boSupllyPvgRightTrackCommand);
	/* control brake crawler*/
	vBrakeCrawler(&gDb_tRamEcuOutputsC0.boEvServiceBrakeTrackCommand);
	/* control pump*/
	vPumpControl(&gDb_tRamGeneralC0.u16EvForwardTrackConsigne);

	/* pilot Ev deflactor for off rail translation*/
	static TBoolean  boEvDevRailElectricModeCmdDelay = FALSE;
	/*Mise à un*/
	if (gDb_tRamEcuOutputsC0.boEvDevRailElectricModeCmd == TRUE)
		boEvDevRailElectricModeCmdDelay = TRUE;
	/*Mise à zéro*/
	if ((gDb_tRamEcuOutputsC0.boEvDevRailElectricModeCmd == FALSE
	&& gDb_tRamEcuOutputsC0.boEvParkBrakeAxleOscillantCmdBool == FALSE
	&& gDb_tRamEcuOutputsC0.boEvParkBrakeAxleFixeCmdBool == FALSE)
	||
	gDb_tRamEcuC0RcvFromC1.i32RegimeMotorAlternatorRpm >= 500 )
		boEvDevRailElectricModeCmdDelay = FALSE;

	gDb_tRamEcuOutputsC0.boEvDeflectorTransmissionCommand = (gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_RADIO || boEvDevRailElectricModeCmdDelay == TRUE);
}



//-----------------------------------------------------------------------------------------------------
//! @brief Control track translation
//!
//! @param[in]	 EControlPost 		- Move of Nacelle mode ( Off rail, Nacelle , Turret)
//! @param[in]	 EOffRailMode 			- Move of off rail mode ( transport, work , workshop)
//! @param[in]	 TUint16				- Manipulator Left
//! @param[in]	 TUint16				- Manipulator Right
//! @param[in] 	 EManipulatorPosition	- Manipulator Left Position
//! @param[in] 	 EManipulatorPosition	- Manipulator Right Position
//! @param[out]  TUint16	 			- Output track left command
//! @param[out]  TUint16	 			- Output track right Command
//! @param[out]  TBoolean	 			- Output supply track left command
//! @param[out]  TBoolean	 			- Output supply track right command
//!
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 23.07.2018 HYDAC/CK
//!
//! @change  19.12.2018 HYDAC/CK		- Add Rail detection condition to disenable advance of track
//!
//!			 29.01.2019 HYDAC/CK		- Add limit setpoint between 2 track
//			 22.03.2019 NEOTEC/FV		- Select parameter if not the Same Direction
//			 05.04.2019 HYDAC/CK		- add new parameter(u16GapMaxInvertedPvgCrawler) for calculation of gap if not the same direction
//			 10.04.2019 NEOTEC/FV		- cut forward only hook is down and inductive
//			 23.04.2019 HYDAC/CK		- move condition selectedControlPost radio to authorize movement
//			 08.04.2019 HYDAC/CK		- change function i16ProportionalFunction2 to vPropVoltPvgFunction for left and right PVG
//										- add variable for new function vPropVoltPvgFunction :  i16ParamMaxPvgLeftTrack i16ParamMinPvgLeftTrack i16ParamMaxPvgRightTrack  i16ParamMinPvgRightTrack
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vCrawlerAdvancement(EControlPost eSelectedControlPost, TUint16 u16LeftManipulator,TUint16 u16RightManipulator,
					EManipulatorPosition eManipulatorLeftPosition, EManipulatorPosition eManipulatorRightPosition,TUint16 *u16LeftTrackPvgCommand,
					TUint16 *u16RightTrackPvgCommand, TBoolean *boSupplyTrackLeft,TBoolean *boSupplyTrackRight)
{
	/* local variable*/
	TUint16 u16GapMaxPvgCrawlerAdvancementSelected = 0;



	TInt16 aiVoltageRangePvgLeftTack[5] = {0,0,0,0,0};
	aiVoltageRangePvgLeftTack[0] = gDb_tRamGeneralC0.u16EcuVoltage / 2;	/* off voltage*/
	aiVoltageRangePvgLeftTack[1] = gDb_tNvParametersC0.u8MaxPvgLeftTrackAv * gDb_tRamGeneralC0.u16EcuVoltage / 100;	/* max up*/
	aiVoltageRangePvgLeftTack[2] = gDb_tNvParametersC0.u8MaxPvgLeftTrackAr * gDb_tRamGeneralC0.u16EcuVoltage / 100;	/* max down*/
	aiVoltageRangePvgLeftTack[3] = gDb_tNvParametersC0.u8MinPvgLeftTrackAv * gDb_tRamGeneralC0.u16EcuVoltage / 100;	/* min up*/
	aiVoltageRangePvgLeftTack[4] = gDb_tNvParametersC0.u8MinPvgLeftTrackAr * gDb_tRamGeneralC0.u16EcuVoltage / 100;	/* min down*/

	TInt16 aiVoltageRangePvgRightTack[5] = {0,0,0,0,0};
	aiVoltageRangePvgRightTack[0] = gDb_tRamGeneralC0.u16EcuVoltage / 2;	/* off voltage*/
	aiVoltageRangePvgRightTack[1] = gDb_tNvParametersC0.u8MaxPvgRightTrackAv * gDb_tRamGeneralC0.u16EcuVoltage / 100;	/* max up*/
	aiVoltageRangePvgRightTack[2] = gDb_tNvParametersC0.u8MaxPvgRightTrackAr * gDb_tRamGeneralC0.u16EcuVoltage / 100;	/* max down*/
	aiVoltageRangePvgRightTack[3] = gDb_tNvParametersC0.u8MinPvgRightTrackAv * gDb_tRamGeneralC0.u16EcuVoltage / 100;	/* min up*/
	aiVoltageRangePvgRightTack[4] = gDb_tNvParametersC0.u8MinPvgRightTrackAr * gDb_tRamGeneralC0.u16EcuVoltage / 100;	/* min down*/


	TInt16 i16ParamMaxPvgLeftTrack = gDb_tNvParametersC0.u8MaxPvgLeftTrackAv * gDb_tRamGeneralC0.u16EcuVoltage / 100;	/* max up*/
	TInt16 i16ParamMinPvgLeftTrack = gDb_tNvParametersC0.u8MaxPvgLeftTrackAr * gDb_tRamGeneralC0.u16EcuVoltage / 100;	/* max down*/

	TInt16 i16ParamMaxPvgRightTrack = gDb_tNvParametersC0.u8MaxPvgRightTrackAv * gDb_tRamGeneralC0.u16EcuVoltage / 100;	/* max up*/
	TInt16 i16ParamMinPvgRightTrack = gDb_tNvParametersC0.u8MaxPvgRightTrackAr * gDb_tRamGeneralC0.u16EcuVoltage / 100;	/* max down*/


			/* =============================================================================================*/
			/*										 Pvg left & right translation crawler					*/
			/* =============================================================================================*/

		gDb_tRamGeneralC0.i16OutputLutLeftManipulator = i16CalcLinear2Dots(i16CastU16(u16LeftManipulator), 0, 0,255, 10000);

			/* check if the manipulator left position is Ar*/
			if(eManipulatorLeftPosition == GE_AR)
			{
				gDb_tRamGeneralC0.i16OutputLutLeftManipulator = -gDb_tRamGeneralC0.i16OutputLutLeftManipulator;
			}
			else if(eManipulatorLeftPosition == GE_ERROR || eManipulatorLeftPosition == GE_NEUTRAL)
			{
				gDb_tRamGeneralC0.i16OutputLutLeftManipulator = 0;
			}

			/* LUT mise a l'echelle right manipulator*/

			gDb_tRamGeneralC0.i16OutputLutRightManipulator = i16CalcLinear2Dots(i16CastU16(u16RightManipulator), 0, 0,	255, 10000);
			/* check if the manipulator right position is Ar*/
			if(eManipulatorRightPosition == GE_AR)
			{
				gDb_tRamGeneralC0.i16OutputLutRightManipulator = -gDb_tRamGeneralC0.i16OutputLutRightManipulator;
			}
			else if(eManipulatorRightPosition == GE_ERROR || eManipulatorRightPosition == GE_NEUTRAL)
			{
				gDb_tRamGeneralC0.i16OutputLutRightManipulator = 0;
			}


			/*check, if not the Same Direction*/
			if((gDb_tRamGeneralC0.i16OutputLutLeftManipulator>0 && gDb_tRamGeneralC0.i16OutputLutRightManipulator<0) || (gDb_tRamGeneralC0.i16OutputLutLeftManipulator<0 && gDb_tRamGeneralC0.i16OutputLutRightManipulator>0))
			{
				u16GapMaxPvgCrawlerAdvancementSelected = gDb_tNvParametersC0.u16GapMaxInvertedPvgCrawler;
			}
			else
			{
				u16GapMaxPvgCrawlerAdvancementSelected =gDb_tNvParametersC0.u16GapMaxPvgCrawlerAdvancement;
			}



			/* calcul delta beetween left and right Pvg crawler to limit setpoint*/
			gDb_tRamGeneralC0.u16DeltaBeetweenLeftRightPvgCrawler = u16AbsI16(gDb_tRamGeneralC0.i16OutputLutLeftManipulator - gDb_tRamGeneralC0.i16OutputLutRightManipulator);

			/*check if delta is lower at parameters*/
			if(gDb_tRamGeneralC0.u16DeltaBeetweenLeftRightPvgCrawler <= u16GapMaxPvgCrawlerAdvancementSelected)
			{
				/* no limit is apply*/
				gDb_tRamGeneralC0.i16ConsigneLeftPvgTrack = gDb_tRamGeneralC0.i16OutputLutLeftManipulator;
				gDb_tRamGeneralC0.i16ConsigneRightPvgTrack = gDb_tRamGeneralC0.i16OutputLutRightManipulator;
			}
			/* apply limit*/
			else
			{
				/* limit setpoint between 2 track pvg*/
				gDb_tRamGeneralC0.i16ConsigneLeftPvgTrack = (u16GapMaxPvgCrawlerAdvancementSelected*gDb_tRamGeneralC0.i16OutputLutLeftManipulator)/gDb_tRamGeneralC0.u16DeltaBeetweenLeftRightPvgCrawler;
				gDb_tRamGeneralC0.i16ConsigneRightPvgTrack = (u16GapMaxPvgCrawlerAdvancementSelected*gDb_tRamGeneralC0.i16OutputLutRightManipulator)/gDb_tRamGeneralC0.u16DeltaBeetweenLeftRightPvgCrawler;
			}


			if(gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_RADIO
			&& gDb_tRamEcuInputsC0.eRailHookSensorState == GE_DI_ON /*hook down*/
			)
				gDb_tRamEcuOutputsC0.boEvPowerReductionCommand = TRUE;
			else
				gDb_tRamEcuOutputsC0.boEvPowerReductionCommand = FALSE;

			/*boPressurePowerReductionHight*/
			static TBoolean boPressurePowerReductionHight = FALSE;
			if( gDb_tRamEcuOutputsC0.boEvPowerReductionCommand == TRUE
			&&  gDb_tRamEcuC0RcvFromC1.i32RegimeMotorAlternatorRpm >=500
			&& (gDb_tRamEcuC0RcvFromC1.boOutOfRangeTransmissionPressure == TRUE
				|| gDb_tRamEcuC0RcvFromC1.i16Transmission1Pressure > gDb_tNvParamAlarmC0.i16MinTransPressureWithoutHook
			    || gDb_tRamEcuC0RcvFromC1.i16Transmission2Pressure > gDb_tNvParamAlarmC0.i16MinTransPressureWithoutHook)
			)
				boPressurePowerReductionHight = TRUE;
			else
				boPressurePowerReductionHight = FALSE;

			/*u16cptPres*/
			static TUint16 u16cptPres =0;
			static TUint16 u16cptPresMax =0;
			u16cptPresMax = gDb_tNvParametersC0.u16TimeFaultPressureReducCrawler; /* tempo 50*10ms =500ms*/
			if(boPressurePowerReductionHight == TRUE)
			{
				if (u16cptPres>=u16cptPresMax)
					u16cptPres=u16cptPresMax;
				else
					u16cptPres=u16cptPres+1;
			}
			else if (boPressurePowerReductionHight == FALSE)
				u16cptPres=0;


			/*Set*/
			if(u16cptPres == u16cptPresMax //Fault
			&& gDb_tRamEcuOutputsC0.boEvPowerReductionCommand == TRUE
			&& (gDb_tRamGeneralC0.i16ConsigneLeftPvgTrack>0  || gDb_tRamGeneralC0.i16ConsigneRightPvgTrack>0) //Mav
			)
				boFaultPressurePowerReduction = TRUE;
			/*Reset*/
			if ((u16cptPres != u16cptPresMax //No Fault
			&& gDb_tRamGeneralC0.i16ConsigneLeftPvgTrack == 0
			&& gDb_tRamGeneralC0.i16ConsigneRightPvgTrack == 0 )
			|| gDb_tRamEcuOutputsC0.boEvPowerReductionCommand == FALSE
			|| gDb_tRamSelectControlPost.eSelectedControlPost != GE_POST_RADIO
			)
				boFaultPressurePowerReduction = FALSE;


			/*=============================================================================================*/
			/*								 Authorize forward movement			 						   */
			/*=============================================================================================*/

			/* check if  ladder is close, offrail transport position , inductive rail not deteted of forcing advance*/
			if((gDb_tRam48XsInputsC0.boFoldedLadderSensor == TRUE || gDb_tNvOptionsC0.boLadder == FALSE)
			&& 	gDb_tRamTransportPosC0.eTransportPosition == GE_OFFRAIL_TRANSPORT_POSITION
			&& eSelectedControlPost == GE_POST_RADIO
			&& (((gDb_tRamEcuInputsC0.eInductiveRailSensorState != GE_DI_ON || gDb_tRamEcuInputRadioControl.boForcingAdvanceTrack) && gDb_tRamEcuInputsC0.eRailHookSensorState == GE_DI_ON )
				||gDb_tRamEcuInputsC0.eRailHookSensorState != GE_DI_ON )
			&& boFaultPressurePowerReduction == FALSE
			)
			{
				gDb_tRamGeneralC0.boAuthorizeForwardCrawler = TRUE;
			}
			else
			{
				gDb_tRamGeneralC0.boAuthorizeForwardCrawler = FALSE;
			}

			/*=============================================================================================*/
			/*								 Authorize backward movement			 					   */
			/*=============================================================================================*/

			/* check if ladder is close, offrail transport position , inductive rail not deteted of forcing advance*/
			if((gDb_tRam48XsInputsC0.boFoldedLadderSensor == TRUE || gDb_tNvOptionsC0.boLadder == FALSE)
			&& gDb_tRamTransportPosC0.eTransportPosition == GE_OFFRAIL_TRANSPORT_POSITION
			&& eSelectedControlPost == GE_POST_RADIO)

			{
				gDb_tRamGeneralC0.boAuthorizeBackwardCrawler = TRUE;
			}
			else
			{
				gDb_tRamGeneralC0.boAuthorizeBackwardCrawler = FALSE;
			}

			/* Safety authorization translation track*/
			vSafetyAuthorizeTransTrack();


			vPropVoltPvgFunctionTOR(gDb_tRamGeneralC0.i16ConsigneLeftPvgTrack,

								gDb_tRamGeneralC0.boAuthorizeForwardCrawler,gDb_tRamGeneralC0.boAuthorizeBackwardCrawler,
								&tLeftTrackPvgRamp,gDb_tNvParametersC0.au16TimeRampLeftTrack,
								aiVoltageRangePvgLeftTack,
								i16ParamMaxPvgLeftTrack,i16ParamMinPvgLeftTrack,
								&gDb_tRamGeneralC0.i16OutputLutLeftTrackPvg,
								&*boSupplyTrackLeft,
								&gDb_tRamGeneralC0.i16OutLutLeftManipulatorAfterRamp);


			vPropVoltPvgFunctionTOR(gDb_tRamGeneralC0.i16ConsigneRightPvgTrack,

								gDb_tRamGeneralC0.boAuthorizeForwardCrawler,gDb_tRamGeneralC0.boAuthorizeBackwardCrawler,
								&tRightTrackPvgRamp,gDb_tNvParametersC0.au16TimeRampRightTrack,
								aiVoltageRangePvgRightTack,
								i16ParamMaxPvgRightTrack,i16ParamMinPvgRightTrack,
								&gDb_tRamGeneralC0.i16OutputLutRightTrackPvg,
								&*boSupplyTrackRight,
								&gDb_tRamGeneralC0.i16OutLutRightManipulatorAfterRamp);

			/* =============================================================================================*/
			/* 									affect to output function variable							*/
			/* =============================================================================================*/

			*u16LeftTrackPvgCommand = u16CastI16(gDb_tRamGeneralC0.i16OutputLutLeftTrackPvg);
			*u16RightTrackPvgCommand = u16CastI16(gDb_tRamGeneralC0.i16OutputLutRightTrackPvg);

}
//-----------------------------------------------------------------------------------------------------
//! @brief Control brack crawler advance
//!
//! @param[in] 	 EManipulatorPosition	- Manipulator Left Position
//! @param[in] 	 EManipulatorPosition	- Manipulator Right Position
//! @param[out]  TBoolean	 			- Output Ev Service Brake Command
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 23.07.2018 HYDAC/CK
//!
//! @change  14.12.2018 HYDAC/CK	- remove else condition to check end of ramp
//!			 18.12.2018 HYDAC/CK	- change conditon to wait end of ramp pvg to ramp of manipulator
//!			 28.01.2019 HYDAC/CK	- change conditon to wait end of ramp of manipulator
//!			 09.05.2019 NEOTEC/FV	- change conditon to wait end of ramp of manipulator
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vBrakeCrawler(/*//NEOTEC WARNING EManipulatorPosition eManipulatorLeftPosition, EManipulatorPosition eManipulatorRightPosition,*/TBoolean *boEvServiceBrakeCommand)
{
	/* =============================================================================================*/
	/* 									Brake control												*/
	/* =============================================================================================*/

	if (gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_RADIO
	&& (gDb_tRamGeneralC0.i16OutLutLeftManipulatorAfterRamp != 0 || gDb_tRamGeneralC0.i16OutLutRightManipulatorAfterRamp != 0))
		/* No Brake when output is TRUE*/
		*boEvServiceBrakeCommand = TRUE;
	else
		/* Brake when output is FALSE*/
		*boEvServiceBrakeCommand = FALSE;

}

//-----------------------------------------------------------------------------------------------------
//! @brief Control pump
//!
//! @param[in]	 TUint16				- Manipulator Left
//! @param[in]	 TUint16				- Manipulator Right
//! @param[in]	 TBoolean				- Force Silent Motor
//! @param[out]  TUint16	 			- Output Forward Pump Transmission command
//!
//!
//! @globvar

//! @staticvar
//!
//! @created 23.07.2018 HYDAC/CK
//!
//! @change  17.12.2018 HYDA/CK			- remove else condition to reset variable because Ev forward is reset at start ControlFunc
//! @change  09.01.2018 HYDA/CK			- change lut signal to In1ProAxisPilotOut1PropEvFunction
//! @change  05.02.2019 HYDA/CK			- check movement regarding consigne Left and right pvg with limitation beetween them , remove check movement regarding joystick
//! @change  22.03.2019 NEOTEC/FV		- Remove silence mode & calculating pump after ramp Manipulator
//! @change  09.05.2019 NEOTEC/FV		- Change set zero foward pummp and limit speed in fault temp
//! @change  14.05.2019 HYDAC/CK		- add gDb_tRamGeneralC0.u16EvForwardTrackConsigne == 0 condition to authorize movement
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vPumpControl(TUint16 *u16FordwardPumpTransmissonCommand)
{
	/*boAlarmHydTempCrawlerActive*/
	TInt16 i16Thres;
	//set
	if(gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_RADIO
	&& gDb_tRamEcuInputsC0.i16TemperatureTransmissionValue >= gDb_tNvParamAlarmC0.u16TempTrackOverAlarmThres)
		gDb_tRamGeneralC0.boAlarmHydTempCrawlerActive = TRUE;
	//reset
	i16Thres = 0;
	if(gDb_tNvParamAlarmC0.u16TempTrackOverAlarmThres > gDb_tNvParamAlarmC0.u16HystTempTrans)
		i16Thres = gDb_tNvParamAlarmC0.u16TempTrackOverAlarmThres - gDb_tNvParamAlarmC0.u16HystTempTrans;

	if(gDb_tRamEcuInputsC0.i16TemperatureTransmissionValue <= i16Thres
	|| gDb_tRamSelectControlPost.eSelectedControlPost != GE_POST_RADIO)
		gDb_tRamGeneralC0.boAlarmHydTempCrawlerActive = FALSE;


	/* local variable*/
	TInt16 	aiCurrentRangeEvForward[3] = {0,0,0};
	TBoolean boAuthorizeMovement = FALSE;

	aiCurrentRangeEvForward[0] = 0;   /* no movement*/
	aiCurrentRangeEvForward[1] = gDb_tNvParametersC0.i16MinConsigneEvForwardCrawler;	  /* min current consigne*/

	TFloat32	f32inter;
	TInt16		i16CoefTrack;
	TInt16		i16OutputCoefResultTrack; /* Résultat de la fonction*/
	/* Fonction affine pour le réglage proportionnel de la consigne par rapport à la température de l'huile*/
	i16CoefTrack= i16CalcLinear2Dots((gDb_tRamEcuInputsC0.i16TemperatureTransmissionValue),gDb_tNvParamAlarmC0.u16TempTrackOverFaultThres, gDb_tNvParamAlarmC0.u8ReduceTrackSpeedPercent, gDb_tNvParamAlarmC0.u16TempTrackOverAlarmThres, 100);
	i16OutputCoefResultTrack =(TInt16)i32RangeMinMax (i16CoefTrack,gDb_tNvParamAlarmC0.u8ReduceTrackSpeedPercent,100);
	gDb_tRamGeneralC0.u8ReductionPumpTrack = u8CastI16(i16OutputCoefResultTrack);
	/*Convertion en pourcentage*/
	f32inter = (TFloat32) i16OutputCoefResultTrack /100;
	aiCurrentRangeEvForward[2] = (TInt16)((TFloat32)gDb_tNvParametersC0.i16MaxConsigneEvForwardCrawler * f32inter);


	 /* =============================================================================================*/
	 /*						Forward Pump Transmission  Control chenille								*/
	/* =============================================================================================*/
	/*check if the mode radio control is active*/
	if(gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_RADIO)
	{
		if(gDb_tRamGeneralC0.i16OutLutLeftManipulatorAfterRamp != 0 || gDb_tRamGeneralC0.i16OutLutRightManipulatorAfterRamp != 0)
		{
			/* Calculate  Forward Pump command after ramp*/
			gDb_tRamGeneralC0.i16ConsigneForwardPumpTransmPercent = ((i16AbsI16(gDb_tRamGeneralC0.i16OutLutLeftManipulatorAfterRamp) + i16AbsI16(gDb_tRamGeneralC0.i16OutLutRightManipulatorAfterRamp)) / 2) + (gDb_tNvParametersC0.u8AdditionnalPourcentFwardPumpCmd*100);
			/*verify range min max*/
			gDb_tRamGeneralC0.i16ConsigneForwardPumpTransmPercent = i16RangeMinMax(gDb_tRamGeneralC0.i16ConsigneForwardPumpTransmPercent,gDb_tNvCalibrationC0.ai16ForwardPumpTransmissionXValue[0],gDb_tNvCalibrationC0.ai16ForwardPumpTransmissionXValue[1]);
		}
		else
		{
			gDb_tRamGeneralC0.i16ConsigneForwardPumpTransmPercent = 0;
		}
	}
	else
	{
		gDb_tRamGeneralC0.i16ConsigneForwardPumpTransmPercent = 0;
	}

	/* Authorize pump*/
	if(gDb_tRamGeneralC0.u16EvForwardRailConsigne == 0)
		boAuthorizeMovement = TRUE;
	else
		boAuthorizeMovement = FALSE;

	/* regarding consigne, apply a ramp and convert value to get a PVG output for the arm function*/
	*u16FordwardPumpTransmissonCommand = u16CastI16(In1ProAxisPilotOut1PropEvFunction(gDb_tRamGeneralC0.i16ConsigneForwardPumpTransmPercent,boAuthorizeMovement,
															&tForwardPumpRampCrawlerAdvancement,gDb_tNvParametersC0.au16EvForwardCrawlerAdvanceRampRatio,aiCurrentRangeEvForward));

}


//-----------------------------------------------------------------------------------------------------
//! @brief Control angular radiocontrol
//!
//! @param[in] 	 TUint16				- Angular sensor from radio receiver
//! @param[out]  TUint16	 			- Output track left command
//! @param[out]  TUint16	 			- Output track right Command
//! @param[out]  TBoolean	 			- Output supply track left command
//! @param[out]  TBoolean	 			- Output supply track right command
//! @param[out]  TBoolean	 			- Output Ev Service Brake Command
//! @param[out]  TUint16	 			- Output Speed motor command
//! @param[out]  TUint16	 			- Output Forward Pump Transmission command
//!
//!
//! @globvar
//!
//! @staticvar
//
//!	@parameters
//  gDb_tNvParametersC0.u16LimitTresholdAngleRadioControl			- Treshold to stop movement
//!
//! @created 23.07.2018 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vAngularRadioControl(TUint16 u16AngularSensor,TUint16 *u16LeftTrackPvgCommand, TUint16 *u16RightTrackPvgCommand, TBoolean *boSupplyTrackLeft,
						   TBoolean *boSupplyTrackRight, TBoolean *boEvServiceBrakeCommand, TUint16 *u16SpeedMotorCommand,
						   TUint16 *u16FordwardPumpTransmissonCommand)
{
	/* =============================================================================================*/
	/*								Angular Control													*/
	/* =============================================================================================*/

	/* Safety function stop movement when angularSensor detect a angle to important*/
	if(u16AngularSensor > gDb_tNvParametersC0.u16LimitTresholdAngleRadioControl)
	{
		/* Stop movement*/
		*u16SpeedMotorCommand = 0;
		*u16FordwardPumpTransmissonCommand = 0;
		*boSupplyTrackRight = FALSE;
		*boSupplyTrackLeft = FALSE;
		*u16RightTrackPvgCommand = gDb_tRamGeneralC0.u16EcuVoltage/2;
		*u16LeftTrackPvgCommand = gDb_tRamGeneralC0.u16EcuVoltage/2;
		*boEvServiceBrakeCommand = TRUE;
	}
}

