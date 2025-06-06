//==================================================================================================
//! @file CustomLibrary.c
//! @brief Custom Libray
//! @see Target for ...
//! @section app
//! @subsection
//! @author Christian Klein (CK)
//! @created 03.08.2018 HYDAC/CK
//! @history: #- CK 03.08.2018 HYDAC/MS interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include <CustomLibrary.h>


//-----------------------------------------------------------------------------------------------------
//! @brief Cl 3 positions analog Input
//!
//! @param[in]	 TInt16		input 		- input Value to be Scaled
//! @param[in]	 TInt16		in_min 		- Value should be > than MinValue. Values < MinValue return MinYVal
//! @param[in]	 TInt16		in_mid 		- Middle x value
//! @param[in]	 TInt16 	in_max		- Value shoud be < than MaxValue. Values > MaxValue return MaxYVal
//! @param[in]	 TInt16 	out_min		- Minimal return value
//! @param[in]	 TInt16 	out_mid		- Middle y value
//! @param[in]	 TInt16 	out_max		- Maximal return value
//! @param[in]	 TUint16 	deadband	- If Value lies within (MidValue - deadband, MidValue + deadband) then return value is MidYValue
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 03.08.2018 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//
//11.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TInt16 vCl_3_Pos_Analog_Input(TInt16 i16Input, TInt16 i16In_min , TInt16 i16In_mid , TInt16 i16In_max, TInt16 i16Out_min ,TInt16 i16Out_mid, TInt16 i16Out_max , TUint16 i16Deadband)
{
	/* local variable*/
	TInt16 i16X_diff;
	TInt16 i16Result;

	i16Input = i16RangeMinMax(i16Input,i16In_min,i16In_max);
	if(i16Input<(i16In_mid - i16Deadband))
	{
		i16X_diff = (i16In_mid-i16Deadband) - i16In_min;
		if(i16X_diff != 0)
		{
			i16Result = ((i16Out_mid - i16Out_min) * (i16Input - i16In_min)) / (i16X_diff) + i16Out_min;
		}
		else
		{
			i16Result = i16Out_mid;
		}
	}
	else if(i16Input >(i16In_mid + i16Deadband))
	{
		i16X_diff = i16In_max - (i16In_mid + i16Deadband);
		if(i16X_diff != 0)
		{
			i16Result = (((i16Out_max - i16Out_mid) * (i16Input - (i16In_mid + i16Deadband))) / (i16X_diff)) + i16Out_mid;
		}
		else
		{
			i16Result = i16Out_mid;
		}
	}
	else
	{
		i16Result = i16Out_mid;
	}

	return i16Result;
}


//-----------------------------------------------------------------------------------------------------
//! @brief control one hydraulic proportional function
//!
//! @param[in] 	i16JoystickScaling 						- joystick scaling
//! @param[in] 	boAutorizeUp 							- autorize to use up function (joystick scaling > 0)
//! @param[in] 	boAutorizeDown 							- autorize to use down function (joystick scaling < 0)
//! @param[in] 	ptRampSignal 							- ramp signal function
//! @param[in] 	auRampRatio[2] 							- ramp ratio increase / decrease
//! @param[in] 	aiCommandRange[5] 						- Command Y0 / max up / max down / min up / min down
//! @param[out]	i16Command								- Command which is return by the function
//! @param[out]	boSupplyPvgCommand						- Command to control supply pvg
//! @param[out]	boActivationEvRotTurretClokwise			- Command to control Ev rotation turret clokwise
//! @param[out]	boActivationEvRotTurretCtClokwise		- Command to control Ev rotation turret counter clokwise
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 15.12.2016 HYDAC/MS
//!
//! @change
//! -# 16.01.2017	MS: autorize boolean variable added
//! -# 01.03.2017	MS: global setpoint changed to two setpoints (delete intermediary variable)
//! -# 01.03.2017	MS: LUT function replaced by interpolation function / ramp ratio and current values added
//! -# 04.09.2018   CK: Adapt fonction , remove setpointUp setpointDown to JoystickScaling , replace return current to Command
//! -# 17.12.2018   CK: Add output supply pvg
//! -# 07.01.2019   CK: Add 2 more command range , to apply consigne min up mouvement and down
//! -# 08.01.2019   CK: Add 2 output Ev rotation clock and counter clockwise
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TInt16 i16ProportionalTurretFunction(TInt16 i16JoystickScaling, TBoolean boAutorizeUp,TBoolean boAutorizeDown,
							   TSigRampAdr* ptRampSignal, TUint16 auRampRatio[2], TInt16 aiCommandRange[5],TBoolean *boSupplyPvg,
							   TBoolean *boActivationEvRotTurretClokwise, TBoolean *boActivationEvRotTurretCtClokwise)
{
	/* local variable declaration*/
	TInt16 		i16Setpoint 			= 0;
	TInt16 		i16SetpointAfterRamp;
	TInt16 		i16Command				= 0;

	/* if autorize up function is TRUE and JoystickScaling up is higher than 0, get setpoint from up value*/
	if (boAutorizeUp == TRUE && i16JoystickScaling > 0)
	{
		i16Setpoint = i16JoystickScaling;
	}
	/* if autorize down function is TRUE and JoystickScaling down is lower than 0, get setpoint from down value*/
	else if (boAutorizeDown == TRUE && i16JoystickScaling < 0)
	{
		i16Setpoint = i16JoystickScaling;
	}

	/* set setpoint as input of the ramp and run the function ramp*/
	i16SetpointAfterRamp = i16SigRampRS2(ptRampSignal, i16Setpoint, auRampRatio[0], auRampRatio[1]);

	/* use linear interpolation function regarding value of setpoint after the ramp,*/
	/* needed cause the Voltage output is not a 2 dots line*/
	if (i16SetpointAfterRamp > 0)
	{
		i16Command = i16CalcLinear2Dots(i16SetpointAfterRamp, 0, (aiCommandRange[3]),
				10000, (aiCommandRange[1]));

		*boSupplyPvg = TRUE;
		*boActivationEvRotTurretClokwise = TRUE;
	}
	else if (i16SetpointAfterRamp < 0)
	{
		i16Command = i16CalcLinear2Dots(i16SetpointAfterRamp, 0, aiCommandRange[4],
				-10000, aiCommandRange[2]);

		*boSupplyPvg = TRUE;
		*boActivationEvRotTurretCtClokwise = TRUE;
	}
	else
	{
		i16Command = aiCommandRange[0];
		*boSupplyPvg = FALSE;
		*boActivationEvRotTurretClokwise = FALSE;
		*boActivationEvRotTurretCtClokwise = FALSE;
	}

	/* return value*/
	return i16Command;
}

//-----------------------------------------------------------------------------------------------------
//! @brief control one hydraulic proportional function
//!
//! @param[in] 	i16JoystickScaling 		- joystick scaling
//! @param[in] 	boAutorizeUp 			- autorize to use up function (joystick scaling > 0)
//! @param[in] 	boAutorizeDown 			- autorize to use down function (joystick scaling < 0)
//! @param[in] 	ptRampSignal 			- ramp signal function
//! @param[in] 	auRampRatio[2] 			- ramp ratio increase / decrease
//! @param[in] 	aiCommandRange[5] 		- Command Y0 / max up / max down / min up / min down
//! @param[out]	i16Command				- Command which is return by the function
//! @param[out]	boSupplyPvgCommand		- Command to control supply pvg
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 15.12.2016 HYDAC/MS
//!
//! @change
//! -# 16.01.2017	MS: autorize boolean variable added
//! -# 01.03.2017	MS: global setpoint changed to two setpoints (delete intermediary variable)
//! -# 01.03.2017	MS: LUT function replaced by interpolation function / ramp ratio and current values added
//! -# 04.09.2018   CK: Adapt fonction , remove setpointUp setpointDown to JoystickScaling , replace return current to Command
//! -# 17.12.2018   CK: Add output supply pvg
//! -# 07.01.2019   CK: Add 2 more command range , to apply consigne min up mouvement and down
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TInt16 i16ProportionalFunction(TInt16 i16JoystickScaling, TBoolean boAutorizeUp,TBoolean boAutorizeDown,
							   TSigRampAdr* ptRampSignal, TUint16 auRampRatio[2], TInt16 aiCommandRange[5],TBoolean *boSupplyPvg)
{
	/* local variable declaration*/
	TInt16 		i16Setpoint 			= 0;
	TInt16 		i16SetpointAfterRamp;
	TInt16 		i16Command				= 0;

	/* if autorize up function is TRUE and JoystickScaling up is higher than 0, get setpoint from up value*/
	if (boAutorizeUp == TRUE && i16JoystickScaling > 0)
	{
		i16Setpoint = i16JoystickScaling;
	}
	/* if autorize down function is TRUE and JoystickScaling down is lower than 0, get setpoint from down value*/
	else if (boAutorizeDown == TRUE && i16JoystickScaling < 0)
	{
		i16Setpoint = i16JoystickScaling;
	}


	/* set setpoint as input of the ramp and run the function ramp*/
	i16SetpointAfterRamp = i16SigRampRS2(ptRampSignal, i16Setpoint, auRampRatio[0], auRampRatio[1]);

	/* use linear interpolation function regarding value of setpoint after the ramp,*/
	/* needed cause the Voltage output is not a 2 dots line*/
	if (i16SetpointAfterRamp > 0)
	{
		i16Command = i16CalcLinear2Dots(i16SetpointAfterRamp, 0, (aiCommandRange[3]),
				10000, (aiCommandRange[1]));

		*boSupplyPvg = TRUE;
	}
	else if (i16SetpointAfterRamp < 0)
	{
		i16Command = i16CalcLinear2Dots(i16SetpointAfterRamp, 0, aiCommandRange[4],
				-10000, aiCommandRange[2]);

		*boSupplyPvg = TRUE;
	}
	else
	{
		i16Command = aiCommandRange[0];

		*boSupplyPvg = FALSE;
	}

	/* return value*/
	return i16Command;
}

//-----------------------------------------------------------------------------------------------------
//! @brief control one hydraulic proportional function2
//!
//! @param[in] 	i16JoystickScaling 		- joystick scaling
//! @param[in] 	boAutorizeUp 			- autorize to use up function (joystick scaling > 0)
//! @param[in] 	boAutorizeDown 			- autorize to use down function (joystick scaling < 0)
//! @param[in] 	ptRampSignal 			- ramp signal function
//! @param[in] 	auRampRatio[4] 			- ramp [0] TPosIncr , ramp [1] TPosDecr , ramp [2] TNegIncr , ramp [3] TNegDecr
//! @param[in] 	aiCommandRange[5] 		- Command Y0 / max up / max down / min up / min down
//! @param[out]	i16Command				- Command which is return by the function
//! @param[out]	boSupplyPvgCommand		- Command to control supply pvg
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 15.12.2016 HYDAC/MS
//!
//! @change
//! -# 16.01.2017	MS: autorize boolean variable added
//! -# 01.03.2017	MS: global setpoint changed to two setpoints (delete intermediary variable)
//! -# 01.03.2017	MS: LUT function replaced by interpolation function / ramp ratio and current values added
//! -# 04.09.2018   CK: Adapt fonction , remove setpointUp setpointDown to JoystickScaling , replace return current to Command
//! -# 17.12.2018   CK: Add output supply pvg
//! -# 07.01.2019   CK: Add 2 more command range , to apply consigne min up mouvement and down
//! -# 31.01.2019   CK: change signal RampRS2 to RampTS4
//! -# 13.05.2019	CK: add u16RampTime = auRampRatio * 2
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TInt16 i16ProportionalFunction2(TInt16 i16JoystickScaling, TBoolean boAutorizeUp,TBoolean boAutorizeDown,
							   TSigRampAdr* ptRampSignal, TUint16 auRampRatio[4], TInt16 aiCommandRange[5],TBoolean *boSupplyPvg)
{
	/* local variable declaration*/
	TInt16 		i16Setpoint 			= 0;
	TInt16 		i16SetpointAfterRamp;
	TInt16 		i16Command				= 0;

	/* if autorize up function is TRUE and JoystickScaling up is higher than 0, get setpoint from up value*/
	if (boAutorizeUp == TRUE && i16JoystickScaling > 0)
	{
		i16Setpoint = i16JoystickScaling;
	}
	/* if autorize down function is TRUE and JoystickScaling down is lower than 0, get setpoint from down value*/
	else if (boAutorizeDown == TRUE && i16JoystickScaling < 0)
	{
		i16Setpoint = i16JoystickScaling;
	}
	else
	{
		i16Setpoint = 0;
	}

	/* double the time of ramp ( -10000 to 10000 range , time is expressed 0 to -10000 or to 10000*/
	if(auRampRatio[0] > (U16_MAX/2))
		auRampRatio[0] = U16_MAX/2;

	if(auRampRatio[1] > (U16_MAX/2))
		auRampRatio[1] = U16_MAX/2;

	if(auRampRatio[2] > (U16_MAX/2))
		auRampRatio[2] = U16_MAX/2;

	if(auRampRatio[3] > (U16_MAX/2))
		auRampRatio[3] = U16_MAX/2;

	/* if sign of last ramp output is different than current setpoint*/
	if ((i16Setpoint < 0 && i16SigRampGetVal(ptRampSignal) > 0) || (i16Setpoint > 0 && i16SigRampGetVal(ptRampSignal) < 0))
		i16Setpoint = 0;

	/* set setpoint as input of the ramp and run the function ramp*/
	i16SetpointAfterRamp = i16SigRampTS4(ptRampSignal, i16Setpoint, auRampRatio[0], auRampRatio[1], auRampRatio[2], auRampRatio[3]);

	/* use linear interpolation function regarding value of setpoint after the ramp,*/
	/* needed cause the Voltage output is not a 2 dots line*/
	if (i16SetpointAfterRamp > 0)
	{
		i16Command = i16CalcLinear2Dots(i16SetpointAfterRamp, 0, (aiCommandRange[3]),
				10000, (aiCommandRange[1]));

		*boSupplyPvg = TRUE;
	}
	else if (i16SetpointAfterRamp < 0)
	{
		i16Command = i16CalcLinear2Dots(i16SetpointAfterRamp, 0, aiCommandRange[4],
				-10000, aiCommandRange[2]);

		*boSupplyPvg = TRUE;
	}
	else
	{
		i16Command = aiCommandRange[0];

		*boSupplyPvg = FALSE;
	}

	/* return value*/
	return i16Command;
}

//-----------------------------------------------------------------------------------------------------
//! @brief control one hydraulic proportional function
//!
//! @param[in] 	i16JoystickScaling 				- joystick scaling
//! @param[in] 	boJoystickCentred 				- joystick centred
//! @param[in] 	u16JoystickBrut 				- joystick brut
//! @param[in] 	boAutorizeUp 					- autorize to use up function (joystick scaling > 0)
//! @param[in] 	boAutorizeDown 					- autorize to use down function (joystick scaling < 0)
//! @param[in] 	ptRampSignal 					- ramp signal function
//! @param[in] 	auRampRatio[4] 					- ramp [0] TPosIncr , ramp [1] TPosDecr , ramp [2] TNegIncr , ramp [3] TNegDecr
//! @param[in] 	aiUpCommandRange[3] 			- Command off engine / min / max
//! @param[in] 	aiDownCommandRange[3] 			- Command off engine / min / max
//! @param[in] 	ERailSpeedMode 					- enum Rail speed mode
//! @param[out]	i16UpCommand					- Up Command is return by the function
//! @param[out]	i16DownCommand					- Down Command is return by the function
//! @param[out]	i16SetpointAfterRampJoystick	- get setpoint after ramp joystick
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 15.12.2016 HYDAC/MS
//!
//! @change
//! -# 16.01.2017	MS: autorize boolean variable added
//! -# 01.03.2017	MS: global setpoint changed to two setpoints (delete intermediary variable)
//! -# 01.03.2017	MS: LUT function replaced by interpolation function / ramp ratio and current values added
//! -# 04.09.2018   CK: Adapt fonction , remove setpointUp setpointDown to JoystickScaling , replace return current to Command Up Down
//! -# 11.01.2019   CK: Add output parameter to get setpoint after ramp joystick
//! -# 29.01.2019   CK: change signal RampRS2 to RampTS4
//! -# 20.02.2019   CK: add joystick centred , apply when the joystick signal is on neutral position , it is different at dead zone of joystick
//! -# 25.02.2019   CK: add joystick brut, use to define when we are beetween neutral and dead zone of joystick to know which Ev forward or backward we pilot
//! -# 13.05.2019	CK: add input function : enum RailSpeedMode to limit scaling of joystick  , add u16RampTime = auRampRatio * 2
//! -# 14.05.2019	CK: add param forward and backwasrd acces site speed to calcul setpoint with ratio
//! -# 14.05.2019	NEOTEC/FV Change NEOTEC
//! @care
//! @todo
//----------------------------------------------------------------------------------------------------
TVoid In1ProAxisPilotOut2PropEvFunction(TInt16 i16JoystickScaling,TBoolean boJoystickCentred, TBoolean boAutorizeUp,TBoolean boAutorizeDown,
							   TSigRampAdr* ptRampSignal, TUint16 auRampRatio[4], TInt16 aiUpCommandRange[3],TInt16 aiDownCommandRange[3],
							   TInt16 i16ParamForwardAccesSiteSpeed, TInt16 i16ParamBackwardAccesSiteSpeed,
							   TInt16 *i16UpCommand ,TInt16 *i16DownCommand, TInt16 *i16SetpointAfterRampJoystick)
{
	/* local variable declaration*/
	TInt16 			i16Setpoint 			= 0;
	TInt16 			i16SetpointAfterRamp;
	static TInt16	i16EvForward;
	static TInt16	i16EvBackward;
	TFloat32		f32Ratio;
	TFloat32		f32ConsignSetpointWithSpeedRatio;
	TInt16			i16SetpointWithSpeedRatio;
	TUint16			u16RampTime[4];

	/* if autorize up function is TRUE and JoystickScaling up is higher than 0, get setpoint from up value*/
	if (boAutorizeUp == TRUE && i16JoystickScaling > 0)
	{
		i16Setpoint = i16JoystickScaling;
	}
	/* if autorize down function is TRUE and JoystickScaling down is lower than 0, get setpoint from down value*/
	else if (boAutorizeDown == TRUE && i16JoystickScaling < 0)
	{
		i16Setpoint = i16JoystickScaling;
	}
	else
	{
		i16Setpoint = 0;
	}

	/* double the time of ramp ( -10000 to 10000 range , time is expressed 0 to -10000 or to 10000*/
	if(auRampRatio[0] > (U16_MAX/2))
		auRampRatio[0] = U16_MAX/2;

	if(auRampRatio[1] > (U16_MAX/2))
		auRampRatio[1] = U16_MAX/2;

	if(auRampRatio[2] > (U16_MAX/2))
		auRampRatio[2] = U16_MAX/2;

	if(auRampRatio[3] > (U16_MAX/2))
		auRampRatio[3] = U16_MAX/2;

	u16RampTime[0] = auRampRatio[0];
	u16RampTime[1] = auRampRatio[1];
	u16RampTime[2] = auRampRatio[2];
	u16RampTime[3] = auRampRatio[3];

	// check rail speed mode and limit consign of joystick
	if(i16Setpoint > 0)
	{
		f32Ratio =((TFloat32)aiUpCommandRange[2] - (TFloat32)aiUpCommandRange[1]) / ((TFloat32)i16ParamForwardAccesSiteSpeed - (TFloat32)aiUpCommandRange[1]);
		f32ConsignSetpointWithSpeedRatio = 10000 * f32Ratio;
		i16SetpointWithSpeedRatio = i16CalcLinear2Dots(i16Setpoint,0,0,10000,f32ConsignSetpointWithSpeedRatio);
	}
	else if(i16Setpoint < 0)
	{
		f32Ratio = ((TFloat32)aiDownCommandRange[2] - (TFloat32)aiDownCommandRange[1])/ ((TFloat32)i16ParamBackwardAccesSiteSpeed - (TFloat32)aiDownCommandRange[1]);
		f32ConsignSetpointWithSpeedRatio = 10000 * f32Ratio;
		i16SetpointWithSpeedRatio = i16CalcLinear2Dots(i16Setpoint,0,0,-10000,-f32ConsignSetpointWithSpeedRatio);
	}
	else
	{
		i16SetpointWithSpeedRatio = 0;
	}

	/* if sign of last ramp output is different than current setpoint*/
	if ((i16SetpointWithSpeedRatio < 0 && i16SigRampGetVal(ptRampSignal) > 0) || (i16SetpointWithSpeedRatio > 0 && i16SigRampGetVal(ptRampSignal) < 0))
		i16SetpointWithSpeedRatio = 0;

	/* set setpoint as input of the ramp and run the function ramp*/
	i16SetpointAfterRamp = i16SigRampTS4(ptRampSignal, i16SetpointWithSpeedRatio, u16RampTime[0], u16RampTime[1], u16RampTime[2], u16RampTime[3]);

	/* use linear interpolation function regarding value of setpoint after the ramp,*/
	/* needed cause the Voltage output is not a 2 dots line*/
	if (i16SetpointAfterRamp > 0)
	{
		i16EvForward = i16CalcLinear2Dots(i16SetpointAfterRamp, 0, (aiUpCommandRange[1]),
				10000, (i16ParamForwardAccesSiteSpeed));

		i16EvBackward = aiDownCommandRange[0];
	}
	else if (i16SetpointAfterRamp < 0)
	{
		i16EvBackward = i16CalcLinear2Dots(i16SetpointAfterRamp, 0, aiDownCommandRange[1],
				-10000, i16ParamBackwardAccesSiteSpeed);

		i16EvForward = aiUpCommandRange[0];
	}
	else
	{
		/* check if neutral position of joystick or if joystickScaling is different at zero , that signifed that setpoint = 0 with a authorize at false*/
		if(boJoystickCentred == TRUE || i16JoystickScaling !=0 || boAutorizeUp == FALSE || boAutorizeDown == FALSE)
		{
			i16EvForward = aiUpCommandRange[0];
			i16EvBackward = aiDownCommandRange[0];
		}
	}

	/* affect local variable to output of function*/
	*i16UpCommand = i16EvForward;
	*i16DownCommand = i16EvBackward;

	/* get the setpoint after ramp*/
	*i16SetpointAfterRampJoystick = i16SetpointAfterRamp;
}




//-----------------------------------------------------------------------------------------------------
//! @brief Control 2 Ev command with 2 buttons function
//!
//! @param[in] 		boUpButton 				- Up button
//! @param[in] 		boDownButton 			- Down button
//! @param[in] 		boAutorizeUp 			- autorize to use up function
//! @param[in]	 	boAutorizeDown 			- autorize to use down function
//! @param[in] 		u16ParamUpCommand		- Parameter apply to Up command
//! @param[in] 		u16ParamDownCommand		- Parameter apply to Down command
//! @param[out]   	*u16UpCommand			- Up Command
//! @param[out]   	*u16DownCommand			- Down Command
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 06.09.2018 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid v2ButtonsControl2Ev(TBoolean boUpButton,TBoolean boDownButton,TBoolean boAutorizeUp,TBoolean boAutorizeDown, TUint16 u16ParamUpCommand,
		TUint16 u16ParamDownCommand, TUint16 *u16UpCommand,TUint16 *u16DownCommand )
{
	/* if autorize up function is TRUE and only the button up is pushed*/
	if(boAutorizeUp == TRUE && boUpButton == TRUE && boDownButton == FALSE)
	{
		*u16UpCommand = u16ParamUpCommand;
		*u16DownCommand = 0;
	}
	/* if autorize down function is TRUE and only the button down is pushed*/
	else if(boAutorizeDown == TRUE && boUpButton == FALSE && boDownButton == TRUE)
	{
		*u16UpCommand = 0;
		*u16DownCommand = u16ParamDownCommand;
	}
	else
	{
		/* no movement*/
		*u16UpCommand = 0;
		*u16DownCommand = 0;
	}
}

//-----------------------------------------------------------------------------------------------------
//! @brief Control 1 Ev command with 2 buttons function
//!
//! @param[in] 		boUpButton 				- Up button
//! @param[in] 		boDownButton 			- Down button
//! @param[in] 		boAutorizeUp 			- autorize to use up function
//! @param[in]	 	boAutorizeDown 			- autorize to use down function
//! @param[in] 		u16ParamUpCommand		- Parameter apply to Up command
//! @param[in] 		u16ParamDownCommand		- Parameter apply to Down command
//! @param[out]   	*u16Command				- Command
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 06.09.2018 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid v2ButtonsControl1Ev(TBoolean boUpButton,TBoolean boDownButton,TBoolean boAutorizeUp,TBoolean boAutorizeDown, TUint16 u16ParamUpCommand,
		TUint16 u16ParamDownCommand, TUint16 *u16Command)
{
	/* if autorize up function is TRUE and only the button up is pushed*/
	if(boAutorizeUp == TRUE && boUpButton == TRUE && boDownButton == FALSE)
	{
		*u16Command = u16ParamUpCommand;
	}
	/* if autorize down function is TRUE and only the button down is pushed*/
	else if(boAutorizeDown == TRUE && boUpButton == FALSE && boDownButton == TRUE)
	{
		*u16Command = u16ParamDownCommand;
	}
	else
	{
		/* no movement*/
		*u16Command = 0;
	}
}


//-----------------------------------------------------------------------------------------------------
//! @brief Control 2 Ev TOR command with 2 buttons function
//!
//! @param[in] 		boUpButton 				- Up button
//! @param[in] 		boDownButton 			- Down button
//! @param[in] 		boAutorizeUp 			- autorize to use up function
//! @param[in]	 	boAutorizeDown 			- autorize to use down function
//! @param[out]   	*boUpCommand			- Up Command
//! @param[out]   	*boDownCommand			- Down Command
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 06.09.2018 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid v2ButtonsControl2EvTOR(TBoolean boUpButton,TBoolean boDownButton,TBoolean boAutorizeUp,TBoolean boAutorizeDown, TBoolean *boUpCommand,TBoolean *boDownCommand)
{
	/* if autorize up function is TRUE and only the button up is pushed*/
	if(boAutorizeUp == TRUE && boUpButton == TRUE && boDownButton == FALSE)
	{
		*boUpCommand = TRUE;
		*boDownCommand = FALSE;
	}
	/* if autorize down function is TRUE and only the button down is pushed*/
	else if(boAutorizeDown == TRUE && boUpButton == FALSE && boDownButton == TRUE)
	{
		*boUpCommand = FALSE;
		*boDownCommand = TRUE;
	}
	else
	{
		/* no movement*/
		*boUpCommand = FALSE;
		*boDownCommand = FALSE;
	}
}


//-----------------------------------------------------------------------------------------------------
//! @brief Control Pvg command
//!
//! @param[in] 	  	EMoveNacelleMode				- Movement Nacelle Mode
//! @param[in] 		u8UpParamPercentBatterie[3] 	- percentage of batteries apply to pvg
//!													  [0] radio
//!													  [1] nacelle
//!													  [2] turret
//! return[out]   	u16PvgCommand					- Pvg Command
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 06.09.2018 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TUint16 vDefinePvgCommand(EMoveNacelleMode eMovementNacelleMode ,TUint8 u8ParamPercentBatterie[2])
{
	/* local variable*/
	TUint16 u16PvgCommand = 0;

	/* check nacelle mode*/
	if(eMovementNacelleMode == GE_OFFRAIL_RADIOCONTOL_MODE)
	{
		u16PvgCommand = gDb_tRamGeneralC1.u16EcuVoltage*u8ParamPercentBatterie[0]/100;
	}
	else if(eMovementNacelleMode == GE_RAIL_NACELLE_MODE)
	{
		u16PvgCommand = gDb_tRamGeneralC1.u16EcuVoltage*u8ParamPercentBatterie[1]/100;
	}
	else if(eMovementNacelleMode == GE_TURRET_MODE)
	{
		u16PvgCommand = gDb_tRamGeneralC1.u16EcuVoltage*u8ParamPercentBatterie[2]/100;
	}
	/* return value of pvg command*/
	return u16PvgCommand;
}

//-----------------------------------------------------------------------------------------------------
//! @brief Moving average function
//!
//! @param[in] 	  	i16Input				- Input data
//! @param[in] 	  	iOldValue				- Data read last cycle (current value before run this function)
//! @param[in] 	  	u8Elements				- Number of element used to calculate the average
//! @param[in] 	  	i32Sum					- Sum of n element --> static data outside the function
//!
//! return[out]   	i16Output				- Output data
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 14.02.2019 HYDAC/MS
//!
//! @change  15.05.2019 HYDAC/CK		- change type oldvalue Tint16 to TFloat64
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TFloat64 f64MovAverage(TInt16 i16Input, TFloat64 f64OldValue, TUint8 u8Elements)
{
	/* local variable*/
	TFloat64 f64Calc;

	/* avoid error if element is 0*/
	if (u8Elements == 0)
	{
		u8Elements = 1;
	}

	/*Subtract the oldest number from the prev sum, add the new number*/
	f64Calc = f64OldValue * (TFloat64)(u8Elements - 1) + (TFloat64)i16Input;

	/*return the average*/
	return (f64Calc / u8Elements);
}

//-----------------------------------------------------------------------------------------------------
//! @brief Moving average function
//!
//! @param[in] 	  	i32Input				- Input data
//! @param[in] 	  	f64OldValue				- Data read last cycle (current value before run this function)
//! @param[in] 	  	u8Elements				- Number of element used to calculate the average
//!
//! return[out]   	f64Output				- Output data
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 18.11.2022 NEOTEC
//!
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TFloat64 f64MovAverageI32(TInt16 i32Input, TFloat64 f64OldValue, TUint8 u8Elements)
{
	/* local variable*/
	TFloat64 f64Calc;

	/* avoid error if element is 0*/
	if (u8Elements == 0)
	{
		u8Elements = 1;
	}

	/*Subtract the oldest number from the prev sum, add the new number*/
	f64Calc = f64OldValue * (TFloat64)(u8Elements - 1) + (TFloat64)i32Input;

	/*return the average*/
	return (f64Calc / u8Elements);
}



//-----------------------------------------------------------------------------------------------------
//! @brief control one hydraulic proportional function
//!
//! @param[in] 	i16JoystickScaling 				- joystick scaling
//! @param[in] 	boAutorizeUp 					- autorize to use up function (joystick scaling > 0)
//! @param[in] 	boAutorizeDown 					- autorize to use down function (joystick scaling < 0)
//! @param[in] 	ptRampSignal 					- ramp signal function
//! @param[in] 	auRampRatio[4] 					- ramp [0] TPosIncr , ramp [1] TPosDecr , ramp [2] TNegIncr , ramp [3] TNegDecr
//! @param[in] 	aiCommandRange[5] 				- [0] off  / [1] Max Up  / [2] Max Down  / [3] Min Up  / [4] Min Down
//! @param[in] 	i16ParamUpMax 					- Parametre Up max
//! @param[in] 	i16ParamDownMax 				- Parametre Down Max
//! @param[out]	i16OutCommand					- OutCommand
//! @param[out]	boSupplyPvg						- Supply Command
//! @param[out]	i16JoytickAfterRamp				- get value of scaling joytick after ramp
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 15.12.2016 HYDAC/MS
//!
//! @change
//! -# 16.01.2017	MS: autorize boolean variable added
//! -# 01.03.2017	MS: global setpoint changed to two setpoints (delete intermediary variable)
//! -# 01.03.2017	MS: LUT function replaced by interpolation function / ramp ratio and current values added
//! -# 04.09.2018   CK: Adapt fonction , remove setpointUp setpointDown to JoystickScaling , replace return current to Command Up Down
//! -# 11.01.2019   CK: Add output parameter to get setpoint after ramp joystick
//! -# 29.01.2019   CK: change signal RampRS2 to RampTS4
//! -# 20.02.2019   CK: add joystick centred , apply when the joystick signal is on neutral position , it is different at dead zone of joystick
//! -# 25.02.2019   CK: add joystick brut, use to define when we are beetween neutral and dead zone of joystick to know which Ev forward or backward we pilot
//! -# 13.05.2019	CK: add input function : enum RailSpeedMode to limit scaling of joystick  , add u16RampTime = auRampRatio * 2
//! -# 14.05.2019	CK: add param forward and backwasrd acces site speed to calcul setpoint with ratio
//! -# 14.05.2019	NEOTEC/FV Change NEOTEC
//! -# 28.06.2019	CK : Adapt function In1ProAxisPilotOut2PropEvFunction to pilot pvg output
//! -# 08.07.2019	CK : Add joystick scaling after ramp
//! @care
//! @todo
//----------------------------------------------------------------------------------------------------
extern TVoid vPropVoltPvgFunction(TInt16 i16JoystickScaling, TBoolean boAutorizeUp,TBoolean boAutorizeDown,
							   TSigRampAdr* ptRampSignal, TUint16 auRampRatio[4], TInt16 aiCommandRange[5],
							   TInt16 i16ParamUpMax, TInt16 i16ParamDownMax,
							   TInt16 *i16OutCommand,TBoolean *boSupplyPvg,
							   TInt16 *i16JoystickAfterRamp)
{
	/* local variable declaration*/
	TInt16 			i16Setpoint 			= 0;
	TInt16 			i16SetpointAfterRamp;
	TFloat32		f32Ratio;
	TFloat32		f32ConsignSetpointWithSpeedRatio;
	TInt16			i16SetpointWithSpeedRatio;
	TUint16			u16RampTime[4];

	/* if autorize up function is TRUE and JoystickScaling up is higher than 0, get setpoint from up value*/
	if (boAutorizeUp == TRUE && i16JoystickScaling > 0)
	{
		i16Setpoint = i16JoystickScaling;
	}
	/* if autorize down function is TRUE and JoystickScaling down is lower than 0, get setpoint from down value*/
	else if (boAutorizeDown == TRUE && i16JoystickScaling < 0)
	{
		i16Setpoint = i16JoystickScaling;
	}
	else
	{
		i16Setpoint = 0;
	}

	/* double the time of ramp ( -10000 to 10000 range , time is expressed 0 to -10000 or to 10000*/
	if(auRampRatio[0] > (U16_MAX/2))
		auRampRatio[0] = U16_MAX/2;

	if(auRampRatio[1] > (U16_MAX/2))
		auRampRatio[1] = U16_MAX/2;

	if(auRampRatio[2] > (U16_MAX/2))
		auRampRatio[2] = U16_MAX/2;

	if(auRampRatio[3] > (U16_MAX/2))
		auRampRatio[3] = U16_MAX/2;

	u16RampTime[0] = auRampRatio[0];
	u16RampTime[1] = auRampRatio[1];
	u16RampTime[2] = auRampRatio[2];
	u16RampTime[3] = auRampRatio[3];

	if(i16Setpoint > 0)
	{
		f32Ratio =((TFloat32)aiCommandRange[1] - (TFloat32)aiCommandRange[3]) / ((TFloat32)i16ParamUpMax - (TFloat32)aiCommandRange[3]);
		f32ConsignSetpointWithSpeedRatio = 10000 * f32Ratio;
		i16SetpointWithSpeedRatio = i16CalcLinear2Dots(i16Setpoint,0,0,10000,f32ConsignSetpointWithSpeedRatio);
	}
	else if(i16Setpoint < 0)
	{
		f32Ratio = ((TFloat32)aiCommandRange[2] - (TFloat32)aiCommandRange[4])/ ((TFloat32)i16ParamDownMax - (TFloat32)aiCommandRange[4]);
		f32ConsignSetpointWithSpeedRatio = 10000 * f32Ratio;
		i16SetpointWithSpeedRatio = i16CalcLinear2Dots(i16Setpoint,0,0,-10000,-f32ConsignSetpointWithSpeedRatio);
	}
	else
	{
		i16SetpointWithSpeedRatio = 0;
	}

	/* if sign of last ramp output is different than current setpoint*/
	if ((i16SetpointWithSpeedRatio < 0 && i16SigRampGetVal(ptRampSignal) > 0) || (i16SetpointWithSpeedRatio > 0 && i16SigRampGetVal(ptRampSignal) < 0))
		i16SetpointWithSpeedRatio = 0;

	/* set setpoint as input of the ramp and run the function ramp*/
	i16SetpointAfterRamp = i16SigRampTS4(ptRampSignal, i16SetpointWithSpeedRatio, u16RampTime[2], u16RampTime[3], u16RampTime[0], u16RampTime[1]);


	/* use linear interpolation function regarding value of setpoint after the ramp,*/
	/* needed cause the Voltage output is not a 2 dots line*/
	if (i16SetpointAfterRamp > 0)
	{
		*i16OutCommand = i16CalcLinear2Dots(i16SetpointAfterRamp, 0, (aiCommandRange[3]),
				10000, (i16ParamUpMax));


		*boSupplyPvg = TRUE;
	}
	else if (i16SetpointAfterRamp < 0)
	{
		*i16OutCommand = i16CalcLinear2Dots(i16SetpointAfterRamp, 0, aiCommandRange[4],
				-10000, i16ParamDownMax);

		*boSupplyPvg = TRUE;
	}
	else
	{
		*i16OutCommand = aiCommandRange[0];
		*boSupplyPvg = FALSE;
	}

	/* get value of scaling after rmap*/
	*i16JoystickAfterRamp = i16SetpointAfterRamp;

}

//-----------------------------------------------------------------------------------------------------
//! @brief control one hydraulic proportional function
//!
//! @param[in] 	i16JoystickScaling 				- joystick scaling
//! @param[in] 	boAutorizeUp 					- autorize to use up function (joystick scaling > 0)
//! @param[in] 	boAutorizeDown 					- autorize to use down function (joystick scaling < 0)
//! @param[in] 	ptRampSignal 					- ramp signal function
//! @param[in] 	auRampRatio[4] 					- ramp [0] TPosIncr , ramp [1] TPosDecr , ramp [2] TNegIncr , ramp [3] TNegDecr
//! @param[in] 	aiCommandRange[5] 				- [0] off  / [1] Max Up  / [2] Max Down  / [3] Min Up  / [4] Min Down
//! @param[in] 	i16ParamUpMax 					- Parametre Up max
//! @param[in] 	i16ParamDownMax 				- Parametre Down Max
//! @param[out]	i16OutCommand					- OutCommand
//! @param[out]	boSupplyPvg						- Supply Command
//! @param[out]	i16JoytickAfterRamp				- get value of scaling joytick after ramp
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 15.12.2016 HYDAC/MS
//!
//! @change
//! -# 16.01.2017	MS: autorize boolean variable added
//! -# 01.03.2017	MS: global setpoint changed to two setpoints (delete intermediary variable)
//! -# 01.03.2017	MS: LUT function replaced by interpolation function / ramp ratio and current values added
//! -# 04.09.2018   CK: Adapt fonction , remove setpointUp setpointDown to JoystickScaling , replace return current to Command Up Down
//! -# 11.01.2019   CK: Add output parameter to get setpoint after ramp joystick
//! -# 29.01.2019   CK: change signal RampRS2 to RampTS4
//! -# 20.02.2019   CK: add joystick centred , apply when the joystick signal is on neutral position , it is different at dead zone of joystick
//! -# 25.02.2019   CK: add joystick brut, use to define when we are beetween neutral and dead zone of joystick to know which Ev forward or backward we pilot
//! -# 13.05.2019	CK: add input function : enum RailSpeedMode to limit scaling of joystick  , add u16RampTime = auRampRatio * 2
//! -# 14.05.2019	CK: add param forward and backwasrd acces site speed to calcul setpoint with ratio
//! -# 14.05.2019	NEOTEC/FV Change NEOTEC
//! -# 28.06.2019	CK : Adapt function In1ProAxisPilotOut2PropEvFunction to pilot pvg output
//! -# 08.07.2019	CK : Add joystick scaling after ramp
//! @care
//! @todo
//----------------------------------------------------------------------------------------------------
extern TVoid vPropVoltPvgFunctionTOR(TInt16 i16JoystickScaling, TBoolean boAutorizeUp,TBoolean boAutorizeDown,
							   TSigRampAdr* ptRampSignal, TUint16 auRampRatio[4], TInt16 aiCommandRange[5],
							   TInt16 i16ParamUpMax, TInt16 i16ParamDownMax,
							   TInt16 *i16OutCommand,TBoolean *boSupplyPvg,
							   TInt16 *i16JoystickAfterRamp)
{
	/* local variable declaration*/
	TInt16 			i16Setpoint 			= 0;
	TInt16 			i16SetpointAfterRamp;
	TFloat32		f32Ratio;
	TFloat32		f32ConsignSetpointWithSpeedRatio;
	TInt16			i16SetpointWithSpeedRatio;
	TUint16			u16RampTime[4];

	/* if autorize up function is TRUE and JoystickScaling up is higher than 0, get setpoint from up value*/
	if (boAutorizeUp == TRUE && i16JoystickScaling > 0)
	{
		i16Setpoint = i16JoystickScaling;
	}
	/* if autorize down function is TRUE and JoystickScaling down is lower than 0, get setpoint from down value*/
	else if (boAutorizeDown == TRUE && i16JoystickScaling < 0)
	{
		i16Setpoint = i16JoystickScaling;
	}
	else
	{
		i16Setpoint = 0;
	}

	/* double the time of ramp ( -10000 to 10000 range , time is expressed 0 to -10000 or to 10000*/
	if(auRampRatio[0] > (U16_MAX/2))
		auRampRatio[0] = U16_MAX/2;

	if(auRampRatio[1] > (U16_MAX/2))
		auRampRatio[1] = U16_MAX/2;

	if(auRampRatio[2] > (U16_MAX/2))
		auRampRatio[2] = U16_MAX/2;

	if(auRampRatio[3] > (U16_MAX/2))
		auRampRatio[3] = U16_MAX/2;

	u16RampTime[0] = auRampRatio[0];
	u16RampTime[1] = auRampRatio[1];
	u16RampTime[2] = auRampRatio[2];
	u16RampTime[3] = auRampRatio[3];

	if(i16Setpoint > 0)
	{
		f32Ratio =((TFloat32)aiCommandRange[1] - (TFloat32)aiCommandRange[3]) / ((TFloat32)i16ParamUpMax - (TFloat32)aiCommandRange[3]);
		f32ConsignSetpointWithSpeedRatio = 10000 * f32Ratio;
		i16SetpointWithSpeedRatio = i16CalcLinear2Dots(i16Setpoint,0,0,10000,f32ConsignSetpointWithSpeedRatio);
	}
	else if(i16Setpoint < 0)
	{
		f32Ratio = ((TFloat32)aiCommandRange[2] - (TFloat32)aiCommandRange[4])/ ((TFloat32)i16ParamDownMax - (TFloat32)aiCommandRange[4]);
		f32ConsignSetpointWithSpeedRatio = 10000 * f32Ratio;
		i16SetpointWithSpeedRatio = i16CalcLinear2Dots(i16Setpoint,0,0,-10000,-f32ConsignSetpointWithSpeedRatio);
	}
	else
	{
		i16SetpointWithSpeedRatio = 0;
	}

	/* if sign of last ramp output is different than current setpoint*/
	if ((i16SetpointWithSpeedRatio < 0 && i16SigRampGetVal(ptRampSignal) > 0) || (i16SetpointWithSpeedRatio > 0 && i16SigRampGetVal(ptRampSignal) < 0))
		i16SetpointWithSpeedRatio = 0;

	/* set setpoint as input of the ramp and run the function ramp*/
	i16SetpointAfterRamp = i16SigRampTS4(ptRampSignal, i16SetpointWithSpeedRatio, u16RampTime[0], u16RampTime[1], u16RampTime[2], u16RampTime[3]);

	/* use linear interpolation function regarding value of setpoint after the ramp,*/
	/* needed cause the Voltage output is not a 2 dots line*/
	if (i16SetpointAfterRamp > 0)
	{
		*i16OutCommand = i16CalcLinear2Dots(i16SetpointAfterRamp, 0, (aiCommandRange[3]),
				10000, (i16ParamUpMax));


		*boSupplyPvg = TRUE;
	}
	else if (i16SetpointAfterRamp < 0)
	{
		*i16OutCommand = i16CalcLinear2Dots(i16SetpointAfterRamp, 0, aiCommandRange[4],
				-10000, i16ParamDownMax);

		*boSupplyPvg = TRUE;
	}
	else
	{
		*i16OutCommand = aiCommandRange[0];
		*boSupplyPvg = FALSE;
	}

	/* get value of scaling after rmap*/
	*i16JoystickAfterRamp = i16SetpointAfterRamp;

}

//-----------------------------------------------------------------------------------------------------
//! @brief Rising edge
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 21.10.2022 NEOTEC
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TBoolean vRisingEdge(TBoolean boInput, TBoolean boInPreviousState, TBoolean *boOutPreviousState )
{
	TBoolean boRisingInput = FALSE;
	if (boInput == TRUE && boInPreviousState == FALSE)
		boRisingInput = TRUE;
	/* Memorize the previous value*/
	*boOutPreviousState = boInput;
	return (boRisingInput);
}

//-----------------------------------------------------------------------------------------------------
//! @brief Falling edge
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 21.10.2022 NEOTEC
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TBoolean vFallingEdge(TBoolean boInput, TBoolean boInPreviousState, TBoolean *boOutPreviousState )
{
	TBoolean boFallingInput = FALSE;
	if (boInput == FALSE && boInPreviousState == TRUE)
		boFallingInput = TRUE;
	/* Memorize the previous value*/
	*boOutPreviousState = boInput;
	return (boFallingInput);
}


//-----------------------------------------------------------------------------------------------------
//! @brief Blink low
//!	ON 1000ms et OFF 1000ms
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 21.10.2022 NEOTEC
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TBoolean vBlinkLow(TSigRampAdr* ptBlinkLowRamp)
{
	/*boBlinkLow*/
	static TBoolean boBlinkLow = FALSE;
	static TInt16 i16InBlinkLow = 0;
	TInt16 i16OutBlinkLow;
	i16OutBlinkLow = i16SigRampTS2(ptBlinkLowRamp,i16InBlinkLow,1000,1000 ); //ON 1000ms et OFF 1000ms
	if (i16OutBlinkLow <= 0)
		i16InBlinkLow = 10000;
	else if (i16OutBlinkLow >= 10000)
		i16InBlinkLow = 0;

	if (i16InBlinkLow==10000)
		boBlinkLow = TRUE;
	else
		boBlinkLow = FALSE;
	return boBlinkLow;
}
