//==================================================================================================
//! @file OverloadSecurity.c
//! @brief Control motor Function
//! @see Target for ...
//! @section app
//! @subsection
//! @author Christian Klein (CK)
//! @created 13.10.2018 HYDAC/CK
//! @history: #- CK 13.10.2018 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "OverloadSecurity.h"

// GLOBAL VARIABLES DECLARATIONS ==================================================================
//NEOTEC
	TBoolean boOverloadActive;
//NEOTEC

//-----------------------------------------------------------------------------------------------------
//! @brief Control  overload security Function
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 18.12.2018 HYDAC/CK
//!
//! @change	 22.05.2019 NEOTEC/FV
//! @change
//!
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vOverloadSecurityControl(TVoid)
{
	static TBoolean boKeyFilterOverload = FALSE;
	static TBoolean boFilterOverloadNoActive =FALSE;

	boKeyFilterOverload = gCsr_tMsg1RcvFromEvision7.bogKeyFilterOverload;
	gCsr_tMsg1C1SendToEvision7.bogFilterOverloadNoActive = boFilterOverloadNoActive;

	/* Rising boKeyFilterOverload*/
	TBoolean RisingboKeyFilterOverload = FALSE;
	static TBoolean PreviousboKeyFilterOverload = FALSE;
	RisingboKeyFilterOverload = FALSE;
	if (boKeyFilterOverload == TRUE && PreviousboKeyFilterOverload == FALSE)
		RisingboKeyFilterOverload = TRUE;
	PreviousboKeyFilterOverload = boKeyFilterOverload;

	/*boFilterOverloadNoActive*/
	if(RisingboKeyFilterOverload == TRUE && boFilterOverloadNoActive == FALSE)
		boFilterOverloadNoActive = TRUE;
	else if (RisingboKeyFilterOverload == TRUE && boFilterOverloadNoActive == TRUE)
		boFilterOverloadNoActive = FALSE;

	/*boSensorOverloadState*/
	static TBoolean boSensorOverloadState =FALSE;
	if(gDb_tRam48XsInputsC1.boOverload1 == FALSE
	|| gDb_tRam48XsInputsC1.boOverload2 == FALSE
	|| boBloErrGetErrStaBit(&gErr_tSpecificErrorC1,DM_INC_OVERLOAD_SENSOR))
		boSensorOverloadState = TRUE;
	else
		boSensorOverloadState = FALSE;

	TUint16 u16ConstSet =75; /*environ1.5s = 75x20ms*/
	TUint16 u16ConstReset =50; /*environ1s = 50x20ms*/
	TUint16 u16CptMaxSetOverload;
	TUint16 u16CptMaxResetOverload;
	if(boFilterOverloadNoActive == TRUE)
	{
		u16CptMaxSetOverload = 1;
		u16CptMaxResetOverload = 1;
	}
	else
	{
		u16CptMaxSetOverload = u16ConstSet;
		u16CptMaxResetOverload = u16ConstReset;
	}


	/*boOverloadActive*/
	static TUint16 u16CptSetOverload =0;
	static TUint16 u16CptResetOverload =0;
	if(boSensorOverloadState == TRUE)
	{
		u16CptResetOverload = 0;
		if (u16CptSetOverload>=u16CptMaxSetOverload)
			u16CptSetOverload=u16CptMaxSetOverload;
		else
			u16CptSetOverload=u16CptSetOverload+1;
	}
	else
	{
		u16CptSetOverload = 0;
		if (u16CptResetOverload>=u16CptMaxResetOverload)
			u16CptResetOverload=u16CptMaxResetOverload;
		else
			u16CptResetOverload=u16CptResetOverload+1;
	}
	/*Set*/
	if (u16CptSetOverload == u16CptMaxSetOverload)
		boOverloadActive = TRUE;
	/*Reset*/
	if (u16CptResetOverload == u16CptMaxResetOverload)
		boOverloadActive = FALSE;



	/* check if failure overload sensor is detect*/
	if(boOverloadActive == TRUE)
		gDb_tRamEcuOutputsC1.boOverloadSecurityCommand = FALSE;
	else
		gDb_tRamEcuOutputsC1.boOverloadSecurityCommand = TRUE;

}
