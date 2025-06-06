//==================================================================================================
//! @file TelescopeArmFunc.c
//! @brief Control telescope arm function
//! @see Target for ...
//! @section app
//! @subsection
//! @author Christian Klein (CK)
//! @created 13.10.2018 HYDAC/CK
//! @history: #- CK 13.10.2018 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "TelescopeArmFunc.h"

//-----------------------------------------------------------------------------------------------------
//! @brief Control telecope arm function
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 13.10.2018 HYDAC/CK
//!
//! @change  02.07.2019 HYDAC/CK  	- change function i16ProportionalFunction2 to vPropVoltPvgFunction
//! @change  08.07.2019 HYDAC/CK   	- add variable i16JoyArrowScalingAfterRamp for vPropVoltPvgFunction
//!
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vTelescopeArmControl(TVoid)
{
	/* local variable*/
	static TInt16 aiVoltageRangeTelescopePvg[5];
	aiVoltageRangeTelescopePvg[0] = gDb_tRamGeneralC1.u16EcuVoltage / 2; /* off voltage*/
	static TUint16 auArmTelescopeRampRatio[4];
	static TInt16 i16JoyTelescopeScalingAfterRamp;

	/* scaling joystick*/
	gDb_tRamGeneralC1.i16ScalingJoysTelescopeArm = vCl_3_Pos_Analog_Input((TInt16)gDb_tRam48XsInputsC1.u16TelescopeArmAxisJoysitck,(TInt16)gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs/4,
												(TInt16)(gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs/2),(TInt16)gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs*3/4,
												-10000,0,10000,gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs*gDb_tNvParametersC1.u8DeadZoneJoystickTelescope/100);

	/* check the mode*/
	if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_TURRET)
	{
		/* Range command Pvg in mV*/
		aiVoltageRangeTelescopePvg[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8PvgOutTelescTurretPostCmdPrct / 100; 	/* Pos Joys scaling [3] to [1] ,  [1] = consigne max mouvemnt voltage apply to pvg sens pos*/
		aiVoltageRangeTelescopePvg[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8PvgInTelescTurretPostCmdPrct / 100; 	/* Neg Joys scaling [4] to [2], [2] = consigne max mouvemnt voltage apply to pvg sens neg*/
		aiVoltageRangeTelescopePvg[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgOutTelescopeArmCmdPrct / 100;		/* Pos Joys scaling [3] to [1] ,  [3] = consigne min mouvemnt voltage apply to pvg sens pos*/
		aiVoltageRangeTelescopePvg[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgInTelescopeArmCmdPrct / 100; 		/* Neg Joys scaling [4] to [2], [4] = consigne min mouvemnt voltage apply to pvg sens neg*/

		/* Check if arrow arm move up is pushed on evision4.3*/
		if(gDb_tRamEvision4C1.bogTelescope_Move_In == TRUE && gDb_tRamEvision4C1.bogTelescope_Move_Out == FALSE)
		{
			/* Consign fix*/
			gDb_tRamGeneralC1.i16PvgTelescopeArmConsigne = -10000;
		}
		/* Check if delta arm down is pushed on evision4.3*/
		else if(gDb_tRamEvision4C1.bogTelescope_Move_In == FALSE && gDb_tRamEvision4C1.bogTelescope_Move_Out == TRUE)
		{
			/* Consign fix*/
			gDb_tRamGeneralC1.i16PvgTelescopeArmConsigne = 10000;
		}
		else
		{
			/*no movement*/
			gDb_tRamGeneralC1.i16PvgTelescopeArmConsigne = 0;
		}

		/* apply ramp of turret post*/
		auArmTelescopeRampRatio[0] = gDb_tNvCalibrationC1.au16ArmTelescopeRampRatioTurretPost[0];
		auArmTelescopeRampRatio[1] = gDb_tNvCalibrationC1.au16ArmTelescopeRampRatioTurretPost[1];
		auArmTelescopeRampRatio[2] = gDb_tNvCalibrationC1.au16ArmTelescopeRampRatioTurretPost[2];
		auArmTelescopeRampRatio[3] = gDb_tNvCalibrationC1.au16ArmTelescopeRampRatioTurretPost[3];

	}
	else if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost  == GE_POST_NACELLE)
	{
		/* affect consigne by output scaling joystick*/
		gDb_tRamGeneralC1.i16PvgTelescopeArmConsigne = gDb_tRamGeneralC1.i16ScalingJoysTelescopeArm;

		if (gDb_tRamMvtEndStopC1.boReduceSpeedTelescopFolded == TRUE)
		{
			/* Range command Pvg in mV*/
			aiVoltageRangeTelescopePvg[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgOutTelescopeArmCmdPrct / 100;	 /* Pos Joys scaling [3] to [1] ,  [1] = consigne max mouvemnt voltage apply to pvg sens pos*/
			aiVoltageRangeTelescopePvg[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParamMvtEndStopC1.u16TelescopSlowMvtFoldedEndStop / 1000; 	/* Neg Joys scaling [4] to [2], [2] = consigne max mouvemnt voltage apply to pvg sens neg*/
			aiVoltageRangeTelescopePvg[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgOutTelescopeArmCmdPrct / 100;	/* Pos Joys scaling [3] to [1] ,  [3] = consigne min mouvemnt voltage apply to pvg sens pos*/
			aiVoltageRangeTelescopePvg[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgInTelescopeArmCmdPrct / 100; 	/* Neg Joys scaling [4] to [2], [4] = consigne min mouvemnt voltage apply to pvg sens neg*/
		}
		else
		{
			/* Range command Pvg in mV*/
			aiVoltageRangeTelescopePvg[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgOutTelescopeArmCmdPrct / 100;	 /* Pos Joys scaling [3] to [1] ,  [1] = consigne max mouvemnt voltage apply to pvg sens pos*/
			aiVoltageRangeTelescopePvg[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgInTelescopeArmCmdPrct / 100; 	/* Neg Joys scaling [4] to [2], [2] = consigne max mouvemnt voltage apply to pvg sens neg*/
			aiVoltageRangeTelescopePvg[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgOutTelescopeArmCmdPrct / 100;	/* Pos Joys scaling [3] to [1] ,  [3] = consigne min mouvemnt voltage apply to pvg sens pos*/
			aiVoltageRangeTelescopePvg[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgInTelescopeArmCmdPrct / 100; 	/* Neg Joys scaling [4] to [2], [4] = consigne min mouvemnt voltage apply to pvg sens neg*/
		}

		/* apply ramp of nacelle post*/
		auArmTelescopeRampRatio[0] = gDb_tNvCalibrationC1.au16ArmTelescopeRampRatioNacellePost[0];
		auArmTelescopeRampRatio[1] = gDb_tNvCalibrationC1.au16ArmTelescopeRampRatioNacellePost[1];
		auArmTelescopeRampRatio[2] = gDb_tNvCalibrationC1.au16ArmTelescopeRampRatioNacellePost[2];
		auArmTelescopeRampRatio[3] = gDb_tNvCalibrationC1.au16ArmTelescopeRampRatioNacellePost[3];

	}
	else
	{
		/*no movement*/
		gDb_tRamGeneralC1.i16PvgTelescopeArmConsigne = 0;
	}

	/*bolocalAutorizeInTelescopeArm*/
	static TBoolean bolocalAutorizeInTelescopeArm = FALSE;
	if((gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_TURRET
	||(gDb_tRam48XsInputsC1.boDeadManPedal == TRUE && gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_NACELLE && bo_ARU_C1_Actived == FALSE))
	&&	gDb_tRamLimitMoveC1.boAutorizeInTelescopeArm == TRUE
	)
		bolocalAutorizeInTelescopeArm = TRUE;
	else
		bolocalAutorizeInTelescopeArm = FALSE;

	/*bolocalAutorizeOutTelescopeArm*/
	static TBoolean bolocalAutorizeOutTelescopeArm = FALSE;
	if((gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_TURRET
	||(gDb_tRam48XsInputsC1.boDeadManPedal == TRUE && gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_NACELLE && bo_ARU_C1_Actived == FALSE))
	&&	gDb_tRamLimitMoveC1.boAutorizeOutTelescopeArm == TRUE
	)
		bolocalAutorizeOutTelescopeArm = TRUE;
	else
		bolocalAutorizeOutTelescopeArm = FALSE;

	TInt16 LocalOutputsPvgCommand = (TInt16)gDb_tRamEcuOutputsC1.u16PvgTelescopeArmCommand;

	vPropVoltPvgFunction(gDb_tRamGeneralC1.i16PvgTelescopeArmConsigne,
						bolocalAutorizeOutTelescopeArm,bolocalAutorizeInTelescopeArm,
						&tTelescopeArmRamp,auArmTelescopeRampRatio,aiVoltageRangeTelescopePvg,
						gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgOutTelescopeArmCmdPrct / 100,
						gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgInTelescopeArmCmdPrct / 100,
						&LocalOutputsPvgCommand,&gDb_tRamEcuOutputsC1.boSupplyPvgTelescopeArmCommand,
						&i16JoyTelescopeScalingAfterRamp);

	gDb_tRamEcuOutputsC1.u16PvgTelescopeArmCommand = (TUint16)LocalOutputsPvgCommand;

	/* Set flag to control bypass*/
	gDb_tRamGeneralC1.boBypassArmTelescope = gDb_tRamEcuOutputsC1.boSupplyPvgTelescopeArmCommand ;
}
