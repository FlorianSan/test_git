
//==================================================================================================
//! @file BuzzerFunc.c
//! @brief Control buzzer
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 18.03.2019 HYDAC/CK
//! @history: #- CK 18.03.2019 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "BuzzerFunc.h"

//-----------------------------------------------------------------------------------------------------
//! @brief Control buzzer
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 18.03.2019 HYDAC/CK
//!
//! @change  17.12.2019 HYDAC/CK : change data of receive list variable gDb_tRamData4C1RcvFromC0.boSignal_4 to gDb_tRamData4C1RcvFromC0.boSlopeHighWithWorkOnCrawler
//! @change  19.12.2019 HYDAC/CK : add management of gDb_tRamGeneralC1.boLynxOnAllMvts in the file , write before in WriteOutputsFunc.c by Neotec
// 								 : change provisional value of gDb_tNvParametersC1.boNvParametersC1_4 to gDb_tNvOptionsC1.boLynxOnAllMvts
//!
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vBuzzerFunc(TVoid)
{

	/*Alarme pour la détection de la réserve de fuel*/
	TInt16 i16GasGaugeAlarm = gDb_tNvParametersC1.i16GasGaugeAlarm; /*Parametre environ 5L*/
	TInt16 i16GasGaugeHyst = 5; /*environ 5L*/
	static TBoolean boAlarmGasGaugeValue = FALSE;
	if (gDb_tRamEcuInputsC1.i16GasGaugeValue <= i16GasGaugeAlarm)
		boAlarmGasGaugeValue = TRUE;
	else if (gDb_tRamEcuInputsC1.i16GasGaugeValue >= (i16GasGaugeAlarm + i16GasGaugeHyst ))
		boAlarmGasGaugeValue = FALSE;
	gDb_tRam48XsOutputsC1.boGasOilLight = boAlarmGasGaugeValue;

	/*création du bip discotinue du buzzer*/
	static TBoolean boBlinkAlarmGasGauge = FALSE;
	static TBoolean boBlinkOff = FALSE;
	static TInt16 i16cptOn =0;
	static TInt16 i16cptOff =0;
	TInt16 i16cptOnMax =50; //50x20ms = 1000ms
	TInt16 i16cptOffMax =1500; //1500x20ms = 30000ms
	if(boAlarmGasGaugeValue == TRUE && boBlinkOff == FALSE)
	{
		i16cptOn=i16cptOn+1;
		if (i16cptOn>=i16cptOnMax)
		{
			boBlinkOff = TRUE;
			i16cptOff = 0;
		}
	}
	else if(boAlarmGasGaugeValue == TRUE && boBlinkOff == TRUE)
	{
		i16cptOff=i16cptOff+1;
		if (i16cptOff>=i16cptOffMax)
		{
			boBlinkOff = FALSE;
			i16cptOn = 0;
		}
	}
	else
	{
		boBlinkOff = FALSE;
		i16cptOn = 0;
		i16cptOff = 0;
	}

	if(boAlarmGasGaugeValue == TRUE
	&& boBlinkOff == FALSE)
		boBlinkAlarmGasGauge = TRUE;
	else
		boBlinkAlarmGasGauge = FALSE;

//NEOTEC IG DEBUT prévention survitesse
	/*Création du bip rapide pour la prévention de survitesse*/
	static TBoolean boBlinkPreventLimitSpeedExceed = FALSE;
	static TBoolean boBlinkOffPrevent = FALSE;
	static TInt16 i16cptOnPrevent =0;
	static TInt16 i16cptOffPrevent =0;
	TInt16 i16cptOnMaxPrevent =150; /*environ 1000ms*/
	TInt16 i16cptOffMaxPrevent = 150; /*environ 30s*/
	if(gCsr_tData5C0SendToC1.boPreventLimitSpeedExceeding == TRUE && boBlinkOffPrevent == FALSE)
	{
		i16cptOnPrevent=i16cptOnPrevent+1;
		if (i16cptOnPrevent>=i16cptOnMaxPrevent)
		{
			boBlinkOffPrevent = TRUE;
			i16cptOffPrevent = 0;
		}
	}
	else if(gCsr_tData5C0SendToC1.boPreventLimitSpeedExceeding == TRUE && boBlinkOffPrevent == TRUE)
	{
		i16cptOffPrevent=i16cptOffPrevent+1;
		if (i16cptOffPrevent>=i16cptOffMaxPrevent)
		{
			boBlinkOffPrevent = FALSE;
			i16cptOnPrevent = 0;
		}
	}
	else
	{
		boBlinkOffPrevent = FALSE;
		i16cptOnPrevent = 0;
		i16cptOffPrevent = 0;
	}

	if(gCsr_tData5C0SendToC1.boPreventLimitSpeedExceeding == TRUE
	&& boBlinkOffPrevent == FALSE)
		boBlinkPreventLimitSpeedExceed = TRUE;
	else
		boBlinkPreventLimitSpeedExceed = FALSE;
//NEOTEC IG FIN prévention survitesse

	/* Set buzzer when abutment error flag if at least one abutment inconsistency detected*/
	if(gDb_tRamEcuC1RcvFromC0.boWrongAbutments == TRUE
	|| gDb_tRamEcuC1RcvFromC0.boEnableBuzzerSelectPost == TRUE
	|| boOverloadActive == TRUE
	|| (gDb_tRamMastMeasureC1.boFolded_Position_Mast == FALSE && gDb_tNvOptionsC1.boMeasuringMat == TRUE && gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_RADIO)
	|| boBlinkAlarmGasGauge == TRUE
	|| boBlinkPreventLimitSpeedExceed == TRUE//NEOTEC IG prvention survitesse
	|| (gDb_tNvOptionsC1.boPortillon == TRUE && gDb_tRam48XsInputsC1.boClosePortillonSensor == FALSE
		&& gDb_tNvOptionsC1.boLadder == TRUE && gDb_tRam48XsInputsC1.boFoldedLadderSensor == TRUE
		&& gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_NACELLE)
	|| gDb_tRamGeneralNeotecC1.i16WaterTempJ1939 >= 116/*communication moteur perkins*/
	|| gDb_tRamLimitWorkEnvelopeC1.boStopAllMovements == TRUE
	|| gDb_tRamData4C1RcvFromC0.boSlopeHighWithWorkOnCrawler
	)
		gDb_tRam48XsOutputsC1.boBuzzer = TRUE;
	else
		gDb_tRam48XsOutputsC1.boBuzzer = FALSE;

	/*Activation du buzzer Lynx si l'envellope est dépassé/ boLynxOnAllMvts*/
	if(((gDb_tRamEcuOutputsC1.boSupplyPvgDeltaArmCommand == TRUE
		|| gDb_tRamEcuOutputsC1.boSupplyPvgArrowArmCommand == TRUE
		|| gDb_tRamEcuOutputsC1.boSupplyPvgTelescopeArmCommand == TRUE
		|| gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand == TRUE
		|| gDb_tRamEcuC1RcvFromC0.u16EvForwardCommand != 0
		|| gDb_tRamEcuC1RcvFromC0.u16EvBackwardCommand != 0
		|| gDb_tRamEcuC1RcvFromC0.boTranslationMovementIsSolicited == TRUE
		)
	   && gDb_tNvOptionsC1.boLynxOnAllMvts == TRUE
	   )
	|| boBlinkPreventLimitSpeedExceed == TRUE/*NEOTEC IG prvention survitesse*/
	)
		gDb_tRamGeneralC1.boLynxOnAllMvts = TRUE;
	else
		gDb_tRamGeneralC1.boLynxOnAllMvts = FALSE;

//GREEN
	/*boNoisemakerCommand*/
	if(gDb_tRamEcuC1RcvFromC0.boTranslationMovementIsSolicited == TRUE
	&& gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939 == 0
	&& gDb_tNvOptionsC1.boLynxOnAllMvts == FALSE
	)
		gDb_tRamEcuOutputsC1.boNoisemakerCommand = TRUE;
	else
		gDb_tRamEcuOutputsC1.boNoisemakerCommand = FALSE;
//GREEN
}
