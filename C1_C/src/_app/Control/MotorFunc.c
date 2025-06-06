//==================================================================================================
//! @file MototFunc.c
//! @brief Control motor Function
//! @see Target for ...
//! @section app
//! @subsection
//! @author Christian Klein (CK)
//! @created 13.10.2018 HYDAC/CK
//! @history: #- CK 13.10.2018 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "MotorFunc.h"

//-----------------------------------------------------------------------------------------------------
//! @brief Control  motor Function
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 13.10.2018 HYDAC/CK
//! @change	 03.05.2019 NEOTEC/FV modif provisoire sur antidémarrage
//! @change	 18.05.2019 NEOTEC/FV Change Accelerator in translation rail
//! @change  17.12.2019 HYDAC/CK  change provisional value of msg can gDb_tRamData4C1RcvFromC0.boSignal_1 to gDb_tRamData4C1RcvFromC0.boTurretPostorRadoPostOn
//!								  change provisional value of msg can gDb_tRamData4C1RcvFromC0.boSignal_2 to gDb_tRamData4C1RcvFromC0.boMotorAccelerated
//!								  change u8LifeByte to u8ActivePageOpus variable
//! @change  18.12.2019 HYDAC/CK  call vControlAntiStartUp function, was in comment by Neotec
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vMotorControl(TVoid)
{
//	/* local variable */
//	TBoolean boMoreAtOnePvgMovement = FALSE;
//	TBoolean boOnePvgMovement = FALSE;
//	TBoolean boGroup2Movement = FALSE;
//	TBoolean boNoMovement = FALSE;
//	TBoolean boForcingHighRegime = FALSE;
//	TBoolean boStartUpMotor = FALSE;
//	TBoolean boStartUpMotorTimerDone = FALSE;
//
//
//    /* ============================================================================================= */
//  	/* 									Determine threshold according to movement					 */
//  	/* ============================================================================================= */
//
//	/* check if more a 2 pvg movements are solicited*/
//	if((gDb_tRamEcuOutputsC1.boSupplyPvgDeltaArmCommand == TRUE && (gDb_tRamEcuOutputsC1.boSupplyPvgArrowArmCommand || gDb_tRamEcuOutputsC1.boSupplyPvgTelescopeArmCommand))
//		|| (gDb_tRamEcuOutputsC1.boSupplyPvgArrowArmCommand == TRUE && (gDb_tRamEcuOutputsC1.boSupplyPvgDeltaArmCommand || gDb_tRamEcuOutputsC1.boSupplyPvgTelescopeArmCommand)))
//	{
//		boMoreAtOnePvgMovement = TRUE;
//	}
//	/* check if a pvg movement is solicited*/
//	else if(gDb_tRamEcuOutputsC1.boSupplyPvgDeltaArmCommand == TRUE || gDb_tRamEcuOutputsC1.boSupplyPvgArrowArmCommand  || gDb_tRamEcuOutputsC1.boSupplyPvgTelescopeArmCommand)
//	{
//		boOnePvgMovement = TRUE;
//	}
//	/* check if supply pvg prop ev tor is true then one movement of output group 2 is solicited*/
//	else if(gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand == TRUE)
//	{
//		boGroup2Movement = TRUE;
//	}
//	else
//	{
//		/* no movement*/
//		boNoMovement = TRUE;
//	}


	/* local variable */
	static TBoolean boMoreAtOnePvgMovement = FALSE;
	static TBoolean boOnePvgMovement = FALSE;
	static TBoolean boGroup2Movement = FALSE;
	static TBoolean boNoMovementNoFiltered = FALSE;
	static TBoolean boNoMovement = FALSE;
	TBoolean boForcingHighRegime = FALSE;
	TBoolean boStartUpMotor = FALSE;
	TBoolean boStartUpMotorTimerDone = FALSE;

	/* check if more a 2 pvg movements are solicited*/
	if((gDb_tRamEcuOutputsC1.boSupplyPvgDeltaArmCommand == TRUE && (gDb_tRamEcuOutputsC1.boSupplyPvgArrowArmCommand || gDb_tRamEcuOutputsC1.boSupplyPvgTelescopeArmCommand))
		|| (gDb_tRamEcuOutputsC1.boSupplyPvgArrowArmCommand == TRUE && (gDb_tRamEcuOutputsC1.boSupplyPvgDeltaArmCommand || gDb_tRamEcuOutputsC1.boSupplyPvgTelescopeArmCommand)))
	{
		boMoreAtOnePvgMovement = TRUE;
		boOnePvgMovement = FALSE;
		boGroup2Movement = FALSE;
		boNoMovementNoFiltered = FALSE;
	}
	/* check if a pvg movement is solicited*/
	else if(gDb_tRamEcuOutputsC1.boSupplyPvgDeltaArmCommand == TRUE || gDb_tRamEcuOutputsC1.boSupplyPvgArrowArmCommand  || gDb_tRamEcuOutputsC1.boSupplyPvgTelescopeArmCommand)
	{
		boMoreAtOnePvgMovement = FALSE;
		boOnePvgMovement = TRUE;
		boGroup2Movement = FALSE;
		boNoMovementNoFiltered = FALSE;
	}
	/* check if supply pvg prop ev tor is true then one movement of output group 2 is solicited*/
	else if(gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand == TRUE)
	{
		boMoreAtOnePvgMovement = FALSE;
		boOnePvgMovement = FALSE;
		boGroup2Movement = TRUE;
		boNoMovementNoFiltered = FALSE;
	}
	else
	{
		/* no movement*/
		boNoMovementNoFiltered = TRUE;
	}

	/*TON*/
	static TUint16 u16cptNoMovement =0;
	TUint16 u16cptmaxNoMovement = gDb_tNvParamMotorC1.u8CptmaxNoMovement; //5x10ms = 50ms
	if(boNoMovementNoFiltered == TRUE)
	{
		if (u16cptNoMovement>=u16cptmaxNoMovement)
			u16cptNoMovement=u16cptmaxNoMovement;
		else
			u16cptNoMovement=u16cptNoMovement+1;
	}
	else
		u16cptNoMovement=0;
	if ( u16cptNoMovement == u16cptmaxNoMovement)
	{
		boMoreAtOnePvgMovement = FALSE;
		boOnePvgMovement = FALSE;
		boGroup2Movement = FALSE;
		boNoMovement = TRUE;
	}
	else
		boNoMovement = FALSE;




    /* ========================================================= */
  	/* 						WARMING								 */
  	/* ========================================================= */
	TUint16 u16cptWarmingMax = 350;/*350x20ms = 7s*/
	static TUint16 u16cptWarming = 0;

	/*BoWarmingPage*/
	static TBoolean BoWarmingPage = FALSE;
	if(gDb_tRamEvision4C1.u8ActivePageOpus == 1 || gDb_tRamEvision4C1.u8ActivePageOpus == 11)
		BoWarmingPage = TRUE;
	else
		BoWarmingPage = FALSE;

	/*BoFirstWarmingDone*/
	static TBoolean BoFirstWarmingDone = FALSE;
	if(	(gDb_tRamEcuInputsC1.u16AlternatorChargeOkValue > 12000 && gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939 >0)
	||	(BoFirstWarmingDone == FALSE && (u16cptWarming >= u16cptWarmingMax) && BoWarmingPage == TRUE)
	|| gDb_tRam48XsInputsC1.boStopMotorButton == TRUE	)
		BoFirstWarmingDone = TRUE;

	if(gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939 >0)
		gDb_tRamLimitWorkEnvelopeC1.u16SimuTelescopePositionSensor = gDb_tRamLimitWorkEnvelopeC1.u16SimuTelescopePositionSensor +1;
	if(gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939 == 0)
		gDb_tRamLimitWorkEnvelopeC1.i16SimuDeltaArmAngularSensor = gDb_tRamLimitWorkEnvelopeC1.i16SimuDeltaArmAngularSensor +1;

	/*BoWarmingAuthorized*/
	static TBoolean BoWarmingAuthorized = FALSE;
	if((BoFirstWarmingDone == FALSE
	&& BoWarmingPage == TRUE
	&& u16cptWarming <	u16cptWarmingMax
	&& gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939 == 0
	&& gDb_tRam48XsInputsC1.boStopMotorButton == FALSE)
	|| (BoFirstWarmingDone == TRUE 	&& gDb_tRam48XsInputsC1.boStopMotorButton == TRUE )
	)
		BoWarmingAuthorized = TRUE;
	else
		BoWarmingAuthorized = FALSE;

	/* Falling BoWarmingAuthorized*/
	static TBoolean PreviousBoWarmingAuthorized = FALSE;
	TBoolean FallingBoWarmingAuthorized = FALSE;
	if (BoWarmingAuthorized == FALSE && PreviousBoWarmingAuthorized == TRUE)
		FallingBoWarmingAuthorized = TRUE;
	/* Rising BoWarmingAuthorized*/
	TBoolean RisingBoWarmingAuthorized = FALSE;
	if (BoWarmingAuthorized == TRUE && PreviousBoWarmingAuthorized == FALSE)
		RisingBoWarmingAuthorized = TRUE;

	/* Memorize the previous value*/
	PreviousBoWarmingAuthorized = BoWarmingAuthorized;


	/*u16cptWarming*/
	if (FallingBoWarmingAuthorized == TRUE)
		u16cptWarming = u16cptWarmingMax;
	else if(RisingBoWarmingAuthorized == TRUE)
		u16cptWarming = 0;
	else if (BoWarmingAuthorized == TRUE
	&& u16cptWarming < u16cptWarmingMax)
		u16cptWarming = u16cptWarming+1;

	/*boWarmingOn*/
	static TBoolean boWarmingOn = FALSE;
	if(BoWarmingAuthorized == TRUE
	&& u16cptWarming <	u16cptWarmingMax)
		boWarmingOn = TRUE;
	else
		boWarmingOn = FALSE;

	gDb_tRamEcuOutputsC1.boWarmingCommand = boWarmingOn;

 /* ========================================================= */
//DEBUT GREEN
	 /* ========================================================= */
	 /* 					REMAINING REGEN TIME				  */
	 /* ========================================================= */
	static TUint16 u16RemainingRegenTimeMinute = 0;
	static TInt32 i32Inter1 = 0;
	static TInt32 i32Inter2 = 0;
	static TInt32 i32RemainingRegenTimeMinute = 0;
	static TUint16 u16SocRefMax = 0;
	if (gDb_tRamGreenEffC1.boReloadWithGeneratorOn == TRUE)
		u16SocRefMax =100;
	else
		u16SocRefMax =gDb_tNvParamGreenEffC1.u16REGEN_SOC_MAX;
	i32Inter1 = (((TInt32)u16SocRefMax - (TInt32)gDb_tRamEcuC1RcvFromC0.u8Batt_Soc) * (TInt32)gDb_tNvParamGreenEffC1.u16BATTERY_CAPACITY_AMP_HOUR)*60;
	i32Inter2 = (TInt32)gDb_tRamEcuC1RcvFromC0.i16Ibatt_ist*100;
	if ((gDb_tRamEcuC1RcvFromC0.i16Ibatt_ist>=10
	&& gDb_tRamGreenEffC1.boReloadWithGeneratorOn == FALSE
	&& gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939 >=500 )//si courant superieur a 10A en regen
	||
	(gDb_tRamEcuC1RcvFromC0.i16Ibatt_ist>=0
	&& gDb_tRamGreenEffC1.boReloadWithGeneratorOn == TRUE
	&& 	gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939 >=500)//Si courant superieur à 0A avec generatrice
	)
		i32RemainingRegenTimeMinute = i32Inter1/i32Inter2;
	else
		i32RemainingRegenTimeMinute = 65535;
	u16RemainingRegenTimeMinute = u16CastI32(i32RemainingRegenTimeMinute);

	static TFloat64	f64RemainingRegenTimeMinuteSum = 0;

	f64RemainingRegenTimeMinuteSum = f64MovAverageI32((TInt32)u16RemainingRegenTimeMinute, f64RemainingRegenTimeMinuteSum, gDb_tNvParamGreenEffC1.u8NbElementRemainingRegenTime);
	gDb_tRamGreenEffC1.u16RemainingRegenTimeAverage = (TUint16)f64RemainingRegenTimeMinuteSum;

	 /* ========================================================= */
	 /* 					TOTAL REGEN TIME					  */
	 /* ========================================================= */

	/*u32TotalRegenMinutes*/
	static TUint32 u32TotalRegenCpuCycle = 0;
	if(gDb_tRamEcuC1RcvFromC0.i16Ibatt_ist>=10
	&& gDb_tRamGreenEffC1.boReloadWithGeneratorOn == FALSE
	&& gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939 >=500
	&& gDb_tRamGreenEffC1.boSocStopRegen == FALSE)
		u32TotalRegenCpuCycle = u32TotalRegenCpuCycle + 1;
	if(u32TotalRegenCpuCycle >= 3000) //1min =60sx1000ms= 60000ms/20ms = 3000 CpuCycle
	{
		gDb_tNvMemoryC1.u32TotalRegenMinutes = gDb_tNvMemoryC1.u32TotalRegenMinutes+1;
		u32TotalRegenCpuCycle = 0;
	}

	/*u16TotalRegenHours*/
	gDb_tRamGreenEffC1.u16TotalRegenHours = u16CastU32(gDb_tNvMemoryC1.u32TotalRegenMinutes/60);


 /* ========================================================= */
 /* 					RELOAD WITH GENERATOR				  */
 /* ========================================================= */
	static TBoolean boRisingKeyRpmSelect = FALSE;
	static TBoolean boPreviousRisingKeyRpmSelect = FALSE;
	boRisingKeyRpmSelect = vRisingEdge(gDb_tRamEvision4C1.bogKeyRpmSelect,boPreviousRisingKeyRpmSelect,&boPreviousRisingKeyRpmSelect);

	static TBoolean boRisingKeyRpmOff = FALSE;
	static TBoolean boPreviousRisingKeyRpmOff = FALSE;
	boRisingKeyRpmOff = vRisingEdge(gDb_tRamEvision4C1.bogKeyRpmOff,boPreviousRisingKeyRpmOff,&boPreviousRisingKeyRpmOff);

	static TBoolean boRisingKeyGenerator = FALSE;
	static TBoolean boPreviousRisingKeyGenerator = FALSE;
	boRisingKeyGenerator = vRisingEdge(gDb_tRamEvision7C1.bogKeyGeneratorActivate,boPreviousRisingKeyGenerator,&boPreviousRisingKeyGenerator);

	static TBoolean boFallingGePostRadio = FALSE;
	static TBoolean boPreviousFallingGePostRadio = FALSE;
	boFallingGePostRadio = vFallingEdge(gCsr_tDataRcvFromC1.bi2C1RadioPostSelector == GE_DI_ON,boPreviousFallingGePostRadio,&boPreviousFallingGePostRadio);

	static TBoolean boFallingboReloadWithGeneratorOn = FALSE;
	static TBoolean boPreviousboReloadWithGeneratorOn = FALSE;
	boFallingboReloadWithGeneratorOn = vFallingEdge(gDb_tRamGreenEffC1.boReloadWithGeneratorOn,boPreviousboReloadWithGeneratorOn,&boPreviousboReloadWithGeneratorOn);


	static TBoolean boRisingPostNacelle = FALSE;
	static TBoolean boPreviousRisingPostNacelle  = FALSE;
	boRisingPostNacelle   = vRisingEdge(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost  == GE_POST_NACELLE,boPreviousRisingPostNacelle,&boPreviousRisingPostNacelle);

	/*boSocUperReloadWithGenerator*/
	static TBoolean boSocUperReloadWithGenerator = FALSE;
	if (gDb_tRamEcuC1RcvFromC0.boSendAuthorizeReloadBattery == TRUE
	&& gDb_tRamEcuC1RcvFromC0.u8Batt_Soc >= gDb_tNvParamGreenEffC1.u16REGEN_SOC_MAX
	&& gDb_tRamEcuC1RcvFromC0.u8Batt_Soc < gDb_tNvParamGreenEffC1.u16REGEN_SOC_FULL ) //u16REGEN_SOC_FULL = 100%
		boSocUperReloadWithGenerator=TRUE;
	else
		boSocUperReloadWithGenerator=FALSE;

	static TBoolean boRisingSocUperReloadWithGenerator = FALSE;
	static TBoolean boPreviousRisingSocUperReloadWithGenerator = FALSE;
	boRisingSocUperReloadWithGenerator = vRisingEdge(boSocUperReloadWithGenerator == TRUE,boRisingSocUperReloadWithGenerator,&boPreviousRisingSocUperReloadWithGenerator);



	//GREEN
	/*boAskReloadWithGenerator & boReloadWithGeneratorOn & u16CptNbrRegenFinish & boFirstKeyNoReloadWithGenerator & boNewSocUperReloadWithGenerator*/
	if (boRisingSocUperReloadWithGenerator == TRUE)
		gDb_tNvMemoryC1.boNewSocUperReloadWithGenerator = TRUE;

	//Raz
	if ( gDb_tRamEcuC1RcvFromC0.u8Batt_Soc >= gDb_tNvParamGreenEffC1.u16REGEN_SOC_FULL ) //u16REGEN_SOC_FULL = 100%
	{
		gDb_tNvMemoryC1.u16CptNbrRegenFinish=0;
		gDb_tNvMemoryC1.boFirstKeyNoReloadWithGenerator = FALSE;
		gDb_tNvMemoryC1.boNewSocUperReloadWithGenerator = FALSE;
	}


	if (gDb_tNvParamGreenEffC1.u16REGEN_SOC_MAX > gDb_tNvParamGreenEffC1.u16REGEN_HYST_SOC_MAX
	&& gDb_tRamEcuC1RcvFromC0.u8Batt_Soc <= (gDb_tNvParamGreenEffC1.u16REGEN_SOC_MAX - gDb_tNvParamGreenEffC1.u16REGEN_HYST_SOC_MAX)
	&& gDb_tRamEcuC1RcvFromC0.u8Batt_Soc >0
	)
		gDb_tNvMemoryC1.boFirstKeyNoReloadWithGenerator = FALSE;

	static TUint8 u8Step = 0;
	switch (u8Step)
	{
	case 0:/*Question si report de la recharge generatrice*/
			/*boAskReloadWithGenerator*/
			if (gDb_tNvMemoryC1.boFirstKeyNoReloadWithGenerator == TRUE
			|| gDb_tNvMemoryC1.boNewSocUperReloadWithGenerator == TRUE
			|| gDb_tRamGreenEffC1.boElectricMotorForbidden ==TRUE)
			{
				gDb_tRamGreenEffC1.boAskReloadWithGenerator =TRUE;
				u8Step = 1;
			}
			break;
	case 1:/*Attente reponse*/
			if (gDb_tRamEvision4C1.boKeyYesReloadWithGenerator == TRUE)
			{
				gDb_tRamGreenEffC1.boAskReloadWithGenerator =FALSE;
				gDb_tNvMemoryC1.boNewSocUperReloadWithGenerator = FALSE;
				u8Step = 2;
			}
			else if (gDb_tRamEvision4C1.boKeyNoReloadWithGenerator == TRUE
			|| boRisingPostNacelle == TRUE)
			{
				if (gDb_tNvMemoryC1.boFirstKeyNoReloadWithGenerator == FALSE)
				{
					gDb_tNvMemoryC1.u16CptNbrRegenFinish =gDb_tNvMemoryC1.u16CptNbrRegenFinish+1;
					gDb_tNvMemoryC1.boFirstKeyNoReloadWithGenerator = TRUE;
				}

				gDb_tRamGreenEffC1.boAskReloadWithGenerator =FALSE;
				gDb_tNvMemoryC1.boNewSocUperReloadWithGenerator = FALSE;
				u8Step = 3;
			}
			break;
	case 2:/*test fin de demande de recharge par la génératrice*/
			gDb_tRamGreenEffC1.boReloadWithGeneratorOn =TRUE;
			if (gDb_tRamEvision4C1.bogKeyRpmOff == TRUE
//			|| gDb_tRamEcuC1RcvFromC0.u8Batt_Soc >=  gDb_tNvParamGreenEffC1.u16REGEN_SOC_FULL //u16REGEN_SOC_FULL = 100% //AJOUT IG - permet de continuer l'egalisation des cellules parès le 100%
//NEW GREEN			|| gDb_tRamEcuC1RcvFromC0.boAutorisationHighSpeedKeyState == TRUE
//NEW GREEN			|| (gDb_tRamEcuC1RcvFromC0.boTranslationMovementIsSolicited == FALSE
//NEW GREEN				&& gDb_tRamData4C1RcvFromC0.boMotorAccelerated == FALSE
//NEW GREEN				&& gDb_tRamEcuC1RcvFromC0.eSelectedControlPost != GE_POST_RADIO)
			|| gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939 == 0) //detection moteur thermique off
			{
				gDb_tRamGreenEffC1.boReloadWithGeneratorOn =FALSE;
			 	u8Step = 3;
			}
			break;
	case 3:/*Renouvellement de la demande*/
			if (boFallingGePostRadio == TRUE
			|| boRisingSocUperReloadWithGenerator == TRUE)
			{
				u8Step = 0;
			}
			break;
	}


//DEBUG
	if (boFallingGePostRadio == TRUE)
		gDb_tRamGeneralNeotecC1.u8RamGeneralNeotecC1_2_2=gDb_tRamGeneralNeotecC1.u8RamGeneralNeotecC1_2_2+1;
	gDb_tRamGeneralNeotecC1.u8RamGeneralNeotecC1_2_1=u8Step;

	/*boAlarmCptNbrRegenFinish*/
	if( gDb_tNvMemoryC1.u16CptNbrRegenFinish >=gDb_tNvParamGreenEffC1.u16NBR_REGEN_SOC_ALARM)
		gDb_tRamGreenEffC1.boAlarmCptNbrRegenFinish =TRUE;
	else
		gDb_tRamGreenEffC1.boAlarmCptNbrRegenFinish =FALSE;


	/*boElectricMotorForbidden*/
	if( gDb_tNvMemoryC1.u16CptNbrRegenFinish >=gDb_tNvParamGreenEffC1.u16NBR_REGEN_SOC_OVERED)
		gDb_tRamGreenEffC1.boElectricMotorForbidden =TRUE;
	else
		gDb_tRamGreenEffC1.boElectricMotorForbidden =FALSE;

	/*boSocStopRegen*/
	if (gDb_tRamEcuC1RcvFromC0.u8Batt_Soc >= gDb_tNvParamGreenEffC1.u16REGEN_SOC_MAX
	|| 	gDb_tRamGreenEffC1.boReloadWithGeneratorOn == TRUE)
		gDb_tRamGreenEffC1.boSocStopRegen = TRUE;
	else
		gDb_tRamGreenEffC1.boSocStopRegen = FALSE;


	gDb_tRamEcuOutputsC1.boRelayReloadWithGeneratorCmd = gDb_tRamGreenEffC1.boReloadWithGeneratorOn;

	/* ======================================================== */
	/* 	SILENCE MODE  FORCING MODE	GENERATOR					*/
	/* ======================================================== */
	/*u16SelectedRpm*/
	static TUint16 u16SelectedRpm = 0;
	const TUint16 RPM_AUTOMATIQUE = 0;
	const TUint16 RPM_SILENCE = 1;
	const TUint16 RPM_REGEN_LOW = 2;
	const TUint16 RPM_REGEN_HIGHT = 3;


	/*u16SelectedRpm*/
	if (boRisingKeyRpmOff == TRUE
	|| gDb_tRamGreenEffC1.boGeneratorOn == TRUE
	|| gDb_tRamGreenEffC1.boReloadWithGeneratorOn == TRUE
//	|| gDb_tRamEcuC1RcvFromC0.boAutorisationHighSpeedKeyState == TRUE //NEW GREEN
	|| gDb_tRamGreenEffC1.boAskReloadWithGenerator == TRUE
	|| gDb_tRamEcuC1RcvFromC0.eSelectedControlPost  == GE_POST_NACELLE /*(gDb_tRamEcuC1RcvFromC0.boTranslationMovementIsSolicited == TRUE  && gDb_tRamEcuC1RcvFromC0.eSelectedControlPost  == GE_POST_NACELLE)*/ //NEW GREEN
	|| gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939 == 0 ) //detection moteur thermique off
		u16SelectedRpm =RPM_AUTOMATIQUE;
	else if (boRisingKeyRpmSelect == TRUE
	&& u16SelectedRpm == RPM_AUTOMATIQUE
	&& gDb_tRamGreenEffC1.boReloadWithGeneratorOn == FALSE )
		u16SelectedRpm =RPM_SILENCE;
	else if (boRisingKeyRpmSelect == TRUE
	&& u16SelectedRpm == RPM_SILENCE
	&& gDb_tRamGreenEffC1.boReloadWithGeneratorOn ==  FALSE )
		u16SelectedRpm =RPM_REGEN_LOW;
	else if (boRisingKeyRpmSelect == TRUE
	&& u16SelectedRpm ==RPM_REGEN_LOW
	&& gDb_tRamGreenEffC1.boReloadWithGeneratorOn == FALSE )
		u16SelectedRpm =RPM_REGEN_HIGHT;
	else if (boRisingKeyRpmSelect == TRUE
	&& u16SelectedRpm == RPM_REGEN_HIGHT
	&& gDb_tRamGreenEffC1.boReloadWithGeneratorOn == FALSE )
		u16SelectedRpm =RPM_SILENCE;

	/*boAutoModeActivate*/
	if (u16SelectedRpm == RPM_AUTOMATIQUE)
		gDb_tRamGreenEffC1.boAutoModeActivate = TRUE;
	else
		gDb_tRamGreenEffC1.boAutoModeActivate = FALSE;

    /* ========================================================= */
  	/* 						SILENCE MODE						 */
  	/* ========================================================= */
	/*boSilenceModeActivate*/
	if (gDb_tRamGreenEffC1.boSilenceModeActivate == FALSE
	&& u16SelectedRpm == RPM_SILENCE
	&& boRisingKeyRpmSelect == TRUE
	&& gDb_tRamGreenEffC1.boGeneratorOn == FALSE )
		gDb_tRamGreenEffC1.boSilenceModeActivate =TRUE;
	else if (( u16SelectedRpm == RPM_SILENCE && boRisingKeyRpmOff == TRUE )
	|| u16SelectedRpm == RPM_AUTOMATIQUE
	|| u16SelectedRpm == RPM_REGEN_LOW
	|| u16SelectedRpm == RPM_REGEN_HIGHT )
		gDb_tRamGreenEffC1.boSilenceModeActivate =FALSE;
//AJOUT IG
    /* ========================================================= */
  	/* 					BattRecoveryRatioBeforeStop			 */
  	/* ========================================================= */
	static TBoolean boRising_BattRecoveryRatio = FALSE;
	static TBoolean boPreviousRising_BattRecoveryRatio = FALSE;
	boRising_BattRecoveryRatio = vRisingEdge(gDb_tRamData4C1RcvFromC0.u8RecoveryReductionRatio == 255,boPreviousRising_BattRecoveryRatio,&boPreviousRising_BattRecoveryRatio);

	if(gDb_tRamEcuC1RcvFromC0.i16Ibatt_ist >=10
	&& gDb_tRamGreenEffC1.boReloadWithGeneratorOn == FALSE
	&& gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939 >=500
	&& gDb_tRamEcuC1RcvFromC0.u8Batt_Soc>0
	&& gDb_tRamEcuC1RcvFromC0.u8Batt_Soc<gDb_tNvParamGreenEffC1.u16REGEN_SOC_MAX
	&& boRising_BattRecoveryRatio == TRUE)
		gDb_tRamGreenEffC1.boPictoRecoveryReductionRatio = TRUE;

	if(gDb_tRamEcuC1RcvFromC0.u8Batt_Soc>=gDb_tNvParamGreenEffC1.u16REGEN_SOC_MAX
	|| gDb_tRamData4C1RcvFromC0.u8RecoveryReductionRatio < 255)
		gDb_tRamGreenEffC1.boPictoRecoveryReductionRatio = FALSE;

//AJOUT IG
    /* ========================================================= */
  	/* 						FORCING MODE						 */
  	/* ========================================================= */
	/*boForcingModeActivate*/
	if (u16SelectedRpm == RPM_REGEN_LOW
	|| u16SelectedRpm == RPM_REGEN_HIGHT)
		gDb_tRamGreenEffC1.boForcingModeActivate =TRUE;
	else
		gDb_tRamGreenEffC1.boForcingModeActivate =FALSE;

	/*boForcingRegenlow*/
	if (u16SelectedRpm == RPM_REGEN_LOW)
		gDb_tRamGreenEffC1.boForcingRegenlow = TRUE;
	else
		gDb_tRamGreenEffC1.boForcingRegenlow = FALSE;

	/*boForcingRegenHigh*/
	if (u16SelectedRpm == RPM_REGEN_HIGHT)
		gDb_tRamGreenEffC1.boForcingRegenHigh = TRUE;
	else
		gDb_tRamGreenEffC1.boForcingRegenHigh = FALSE;


//FIN GREEN
/* ========================================================= */


	/* ========================================================= */
	/* 						GENERATOR							 */
	/* ========================================================= */
	TBoolean boOptionPresenceGenerator = gDb_tNvOptionsC1.boGenerator;/*Option generatrice*/
	TUint16 u16TresholdRegimeForGenerator = gDb_tNvParamMotorC1.u16TresholdRegimeForGenerator;/*parametre regime generatrice*/
	TUint16 u16CurFor220VGeneratorOn = gDb_tNvParametersC1.u16CurFor220VGeneratorOn;/*parametre courant prop generatrice*/

	/*boGeneratorOn*/
	/*set*/
	if((boOptionPresenceGenerator == TRUE
	&& gDb_tRamGreenEffC1.boSilenceModeActivate == FALSE
	&& gDb_tRamGreenEffC1.boForcingModeActivate == FALSE
	&& gDb_tRamGreenEffC1.boGeneratorOn == FALSE
	&& gDb_tRamData4C1RcvFromC0.boTurretPostorRadoPostOn == FALSE
	&& gDb_tRamEcuC1RcvFromC0.boTranslationMovementIsSolicited == FALSE
	&& boNoMovement == TRUE
	&& gDb_tRam48XsInputsC1.boDeadManPedal == FALSE
	&& gDb_tRamEcuOutputsC1.u16EvPropGeneratorCommand == 0
	&& boRisingKeyGenerator == TRUE)
	||
	gDb_tRamGreenEffC1.boReloadWithGeneratorOn == TRUE //GREEN
	)
		gDb_tRamGreenEffC1.boGeneratorOn = TRUE;
	/*Reset*/
	else if(boOptionPresenceGenerator == FALSE
	||(gDb_tRamGreenEffC1.boGeneratorOn == TRUE && boRisingKeyGenerator == TRUE)
//	|| gDb_tRamEcuC1RcvFromC0.boTranslationMovementIsSolicited == TRUE //GREEN //OLD gDb_tRam48XsInputsC1.boDeadManPedal == TRUE
	|| gDb_tRamData4C1RcvFromC0.boTurretPostorRadoPostOn == TRUE
	|| boFallingboReloadWithGeneratorOn ==TRUE
	)
		gDb_tRamGreenEffC1.boGeneratorOn = FALSE;

	/* Rising boGeneratorOn*/
	static TBoolean PreviousboGeneratorOn = FALSE;
	TBoolean RisingboGeneratorOn = FALSE;
	if (gDb_tRamGreenEffC1.boGeneratorOn == TRUE && PreviousboGeneratorOn == FALSE)
		RisingboGeneratorOn = TRUE;
	/* Memorize the previous value*/
	PreviousboGeneratorOn = gDb_tRamGreenEffC1.boGeneratorOn;

	/*boActiveAcceleratorGenerator*/
	static TBoolean boActiveAcceleratorGenerator = FALSE;
	/*set*/
	if(RisingboGeneratorOn == TRUE)
		boActiveAcceleratorGenerator = TRUE;
	/*Reset*/
	if(gDb_tRamGreenEffC1.boGeneratorOn == FALSE
	&& gDb_tRamEcuOutputsC1.u16EvPropGeneratorCommand == 0)
		boActiveAcceleratorGenerator = FALSE;

	static TInt16 i16InRamp = 0;
	static TBoolean boCenteredIn = FALSE;
	static TInt16 i16Unused = 0;
	static TInt16 i16EvPropGeneratorCur = 0;
	TUint16 auRampGeneratorRatio[4];
	TInt16 aiCurentRangeGenerator[3];

	auRampGeneratorRatio[0] = gDb_tNvParametersC1.u16RampUpEvGenerator; /*2000ms*/
	auRampGeneratorRatio[1] = gDb_tNvParametersC1.u16RampDownEvGenerator; /*2000ms*/
	auRampGeneratorRatio[2] = 0;
	auRampGeneratorRatio[3] = 0;
	aiCurentRangeGenerator[0] = 0;/*off*/
	aiCurentRangeGenerator[1] = 0;/*min*/
	aiCurentRangeGenerator[2] = (TInt16)u16CurFor220VGeneratorOn;/*max*/

	if(gDb_tRamGreenEffC1.boGeneratorOn == TRUE)
	{
		i16InRamp = 10000;
		boCenteredIn = FALSE;
	}
	else
	{
		i16InRamp = 0;
		boCenteredIn = TRUE;
	}

	In1ProAxisPilotOut2PropEvFunction(i16InRamp,boCenteredIn, gDb_tRamGreenEffC1.boGeneratorOn,FALSE,
										&tPropEvGeneratorRamp,auRampGeneratorRatio,
										aiCurentRangeGenerator,aiCurentRangeGenerator,
										(TInt16)u16CurFor220VGeneratorOn,
										0,
										&i16EvPropGeneratorCur,&i16Unused,
										&i16Unused);

	gDb_tRamEcuOutputsC1.u16EvPropGeneratorCommand = (TUint16)i16EvPropGeneratorCur;


	/*boEvDevMvtsCmd*/ //GREEN E
	//Mise a un
	if (gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939 >= 500 //Moteur On
	&& gDb_tRamGreenEffC1.boGeneratorOn == TRUE)
		gDb_tRamEcuOutputsC1.boEvDevMvtsCmd = TRUE;
	//Mise à zero
	/*TON*/
	static TUint16 u16cptIdleSpeedMotor =0;
	TUint16 u16cptmaxIdleSpeedMotor = 100; //100x20ms = 2000ms
	if(gDb_tRamGeneralNeotecC1.u16MotorSpeedCmdJ1939 == gDb_tNvParamMotorC1.u16EngineIdleSpeedMotor)
	{
		if (u16cptIdleSpeedMotor>=u16cptmaxIdleSpeedMotor)
			u16cptIdleSpeedMotor=u16cptmaxIdleSpeedMotor;
		else
			u16cptIdleSpeedMotor=u16cptIdleSpeedMotor+1;
	}
	else
		u16cptIdleSpeedMotor=0;
	if ( u16cptIdleSpeedMotor == u16cptmaxIdleSpeedMotor)
		gDb_tRamEcuOutputsC1.boEvDevMvtsCmd = FALSE;


	/* reset command*/
	gDb_tRamGeneralNeotecC1.u16MotorSpeedCmdJ1939 = gDb_tNvParamMotorC1.u16EngineIdleSpeedMotor;

	/* run timer*/
	boEleTimerCalculate(&tTimerSartUpMotor);
	boEleTimerCalculate(&tTimerPreheating);

	/* check if engine is on then start up motor*/
	if(gDb_tRamGeneralC1.boEngineOn == TRUE)
	{
		boStartUpMotor = TRUE;
	}

	/* check if start up then start timer*/
	if(boStartUpMotor == TRUE)
	{
		u32EleTimerStart(&tTimerSartUpMotor);
	}

	/* check if timer is done then set startup motor to false*/
	if(boEleTimerGetEvent(&tTimerSartUpMotor) == TRUE)
	{
		boStartUpMotorTimerDone = TRUE;
	}

    /* ============================================================================================= */
  	/* 									Determine motor command										 */
  	/* ============================================================================================= */

	/* check if start up when start timer*/
	if(boForcingHighRegime == TRUE)
	{
		u32EleTimerStart(&tTimerPreheating);
	}

	/* check if timer is done then set startup motor to false*/
	if(boEleTimerGetEvent(&tTimerPreheating) == TRUE)
	{
		boForcingHighRegime = FALSE;
	}

	if (gDb_tRamGreenEffC1.boForcingModeActivate == TRUE)
	{
		if (u16SelectedRpm == RPM_REGEN_LOW)
			gDb_tRamGeneralNeotecC1.u16MotorSpeedCmdJ1939 = gDb_tNvParamMotorC1.u16LowForcingCurrentMotor;
		else if (u16SelectedRpm == RPM_REGEN_HIGHT)
			gDb_tRamGeneralNeotecC1.u16MotorSpeedCmdJ1939 = gDb_tNvParamMotorC1.u16HighForcingCurrentMotor;
		else
			gDb_tRamGeneralNeotecC1.u16MotorSpeedCmdJ1939 = gDb_tNvParamMotorC1.u16EngineIdleSpeedMotor;
	}
	else if (gDb_tRamGreenEffC1.boSilenceModeActivate == TRUE)
	{
		gDb_tRamGeneralNeotecC1.u16MotorSpeedCmdJ1939 = gDb_tNvParamMotorC1.u16EngineIdleSpeedMotor;
	}
	else if (boActiveAcceleratorGenerator == TRUE)
	{
		gDb_tRamGeneralNeotecC1.u16MotorSpeedCmdJ1939 = u16TresholdRegimeForGenerator;
	}
	/*check if translation movement is solicited*/
	else if(gDb_tRamEcuC1RcvFromC0.boTranslationMovementIsSolicited == TRUE)
	{
		if (gDb_tRamData4C1RcvFromC0.boMotorAccelerated == TRUE
		|| gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_RADIO
		)
			gDb_tRamGeneralNeotecC1.u16MotorSpeedCmdJ1939 = gDb_tNvParamMotorC1.u16TranslationCurrentMotor;
		else
			gDb_tRamGeneralNeotecC1.u16MotorSpeedCmdJ1939 = gDb_tNvParamMotorC1.u16NoMovementCurrentMotor;
	}
	/* check if moree at 2 pvg movement are solicited*/
	else if(boMoreAtOnePvgMovement == TRUE)
	{
		gDb_tRamGeneralNeotecC1.u16MotorSpeedCmdJ1939 = gDb_tNvParamMotorC1.u16Threshold3;
	}
	/* check if one pvg movement is solicited*/
	else if(boOnePvgMovement == TRUE)
	{
		gDb_tRamGeneralNeotecC1.u16MotorSpeedCmdJ1939 = gDb_tNvParamMotorC1.u16Threshold2;
	}
	/* check if a output of group 2 is solicited*/
	else if(boGroup2Movement == TRUE)
	{
		gDb_tRamGeneralNeotecC1.u16MotorSpeedCmdJ1939 = gDb_tNvParamMotorC1.u16Threshold1;
	}
	/* check if start up motor timer is doner*/
	else if(boStartUpMotorTimerDone == TRUE)
	{
		gDb_tRamGeneralNeotecC1.u16MotorSpeedCmdJ1939 = gDb_tNvParamMotorC1.u16StartUpCurrentMotor;
	}
//NEOTEC IG STRUKTON DEBUT
	// No movement
	else if(boNoMovement == TRUE ||(gDb_tRamData4C1RcvFromC0.boAddPerformanceFunc == TRUE && gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_RADIO && gDb_tRamMastMeasureC1.boFolded_Position_Mast == FALSE))
	{
		gDb_tRamGeneralNeotecC1.u16MotorSpeedCmdJ1939 = gDb_tNvParamMotorC1.u16EngineIdleSpeedMotor;/*Avant la valeur était de 0 en dur*/
	}
//NEOTEC IG STRUKTON FIN

//GREEN
	if (gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939 <= 0) //detection moteur thermique off
		gDb_tRamGeneralNeotecC1.u16MotorSpeedCmdJ1939 = 0;

//GREEN
	/*boEvBoostRegenCmd*/
	if (gDb_tRamEcuC1RcvFromC0.boSendAuthorizeReloadBattery == TRUE)

		gDb_tRamEcuOutputsC1.boEvBoostRegenCmd = TRUE;
	else
		gDb_tRamEcuOutputsC1.boEvBoostRegenCmd = FALSE;

    /* ============================================================================================= */
  	/* 									Control stop motor 								     		 */
  	/* ============================================================================================= */
	vControlStopMotor();

    /* ============================================================================================= */
  	/* 									Control anti start up motor 								 */
  	/* ============================================================================================= */
	vControlAntiStartUp();
}

//-----------------------------------------------------------------------------------------------------
//! @brief Control  low side output for ev accelerator motor and generator
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 17.12.2018 HYDAC/CK
//!
//! @change	19.06.2019 NEOTEC/FV
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vControlLowSideEvAccMotorAndGenerator(TVoid)
{
	gDb_tRamEcuOutputsC1.boReturnLowSideEvProAccMotorCmd = TRUE;
	gDb_tRamEcuOutputsC1.boReturnLowSideEvProGeneratorCmd = TRUE;
}


//-----------------------------------------------------------------------------------------------------
//! @brief Control  stop motor
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 20.12.2018 HYDAC/CK
//! @change  03.05.2019 NEOTEC/FV check power supply 48X
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vControlStopMotor(TVoid)
{
	/* check if the button stop motor is pushed*/
	static TUint16 u16cpt =0;
	TUint16 u16cptmax =125; //125x20ms = 2500ms
	if(gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939 >= 500)
	{
		if (u16cpt>=u16cptmax)
			u16cpt=u16cptmax;
		else
			u16cpt=u16cpt+1;
	}
	else if (gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939 < 500)
		u16cpt=0;

	gDb_tRamAutoStopC1.u8CounterStopTurretRotationDebug=u16cpt;

	if (gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs>8000
	&& u16cpt>=u16cptmax
	&& gDb_tRam48XsInputsC1.boStopMotorButton == TRUE )
	{
		gDb_tRamGeneralNeotecC1.eStopMotorJ1939 = GE_ON;
	}
	else
	{
		gDb_tRamGeneralNeotecC1.eStopMotorJ1939 = GE_OFF;
	}
}

//-----------------------------------------------------------------------------------------------------
//! @brief Control  stop motor
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 10.01.2019 HYDAC/CK
//!
//! @change  10.12.2019 HYDAC/CK : change name of timer tTimerAntiDemarrage to tTimerAntiStartUp
//!
//! @care
//! @todo timer wait 4s after start
//-----------------------------------------------------------------------------------------------------
TVoid vControlAntiStartUp(TVoid)
{

	if (gDb_tRamGreenEffC1.i16RpmMotorElectric !=0
	|| gDb_tRamEcuInputsC1.eStarterMotorState == GE_DI_OFF)
		gDb_tRamEcuOutputsC1.boAntiStartupCommand = TRUE;
	else
		gDb_tRamEcuOutputsC1.boAntiStartupCommand = FALSE;

//	/* local variable*/
//	TUint32		u32Dt;
//	TBoolean	boTimerAntiDemarrageStatus;
//	TBoolean	boTimerAntiDemarrageEvent;
//
//	boTimerAntiDemarrageStatus = boEleTimerCalculate(&tTimerAntiStartUp);
//
//	boTimerAntiDemarrageEvent = boEleTimerGetEvent (&tTimerAntiStartUp);
//
//
//	/* check if the button stop motor is pushed*/
//	if(gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939 > 1000)	{
//		/* check status and event to start timer*/
//		if(boTimerAntiDemarrageStatus == FALSE && boTimerAntiDemarrageEvent == FALSE)
//		{
//			/* start timer*/
//			u32EleTimerStart(&tTimerAntiStartUp);
//		}
//
//		if(boTimerAntiDemarrageEvent == TRUE)
//		{
//			/* set anti start up*/
//			gDb_tRamEcuOutputsC1.boAntiStartupCommand = TRUE;
//		}
//	}
//	else
//	{
//		/* reset command*/
//		gDb_tRamEcuOutputsC1.boAntiStartupCommand = FALSE;
//
//		/* reset timer*/
//		eEleTimerManStop(&tTimerAntiStartUp,&u32Dt);
//	}
}


