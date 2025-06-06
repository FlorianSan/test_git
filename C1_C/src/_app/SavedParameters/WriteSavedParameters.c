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
//! @created 21.01.2018 HYDAC/CK
//!
//! @change  06.11.2019 HYDAC/CK	- add refresh parameter of bloc double current after calibration action
//!
//! @care
//! @todo
//
//11.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vWriteSavedParameters(TVoid)
{
	const TInt16 NO_ELEMENTS = 0;
	const TInt16 TELESCOPE = 1;
	const TInt16 ARROW = 2;
	const TInt16 DELTA = 3;
	TBoolean boMinTelescope = FALSE;
	TBoolean boMaxTelescope = FALSE;
	TBoolean boMinArrow = FALSE;
	TBoolean boMaxArrow = FALSE;
	TBoolean boMinDelta = FALSE;
	TBoolean boMaxDelta = FALSE;

	if(gCsr_tMsg1RcvFromOpus.u8gElementChoice == TELESCOPE
	|| gCsr_tMsg1RcvFromOpus.u8gElementChoice == ARROW
	|| gCsr_tMsg1RcvFromOpus.u8gElementChoice == DELTA)
		gCsr_tMsg4C1SendToOpus.u8gElementSelected = gCsr_tMsg1RcvFromOpus.u8gElementChoice;
	else
		gCsr_tMsg4C1SendToOpus.u8gElementSelected = NO_ELEMENTS;

	TBoolean RisingbogKeyCalibMin = FALSE;
	static TBoolean PreviousbogKeyCalibMin = FALSE;
	/* Rising bogKeyCalibMin*/
	RisingbogKeyCalibMin = FALSE;
	if (gDb_tRamEvision4C1.bogKeyCalibMin == TRUE && PreviousbogKeyCalibMin == FALSE)
		RisingbogKeyCalibMin = TRUE;
	/* Memorize the previous value*/
	PreviousbogKeyCalibMin = gDb_tRamEvision4C1.bogKeyCalibMin;

	TBoolean RisingbogKeyCalibMax = FALSE;
	static TBoolean PreviousbogKeyCalibMax = FALSE;
	/* Rising bogKeyCalibMax*/
	RisingbogKeyCalibMax = FALSE;
	if (gDb_tRamEvision4C1.bogKeyCalibMax == TRUE && PreviousbogKeyCalibMax == FALSE)
		RisingbogKeyCalibMax = TRUE;
	/* Memorize the previous value*/
	PreviousbogKeyCalibMax = gDb_tRamEvision4C1.bogKeyCalibMax;

	TBoolean RisingbogKeyCalibMastMin = FALSE;
	static TBoolean PreviousbogKeyCalibMastMin = FALSE;
	/* Rising bogKeyCalibMastMin*/
	RisingbogKeyCalibMastMin = FALSE;
	if (gDb_tRamEvision7C1.bogButtonCalibMinMastMeasure == TRUE && PreviousbogKeyCalibMastMin == FALSE)
		RisingbogKeyCalibMastMin = TRUE;
	/* Memorize the previous value*/
	PreviousbogKeyCalibMastMin = gDb_tRamEvision7C1.bogButtonCalibMinMastMeasure;

	TBoolean RisingbogKeyCalibMastMax = FALSE;
	static TBoolean PreviousbogKeyCalibMastMax = FALSE;
	/* Rising bobogKeyCalibMastMax*/
	RisingbogKeyCalibMastMax = FALSE;
	if (gDb_tRamEvision7C1.bogButtonCalibMaxMastMeasure == TRUE && PreviousbogKeyCalibMastMax == FALSE)
		RisingbogKeyCalibMastMax = TRUE;
	/* Memorize the previous value*/
	PreviousbogKeyCalibMastMax = gDb_tRamEvision7C1.bogButtonCalibMaxMastMeasure;

	if(gCsr_tMsg4C1SendToOpus.u8gElementSelected == TELESCOPE && RisingbogKeyCalibMin == TRUE)
	{
		boMinTelescope = TRUE;
		gDb_tNvCalibrationC1.u16LenghtCaliEndStopLowTelescope1 = gDb_tRamTelescopeCanC1.u16RetractorTelescopeVal1;
		gDb_tNvCalibrationC1.u16LenghtCaliEndStopLowTelescope2 = gDb_tRamTelescopeCanC1.u16RetractorTelescopeVal2;
	}
	else if(gCsr_tMsg4C1SendToOpus.u8gElementSelected == TELESCOPE && RisingbogKeyCalibMax == TRUE)
	{
		boMaxTelescope = TRUE;
		gDb_tNvCalibrationC1.u16LenghtCaliEndStopHighTelescope1 = gDb_tRamTelescopeCanC1.u16RetractorTelescopeVal1;
		gDb_tNvCalibrationC1.u16LenghtCaliEndStopHighTelescope2 = gDb_tRamTelescopeCanC1.u16RetractorTelescopeVal2;
	}
	else if(gCsr_tMsg4C1SendToOpus.u8gElementSelected == ARROW && RisingbogKeyCalibMin == TRUE)
	{
		boMinArrow = TRUE;
		gDb_tNvCalibrationC1.i16AngleCalibEndStopLowArrowArm = i16CastU16(gDb_tRamEcuInputsC1.u16ArrowArmAngularSensorRawValueMas);
	}
	else if(gCsr_tMsg4C1SendToOpus.u8gElementSelected == ARROW && RisingbogKeyCalibMax == TRUE)
	{
		boMaxArrow = TRUE;
		gDb_tNvCalibrationC1.i16AngleCalibEndStopHighArrowArm = i16CastU16(gDb_tRamEcuInputsC1.u16ArrowArmAngularSensorRawValueMas);
	}
	else if(gCsr_tMsg4C1SendToOpus.u8gElementSelected == DELTA && RisingbogKeyCalibMin == TRUE)
	{
		boMinDelta = TRUE;
		gDb_tNvCalibrationC1.i16AngleCalibEndStopLowDeltaArm = i16CastU16(gDb_tRamEcuInputsC1.u16DeltaArmAngularSensorRawValueMas);
	}
	else if(gCsr_tMsg4C1SendToOpus.u8gElementSelected == DELTA && RisingbogKeyCalibMax == TRUE)
	{
		boMaxDelta = TRUE;
		gDb_tNvCalibrationC1.i16AngleCalibEndStopHighDeltaArm = i16CastU16(gDb_tRamEcuInputsC1.u16DeltaArmAngularSensorRawValueMas);
	}
	else if(RisingbogKeyCalibMastMin)
		gDb_tNvParamMastC1.u32MinValueEncodeurMast = gDb_tRamEcuC1RcvFromC0.u32EncodeurMastMeasureRaw;
	else if(RisingbogKeyCalibMastMax)
		gDb_tNvParamMastC1.u32MaxValueEncodeurMast = gDb_tRamEcuC1RcvFromC0.u32EncodeurMastMeasureRaw;


	/* ============================================================================================= */
	/* Save EEPROM database	*/
	/* ============================================================================================= */
	/* local variable*/
	ERetVal eRetVal;

	/* save DB parameters*/
	if (boMinTelescope == TRUE
	|| boMaxTelescope == TRUE
	|| boMinArrow == TRUE
	|| boMaxArrow == TRUE
	|| boMinDelta == TRUE
	|| boMaxDelta == TRUE
		)
	{
			/* affect new calibration value of block parameter DeltaArmAngularSensor*/
			gInCurDbl_tDeltaArmAngularSensor.tPar.atDbInCharMaster[0].i16Var = gDb_tNvCalibrationC1.i16AngleCalibEndStopHighDeltaArm;
			gInCurDbl_tDeltaArmAngularSensor.tPar.atDbInCharSlave[0].i16Var = gDb_tNvCalibrationC1.i16AngleCalibEndStopHighDeltaArm;

			gInCurDbl_tDeltaArmAngularSensor.tPar.atDbInCharMaster[1].i16Var = gDb_tNvCalibrationC1.i16AngleCalibEndStopLowDeltaArm;
			gInCurDbl_tDeltaArmAngularSensor.tPar.atDbInCharSlave[1].i16Var = gDb_tNvCalibrationC1.i16AngleCalibEndStopLowDeltaArm;

			gInCurDbl_tDeltaArmAngularSensor.tPar.atDbInCharMaster[2].i16Var = gDb_tNvCalibrationC1.i16AngleCalibEndStopLowDeltaArm;
			gInCurDbl_tDeltaArmAngularSensor.tPar.atDbInCharSlave[2].i16Var = gDb_tNvCalibrationC1.i16AngleCalibEndStopLowDeltaArm;

			/* affect new calibration value of block parameter ArrowArmAngularSensor*/
			gInCurDbl_tArrowArmAngularSensor.tPar.atDbInCharMaster[0].i16Var = gDb_tNvCalibrationC1.i16AngleCalibEndStopHighArrowArm;
			gInCurDbl_tArrowArmAngularSensor.tPar.atDbInCharSlave[0].i16Var = gDb_tNvCalibrationC1.i16AngleCalibEndStopHighArrowArm;

			gInCurDbl_tArrowArmAngularSensor.tPar.atDbInCharMaster[1].i16Var = gDb_tNvCalibrationC1.i16AngleCalibEndStopLowArrowArm;
			gInCurDbl_tArrowArmAngularSensor.tPar.atDbInCharSlave[1].i16Var = gDb_tNvCalibrationC1.i16AngleCalibEndStopLowArrowArm;

			gInCurDbl_tArrowArmAngularSensor.tPar.atDbInCharMaster[2].i16Var = gDb_tNvCalibrationC1.i16AngleCalibEndStopLowArrowArm;
			gInCurDbl_tArrowArmAngularSensor.tPar.atDbInCharSlave[2].i16Var =  gDb_tNvCalibrationC1.i16AngleCalibEndStopLowArrowArm;

			/* refresh new calibration value of block delta arm angular sensor*/
			gInCurDbl_tDeltaArmAngularSensor.tInp.eUpdatePar = UPD_PARAM;

			/* refresh new calibration value of block arrow arm angular sensor*/
			gInCurDbl_tArrowArmAngularSensor.tInp.eUpdatePar = UPD_PARAM;

		eRetVal = eCoreDbStoreList(&gDb_tNvCalibrationC1.tListRoot);
		if (eRetVal == R_OKAY)
		{

		}
	}


//GREEN
	static TBoolean boInitOne = FALSE;
	static TUint16 u16PreviousCptNbrRegenFinish = 0;
	static TBoolean boPreviousFirstKeyNoReloadWithGenerator = FALSE;
	static TBoolean boPreviousNewSocUperReloadWithGenerator = FALSE;
	static TUint32 u32PreviousTotalElecticMinutes = 0;
	/*Read old memory*/
	if(boInitOne==FALSE)
	{
		u16PreviousCptNbrRegenFinish = gDb_tNvMemoryC1.u16CptNbrRegenFinish;
		boPreviousFirstKeyNoReloadWithGenerator = gDb_tNvMemoryC1.boFirstKeyNoReloadWithGenerator;
		boPreviousNewSocUperReloadWithGenerator = gDb_tNvMemoryC1.boNewSocUperReloadWithGenerator;
		u32PreviousTotalElecticMinutes = gDb_tNvMemoryC1.u32TotalElecticMinutes;

		boInitOne = TRUE;
	}

	/*boMemoTotalRegenMinutes*/
	static TBoolean boMemoTotalRegenMinutes = FALSE;

	static TBoolean boRisingSocStopRegen = FALSE;
	static TBoolean boPreviousRisingSocStopRegen  = FALSE;
	boRisingSocStopRegen   = vRisingEdge(gDb_tRamGreenEffC1.boSocStopRegen == TRUE,boPreviousRisingSocStopRegen,&boPreviousRisingSocStopRegen);

	static TBoolean boRisingMotorSpeedJ1939 = FALSE;
	static TBoolean boPreviousRisingMotorSpeedJ1939  = FALSE;
	boRisingMotorSpeedJ1939   = vRisingEdge(gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939 <500,boPreviousRisingMotorSpeedJ1939,&boPreviousRisingMotorSpeedJ1939);

	if (boRisingSocStopRegen == TRUE
	||boRisingMotorSpeedJ1939 == TRUE )
		boMemoTotalRegenMinutes = TRUE;
	else
		boMemoTotalRegenMinutes = FALSE;

	/*boMemoTotalElectricMinutes*/
	static TBoolean boMemoTotalElectricMinutes = FALSE;

	static TBoolean boRisingRpmMotorElecticInf0 = FALSE;
	static TBoolean boPreviousRisingRpmMotorElecticInf0  = FALSE;
	boRisingRpmMotorElecticInf0   = vRisingEdge(gDb_tRamGreenEffC1.i16RpmMotorElectric<=0,boPreviousRisingRpmMotorElecticInf0,&boPreviousRisingRpmMotorElecticInf0);

	if (gDb_tNvMemoryC1.u32TotalElecticMinutes != u32PreviousTotalElecticMinutes
	&& boRisingRpmMotorElecticInf0 == TRUE)
	{
		boMemoTotalElectricMinutes = TRUE;
		u32PreviousTotalElecticMinutes = gDb_tNvMemoryC1.u32TotalElecticMinutes;
	}
	else
		boMemoTotalElectricMinutes = FALSE;
//GREEN


	/* save DB parameters mast measure*/
	if (RisingbogKeyCalibMastMin == TRUE
	|| RisingbogKeyCalibMastMax == TRUE)
	{
		eRetVal = eCoreDbStoreList(&gDb_tNvParamMastC1.tListRoot);
		if (eRetVal == R_OKAY)
		{

		}
	}
//GREEN
	/*Don't forget add previous value below to avoid infinity loop*/
	else if(gDb_tNvMemoryC1.u16CptNbrRegenFinish != u16PreviousCptNbrRegenFinish
	|| 	gDb_tNvMemoryC1.boFirstKeyNoReloadWithGenerator !=	boPreviousFirstKeyNoReloadWithGenerator
	|| 	gDb_tNvMemoryC1.boNewSocUperReloadWithGenerator != boPreviousNewSocUperReloadWithGenerator
	||  boMemoTotalRegenMinutes == TRUE
	|| 	boMemoTotalElectricMinutes  == TRUE
	)
	{
		eRetVal = eCoreDbStoreList(&gDb_tNvMemoryC1.tListRoot);
	}

	/*Don't forget previous value*/ //GREEN
	u16PreviousCptNbrRegenFinish = gDb_tNvMemoryC1.u16CptNbrRegenFinish;
	boPreviousFirstKeyNoReloadWithGenerator = gDb_tNvMemoryC1.boFirstKeyNoReloadWithGenerator;
	boPreviousNewSocUperReloadWithGenerator = gDb_tNvMemoryC1.boNewSocUperReloadWithGenerator;
//GREEN
}
