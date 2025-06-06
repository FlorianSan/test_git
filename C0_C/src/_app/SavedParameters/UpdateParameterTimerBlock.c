//==================================================================================================
//! @file UpdateParameterTimerBlock.c
//! @brief change time of timer block in running phase
//! @see Target for ...
//! @section app
//! @subsection
//! @author Christian Klein (CK)
//! @created 06.11.2019 HYDAC/CK
//! @history: #- CK 06.11.2019 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "UpdateParameterTimerBlock.h"


//-----------------------------------------------------------------------------------------------------
//! @brief change time of timer block in running phase
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 06.11.2019 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vUpdateParameterTimerBlock(TVoid)
{
	/* local variable*/
	static TUint32 u32LastValServiceAxleBrakeTimeBeforeBrake = 0;
	static TUint32 u32LastValTimeEmergencyServiceBrake = 0;
	static TUint32 u32LastValTimeStabilizedStopDetection = 0;
	static TUint32 u32LastValServiceBrakeOffrailTime = 0;
	static TUint32 u32LastValTimeStoppedMachineUnblockOscAxle = 0;
	static TUint16 u16LastValTimeOsciSerivceBrakeMs = 0;
	static TUint16 u16LastValTimeFixeSerivceBrakeMs = 0;
	static TUint16 u16LastValTimeOsciParkingBrakeMs = 0;
	static TUint16 u16LastValTimeFixeParkingBrakeMs = 0;
	static TUint32 u32LastValValidCondiEnableTestBrakeTime = 0;
	static TUint32 u32LastValMastDisplayRefreshCycleTime = 0;
	/*Double freins*/
	static TUint16 u16LastValTimeOsci2ndParkingBrakeMs = 0;
	static TUint16 u16LastValTimeFixe2ndParkingBrakeMs = 0;


	/* check if the time parameter of timer tTimerSecondServiceAxleBrakeRail at change*/
	if(u32LastValServiceAxleBrakeTimeBeforeBrake != gDb_tNvParametersC0.u32ServiceAxleBrakeTimeBeforeBrake)
	{
		/*change setting time of timer block*/
		eEleTimerSetTime(&tTimerSecondServiceAxleBrakeRail,gDb_tNvParametersC0.u32ServiceAxleBrakeTimeBeforeBrake);
	}
	/* retain last value*/
	u32LastValServiceAxleBrakeTimeBeforeBrake = gDb_tNvParametersC0.u32ServiceAxleBrakeTimeBeforeBrake;



	/* check if the time parameter of timer tTimerEmergencyServiceBrakeRail at change*/
	if(u32LastValTimeEmergencyServiceBrake != gDb_tNvParametersC0.u32TimeEmergencyServiceBrake)
	{
		/*change setting time of timer block*/
		eEleTimerSetTime(&tTimerEmergencyServiceBrakeRail,gDb_tNvParametersC0.u32TimeEmergencyServiceBrake);
	}
	/* retain last value*/
	u32LastValTimeEmergencyServiceBrake = gDb_tNvParametersC0.u32TimeEmergencyServiceBrake;



	/* check if the time parameter of timer tTimerStabilizedStop at change*/
	if(u32LastValTimeStabilizedStopDetection != gDb_tNvParametersC0.u32TimeStabilizedStopDetection)
	{
		/*change setting time of timer block*/
		eEleTimerSetTime(&tTimerStabilizedStop,gDb_tNvParametersC0.u32TimeStabilizedStopDetection);
	}
	/* retain last value*/
	u32LastValTimeStabilizedStopDetection = gDb_tNvParametersC0.u32TimeStabilizedStopDetection;



	/* check if the time parameter of timer tTimerServiceBrakeOffRail at change*/
	if(u32LastValServiceBrakeOffrailTime != gDb_tNvParametersC0.u32ServiceBrakeOffrailTime)
	{
		/*change setting time of timer block*/
		eEleTimerSetTime(&tTimerServiceBrakeOffRail,gDb_tNvParametersC0.u32ServiceBrakeOffrailTime);
	}
	/*retain last value*/
	u32LastValServiceBrakeOffrailTime = gDb_tNvParametersC0.u32ServiceBrakeOffrailTime;



	/* check if the time parameter of timer tTimerStoppedMachineUnblockOscillationAxle at change*/
	if(u32LastValTimeStoppedMachineUnblockOscAxle != gDb_tNvParametersC0.u32TimeStoppedMachineUnblockOscAxle)
	{
		/*change setting time of timer block*/
		eEleTimerSetTime(&tTimerStoppedMachineUnblockOscillationAxle,gDb_tNvParametersC0.u32TimeStoppedMachineUnblockOscAxle);
	}
	/* retain last value*/
	u32LastValTimeStoppedMachineUnblockOscAxle = gDb_tNvParametersC0.u32TimeStoppedMachineUnblockOscAxle;



	/* check if the time parameter of timer tTimerPressureOsciServiceBrakeTest at change*/
	if(u16LastValTimeOsciSerivceBrakeMs != gDb_tNvParamBrakeTest.u16TimeOsciSerivceBrakeMs)
	{
		/*change setting time of timer block*/
		eEleTimerSetTime(&tTimerPressureOsciServiceBrakeTest,gDb_tNvParamBrakeTest.u16TimeOsciSerivceBrakeMs);
	}
	/* retain last value*/
	u16LastValTimeOsciSerivceBrakeMs = gDb_tNvParamBrakeTest.u16TimeOsciSerivceBrakeMs;



	/* check if the time parameter of timer tTimerPressureFixeServiceBrakeTest at change*/
	if(u16LastValTimeFixeSerivceBrakeMs != gDb_tNvParamBrakeTest.u16TimeFixeSerivceBrakeMs)
	{
		/*change setting time of timer block*/
		eEleTimerSetTime(&tTimerPressureFixeServiceBrakeTest,gDb_tNvParamBrakeTest.u16TimeFixeSerivceBrakeMs);
	}
	/* retain last value*/
	u16LastValTimeFixeSerivceBrakeMs = gDb_tNvParamBrakeTest.u16TimeFixeSerivceBrakeMs;



	/* check if the time parameter of timer tTimerPressureOsciParkingBrakeTest at change*/
	if(u16LastValTimeOsciParkingBrakeMs != gDb_tNvParamBrakeTest.u16TimeOsciParkingBrakeMs)
	{
		/*change setting time of timer block*/
		eEleTimerSetTime(&tTimerPressureOsciParkingBrakeTest,gDb_tNvParamBrakeTest.u16TimeOsciParkingBrakeMs);
	}
	/* retain last value*/
	u16LastValTimeOsciParkingBrakeMs = gDb_tNvParamBrakeTest.u16TimeOsciParkingBrakeMs;



	/* check if the time parameter of timer tTimerPressureFixeParkingBrakeTest at change*/
	if(u16LastValTimeFixeParkingBrakeMs != gDb_tNvParamBrakeTest.u16TimeFixeParkingBrakeMs)
	{
		/*change setting time of timer block*/
		eEleTimerSetTime(&tTimerPressureFixeParkingBrakeTest,gDb_tNvParamBrakeTest.u16TimeFixeParkingBrakeMs);
	}
	/* retain last value*/
	u16LastValTimeFixeParkingBrakeMs = gDb_tNvParamBrakeTest.u16TimeFixeParkingBrakeMs;

	/*Double freins*/
	/* check if the time parameter of timer tTimerPressureOsciParkingBrakeTest at change*/
	if(u16LastValTimeOsci2ndParkingBrakeMs != gDb_tNvParamBrakeTest.u16TimeOsci2ndParkingBrakeMs)
	{
		/*change setting time of timer block*/
		eEleTimerSetTime(&tTimerPressureOsci2ndParkingBrakeTest,gDb_tNvParamBrakeTest.u16TimeOsci2ndParkingBrakeMs);
	}
	/* retain last value*/
	u16LastValTimeOsci2ndParkingBrakeMs = gDb_tNvParamBrakeTest.u16TimeOsci2ndParkingBrakeMs;



	/* check if the time parameter of timer tTimerPressureFixeParkingBrakeTest at change*/
	if(u16LastValTimeFixe2ndParkingBrakeMs != gDb_tNvParamBrakeTest.u16TimeFixe2ndParkingBrakeMs)
	{
		/*change setting time of timer block*/
		eEleTimerSetTime(&tTimerPressureFixe2ndParkingBrakeTest,gDb_tNvParamBrakeTest.u16TimeFixe2ndParkingBrakeMs);
	}
	/* retain last value*/
	u16LastValTimeFixe2ndParkingBrakeMs = gDb_tNvParamBrakeTest.u16TimeFixe2ndParkingBrakeMs;

	/* check if the time parameter of timer tTimerValidConditionTestBrake at change*/
	if(u32LastValValidCondiEnableTestBrakeTime != gDb_tNvParamBrakeTest.u32ValidCondiEnableTestBrakeTime)
	{
		/*change setting time of timer block*/
		eEleTimerSetTime(&tTimerValidConditionTestBrake,gDb_tNvParamBrakeTest.u32ValidCondiEnableTestBrakeTime);
	}
	/* retain last value*/
	u32LastValValidCondiEnableTestBrakeTime = gDb_tNvParamBrakeTest.u32ValidCondiEnableTestBrakeTime;



	/* check if the time parameter of timer tTimerSendMsgToMastDisplay at change*/
	if(u32LastValMastDisplayRefreshCycleTime != gDb_tNvParamMastDisplayC0.u32MastDisplayRefreshCycleTime)
	{
		/*change setting time of timer block*/
		eEleTimerSetTime(&tTimerSendMsgToMastDisplay,gDb_tNvParamMastDisplayC0.u32MastDisplayRefreshCycleTime);
	}
	/* retain last value*/
	u32LastValMastDisplayRefreshCycleTime = gDb_tNvParamMastDisplayC0.u32MastDisplayRefreshCycleTime;


}
