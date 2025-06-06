//==================================================================================================
//! @file WriteSavedParameters.c
//! @brief write saved parameters
//! @see Target for ...
//! @section app
//! @subsection
//! @author Christian Klein (CK)
//! @created 21.01.2019 HYDAC/CK
//! @history: #- CK 21.01.2019 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "WriteSavedParameters.h"

//-----------------------------------------------------------------------------------------------------
//! @brief write saved parameters
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 22.01.2018 HYDAC/CK
//!
//! @change  17.12.2019 HYDAC/CK  change provisional gDb_tRamEvision7C0.bogKeyCalibMastMin to gDb_tRamEvision7C0.bogRazDistanceTraveledMastMeasure in i32DetermineDistanceWithMastMeasureMM function
//!
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vWriteSavedParameters(TVoid)
{

	const TInt16 NO_ELEMENTS = 0;
	const TInt16 TURRET = 4;
	const TInt16 SLOPE = 5;
	TBoolean bo0DegTurret = FALSE;
	TBoolean boLongSlope = FALSE;
	TBoolean boTransSlope = FALSE;

	if(gCsr_tMsg1RcvFromOpus.u8gElementChoice == TURRET
	|| gCsr_tMsg1RcvFromOpus.u8gElementChoice == SLOPE)
		gCsr_tMsg5C0SendToOpus.u8gElementSelected = gCsr_tMsg1RcvFromOpus.u8gElementChoice;
	else
		gCsr_tMsg5C0SendToOpus.u8gElementSelected = NO_ELEMENTS;

	TBoolean RisingbogKeyCalibMin = FALSE;
	static TBoolean PreviousbogKeyCalibMin = FALSE;
	/* Rising bogKeyCalibMin*/
	RisingbogKeyCalibMin = FALSE;
	if (gDb_tRamEvision4C0.bogKeyCalibMin == TRUE && PreviousbogKeyCalibMin == FALSE)
		RisingbogKeyCalibMin = TRUE;
	/* Memorize the previous value*/
	PreviousbogKeyCalibMin = gDb_tRamEvision4C0.bogKeyCalibMin;

	TBoolean RisingbogKeyCalibMax = FALSE;
	static TBoolean PreviousbogKeyCalibMax = FALSE;
	/* Rising bogKeyCalibMax*/
	RisingbogKeyCalibMax = FALSE;
	if (gDb_tRamEvision4C0.bogKeyCalibMax == TRUE && PreviousbogKeyCalibMax == FALSE)
		RisingbogKeyCalibMax = TRUE;
	/* Memorize the previous value*/
	PreviousbogKeyCalibMax = gDb_tRamEvision4C0.bogKeyCalibMax;

	if(gCsr_tMsg5C0SendToOpus.u8gElementSelected == TURRET && RisingbogKeyCalibMin == TRUE)
	{
		bo0DegTurret = TRUE;
//		gDb_tNvCalibrationC0.u32EncodeurTurretOffset = gDb_tRamCanSensorC0.u32EncodeurTurret1AngleRaw; //EVO V4
		// Conversion en 16bits car MST ne permet pas la saisie de 32bit //EVO V4
		ConvertTUint32To2TUiInt16(gDb_tRamCanSensorC0.u32EncodeurTurret1AngleRaw,&gDb_tNvCalibrationC0.u16EncodeurTurretMsb1 ,&gDb_tNvCalibrationC0.u16EncodeurTurretLsb1); //EVO V4
//		gDb_tNvCalibrationC0.u32EncodeurTurretOffset2 = gDb_tRamCanSensorC0.u32EncodeurTurret2AngleRaw; //EVO V4
		// Conversion en 16bits car MST ne permet pas la saisie de 32bit //EVO V4
		ConvertTUint32To2TUiInt16(gDb_tRamCanSensorC0.u32EncodeurTurret2AngleRaw,&gDb_tNvCalibrationC0.u16EncodeurTurretMsb2 ,&gDb_tNvCalibrationC0.u16EncodeurTurretLsb2); //EVO V4
	}
	else if(gCsr_tMsg5C0SendToOpus.u8gElementSelected == SLOPE && RisingbogKeyCalibMin == TRUE)
	{
		boLongSlope = TRUE;
		/* retain actual value of slope long angle*/
		gDb_tNvCalibrationC0.i16SlopeLongOffset = gDb_tRamCanSensorC0.i16SlopeLongAngleSensor1;
		/* retain actual value of slope long angle 2*/
		gDb_tNvCalibrationC0.i16SlopeLongOffset2 = gDb_tRamCanSensorC0.i16SlopeLongAngleSensor2;
	}
	else if(gCsr_tMsg5C0SendToOpus.u8gElementSelected == SLOPE && RisingbogKeyCalibMax == TRUE)
	{
		boTransSlope = TRUE;
		/* retain actual value of slope trans angle*/
		gDb_tNvCalibrationC0.i16SlopeTransOffset = gDb_tRamCanSensorC0.i16SlopeTransAngleSensor1;
		/* retain actual value of slope trans angle 2*/
		gDb_tNvCalibrationC0.i16SlopeTransOffset2 = gDb_tRamCanSensorC0.i16SlopeTransAngleSensor2;
	}


	/* ============================================================================================= */
	/* Save EEPROM database	*/
	/* ============================================================================================= */
	/* local variable*/
	ERetVal eRetVal;

	static TBoolean boInitOne = FALSE;
	static TUint8 u8PreviousLightsMode = 0;
	static TInt32 i32PreviousDistanceM = 0;
	static TInt32 i32PreviousDistanceMM = 0;

	/*Distance*/
	/*boMemoDistance*/
	static TBoolean boMemoDistance = FALSE;
	if((gDb_tRamEcuInputsC0.i32OscillantAxleFrequency == 0
	&& gDb_tRamEcuInputsC0.i32FixeAxleFrequency == 0
	&& gDb_tRamEcuOutputsC0.u16ForwardPumpCommand <= 0
	&& gDb_tRamEcuOutputsC0.u16BackwardPumpCommand <= 0
	&& gDb_tRamGeneralC0.i16JoystickAdvanceScalingValue == 0
	&& gDb_tRamGeneralC0.boAuthorizeTransRailMovement == FALSE
	&& gDb_tRamEcuC0RcvFromC1.eC1NacellePostSelector == GE_DI_ON)
	|| gDb_tRamEvision7C0.bogRazDistanceTraveledMastMeasure == TRUE
	)
		boMemoDistance = TRUE;
	else
		boMemoDistance = FALSE;

	/* Rising RisingboMemoDistance*/
	static TBoolean PreviousboMemoDistance = FALSE;
	TBoolean RisingboMemoDistance = FALSE;
	if (boMemoDistance == TRUE && PreviousboMemoDistance == FALSE && boInitOne == TRUE )
		RisingboMemoDistance = TRUE;
	/* Memorize the previous value*/
	PreviousboMemoDistance = boMemoDistance;

	/*Read old memory*/
	if(boInitOne==FALSE)
	{
		u8PreviousLightsMode = gDb_tNvMemoryC0.u8LightMode;
		Convert2TUint16ToTUiInt32(gDb_tNvMemoryC0.u16gTotalDistanceMsb,gDb_tNvMemoryC0.u16gTotalDistanceLsb, &gDb_tRamGeneralC0.u32TotalDistance );//EVO V4
		i32PreviousDistanceM = gDb_tRamGeneralC0.u32TotalDistance; //EVO V4
		i32PreviousDistanceMM = gDb_tNvMemoryC0.i32gDistanceTraveledMeasureMast;
		boInitOne = TRUE;
	}


	/* Réalisation test électrique*/
	/*Falling edge variable forçage.*/
	TBoolean boFallingTestElectrical = FALSE;
	static TBoolean PreviousboTestElectrical = FALSE;
	static TBoolean MemoDistanceManually = FALSE;
	static TBoolean ReplaceMemoDistance = FALSE;
	/* Falling*/
	if (gDb_tRamGeneralC0.boTestElectricalIO == FALSE && PreviousboTestElectrical == TRUE)
		boFallingTestElectrical = TRUE;
	/* Memorize the previous value*/
	PreviousboTestElectrical = gDb_tRamGeneralC0.boTestElectricalIO;

	/*Reset de la distance*/
	if(boFallingTestElectrical == TRUE)
	{
		Convert2TUint16ToTUiInt32(gDb_tNvMemoryC0.u16gTotalDistanceMsb,gDb_tNvMemoryC0.u16gTotalDistanceLsb, &gDb_tRamGeneralC0.u32TotalDistance );//EVO V4
		i32PreviousDistanceM = gDb_tRamGeneralC0.u32TotalDistance; //EVO V4
		MemoDistanceManually = TRUE;
		ReplaceMemoDistance = TRUE;
	}
	else if(gDb_tRamGeneralC0.boTestElectricalIO == FALSE && gDb_tRamEcuC0RcvFromC1.boTestElectricalFromC1 == FALSE)
	{
//		gDb_tNvMemoryC0.u32gTotalDistance = i32DetermineDistanceM(gCsr_tData3SendToC1.i32SpeedVehicleKmhx100, i32PreviousDistanceM, boFallingTestElectrical, gDb_tNvMemoryC0.u32gTotalDistance); //EVO V4
		// Conversion en 16bits car MST ne permet pas la saisie de 32bit //EVO V4
		gDb_tRamGeneralC0.u32TotalDistance = i32DetermineDistanceM(gCsr_tData3SendToC1.i32SpeedVehicleKmhx100, i32PreviousDistanceM, ReplaceMemoDistance, gDb_tRamGeneralC0.u32TotalDistance); //EVO V4
		ConvertTUint32To2TUiInt16(gDb_tRamGeneralC0.u32TotalDistance,&gDb_tNvMemoryC0.u16gTotalDistanceMsb ,&gDb_tNvMemoryC0.u16gTotalDistanceLsb); //EVO V4
		ReplaceMemoDistance = FALSE;
	}


	gDb_tNvMemoryC0.i32gDistanceTraveledMeasureMast  = i32DetermineDistanceWithMastMeasureMM(gCsr_tData3SendToC1.i32SpeedVehicleKmhx100,
																					gDb_tRamEcuInputsC0.eFixeAxleSpeedSensorDirState == GE_DI_ON,
																					gDb_tRamEvision7C0.bogRazDistanceTraveledMastMeasure,
																					gDb_tRamEcuC0RcvFromC1.boFoldedMastMeasure,
																					i32PreviousDistanceMM
																					);


	/* save DB parameters*/
	if (bo0DegTurret == TRUE
	|| boLongSlope == TRUE
	|| boTransSlope == TRUE)
	{
		eRetVal = eCoreDbStoreList(&gDb_tNvCalibrationC0.tListRoot);
		if (eRetVal == R_OKAY)
		{

		}
	}
	/*Don't forget add previous value below to avoid infinity loop*/
	else if(gDb_tNvMemoryC0.u8LightMode != u8PreviousLightsMode)
	{
		eRetVal = eCoreDbStoreList(&gDb_tNvMemoryC0.tListRoot);
	}
	else if(RisingboMemoDistance == TRUE || MemoDistanceManually == TRUE)
	{
		eRetVal = eCoreDbStoreList(&gDb_tNvMemoryC0.tListRoot);
		MemoDistanceManually = FALSE;
	}

	/*Don't forget previous value*/
	u8PreviousLightsMode = gDb_tNvMemoryC0.u8LightMode;

	//remise sous forme de TUint32 pour le process //EVO V4
	Convert2TUint16ToTUiInt32(gDb_tNvCalibrationC0.u16EncodeurTurretMsb1,gDb_tNvCalibrationC0.u16EncodeurTurretLsb1, &gDb_tRamCanSensorC0.u32EncodeurTurretOffset );//EVO V4
	Convert2TUint16ToTUiInt32(gDb_tNvCalibrationC0.u16EncodeurTurretMsb2,gDb_tNvCalibrationC0.u16EncodeurTurretLsb2, &gDb_tRamCanSensorC0.u32EncodeurTurretOffset2 );//EVO V4
}

//NEOTEC
//-----------------------------------------------------------------------------------------------------
//! @brief determine distance  translation rail
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created  18.07.2019 NEOTEC/FV
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TInt32 i32DetermineDistanceM(TInt32 i32SpeedKmhx100 , TInt32 i32InitDistanceM, TBoolean boSettingDistanceM, TUint32 u32SettingDistanceM)
{
	TInt32 i32DistanceTraveled;
	static TFloat32 f32DistanceTraveled = 0;
	const  TFloat32 f32RatioMeter20ms = 0.0000555554; //10ms = 0.0000277777 20ms= 0.0000555554
	static TBoolean boInitOne = FALSE;

	/*Read old memory*/
	if(boInitOne==FALSE)
	{
		f32DistanceTraveled =(TFloat32)i32InitDistanceM;
		boInitOne = TRUE;
	}

	if(boSettingDistanceM == TRUE)
	{
		f32DistanceTraveled = (TFloat32)u32SettingDistanceM;/*Réglage de la distance de la machine manuellement*/
	}

	/* determine distance traveled*/
	f32DistanceTraveled = f32DistanceTraveled + (TFloat32)i32SpeedKmhx100 * f32RatioMeter20ms;

	/* get decimal value of distance*/
	i32DistanceTraveled = (TInt32) f32DistanceTraveled;
	/* return distance traveled in meters*/
	return i32DistanceTraveled;
}

//-----------------------------------------------------------------------------------------------------
//! @brief determine distance Mast translation rail
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created  19.09.2019 NEOTEC/FV
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TInt32 i32DetermineDistanceWithMastMeasureMM(TInt32 i32SpeedKmhx100, TBoolean boEvForwardCommand, TBoolean boRazButton, TBoolean boFoldedPosMat, TInt32 i32InitDistanceMM)
{
	TInt32 i32DistanceTraveled;
	static TFloat32 f32DistanceTraveled = 0;
	const  TFloat32 f32RatioMeter20ms = 0.0555554; //10ms = 0.0277777 20ms = 0.0555554
	static TBoolean boInitOne = FALSE;

	/*Read old memory*/
	if(boInitOne==FALSE)
	{
		f32DistanceTraveled =(TFloat32)i32InitDistanceMM;
		boInitOne = TRUE;
	}


	/* check if Raz button is pressed to set distance with mat measure at 0*/
	if(boRazButton == TRUE)
	{
		f32DistanceTraveled = 0;
	}

	/* check if mast measure is unfolded*/
	if(boFoldedPosMat == FALSE)
	{
		/* check direction of translation*/
		if(boEvForwardCommand == FALSE)
		{
			/* determine distance traveled*/
			f32DistanceTraveled = f32DistanceTraveled + (TFloat32)i32SpeedKmhx100 * f32RatioMeter20ms;
		}
		else
		{
			/* determine distance traveled*/
			f32DistanceTraveled = f32DistanceTraveled - (TFloat32)i32SpeedKmhx100 * f32RatioMeter20ms;
		}

	}
	/* get decimal value of distance*/
	i32DistanceTraveled = f32DistanceTraveled;
	/* return distance traveled in meters*/
	return i32DistanceTraveled;
}

//-----------------------------------------------------------------------------------------------------
//! @brief TUint32 to TUint16
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created NEOTEC/FV
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid ConvertTUint32To2TUiInt16(TUint32 ValIn,TUint16 *ValOutMSB ,TUint16 *ValOutLSB)
{
	TUint8 		a4Uint8[4] = {0,0,0,0};
	TUint8 		a2Uint8[2] = {0,0};
#ifdef COMPILER_SWITCH_TAR_PC //D14 //SIMULATION POUR COMPILLER EN MODE PC
	vCopyU32toArr( ValIn, a4Uint8 );
	a2Uint8[0]=a4Uint8[0];
	a2Uint8[1]=a4Uint8[1];
	*ValOutLSB = u16ConvFromCanArr( a2Uint8 );
	a2Uint8[0]=a4Uint8[2];
	a2Uint8[1]=a4Uint8[3];
	*ValOutMSB = u16ConvFromCanArr( a2Uint8 );
#endif  //D14 //SIMULATION POUR COMPILLER EN MODE PC

#ifdef COMPILER_SWITCH_TAR_HW //D14 //SIMULATION POUR COMPILLER SUR CALCULATEUR
	vCopyU32toArr( ValIn, a4Uint8 );
	a2Uint8[0]=a4Uint8[3];
	a2Uint8[1]=a4Uint8[2];
	*ValOutLSB = u16ConvFromCanArr( a2Uint8 );
	a2Uint8[0]=a4Uint8[1];
	a2Uint8[1]=a4Uint8[0];
	*ValOutMSB = u16ConvFromCanArr( a2Uint8 );
#endif  //D14 //SIMULATION POUR COMPILLER SUR CALCULATEUR
}

//-----------------------------------------------------------------------------------------------------
//! @brief 2TUint16 to TUint32
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created NEOTEC/FV
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid Convert2TUint16ToTUiInt32(TUint16 ValInMSB,TUint16 ValInLSB, TUint32 *ValOutTUint32 )
{
	TUint8 		a4Uint8[4] = {0,0,0,0};
	TUint8 		a2Uint8[2] = {0,0};
#ifdef COMPILER_SWITCH_TAR_PC //D14 //SIMULATION POUR COMPILLER EN MODE PC
	vCopyU16toArr( ValInLSB, a2Uint8 );
	a4Uint8[0]=a2Uint8[0];
	a4Uint8[1]=a2Uint8[1];
	vCopyU16toArr( ValInMSB, a2Uint8 );
	a4Uint8[2]=a2Uint8[0];
	a4Uint8[3]=a2Uint8[1];
	*ValOutTUint32 = u32ConvFromCanArr(a4Uint8);
#endif  //D14 //SIMULATION POUR COMPILLER EN MODE PC

#ifdef COMPILER_SWITCH_TAR_HW //D14 //SIMULATION POUR COMPILLER SUR CALCULATEUR
	vCopyU16toArr( ValInLSB, a2Uint8 );
	a4Uint8[1]=a2Uint8[0];
	a4Uint8[0]=a2Uint8[1];
	vCopyU16toArr( ValInMSB, a2Uint8 );
	a4Uint8[3]=a2Uint8[0];
	a4Uint8[2]=a2Uint8[1];
	*ValOutTUint32 = u32ConvFromCanArr(a4Uint8);
#endif  //D14 //SIMULATION POUR COMPILLER SUR CALCULATEUR
}
