//**************************************************************************************************
//! @file CustomLibrary.h
//! @brief Read analog and digital inputs and convert values
//! @author Christian Klein (CK)
//! @created 03.08.2018 HYDAC/CK
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_CUSTOMLIBRARY_CUSTOMLIBRARY_H_
#define SRC__APP_CUSTOMLIBRARY_CUSTOMLIBRARY_H_

// INCLUDES =======================================================================================
#include <ItfTypes.h>
#include <App_LibTab.h>
#include <ItfBasConv.h>
#include <ItfBasMath.h>
// GLOBAL DEFINES =================================================================================

// GLOBAL TYPE DEFINITON ==========================================================================

// GLOBAL VARIABLES DECLARATIONS ==================================================================

// GLOBAL PROTOTYPES DECLARATIONS =================================================================

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
//-----------------------------------------------------------------------------------------------------
extern TInt16 vCl_3_Pos_Analog_Input(TInt16 i16Input, TInt16 i16In_min , TInt16 i16In_mid , TInt16 i16In_max, TInt16 i16Out_min ,TInt16 i16Out_mid, TInt16 i16Out_max , TUint16 i16Deadband);

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
							   TBoolean *boActivationEvRotTurretClokwise, TBoolean *boActivationEvRotTurretCtClokwise);
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
							   TSigRampAdr* ptRampSignal, TUint16 auRampRatio[2], TInt16 aiCommandRange[5],TBoolean *boSupplyPvg);


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
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TInt16 i16ProportionalFunction2(TInt16 i16JoystickScaling, TBoolean boAutorizeUp,TBoolean boAutorizeDown,
							   TSigRampAdr* ptRampSignal, TUint16 auRampRatio[4], TInt16 aiCommandRange[5],TBoolean *boSupplyPvg);

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
//! -# 28.06.2019	NEOTEC Copy CO
//! @care
//! @todo
//----------------------------------------------------------------------------------------------------
extern TVoid In1ProAxisPilotOut2PropEvFunction(TInt16 i16JoystickScaling,TBoolean boJoystickCentred,/*//NEOTEC WARNING TUint16 u16JoystickBrut,*/ TBoolean boAutorizeUp,TBoolean boAutorizeDown,
							   TSigRampAdr* ptRampSignal, TUint16 auRampRatio[4], TInt16 aiUpCommandRange[3],TInt16 aiDownCommandRange[3],/*//NEOTEC WARNING ERailSpeedMode eRailSpeedMode,*/
							   TInt16 i16ParamForwardAccesSiteSpeed, TInt16 i16ParamBackwardAccesSiteSpeed,
							   TInt16 *i16UpCommand ,TInt16 *i16DownCommand, TInt16 *i16SetpointAfterRampJoystick);

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
extern TVoid v2ButtonsControl2Ev(TBoolean boUpButton,TBoolean boDownButton,TBoolean boAutorizeUp,TBoolean boAutorizeDown, TUint16 u16ParamUpCommand,
		TUint16 u16ParamDownCommand, TUint16 *u16UpCommand,TUint16 *u16DownCommand);


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
extern TVoid v2ButtonsControl1Ev(TBoolean boUpButton,TBoolean boDownButton,TBoolean boAutorizeUp,TBoolean boAutorizeDown, TUint16 u16ParamUpCommand,
		TUint16 u16ParamDownCommand, TUint16 *u16Command);

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
extern TVoid v2ButtonsControl2EvTOR(TBoolean boUpButton,TBoolean boDownButton,TBoolean boAutorizeUp,TBoolean boAutorizeDown, TBoolean *boUpCommand,TBoolean *boDownCommand);


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
TUint16 vDefinePvgCommand(EMoveNacelleMode eMovementNacelleMode ,TUint8 u8ParamPercentBatterie[2]);


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
							   TInt16 *i16JoystickAfterRamp);

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
							   TInt16 *i16JoystickAfterRamp);

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
extern TFloat64 f64MovAverage(TInt16 i16Input, TFloat64 f64OldValue, TUint8 u8Elements);

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
extern TFloat64 f64MovAverageI32(TInt16 i32Input, TFloat64 f64OldValue, TUint8 u8Elements);

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
TBoolean vBlinkLow(TSigRampAdr* ptBlinkLowRamp);

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
extern TBoolean vRisingEdge(TBoolean boInput, TBoolean boInPreviousState, TBoolean *boOutPreviousState);

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
extern TBoolean vFallingEdge(TBoolean boInput, TBoolean boInPreviousState, TBoolean *boOutPreviousState);



#endif /* SRC__APP_CUSTOMLIBRARY_CUSTOMLIBRARY_H_ */
