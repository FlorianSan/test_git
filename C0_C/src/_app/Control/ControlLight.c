//==================================================================================================
//! @file ControlLight.c
//! @brief Control system
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 17.12.2018 HYDAC/CK
//! @history: #- CK 23.07.2018 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "ControlLight.h"
//NEOTEC
#include <SpeedMaxTranslationRail.h>
//NEOTEC
//-----------------------------------------------------------------------------------------------------
//! @brief Control Light
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 23.07.2018 HYDAC/CK
//!
//! @change  24.05.2019 NEOTEC/FV
//!			 19.09.2019	HYDAC/CK	 - Add two Cmd to control the right and left bakset lights
//!
//! @care
//! @todo
//
//07.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vControlLight(TVoid)
{
	/* =============================================================================================*/
	/* 									Info rail translation direction to pilot light				*/
	/* =============================================================================================*/

	static TBoolean boWarningLightsOn = FALSE;/*Var retain*/

	TBoolean RisingbogKeySignalDanger = FALSE;
	static TBoolean PreviousbogKeySignalDanger = FALSE;
	/* Rising bogKeySignalDanger*/
	RisingbogKeySignalDanger = FALSE;
	if (gDb_tRamEvision7C0.bogKeySignalDanger == TRUE && PreviousbogKeySignalDanger == FALSE)
		RisingbogKeySignalDanger = TRUE;
	/* Memorize the previous value*/
	PreviousbogKeySignalDanger = gDb_tRamEvision7C0.bogKeySignalDanger;

	/*boWarningLightsOn
	set*/
	if(RisingbogKeySignalDanger == TRUE && boWarningLightsOn == FALSE)
		boWarningLightsOn = TRUE;
	/*reset*/
	else if ( (RisingbogKeySignalDanger == TRUE && boWarningLightsOn == TRUE)
	|| (gDb_tNvMemoryC0.u8LightMode != 2))
		boWarningLightsOn = FALSE;

	gCsr_tMsg1C0SendToEvision7.bogSignalDangerMode = boWarningLightsOn ; //Provisoire

	/*boBlinkOn;*/
	static TBoolean boBlinkOff = FALSE;
	static TInt16 i16cpt =0;
	TInt16 i16cptmax =gDb_tNvParametersC0.i16PeriodBlinkoffWhiteLight; //75 = environ 750ms
	if(boWarningLightsOn == TRUE && boBlinkOff == FALSE)
	{
		i16cpt=i16cpt+1;
		if (i16cpt>=i16cptmax)
		{
			boBlinkOff = TRUE;
			i16cpt = 0;
		}
	}
	else if(boWarningLightsOn == TRUE && boBlinkOff == TRUE)
	{
		i16cpt=i16cpt+1;
		if (i16cpt>=i16cptmax)
		{
			boBlinkOff = FALSE;
			i16cpt = 0;
		}
	}
	else
	{
		boBlinkOff = FALSE;
		i16cpt = 0;
	}


	TBoolean RisingbogKeyNextMode = FALSE;
	static TBoolean PreviousbogKeyNextMode = FALSE;
	/* Rising bogKeyNextMode*/
	RisingbogKeyNextMode = FALSE;
	if (gDb_tRamEvision7C0.bogKeyNextMode == TRUE && PreviousbogKeyNextMode == FALSE)
		RisingbogKeyNextMode = TRUE;
	/* Memorize the previous value*/
	PreviousbogKeyNextMode = gDb_tRamEvision7C0.bogKeyNextMode;

	TBoolean RisingbogKeyPrevMode = FALSE;
	static TBoolean PreviousbogKeyPrevMode = FALSE;
	/* Rising bogKeyPrevMode*/
	RisingbogKeyPrevMode = FALSE;
	if (gDb_tRamEvision7C0.bogKeyPrevMode == TRUE && PreviousbogKeyPrevMode == FALSE)
		RisingbogKeyPrevMode = TRUE;
	/* Memorize the previous value*/
	PreviousbogKeyPrevMode = gDb_tRamEvision7C0.bogKeyPrevMode;

	/*i8LightsMode*/
	if(gDb_tNvMemoryC0.u8LightMode<=0 || gDb_tNvMemoryC0.u8LightMode>3 )
		gDb_tNvMemoryC0.u8LightMode = 1;
	if(RisingbogKeyNextMode == TRUE)
	{
		gDb_tNvMemoryC0.u8LightMode = gDb_tNvMemoryC0.u8LightMode + 1;
		if (gDb_tNvMemoryC0.u8LightMode>3)
			gDb_tNvMemoryC0.u8LightMode = 1;
	}
	if(RisingbogKeyPrevMode == TRUE)
	{
		gDb_tNvMemoryC0.u8LightMode = gDb_tNvMemoryC0.u8LightMode - 1;
		if (gDb_tNvMemoryC0.u8LightMode<1)
			gDb_tNvMemoryC0.u8LightMode = 3;
	}


	/* reset light command*/
	gDb_tRamEcuOutputsC0.boWhiteLightAVGCommand = FALSE;
	gDb_tRamEcuOutputsC0.boWhiteLightAVDCommand = FALSE;
	gDb_tRamEcuOutputsC0.boWhiteLightARGCommand = FALSE;
	gDb_tRamEcuOutputsC0.boWhiteLightARDCommand = FALSE;
	gDb_tRamEcuOutputsC0.boRedLightAVGCommand = FALSE;
	gDb_tRamEcuOutputsC0.boRedLightAVDCommand = FALSE;
	gDb_tRamEcuOutputsC0.boRedLightARGCommand = FALSE;
	gDb_tRamEcuOutputsC0.boRedLightARDCommand = FALSE;
	gDb_tRamGeneralC0.boWhiteLightARDBasketCmd = FALSE;
	gDb_tRamGeneralC0.boWhiteLightARGBasketCmd = FALSE;
	gDb_tRamGeneralC0.boRedLightARDBasketCmd = FALSE;
	gDb_tRamGeneralC0.boRedLightARGBasketCmd = FALSE;
	gDb_tRamEcuOutputsC0.boWhiteLightsTrailerCommand = FALSE;
	gDb_tRamEcuOutputsC0.boRedLightsTrailerCommand = FALSE;

	/*boPostRadioSeleted*/
	TBoolean    boPostRadioSeleted;
	if(gDb_tRamEcuC0RcvFromC1.eC1NacellePostSelector != GE_DI_ON
	&& gDb_tRamEcuC0RcvFromC1.eC1TurretPostSelector != GE_DI_ON
	&& gDb_tRamEcuC0RcvFromC1.eC1RadioPostSelector == GE_DI_ON )
		boPostRadioSeleted = TRUE;
	else
		boPostRadioSeleted = FALSE;

	//GREEN
	static TUint16 u16ElectricThresholdForward = 0;
	static TUint16 u16ElectricThresholdReverse = 0;
	u16ElectricThresholdForward = gDb_tNvParamGreenEffC0.u8MinPvgTransRailElectricAv * gDb_tRamGeneralC0.u16EcuVoltage / 100;	/* min Av*/
	u16ElectricThresholdReverse = gDb_tNvParamGreenEffC0.u8MinPvgTransRailElectricAr * gDb_tRamGeneralC0.u16EcuVoltage / 100;	/* min Ar*/


	if(boPostRadioSeleted == FALSE)
	{
		/* check if Ev Forward Pump transmission is over at 0*/
		if(gDb_tRamEcuOutputsC0.u16ForwardPumpCommand > 0 || gDb_tRamEcuOutputsC0.u16PvgTransRailElectricCmd > u16ElectricThresholdForward) //NEW GREEN
		{
			gDb_tRamGeneralC0.eRailTranslationDirection = GE_AV_RAIL_DIR;
		}
		else if(gDb_tRamEcuOutputsC0.u16BackwardPumpCommand > 0 || gDb_tRamEcuOutputsC0.u16PvgTransRailElectricCmd < u16ElectricThresholdReverse) //NEW GREEN
		{
			gDb_tRamGeneralC0.eRailTranslationDirection = GE_AR_RAIL_DIR;
		}
		/* check if Joystick is on neutral position*/
		else if(gDb_tRam48XsInputsC0.boCenteredAdvanceJoystick == TRUE)
			{
				gDb_tRamGeneralC0.eRailTranslationDirection = GE_STOP_RAIL_DIR;
			}
		}
	else

		gDb_tRamGeneralC0.eRailTranslationDirection = GE_STOP_RAIL_DIR;



	/*Mode 1*/
	if (gDb_tNvMemoryC0.u8LightMode == 1 && boPostRadioSeleted == FALSE)
	{
		/* check if the translation direction is forward*/
		if(gDb_tRamGeneralC0.eRailTranslationDirection == GE_AV_RAIL_DIR)
		{
			gDb_tRamEcuOutputsC0.boWhiteLightAVGCommand = TRUE;
			gDb_tRamEcuOutputsC0.boWhiteLightAVDCommand = TRUE;
			gDb_tRamEcuOutputsC0.boRedLightARGCommand = TRUE;
			gDb_tRamEcuOutputsC0.boRedLightARDCommand = TRUE;
		}
		/*else if the translation direction is backward*/
		else if(gDb_tRamGeneralC0.eRailTranslationDirection == GE_AR_RAIL_DIR)
		{
			gDb_tRamEcuOutputsC0.boWhiteLightARGCommand = TRUE;
			gDb_tRamEcuOutputsC0.boWhiteLightARDCommand = TRUE;
			gDb_tRamEcuOutputsC0.boRedLightAVGCommand = TRUE;
			gDb_tRamEcuOutputsC0.boRedLightAVDCommand = TRUE;
		}
		/*else if the translation direction is stop*/
		else if(gDb_tRamGeneralC0.eRailTranslationDirection == GE_STOP_RAIL_DIR)
		{
			gDb_tRamEcuOutputsC0.boRedLightAVGCommand = TRUE;
			gDb_tRamEcuOutputsC0.boRedLightAVDCommand = TRUE;
			gDb_tRamEcuOutputsC0.boRedLightARGCommand = TRUE;
			gDb_tRamEcuOutputsC0.boRedLightARDCommand = TRUE;
		}

		/* =============================================================================================*/
		/* 									Light basket												*/
		/* =============================================================================================*/
		vLightBasket(gDb_tRamEcuC0RcvFromC1.boTurretInRearCenterPos,gDb_tRamEcuC0RcvFromC1.boTurretInFrontCenterPos);
	}
	/*Mode 2*/
	if (gDb_tNvMemoryC0.u8LightMode == 2 && boPostRadioSeleted == FALSE)
	{
		/* check if the translation direction is forward*/
		if(gDb_tRamGeneralC0.eRailTranslationDirection == GE_AV_RAIL_DIR)
		{
			gDb_tRamEcuOutputsC0.boWhiteLightAVGCommand = TRUE;
			gDb_tRamEcuOutputsC0.boWhiteLightAVDCommand = TRUE;
			gDb_tRamEcuOutputsC0.boRedLightARGCommand = TRUE;
			gDb_tRamEcuOutputsC0.boRedLightARDCommand = TRUE;
		}
		/*else if the translation direction is backward*/
		else if(gDb_tRamGeneralC0.eRailTranslationDirection == GE_AR_RAIL_DIR)
		{
			gDb_tRamEcuOutputsC0.boWhiteLightARGCommand = TRUE;
			gDb_tRamEcuOutputsC0.boWhiteLightARDCommand = TRUE;
			gDb_tRamEcuOutputsC0.boRedLightAVGCommand = TRUE;
			gDb_tRamEcuOutputsC0.boRedLightAVDCommand = TRUE;
		}
		/*else if the translation direction is stop*/
		else if(gDb_tRamGeneralC0.eRailTranslationDirection == GE_STOP_RAIL_DIR)
		{
			gDb_tRamEcuOutputsC0.boRedLightAVGCommand = TRUE;
			gDb_tRamEcuOutputsC0.boRedLightAVDCommand = TRUE;
			gDb_tRamEcuOutputsC0.boRedLightARGCommand = TRUE;
			gDb_tRamEcuOutputsC0.boRedLightARDCommand = TRUE;
		}

		/* =============================================================================================*/
		/* 									Light basket												*/
		/* =============================================================================================*/
		vLightBasket(gDb_tRamEcuC0RcvFromC1.boTurretInRearCenterPos,gDb_tRamEcuC0RcvFromC1.boTurretInFrontCenterPos);

		if(boWarningLightsOn == TRUE)
		{
			gDb_tRamEcuOutputsC0.boRedLightAVGCommand = FALSE;
			gDb_tRamEcuOutputsC0.boRedLightAVDCommand = FALSE;
			gDb_tRamEcuOutputsC0.boRedLightARGCommand = FALSE;
			gDb_tRamEcuOutputsC0.boRedLightARDCommand = FALSE;
			gDb_tRamGeneralC0.boRedLightARDBasketCmd  = FALSE;
			gDb_tRamGeneralC0.boRedLightARGBasketCmd  = FALSE;
			if (boBlinkOff == FALSE)
			{
				gDb_tRamEcuOutputsC0.boWhiteLightAVGCommand = TRUE;
				gDb_tRamEcuOutputsC0.boWhiteLightAVDCommand = TRUE;
				gDb_tRamEcuOutputsC0.boWhiteLightARGCommand = TRUE;
				gDb_tRamEcuOutputsC0.boWhiteLightARDCommand = TRUE;

				if(gDb_tRamEcuC0RcvFromC1.boTurretInRearCenterPos == TRUE || gDb_tRamEcuC0RcvFromC1.boTurretInFrontCenterPos == TRUE)
				{
					gDb_tRamGeneralC0.boWhiteLightARDBasketCmd = TRUE;
					gDb_tRamGeneralC0.boWhiteLightARGBasketCmd = TRUE;
				}
			}
		}
	}
	/*Mode 3*/
	else if(gDb_tNvMemoryC0.u8LightMode == 3 && boPostRadioSeleted == FALSE)
	{
		gDb_tRamEcuOutputsC0.boWhiteLightAVGCommand = TRUE;
		gDb_tRamEcuOutputsC0.boWhiteLightARGCommand = TRUE;
		if(gDb_tRamEcuC0RcvFromC1.boTurretInRearCenterPos == TRUE)
		{
			gDb_tRamGeneralC0.boWhiteLightARGBasketCmd = TRUE;
		}
		if(gDb_tRamEcuC0RcvFromC1.boTurretInFrontCenterPos == TRUE)
		{
			gDb_tRamGeneralC0.boWhiteLightARDBasketCmd = TRUE;
		}
	}


	/* =============================================================================================*/
	/* 									Lights 15746												*/
	/* =============================================================================================*/
	/* RisingbogKeyWhiteLights15746*/
	TBoolean RisingbogKeyWhiteLights15746 = FALSE;
	static TBoolean PreviousbogKeyWhiteLights15746 = FALSE;
	if (gDb_tRamEvision7C0.bogKeyWhiteLights15746 == TRUE && PreviousbogKeyWhiteLights15746 == FALSE)
		RisingbogKeyWhiteLights15746 = TRUE;
	/* Memorize the previous value*/
	PreviousbogKeyWhiteLights15746 = gDb_tRamEvision7C0.bogKeyWhiteLights15746;

	/*set*/
	if(RisingbogKeyWhiteLights15746 == TRUE && gDb_tRamGeneralC0.boActiveWhiteLights15746 == FALSE)
		gDb_tRamGeneralC0.boActiveWhiteLights15746 = TRUE;
	/*reset*/
	else if (RisingbogKeyWhiteLights15746 == TRUE && gDb_tRamGeneralC0.boActiveWhiteLights15746 == TRUE)
		gDb_tRamGeneralC0.boActiveWhiteLights15746 = FALSE;

	/*Function*/
	if(gDb_tRamGeneralC0.boActiveWhiteLights15746 == TRUE && gDb_tRamEcuC0RcvFromC1.boOptionWhiteLight15746 == TRUE && boAccesSiteSpeedCondition == TRUE)
	{
		if(gDb_tRamGeneralC0.eRailTranslationDirection == GE_AV_RAIL_DIR)
		{
			gDb_tRamGeneralC0.boWhiteLightAv15746Command = TRUE;
			gDb_tRamGeneralC0.boWhiteLightAr15746Command = FALSE;
		}
		else if(gDb_tRamGeneralC0.eRailTranslationDirection == GE_AR_RAIL_DIR)
		{
			gDb_tRamGeneralC0.boWhiteLightAv15746Command = FALSE;
			gDb_tRamGeneralC0.boWhiteLightAr15746Command = TRUE;
		}
		else
		{
			gDb_tRamGeneralC0.boWhiteLightAv15746Command = FALSE;
			gDb_tRamGeneralC0.boWhiteLightAr15746Command = FALSE;
		}
	}
	else
	{
		gDb_tRamGeneralC0.boWhiteLightAv15746Command = FALSE;
		gDb_tRamGeneralC0.boWhiteLightAr15746Command = FALSE;
	}


	/* =============================================================================================*/
	/* 									Light Trailer												*/
	/* =============================================================================================*/
	gDb_tRamEcuOutputsC0.boWhiteLightsTrailerCommand = gDb_tRamEcuOutputsC0.boWhiteLightAVGCommand;
	gDb_tRamEcuOutputsC0.boRedLightsTrailerCommand = gDb_tRamEcuOutputsC0.boRedLightAVGCommand;

	/* =============================================================================================*/
	/* 									Forcing White Raillight										*/
	/* =============================================================================================*/
	/* RisingBoForcingWhiteRaillight*/
	TBoolean RisingBoForcingWhiteRaillight = FALSE;
	static TBoolean PreviousBoForcingWhiteRaillight = FALSE;
	if (gDb_tRamEvision4C0.bogForcingWhiteRaillight == TRUE && PreviousBoForcingWhiteRaillight == FALSE)
		RisingBoForcingWhiteRaillight = TRUE;
	/* Memorize the previous value*/
	PreviousBoForcingWhiteRaillight = gDb_tRamEvision4C0.bogForcingWhiteRaillight;

	/*boForcingWhiteRaillightOn*/
	static TBoolean boForcingWhiteRaillightOn = FALSE;
	/*set*/
	if(gDb_tRamEcuC0RcvFromC1.eC1RadioPostSelector == GE_DI_ON
	&& RisingBoForcingWhiteRaillight == TRUE
	&& boForcingWhiteRaillightOn == FALSE)
		boForcingWhiteRaillightOn = TRUE;
	/*reset*/
	else if ( (RisingBoForcingWhiteRaillight == TRUE && boForcingWhiteRaillightOn == TRUE)
	|| gDb_tRamEcuC0RcvFromC1.eC1RadioPostSelector != GE_DI_ON )
		boForcingWhiteRaillightOn = FALSE;

	gCsr_tMsg1C0SendToOpus.boWhiteRailsLightsON = boForcingWhiteRaillightOn;
	if(boForcingWhiteRaillightOn == TRUE)
	{
		gDb_tRamEcuOutputsC0.boWhiteLightAVGCommand = TRUE;
		gDb_tRamEcuOutputsC0.boWhiteLightAVDCommand = TRUE;
		gDb_tRamEcuOutputsC0.boWhiteLightARGCommand = TRUE;
		gDb_tRamEcuOutputsC0.boWhiteLightARDCommand = TRUE;
		gDb_tRamEcuOutputsC0.boRedLightAVGCommand = FALSE;
		gDb_tRamEcuOutputsC0.boRedLightAVDCommand = FALSE;
		gDb_tRamEcuOutputsC0.boRedLightARGCommand = FALSE;
		gDb_tRamEcuOutputsC0.boRedLightARDCommand = FALSE;
		gDb_tRamGeneralC0.boWhiteLightARDBasketCmd = FALSE;
		gDb_tRamGeneralC0.boWhiteLightARGBasketCmd = FALSE;
		gDb_tRamGeneralC0.boRedLightARDBasketCmd = FALSE;
		gDb_tRamGeneralC0.boRedLightARGBasketCmd = FALSE;
		gDb_tRamEcuOutputsC0.boWhiteLightsTrailerCommand = FALSE;
		gDb_tRamEcuOutputsC0.boRedLightsTrailerCommand = FALSE;
	}


	/* =============================================================================================*/
	/* 									Neon														*/
	/* =============================================================================================*/
	/* RisingBoNeonLights*/
	TBoolean RisingBoNeonLights = FALSE;
	static TBoolean PreviousBoNeonLights = FALSE;
	if (gDb_tRamEvision4C0.bogForcingNeons == TRUE && PreviousBoNeonLights == FALSE)
		RisingBoNeonLights = TRUE;
	/* Memorize the previous value*/
	PreviousBoNeonLights = gDb_tRamEvision4C0.bogForcingNeons;

	/*BoNeonLightsOn*/
	static TBoolean BoNeonLightsOn = FALSE;
	/*set*/
	if(RisingBoNeonLights == TRUE
	&& BoNeonLightsOn == FALSE)
		BoNeonLightsOn = TRUE;
	/*reset*/
	else if (RisingBoNeonLights == TRUE
	&& BoNeonLightsOn == TRUE)
		BoNeonLightsOn = FALSE;

	gCsr_tMsg1C0SendToOpus.bogNeonsON = BoNeonLightsOn;
	gDb_tRamEcuOutputsC0.boNeonLightsCmd = BoNeonLightsOn;

}
		/* =============================================================================================*/
		/* 									Light basket												*/
		/* =============================================================================================*/


//-----------------------------------------------------------------------------------------------------
//! @brief Control Light basket
//!
//! @param[in] 		 TBoolean			- RearZoneCentred turret
//! @param[in] 		 TBoolean			- Speed Axle sensor
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 27.02.2019 HYDAC/CK
//!
//! @change	19.09.2019	HYDAC/CK - Add two Cmd to control the right and left bakset lights
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vLightBasket(TBoolean boRearZoneCentredTurret , TBoolean boFrontZoneCentredTurret)
{
	/* check if the turret is in rear zone centred*/
	if(boRearZoneCentredTurret == TRUE)
	{
		/* check if the translation direction is forward*/
		if(gDb_tRamGeneralC0.eRailTranslationDirection == GE_AV_RAIL_DIR)
		{
			gDb_tRamGeneralC0.boWhiteLightARDBasketCmd = FALSE;
			gDb_tRamGeneralC0.boWhiteLightARGBasketCmd = FALSE;
			gDb_tRamGeneralC0.boRedLightARDBasketCmd = TRUE;
			gDb_tRamGeneralC0.boRedLightARGBasketCmd = TRUE;
		}
		/* check if the translation direction is backward*/
		else if(gDb_tRamGeneralC0.eRailTranslationDirection == GE_AR_RAIL_DIR)
		{
			gDb_tRamGeneralC0.boWhiteLightARDBasketCmd = TRUE;
			gDb_tRamGeneralC0.boWhiteLightARGBasketCmd = TRUE;
			gDb_tRamGeneralC0.boRedLightARDBasketCmd = FALSE;
			gDb_tRamGeneralC0.boRedLightARGBasketCmd = FALSE;
		}
		/* check if the translation is stopped*/
		else if(gDb_tRamGeneralC0.eRailTranslationDirection == GE_STOP_RAIL_DIR)
		{
			gDb_tRamGeneralC0.boWhiteLightARDBasketCmd = FALSE;
			gDb_tRamGeneralC0.boWhiteLightARGBasketCmd = FALSE;
			gDb_tRamGeneralC0.boRedLightARDBasketCmd = TRUE;
			gDb_tRamGeneralC0.boRedLightARGBasketCmd = TRUE;
		}
	}
	else if(boFrontZoneCentredTurret == TRUE)
	{
		/* check if the translation direction is forward*/
		if(gDb_tRamGeneralC0.eRailTranslationDirection == GE_AV_RAIL_DIR)
		{
			gDb_tRamGeneralC0.boWhiteLightARDBasketCmd = TRUE;
			gDb_tRamGeneralC0.boWhiteLightARGBasketCmd = TRUE;
			gDb_tRamGeneralC0.boRedLightARDBasketCmd = FALSE;
			gDb_tRamGeneralC0.boRedLightARGBasketCmd = FALSE;
		}
		/* check if the translation direction is backward*/
		else if(gDb_tRamGeneralC0.eRailTranslationDirection == GE_AR_RAIL_DIR)
		{
			gDb_tRamGeneralC0.boWhiteLightARDBasketCmd = FALSE;
			gDb_tRamGeneralC0.boWhiteLightARGBasketCmd = FALSE;
			gDb_tRamGeneralC0.boRedLightARDBasketCmd = TRUE;
			gDb_tRamGeneralC0.boRedLightARGBasketCmd = TRUE;
		}
		/* check if the translation is stopped*/
		else if(gDb_tRamGeneralC0.eRailTranslationDirection == GE_STOP_RAIL_DIR)
		{
			gDb_tRamGeneralC0.boWhiteLightARDBasketCmd = FALSE;
			gDb_tRamGeneralC0.boWhiteLightARGBasketCmd = FALSE;
			gDb_tRamGeneralC0.boRedLightARDBasketCmd = TRUE;
			gDb_tRamGeneralC0.boRedLightARGBasketCmd = TRUE;
		}
	}
	else
	{
		gDb_tRamGeneralC0.boWhiteLightARDBasketCmd = FALSE;
		gDb_tRamGeneralC0.boWhiteLightARGBasketCmd = FALSE;
		gDb_tRamGeneralC0.boRedLightARDBasketCmd = FALSE;
		gDb_tRamGeneralC0.boRedLightARGBasketCmd = FALSE;
	}
}


