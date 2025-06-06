//==================================================================================================
//! @file ArrowArmFunc.c
//! @brief Control Arrow arm function
//! @see Target for ...
//! @section app
//! @subsection
//! @author Christian Klein (CK)
//! @created 13.10.2018 HYDAC/CK
//! @history: #- CK 13.10.2018 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "ArrowArmFunc.h"

//-----------------------------------------------------------------------------------------------------
//! @brief Control arrow arm function
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 13.10.2018 HYDAC/CK
//!
//! @change  02.07.2019 HYDAC/CK   	change function i16ProportionalFunction2 to vPropVoltPvgFunction
//! @change  08.07.2019 HYDAC/CK   	add variable i16JoyArrowScalingAfterRamp for vPropVoltPvgFunction
//!
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vArrowArmControl(TVoid)
{
	/* local variable*/
	static TInt16 aiVoltageRangeArrowPvg[5];
	aiVoltageRangeArrowPvg[0] = gDb_tRamGeneralC1.u16EcuVoltage / 2;
	static TUint16 auArmArrowRampRatio[4];
	static TInt16 i16JoyArrowScalingAfterRamp;

	gDb_tRamGeneralC1.i16ScalingJoysArrowArm = vCl_3_Pos_Analog_Input((TInt16)gDb_tRam48XsInputsC1.u16ArrowArmAxisJoystick,(TInt16)gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs/4,
												(TInt16)(gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs/2),(TInt16)gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs*3/4,
												-10000,0,10000,gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs*gDb_tNvParametersC1.u8DeadZoneJoystickArrow/100);

	/* check the mode*/
	if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_TURRET)
	{
		/* check if limitation of arrow is detect*/
		if(gDb_tRamLimitWorkEnvelopeC1.boReduceSpeedArrowArmDown == TRUE)
		{
			/* Range command Pvg in mV*/
			aiVoltageRangeArrowPvg[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParamLimitWorkEnvelopeC1.u16ArrowArmLimitSlowSpeedReduc / 1000; 	/* Pos Joys scaling [3] to [1] ,  [1] = consigne max mouvemnt voltage apply to pvg sens pos*/
			aiVoltageRangeArrowPvg[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8PvgUpArrowArmTurretPostCmdPrct / 100; /* Neg Joys scaling [4] to [2], [2] = consigne max mouvemnt voltage apply to pvg sens neg*/
			aiVoltageRangeArrowPvg[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgDownArrowArmCmdPrct / 100;	/* Pos Joys scaling [3] to [1] ,  [3] = consigne min mouvemnt voltage apply to pvg sens pos*/
			aiVoltageRangeArrowPvg[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgUpArrowArmCmdPrct / 100; /* Neg Joys scaling [4] to [2], [4] = consigne min mouvemnt voltage apply to pvg sens neg*/
		}
		else if(gDb_tRamEcuC1RcvFromC0.boReduceSpeedArrowArmDown == TRUE)
		{
			/* Range command Pvg in mV*/
			aiVoltageRangeArrowPvg[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16ArrowArmDownSlowSpeedRedAlo / 1000; 	/* Pos Joys scaling [3] to [1] ,  [1] = consigne max mouvemnt voltage apply to pvg sens pos*/
			aiVoltageRangeArrowPvg[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8PvgUpArrowArmTurretPostCmdPrct / 1000; /* Neg Joys scaling [4] to [2], [2] = consigne max mouvemnt voltage apply to pvg sens neg*/
			aiVoltageRangeArrowPvg[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgDownArrowArmCmdPrct / 100;	/* Pos Joys scaling [3] to [1] ,  [3] = consigne min mouvemnt voltage apply to pvg sens pos*/
			aiVoltageRangeArrowPvg[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgUpArrowArmCmdPrct / 100; /* Neg Joys scaling [4] to [2], [4] = consigne min mouvemnt voltage apply to pvg sens neg*/

		}
		/* check if telescope is outside then apply slow speed on arm*/
		else if(gDb_tRamEcuInputsC1.eEntryTelescopeFdcSensorState != GE_DI_ON)
		{
			/* Range command Pvg in mV*/
			aiVoltageRangeArrowPvg[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16SlowSpeedDownArrowArmTelescOut / 1000; 	/* Pos Joys scaling [3] to [1] ,  [1] = consigne max mouvemnt voltage apply to pvg sens pos*/
			aiVoltageRangeArrowPvg[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16SlowSpeedUpArrowArmTelescOut / 1000; /* Neg Joys scaling [4] to [2], [2] = consigne max mouvemnt voltage apply to pvg sens neg*/
			aiVoltageRangeArrowPvg[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgDownArrowArmCmdPrct / 100;	/* Pos Joys scaling [3] to [1] ,  [3] = consigne min mouvemnt voltage apply to pvg sens pos*/
			aiVoltageRangeArrowPvg[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgUpArrowArmCmdPrct / 100; /* Neg Joys scaling [4] to [2], [4] = consigne min mouvemnt voltage apply to pvg sens neg*/

		}
		else
		{
			/* Range command Pvg in mV*/
			aiVoltageRangeArrowPvg[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8PvgDownArrowArmTurretPostCmdPrct / 100;/* down mouvemnt voltage apply to pvg*/
			aiVoltageRangeArrowPvg[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8PvgUpArrowArmTurretPostCmdPrct / 100;/* Up mouvement voltage  apply to pvg*/
			aiVoltageRangeArrowPvg[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgDownArrowArmCmdPrct / 100;/* consigne min up mouvement voltage apply to pvg*/
			aiVoltageRangeArrowPvg[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgUpArrowArmCmdPrct / 100; /* consigne min Down mouvement voltage apply to pvg*/
		}

		/* Check if arrow arm move up is pushed on evision4.3*/
		if(gDb_tRamEvision4C1.bogArrow_Move_Up == TRUE && gDb_tRamEvision4C1.bogArrow_Move_Down == FALSE)
		{
			/* Consign fix*/
			gDb_tRamGeneralC1.i16PvgArrowArmConsigne = -10000;
		}
		/* Check if delta arm down is pushed on evision4.3*/
		else if(gDb_tRamEvision4C1.bogArrow_Move_Up == FALSE && gDb_tRamEvision4C1.bogArrow_Move_Down == TRUE)
		{
			/* Consign fix*/
			gDb_tRamGeneralC1.i16PvgArrowArmConsigne = 10000;
		}
		else
		{
			/*no movement*/
			gDb_tRamGeneralC1.i16PvgArrowArmConsigne = 0;
		}

		/* apply ramp of turret post*/
		auArmArrowRampRatio[0] = gDb_tNvCalibrationC1.au16ArmArrowRampRatioTurretPost[0];
		auArmArrowRampRatio[1] = gDb_tNvCalibrationC1.au16ArmArrowRampRatioTurretPost[1];
		auArmArrowRampRatio[2] = gDb_tNvCalibrationC1.au16ArmArrowRampRatioTurretPost[2];
		auArmArrowRampRatio[3] = gDb_tNvCalibrationC1.au16ArmArrowRampRatioTurretPost[3];
	}
	else if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost  == GE_POST_NACELLE)
	{
		/* affect consigne by output scaling joystick*/
		gDb_tRamGeneralC1.i16PvgArrowArmConsigne = gDb_tRamGeneralC1.i16ScalingJoysArrowArm;

		/* check if limitation of arrow is detect*/
		if(gDb_tRamLimitWorkEnvelopeC1.boReduceSpeedArrowArmDown == TRUE)
		{
			/* Range command Pvg in mV*/
			aiVoltageRangeArrowPvg[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParamLimitWorkEnvelopeC1.u16ArrowArmLimitSlowSpeedReduc / 1000; 	/* Pos Joys scaling [3] to [1] ,  [1] = consigne max mouvemnt voltage apply to pvg sens pos*/
			aiVoltageRangeArrowPvg[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgUpArrowArmCmdPrct / 100; /* Neg Joys scaling [4] to [2], [2] = consigne max mouvemnt voltage apply to pvg sens neg*/
			aiVoltageRangeArrowPvg[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgDownArrowArmCmdPrct / 100;/* Pos Joys scaling [3] to [1] ,  [3] = consigne min mouvemnt voltage apply to pvg sens pos*/
			aiVoltageRangeArrowPvg[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgUpArrowArmCmdPrct / 100; /* Neg Joys scaling [4] to [2], [4] = consigne min mouvemnt voltage apply to pvg sens neg*/
		}
		else if(gDb_tRamEcuC1RcvFromC0.boReduceSpeedArrowArmDown == TRUE)
		{//N' EST PAS UTILISE CAR NE PASSE JAMAIS A UN DANS LE SOFT
			/* Range command Pvg in mV*/
			aiVoltageRangeArrowPvg[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16ArrowArmDownSlowSpeedRedAlo / 1000;/* Pos Joys scaling [3] to [1] ,  [1] = consigne max mouvemnt voltage apply to pvg sens pos*/
			aiVoltageRangeArrowPvg[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgUpArrowArmCmdPrct / 100; /* Neg Joys scaling [4] to [2], [2] = consigne max mouvemnt voltage apply to pvg sens neg*/
			aiVoltageRangeArrowPvg[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgDownArrowArmCmdPrct / 100;/* Pos Joys scaling [3] to [1] ,  [3] = consigne min mouvemnt voltage apply to pvg sens pos*/
			aiVoltageRangeArrowPvg[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgUpArrowArmCmdPrct / 100; /* Neg Joys scaling [4] to [2], [4] = consigne min mouvemnt voltage apply to pvg sens neg*/
		}
		else if (gDb_tRamMvtEndStopC1.boReduceSpeedArrowArmDown ==TRUE)
		{
			aiVoltageRangeArrowPvg[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParamMvtEndStopC1.u16ArrowArmSlowMvtDownEndStop / 1000; /* add new parameter*/
			aiVoltageRangeArrowPvg[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgUpArrowArmCmdPrct / 100;	/* Neg Joys scaling [4] to [2], [2] = consigne max mouvemnt voltage apply to pvg sens neg*/
			aiVoltageRangeArrowPvg[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgDownArrowArmCmdPrct / 100;	/* Pos Joys scaling [3] to [1] ,  [3] = consigne min mouvemnt voltage apply to pvg sens pos*/
			aiVoltageRangeArrowPvg[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgUpArrowArmCmdPrct / 100; 	/* Neg Joys scaling [4] to [2], [4] = consigne min mouvemnt voltage apply to pvg sens neg*/
		}
		else if (gDb_tRamMvtEndStopC1.boReduceSpeedArrowArmUp == TRUE)
		{
			aiVoltageRangeArrowPvg[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgDownArrowArmCmdPrct / 100;
			aiVoltageRangeArrowPvg[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParamMvtEndStopC1.u16ArrowArmSlowMvtUpEndStop / 1000;	/* Neg Joys scaling [4] to [2], [2] = consigne max mouvemnt voltage apply to pvg sens neg*/
			aiVoltageRangeArrowPvg[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgDownArrowArmCmdPrct / 100;		/* Pos Joys scaling [3] to [1] ,  [3] = consigne min mouvemnt voltage apply to pvg sens pos*/
			aiVoltageRangeArrowPvg[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgUpArrowArmCmdPrct / 100; 		/* Neg Joys scaling [4] to [2], [4] = consigne min mouvemnt voltage apply to pvg sens neg*/
		}
		/* check if telescope is outside then apply slow speed on arm*/
		else if(gDb_tRamEcuInputsC1.eEntryTelescopeFdcSensorState != GE_DI_ON)
		{
			/* Range command Pvg in mV*/
			aiVoltageRangeArrowPvg[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16SlowSpeedDownArrowArmTelescOut / 1000;/* Pos Joys scaling [3] to [1] ,  [1] = consigne max mouvemnt voltage apply to pvg sens pos*/
			aiVoltageRangeArrowPvg[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u16SlowSpeedUpArrowArmTelescOut / 1000;/* Neg Joys scaling [4] to [2], [2] = consigne max mouvemnt voltage apply to pvg sens neg*/
			aiVoltageRangeArrowPvg[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgDownArrowArmCmdPrct / 100;/* Pos Joys scaling [3] to [1] ,  [3] = consigne min mouvemnt voltage apply to pvg sens pos*/
			aiVoltageRangeArrowPvg[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgUpArrowArmCmdPrct / 100; /* Neg Joys scaling [4] to [2], [4] = consigne min mouvemnt voltage apply to pvg sens neg*/

		}
		else
		{
			/* Range command Pvg in mV*/
			aiVoltageRangeArrowPvg[1] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgDownArrowArmCmdPrct / 100; /* Pos Joys scaling [3] to [1] ,  [1] = consigne max mouvemnt voltage apply to pvg sens pos*/
			aiVoltageRangeArrowPvg[2] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgUpArrowArmCmdPrct / 100; /* Neg Joys scaling [4] to [2], [2] = consigne max mouvemnt voltage apply to pvg sens neg*/
			aiVoltageRangeArrowPvg[3] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgDownArrowArmCmdPrct / 100;/* Pos Joys scaling [3] to [1] ,  [3] = consigne min mouvemnt voltage apply to pvg sens pos*/
			aiVoltageRangeArrowPvg[4] = gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MinPvgUpArrowArmCmdPrct / 100; /* Neg Joys scaling [4] to [2], [4] = consigne min mouvemnt voltage apply to pvg sens neg*/
		}

		/* apply ramp of nacelle post*/
		auArmArrowRampRatio[0] = gDb_tNvCalibrationC1.au16ArmArrowRampRatioNacellePost[0];
		auArmArrowRampRatio[1] = gDb_tNvCalibrationC1.au16ArmArrowRampRatioNacellePost[1];
		auArmArrowRampRatio[2] = gDb_tNvCalibrationC1.au16ArmArrowRampRatioNacellePost[2];
		auArmArrowRampRatio[3] = gDb_tNvCalibrationC1.au16ArmArrowRampRatioNacellePost[3];
	}
	else
	{
		/*no movement*/
		gDb_tRamGeneralC1.i16PvgArrowArmConsigne = 0;
	}

	/*bolocalAutorizeUpArrowArm*/
	static TBoolean bolocalAutorizeUpArrowArm = FALSE;
	if((gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_TURRET
	||(gDb_tRam48XsInputsC1.boDeadManPedal == TRUE && gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_NACELLE && bo_ARU_C1_Actived == FALSE ))
	&&	gDb_tRamLimitMoveC1.boAutorizeUpArrowArm == TRUE
	)
		bolocalAutorizeUpArrowArm = TRUE;
	else
		bolocalAutorizeUpArrowArm = FALSE;

	/*bolocalAutorizeDownArrowArm*/
	static TBoolean bolocalAutorizeDownArrowArm = FALSE;
	if((gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_TURRET
	||(gDb_tRam48XsInputsC1.boDeadManPedal == TRUE && gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_NACELLE && bo_ARU_C1_Actived == FALSE))
	&&	gDb_tRamLimitMoveC1.boAutorizeDownArrowArm == TRUE
	)
		bolocalAutorizeDownArrowArm = TRUE;
	else
		bolocalAutorizeDownArrowArm = FALSE;

	TInt16 LocalOutputsPvgCommand = (TInt16)gDb_tRamEcuOutputsC1.u16PvgArrowArmCommand;

	vPropVoltPvgFunction(gDb_tRamGeneralC1.i16PvgArrowArmConsigne,
						bolocalAutorizeDownArrowArm,bolocalAutorizeUpArrowArm,
						&tArrowArmRamp,auArmArrowRampRatio,aiVoltageRangeArrowPvg,
						gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgDownArrowArmCmdPrct / 100,
						gDb_tRamGeneralC1.u16EcuVoltage * gDb_tNvParametersC1.u8MaxPvgUpArrowArmCmdPrct / 100,
						&LocalOutputsPvgCommand,&gDb_tRamEcuOutputsC1.boSupplyPvgArrowArmCommand,
						&i16JoyArrowScalingAfterRamp);

	gDb_tRamEcuOutputsC1.u16PvgArrowArmCommand = (TUint16)LocalOutputsPvgCommand;


	/* Set flag to control bypass*/
	gDb_tRamGeneralC1.boBypassArmArrow = gDb_tRamEcuOutputsC1.boSupplyPvgArrowArmCommand;
}
