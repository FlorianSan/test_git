
//==================================================================================================
//! @file BrakeTest.c
//! @brief brake test
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 07.02.2019 HYDAC/CK
//! @history: #- CK 07.02.201* HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "BrakeTest.h"

//-------------------------------------------------------------------------------------------------
//! @brief brake test
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 07.02.2019 HYDAC/CK
//!
//! @change	 02.05.2019 NEOTEC/FV
//! @change  17.12.2019 HYDAC/CK - change provisional value of msg can gDb_tRamData4C1RcvFromC0.boSignal_2 to gDb_tRamData4C1RcvFromC0.boTransmissionPressureFault
//!
//! @care
//! @todo
//
//07.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vBrakeTest(TVoid)
{
	// local variable
	TUint32		u32Dt;
	TBoolean    boTimerEvent;
	TBoolean    boTimerStatus;
	TBoolean    boTimerPressureOsciServiceBrakeTestStatus;
	TBoolean	boTimerTimerPressureOsciServiceBrakeTestEvent;
	TBoolean	boTimerPressureFixeServiceBrakeTestStatus;
	TBoolean	boTimerPressureFixeServiceBrakeTestEvent;
	TBoolean	boTimerPressureOsciParkingBrakeTestStatus;
	TBoolean	boTimerPressureOsciParkingBrakeTestEvent;
	TBoolean	boTimerPressureFixeParkingBrakeTestStatus;
	TBoolean	boTimerPressureFixeParkingBrakeTestEvent;
/* Double freins*/
	TBoolean	boTimerPressureFixe2ndParkingBrakeTestStatus;
	TBoolean	boTimerPressureFixe2ndParkingBrakeTestEvent;
	TBoolean	boTimerPressureOsci2ndParkingBrakeTestStatus;
	TBoolean	boTimerPressureOsci2ndParkingBrakeTestEvent;
/* Double freins*/
	//-----------------------------------------------------------------------------------------------------
	// increment brake cycle	 => memory list save on eAppShutDown phase
	//-----------------------------------------------------------------------------------------------------
	/* check if one service brake is active and vehicle speed is below at min threshold*/
	if((gDb_tRamEcuOutputsC0.boEvServiceBrakeAxleOsciCmdBool || gDb_tRamEcuOutputsC0.boEvServiceBrakeAxleFixeCmdBool)
		&& (gDb_tRamEcuInputsC0.i32FixeAxleFrequency < gDb_tNvParamBrakeTest.u16SpeedMinTreshIncrBrakeCycles)
		&& (gDb_tRamEcuInputsC0.i32OscillantAxleFrequency < gDb_tNvParamBrakeTest.u16SpeedMinTreshIncrBrakeCycles))
	{
		/* check enable to increment only one time cycle brake perform*/
		if(gDb_tRamBrakeTest.boEnableIncrementCycleBrakePerform)
		{
			/* increment brake cycle*/
			gDb_tNvMemoryC0.u16NCycleBrakePerform++;
			/* Double freins*/
			gDb_tNvMemoryC0.u16NCycle2ndParkBrakePerform++;/*Compte le nombre de Cycle de freins du 2nd Park Brakes*/
			/* Double freins*/
			/* set to false enable condition*/
			gDb_tRamBrakeTest.boEnableIncrementCycleBrakePerform = FALSE;
		}
	}
	else if((gDb_tRamEcuInputsC0.i32FixeAxleFrequency > gDb_tNvParamBrakeTest.u16SpeedMinTreshIncrBrakeCycles)
		&& (gDb_tRamEcuInputsC0.i32OscillantAxleFrequency > gDb_tNvParamBrakeTest.u16SpeedMinTreshIncrBrakeCycles))
	{
		/* reset enable increment brake perform*/
		gDb_tRamBrakeTest.boEnableIncrementCycleBrakePerform = TRUE;
	}

	//-----------------------------------------------------------------------------------------------------
	// Determine if the test brake is needed
	//-----------------------------------------------------------------------------------------------------
	/* check if number of cycle brake perform is over at threshold*/
	if(gDb_tNvMemoryC0.u16NCycleBrakePerform > gDb_tNvParamBrakeTest.u16NCycleNeedBrakeTest)
		gDb_tRamBrakeTest.boNeedTestBrake = TRUE;
	else
		gDb_tRamBrakeTest.boNeedTestBrake = FALSE;

	//-----------------------------------------------------------------------------------------------------
	// Determine critical cycle brake perform , limit speed of translation
	//-----------------------------------------------------------------------------------------------------
	/* check if number of cycle brake perform is over at critical threshold*/
	if(gDb_tNvMemoryC0.u16NCycleBrakePerform > (gDb_tNvParamBrakeTest.u16NCycleNeedBrakeTest + gDb_tNvParamBrakeTest.u16NCyclesBrakeCritical))
		gDb_tRamBrakeTest.boCycleBrakeOverCriticalNumber = TRUE;
	else
		gDb_tRamBrakeTest.boCycleBrakeOverCriticalNumber = FALSE;


	//-----------------------------------------------------------------------------------------------------
	// Determine Pourcent cycle brake perform
	//-----------------------------------------------------------------------------------------------------
	TInt16 i16PourcentCycleBrake;
	TUint8 u8PourcentCycleBrake;
	i16PourcentCycleBrake = i16CalcLinear2Dots(gDb_tNvMemoryC0.u16NCycleBrakePerform, 0, 0,gDb_tNvParamBrakeTest.u16NCycleNeedBrakeTest,100);
	u8PourcentCycleBrake =(TUint8)i16RangeMinMax (i16PourcentCycleBrake,0,255);
	gDb_tRamBrakeTest.u8PourcentCycleBrake = u8PourcentCycleBrake;
	gDb_tRamSpeedMaxRail.u16SimuDevers = i16PourcentCycleBrake ;
	gDb_tRamSpeedMaxRail.i16SimuTurretAngle = u8PourcentCycleBrake;


/*Detection du dépassement des seuils des nombres de cycles de tests freins.
Calcul du nombre de cycle de frein en pourcentage*/
	//-----------------------------------------------------------------------------------------------------
	// Determine if the test for the 2nd brake is needed
	//-----------------------------------------------------------------------------------------------------
	if((gDb_tNvMemoryC0.u16NCycle2ndParkBrakePerform  > gDb_tNvParamBrakeTest.u16NCycleNeed2ndParkBrake )
	&&  gDb_tNvOptionsC0.boSecondParkBrakeActive == TRUE)
		gDb_tRamBrakeTest.boNeedTest2ndParkBrake  = TRUE;
	else
		gDb_tRamBrakeTest.boNeedTest2ndParkBrake  = FALSE;

	//-----------------------------------------------------------------------------------------------------
	// Determine critical cycle brake perform for the 2nd Brake , limit speed of translation
	//-----------------------------------------------------------------------------------------------------
	/* check if number of cycle brake perform is over at critical threshold*/
	if((gDb_tNvMemoryC0.u16NCycle2ndParkBrakePerform > (gDb_tNvParamBrakeTest.u16NCycleNeed2ndParkBrake + gDb_tNvParamBrakeTest.u16NCyclesBrakeCritical))
	&&  gDb_tNvOptionsC0.boSecondParkBrakeActive == TRUE)
		gDb_tRamBrakeTest.boCycle2ndParkBrakeCritical = TRUE;
	else
		gDb_tRamBrakeTest.boCycle2ndParkBrakeCritical = FALSE;
		

	//-----------------------------------------------------------------------------------------------------
	// Determine Pourcent cycle 2nd brake perform
	//-----------------------------------------------------------------------------------------------------
	TInt16 i16PourcentCycle2ndBrake;
	TUint8 u8PourcentCycle2ndBrake;
	i16PourcentCycle2ndBrake = i16CalcLinear2Dots(gDb_tNvMemoryC0.u16NCycle2ndParkBrakePerform, 0, 0,gDb_tNvParamBrakeTest.u16NCycleNeed2ndParkBrake,100);
	u8PourcentCycle2ndBrake =(TUint8)i16RangeMinMax (i16PourcentCycle2ndBrake,0,255);
	gDb_tRamBrakeTest.u8PourcentCycle2ndParkBrake  = u8PourcentCycle2ndBrake;



	//-----------------------------------------------------------------------------------------------------
	// Determine position transport , axle up or down position
	//-----------------------------------------------------------------------------------------------------
	/* check axle position sensor*/
	if(gDb_tRamEcuInputsC0.eDownAxleFixeState == GE_DI_ON && gDb_tRamEcuInputsC0.eDownAxleOscillantState == GE_DI_ON)
		gDb_tRamBrakeTest.boDownPositionAxles = TRUE;
	else
		gDb_tRamBrakeTest.boDownPositionAxles = FALSE;

	/* check axle position sensor*/
	if(gDb_tRamEcuInputsC0.eUpAxleFixeState == GE_DI_ON && gDb_tRamEcuInputsC0.eUpAxleOscillantState == GE_DI_ON)
		gDb_tRamBrakeTest.boUpPositionAxles = TRUE;
	else
		gDb_tRamBrakeTest.boUpPositionAxles = FALSE;
//NEOTEC IG EVO V4
	//-----------------------------------------------------------------------------------------------------
	// Determine if 2nd Park brake are active with pressure
	//-----------------------------------------------------------------------------------------------------
	/*Détection d'une pression en dessous de 15bars*/
	if(gDb_tRamEcuC0RcvFromC1.i16Transmission1Pressure <= gDb_tNvParamBrakeTest.u16MinThresholdActive2ndParkBrake
	|| gDb_tRamEcuC0RcvFromC1.i16Transmission2Pressure <= gDb_tNvParamBrakeTest.u16MinThresholdActive2ndParkBrake)
		gDb_tRamBrakeTest.boParkBrake2ndPressureActive = TRUE;
	else
		gDb_tRamBrakeTest.boParkBrake2ndPressureActive = FALSE;

	static TUint16 u16Cpt2ndParkBrake =0;//Compteur pour le filtrage
	/*2ndParkBrakeActive*/
	if(gDb_tRamBrakeTest.boParkBrake2ndPressureActive == TRUE)
	{
		if (u16Cpt2ndParkBrake>=gDb_tNvParamBrakeTest.u16ThresCpt2ndParkBrake)
			u16Cpt2ndParkBrake=gDb_tNvParamBrakeTest.u16ThresCpt2ndParkBrake;
		else
			u16Cpt2ndParkBrake=u16Cpt2ndParkBrake+1;
	}
	else
	{
		u16Cpt2ndParkBrake = 0;
	}

	/*Set*/
	if (u16Cpt2ndParkBrake == gDb_tNvParamBrakeTest.u16ThresCpt2ndParkBrake)
		gDb_tRamBrakeTest.boAddParkBrakeActive = TRUE;
	else
		gDb_tRamBrakeTest.boAddParkBrakeActive = FALSE;

//NEOTEC IG EVO V4

	//-----------------------------------------------------------------------------------------------------
	// Determine incoherence position axle and test mode
	//-----------------------------------------------------------------------------------------------------
	/* check wich test brake mode is selected and position of axle*/

	if(gDb_tRamEvision7C0.bogOffTrackTestBrakeActivated == TRUE
	&& gDb_tRamBrakeTest.boUpPositionAxles == FALSE
	&& gDb_tRamBrakeTest.boDownPositionAxles == FALSE)
		gDb_tRamBrakeTest.boIncoherencePosAxleAndTestMode = TRUE;
	else
		gDb_tRamBrakeTest.boIncoherencePosAxleAndTestMode = FALSE;


	//-----------------------------------------------------------------------------------------------------
	// Determine brake selected
	//-----------------------------------------------------------------------------------------------------

	if(gDb_tRamGeneralC0.eRailSpeedMode != GE_NO_SPEED_MAX_RAIL_MODE && gDb_tRamEvision7C0.bogTestBrakePageActive)
	{
		if((gDb_tRamEvision7C0.bogOsciServiceBrakeSelect== TRUE && gDb_tRamEvision7C0.bogFixedServiceBrakeSelect == FALSE && gDb_tRamEvision7C0.bogOsciParkBrakeSelect == FALSE && gDb_tRamEvision7C0.bogFixedParkBrakeSelect == FALSE && gDb_tRamEvision7C0.bogBothServiceBrakeSelect == FALSE && gDb_tRamEvision7C0.bogBothParkBrakeSelect == FALSE && gDb_tRamEvision7C0.bogOsci2ndParkBrakeSelect == FALSE && gDb_tRamEvision7C0.bogFixe2ndParkBrakeSelect == FALSE))
			gDb_tRamBrakeTest.eBrakeTestSelected = GE_OSCI_SERVICE_BRAKE;
		else if((gDb_tRamEvision7C0.bogOsciServiceBrakeSelect == FALSE && gDb_tRamEvision7C0.bogFixedServiceBrakeSelect == TRUE && gDb_tRamEvision7C0.bogOsciParkBrakeSelect == FALSE && gDb_tRamEvision7C0.bogFixedParkBrakeSelect == FALSE && gDb_tRamEvision7C0.bogBothServiceBrakeSelect == FALSE && gDb_tRamEvision7C0.bogBothParkBrakeSelect == FALSE && gDb_tRamEvision7C0.bogOsci2ndParkBrakeSelect == FALSE && gDb_tRamEvision7C0.bogFixe2ndParkBrakeSelect == FALSE))
			gDb_tRamBrakeTest.eBrakeTestSelected = GE_FIXE_SERVICE_BRAKE;
		else if((gDb_tRamEvision7C0.bogOsciServiceBrakeSelect == FALSE && gDb_tRamEvision7C0.bogFixedServiceBrakeSelect == FALSE &&gDb_tRamEvision7C0.bogOsciParkBrakeSelect == TRUE && gDb_tRamEvision7C0.bogFixedParkBrakeSelect == FALSE && gDb_tRamEvision7C0.bogBothServiceBrakeSelect == FALSE && gDb_tRamEvision7C0.bogBothParkBrakeSelect == FALSE && gDb_tRamEvision7C0.bogOsci2ndParkBrakeSelect == FALSE && gDb_tRamEvision7C0.bogFixe2ndParkBrakeSelect == FALSE))
			gDb_tRamBrakeTest.eBrakeTestSelected = GE_OSCI_PARKING_BRAKE;
		else if((gDb_tRamEvision7C0.bogOsciServiceBrakeSelect == FALSE && gDb_tRamEvision7C0.bogFixedServiceBrakeSelect == FALSE &&gDb_tRamEvision7C0.bogOsciParkBrakeSelect == FALSE && gDb_tRamEvision7C0.bogFixedParkBrakeSelect == TRUE && gDb_tRamEvision7C0.bogBothServiceBrakeSelect == FALSE && gDb_tRamBrakeTest.boSimu2ParkBrakesSelect == FALSE && gDb_tRamEvision7C0.bogOsci2ndParkBrakeSelect == FALSE && gDb_tRamEvision7C0.bogFixe2ndParkBrakeSelect == FALSE))
			gDb_tRamBrakeTest.eBrakeTestSelected = GE_FIXE_PARKING_BRAKE;
		else if((gDb_tRamEvision7C0.bogOsciServiceBrakeSelect == FALSE && gDb_tRamEvision7C0.bogFixedServiceBrakeSelect == FALSE &&gDb_tRamEvision7C0.bogOsciParkBrakeSelect == FALSE && gDb_tRamEvision7C0.bogFixedParkBrakeSelect == FALSE && gDb_tRamEvision7C0.bogBothServiceBrakeSelect == TRUE && gDb_tRamEvision7C0.bogBothParkBrakeSelect == FALSE && gDb_tRamEvision7C0.bogOsci2ndParkBrakeSelect == FALSE && gDb_tRamEvision7C0.bogFixe2ndParkBrakeSelect == FALSE))
			gDb_tRamBrakeTest.eBrakeTestSelected = GE_SERVICE_BRAKES;
		else if((gDb_tRamEvision7C0.bogOsciServiceBrakeSelect == FALSE && gDb_tRamEvision7C0.bogFixedServiceBrakeSelect == FALSE &&gDb_tRamEvision7C0.bogOsciParkBrakeSelect == FALSE && gDb_tRamEvision7C0.bogFixedParkBrakeSelect == FALSE && gDb_tRamEvision7C0.bogBothServiceBrakeSelect == FALSE && gDb_tRamEvision7C0.bogBothParkBrakeSelect == TRUE && gDb_tRamEvision7C0.bogOsci2ndParkBrakeSelect == FALSE && gDb_tRamEvision7C0.bogFixe2ndParkBrakeSelect == FALSE))
			gDb_tRamBrakeTest.eBrakeTestSelected = GE_PARKING_BRAKES;
		/* Double freins*/
		/*Ajout des EV 2nd frein de park pour le test frein.*/
		else if((gDb_tRamEvision7C0.bogOsciServiceBrakeSelect == FALSE && gDb_tRamEvision7C0.bogFixedServiceBrakeSelect == FALSE &&gDb_tRamEvision7C0.bogOsciParkBrakeSelect == FALSE && gDb_tRamEvision7C0.bogFixedParkBrakeSelect == FALSE && gDb_tRamEvision7C0.bogBothServiceBrakeSelect == FALSE && gDb_tRamEvision7C0.bogBothParkBrakeSelect == FALSE && gDb_tRamEvision7C0.bogOsci2ndParkBrakeSelect == FALSE && gDb_tRamEvision7C0.bogFixe2ndParkBrakeSelect == TRUE))
			gDb_tRamBrakeTest.eBrakeTestSelected = GE_FIXE_2ND_PARKING_BRAKE;
		else if((gDb_tRamEvision7C0.bogOsciServiceBrakeSelect == FALSE && gDb_tRamEvision7C0.bogFixedServiceBrakeSelect == FALSE &&gDb_tRamEvision7C0.bogOsciParkBrakeSelect == FALSE && gDb_tRamEvision7C0.bogFixedParkBrakeSelect == FALSE && gDb_tRamEvision7C0.bogBothServiceBrakeSelect == FALSE && gDb_tRamEvision7C0.bogBothParkBrakeSelect == FALSE && gDb_tRamEvision7C0.bogOsci2ndParkBrakeSelect == TRUE && gDb_tRamEvision7C0.bogFixe2ndParkBrakeSelect == FALSE))
			gDb_tRamBrakeTest.eBrakeTestSelected = GE_OSCI_2ND_PARKING_BRAKE;
		/* Double freins*/
		else
			gDb_tRamBrakeTest.eBrakeTestSelected = GE_NO_BRAKE;
	}
	else
	{
		gDb_tRamBrakeTest.eBrakeTestSelected = GE_NO_BRAKE;
	}

	//-----------------------------------------------------------------------------------------------------
	// Forbid camera display for test brake
	//-----------------------------------------------------------------------------------------------------
	/* check if a brake is selected*/
	if(gDb_tRamBrakeTest.eBrakeTestSelected != GE_NO_BRAKE)
	{
		/* forbid display camera on screen*/
		gDb_tRamBrakeTest.boForbidCameraDisplay = TRUE;
		/* stop all movements*/
		gDb_tRamBrakeTest.boStopMovementByBrakeTest = TRUE;
		/* Authorize translation rail*/
		gDb_tRamBrakeTest.boAuthorizeTransaltionRail = TRUE;
	}
	else
	{
		/* set false forbid display camera on screen*/
		gDb_tRamBrakeTest.boForbidCameraDisplay = FALSE;
		/* set false stop all movements*/
		gDb_tRamBrakeTest.boStopMovementByBrakeTest = FALSE;
		/* Authorize translation rail*/
		gDb_tRamBrakeTest.boAuthorizeTransaltionRail = FALSE;

	}

	//-----------------------------------------------------------------------------------------------------
	// brake Test running
	//-----------------------------------------------------------------------------------------------------

	/* Actual position of joystick advancement*/
	if(gDb_tRamGeneralC0.i16JoystickAdvanceScalingValue > 0 && gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_NACELLE)
		gDb_tRamBrakeTest.eAcutalPosJoyAdvance = GE_AV_JOY;
	else if(gDb_tRamGeneralC0.i16JoystickAdvanceScalingValue < 0 && gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_NACELLE)
		gDb_tRamBrakeTest.eAcutalPosJoyAdvance = GE_AR_JOY;
	else
		gDb_tRamBrakeTest.eAcutalPosJoyAdvance = GE_NEU_JOY;

	/* run block*/
	boTimerStatus = boEleTimerCalculate(&tTimerValidConditionTestBrake);
	/* get event of block*/
	boTimerEvent = boEleTimerGetEvent(&tTimerValidConditionTestBrake);

	/* check condition to enable test brake*/
	if( gDb_tRamBrakeTest.eBrakeTestSelected != GE_NO_BRAKE
		&& gDb_tRamBrakeTest.boIncoherencePosAxleAndTestMode == FALSE
		&& (gDb_tRamEcuInputsC0.i32FixeAxleFrequency > gDb_tNvParamBrakeTest.u16SpeedMinBrakeTestRunning)
		&& (gDb_tRamEcuInputsC0.i32OscillantAxleFrequency > gDb_tNvParamBrakeTest.u16SpeedMinBrakeTestRunning)
		&& (gDb_tRamGeneralC0.boAuthorizeTransRailMovement == TRUE || gDb_tRamGreenEffC0.boAutorizeTransRailElectric == TRUE) //GREEN
	  )
	{
		/* set flag valid condition*/
		gDb_tRamBrakeTest.boValidConditionEnableTestBrake = TRUE;
	}

	else if (gDb_tRamBrakeTest.eBrakeTestSelected == GE_NO_BRAKE && gDb_tRamEcuOutputsC0.u16ForwardPumpCommand == 0 && gDb_tRamEcuOutputsC0.u16BackwardPumpCommand == 0 && gDb_tRamGreenEffC0.boTransRailElectricRampOngoing == FALSE) //GREEN

	{
		/* No valid condition for brake test*/
		gDb_tRamBrakeTest.boValidConditionEnableTestBrake = FALSE;
	}


	TBoolean RisingboValidConditionEnableTestBrake = FALSE;
	static TBoolean PreviousboValidConditionEnableTestBrake = FALSE;
	/* Rising RisingboValidConditionEnableTestBrake*/
	RisingboValidConditionEnableTestBrake = FALSE;
	if (gDb_tRamBrakeTest.boValidConditionEnableTestBrake == TRUE && PreviousboValidConditionEnableTestBrake == FALSE)
		RisingboValidConditionEnableTestBrake = TRUE;
	/* Memorize the previous value*/
	PreviousboValidConditionEnableTestBrake = gDb_tRamBrakeTest.boValidConditionEnableTestBrake;



	//GREEN
	static TUint16 u16ElectricThresholdForward = 0;
	static TUint16 u16ElectricThresholdReverse = 0;
	u16ElectricThresholdForward = gDb_tNvParamGreenEffC0.u8MinPvgTransRailElectricAv * gDb_tRamGeneralC0.u16EcuVoltage / 100;	/* min Av*/
	u16ElectricThresholdReverse = gDb_tNvParamGreenEffC0.u8MinPvgTransRailElectricAr * gDb_tRamGeneralC0.u16EcuVoltage / 100;	/* min Ar*/

	static TBoolean boAskInvertedTranslation = FALSE;
	/*boAskInvertedTranslation*/
	if ((gDb_tRamEcuOutputsC0.u16ForwardPumpCommand >0 &&  gDb_tRamGeneralC0.i16JoystickAdvanceScalingValue <0 )
	||
	(gDb_tRamEcuOutputsC0.u16BackwardPumpCommand >0 &&  gDb_tRamGeneralC0.i16JoystickAdvanceScalingValue >0)
	|| //GREEN
	(gDb_tRamEcuOutputsC0.u16PvgTransRailElectricCmd > u16ElectricThresholdForward &&  gDb_tRamGeneralC0.i16JoystickAdvanceScalingValue <0) //GREEN
	|| ///GREEN
	(gDb_tRamEcuOutputsC0.u16PvgTransRailElectricCmd < u16ElectricThresholdReverse &&  gDb_tRamGeneralC0.i16JoystickAdvanceScalingValue >0) //GREEN
	)
		boAskInvertedTranslation = TRUE;
	else
		boAskInvertedTranslation = FALSE;


	if(RisingboValidConditionEnableTestBrake == TRUE)
	{
		/* check status and event of timer*/
		if(boTimerStatus == FALSE && boTimerEvent == FALSE)
		/* start timer*/
			u32EleTimerStart(&tTimerValidConditionTestBrake);
	}
	if(boTimerEvent == TRUE)
	{
		gDb_tRamBrakeTest.boBrakeTestRunning = TRUE;
	}

	if((gDb_tRamBrakeTest.boValidConditionEnableTestBrake == FALSE
	|| gDb_tRamBrakeTest.eBrakeTestSelected == GE_NO_BRAKE
	|| boAskInvertedTranslation == TRUE
	)
	&& gDb_tRamBrakeTest.boBrakeTestRunning == TRUE)

	{
		/* stop timer*/
		eEleTimerManStop(&tTimerValidConditionTestBrake,&u32Dt);
		/* check status and event of timer*/
		if(boTimerStatus == FALSE && boTimerEvent == FALSE)
		{
			gDb_tRamBrakeTest.boBrakeTestRunning = FALSE;
		}
		/* reset*/
		gDb_tRamBrakeTest.boValidBrakeTest = FALSE;
	}


	//-----------------------------------------------------------------------------------------------------
	// Command to force brake
	//-----------------------------------------------------------------------------------------------------
	/* check if brake test is running*/
	if(gDb_tRamBrakeTest.boBrakeTestRunning)
	{
		/* switch case regarding brake selected*/
		switch(gDb_tRamBrakeTest.eBrakeTestSelected)
		{
		case GE_OSCI_SERVICE_BRAKE:
			gDb_tRamBrakeTest.boForceOsciServiceBrake = TRUE;
			break;
		case GE_FIXE_SERVICE_BRAKE:
			gDb_tRamBrakeTest.boForceFixeServiceBrake = TRUE;
			break;
		case GE_OSCI_PARKING_BRAKE:
			gDb_tRamBrakeTest.boForceOsciParkBrake = TRUE;
			break;
		case GE_FIXE_PARKING_BRAKE:
			gDb_tRamBrakeTest.boForceFixeParkBrake = TRUE;
			break;
		case GE_SERVICE_BRAKES:
			gDb_tRamBrakeTest.boForceOsciServiceBrake = TRUE;
			gDb_tRamBrakeTest.boForceFixeServiceBrake = TRUE;
			break;
		case GE_PARKING_BRAKES:
			gDb_tRamBrakeTest.boForceOsciParkBrake = TRUE;
			gDb_tRamBrakeTest.boForceFixeParkBrake = TRUE;
			break;
		case GE_OSCI_2ND_PARKING_BRAKE:
			gDb_tRamBrakeTest.boForce2ndParkBrakeOsci = TRUE;/*Double freins essieu OSCI*/
			break;
		case GE_FIXE_2ND_PARKING_BRAKE:
			gDb_tRamBrakeTest.boForce2ndParkBrakeFixe = TRUE;/*Double freins essieu FIXE*/
			break;
		case GE_NO_BRAKE:
			gDb_tRamBrakeTest.boForceOsciServiceBrake = FALSE;
			gDb_tRamBrakeTest.boForceFixeServiceBrake = FALSE;
			gDb_tRamBrakeTest.boForceOsciParkBrake = FALSE;
			gDb_tRamBrakeTest.boForceFixeParkBrake = FALSE;
			gDb_tRamBrakeTest.boForce2ndParkBrakeFixe = FALSE;
			gDb_tRamBrakeTest.boForce2ndParkBrakeOsci = FALSE;
			break;
		default:
			gDb_tRamBrakeTest.boForceOsciServiceBrake = FALSE;
			gDb_tRamBrakeTest.boForceFixeServiceBrake = FALSE;
			gDb_tRamBrakeTest.boForceOsciParkBrake = FALSE;
			gDb_tRamBrakeTest.boForceFixeParkBrake = FALSE;
			gDb_tRamBrakeTest.boForce2ndParkBrakeFixe = FALSE;
			gDb_tRamBrakeTest.boForce2ndParkBrakeOsci = FALSE;
			break;
		}
	}
	else
	{
		gDb_tRamBrakeTest.boForceOsciServiceBrake = FALSE;
		gDb_tRamBrakeTest.boForceFixeServiceBrake = FALSE;
		gDb_tRamBrakeTest.boForceOsciParkBrake = FALSE;
		gDb_tRamBrakeTest.boForceFixeParkBrake = FALSE;
		gDb_tRamBrakeTest.boForce2ndParkBrakeFixe = FALSE;
		gDb_tRamBrakeTest.boForce2ndParkBrakeOsci = FALSE;

	}


	//----------------------------------------------------------------------------------------------------
	// calcul delta transmission 1 and 2 pressure
	//-----------------------------------------------------------------------------------------------------

	static TInt16	i16DeltaTransmissionPressureIn = 0;
	if (gDb_tRamEcuC0RcvFromC1.i32RegimeMotorAlternatorRpm >= 500) //GREEN
		i16DeltaTransmissionPressureIn = i16AbsI16(gDb_tRamEcuC0RcvFromC1.i16Transmission1Pressure - gDb_tRamEcuC0RcvFromC1.i16Transmission2Pressure);
	else //GREEN
		i16DeltaTransmissionPressureIn = i16AbsI16(gDb_tRamEcuInputsC0.i16ElectricPumpPressureValue - 200); //200 = 20bar //GREEN


	static TFloat64	f64DeltaTransmissionPressure = 0;
	f64DeltaTransmissionPressure = f64MovAverage(i16DeltaTransmissionPressureIn, f64DeltaTransmissionPressure, gDb_tNvParamBrakeTest.u8NbElementDeltaTransmPressure);//Provisoire Nbr echanbtillon
	gDb_tRamBrakeTest.i16DeltaTransmissionPressure = (TInt16)f64DeltaTransmissionPressure;

	if(gDb_tRamData4C0RcvFromC1.boTransmissionPressureFault == TRUE)

		gDb_tRamBrakeTest.i16DeltaTransmissionPressure = 0;


	//----------------------------------------------------------------------------------------------------
	// valid test brake
	//-----------------------------------------------------------------------------------------------------
	/* run block*/
	boTimerPressureOsciServiceBrakeTestStatus = boEleTimerCalculate(&tTimerPressureOsciServiceBrakeTest);
	/* get event of block*/
	boTimerTimerPressureOsciServiceBrakeTestEvent = boEleTimerGetEvent(&tTimerPressureOsciServiceBrakeTest);

	/* run block*/
	boTimerPressureFixeServiceBrakeTestStatus = boEleTimerCalculate(&tTimerPressureFixeServiceBrakeTest);
	/* get event of block*/
	boTimerPressureFixeServiceBrakeTestEvent = boEleTimerGetEvent(&tTimerPressureFixeServiceBrakeTest);

	/* run block*/
	boTimerPressureOsciParkingBrakeTestStatus = boEleTimerCalculate(&tTimerPressureOsciParkingBrakeTest);
	/* get event of block*/
	boTimerPressureOsciParkingBrakeTestEvent = boEleTimerGetEvent(&tTimerPressureOsciParkingBrakeTest);

	/* run block*/
	boTimerPressureFixeParkingBrakeTestStatus = boEleTimerCalculate(&tTimerPressureFixeParkingBrakeTest);
	// get event of block
	boTimerPressureFixeParkingBrakeTestEvent = boEleTimerGetEvent(&tTimerPressureFixeParkingBrakeTest);

	/* Double freins*/
	/*Axle fixe 2nd Park Brakes
	run block*/
	boTimerPressureFixe2ndParkingBrakeTestStatus = boEleTimerCalculate(&tTimerPressureFixe2ndParkingBrakeTest);
	/* get event of block*/
	boTimerPressureFixe2ndParkingBrakeTestEvent = boEleTimerGetEvent(&tTimerPressureFixe2ndParkingBrakeTest);
	/*Axle Osci 2nd Park Brakes*/
	boTimerPressureOsci2ndParkingBrakeTestStatus = boEleTimerCalculate(&tTimerPressureOsci2ndParkingBrakeTest);
	/* get event of block*/
	boTimerPressureOsci2ndParkingBrakeTestEvent = boEleTimerGetEvent(&tTimerPressureOsci2ndParkingBrakeTest);
	/* Double freins*/

	/* check if brake test is running and osci service brake is selected*/
	if(gDb_tRamBrakeTest.boBrakeTestRunning == TRUE && gDb_tRamBrakeTest.eBrakeTestSelected == GE_OSCI_SERVICE_BRAKE)
	{
		/* calcul effiency rate pressure*/
		gDb_tRamBrakeTest.u16PressureEfficiencyRate = u16CastU32(u32Mul(gDb_tRamBrakeTest.i16DeltaTransmissionPressure,100,gDb_tNvParamBrakeTest.u16PressureOsciServiceBrakeTresh));

		/* check if pressure efficiency rate is over at 100% , then start timer*/
		if(gDb_tRamBrakeTest.u16PressureEfficiencyRate > 100)
		{
			/* check status and event of timer*/
			if(boTimerPressureOsciServiceBrakeTestStatus == FALSE && boTimerTimerPressureOsciServiceBrakeTestEvent == FALSE)
			{
				/* start timer*/
				u32EleTimerStart(&tTimerPressureOsciServiceBrakeTest);
			}

			/* check if result is valid then set variable*/
			if(boTimerTimerPressureOsciServiceBrakeTestEvent)
			{
				gDb_tRamBrakeTest.boValidOsciServiceBrakeTest = TRUE;
				gDb_tRamBrakeTest.boValidBrakeTest = TRUE;
			}
		}
		else
		{
			/* stop timer*/
			eEleTimerManStop(&tTimerPressureOsciServiceBrakeTest, &u32Dt);
		}
	}
	/* check if brake test is running and fixe service brake is selected*/
	else if(gDb_tRamBrakeTest.boBrakeTestRunning == TRUE && gDb_tRamBrakeTest.eBrakeTestSelected == GE_FIXE_SERVICE_BRAKE)
	{
		/* calcul effiency rate pressure*/
		gDb_tRamBrakeTest.u16PressureEfficiencyRate = u16CastU32(u32Mul(gDb_tRamBrakeTest.i16DeltaTransmissionPressure,100,gDb_tNvParamBrakeTest.u16PressureFixeServiceBrakeTresh));

		/* check if pressure efficiency rate is over at 100% , then start timer*/
		if(gDb_tRamBrakeTest.u16PressureEfficiencyRate > 100)
		{
			/* check status and event of timer*/
			if(boTimerPressureFixeServiceBrakeTestStatus == FALSE && boTimerPressureFixeServiceBrakeTestEvent == FALSE)
			{
				/* start timer*/
				u32EleTimerStart(&tTimerPressureFixeServiceBrakeTest);
			}

			/* check if result is valid then set variable*/
			if(boTimerPressureFixeServiceBrakeTestEvent)
			{
				gDb_tRamBrakeTest.boValidFixeServiceBrakeTest = TRUE;
				gDb_tRamBrakeTest.boValidBrakeTest = TRUE;
			}
		}
		else
		{
			/*stop timer*/
			eEleTimerManStop(&tTimerPressureFixeServiceBrakeTest, &u32Dt);
		}
	}
	/* check if brake test is running and osci parking brake is selected*/
	else if(gDb_tRamBrakeTest.boBrakeTestRunning == TRUE && gDb_tRamBrakeTest.eBrakeTestSelected == GE_OSCI_PARKING_BRAKE)
	{
		/* calcul effiency rate pressure*/
		gDb_tRamBrakeTest.u16PressureEfficiencyRate = u16CastU32(u32Mul(gDb_tRamBrakeTest.i16DeltaTransmissionPressure,100,gDb_tNvParamBrakeTest.u16PressureOsciParkingBrakeTresh));

		/* check if pressure efficiency rate is over at 100% , then start timer*/
		if(gDb_tRamBrakeTest.u16PressureEfficiencyRate > 100)
		{
			/* check status and event of timer*/
			if(boTimerPressureOsciParkingBrakeTestStatus == FALSE && boTimerPressureOsciParkingBrakeTestEvent == FALSE)
			{
				/* start timer*/
				u32EleTimerStart(&tTimerPressureOsciParkingBrakeTest);
			}

			/* check if result is valid then set variable*/
			if(boTimerPressureOsciParkingBrakeTestEvent)
			{
				gDb_tRamBrakeTest.boValidOsciParkingBrakeTest = TRUE;
				gDb_tRamBrakeTest.boValidBrakeTest = TRUE;
			}
		}
		else
		{
			/* stop timer*/
			eEleTimerManStop(&tTimerPressureOsciParkingBrakeTest, &u32Dt);
		}
	}
	/* check if brake test is running and osci parking brake is selected*/
	else if(gDb_tRamBrakeTest.boBrakeTestRunning == TRUE && gDb_tRamBrakeTest.eBrakeTestSelected == GE_FIXE_PARKING_BRAKE)
	{
		/* calcul effiency rate pressure*/
		gDb_tRamBrakeTest.u16PressureEfficiencyRate = u16CastU32(u32Mul(gDb_tRamBrakeTest.i16DeltaTransmissionPressure,100,gDb_tNvParamBrakeTest.u16PressureFixeParkingBrakeTresh));

		/* check if pressure efficiency rate is over at 100% , then start timer*/
		if(gDb_tRamBrakeTest.u16PressureEfficiencyRate > 100)
		{
			/* check status and event of timer*/
			if(boTimerPressureFixeParkingBrakeTestStatus == FALSE && boTimerPressureFixeParkingBrakeTestEvent == FALSE)
			{
				/* start timer*/
				u32EleTimerStart(&tTimerPressureFixeParkingBrakeTest);
			}

			/* check if result is valid then set variable*/
			if(boTimerPressureFixeParkingBrakeTestEvent)
			{
				gDb_tRamBrakeTest.boValidFixeParkingBrakeTest = TRUE;
				gDb_tRamBrakeTest.boValidBrakeTest = TRUE;
			}
		}
		else
		{
			/* stop timer*/
			eEleTimerManStop(&tTimerPressureFixeParkingBrakeTest, &u32Dt);
		}
	}
	/* Double freins*/
/* check if brake test is running and osci parking brake is selected*/

	else if(gDb_tRamBrakeTest.boBrakeTestRunning == TRUE && gDb_tRamBrakeTest.eBrakeTestSelected == GE_OSCI_2ND_PARKING_BRAKE)
	{
		/* calcul effiency rate pressure*/
		gDb_tRamBrakeTest.u16PressureEfficiencyRate = u16CastU32(u32Mul(gDb_tRamBrakeTest.i16DeltaTransmissionPressure,100,gDb_tNvParamBrakeTest.u16PressureOsciParkingBrakeTresh));
			/* check if pressure efficiency rate is over at 100% , then start timer*/
		if(gDb_tRamBrakeTest.u16PressureEfficiencyRate > 100)
		{
				/* check status and event of timer*/
			if(boTimerPressureOsci2ndParkingBrakeTestStatus == FALSE && boTimerPressureOsci2ndParkingBrakeTestEvent == FALSE)
			{
					/* start timer*/
				u32EleTimerStart(&tTimerPressureOsci2ndParkingBrakeTest);
			}

				/* check if result is valid then set variable*/
			if(boTimerPressureOsci2ndParkingBrakeTestEvent)
			{
				gDb_tRamBrakeTest.boValidOsci2ndParkBrakeTest = TRUE;
				gDb_tRamBrakeTest.boValidBrakeTest = TRUE;
			}

		}
		else
		{
			/* stop timer*/
			eEleTimerManStop(&tTimerPressureOsci2ndParkingBrakeTest, &u32Dt);
		}
	}
	/* check if brake test is running and osci parking brake is selected*/
	else if(gDb_tRamBrakeTest.boBrakeTestRunning == TRUE && gDb_tRamBrakeTest.eBrakeTestSelected == GE_FIXE_2ND_PARKING_BRAKE)
	{
		/* calcul effiency rate pressure*/
		gDb_tRamBrakeTest.u16PressureEfficiencyRate = u16CastU32(u32Mul(gDb_tRamBrakeTest.i16DeltaTransmissionPressure,100,gDb_tNvParamBrakeTest.u16PressureFixeParkingBrakeTresh));
		/* check if pressure efficiency rate is over at 100% , then start timer*/
		if(gDb_tRamBrakeTest.u16PressureEfficiencyRate > 100)
		{
			/* check status and event of timer*/
			if(boTimerPressureFixe2ndParkingBrakeTestStatus == FALSE && boTimerPressureFixe2ndParkingBrakeTestEvent == FALSE)
			{
				/* start timer*/
				u32EleTimerStart(&tTimerPressureFixe2ndParkingBrakeTest);
			}

			/* check if result is valid then set variable*/
			if(boTimerPressureFixe2ndParkingBrakeTestEvent)
			{
				gDb_tRamBrakeTest.boValidFixe2ndParkBrakeTest = TRUE;
				gDb_tRamBrakeTest.boValidBrakeTest = TRUE;
			}
		}
		else
		{
			/* stop timer*/
			eEleTimerManStop(&tTimerPressureFixe2ndParkingBrakeTest, &u32Dt);
		}
	}

	else
	{
		/* stop timer*/
		eEleTimerManStop(&tTimerPressureOsciServiceBrakeTest, &u32Dt);
		eEleTimerManStop(&tTimerPressureFixeServiceBrakeTest, &u32Dt);
		eEleTimerManStop(&tTimerPressureOsciParkingBrakeTest, &u32Dt);
		eEleTimerManStop(&tTimerPressureFixeParkingBrakeTest, &u32Dt);
		/* Double freins*/
		eEleTimerManStop(&tTimerPressureOsci2ndParkingBrakeTest, &u32Dt);
		eEleTimerManStop(&tTimerPressureFixe2ndParkingBrakeTest, &u32Dt);
		/* Double freins*/
		gDb_tRamBrakeTest.u16PressureEfficiencyRate = 0;
	}


	//----------------------------------------------------------------------------------------------------
	// Reset counter of cycle brake perform   => => memory list save on eAppShutDown phase
	//-----------------------------------------------------------------------------------------------------
	/* check if the 4 tests brake is OK*/
	if(gDb_tRamBrakeTest.boValidOsciServiceBrakeTest && gDb_tRamBrakeTest.boValidFixeServiceBrakeTest
	  && gDb_tRamBrakeTest.boValidOsciParkingBrakeTest && gDb_tRamBrakeTest.boValidFixeParkingBrakeTest && gDb_tRamBrakeTest.boBrakeTestRunning == FALSE)
	{

		/* reset counter of cycle brake perform*/
		if(gDb_tRamEcuInputsC0.eUpAxleOscillantState == GE_DI_ON
		&& gDb_tRamEcuInputsC0.eUpAxleFixeState == GE_DI_ON
		&& gDb_tNvMemoryC0.u16NCycleBrakePerform > 50)
			gDb_tNvMemoryC0.u16NCycleBrakePerform = gDb_tNvMemoryC0.u16NCycleBrakePerform - 50;
		else
			gDb_tNvMemoryC0.u16NCycleBrakePerform = 0;


		/* reset valid brake test*/
		gDb_tRamBrakeTest.boValidOsciServiceBrakeTest = FALSE;
		gDb_tRamBrakeTest.boValidFixeServiceBrakeTest = FALSE;
		gDb_tRamBrakeTest.boValidOsciParkingBrakeTest = FALSE;
		gDb_tRamBrakeTest.boValidFixeParkingBrakeTest = FALSE;
	}

	//----------------------------------------------------------------------------------------------------
	// Reset counter of cycle 2nd brake perform   => => memory list save on eAppShutDown phase
	//-----------------------------------------------------------------------------------------------------
	/* check if the 4 tests brake is OK*/
	if(gDb_tRamBrakeTest.boValidOsci2ndParkBrakeTest && gDb_tRamBrakeTest.boValidFixe2ndParkBrakeTest)
	{

/* reset counter of cycle brake perform*/
		if(gDb_tRamEcuInputsC0.eUpAxleOscillantState == GE_DI_ON
		&& gDb_tRamEcuInputsC0.eUpAxleFixeState == GE_DI_ON
		&& gDb_tNvMemoryC0.u16NCycle2ndParkBrakePerform > 50)
			gDb_tNvMemoryC0.u16NCycle2ndParkBrakePerform = gDb_tNvMemoryC0.u16NCycle2ndParkBrakePerform - 50;
		else
			gDb_tNvMemoryC0.u16NCycle2ndParkBrakePerform = 0;

	
		/* reset valid brake test*/
		gDb_tRamBrakeTest.boValidOsci2ndParkBrakeTest = FALSE;
	    gDb_tRamBrakeTest.boValidFixe2ndParkBrakeTest = FALSE;
	}


	TBoolean RisingbogOsciServiceBrakeSelect = FALSE;
	static TBoolean PreviousbogOsciServiceBrakeSelect = FALSE;
	/* Rising RisingbogOsciServiceBrakeSelect*/
	RisingbogOsciServiceBrakeSelect = FALSE;
	if (gDb_tRamEvision7C0.bogOsciServiceBrakeSelect == TRUE && PreviousbogOsciServiceBrakeSelect == FALSE)
		RisingbogOsciServiceBrakeSelect = TRUE;
	/* Memorize the previous value*/
	PreviousbogOsciServiceBrakeSelect = gDb_tRamEvision7C0.bogOsciServiceBrakeSelect;

	if (RisingbogOsciServiceBrakeSelect == TRUE
	|| gDb_tRamEvision7C0.bogOffTrackTestBrakeActivated == FALSE
	|| gDb_tRamEvision7C0.bogTestBrakePageActive == FALSE)
		gDb_tRamBrakeTest.boValidOsciServiceBrakeTest = FALSE;


	TBoolean RisingbogFixedServiceBrakeSelect = FALSE;
	static TBoolean PreviousbogFixedServiceBrakeSelect = FALSE;
	/* Rising RisingbogFixedServiceBrakeSelect*/
	RisingbogFixedServiceBrakeSelect = FALSE;
	if (gDb_tRamEvision7C0.bogFixedServiceBrakeSelect == TRUE && PreviousbogFixedServiceBrakeSelect == FALSE)
		RisingbogFixedServiceBrakeSelect = TRUE;
	/* Memorize the previous value*/
	PreviousbogFixedServiceBrakeSelect = gDb_tRamEvision7C0.bogFixedServiceBrakeSelect;

	if (RisingbogFixedServiceBrakeSelect == TRUE
	|| gDb_tRamEvision7C0.bogOffTrackTestBrakeActivated == FALSE
	|| gDb_tRamEvision7C0.bogTestBrakePageActive == FALSE)
		gDb_tRamBrakeTest.boValidFixeServiceBrakeTest = FALSE;


	TBoolean RisingbogOsciParkBrakeSelect = FALSE;
	static TBoolean PreviousbogOsciParkBrakeSelect = FALSE;
	/* Rising RisingbogOsciParkBrakeSelect*/
	RisingbogOsciParkBrakeSelect = FALSE;
	if (gDb_tRamEvision7C0.bogOsciParkBrakeSelect == TRUE && PreviousbogOsciParkBrakeSelect == FALSE)
		RisingbogOsciParkBrakeSelect = TRUE;
	/* Memorize the previous value*/
	PreviousbogOsciParkBrakeSelect = gDb_tRamEvision7C0.bogOsciParkBrakeSelect;

	if (RisingbogOsciParkBrakeSelect == TRUE
	|| gDb_tRamEvision7C0.bogOffTrackTestBrakeActivated == FALSE
	|| gDb_tRamEvision7C0.bogTestBrakePageActive == FALSE)
		gDb_tRamBrakeTest.boValidOsciParkingBrakeTest = FALSE;


	TBoolean RisingbogFixedParkBrakeSelect = FALSE;
	static TBoolean PreviousbogFixedParkBrakeSelect = FALSE;
	/* Rising RisingbogFixedParkBrakeSelect*/
	RisingbogFixedParkBrakeSelect = FALSE;
	if (gDb_tRamEvision7C0.bogFixedParkBrakeSelect == TRUE && PreviousbogFixedParkBrakeSelect == FALSE)
		RisingbogFixedParkBrakeSelect = TRUE;
	/* Memorize the previous value*/
	PreviousbogFixedParkBrakeSelect = gDb_tRamEvision7C0.bogFixedParkBrakeSelect;

	if (RisingbogFixedParkBrakeSelect == TRUE
	|| gDb_tRamEvision7C0.bogOffTrackTestBrakeActivated == FALSE
	|| gDb_tRamEvision7C0.bogTestBrakePageActive == FALSE)
		gDb_tRamBrakeTest.boValidFixeParkingBrakeTest = FALSE;

//NEOTEC IG DOUBLE FREINS V4
/*Réparation de l'affichage de la page de TF double freins : La séquence de TF en version Double freins, ne fonctionnait pas comme prévu*/
//A TESTER
	TBoolean RisingbogOsci2ndParkBrakeSelect = FALSE;
	static TBoolean PreviousbogOsci2ndParkBrakeSelect = FALSE;
	/* Rising RisingbogOsci2ndParkBrakeSelect*/
	RisingbogOsci2ndParkBrakeSelect = FALSE;
	if (gDb_tRamEvision7C0.bogOsci2ndParkBrakeSelect == TRUE && PreviousbogOsci2ndParkBrakeSelect == FALSE)
		RisingbogOsci2ndParkBrakeSelect = TRUE;
	/* Memorize the previous value*/
	PreviousbogOsci2ndParkBrakeSelect = gDb_tRamEvision7C0.bogOsci2ndParkBrakeSelect;

	if (RisingbogOsci2ndParkBrakeSelect == TRUE
	|| gDb_tRamEvision7C0.bogOffTrackTestBrakeActivated == FALSE
	|| gDb_tRamEvision7C0.bogTestBrakePageActive == FALSE)
		gDb_tRamBrakeTest.boValidOsci2ndParkBrakeTest = FALSE;


	TBoolean RisingbogFixed2ndParkBrakeSelect = FALSE;
	static TBoolean PreviousbogFixed2ndParkBrakeSelect = FALSE;
	/* Rising RisingbogFixed2ndParkBrakeSelect*/
	RisingbogFixed2ndParkBrakeSelect = FALSE;
	if (gDb_tRamEvision7C0.bogFixe2ndParkBrakeSelect == TRUE && PreviousbogFixed2ndParkBrakeSelect == FALSE)
		RisingbogFixed2ndParkBrakeSelect = TRUE;
	/* Memorize the previous value*/
	PreviousbogFixed2ndParkBrakeSelect = gDb_tRamEvision7C0.bogFixe2ndParkBrakeSelect;

	if (RisingbogFixed2ndParkBrakeSelect == TRUE
	|| gDb_tRamEvision7C0.bogOffTrackTestBrakeActivated == FALSE
	|| gDb_tRamEvision7C0.bogTestBrakePageActive == FALSE)
		gDb_tRamBrakeTest.boValidFixe2ndParkBrakeTest = FALSE;
//NEOTEC IG DOUBLE FREINS V4

}


//-----------------------------------------------------------------------------------------------------
//! @brief Valid brake test
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 25.03.2019 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TBoolean boValidBrakeTest(TUint16 u16Pressure , TUint16 u16Threshold, TEleTimAdr* ptTimeSignal)
{
	TBoolean			boValidBrakeTest = FALSE;
	TBoolean			boTimerStatus;
	TBoolean			boTimerEvent;
	TUint32				u32Dt;

	/* run block*/
	boTimerStatus = boEleTimerCalculate(*&ptTimeSignal);
	/* get event of block*/
	boTimerEvent = boEleTimerGetEvent(*&ptTimeSignal);

	/* check if pressure it over at threshold*/
	if(u16Pressure >= u16Threshold)
	{
		/* start timer*/
		if(boTimerStatus == FALSE && boTimerEvent == FALSE)
			u32EleTimerStart(*&ptTimeSignal);
	}
	else
	{
		/* stop timer*/
		eEleTimerManStop(*&ptTimeSignal, &u32Dt);
	}

	/* check if timer is done*/
	if(boTimerStatus == FALSE && boTimerEvent == TRUE)
		boValidBrakeTest = TRUE;

	/* return value*/
	return boValidBrakeTest;
}
