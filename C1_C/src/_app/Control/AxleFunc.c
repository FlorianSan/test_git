//==================================================================================================
//! @file AxleFunc.c
//! @brief Control Axle function
//! @see Target for ...
//! @section app
//! @subsection
//! @author Christian Klein (CK)
//! @created 09.01.2018 HYDAC/CK
//! @history: #- CK 09.01.2018 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "AxleFunc.h"


//-----------------------------------------------------------------------------------------------------
//! @brief Control Up/Down axle rail
//!
//! @param[in]	 TBoolean 				- Up Axle oscillant
//! @param[in]	 TBoolean 				- Down Axle oscillant
//! @param[in] 	 TBoolean 				- autorize to use up axle oscillant
//! @param[in] 	 TBoolean 				- autorize to use down axle oscillant
//! @param[in]	 TBoolean 				- Up Axle fixe
//! @param[in]	 TBoolean 				- Down Axle fixe
//! @param[in] 	 TBoolean 				- autorize to use up axle fixe
//! @param[in] 	 TBoolean 				- autorize to use down axle fixe
//! @param[out]  TBoolean			 	- Output Up Axle oscillant
//! @param[out]  TBoolean			 	- Output Down Axle oscillant
//! @param[out]  TBoolean			 	- Output Up Axle fixe
//! @param[out]  TBoolean			 	- Output Down Axle fixe
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 30.07.2018 HYDAC/CK
//!
//! @change	 09.01.2019 HYDAC/CK Regroup movement up/down for axle fixe and oscillant
//!			 28.01.2019 HYDAC/CK Remove else condition , reset command at the begin of function
//!			 04.04.2019 NEOTEC/FV Add condition post radio to control axle movement
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vAxleControl()
{
	/* reset activation*/
	gDb_tRamEcuOutputsC1.boEvUpAxleOscillantActivation = FALSE;
	gDb_tRamEcuOutputsC1.boEvDownAxleOscillantActivation = FALSE;
	gDb_tRamEcuOutputsC1.boEvUpAxleFixeActivation = FALSE;
	gDb_tRamEcuOutputsC1.boEvDownAxleFixeActivation = FALSE;

	if ( gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_RADIO || gDb_tRamMastMeasureC1.boDownAxleOscillantForMast == TRUE)
	{
		/* check, if the Up axle oscillant is solicited*/
		if(gDb_tRamRcvRadioCmdC1.boUpAxleOscillant == TRUE && gDb_tRamRcvRadioCmdC1.boDownAxleOscillant== FALSE && gDb_tRamRcvRadioCmdC1.boUpAxleFixe == FALSE && gDb_tRamRcvRadioCmdC1.boDownAxleFixe == FALSE) // add authorization
		{
		/* pilot Up Axle oscillant*/
			gDb_tRamEcuOutputsC1.boEvUpAxleOscillantActivation = TRUE;
		}
		/* check, if the Down axle oscillant is solicited*/
		else if(gDb_tRamRcvRadioCmdC1.boUpAxleOscillant == FALSE && gDb_tRamRcvRadioCmdC1.boDownAxleOscillant == TRUE && gDb_tRamRcvRadioCmdC1.boUpAxleFixe == FALSE && gDb_tRamRcvRadioCmdC1.boDownAxleFixe == FALSE) // add authorization
		{
			/* pilot down axle*/
			gDb_tRamEcuOutputsC1.boEvDownAxleOscillantActivation = TRUE;
		}
		/* check, if the Up axle fixe is solicited*/
		else if(gDb_tRamRcvRadioCmdC1.boUpAxleOscillant == FALSE && gDb_tRamRcvRadioCmdC1.boDownAxleOscillant == FALSE && gDb_tRamRcvRadioCmdC1.boUpAxleFixe == TRUE && gDb_tRamRcvRadioCmdC1.boDownAxleFixe == FALSE) // add authorization
		{
			/* pilot Up Axle*/
			gDb_tRamEcuOutputsC1.boEvUpAxleFixeActivation = TRUE;
		}
		/* check, if the Down axle fixe is solicited*/
		else if(gDb_tRamRcvRadioCmdC1.boUpAxleOscillant == FALSE && gDb_tRamRcvRadioCmdC1.boDownAxleOscillant == FALSE && gDb_tRamRcvRadioCmdC1.boUpAxleFixe == FALSE && gDb_tRamRcvRadioCmdC1.boDownAxleFixe == TRUE) // add authorization
		{
			/* pilot down axle*/
			gDb_tRamEcuOutputsC1.boEvDownAxleFixeActivation = TRUE;
		}
		else if (gDb_tRamMastMeasureC1.boDownAxleOscillantForMast == TRUE)
		{
			/* pilot down axle*/
			gDb_tRamEcuOutputsC1.boEvDownAxleOscillantActivation = TRUE;
			gDb_tRamEcuOutputsC1.boEvDownAxleFixeActivation = TRUE;
		}
	}

	/* check if no movement is solicited*/
	gDb_tRamEcuOutputsC1.boEvUpAxleOscillantActivation = gDb_tRamEcuOutputsC1.boEvUpAxleOscillantActivation &&
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
																(gDb_tRamEcuOutputsC1.boEvRotTurretCtClockwiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvUpMastMeasureCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownMastMeasureCmd == FALSE)
																;

	/* check if no movement is solicited*/
	gDb_tRamEcuOutputsC1.boEvDownAxleOscillantActivation = gDb_tRamEcuOutputsC1.boEvDownAxleOscillantActivation &&
																(gDb_tRamEcuOutputsC1.boEvUpAxleOscillantCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvUpAxleFixeCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownAxleFixeCmd == FALSE || gDb_tRamMastMeasureC1.boDownAxleOscillantForMast == TRUE) &&
																(gDb_tRamEcuOutputsC1.boEvUpInclinaisonBasketCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvRotationBasketClkWiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownInclinaisonBasketCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvRotationBasketCtClkWiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownPendularCommandBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvUpPendularCommandBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvRotTurretClockwiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvRotTurretCtClockwiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvUpMastMeasureCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownMastMeasureCmd == FALSE)
																;

	/* check if no movement is solicited*/
	gDb_tRamEcuOutputsC1.boEvUpAxleFixeActivation = gDb_tRamEcuOutputsC1.boEvUpAxleFixeActivation &&
																(gDb_tRamEcuOutputsC1.boEvUpAxleOscillantCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownAxleOscillantCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownAxleFixeCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvUpInclinaisonBasketCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvRotationBasketClkWiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownInclinaisonBasketCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvRotationBasketCtClkWiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownPendularCommandBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvUpPendularCommandBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvRotTurretClockwiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvRotTurretCtClockwiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvUpMastMeasureCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownMastMeasureCmd == FALSE)
																;

	/* check if no movement is solicited*/
	gDb_tRamEcuOutputsC1.boEvDownAxleFixeActivation = gDb_tRamEcuOutputsC1.boEvDownAxleFixeActivation &&
																(gDb_tRamEcuOutputsC1.boEvUpAxleOscillantCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownAxleOscillantCmd == FALSE || gDb_tRamMastMeasureC1.boDownAxleOscillantForMast == TRUE) &&
																(gDb_tRamEcuOutputsC1.boEvUpAxleFixeCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvUpInclinaisonBasketCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvRotationBasketClkWiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownInclinaisonBasketCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvRotationBasketCtClkWiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownPendularCommandBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvUpPendularCommandBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvRotTurretClockwiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvRotTurretCtClockwiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvUpMastMeasureCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownMastMeasureCmd == FALSE)
																;
}

