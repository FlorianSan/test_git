//==================================================================================================
//! @file ControlRadioCommand.c
//! @brief Control radio command
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 07.08.2018 HYDAC/CK
//! @history: #- CK 07.08.2018 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "ControlRadioCommand.h"


//-----------------------------------------------------------------------------------------------------
//! @brief Control Radio Command
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 07.08.2018 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//
//07.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vControlRadioCommand(TVoid)
{
    /* ============================================================================================= */
  	/* 										Start Can Radio Command								     */
  	/* ============================================================================================= */

	/* check , if the state of radio command is different at operational*/
	if(gDb_tRamEcuInputRadioControl.eStateRadioControl != GE_OPERATIONAL)
	{
		gCsr_tStart.u8Command = 1;
		gCsr_tStart.u8NodeId = gDb_tNvParametersC0.u8NodeIdRadioCommand;

		/* send start message*/
		gCSnd_tStart.tInp.boSndNow = TRUE;

		/* set flag radio command disconnect*/
		gDb_tRamEcuInputRadioControl.boRadioCommandConnect = FALSE;
	}

    /* ============================================================================================= */
  	/* 										check if Radio Command is connected					     */
  	/* ============================================================================================= */
	/* check if rising edge of start radio command*/
	if(bi2SigTrigger(&tTriggerRadioCommandConnected,gDb_tRamEcuInputRadioControl.boStartRadioCommand) == 1)
	{
		/* set flag radio command connect*/
		gDb_tRamEcuInputRadioControl.boRadioCommandConnect = TRUE;
	}
	else if(gDb_tRamEcuInputRadioControl.boStopRadioCommand == TRUE)
	{
		/*set flag radio command disconnect*/
		gDb_tRamEcuInputRadioControl.boRadioCommandConnect = FALSE;
	}
}
