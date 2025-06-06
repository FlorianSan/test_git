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
//! @change	 22.05.2019 NEOTEC/FV Change place test overload
//! @change  26.06.2019 HYDAC/CK change affectation of gDb_tRamEcuInputsC1.i16GasGaugeValue  equal 0 if failure is active , add failure DM_INRESIST_INTERNAL of input block GasGauge
//! @change  17.12.2019 HYDAC/CK  change provisional value of msg can gDb_tRamData4C1RcvFromC0.boSignal_3 to gDb_tRamData4C1RcvFromC0.boRadioPostSelectorOn
//!
//! @care
//! @todo
//
//11.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vSafetyReadInputs(TVoid)
{
	/* check if failure transmission pressure*/
	if(boBloInCurGetErrStaBit(&gInCur_tTransmission1PressureSensor,DM_INCUR_SP)
	|| boBloInCurGetErrStaBit(&gInCur_tTransmission1PressureSensor,DM_INCUR_SG_OL)
	|| boBloInCurGetErrStaBit(&gInCur_tTransmission1PressureSensor,DM_INCUR_PARAM)
	|| boBloInCurGetErrStaBit(&gInCur_tTransmission1PressureSensor,DM_INCUR_UNKNOWN))
		gDb_tRamEcuInputsC1.i16Transmission1PressureSensorValue = 0;

	/* check if failure transmission pressure*/
	if(boBloInCurGetErrStaBit(&gInCur_tTransmission2PressureSensor,DM_INCUR_SP)
	|| boBloInCurGetErrStaBit(&gInCur_tTransmission2PressureSensor,DM_INCUR_SG_OL)
	|| boBloInCurGetErrStaBit(&gInCur_tTransmission2PressureSensor,DM_INCUR_PARAM)
	|| boBloInCurGetErrStaBit(&gInCur_tTransmission2PressureSensor,DM_INCUR_UNKNOWN))
		gDb_tRamEcuInputsC1.i16Transmission2PressureSensorValue = 0;

	/* check if delta arm angular sensor failure of deviation signal*/
	if(boBloInCurDblGetErrStaBit(&gInCurDbl_tDeltaArmAngularSensor,DM_INCURDBL_DEV)
	|| boBloInCurDblGetErrStaBit(&gInCurDbl_tDeltaArmAngularSensor,DM_INCURDBL_SP_MAS)
	|| boBloInCurDblGetErrStaBit(&gInCurDbl_tDeltaArmAngularSensor,DM_INCURDBL_SG_OL_MAS)
	|| boBloInCurDblGetErrStaBit(&gInCurDbl_tDeltaArmAngularSensor,DM_INCURDBL_SP_SLA)
	|| boBloInCurDblGetErrStaBit(&gInCurDbl_tDeltaArmAngularSensor,DM_INCURDBL_SG_OL_SLA)
	|| boBloInCurDblGetErrStaBit(&gInCurDbl_tDeltaArmAngularSensor,DM_INCURDBL_LIMP)
	|| boBloInCurDblGetErrStaBit(&gInCurDbl_tDeltaArmAngularSensor,DM_INCURDBL_PARAM)
	|| boBloInCurDblGetErrStaBit(&gInCurDbl_tDeltaArmAngularSensor,DM_INCURDBL_UNKNOWN)
	|| i16CastU16(gDb_tRamEcuInputsC1.u16DeltaArmAngularSensorRawValueMas) > (gDb_tNvCalibrationC1.i16AngleCalibEndStopHighDeltaArm + gDb_tNvCalibrationC1.i16AngleCalibDeltaArmHyst) //provisoire C1_15 = 250 environ 3°
	|| i16CastU16(gDb_tRamEcuInputsC1.u16DeltaArmAngularSensorRawValueMas) < (gDb_tNvCalibrationC1.i16AngleCalibEndStopLowDeltaArm - gDb_tNvCalibrationC1.i16AngleCalibDeltaArmHyst) //provisoire C1_15 = 250 environ 3°
	)
	{
		gDb_tRamEcuInputsC1.i16DeltaArmAngleValue = gDb_tNvCalibrationC1.i16AngleEndStopHighDeltaArm;
		gDb_tRamEcuInputsC1.i16DeltaArmAngularSensorValue = gDb_tNvCalibrationC1.i16AngleEndStopHighDeltaArm;
	}

	/* check if arrow arm angular sensor failure of deviation signal*/
	if(boBloInCurDblGetErrStaBit(&gInCurDbl_tArrowArmAngularSensor,DM_INCURDBL_DEV)
	|| boBloInCurDblGetErrStaBit(&gInCurDbl_tArrowArmAngularSensor,DM_INCURDBL_SP_MAS)
	|| boBloInCurDblGetErrStaBit(&gInCurDbl_tArrowArmAngularSensor,DM_INCURDBL_SG_OL_MAS)
	|| boBloInCurDblGetErrStaBit(&gInCurDbl_tArrowArmAngularSensor,DM_INCURDBL_SP_SLA)
	|| boBloInCurDblGetErrStaBit(&gInCurDbl_tArrowArmAngularSensor,DM_INCURDBL_SG_OL_SLA)
	|| boBloInCurDblGetErrStaBit(&gInCurDbl_tArrowArmAngularSensor,DM_INCURDBL_LIMP)
	|| boBloInCurDblGetErrStaBit(&gInCurDbl_tArrowArmAngularSensor,DM_INCURDBL_PARAM)
	|| boBloInCurDblGetErrStaBit(&gInCurDbl_tArrowArmAngularSensor,DM_INCURDBL_UNKNOWN)
	|| i16CastU16(gDb_tRamEcuInputsC1.u16ArrowArmAngularSensorRawValueMas) > (gDb_tNvCalibrationC1.i16AngleCalibEndStopHighArrowArm + gDb_tNvCalibrationC1.i16AngleCalibArrowArmHyst) //provisoire C1_16 = 250 environ 3°
	|| i16CastU16(gDb_tRamEcuInputsC1.u16ArrowArmAngularSensorRawValueMas) < (gDb_tNvCalibrationC1.i16AngleCalibEndStopLowArrowArm - gDb_tNvCalibrationC1.i16AngleCalibArrowArmHyst)  //provisoire C1_16 = 250 environ 3°
	)
	{
		if(gDb_tRamData4C1RcvFromC0.boRadioPostSelectorOn == FALSE)
		{
			gDb_tRamEcuInputsC1.i16ArrowArmAngleValue = 4800;
			gDb_tRamEcuInputsC1.i16ArrowArmAngularSensorValue = 4800;
		}
		else if(gDb_tRamData4C1RcvFromC0.boRadioPostSelectorOn == TRUE)
		{
		gDb_tRamEcuInputsC1.i16ArrowArmAngleValue = gDb_tNvCalibrationC1.i16AngleEndStopHighArrowArm;
		gDb_tRamEcuInputsC1.i16ArrowArmAngularSensorValue = gDb_tNvCalibrationC1.i16AngleEndStopHighArrowArm;
		}
	}

	/* check if failure of telescope*/
	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_3,DM_TELESCOPE_SENSOR_FAULT))
	{
		gDb_tRamTelescopeCanC1.u16LenghtTelescope1 = gDb_tNvCalibrationC1.u16LenghtEndStopHighTelescope1;
		gDb_tRamTelescopeCanC1.u16LenghtTelescope2 = gDb_tNvCalibrationC1.u16LenghtCaliEndStopLowTelescope2;
	}


	/* check if gasGauge is out of range*/
	if(boBloInResistGetErrStaBit(&gInResist_tGasGauge,DM_INRESIST_SP)
		|| boBloInResistGetErrStaBit(&gInResist_tGasGauge,DM_INRESIST_SG)
		|| boBloInResistGetErrStaBit(&gInResist_tGasGauge,DM_INRESIST_INTERNAL)
	  )
	{
		gDb_tRamEcuInputsC1.i16GasGaugeValue = 0;
	}



	/* check if communication can between eVision7 is loss*/
	if(boBloCRcvGetErrStaBit(&gCRcv_tMsg1C0RcvFromEvision7,DM_CRCV_TIMEOUT))
	{
		/* set value for all variable*/
		gDb_tRamEvision7C1.bogButtonCalibMinMastMeasure = FALSE;
		gDb_tRamEvision7C1.bogButtonCalibMaxMastMeasure = FALSE;
		gDb_tRamEvision7C1.boSavePosEncodeurMastMeasureButton = FALSE;
		gDb_tRamEvision7C1.bogActivateMeasuringMast = FALSE;
		gDb_tRamEvision7C1.boRazDistanceTraveledMastMeasure = FALSE;
		gDb_tRamEvision7C1.bogSerialNumber = FALSE;
		gDb_tRamEvision7C1.bogBPBasketValidate = FALSE;
		gDb_tRamEvision7C1.bogKeyFilterOverload = FALSE;
		gDb_tRamEvision7C1.bogKeyNextMode = FALSE;
		gDb_tRamEvision7C1.bogKeyPrevMode = FALSE;
		gDb_tRamEvision7C1.bogKeySignalDanger = FALSE;
		gDb_tRamEvision7C1.bogKeyFlashLightON = FALSE;
		gDb_tRamEvision7C1.bogKeyCalibMastMin = FALSE;
		gDb_tRamEvision7C1.bogKeyCalibMastMax = FALSE;
		gDb_tRamEvision7C1.bogKeyCalibMastValid = FALSE;
	}

	/* check if communication can between Opus is loss*/
	if(boBloCRcvGetErrStaBit(&gCRcv_tMsg1RcvFromOpus,DM_CRCV_TIMEOUT))
	{
		/* set value for all variable*/
		gDb_tRamEvision4C1.u8LifeByte = 0;
		gDb_tRamEvision4C1.bogDelta_Arm_Move_Up = FALSE;
		gDb_tRamEvision4C1.bogDelta_Arm_Move_Down = FALSE;
		gDb_tRamEvision4C1.bogArrow_Move_Up = FALSE;
		gDb_tRamEvision4C1.bogArrow_Move_Down = FALSE;
		gDb_tRamEvision4C1.bogPendular_Move_Up = FALSE;
		gDb_tRamEvision4C1.bogPendular_Move_Down = FALSE;
		gDb_tRamEvision4C1.bogTelescope_Move_Out = FALSE;
		gDb_tRamEvision4C1.bogTelescope_Move_In = FALSE;
		gDb_tRamEvision4C1.bogBasket_Inclinaison_Move_Up = FALSE;
		gDb_tRamEvision4C1.bogBasket_Inclinaison_Move_Down = FALSE;
		gDb_tRamEvision4C1.bogTurret_Rotate_ClockWise = FALSE;
		gDb_tRamEvision4C1.bogTurret_Rotate_Counter_ClockWise = FALSE;
		gDb_tRamEvision4C1.bogBasket_Rotate_ClockWise = FALSE;
		gDb_tRamEvision4C1.bogBasket_Rotate_Counter_ClockWise = FALSE;
		gDb_tRamEvision4C1.bogKeyRpmSelect = FALSE;
		gDb_tRamEvision4C1.bogKeyRpmOff = FALSE;
		gDb_tRamEvision4C1.bogForcingWhiteRaillight = FALSE;
		gDb_tRamEvision4C1.bogForcingNeons = FALSE;
		gDb_tRamEvision4C1.bogKeyCalibMin = FALSE;
		gDb_tRamEvision4C1.bogKeyCalibMax = FALSE;
		gDb_tRamEvision4C1.bogKeyCalibValid = FALSE;
		gDb_tRamEvision4C1.u8gElementChoice = 0;

	}
}

