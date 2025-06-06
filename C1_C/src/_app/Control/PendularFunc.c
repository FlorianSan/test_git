//==================================================================================================
//! @file PendularFunc.c
//! @brief Control Rotation Basket Function
//! @see Target for ...
//! @section app
//! @subsection
//! @author Christian Klein (CK)
//! @created 03.10.2018 HYDAC/CK
//! @history: #- CK 03.10.2018 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "PendularFunc.h"

//-----------------------------------------------------------------------------------------------------
//! @brief Control pendular function
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 03.10.2018 HYDAC/CK
//!
//! @change	 05.03.2019 HYDAC/CK add else condition with selector pendular in radiocontrol mode
//!
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vPendularControl(TVoid)
{
	/* check nacelle mode*/
	if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_RADIO)
	{
		/* check if the selector is on pendular*/
		if(gDb_tRamRcvRadioCmdC1.boSelectorPendular == TRUE)
		{
			v2ButtonsControl2EvTOR(gDb_tRamRcvRadioCmdC1.boUpPendularOrRotTurretCtClock,
					gDb_tRamRcvRadioCmdC1.boDownPendularOrRotTurretClock,
					gDb_tRamLimitMoveC1.boAutorizeUpPendular,
					gDb_tRamLimitMoveC1.boAutorizeDownPendular,
					&gDb_tRamEcuOutputsC1.boEvUpPendularActivation,
					&gDb_tRamEcuOutputsC1.boEvDownPendularActivation);
		}
		else
		{
			gDb_tRamEcuOutputsC1.boEvUpPendularActivation = FALSE;
			gDb_tRamEcuOutputsC1.boEvDownPendularActivation = FALSE;
		}

	}
	else if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_TURRET)
	{
		v2ButtonsControl2EvTOR(gDb_tRamEvision4C1.bogPendular_Move_Up,
				gDb_tRamEvision4C1.bogPendular_Move_Down,
				gDb_tRamLimitMoveC1.boAutorizeUpPendular,
				gDb_tRamLimitMoveC1.boAutorizeDownPendular,
				&gDb_tRamEcuOutputsC1.boEvUpPendularActivation,
				&gDb_tRamEcuOutputsC1.boEvDownPendularActivation);
	}
	else if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_NACELLE)
	{
		/* check dead man pedal*/
		if(gDb_tRam48XsInputsC1.boDeadManPedal == TRUE)
		{
			v2ButtonsControl2EvTOR(gDb_tRam48XsInputsC1.boUpPendularButton,
					gDb_tRam48XsInputsC1.boDownPendularButton,
					gDb_tRamLimitMoveC1.boAutorizeUpPendular,
					gDb_tRamLimitMoveC1.boAutorizeDownPendular,
					&gDb_tRamEcuOutputsC1.boEvUpPendularActivation,
					&gDb_tRamEcuOutputsC1.boEvDownPendularActivation);
		}
		else
		{
			/* no movement*/
			gDb_tRamEcuOutputsC1.boEvUpPendularActivation = FALSE;
			gDb_tRamEcuOutputsC1.boEvDownPendularActivation = FALSE;
		}
	}
	else
	{
		/* no movement*/
		gDb_tRamEcuOutputsC1.boEvUpPendularActivation = FALSE;
		gDb_tRamEcuOutputsC1.boEvDownPendularActivation = FALSE;
	}

	/* check if no movement is solicited*/
	gDb_tRamEcuOutputsC1.boEvUpPendularActivation = 	gDb_tRamEcuOutputsC1.boEvUpPendularActivation &&
																(gDb_tRamEcuOutputsC1.boEvRotationBasketClkWiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownInclinaisonBasketCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvUpInclinaisonBasketCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownPendularCommandBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvRotationBasketCtClkWiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvRotTurretClockwiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvRotTurretCtClockwiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvUpAxleOscillantCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownAxleOscillantCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvUpAxleFixeCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownAxleFixeCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvUpMastMeasureCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownMastMeasureCmd == FALSE)
																;

	/* check if no movement is solicited*/
	gDb_tRamEcuOutputsC1.boEvDownPendularActivation = gDb_tRamEcuOutputsC1.boEvDownPendularActivation &&
																(gDb_tRamEcuOutputsC1.boEvRotationBasketCtClkWiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownInclinaisonBasketCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvUpInclinaisonBasketCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvRotationBasketClkWiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvUpPendularCommandBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvRotTurretClockwiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvRotTurretCtClockwiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvUpAxleOscillantCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownAxleOscillantCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvUpAxleFixeCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownAxleFixeCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvUpMastMeasureCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownMastMeasureCmd == FALSE)
																;
}
