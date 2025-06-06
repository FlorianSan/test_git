//==================================================================================================
//! @file InclinaisonBasketFunc.c
//! @brief Control Rotation Basket Function
//! @see Target for ...
//! @section app
//! @subsection
//! @author Christian Klein (CK)
//! @created 03.10.2018 HYDAC/CK
//! @history: #- CK 03.10.2018 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "InclinaisonBasketFunc.h"

//-----------------------------------------------------------------------------------------------------
//! @brief Control inclinaison basket
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 03.10.2018 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vInclinaisonBasketControl(TVoid)
{
	/* check nacelle mode*/
	if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_RADIO)
	{
		/* control movement*/
		//v2ButtonsControl2EvTOR();

	}
	else if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_TURRET)
	{
		v2ButtonsControl2EvTOR(gDb_tRamEvision4C1.bogBasket_Inclinaison_Move_Up,gDb_tRamEvision4C1.bogBasket_Inclinaison_Move_Down,gDb_tRamLimitMoveC1.boAutorizeUpInclinaisonBasket,gDb_tRamLimitMoveC1.boAutorizeDownInclinaisonBasket,
								&gDb_tRamEcuOutputsC1.boEvUpIncliBasketActivation,&gDb_tRamEcuOutputsC1.boEvDownIncliBasketActivation);

	}
	else if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_NACELLE)
	{
		/* check dead man pedal*/
		if(gDb_tRam48XsInputsC1.boDeadManPedal == TRUE)
		{
			v2ButtonsControl2EvTOR(gDb_tRam48XsInputsC1.boUpInclinaisonBasketButton,gDb_tRam48XsInputsC1.boDownInclinaisonBasketButton,gDb_tRamLimitMoveC1.boAutorizeUpInclinaisonBasket,gDb_tRamLimitMoveC1.boAutorizeDownInclinaisonBasket,
									&gDb_tRamEcuOutputsC1.boEvUpIncliBasketActivation,&gDb_tRamEcuOutputsC1.boEvDownIncliBasketActivation);
		}
		else
		{
			/* no movement*/
			gDb_tRamEcuOutputsC1.boEvUpIncliBasketActivation = FALSE;
			gDb_tRamEcuOutputsC1.boEvDownIncliBasketActivation = FALSE;
		}
	}
	else
	{
		/* no movement*/
		gDb_tRamEcuOutputsC1.boEvUpIncliBasketActivation = FALSE;
		gDb_tRamEcuOutputsC1.boEvDownIncliBasketActivation = FALSE;
	}

	/* check if no movement is solicited*/
	gDb_tRamEcuOutputsC1.boEvUpIncliBasketActivation = gDb_tRamEcuOutputsC1.boEvUpIncliBasketActivation &&
																(gDb_tRamEcuOutputsC1.boEvRotationBasketClkWiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownInclinaisonBasketCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvRotationBasketCtClkWiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownPendularCommandBool == FALSE) &&
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
	/* check if no movement is solicited*/
	gDb_tRamEcuOutputsC1.boEvDownIncliBasketActivation = gDb_tRamEcuOutputsC1.boEvDownIncliBasketActivation &&
																(gDb_tRamEcuOutputsC1.boEvRotationBasketCtClkWiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvRotationBasketClkWiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvUpInclinaisonBasketCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownPendularCommandBool == FALSE) &&
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
