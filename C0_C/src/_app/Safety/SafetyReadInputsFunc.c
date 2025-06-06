//==================================================================================================
	//! @file SafetyReadInputsFunc.c
//! @brief Read analog and digital inputs and convert values
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 15.04.2019 HYDAC/CK
//! @history: #- CK 15.04.2019 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include <SafetyReadInputsFunc.h>

//-----------------------------------------------------------------------------------------------------
//! @brief safety read inputs
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 15.04.2019 HYDAC/CK
//!
//! @change	 11.06.2019 HYDAC/CK - add gInCur_tTemperatureTransmissionSensor error
//! @change	 25.06.2019 HYDAC/CK - add DM_SWI_DBL_NONC_INCONSISTENT failure
//! @change	 25.06.2019 HYDAC/CK - add DM_MAT_MEASURE_FAULT failure
//!
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vSafetyReadInputs(TVoid)
{
	/* check if failure right basket side*/
	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_4,DM_INC_RIGHT_BASKET_SENSOR))
	{
		gDb_tRam48XsInputsC0.boNacelleBasketRightSideSensor1 = FALSE;
		gDb_tRam48XsInputsC0.boNacelleBasketRightSideSensor2 = TRUE;
	}

	/* check if failure left basket side*/
	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_4,DM_INC_LEFT_BASKET_SENSOR))
	{
		gDb_tRam48XsInputsC0.boNacelleBasketLeftSideSensor1 = FALSE;
		gDb_tRam48XsInputsC0.boNacelleBasketLeftSideSensor2 = TRUE;
	}

	/* check if failure left and right basket side*/
	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_4,DM_INC_RIGHT_LEFT_BASKET))
	{
		gDb_tRam48XsInputsC0.boNacelleBasketRightSideSensor1 = FALSE;
		gDb_tRam48XsInputsC0.boNacelleBasketRightSideSensor2 = TRUE;
		gDb_tRam48XsInputsC0.boNacelleBasketLeftSideSensor1 = FALSE;
		gDb_tRam48XsInputsC0.boNacelleBasketLeftSideSensor2 = TRUE;
	}

	/* Check if failure insistent NcNo Down oscillant axle*/
	if(boBloSwiDblNcNoGetErrStaBit(&gSwiDblNcNo_tDownOscillantAxle,DM_SWI_DBL_NCNO_INCONSISTENT))
	{
		gDb_tRamEcuInputsC0.eDownAxleOscillantState = GE_DI_OFF;
		gDb_tRamEcuInputsC0.eUpAxleOscillantState = GE_DI_OFF;
	}

	/* Check if failure insistent NcNo Down fixe axle*/
	if(boBloSwiDblNcNoGetErrStaBit(&gSwiDblNcNo_tDownFixeAxle,DM_SWI_DBL_NCNO_INCONSISTENT))
	{
		gDb_tRamEcuInputsC0.eDownAxleFixeState = GE_DI_OFF;
		gDb_tRamEcuInputsC0.eUpAxleFixeState = GE_DI_OFF;
	}

	/* check is insistent position of axle oscillant*/
	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_2, DM_INC_POS_AXLE_OSCILLANT))
	{
		gDb_tRamEcuInputsC0.eDownAxleOscillantState = GE_DI_OFF;
		gDb_tRamEcuInputsC0.eUpAxleOscillantState = GE_DI_OFF;
	}

	/* check is insistent position of axle fixe*/
	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_2, DM_INC_POS_AXLE_FIXE))
	{
		gDb_tRamEcuInputsC0.eDownAxleFixeState = GE_DI_OFF;
		gDb_tRamEcuInputsC0.eUpAxleFixeState = GE_DI_OFF;
	}

	/* check default of slope*/
	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_3, DM_SLOPE_FAULT))
	{
		/* set max inclinaison slope*/
		gDb_tRamCanSensorC0.u16SelectedSlopeAngle = 600;
	}

	/* check failure of temperature transmission Sensor input current*/
	if(boBloInCurGetErrStaBit(&gInCur_tTemperatureTransmissionSensor,DM_INCUR_SP)
		|| boBloInCurGetErrStaBit(&gInCur_tTemperatureTransmissionSensor,DM_INCUR_SG_OL)
		|| boBloInCurGetErrStaBit(&gInCur_tTemperatureTransmissionSensor,DM_INCUR_PARAM)
		|| boBloInCurGetErrStaBit(&gInCur_tTemperatureTransmissionSensor,DM_INCUR_UNKNOWN)
		)
	{
		/* affect max value*/
		gDb_tRamEcuInputsC0.i16TemperatureTransmissionValue = gDb_tNvParametersC0.i16OutCharPosTempTransmission;
	}

	/* check default of turret sensor*/
	/*Multi Gage*/
	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_5, DM_TURRET_SENSOR_FAULT))
	{
		gDb_tRamCanSensorC0.i16EncodeurTurret1Angle = 3600;
		gDb_tRamCanSensorC0.i16EncodeurTurret2Angle = 7200;
		/*Pour éviter un effet d'oscilateur.*/

	}
	/* check if Nc No inconsistent failure of frame rotation sensor 1*/
	if(boBloSwiDblNoNcGetErrStaBit(&gSwiDblNoNc_tFrameRotationSensor1,DM_SWI_DBL_NONC_INCONSISTENT))
	{
		gDb_tRamEcuInputsC0.eFrameRotationSensor1State = GE_DI_OFF;
	}

	/* check if Nc No inconsistent failure of frame rotation sensor 2*/
	if(boBloSwiDblNoNcGetErrStaBit(&gSwiDblNoNc_tFrameRotationSensor2,DM_SWI_DBL_NONC_INCONSISTENT))
	{
		gDb_tRamEcuInputsC0.eFrameRotationSensor2State = GE_DI_OFF;
	}

	/* check if communication can between eVision7 is loss*/
	if(boBloCRcvGetErrStaBit(&gCRcv_tMsg1C0RcvFromEvision7,DM_CRCV_TIMEOUT))
	{
		/*set value for all variable*/
		gDb_tRamEvision7C0.boLoginStatus = FALSE;
		gDb_tRamEvision7C0.bogButtonCalibTurretEncoder = FALSE;
		gDb_tRamEvision7C0.bogOffTrackTestBrakeActivated = FALSE;
		gDb_tRamEvision7C0.bogOffTrackRunInBrakeActivated = FALSE;
		gDb_tRamEvision7C0.bogOsciServiceBrakeSelect = FALSE;
		gDb_tRamEvision7C0.bogFixedServiceBrakeSelect = FALSE;
		gDb_tRamEvision7C0.bogBothServiceBrakeSelect = FALSE;
		gDb_tRamEvision7C0.bogOsciParkBrakeSelect = FALSE;
		gDb_tRamEvision7C0.bogFixedParkBrakeSelect = FALSE;
		gDb_tRamEvision7C0.bogBothParkBrakeSelect = FALSE;
		gDb_tRamEvision7C0.bogOsciServiceRunInBrakeSelect = FALSE;
		gDb_tRamEvision7C0.bogFixedServiceRunInBrakeSelect = FALSE;
		gDb_tRamEvision7C0.bogBothServiceRunInBrakeSelect = FALSE;
		gDb_tRamEvision7C0.bogTestBrakePageActive = FALSE;
		gDb_tRamEvision7C0.bogBreakInBrakePageActive = FALSE;
		gDb_tRamEvision7C0.bogSerialNumber = FALSE;
		gDb_tRamEvision7C0.bogBPBasketValidate = FALSE;
		gDb_tRamEvision7C0.bogKeyFilterOverload = FALSE;
		gDb_tRamEvision7C0.bogKeyNextMode = FALSE;
		gDb_tRamEvision7C0.bogKeyPrevMode = FALSE;
		gDb_tRamEvision7C0.bogKeySignalDanger = FALSE;
		gDb_tRamEvision7C0.bogKeyFlashLightON = FALSE;
		gDb_tRamEvision7C0.bogKeyCalibMastMin = FALSE;
		gDb_tRamEvision7C0.bogKeyCalibMastMax = FALSE;
		gDb_tRamEvision7C0.bogKeyCalibMastValid = FALSE;
	}

	/* check if communication can between Opus is loss*/
	if(boBloCRcvGetErrStaBit(&gCRcv_tMsg1RcvFromOpus,DM_CRCV_TIMEOUT))
	{
		/* set value for all variable*/
		gDb_tRamEvision4C0.u8LifeByte = 0;
		gDb_tRamEvision4C0.bogDelta_Arm_Move_Up = FALSE;
		gDb_tRamEvision4C0.bogDelta_Arm_Move_Down = FALSE;
		gDb_tRamEvision4C0.bogArrow_Move_Up = FALSE;
		gDb_tRamEvision4C0.bogArrow_Move_Down = FALSE;
		gDb_tRamEvision4C0.bogPendular_Move_Up = FALSE;
		gDb_tRamEvision4C0.bogPendular_Move_Down = FALSE;
		gDb_tRamEvision4C0.bogTelescope_Move_Out = FALSE;
		gDb_tRamEvision4C0.bogTelescope_Move_In = FALSE;
		gDb_tRamEvision4C0.bogBasket_Inclinaison_Move_Up = FALSE;
		gDb_tRamEvision4C0.bogBasket_Inclinaison_Move_Down = FALSE;
		gDb_tRamEvision4C0.bogTurret_Rotate_ClockWise = FALSE;
		gDb_tRamEvision4C0.bogTurret_Rotate_Counter_ClockWise = FALSE;
		gDb_tRamEvision4C0.bogBasket_Rotate_ClockWise = FALSE;
		gDb_tRamEvision4C0.bogBasket_Rotate_Counter_ClockWise = FALSE;
		gDb_tRamEvision4C0.bogKeyRpmSelect = FALSE;
		gDb_tRamEvision4C0.bogKeyRpmOff = FALSE;
		gDb_tRamEvision4C0.bogForcingWhiteRaillight = FALSE;
		gDb_tRamEvision4C0.bogForcingNeons = FALSE;
		gDb_tRamEvision4C0.bogKeyCalibMin = FALSE;
		gDb_tRamEvision4C0.bogKeyCalibMax = FALSE;
		gDb_tRamEvision4C0.bogKeyCalibValid = FALSE;
		gDb_tRamEvision4C0.u8gElementChoice = 0;
	}

}
