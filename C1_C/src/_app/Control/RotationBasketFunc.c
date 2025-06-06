//==================================================================================================
//! @file RotationBasketFunc.c
//! @brief Control Rotation Basket Function
//! @see Target for ...
//! @section app
//! @subsection
//! @author Christian Klein (CK)
//! @created 03.10.2018 HYDAC/CK
//! @history: #- CK 03.10.2018 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "RotationBasketFunc.h"

//-----------------------------------------------------------------------------------------------------
//! @brief Control system
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
TVoid vRotationBasketControl(TVoid)
{

	if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_TURRET)
	{
		/* control output regarding button of eVision4 and authorization movement*/
		v2ButtonsControl2EvTOR(gDb_tRamEvision4C1.bogBasket_Rotate_Counter_ClockWise,gDb_tRamEvision4C1.bogBasket_Rotate_ClockWise,gDb_tRamLimitMoveC1.boAutorizeRotBasketCtClkwise,gDb_tRamLimitMoveC1.boAutorizeRotBasketClkwise,
								&gDb_tRamEcuOutputsC1.boEvRotBasketCtClkWiseActivation,&gDb_tRamEcuOutputsC1.boEvRotBasketClkWiseActivation);

		gDb_tRamGeneralC1.u16LifeBitRotBasket = gDb_tRamGeneralC1.u16LifeBitRotBasket + 1;
	}
	else if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_NACELLE)
	{
		/* check dead man pedal*/
		if(gDb_tRam48XsInputsC1.boDeadManPedal == TRUE)
		{
			/* control output regarding button and authorization movement*/
			v2ButtonsControl2EvTOR(gDb_tRam48XsInputsC1.boRotationCtClockwiseBasketButton,gDb_tRam48XsInputsC1.boRotationClockwiseBasketButton,gDb_tRamLimitMoveC1.boAutorizeRotBasketCtClkwise,gDb_tRamLimitMoveC1.boAutorizeRotBasketClkwise,
									&gDb_tRamEcuOutputsC1.boEvRotBasketCtClkWiseActivation,&gDb_tRamEcuOutputsC1.boEvRotBasketClkWiseActivation);
		}
		else
		{
			/* no movement*/
			gDb_tRamEcuOutputsC1.boEvRotBasketCtClkWiseActivation = FALSE;
			gDb_tRamEcuOutputsC1.boEvRotBasketClkWiseActivation = FALSE;
		}
	}
	else
	{
		/* no movement*/
		gDb_tRamEcuOutputsC1.boEvRotBasketCtClkWiseActivation = FALSE;
		gDb_tRamEcuOutputsC1.boEvRotBasketClkWiseActivation = FALSE;
	}



	/* check if no movement is solicited*/
	gDb_tRamEcuOutputsC1.boEvRotBasketCtClkWiseActivation = gDb_tRamEcuOutputsC1.boEvRotBasketCtClkWiseActivation &&
																(gDb_tRamEcuOutputsC1.boEvRotationBasketClkWiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownInclinaisonBasketCmdBool == FALSE) &&
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
	/* check if no movement is solicited*/
	gDb_tRamEcuOutputsC1.boEvRotBasketClkWiseActivation = gDb_tRamEcuOutputsC1.boEvRotBasketClkWiseActivation &&
																(gDb_tRamEcuOutputsC1.boEvRotationBasketCtClkWiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownInclinaisonBasketCmdBool == FALSE) &&
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

