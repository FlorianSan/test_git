
//==================================================================================================
//! @file ControlMast.c
//! @brief Control mast measurement function
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Matthieu Stark (MS)
//! @created 13.02.2019 HYDAC/MS
//! @history: #- MS 13.02.2019 HYDAC/MS interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "ControlMast.h"


//-----------------------------------------------------------------------------------------------------
//! @brief Control mast measurement function
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 13.02.2019 HYDAC/MS
//!
//! @change	 15.03.2019 HYDAC/CK
//! @change	 11.04.2019 NEOTEC/FV add gDb_tNvOptionsC1.boMeasuringMat in folder position
//! @change	 16.04.2019 NEOTEC/FV change mode telescope or Mast Measure
//! @change	 02.07.2019 HYDAC/CK  change u32DetermineDistanceWithMastMeasure function and rename function to i32DetermineDistanceWithMastMeasure
//!
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
extern TVoid vControlMast(TVoid)
{
	/* reset all variables*/
	gDb_tRamEcuOutputsC1.boEvUpMastMeasureActivation = FALSE;
	gDb_tRamEcuOutputsC1.boEvDownMastMeasureActivation = FALSE;

	/* update value of the mast with calibration and add offset to get the real value*/
	gDb_tRamMastMeasureC1.u16EncodeurMastMeasureCentimeter = u16CorrectEncodeurMast(gDb_tRamEcuC1RcvFromC0.u32EncodeurMastMeasureRaw,
																				gDb_tNvParamMastC1.u32MinValueEncodeurMast,
																				gDb_tNvParamMastC1.u32MaxValueEncodeurMast,
																				gDb_tNvParamMastC1.u16MinCentimeterEncodeurMast,
																				gDb_tNvParamMastC1.u16MaxCentimeterEncodeurMast,
																				gDb_tNvParamMastC1.i16Offset_Mast_Centimeter
																				);

	/*-----------------------------------------------------------------------------------------------------*/
	/*  Determine no movement is during and all command are in neutral position*/
	/*-----------------------------------------------------------------------------------------------------*/
	gDb_tRamMastMeasureC1.boNoMovementIsDuringAndNeutralCmd = ((gDb_tRamGeneralC1.i16ScalingJoysDeltaArm == 0)
												  && (gDb_tRamGeneralC1.i16ScalingJoysArrowArm == 0)
												  && (gDb_tRamGeneralC1.i16ScalingJoysTelescopeArm == 0)
												  && (gDb_tRamEvision4C1.bogDelta_Arm_Move_Up == FALSE)
												  && (gDb_tRamEvision4C1.bogDelta_Arm_Move_Down == FALSE)
												  && (gDb_tRamEvision4C1.bogArrow_Move_Up == FALSE)
												  && (gDb_tRamEvision4C1.bogArrow_Move_Down == FALSE)
												  && (gDb_tRamEvision4C1.bogTelescope_Move_In == FALSE)
												  && (gDb_tRamEvision4C1.bogTelescope_Move_Out == FALSE)
												  && (gDb_tRamEvision4C1.bogBasket_Inclinaison_Move_Up == FALSE)
												  && (gDb_tRamEvision4C1.bogBasket_Inclinaison_Move_Down == FALSE)
												  && (gDb_tRam48XsInputsC1.boUpInclinaisonBasketButton == FALSE)
												  && (gDb_tRam48XsInputsC1.boDownInclinaisonBasketButton == FALSE)
												  && (gDb_tRamRcvRadioCmdC1.boUpPendularOrRotTurretCtClock == FALSE)
												  && (gDb_tRamRcvRadioCmdC1.boDownPendularOrRotTurretClock == FALSE)
												  && (gDb_tRamEvision4C1.bogPendular_Move_Up == FALSE)
												  && (gDb_tRamEvision4C1.bogPendular_Move_Down == FALSE)
												  && (gDb_tRam48XsInputsC1.boUpPendularButton == FALSE)
												  && (gDb_tRam48XsInputsC1.boDownPendularButton == FALSE)
												  && (gDb_tRamEvision4C1.bogBasket_Rotate_Counter_ClockWise == FALSE)
												  && (gDb_tRamEvision4C1.bogBasket_Rotate_ClockWise == FALSE)
												  && (gDb_tRam48XsInputsC1.boRotationCtClockwiseBasketButton == FALSE)
												  && (gDb_tRam48XsInputsC1.boRotationClockwiseBasketButton == FALSE)
												  && (gDb_tRamRcvRadioCmdC1.boRotFrameCtClkwiseButton == FALSE)
												  && (gDb_tRamRcvRadioCmdC1.boRotFrameClkwiseButton == FALSE)
												  && (gDb_tRamEvision4C1.bogTurret_Rotate_ClockWise == FALSE)
												  && (gDb_tRamEvision4C1.bogTurret_Rotate_Counter_ClockWise == FALSE)
												  && (gDb_tRamGeneralC1.i16ScalingJoysTurret == 0)
												  && (gDb_tRamRcvRadioCmdC1.boUpAxleOscillant == FALSE)
												  && (gDb_tRamRcvRadioCmdC1.boDownAxleOscillant == FALSE)
												  && (gDb_tRamRcvRadioCmdC1.boUpAxleFixe == FALSE)
												  && (gDb_tRamRcvRadioCmdC1.boDownAxleFixe == FALSE)
												  && (gDb_tRamGeneralC1.boBypassArmDelta == FALSE)
												  && (gDb_tRamGeneralC1.boBypassArmArrow == FALSE)
												  && (gDb_tRamGeneralC1.boBypassArmTelescope == FALSE)
												  && (gDb_tRamEcuOutputsC1.boEvUpPendularCommandBool == FALSE)
												  && (gDb_tRamEcuOutputsC1.boEvDownPendularCommandBool == FALSE)
												  && (gDb_tRamEcuOutputsC1.boEvRotationBasketCtClkWiseCmdBool == FALSE)
												  && (gDb_tRamEcuOutputsC1.boEvRotationBasketClkWiseCmdBool == FALSE)
												  && (gDb_tRamEcuOutputsC1.boEvUpInclinaisonBasketCmdBool == FALSE)
												  && (gDb_tRamEcuOutputsC1.boEvDownInclinaisonBasketCmdBool == FALSE)
												  && (gDb_tRamEcuOutputsC1.boEvRotTurretClockwiseCmdBool == FALSE)
												  && (gDb_tRamEcuOutputsC1.boEvRotTurretCtClockwiseCmdBool  == FALSE)
												);

	/* Scaling joystick regarding % batteries*/
	gDb_tRamMastMeasureC1.i16ScalingJoyMatTelescope = vCl_3_Pos_Analog_Input((TInt16)gDb_tRam48XsInputsC1.u16TelescopeArmAxisJoysitck,(TInt16)gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs/4,
												(TInt16)(gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs/2),(TInt16)gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs*3/4,
												-10000,0,10000,gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs*gDb_tNvParametersC1.u8DeadZoneJoystickTelescope/100);

	/* run the function only if option is active, else do nothing*/
	if(gDb_tNvOptionsC1.boMeasuringMat)
	{
		if(gDb_tRamMastMeasureC1.boNoMovementIsDuringAndNeutralCmd && gDb_tRamEvision7C1.bogActivateMeasuringMast
		&& gDb_tRamEcuC1RcvFromC0.boAuthorizeWork == TRUE
		&& gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_NACELLE
		)
		{
		/* if yes, set the function active and movement are inhibited*/
			gDb_tRamMastMeasureC1.boFonction_Active = TRUE;
		}
		else if(gDb_tRamEvision7C1.bogActivateMeasuringMast == FALSE
		|| gDb_tRamMastMeasureC1.i16ScalingJoyMatTelescope == 0
		|| gDb_tRamEcuC1RcvFromC0.boAuthorizeWork == FALSE)
		{
			gDb_tRamMastMeasureC1.boFonction_Active = FALSE;
		}

		/* check if command are neutral and button pushed (rising edge function)*/
		if(gDb_tRamMastMeasureC1.boNoMovementIsDuringAndNeutralCmd && gDb_tRamEvision7C1.bogActivateMeasuringMast)
		{
			/* if yes, set the function active and movement are inhibited*/
			gDb_tRamMastMeasureC1.boStop_Movement_By_Mast = TRUE;
		}
		else if(gDb_tRamEvision7C1.bogActivateMeasuringMast == FALSE
		&& gDb_tRamMastMeasureC1.i16ScalingJoyMatTelescope == 0
		&& gDb_tRamEcuOutputsC1.boEvBypassCommand == FALSE
		)
		{
			gDb_tRamMastMeasureC1.boStop_Movement_By_Mast = FALSE;
		}
	}
	else
	{
		gDb_tRamMastMeasureC1.boFonction_Active = FALSE;
		gDb_tRamMastMeasureC1.boStop_Movement_By_Mast = FALSE;
	}

	/* Scaling joystick regarding % batteries*/
	gDb_tRamMastMeasureC1.boAuthorize_Driving = gDb_tRamMastMeasureC1.boFonction_Active && gDb_tRam48XsInputsC1.boDeadManPedal && gDb_tRamEvision7C1.bogActivateMeasuringMast;


	/* control Ev mast measure command with telescope joystick and authorize driving*/
	if(gDb_tRamMastMeasureC1.i16ScalingJoyMatTelescope > 0 && gDb_tRamMastMeasureC1.boAuthorize_Driving)
	{
		gDb_tRamEcuOutputsC1.boEvUpMastMeasureActivation = TRUE;
		gDb_tRamEcuOutputsC1.boEvDownMastMeasureActivation = FALSE;
	}
	else if(gDb_tRamMastMeasureC1.i16ScalingJoyMatTelescope < 0 && gDb_tRamMastMeasureC1.boAuthorize_Driving)
	{
		gDb_tRamEcuOutputsC1.boEvUpMastMeasureActivation = FALSE;
		gDb_tRamEcuOutputsC1.boEvDownMastMeasureActivation = TRUE;
	}
	else
	{
		gDb_tRamEcuOutputsC1.boEvUpMastMeasureActivation = FALSE;
		gDb_tRamEcuOutputsC1.boEvDownMastMeasureActivation = FALSE;
	}

	gDb_tRamEcuOutputsC1.boEvUpMastMeasureActivation = gDb_tRamEcuOutputsC1.boEvUpMastMeasureActivation &&
															(gDb_tRamEcuOutputsC1.boEvDownMastMeasureCmd == FALSE) &&
															(gDb_tRamEcuOutputsC1.boEvUpAxleOscillantCmd == FALSE )&&
															(gDb_tRamEcuOutputsC1.boEvDownAxleOscillantCmd == FALSE) &&
															(gDb_tRamEcuOutputsC1.boEvUpAxleFixeCmd == FALSE) &&
															(gDb_tRamEcuOutputsC1.boEvDownAxleFixeCmd == FALSE) &&
															(gDb_tRamEcuOutputsC1.boEvUpInclinaisonBasketCmdBool == FALSE) &&
															(gDb_tRamEcuOutputsC1.boEvRotationBasketClkWiseCmdBool == FALSE) &&
															(gDb_tRamEcuOutputsC1.boEvDownInclinaisonBasketCmdBool == FALSE) &&
															(gDb_tRamEcuOutputsC1.boEvRotationBasketCtClkWiseCmdBool == FALSE) &&
															(gDb_tRamEcuOutputsC1.boEvDownPendularCommandBool == FALSE) &&
															(gDb_tRamEcuOutputsC1.boEvUpPendularCommandBool == FALSE) &&
															(gDb_tRamEcuOutputsC1.boEvRotTurretClockwiseCmdBool == FALSE) &&
															(gDb_tRamEcuOutputsC1.boEvRotTurretCtClockwiseCmdBool == FALSE);

	gDb_tRamEcuOutputsC1.boEvDownMastMeasureActivation = gDb_tRamEcuOutputsC1.boEvDownMastMeasureActivation &&
															(gDb_tRamEcuOutputsC1.boEvUpMastMeasureCmd == FALSE) &&
															(gDb_tRamEcuOutputsC1.boEvUpAxleOscillantCmd == FALSE )&&
															(gDb_tRamEcuOutputsC1.boEvDownAxleOscillantCmd == FALSE) &&
															(gDb_tRamEcuOutputsC1.boEvUpAxleFixeCmd == FALSE) &&
															(gDb_tRamEcuOutputsC1.boEvDownAxleFixeCmd == FALSE) &&
															(gDb_tRamEcuOutputsC1.boEvUpInclinaisonBasketCmdBool == FALSE) &&
															(gDb_tRamEcuOutputsC1.boEvRotationBasketClkWiseCmdBool == FALSE) &&
															(gDb_tRamEcuOutputsC1.boEvDownInclinaisonBasketCmdBool == FALSE) &&
															(gDb_tRamEcuOutputsC1.boEvRotationBasketCtClkWiseCmdBool == FALSE) &&
															(gDb_tRamEcuOutputsC1.boEvDownPendularCommandBool == FALSE) &&
															(gDb_tRamEcuOutputsC1.boEvUpPendularCommandBool == FALSE) &&
															(gDb_tRamEcuOutputsC1.boEvRotTurretClockwiseCmdBool == FALSE) &&
															(gDb_tRamEcuOutputsC1.boEvRotTurretCtClockwiseCmdBool == FALSE);

	/*check if authorize driving is true and no action on telescope joystick then pilot down oscillant axle*/
	if(gDb_tRamMastMeasureC1.boAuthorize_Driving
	&& gDb_tRamMastMeasureC1.i16ScalingJoyMatTelescope == 0
	&& ( gDb_tRamEcuC1RcvFromC0.boUpFixeAxlePos == FALSE || gDb_tRamEcuC1RcvFromC0.boUpOsciAxlePos == FALSE) //23.09.2019
	)
	{
		gDb_tRamMastMeasureC1.boDownAxleOscillantForMast = TRUE;
	}
	else
	{
		gDb_tRamMastMeasureC1.boDownAxleOscillantForMast = FALSE;
	}

	/*-----------------------------------------------------------------------------------------------------*/
	/*  Determine folded mat position*/
	/*-----------------------------------------------------------------------------------------------------*/
	/* If folded threshold reached then set the folded flag*/
	if(gDb_tRamMastMeasureC1.u16EncodeurMastMeasureCentimeter <= gDb_tNvParamMastC1.i16FoldedMastThres && gDb_tNvOptionsC1.boMeasuringMat == TRUE)
		gDb_tRamMastMeasureC1.boFolded_Position_Mast = TRUE;
	/* Else if hysteresis point reached then reset the flag*/
	else if(gDb_tRamMastMeasureC1.u16EncodeurMastMeasureCentimeter >= gDb_tNvParamMastC1.i16FoldedMastThres + gDb_tNvParamMastC1.i16FoldedMastHyst)
		gDb_tRamMastMeasureC1.boFolded_Position_Mast = FALSE;

	if(gDb_tNvOptionsC1.boMeasuringMat == FALSE)
		gDb_tRamMastMeasureC1.boFolded_Position_Mast = TRUE;

	/*-----------------------------------------------------------------------------------------------------*/
	/*  Display distance traveled in meter on control screen*/
	/*-----------------------------------------------------------------------------------------------------*/
	/* check if position of mat measure is unfolded*/
	if(gDb_tRamMastMeasureC1.boFolded_Position_Mast == FALSE)
	{
		gDb_tRamMastMeasureC1.boVisibleDistanceTraveledMat = TRUE;
	}
	/* check if active function mast measure is pressed on screen*/
	else if(gDb_tRamEvision7C1.bogActivateMeasuringMast)
	{
		/*display distance traveled on screen*/
		gDb_tRamMastMeasureC1.boVisibleDistanceTraveledMat = TRUE;
	}
	else
	{
		gDb_tRamMastMeasureC1.boVisibleDistanceTraveledMat = FALSE;
	}


	/*-----------------------------------------------------------------------------------------------------*/
	/*  Mast function for SNCF : Mise en voie sous caténaires électrifiées*/
	/*-----------------------------------------------------------------------------------------------------*/

	/*Détection mât position haute*/
	if (gDb_tRamData4C1RcvFromC0.boUpMastSensorNC == TRUE)
		gDb_tRamMastMeasureC1.boMastInUpperPosition = TRUE;
	else
		gDb_tRamMastMeasureC1.boMastInUpperPosition = FALSE;

	/*Détection mât de contact et pantho replié*/
	if (gDb_tRamData4C1RcvFromC0.boMeasuringMastSensorFolded == TRUE)
		gDb_tRamMastMeasureC1.boMastPanthoInFoldedPosition = TRUE;
	else
		gDb_tRamMastMeasureC1.boMastPanthoInFoldedPosition = FALSE;

	/*Détection vanne position descente mât*/
	if (gDb_tRamData4C1RcvFromC0.boValveInDownPositionSensor == TRUE)
		gDb_tRamMastMeasureC1.boValveInDownPosition = TRUE;
	else
		gDb_tRamMastMeasureC1.boValveInDownPosition = FALSE;

	/*Interdiction des postes*/
	if (gDb_tNvOptionsC1.boContactMastSNCFOption == TRUE
	&&  gDb_tRam48XsInputsC1.boAuthorizationWorkKey == FALSE
	&& (gDb_tRamMastMeasureC1.boValveInDownPosition == FALSE || gDb_tRamMastMeasureC1.boMastPanthoInFoldedPosition == FALSE))
		gDb_tRamMastMeasureC1.boPostInterdictionMastSNCF = TRUE;
	else
		gDb_tRamMastMeasureC1.boPostInterdictionMastSNCF = FALSE;

	/*Mémorisation mât de contact premier cycle valide*/
	/*mise à un*/
	if((gDb_tRam48XsInputsC1.boAuthorizationWorkKey == TRUE
	&& gDb_tRamMastMeasureC1.boMastInUpperPosition == TRUE
	&& gDb_tRamMastMeasureC1.boValveInDownPosition == FALSE
	&& gDb_tRamGeneralC1.boRunningStable48XS == TRUE
	)
	||(gDb_tRamMastMeasureC1.boMastPanthoInFoldedPosition == TRUE
	&& gDb_tNvOptionsC1.boContactMastSNCFOption == FALSE
	&& gDb_tRamGeneralC1.boRunningStable48XS == TRUE))
		gDb_tRamMastMeasureC1.boMemoFirstValidCycleMast = TRUE;

	/*mise à zéro*/
	if(((gDb_tRam48XsInputsC1.boAuthorizationWorkKey == FALSE && gDb_tRamGeneralC1.boRunningStable48XS == TRUE) || gDb_tRamEcuInputsC1.eRadioPostSelectorState == GE_DI_ON)
//	|| (gDb_tRam48XsInputsC1.boAuthorizationWorkKey == TRUE || gDb_tRamMastMeasureC1.boMastPanthoInFoldedPosition == FALSE))
	&& gDb_tNvOptionsC1.boContactMastSNCFOption == TRUE)
		gDb_tRamMastMeasureC1.boMemoFirstValidCycleMast = FALSE;

	/*Mat SNCF autorisation de mouvement*/
	if((gDb_tRamMastMeasureC1.boMemoFirstValidCycleMast == TRUE && (gDb_tRamMastMeasureC1.boMastPanthoInFoldedPosition == TRUE || gDb_tRamMastMeasureC1.boMastInUpperPosition == TRUE))
	|| gDb_tNvOptionsC1.boContactMastSNCFOption == FALSE
	|| gDb_tRamEcuC1RcvFromC0.boUpFixeAxlePos == TRUE
	|| gDb_tRamEcuC1RcvFromC0.boUpOsciAxlePos == TRUE
	|| gDb_tRamEcuC1RcvFromC0.eSelectedControlPost != GE_POST_NACELLE)
		gDb_tRamMastMeasureC1.boContactMastAutorisationOfMvts = TRUE;
	else
		gDb_tRamMastMeasureC1.boContactMastAutorisationOfMvts = FALSE;


	/*Mat SNCF interdiction des poste nacelle et tourelle*/
	if((gDb_tRamEcuC1RcvFromC0.eSelectedControlPost != GE_POST_RADIO
	&& gDb_tRamEcuC1RcvFromC0.boDownAxleFixeSensor == TRUE
	&& gDb_tRamEcuC1RcvFromC0.boDownAxleOscillantSensor == TRUE
	&&(gDb_tRamEcuInputsC1.eTurretPostSelectorState == GE_DI_ON || gDb_tRamEcuInputsC1.eNacellePostSelectorState == GE_DI_ON)
	)
	&& gDb_tNvOptionsC1.boContactMastSNCFOption == TRUE

	&& (gDb_tRam48XsInputsC1.boAuthorizationWorkKey == FALSE//NEOTEC IG TEST
	&& (gDb_tRamMastMeasureC1.boValveInDownPosition == FALSE || gDb_tRamMastMeasureC1.boMastPanthoInFoldedPosition == FALSE))
	)
		gDb_tRamMastMeasureC1.boInterdictionOfNacelleTurretPost = TRUE;
	else
		gDb_tRamMastMeasureC1.boInterdictionOfNacelleTurretPost = FALSE;

	/*Envoie de l'info "Faire cycle de mat" à l'écran*/
	if(gDb_tRamMastMeasureC1.boMemoFirstValidCycleMast == FALSE
	&& gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_NACELLE
	&& gDb_tNvOptionsC1.boContactMastSNCFOption == TRUE
	&& gDb_tRamEcuC1RcvFromC0.boUpFixeAxlePos == FALSE
	&& gDb_tRamEcuC1RcvFromC0.boUpOsciAxlePos == FALSE
	&& gDb_tRam48XsInputsC1.boAuthorizationWorkKey == TRUE
	&& gDb_tRamGeneralC1.boBlinkLow)
		gDb_tRamMastMeasureC1.boPictoWarningFirstValidCycleMast = TRUE;
	else
		gDb_tRamMastMeasureC1.boPictoWarningFirstValidCycleMast = FALSE;

}

//-----------------------------------------------------------------------------------------------------
//! @brief Encodeur mast position with calibration value
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 15.03.2019 HYDAC/CK
//! @change	 17.04.2019 NEOTEC/FV Change dec to inc
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TUint16 u16CorrectEncodeurMast(TUint32 u32EncodeurMastMeasureRaw,TUint32 u32MinEncodeur,TUint32 u32MaxEncodeur,TUint16 u16MinEncodeurCentimeter,TUint16 u16MaxEncodeurCentimeter,TInt16 i16OffsetCentimeter)
{
	TUint16 u16CorrectEncodeurMast = 0;
	TInt32 i32DeltaMaxMinForScalingFunc = 0;
	TInt32 i32DeltaBetweenAcutalValAndMinEncodeur = 0;
	const TUint32 u32U30MAX = 1073741823;
	const TUint32 u32GapToDetecOutdatedEncodeur = 1000;
	TUint32 u32MinMoinGap = 0;

	u32EncodeurMastMeasureRaw = u32U30MAX - u32EncodeurMastMeasureRaw;
	u32MinEncodeur = u32U30MAX - u32MinEncodeur;
	u32MaxEncodeur = u32U30MAX - u32MaxEncodeur;


	/*-----------------------------------------------------------------------------------------------------*/
	/* Calcul delta beetween Max and Min encodeur calibration value*/
	/*-----------------------------------------------------------------------------------------------------*/
	/*check if Max value is higher at Min calibration value*/
	if(u32MaxEncodeur > u32MinEncodeur)
	{
		i32DeltaMaxMinForScalingFunc = u32MaxEncodeur - u32MinEncodeur;
	}
	else /* Max value is lower at Min calibration value*/
	{
		i32DeltaMaxMinForScalingFunc = u32U30MAX - u32MinEncodeur;
		i32DeltaMaxMinForScalingFunc = i32DeltaMaxMinForScalingFunc  + u32MaxEncodeur;
	}

	/*-----------------------------------------------------------------------------------------------------*/
	/* Calcul delta beetween Actual value encodeur and Min encodeur calibration value*/
	/*-----------------------------------------------------------------------------------------------------*/
	if(u32MinEncodeur > u32GapToDetecOutdatedEncodeur)
	{
		u32MinMoinGap = u32MinEncodeur - u32GapToDetecOutdatedEncodeur;
	}
	else
	{
		u32MinMoinGap = 0;
	}


	/* check if raw value is lower at min encodeur calibration value and offset to be sure encodeut at outdated max range value*/
	if(u32EncodeurMastMeasureRaw < u32MinMoinGap)
	{
		i32DeltaBetweenAcutalValAndMinEncodeur  = u32U30MAX - u32MinEncodeur;
		i32DeltaBetweenAcutalValAndMinEncodeur  = i32DeltaBetweenAcutalValAndMinEncodeur + u32EncodeurMastMeasureRaw;
	}
	/* Encodeur raw value is just below at min calibration value , then value is 0*/
	else if (u32EncodeurMastMeasureRaw < u32MinEncodeur)
	{
		i32DeltaBetweenAcutalValAndMinEncodeur = 0;
	}
	/* Raw value is higher at min encodeur calibration value , then calculate difference between them*/
	else
	{
		i32DeltaBetweenAcutalValAndMinEncodeur =  u32EncodeurMastMeasureRaw - u32MinEncodeur;
	}

	/*-----------------------------------------------------------------------------------------------------*/
	/* Limit value of delta to be sure delta is not out of range for scaling function*/
	/*-----------------------------------------------------------------------------------------------------*/

	i32DeltaBetweenAcutalValAndMinEncodeur = i32RangeMinMax(i32DeltaBetweenAcutalValAndMinEncodeur,0,i32DeltaMaxMinForScalingFunc);

	/*-----------------------------------------------------------------------------------------------------*/
	/* Scaling function to get Mast measured in Centimeter*/
	/*-----------------------------------------------------------------------------------------------------*/

	u16CorrectEncodeurMast = i32CalcLinear2Dots(i32DeltaBetweenAcutalValAndMinEncodeur,0,u16MinEncodeurCentimeter,i32DeltaMaxMinForScalingFunc,u16MaxEncodeurCentimeter);

	/*-----------------------------------------------------------------------------------------------------*/
	/*  add offset to get the real value*/
	/*-----------------------------------------------------------------------------------------------------*/

	u16CorrectEncodeurMast = u16CorrectEncodeurMast + i16OffsetCentimeter;

	/* return Encodeur Mast in centimeter*/
	return u16CorrectEncodeurMast;
}
