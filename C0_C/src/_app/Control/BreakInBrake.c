
//==================================================================================================
//! @file BreakInBrake.c
//! @briefbrake break function, this function allows you to force a brake while driving
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 27.03.2019 HYDAC/CK
//! @history: #- CK 27.03.19* HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "BreakInBrake.h"

//-----------------------------------------------------------------------------------------------------
//! @brief brake break function, this function allows you to force a brake while driving
//!
//!
//! @globvar
//!		TDbRamBrealInBrakeC0 		gDb_tRamBreakInBrakeC0		structure Data variable list
//!		TDbRamGeneralC0				gDb_tRamGeneralC0			structure Data variable list
//!		TDbRamEvision7C0	 		gDb_tRamEvision7C0			structure Data variable list
//!		TDbRamEcuInputsC0			gDb_tRamEcuInputsC0			structure Data variable list
//!		TDbRamBrealInBrakeC0 		gDb_tRamBreakInBrakeC0		structure Data variable list
//!		TDbRamGeneralC0				gDb_tRamGeneralC0			structure Data variable list
//!		TSigTriggerAdr				tTriggerJoyOutOfNeuPos		structure of trigger signal
//! @staticvar
//!
//! @created 27.03.2019 HYDAC/CK
//!
//! @change  10.12.2019 HYDAC/CK : add {} in the if condition into if(bi2SigTrigger(&tTriggerJoyOutOfNeuPos,gDb_tRamGeneralC0.i16JoystickAdvanceSetpointAfterRamp != 0 ) == 1) and 		if(gDb_tRamEcuInputsC0.i32FixeAxleFrequency > 0 && gDb_tRamEcuInputsC0.i32OscillantAxleFrequency > 0)
//! @change  17.12.2019 HYDAC/CK : replaces static variable boOsciServiceBrakinBrakeOn to gDb_tRamBreakInBrakeC0.boOsciServiceBrakinBrakeOn
//!								   replaces static variable boFixeServiceBrakinBrakeOn to gDb_tRamBreakInBrakeC0.boFixeServiceBrakinBrakeOn
//!								   replaces static variable boBothServiceBrakinBrakeOn to gDb_tRamBreakInBrakeC0.boBothServiceBrakinBrakeOn
//!			 28.01.2019 HYDAC/CK - Filling of the part  @globar and @staticvar in the header of the function
//! @care
//! @todo // add position transport
//
//
//07.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vBreakInBrake(TVoid)
{

	/*boConditionsBreakinBrakeOk*/
	static 	TBoolean	boConditionsBreakinBrakeOk = FALSE;
	if(gDb_tRamGeneralC0.eRailSpeedMode == GE_BREAK_IN_BRAKE_SPEED_RUNNING
	&& gDb_tRamEvision7C0.bogOffTrackRunInBrakeActivated == TRUE
	&& gDb_tRamEcuInputsC0.eUpAxleFixeState == GE_DI_ON
	&& gDb_tRamEcuInputsC0.eUpAxleOscillantState == GE_DI_ON
	&& gDb_tRamEvision7C0.bogBreakInBrakePageActive == TRUE)
		boConditionsBreakinBrakeOk = TRUE;
	else
		boConditionsBreakinBrakeOk = FALSE;

	/*RisingbogOsciServiceRunInBrakeSelect*/
	static TBoolean PreviousbogOsciServiceRunInBrakeSelect = FALSE;
	TBoolean RisingbogOsciServiceRunInBrakeSelect = FALSE;
	if (gDb_tRamEvision7C0.bogOsciServiceRunInBrakeSelect == TRUE && PreviousbogOsciServiceRunInBrakeSelect == FALSE)
		RisingbogOsciServiceRunInBrakeSelect = TRUE;
	/* Memorize the previous value*/
	PreviousbogOsciServiceRunInBrakeSelect = gDb_tRamEvision7C0.bogOsciServiceRunInBrakeSelect;

	/*RisingbogFixedServiceRunInBrakeSelect*/
	static TBoolean PreviousbogFixedServiceRunInBrakeSelect = FALSE;
	TBoolean RisingbogFixedServiceRunInBrakeSelect = FALSE;
	if (gDb_tRamEvision7C0.bogFixedServiceRunInBrakeSelect == TRUE && PreviousbogFixedServiceRunInBrakeSelect == FALSE)
		RisingbogFixedServiceRunInBrakeSelect = TRUE;
	/* Memorize the previous value*/
	PreviousbogFixedServiceRunInBrakeSelect = gDb_tRamEvision7C0.bogFixedServiceRunInBrakeSelect;

	/*RisingbogBothServiceRunInBrakeSelect*/
	static TBoolean PreviousbogBothServiceRunInBrakeSelect = FALSE;
	TBoolean RisingbogBothServiceRunInBrakeSelect = FALSE;
	if (gDb_tRamEvision7C0.bogBothServiceRunInBrakeSelect == TRUE && PreviousbogBothServiceRunInBrakeSelect == FALSE)
		RisingbogBothServiceRunInBrakeSelect = TRUE;
	/* Memorize the previous value*/
	PreviousbogBothServiceRunInBrakeSelect = gDb_tRamEvision7C0.bogBothServiceRunInBrakeSelect;

	/*boOsciServiceBrakinBrakeOn
	set*/
	if(gDb_tRamBreakInBrakeC0.boOsciServiceBrakinBrakeOn == FALSE
	&& boConditionsBreakinBrakeOk == TRUE
	&& RisingbogOsciServiceRunInBrakeSelect == TRUE
	&& gDb_tRamEvision7C0.bogFixedServiceRunInBrakeSelect == FALSE
	&& gDb_tRamEvision7C0.bogBothServiceRunInBrakeSelect == FALSE
	)
		gDb_tRamBreakInBrakeC0.boOsciServiceBrakinBrakeOn = TRUE;
	/*reset*/
	else if(gDb_tRamBreakInBrakeC0.boOsciServiceBrakinBrakeOn == TRUE
	&& (boConditionsBreakinBrakeOk == FALSE
	|| RisingbogOsciServiceRunInBrakeSelect == TRUE
	|| RisingbogFixedServiceRunInBrakeSelect == TRUE
	|| RisingbogBothServiceRunInBrakeSelect == TRUE)
	)
		gDb_tRamBreakInBrakeC0.boOsciServiceBrakinBrakeOn = FALSE;

	/*boFixeServiceBrakinBrakeOn
	set*/
	if(gDb_tRamBreakInBrakeC0.boFixeServiceBrakinBrakeOn == FALSE
	&& boConditionsBreakinBrakeOk == TRUE
	&& RisingbogFixedServiceRunInBrakeSelect == TRUE
	&& gDb_tRamEvision7C0.bogOsciServiceRunInBrakeSelect == FALSE
	&& gDb_tRamEvision7C0.bogBothServiceRunInBrakeSelect == FALSE
	)
		gDb_tRamBreakInBrakeC0.boFixeServiceBrakinBrakeOn = TRUE;
	/*reset*/
	else if(gDb_tRamBreakInBrakeC0.boFixeServiceBrakinBrakeOn == TRUE
	&& (boConditionsBreakinBrakeOk == FALSE
	|| RisingbogOsciServiceRunInBrakeSelect == TRUE
	|| RisingbogFixedServiceRunInBrakeSelect == TRUE
	|| RisingbogBothServiceRunInBrakeSelect == TRUE)
	)
		gDb_tRamBreakInBrakeC0.boFixeServiceBrakinBrakeOn = FALSE;

	/*boBothServiceBrakinBrakeOn
	set*/
	if(gDb_tRamBreakInBrakeC0.boBothServiceBrakinBrakeOn == FALSE
	&& boConditionsBreakinBrakeOk == TRUE
	&& RisingbogBothServiceRunInBrakeSelect == TRUE
	&& gDb_tRamEvision7C0.bogFixedServiceRunInBrakeSelect == FALSE
	&& gDb_tRamEvision7C0.bogOsciServiceRunInBrakeSelect == FALSE
	)
		gDb_tRamBreakInBrakeC0.boBothServiceBrakinBrakeOn = TRUE;
	/*reset*/
	else if(gDb_tRamBreakInBrakeC0.boBothServiceBrakinBrakeOn == TRUE
	&& (boConditionsBreakinBrakeOk == FALSE
	|| RisingbogOsciServiceRunInBrakeSelect == TRUE
	|| RisingbogFixedServiceRunInBrakeSelect == TRUE
	|| RisingbogBothServiceRunInBrakeSelect == TRUE)
	)
		gDb_tRamBreakInBrakeC0.boBothServiceBrakinBrakeOn = FALSE;

	/*check if machine is on transport position and up position axle and rodage off rail
	 check if a service brake is selected*/
	if(gDb_tRamBreakInBrakeC0.boOsciServiceBrakinBrakeOn == TRUE)
	{
		gDb_tRamBreakInBrakeC0.eServiceBrakeSelected = GE_OSCI_SERVICE_BRAKE;
		gDb_tRamBreakInBrakeC0.boBreakInBrakeRunning = TRUE;
	}
	else if(gDb_tRamBreakInBrakeC0.boFixeServiceBrakinBrakeOn == TRUE)
	{
		gDb_tRamBreakInBrakeC0.eServiceBrakeSelected = GE_FIXE_SERVICE_BRAKE;
		gDb_tRamBreakInBrakeC0.boBreakInBrakeRunning = TRUE;
	}
	else if(gDb_tRamBreakInBrakeC0.boBothServiceBrakinBrakeOn == TRUE)
	{
		gDb_tRamBreakInBrakeC0.eServiceBrakeSelected = GE_SERVICE_BRAKES;
		gDb_tRamBreakInBrakeC0.boBreakInBrakeRunning = TRUE;
	}
	else
	{
		gDb_tRamBreakInBrakeC0.eServiceBrakeSelected = GE_NO_BRAKE;
		gDb_tRamBreakInBrakeC0.boBreakInBrakeRunning = FALSE;
	}

	/* check if break in running, the user has select a brake*/
	if(gDb_tRamBreakInBrakeC0.boBreakInBrakeRunning)
	{
		/* set authorization translation rail to force driving*/
		gDb_tRamBreakInBrakeC0.boAuthorizeTransRailByBreakInBrake = TRUE;
		/* set stop all movement variable*/
		gDb_tRamBreakInBrakeC0.boStopMovementByBreakInBrake = TRUE;
	}
	else
	{
		/* reset authorization of driving*/
		gDb_tRamBreakInBrakeC0.boAuthorizeTransRailByBreakInBrake = FALSE;
		/* reset stop all movement variable*/
		gDb_tRamBreakInBrakeC0.boStopMovementByBreakInBrake = FALSE;
	}

	/* check if break in running, the user has select a brake*/
	if(gDb_tRamBreakInBrakeC0.boBreakInBrakeRunning)
	{

		if( gDb_tRamEcuOutputsC0.u16ForwardPumpCommand == 0 && gDb_tRamEcuOutputsC0.u16BackwardPumpCommand == 0)

		{
			/* reset time, this time define the running time in progress of brake break*/
			gDb_tRamBreakInBrakeC0.u16AdvancementPeriod = 0;
		}
		/* check if speed sensor is over at 0*/

		if (gDb_tRamGeneralC0.boAuthorizeTransRailMovement == TRUE)

		{
			/* increment time, this time define the running time in progress of brake break*/
			gDb_tRamBreakInBrakeC0.u16AdvancementPeriod++;
		}
	}
	else
	{
		/* reset time, this time define the running time in progress of brake break*/
		gDb_tRamBreakInBrakeC0.u16AdvancementPeriod = 0;
	}

	/* convert the time to seconds and display it on eVision screens*/
	gDb_tRamBreakInBrakeC0.u16AdvancementPeriodMs10 = gDb_tRamBreakInBrakeC0.u16AdvancementPeriod / 50; /*20ms/1000 = 1/50*/
}
