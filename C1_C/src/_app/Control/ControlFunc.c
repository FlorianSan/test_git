//==================================================================================================
//! @file Control.c
//! @brief Control system
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 23.07.2018 HYDAC/CK
//! @history: #- CK 23.07.2018 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "ControlFunc.h"

/*==========================================GLOBAL VARIABLES DECLARATIONS ==================================================================*/

TBoolean boStopAllMovementsNacellePost;
TBoolean bo_ARU_C1_Actived;

//-----------------------------------------------------------------------------------------------------
//! @brief Control system
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 23.07.2018 HYDAC/CK
//! @change  08.04.2019 NEOTEC/FV Create variable globale boStopAllMovementsNacellePost
//! @change  10.05.2019 NEOTEC/FV add buzzer
//! @change  12.06.2019 add call function  vSafetyArrowArmLimitation , vSafetyDeltaArmLimitation , vSafetyRotationTurretLimitation
//! @change  24.06.2019 add call function vSafetyOverloadSecurity
//!
//!
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vControl(TVoid)
{

	/*boBlinkLow*/
	gDb_tRamGeneralC1.boBlinkLow = vBlinkLow(&tBlinkLowRamp);

	/*bo_ARU_C1_Actived*/
	if(gDb_tRamEcuInputsC1.eAru1State != GE_DI_OFF || gDb_tRamEcuInputsC1.eAru2State != GE_DI_OFF)
		bo_ARU_C1_Actived = TRUE;
	else
		bo_ARU_C1_Actived = FALSE;


	static TBoolean boNoMovementsNacellePost = FALSE;

	/*boNoMovementsNacellePost*/
	if(gDb_tRamEcuOutputsC1.boEvBypassCommand == FALSE
	&&
	gDb_tRamEcuC1RcvFromC0.boTranslationMovementIsSolicited == FALSE
	&&
	gDb_tRam48XsInputsC1.boDeltaArmJystckCenteredTelescope == TRUE
	&&
	gDb_tRam48XsInputsC1.boArrowJoystickCenteredTurret == TRUE
	&&
	gDb_tRam48XsInputsC1.boCenteredAdvanceJoystick == TRUE
	&&
	gDb_tRam48XsInputsC1.boDeadManPedal == FALSE
	&&
	gDb_tRam48XsInputsC1.boGachette == FALSE
	&&
	gDb_tRam48XsInputsC1.boUpInclinaisonBasketButton == FALSE
	&&
	gDb_tRam48XsInputsC1.boDownInclinaisonBasketButton == FALSE
	&&
	gDb_tRam48XsInputsC1.boUpPendularButton == FALSE
	&&
	gDb_tRam48XsInputsC1.boDownPendularButton == FALSE
	&&
	gDb_tRam48XsInputsC1.boRotationCtClockwiseBasketButton == FALSE
	&&
	gDb_tRam48XsInputsC1.boRotationClockwiseBasketButton == FALSE
	)
	{
		boNoMovementsNacellePost = TRUE;
	}
	else
	{
		boNoMovementsNacellePost = FALSE;
	}

	/*Set*/
	if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost  == GE_POST_NACELLE
	&&
	(((gDb_tNvOptionsC1.boPortillon == TRUE && gDb_tRam48XsInputsC1.boClosePortillonSensor == FALSE)
	||
	(gDb_tNvOptionsC1.boLadder == TRUE && gDb_tRam48XsInputsC1.boFoldedLadderSensor == FALSE))
	||
	boOverloadActive == TRUE)
	)
	{
		gDb_tRamGeneralC1.boStopAllMovementsNacellePost = TRUE;
	}

	/*Reset*/
	if(((gDb_tNvOptionsC1.boPortillon == FALSE || gDb_tRam48XsInputsC1.boClosePortillonSensor == TRUE)
	&&
	((gDb_tNvOptionsC1.boLadder == FALSE || gDb_tRam48XsInputsC1.boFoldedLadderSensor == TRUE) /*|| gDb_tRamAutoStopC1.boTurrentInCenterPos == TRUE*/)
	&&
	boOverloadActive == FALSE
	&&
	boNoMovementsNacellePost == TRUE)
	||
	gDb_tRamEcuC1RcvFromC0.eSelectedControlPost  != GE_POST_NACELLE
	)
	{
		gDb_tRamGeneralC1.boStopAllMovementsNacellePost = FALSE;
	}

	/*limit work envelope*/
	vLimitWorkEnvelope();
	/* end stop movement*/
	vEndStopManagement();
	/* Limitation Control*/
	vLimitationControl();
	/* safety ArroArmLimitation*/
	vSafetyArrowArmLimitation();
	/* safety delta arm limitation*/
	vSafetyDeltaArmLimitation();
	/* safety rotation limitation*/
	vSafetyRotationTurretLimitation();
	/* Auto Stop*/
	vAutoStopFunc();
	/* Control Delta arm*/
	vDeltaArmControl();
	/* Control arrow arm*/
	vArrowArmControl();
	/* Control telescope arm*/
	vTelescopeArmControl();
	/* control axle rail*/
	vAxleControl();
	/* control mast*/
	vControlMast();
	/* Control rotation basket*/
	vRotationBasketControl();
	/* Control inclinaison basket*/
	vInclinaisonBasketControl();
	/* control rotation turret*/
	vRotationTurretControl();
	/* Control pendular*/
	vPendularControl();
	/* control output Pvg Ev Tor*/
	vPvgEvTorControl();
	/* Control Motor*/
	vMotorControl();
	/*vMotorElectricRpm*/
	vMotorElectricRpm();
	/* safety motor*/
	vSafetyMotor();
	/* control low side motor and generator*/
	vControlLowSideEvAccMotorAndGenerator();
	/* control output bypass*/
	vBypassControl();
	/* control output overload security*/
	vOverloadSecurityControl();
	/* defined digital command depend for pvg ev tor*/
	vDefinedDigitalCommand();
	/* control orange flashing light*/
	vOrangeFlashingLightControl();
	/*Control buzzer func*/
	vBuzzerFunc();
}


//-----------------------------------------------------------------------------------------------------
//! @brief defined digital command
//!
//! @param[in]
//! @param[out]
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 29.10.2018 HYDAC/CK
//!
//! @change  21.12.2018 HYDAC/CK change condition to set output to false , new condition gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand == FALSE  old gDb_tRamEcuOutputsC1.u16PvgEvTorCommand == gDb_tRamGeneralC1.u16EcuVoltage/2
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vDefinedDigitalCommand()
{
	/* Up axle oscillant*/
	if(gDb_tRamEcuOutputsC1.boEvUpAxleOscillantActivation)
	{
		gDb_tRamEcuOutputsC1.boEvUpAxleOscillantCmd = TRUE;
	}
	else
	{
		if(gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand == FALSE)
		{
			gDb_tRamEcuOutputsC1.boEvUpAxleOscillantCmd = FALSE;
		}
	}

	/* Down axle oscillant*/
	if(gDb_tRamEcuOutputsC1.boEvDownAxleOscillantActivation)
	{
		gDb_tRamEcuOutputsC1.boEvDownAxleOscillantCmd = TRUE;
	}
	else
	{
		if(gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand == FALSE)
		{
			gDb_tRamEcuOutputsC1.boEvDownAxleOscillantCmd = FALSE;
		}
	}

	/* Up axle fixe*/
	if(gDb_tRamEcuOutputsC1.boEvUpAxleFixeActivation)
	{
		gDb_tRamEcuOutputsC1.boEvUpAxleFixeCmd = TRUE;
	}
	else
	{
		if(gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand == FALSE)
		{
			gDb_tRamEcuOutputsC1.boEvUpAxleFixeCmd = FALSE;
		}
	}

	/* Down axle fixe*/
	if(gDb_tRamEcuOutputsC1.boEvDownAxleFixeActivation)
	{
		gDb_tRamEcuOutputsC1.boEvDownAxleFixeCmd = TRUE;
	}
	else
	{
		if(gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand == FALSE)
		{
			gDb_tRamEcuOutputsC1.boEvDownAxleFixeCmd = FALSE;
		}
	}

	/* Up pendular*/
	if(gDb_tRamEcuOutputsC1.boEvUpPendularActivation == TRUE)
	{
		gDb_tRamEcuOutputsC1.boEvUpPendularCommandBool = TRUE;
	}
	else
	{
		if(gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand == FALSE)
		{
			gDb_tRamEcuOutputsC1.boEvUpPendularCommandBool = FALSE;
		}
	}


	/* Down pendular*/
	if(gDb_tRamEcuOutputsC1.boEvDownPendularActivation == TRUE)
	{
		gDb_tRamEcuOutputsC1.boEvDownPendularCommandBool = TRUE;
	}
	else
	{
		if(gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand == FALSE)
		{
			gDb_tRamEcuOutputsC1.boEvDownPendularCommandBool = FALSE;
		}
	}

	/* Rotation basket counter clockwise*/
	if(gDb_tRamEcuOutputsC1.boEvRotBasketCtClkWiseActivation == TRUE)
	{
		gDb_tRamEcuOutputsC1.boEvRotationBasketCtClkWiseCmdBool = TRUE;
	}
	else
	{
		if(gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand == FALSE)
		{
			gDb_tRamEcuOutputsC1.boEvRotationBasketCtClkWiseCmdBool = FALSE;
		}
	}

	/* Rotation basket clockwise*/
	if(gDb_tRamEcuOutputsC1.boEvRotBasketClkWiseActivation == TRUE)
	{
		gDb_tRamEcuOutputsC1.boEvRotationBasketClkWiseCmdBool = TRUE;
	}
	else
	{
		if(gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand == FALSE)
		{
			gDb_tRamEcuOutputsC1.boEvRotationBasketClkWiseCmdBool = FALSE;
		}
	}

	/* Up Inclinaison basket*/
	if(gDb_tRamEcuOutputsC1.boEvUpIncliBasketActivation == TRUE)
	{
		gDb_tRamEcuOutputsC1.boEvUpInclinaisonBasketCmdBool = TRUE;
	}
	else
	{
		if(gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand == FALSE)
		{
			gDb_tRamEcuOutputsC1.boEvUpInclinaisonBasketCmdBool = FALSE;
		}
	}

	/* Down Inclinaison basket*/
	if(gDb_tRamEcuOutputsC1.boEvDownIncliBasketActivation == TRUE)
	{
		gDb_tRamEcuOutputsC1.boEvDownInclinaisonBasketCmdBool = TRUE;
	}
	else
	{
		if(gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand == FALSE)
		{
			gDb_tRamEcuOutputsC1.boEvDownInclinaisonBasketCmdBool = FALSE;
		}
	}

	/* Rotation turret clockwise*/
	if(gDb_tRamEcuOutputsC1.boEvRotTurretClockwiseActivation == TRUE)
	{
		gDb_tRamEcuOutputsC1.boEvRotTurretClockwiseCmdBool = TRUE;
	}
	else
	{
		if(gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand == FALSE
		|| gDb_tRamAutoStopC1.boStopTurretRotation == TRUE)
		{
			gDb_tRamEcuOutputsC1.boEvRotTurretClockwiseCmdBool = FALSE;
		}
	}

	/* Rotation turret counter clockwise*/
	if(gDb_tRamEcuOutputsC1.boEvRotTurretCtClockwiseActivation == TRUE)
	{
		gDb_tRamEcuOutputsC1.boEvRotTurretCtClockwiseCmdBool = TRUE;
	}
	else
	{
		if(gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand == FALSE
		|| gDb_tRamAutoStopC1.boStopTurretRotation == TRUE)
		{
			gDb_tRamEcuOutputsC1.boEvRotTurretCtClockwiseCmdBool = FALSE;
		}
	}

	/* Up mast measure*/
	if(gDb_tRamEcuOutputsC1.boEvUpMastMeasureActivation == TRUE)
	{
		gDb_tRamEcuOutputsC1.boEvUpMastMeasureCmd = TRUE;
	}
	else
	{
		if(gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand == FALSE)
		{
			gDb_tRamEcuOutputsC1.boEvUpMastMeasureCmd = FALSE;
		}
	}

	/* Down mast measure*/
	if(gDb_tRamEcuOutputsC1.boEvDownMastMeasureActivation == TRUE)
	{
		gDb_tRamEcuOutputsC1.boEvDownMastMeasureCmd = TRUE;
	}
	else
	{
		if(gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand == FALSE)
		{
			gDb_tRamEcuOutputsC1.boEvDownMastMeasureCmd = FALSE;
		}
	}
}



