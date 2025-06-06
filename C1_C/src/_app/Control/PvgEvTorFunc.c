//==================================================================================================
//! @file PvgEvTorFunc.c
//! @brief Control Pvg Ev Tor output
//! @see Target for ...
//! @section app
//! @subsection
//! @author Christian Klein (CK)
//! @created 09.10.2018 HYDAC/CK
//! @history: #- CK 09.10.2018 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "PvgEvTorFunc.h"

/*================================GLOBAL VARIABLES DECLARATIONS ==================================================================*/
	TInt16 u16PvgEvTorCommandIO;//Variable Globale
	TBoolean boSupplyPvgPropEvTorCommandIO;//Variable Globale



//-----------------------------------------------------------------------------------------------------
//! @brief Control Pvg Ev Tor output
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 09.10.2018 HYDAC/CK
//!
//! @change  27.12.2018 HYDAC/CK  change gDb_tRamEcuOutputsC1.boEvUpInclinaisonBasketCmdBool to  gDb_tRamEcuOutputsC1.boEvUpIncliBasketActivation
//!								  change  gDb_tRamEcuOutputsC1.boEvDownInclinaisonBasketCmdBool to  gDb_tRamEcuOutputsC1.boEvUpIncliBasketActivation
//!
//!			 29.01.2019 HYDAC/CK  change command RotFrameCtClkwiseButton to RotFrameClwiseButton and vice versa because hydraulic assembly
//! @change  02.07.2019 HYDAC/CK  - change function i16ProportionalFunction2 to vPropVoltPvgFunction
//! @change  02.07.2019 HYDAC/CK  - Add two local variable , ParamUpMax and ParamDownMax for new function vPropVoltPvgFunction
//! @change  08.07.2019 HYDAC/CK   	add variable i16SetPointPvgEvTorAfterRamp for vPropVoltPvgFunction
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vPvgEvTorControl(TVoid)
{
	/* local variable*/
	static TInt16 i16ParamUpMax = 0;
	static TInt16 i16ParamDownMax = 0;
	static TInt16 i16SetPointPvgEvTorAfterRamp;

	gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[0] = gDb_tRamGeneralC1.u16EcuVoltage / 2; /* off voltage*/

	/* check if a up axle oscillant is sollicited*/
	if(gDb_tRamEcuOutputsC1.boEvUpAxleOscillantActivation == TRUE)
	{
		/* affect ramp ratio to pvg tor*/
		gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[0] = gDb_tNvParametersC1.au16PvgUpAxleOscillantRampRatio[0];
		gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[1] = gDb_tNvParametersC1.au16PvgUpAxleOscillantRampRatio[1];
		/* consign fixe*/
		gDb_tRamGeneralC1.i16PvgTorConsigneCommand = 10000;

		/* Range command Pvg in mV*/
		gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgUpAxleOscillant / 100; /* consign max Up movement voltage  apply to pvg*/
		gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgUpAxleOscillant / 100;	/* consign min up movement voltage apply to pvg*/

		/* set the param up max*/
		i16ParamUpMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgUpAxleOscillant / 100;

	}
	else if(gDb_tRamEcuOutputsC1.boEvDownAxleOscillantActivation == TRUE)
	{
		/* affect ramp ratio to pvg tor*/
		gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[2] = gDb_tNvParametersC1.au16PvgDownAxleOscillantRampRatio[0];
		gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[3] = gDb_tNvParametersC1.au16PvgDownAxleOscillantRampRatio[1];
		/* consign fixe*/
		gDb_tRamGeneralC1.i16PvgTorConsigneCommand = -10000;

		/* Range command Pvg in mV*/
		gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgDownAxleOscillant / 100; /* consign max down movement voltage  apply to pvg*/
		gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgDownAxleOscillant / 100;	/* consign min down movement voltage apply to pvg*/

		/* set the param down max*/
		i16ParamDownMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgDownAxleOscillant / 100;

	}
	else if(gDb_tRamEcuOutputsC1.boEvUpAxleFixeActivation == TRUE)
	{
		/* affect ramp ratio to pvg tor*/
		gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[0] = gDb_tNvParametersC1.au16PvgUpAxleFixeRampRatio[0];
		gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[1] = gDb_tNvParametersC1.au16PvgUpAxleFixeRampRatio[1];
		/* consign fixe*/
		gDb_tRamGeneralC1.i16PvgTorConsigneCommand = 10000;

		/* Range command Pvg in mV*/
		gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgUpAxleFixe / 100; /* consign max Up movement voltage  apply to pvg*/
		gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgUpAxleFixe / 100;	/* consign min up movement voltage apply to pvg*/

		/* set the param up max*/
		i16ParamUpMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgUpAxleFixe / 100;

	}
	else if(gDb_tRamEcuOutputsC1.boEvDownAxleFixeActivation == TRUE)
	{
		/* affect ramp ratio to pvg tor*/
		gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[2] = gDb_tNvParametersC1.au16PvgDownAxleFixeRampRatio[0];
		gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[3] = gDb_tNvParametersC1.au16PvgDownAxleFixeRampRatio[1];
		/* consign fixe*/
		gDb_tRamGeneralC1.i16PvgTorConsigneCommand = -10000;

		/* Range command Pvg in mV*/
		gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgDownAxleFixe / 100; /* consign max down movement voltage  apply to pvg*/
		gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgDownAxleFixe / 100;/* consign min down movement voltage apply to pvg*/

		/* set the param down max*/
		i16ParamDownMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgDownAxleFixe / 100;

	}
	else if(gDb_tRamEcuOutputsC1.boEvUpMastMeasureActivation == TRUE)
	{
		/* affect consign*/
		gDb_tRamGeneralC1.i16PvgTorConsigneCommand = gDb_tRamMastMeasureC1.i16ScalingJoyMatTelescope;

		/* affect ramp ratio to pvg tor*/
		gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[0] = gDb_tNvParametersC1.au16UpMastMeasureRampRatio[0];
		gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[1] = gDb_tNvParametersC1.au16UpMastMeasureRampRatio[1];

		/* Range command Pvg in mV*/
		gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MaxPvgUpMastMeasure / 1000; /* consign max Up movement voltage  apply to pvg*/
		gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MinPvgUpMastMeasure / 1000;	/* consign min up movement voltage apply to pvg*/

		/* set the param up max*/
		i16ParamUpMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MaxPvgUpMastMeasure / 1000;

	}
	else if(gDb_tRamEcuOutputsC1.boEvDownMastMeasureActivation == TRUE)
	{
		/* affect consign*/
		gDb_tRamGeneralC1.i16PvgTorConsigneCommand = gDb_tRamMastMeasureC1.i16ScalingJoyMatTelescope;

		/* affect ramp ratio to pvg tor*/
		gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[2] = gDb_tNvParametersC1.au16DownMastMeasureRampRatio[0];
		gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[3] = gDb_tNvParametersC1.au16DownMastMeasureRampRatio[1];

		/* Range command Pvg in mV*/
		gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MaxPvgDownMastMeasure / 1000;/* consign max down movement voltage  apply to pvg*/
		gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MinPvgDownMastMeasure / 1000;/* consign min down movement voltage apply to pvg*/

		/* set the param down max*/
		i16ParamDownMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MaxPvgDownMastMeasure / 1000;

	}
	else if(gDb_tRamEcuOutputsC1.boEvRotBasketClkWiseActivation == TRUE)
	{

		/* consign fixe*/
		gDb_tRamGeneralC1.i16PvgTorConsigneCommand = 10000;

		/* check if offrail radio control mode is active*/
		if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_RADIO)
		{
			/* affect ramp ratio to pvg tor*/
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[0] = gDb_tNvParametersC1.au16RotBasketClkwiseRampRatioRadio[0];
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[1] = gDb_tNvParametersC1.au16RotBasketClkwiseRampRatioRadio[1];

			/* Range command Pvg in mV*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgRotBasketClkwiseRadioPost / 100; 	/* consign max Up movement voltage  apply to pvg*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgRotBasketClkwiseRadioPost / 100;	/* consign min up movement voltage apply to pvg*/

			/* set the param up max*/
			i16ParamUpMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgRotBasketClkwiseRadioPost / 100;

		}
		/* check if rail nacelle mode is active*/
		else if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_NACELLE)
		{
			/* affect ramp ratio to pvg tor*/
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[0] = gDb_tNvParametersC1.au16RotBasketClkwiseRampRatioNacel[0];
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[1] = gDb_tNvParametersC1.au16RotBasketClkwiseRampRatioNacel[1];
			/* Range command Pvg in mV*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgRotBasktClkwiseNacellePost / 100; /* consign max Up movement voltage  apply to pvg*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgRotBasktClkwiseNacellePost / 100;	/* consign min up movement voltage apply to pvg*/

			/* set the param up max*/
			i16ParamUpMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgRotBasktClkwiseNacellePost / 100;

		}
		/* check if turret mode is active*/
		else if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_TURRET)
		{
			/* affect ramp ratio to pvg tor*/
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[0] = gDb_tNvParametersC1.au16RotBasketClkwiseRampRatioTurret[0];
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[1] = gDb_tNvParametersC1.au16RotBasketClkwiseRampRatioTurret[1];
			/* Range command Pvg in mV*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgRotBasketClkwiseTurretPost / 100; 	/* consign max Up movement voltage  apply to pvg*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgRotBasktClkwiseTurretPost / 100;	/* consign min up movement voltage apply to pvg*/

			/* set the param up max*/
			i16ParamUpMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgRotBasketClkwiseTurretPost / 100;

		}
	}
	else if(gDb_tRamEcuOutputsC1.boEvRotBasketCtClkWiseActivation == TRUE)
	{
		/* consign fixe*/
		gDb_tRamGeneralC1.i16PvgTorConsigneCommand = -10000;

		/* check if offrail radio control mode is active*/
		if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_RADIO)
		{
			/* affect ramp ratio to pvg tor*/
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[2] = gDb_tNvParametersC1.au16RotBasketCtClkwiseRampRatioRadio[0];
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[3] = gDb_tNvParametersC1.au16RotBasketCtClkwiseRampRatioRadio[1];
			/* Range command Pvg in mV*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgRotBasktCtClkwiseRadioPost / 100; 	/* consign max Up movement voltage  apply to pvg*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgRotBasktCtClkwiseRadioPost / 100;	/* consign min up movement voltage apply to pvg*/

			/* set the param down max*/
			i16ParamDownMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgRotBasktCtClkwiseRadioPost / 100;

		}
		/* check if rail nacelle mode is active*/
		else if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_NACELLE)
		{
			/* affect ramp ratio to pvg tor*/
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[2] = gDb_tNvParametersC1.au16RotBasketCtClkwiseRampRatioNacel[0];
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[3] = gDb_tNvParametersC1.au16RotBasketCtClkwiseRampRatioNacel[1];
			/* Range command Pvg in mV*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgRotBasktCtClkwiseNacelPost / 100; /* consign max Up movement voltage  apply to pvg*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgRotBasktCtClkwiseNacelPost / 100;	/* consign min up movement voltage apply to pvg*/

			/* set the param down max*/
			i16ParamDownMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgRotBasktCtClkwiseNacelPost / 100;

		}
		/* check if turret mode is active*/
		else if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_TURRET)
		{
			/* affect ramp ratio to pvg tor*/
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[2] = gDb_tNvParametersC1.au16RotBasketCtClkwiseRampRatioTuret[0];
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[3] = gDb_tNvParametersC1.au16RotBasketCtClkwiseRampRatioTuret[1];
			/* Range command Pvg in mV*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgRotBasktCtClkwiseTuretPost / 100; 	/* consign max Up movement voltage  apply to pvg*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgRotBasktCtClkwiseTurtPost / 100;	/* consign min up movement voltage apply to pvg*/

			/* set the param down max*/
			i16ParamDownMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgRotBasktCtClkwiseTuretPost / 100;

		}
	}
	else if(gDb_tRamEcuOutputsC1.boEvUpIncliBasketActivation == TRUE)
	{

		/* consign fixe*/
		gDb_tRamGeneralC1.i16PvgTorConsigneCommand = 10000;

		/* check if offrail radio control mode is active*/
		if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_RADIO)
		{
			/* affect ramp ratio to pvg tor*/
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[0] = gDb_tNvParametersC1.au16UpInclinBasketRampRatioRadio[0];
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[1] = gDb_tNvParametersC1.au16UpInclinBasketRampRatioRadio[1];
			/* Range command Pvg in mV*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgUpIncliBasketRadioPost / 100; 	/* consign max Up movement voltage  apply to pvg*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgUpIncliBasketRadioPost / 100;	/* consign min up movement voltage apply to pvg*/

			/* set the param up max*/
			i16ParamUpMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgUpIncliBasketRadioPost / 100;

		}
		/* check if rail nacelle mode is active*/
		else if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_NACELLE)
		{
			/* affect ramp ratio to pvg tor*/
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[0] = gDb_tNvParametersC1.au16UpInclinBasketRampRatioNacelle[0];
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[1] = gDb_tNvParametersC1.au16UpInclinBasketRampRatioNacelle[1];
			/* Range command Pvg in mV*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgUpIncliBasketNacellePost / 100;/* consign max Up movement voltage  apply to pvg*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgUpIncliBasketNacellePost / 100;/* consign min up movement voltage apply to pvg*/

			/* set the param up max*/
			i16ParamUpMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgUpIncliBasketNacellePost / 100;

		}
		/* check if turret mode is active*/
		else if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_TURRET)
		{
			/* affect ramp ratio to pvg tor*/
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[0] = gDb_tNvParametersC1.au16UpInclinBasketRampRatioTurret[0];
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[1] = gDb_tNvParametersC1.au16UpInclinBasketRampRatioTurret[1];
			/* Range command Pvg in mV*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgUpIncliBasketTurretPost / 100;/* consign max Up movement voltage  apply to pvg*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgUpIncliBasketTurretPost / 100;/* consign min up movement voltage apply to pvg*/

			/* set the param up max*/
			i16ParamUpMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgUpIncliBasketTurretPost / 100;

		}
	}
	else if(gDb_tRamEcuOutputsC1.boEvDownIncliBasketActivation == TRUE)
	{

		/* consign fixe*/
		gDb_tRamGeneralC1.i16PvgTorConsigneCommand = -10000;

		/* check if offrail radio control mode is active*/
		if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_RADIO)
		{
			/* affect ramp ratio to pvg tor*/
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[2] = gDb_tNvParametersC1.au16DownInclinBasketRampRatioRadio[0];
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[3] = gDb_tNvParametersC1.au16DownInclinBasketRampRatioRadio[1];

			/* Range command Pvg in mV*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgDownIncliBasketRadioPost / 100; 	/* consign max down movement voltage  apply to pvg*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgDownIncliBasketRadioPost / 100;	/* consign min down movement voltage apply to pvg*/


			/* set the param down max*/
			i16ParamDownMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgDownIncliBasketRadioPost / 100;

		}
		/* check if rail nacelle mode is active*/
		else if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_NACELLE)
		{
			/* affect ramp ratio to pvg tor*/
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[2] = gDb_tNvParametersC1.au16DownInclinBasketRampRatioNacelle[0];
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[3] = gDb_tNvParametersC1.au16DownInclinBasketRampRatioNacelle[1];

			/* Range command Pvg in mV*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgDownIncliBasketNacellePost / 100; /* consign max down movement voltage  apply to pvg*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgDownIncliBasketNacellePost / 100;	/* consign min down movement voltage apply to pvg*/

			/* set the param down max*/
			i16ParamDownMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgDownIncliBasketNacellePost / 100;

		}
		/* check if turret mode is active*/
		else if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_TURRET)
		{
			/* affect ramp ratio to pvg tor*/
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[2] = gDb_tNvParametersC1.au16DownInclinBasketRampRatioTurret[0];
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[3] = gDb_tNvParametersC1.au16DownInclinBasketRampRatioTurret[1];

			/* Range command Pvg in mV*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgDownIncliBasketTurretPost / 100; 	/* consign max down movement voltage  apply to pvg*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgDownIncliBasketTurretPost / 100;	/* consign min down movement voltage apply to pvg*/

			/* set the param down max*/
			i16ParamDownMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgDownIncliBasketTurretPost / 100;

		}
	}
	else if(gDb_tRamEcuOutputsC1.boEvUpPendularActivation == TRUE)
	{
		/* consign fixe*/
		gDb_tRamGeneralC1.i16PvgTorConsigneCommand = 10000;

		/* check if offrail radio control mode is active*/
		if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_RADIO)
		{
			/* affect ramp ratio to pvg tor*/
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[0] = gDb_tNvParametersC1.au16UpPendularRampRatioRadio[0];
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[1] = gDb_tNvParametersC1.au16UpPendularRampRatioRadio[1];
			/* Range command Pvg in mV*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgUpPendularRadioPost / 100; /* consign max Up movement voltage  apply to pvg*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgUpPendularRadioPost / 100;	/* consign min up movement voltage apply to pvg*/

			/* set the param up max*/
			i16ParamUpMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgUpPendularRadioPost / 100;

		}
		/* check if rail nacelle mode is active*/
		else if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_NACELLE)
		{
			/* affect ramp ratio to pvg tor*/
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[0] = gDb_tNvParametersC1.au16UpPendularRampRatioNacelle[0];
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[1] = gDb_tNvParametersC1.au16UpPendularRampRatioNacelle[1];
			/* Range command Pvg in mV*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgUpPendularNacellePost / 100;/* consign max Up movement voltage  apply to pvg*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgUpPendularNacellePost / 100;/* consign min up movement voltage apply to pvg*/

			/* set the param up max*/
			i16ParamUpMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgUpPendularNacellePost / 100;

		}
		/* check if turret mode is active*/
		else if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_TURRET)
		{
			/* affect ramp ratio to pvg tor*/
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[0] = gDb_tNvParametersC1.au16UpPendularRampRatioTurret[0];
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[1] = gDb_tNvParametersC1.au16UpPendularRampRatioTurret[1];
			/* Range command Pvg in mV*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgUpPendularTurretPost / 100; 	/* consign max Up movement voltage  apply to pvg*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgUpPendularTurretPost / 100;	/* consign min up movement voltage apply to pvg*/

			/* set the param up max*/
			i16ParamUpMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgUpPendularTurretPost / 100;

		}
	}
	else if(gDb_tRamEcuOutputsC1.boEvDownPendularActivation == TRUE)
	{

		/* consign fixe*/
		gDb_tRamGeneralC1.i16PvgTorConsigneCommand = -10000;

		/* check if offrail radio control mode is active*/
		if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_RADIO)
		{
			/* affect ramp ratio to pvg tor*/
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[2] = gDb_tNvParametersC1.au16DownPendularRampRatioRadio[0];
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[3] = gDb_tNvParametersC1.au16DownPendularRampRatioRadio[1];

			/* Range command Pvg in mV*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgDownPendularRadioPost / 100; 	/* consign max down movement voltage  apply to pvg*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgDownPendularRadioPost / 100;	/* consign min down movement voltage apply to pvg*/

			/* set the param down max*/
			i16ParamDownMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgDownPendularRadioPost / 100;

		}
		/* check if rail nacelle mode is active*/
		else if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_NACELLE)
		{
			/* affect ramp ratio to pvg tor*/
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[2] = gDb_tNvParametersC1.au16DownPendularRampRatioNacelle[0];
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[3] = gDb_tNvParametersC1.au16DownPendularRampRatioNacelle[1];
			/* Range command Pvg in mV*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgDownPendularNacellePost / 100; /* consign max down movement voltage  apply to pvg*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgDownPendularNacellePost / 100;	/* consign min down movement voltage apply to pvg*/

			/* set the param down max*/
			i16ParamDownMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgDownPendularNacellePost / 100;

		}
		/* check if turret mode is active*/
		else if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_TURRET)
		{
			/* affect ramp ratio to pvg tor*/
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[2] = gDb_tNvParametersC1.au16DownPendularRampRatioTurret[0];
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[3] = gDb_tNvParametersC1.au16DownPendularRampRatioTurret[1];
			/* Range command Pvg in mV*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgDownPendularTurretPost / 100; 	/* consign max down movement voltage  apply to pvg*/
			gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgDownPendularTurretPost / 100;	/* consign min down movement voltage apply to pvg*/

			/* set the param down max*/
			i16ParamDownMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgDownPendularTurretPost / 100;

		}
	}
	else if(gDb_tRamEcuOutputsC1.boEvRotTurretClockwiseActivation== TRUE)
	{
		/* check the mode*/
		if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost ==  GE_POST_RADIO)
		{
			/* consign fixe*/
			gDb_tRamGeneralC1.i16PvgTorConsigneCommand = 10000;

			/* check if rotation frame counter clock wise button is pushed because of hydraulic assembly*/
			if(gDb_tRamRcvRadioCmdC1.boRotFrameCtClkwiseButton == TRUE)
			{
				/* affect ramp ratio for frame rotation clock !!!*/
				gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[0] = gDb_tNvParametersC1.au16RotFrameCtClkwiseRampRatio[0];
				gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[1] = gDb_tNvParametersC1.au16RotFrameCtClkwiseRampRatio[1];
				/* affect frame rotation counter clock for clowkise input because of hydraulic assembly*/
				gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgRotFrameCtClkwise / 100; 	/* consign max movement voltage  apply to pvg*/
				gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgRotFrameCtClkwise / 100;	/* consign min movement voltage apply to pvg*/

				/* set the param up max*/
				i16ParamUpMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgRotFrameCtClkwise / 100;

			}
			else
			{
				/* affect ramp ratio to pvg tor*/
				gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[0] = gDb_tNvParametersC1.au16RotTurretClkwiseRampRatioRadio[0];
				gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[1] = gDb_tNvParametersC1.au16RotTurretClkwiseRampRatioRadio[1];

				/* check if reduce speed by ALO Mode of rotation clockwise or reduce speed by movement end stop*/
				if((gDb_tRamEcuC1RcvFromC0.boReduceSpeedRotTurretClockwise == TRUE || gDb_tRamMvtEndStopC1.boReduceSpeedRotTurretClockwise == TRUE || gDb_tRamAutoStopC1.boReduceSpeedRotTurretClockwise == TRUE)
				&& gDb_tRamEcuOutputsC1.boEvCrawlerOnlyCommand == FALSE
				)
				{
					/* Range command Pvg in mV*/
					gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16RotTurretClockSlowSpeedRedAlo / 1000; 	/* consign max movement voltage  apply to pvg*/
					gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MinPvgRotTurretClkwiseRadioPost / 1000;	/* consign min movement voltage apply to pvg*/
				}
				/* check if telescope is outside then apply slow speed on arm*/
				else if(gDb_tRamEcuInputsC1.eEntryTelescopeFdcSensorState != GE_DI_ON)
				{
					/* Range command Pvg in mV*/
					gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16SlowSpeedRotTurretClokTelecOut / 1000; 	/* consign max movement voltage  apply to pvg*/
					gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MinPvgRotTurretClkwiseRadioPost / 1000;	/* consign min movement voltage apply to pvg*/
				}
				else
				{
					/* Range command Pvg in mV*/
					gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MaxPvgRotTurretClkwiseRadioPost / 1000; /* consign max movement voltage  apply to pvg*/
					gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MinPvgRotTurretClkwiseRadioPost / 1000;	/* consign min movement voltage apply to pvg*/
				}

				/* set the param up max*/
				i16ParamUpMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MaxPvgRotTurretClkwiseRadioPost / 1000;

		}
		}
		else if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost ==   GE_POST_NACELLE)
		{
			/* consign according to joystick turret on nacelle post*/
			gDb_tRamGeneralC1.i16PvgTorConsigneCommand = gDb_tRamGeneralC1.i16ScalingJoysTurret;

			/* check if reduce speed by ALO Mode of rotation clockwise*/
			if(gDb_tRamEcuC1RcvFromC0.boReduceSpeedRotTurretClockwise == TRUE || gDb_tRamMvtEndStopC1.boReduceSpeedRotTurretClockwise == TRUE || gDb_tRamAutoStopC1.boReduceSpeedRotTurretClockwise == TRUE)
			{
				/* Range command Pvg in mV*/
				gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16RotTurretClockSlowSpeedRedAlo / 1000; 	/* consign max movement voltage  apply to pvg*/

				gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MinPvgRotTurretClkwiseNacelPost / 1000;	/* consign min movement voltage apply to pvg*/

			}
			/* check if telescope is outside then apply slow speed on arm*/
			else if(gDb_tRamEcuInputsC1.eEntryTelescopeFdcSensorState != GE_DI_ON)
			{
				/*Range command Pvg in mV*/
				gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16SlowSpeedRotTurretClokTelecOut / 1000; 	/* consign max movement voltage  apply to pvg*/

				gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MinPvgRotTurretClkwiseNacelPost / 1000;	/* consign min movement voltage apply to pvg*/

			}
			else
			{
				/*Range command Pvg in mV*/
				gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MaxPvgRotTurretClkwiseNacelPost / 1000; /* consign max movement voltage  apply to pvg*/
				gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MinPvgRotTurretClkwiseNacelPost / 1000;	/* consign min movement voltage apply to pvg*/
			}

			/* affect ramp ratio to pvg tor*/
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[0] = gDb_tNvParametersC1.au16RotTurretClkwiseRampRatioNacelle[0];
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[1] = gDb_tNvParametersC1.au16RotTurretClkwiseRampRatioNacelle[1];

			/* set the param up max*/
			i16ParamUpMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MaxPvgRotTurretClkwiseNacelPost / 1000;

		}
		else if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_TURRET )
		{
			/* consign fixe*/
			gDb_tRamGeneralC1.i16PvgTorConsigneCommand = 10000;

			/* check if reduce speed by ALO Mode of rotation clockwise*/
			if(gDb_tRamEcuC1RcvFromC0.boReduceSpeedRotTurretClockwise == TRUE || gDb_tRamMvtEndStopC1.boReduceSpeedRotTurretClockwise == TRUE || gDb_tRamAutoStopC1.boReduceSpeedRotTurretClockwise == TRUE)
			{
				/* Range command Pvg in mV*/
				gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16RotTurretClockSlowSpeedRedAlo / 1000; 	/* consign max movement voltage  apply to pvg*/

				gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MinPvgRotTurretClkwiseTurretPost / 1000;	/* consign min movement voltage apply to pvg*/

			}
			/* check if telescope is outside then apply slow speed on arm*/
			else if(gDb_tRamEcuInputsC1.eEntryTelescopeFdcSensorState != GE_DI_ON)
			{
				/* Range command Pvg in mV*/
				gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16SlowSpeedRotTurretClokTelecOut / 1000; 	/* consign max movement voltage  apply to pvg*/

				gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MinPvgRotTurretClkwiseTurretPost / 1000;/* consign min movement voltage apply to pvg*/

			}
			else
			{
				/* Range command Pvg in mV*/
				gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MaxPvgRotTurretClkwiseTurretPost / 1000; /* consign max movement voltage  apply to pvg*/
				gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MinPvgRotTurretClkwiseTurretPost / 1000; /* consign min movement voltage apply to pvg*/
			}

			/* affect ramp ratio to pvg tor*/
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[0] = gDb_tNvParametersC1.au16RotTurretClkwiseRampRatioTurret[0];
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[1] = gDb_tNvParametersC1.au16RotTurretClkwiseRampRatioTurret[1];

			/* set the param up max*/
			i16ParamUpMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MaxPvgRotTurretClkwiseTurretPost / 1000;

		}
	}
	else if(gDb_tRamEcuOutputsC1.boEvRotTurretCtClockwiseActivation == TRUE)
	{
		/* check the mode*/
		if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost ==  GE_POST_RADIO)
		{
			/* consign fixe*/
			gDb_tRamGeneralC1.i16PvgTorConsigneCommand = -10000;

			/* check if rotation frame counter clock wise button is pushed*/
			if(gDb_tRamRcvRadioCmdC1.boRotFrameClkwiseButton == TRUE)
			{
				/* affect frame rotation clockwise for counter clowkise input because of hydraulic assembly*/
				gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgRotFrameClkwise / 100; /*consign max movement voltage  apply to pvg*/
				gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgRotFrameClkwise / 100;	/*consign min movement voltage apply to pvg*/

				/* affect ramp ratio for frame rotation counter clock*/
				gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[2] = gDb_tNvParametersC1.au16RotFrameClkwiseRampRatio[0];
				gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[3] = gDb_tNvParametersC1.au16RotFrameClkwiseRampRatio[1];

				/* set the param down max*/
				i16ParamDownMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgRotFrameClkwise / 100;

			}
			else /* rotation turret*/
			{
				/* check if reduce speed by ALO Mode of rotation clockwise or movement end stop*/
				if((gDb_tRamEcuC1RcvFromC0.boReduceSpeedRotTurretCounterClock == TRUE || gDb_tRamMvtEndStopC1.boReduceSpeedRotTurretCounterClock == TRUE || gDb_tRamAutoStopC1.boReduceSpeedRotTurretCounterClock == TRUE)
				&& gDb_tRamEcuOutputsC1.boEvCrawlerOnlyCommand == FALSE

				)
				{
					/* Range command Pvg in mV*/
					gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16RotTurretCtClockSlowSpeedRedAlo / 1000; 	/* consign max movement voltage  apply to pvg*/
					gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MinPvgRotTuretCtClkwseRadioPost / 1000;	/* consign min movement voltage apply to pvg*/
				}
				/* check if telescope is outside then apply slow speed on arm*/
				else if(gDb_tRamEcuInputsC1.eEntryTelescopeFdcSensorState != GE_DI_ON)
				{
					/* Range command Pvg in mV*/
					gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16SlowSpeedRotTurretCtClokTelecOut / 1000; 	/* consign max movement voltage  apply to pvg*/
					gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MinPvgRotTuretCtClkwseRadioPost / 1000;	/* consign min movement voltage apply to pvg*/

				}
				else
				{
					/* Range command Pvg in mV*/
					gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MaxPvgRotTurretCtClkwseRadioPost / 1000; 	/* consign max movement voltage  apply to pvg*/
					gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MinPvgRotTuretCtClkwseRadioPost / 1000;	/* consign min movement voltage apply to pvg*/
				}


				/* affect ramp ratio to pvg tor*/
				gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[2] = gDb_tNvParametersC1.au16RotTurretCtClkwiseRampRatioRadio[0];
				gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[3] = gDb_tNvParametersC1.au16RotTurretCtClkwiseRampRatioRadio[1];

				/* set the param down max*/
				i16ParamDownMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MaxPvgRotTurretCtClkwseRadioPost / 1000;

			}
		}
		else if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost ==   GE_POST_NACELLE)
		{
			/* consign according to joystick turret on nacelle post*/
			gDb_tRamGeneralC1.i16PvgTorConsigneCommand = gDb_tRamGeneralC1.i16ScalingJoysTurret;

			/* check if reduce speed by ALO Mode of rotation clockwise*/
			if(gDb_tRamEcuC1RcvFromC0.boReduceSpeedRotTurretCounterClock == TRUE || gDb_tRamMvtEndStopC1.boReduceSpeedRotTurretCounterClock == TRUE || gDb_tRamAutoStopC1.boReduceSpeedRotTurretCounterClock == TRUE)
			{
				/* Range command Pvg in mV*/
				gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16RotTurretCtClockSlowSpeedRedAlo / 1000; 	/* consign max movement voltage  apply to pvg*/

				gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MinPvgRotTurretCtClkwseNacelPost / 1000;	/* consign min movement voltage apply to pvg*/

			}
			/* check if telescope is outside then apply slow speed on arm*/
			else if(gDb_tRamEcuInputsC1.eEntryTelescopeFdcSensorState != GE_DI_ON)
			{
				/* Range command Pvg in mV*/
				gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16SlowSpeedRotTurretCtClokTelecOut / 1000; 	/* consign max movement voltage  apply to pvg*/

				gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MinPvgRotTurretCtClkwseNacelPost / 1000;	/* consign min movement voltage apply to pvg*/

			}
			else
			{
				/* Range command Pvg in mV*/
				gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MaxPvgRotTurretCtClkwseNacelPost / 1000; 	/* consign max movement voltage  apply to pvg*/
				gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MinPvgRotTurretCtClkwseNacelPost / 1000;	/* consign min movement voltage apply to pvg*/
			}

			/* affect ramp ratio to pvg tor*/
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[2] = gDb_tNvParametersC1.au16RotTurretCtClkwiseRampRatioNacel[0];
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[3] = gDb_tNvParametersC1.au16RotTurretCtClkwiseRampRatioNacel[1];

			/* set the param down max*/
			i16ParamDownMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MaxPvgRotTurretCtClkwseNacelPost / 1000;

		}
		else if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_TURRET)
		{
			/* consign fixe*/
			gDb_tRamGeneralC1.i16PvgTorConsigneCommand = -10000;

			/* check if reduce speed by ALO Mode of rotation clockwise*/
			if(gDb_tRamEcuC1RcvFromC0.boReduceSpeedRotTurretCounterClock == TRUE || gDb_tRamMvtEndStopC1.boReduceSpeedRotTurretCounterClock == TRUE || gDb_tRamAutoStopC1.boReduceSpeedRotTurretCounterClock == TRUE)
			{
				/* Range command Pvg in mV*/
				gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16RotTurretCtClockSlowSpeedRedAlo / 1000; 	/* consign max movement voltage  apply to pvg*/

				gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MinPvgRotTurretCtClkwiseTurtPost / 1000;	/* consign min movement voltage apply to pvg*/

			}
			/* check if telescope is outside then apply slow speed on arm*/
			else if(gDb_tRamEcuInputsC1.eEntryTelescopeFdcSensorState != GE_DI_ON)
			{
				/* Range command Pvg in mV*/
				gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16SlowSpeedRotTurretCtClokTelecOut / 1000; 	/* consign max movement voltage  apply to pvg*/

				gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MinPvgRotTurretCtClkwiseTurtPost / 1000;	/* consign min movement voltage apply to pvg*/

			}
			else
			{
				/* Range command Pvg in mV*/
				gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MaxPvgRotTurretCtClkwseTuretPost / 1000; 	/* consign max movement voltage  apply to pvg*/
				gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MinPvgRotTurretCtClkwiseTurtPost / 1000;	/* consign min movement voltage apply to pvg*/

			}

			/* affect ramp ratio to pvg tor*/
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[2] = gDb_tNvParametersC1.au16RotTurretCtClkwiseRampRatioTuret[0];
			gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[3] = gDb_tNvParametersC1.au16RotTurretCtClkwiseRampRatioTuret[1];

			/* set the param down max*/
			i16ParamDownMax = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16MaxPvgRotTurretCtClkwseTuretPost / 1000;

		}
	}
	else
	{
		/* no mouvement*/
		gDb_tRamGeneralC1.i16PvgTorConsigneCommand = 0;
	}

	TInt16 LocalOutputsPvgCommand = (TInt16)gDb_tRamEcuOutputsC1.u16PvgEvTorCommand;

	vPropVoltPvgFunctionTOR(gDb_tRamGeneralC1.i16PvgTorConsigneCommand,TRUE,TRUE,
						&tPvgEvTorRamp,gDb_tNvCalibrationC1.au16PvgEvTorRampRatio,gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue,
						i16ParamUpMax,i16ParamDownMax,&LocalOutputsPvgCommand,&gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand,
						&i16SetPointPvgEvTorAfterRamp);

	gDb_tRamEcuOutputsC1.u16PvgEvTorCommand = (TUint16)LocalOutputsPvgCommand;

	if(gDb_tRamGeneralC1.boBypassTestCommand == TRUE)
	{
		u16PvgEvTorCommandIO = 5500; //AVANT 5000
		boSupplyPvgPropEvTorCommandIO = TRUE;
	}
	else
	{
		u16PvgEvTorCommandIO = gDb_tRamEcuOutputsC1.u16PvgEvTorCommand;
		boSupplyPvgPropEvTorCommandIO = gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand;
	}
}
