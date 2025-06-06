//==================================================================================================
//! @file DeltaArmFunc.c
//! @brief Control delta arm function
//! @see Target for ...
//! @section app
//! @subsection
//! @author Christian Klein (CK)
//! @created 13.10.2018 HYDAC/CK
//! @history: #- CK 13.10.2018 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "DeltaArmFunc.h"

//-----------------------------------------------------------------------------------------------------
//! @brief Control delta arm function
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 13.10.2018 HYDAC/CK
//! @change	 04.02.2019 NEOTEC/FV	- Remove reduce speed in turret mode, add low speed down low sector in nacelle post
//! @change	 05.04.2019 HYDAC/CK	- add new parameter for slow speed down delta in approaching abutment in nacelle post
//! @change  02.07.2019 HYDAC/CK  	- change function i16ProportionalFunction2 to vPropVoltPvgFunction
//! @change  08.07.2019 HYDAC/CK   	add variable i16JoyArrowScalingAfterRamp for vPropVoltPvgFunction
//!
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vDeltaArmControl(TVoid)
{
	/* local variable*/
	static TInt16 aiVoltageRangePvg[5];
	aiVoltageRangePvg[0] = gDb_tRamGeneralC1.u16EcuVoltage / 2;	/* off voltage*/
	static TUint16 auArmDeltaRampRatio[4];
	static TInt16 i16JoyDeltaScalingAfterRamp;

	/* scaling joystick*/
	gDb_tRamGeneralC1.i16ScalingJoysDeltaArm = vCl_3_Pos_Analog_Input((TInt16)gDb_tRam48XsInputsC1.u16DeltaArmAxisJoystick,(TInt16)gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs/4,
												(TInt16)(gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs/2),(TInt16)gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs*3/4,
												-10000,0,10000,gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs*gDb_tNvParametersC1.u8DeadZoneJoystickDeltaArm/100);

	/* check the mode*/
	if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_TURRET)
	{
		/* Range command Pvg in mV*/
		aiVoltageRangePvg[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8PvgDownDeltaArmTurretPostCmdPrct / 100;/* Up mouvemnt voltage apply to pvg*/
		aiVoltageRangePvg[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8PvgUpDeltaArmTurretPostCmdPrct / 100; /* down  mouvement voltage  apply to pvg*/
		aiVoltageRangePvg[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgDownDeltaArmCmdPrct / 100;	/* consigne min up mouvement voltage apply to pvg*/
		aiVoltageRangePvg[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgUpDeltaArmCmdPrct / 100; /* consigne min down mouvement voltage apply to pvg*/

		/* Check if delta arm move up is pushed on evision4*/
		if(gDb_tRamEvision4C1.bogDelta_Arm_Move_Up == TRUE && gDb_tRamEvision4C1.bogDelta_Arm_Move_Down == FALSE)
		{
			/*Consign fix*/
			gDb_tRamGeneralC1.i16PvgDeltaArmConsigne = -10000;

		}
		/* Check if delta arm down is pushed on evision4*/
		else if(gDb_tRamEvision4C1.bogDelta_Arm_Move_Up == FALSE && gDb_tRamEvision4C1.bogDelta_Arm_Move_Down == TRUE)
		{
			/* Consign fix*/
			gDb_tRamGeneralC1.i16PvgDeltaArmConsigne = 10000;
		}
		else
		{
			/*no movement*/
			gDb_tRamGeneralC1.i16PvgDeltaArmConsigne = 0;
		}

		/* apply ramp of turret post*/
		auArmDeltaRampRatio[0] = gDb_tNvCalibrationC1.au16ArmDeltaRampRatioTurretPost[0];
		auArmDeltaRampRatio[1] = gDb_tNvCalibrationC1.au16ArmDeltaRampRatioTurretPost[1];
		auArmDeltaRampRatio[2] = gDb_tNvCalibrationC1.au16ArmDeltaRampRatioTurretPost[2];
		auArmDeltaRampRatio[3] = gDb_tNvCalibrationC1.au16ArmDeltaRampRatioTurretPost[3];

	}
	else if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost  == GE_POST_NACELLE)
	{
		/* affect consigne by output scaling joystick*/
		gDb_tRamGeneralC1.i16PvgDeltaArmConsigne = gDb_tRamGeneralC1.i16ScalingJoysDeltaArm;

		/* check if limitation of delta is detect or when Delta arm is both at abutment*/
		if(gDb_tRamLimitWorkEnvelopeC1.boReduceSpeedDeltaArmUp == TRUE || gDb_tRamMvtEndStopC1.boReduceSpeedDeltaArmUp == TRUE || gDb_tRamMvtEndStopC1.boReduceSpeedDeltaArmDown == TRUE)
		{
			/* Range command Pvg in mV*/
			if (gDb_tRamMvtEndStopC1.boReduceSpeedDeltaArmDown ==TRUE)
			{
				aiVoltageRangePvg[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParamMvtEndStopC1.u16DeltaArmSlowMvtEndStop / 1000; /* add new parameter*/
				aiVoltageRangePvg[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgUpDeltaArmCmdPrct / 100;	/* Neg Joys scaling [4] to [2], [2] = consigne max mouvemnt voltage apply to pvg sens neg*/
				aiVoltageRangePvg[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgDownDeltaArmCmdPrct / 100;	/* Pos Joys scaling [3] to [1] ,  [3] = consigne min mouvemnt voltage apply to pvg sens pos*/
				aiVoltageRangePvg[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgUpDeltaArmCmdPrct / 100; 	/* Neg Joys scaling [4] to [2], [4] = consigne min mouvemnt voltage apply to pvg sens neg*/
			}
			else
			{
				aiVoltageRangePvg[1] = gDb_tRamGeneralC1.u16EcuVoltage *gDb_tNvParametersC1.u8MaxPvgDownDeltaArmCmdPrct / 100;
				aiVoltageRangePvg[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParamLimitWorkEnvelopeC1.u16DeltaArmLimitSlowSpeedReduc / 1000;	/* Neg Joys scaling [4] to [2], [2] = consigne max mouvemnt voltage apply to pvg sens neg*/
				aiVoltageRangePvg[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgDownDeltaArmCmdPrct / 100;		/* Pos Joys scaling [3] to [1] ,  [3] = consigne min mouvemnt voltage apply to pvg sens pos*/
				aiVoltageRangePvg[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgUpDeltaArmCmdPrct / 100; 		/* Neg Joys scaling [4] to [2], [4] = consigne min mouvemnt voltage apply to pvg sens neg*/
			}
		}
		/* check if telescope is outside then apply slow speed on arm*/
		else if(gDb_tRamEcuInputsC1.eEntryTelescopeFdcSensorState != GE_DI_ON)
		{
			/*Range command Pvg in mV*/
			aiVoltageRangePvg[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16SlowSpeedDownDeltaArmTelescOut / 1000; 	/* Pos Joys scaling [3] to [1] ,  [1] = consigne max mouvemnt voltage apply to pvg sens pos*/
			aiVoltageRangePvg[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16SlowSpeedUpDeltaArmTelescOut / 1000;	/* Neg Joys scaling [4] to [2], [2] = consigne max mouvemnt voltage apply to pvg sens neg*/
			aiVoltageRangePvg[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgDownDeltaArmCmdPrct / 100;		/* Pos Joys scaling [3] to [1] ,  [3] = consigne min mouvemnt voltage apply to pvg sens pos*/
			aiVoltageRangePvg[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgUpDeltaArmCmdPrct / 100; 		/* Neg Joys scaling [4] to [2], [4] = consigne min mouvemnt voltage apply to pvg sens neg*/

		}
		else
		{
			/*Range command Pvg in mV*/
			aiVoltageRangePvg[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgDownDeltaArmCmdPrct / 100; 	/* Pos Joys scaling [3] to [1] ,  [1] = consigne max mouvemnt voltage apply to pvg sens pos*/
			aiVoltageRangePvg[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgUpDeltaArmCmdPrct / 100; 		/* Neg Joys scaling [4] to [2], [2] = consigne max mouvemnt voltage apply to pvg sens neg*/
			aiVoltageRangePvg[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgDownDeltaArmCmdPrct / 100;		/* Pos Joys scaling [3] to [1] ,  [3] = consigne min mouvemnt voltage apply to pvg sens pos*/
			aiVoltageRangePvg[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgUpDeltaArmCmdPrct / 100; 		/* Neg Joys scaling [4] to [2], [4] = consigne min mouvemnt voltage apply to pvg sens neg*/
		}

		/* apply ramp of nacelle post*/
		auArmDeltaRampRatio[0] = gDb_tNvCalibrationC1.au16ArmDeltaRampRatioNacellePost[0];
		auArmDeltaRampRatio[1] = gDb_tNvCalibrationC1.au16ArmDeltaRampRatioNacellePost[1];
		auArmDeltaRampRatio[2] = gDb_tNvCalibrationC1.au16ArmDeltaRampRatioNacellePost[2];
		auArmDeltaRampRatio[3] = gDb_tNvCalibrationC1.au16ArmDeltaRampRatioNacellePost[3];
	}
	else
	{
		/*no movement*/
		gDb_tRamGeneralC1.i16PvgDeltaArmConsigne = 0;
	}

	/*bolocalAutorizeUpDeltaArm*/
	static TBoolean bolocalAutorizeUpDeltaArm = FALSE;
	if((gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_TURRET
	||(gDb_tRam48XsInputsC1.boDeadManPedal == TRUE && gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_NACELLE && bo_ARU_C1_Actived == FALSE))
	&&	gDb_tRamLimitMoveC1.boAutorizeUpDeltaArm == TRUE
	)
		bolocalAutorizeUpDeltaArm = TRUE;
	else
		bolocalAutorizeUpDeltaArm = FALSE;

	/*bolocalAutorizeDownDeltaArm*/
	static TBoolean bolocalAutorizeDownDeltaArm = FALSE;
	if((gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_TURRET
	||(gDb_tRam48XsInputsC1.boDeadManPedal == TRUE && gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_NACELLE && bo_ARU_C1_Actived == FALSE))
	&&	gDb_tRamLimitMoveC1.boAutorizeDownDeltaArm == TRUE
	)
		bolocalAutorizeDownDeltaArm = TRUE;
	else
		bolocalAutorizeDownDeltaArm = FALSE;

	TInt16 LocalOutputsPvgCommand = (TInt16)gDb_tRamEcuOutputsC1.u16PvgDeltaArmCommand;

	vPropVoltPvgFunction(gDb_tRamGeneralC1.i16PvgDeltaArmConsigne,
			bolocalAutorizeDownDeltaArm,bolocalAutorizeUpDeltaArm,
			&tDeltaArmRamp,auArmDeltaRampRatio,aiVoltageRangePvg,
			gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgDownDeltaArmCmdPrct / 100,
			gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgUpDeltaArmCmdPrct / 100,
			&LocalOutputsPvgCommand,&gDb_tRamEcuOutputsC1.boSupplyPvgDeltaArmCommand,
			&i16JoyDeltaScalingAfterRamp);

	gDb_tRamEcuOutputsC1.u16PvgDeltaArmCommand = (TUint16)LocalOutputsPvgCommand;

	/* set flag to control bypass*/
	gDb_tRamGeneralC1.boBypassArmDelta = gDb_tRamEcuOutputsC1.boSupplyPvgDeltaArmCommand;
}
