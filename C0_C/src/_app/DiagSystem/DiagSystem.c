//==================================================================================================
//! @file DiagSystem.c
//! @brief Diagnostic system , wathdog state , life byte
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 23.07.2018 HYDAC/CK
//! @history: #- CK 23.07.2018 HYDAC/MS interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include <DiagSystem.h>

//-----------------------------------------------------------------------------------------------------
//! @brief wathdog state , life byte , read batterie voltage
//!
//!
//! @globvar
//!		TDbRamGeneralC0 		gDb_tRamGeneralC0			structure Data variable list
//!		TTimStatistic			g_tStatistic				structure time statistic
//! @staticvar
//!
//! @created 23.07.2018 HYDAC/CK
//!
//! @change  20.11.2019 HYDAC/CK  : minor changes : Add more comments according to Review Code
//!			 28.01.2020 HYDAC/CK - Filling of the part  @globar and @staticvar in the header of the function
//!			 13.02.2020 HYDAC/CK - change Access Level of u8CoreErrFaultFilterStackCopy function to get he error stack information for all active and inactive errors (ERR_FILTER_ALL)
//!								 - remove boCoreErrFaultChange function does not work as we want
//! @care
//! @todo
//
//07.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vDiagSystem(TVoid)
{
	/* Declaration of local variable*/
	TDiagStatus 	tDiag;

	/* Call core function to get Watchdog state*/
	eCoreGetEcuDiagStatus(&tDiag);
	gDb_tRamGeneralC0.eWatchdogState = (EWdState) tDiag.eDiagState;

	/* Increment LifeByte variable every cycle to know if the ECU is blocked or not*/
	if (gDb_tRamGeneralC0.u8LifeByte == U8_MAX){gDb_tRamGeneralC0.u8LifeByte = 0;}
	gDb_tRamGeneralC0.u8LifeByte++;

	/*read batteries voltage ECU*/
	gDb_tRamGeneralC0.u16EcuVoltage = u16CoreAdcGetPin(ADC_SYS_BAT_CURRENT,PIN_SYS);

	/*get the average cycle time of this application*/
	gDb_tRamGeneralC0.u32AverageTimeCycle = g_tStatistic.u32Average;

	/*get the max cycle time of this application, It must be less than the time defined for the application*/
	gDb_tRamGeneralC0.u32MaxTimeCycle = g_tStatistic.u32MaxTime;

//NEOTEC IG DEBUG
	gDb_tRamGeneralC0.u16FaultyValue = tDiag.tDiagError.u16FaultyValue;
	gDb_tRamGeneralC0.u8DeviceNum = tDiag.tDiagError.u8DeviceNum;
	gDb_tRamGeneralC0.u8ErrorCode = tDiag.tDiagError.u8ErrorCode;
//NEOTEC IG DEBUG
	/* ============================================================================================= */
	/* Get error	*/
	/* ============================================================================================= */
	/* local variable*/
	TCoreErrRec		terror[LIST_ERR_ROW_MAX];
	TCoreErrRecExt	tErrorExt[LIST_ERR_ROW_MAX];
	TUint8 			u8Fmi;
	TUint32			u32ErrorCode;
	TUint8 			u8FmiExt;
#ifdef DEBUG
#endif
	static TUint8  u8ErrListCntMax = 0;
	TInt16  i16i =0;


	#ifdef DEBUG
	if(boCoreErrFaultChange(ACC_ECU_DEV))
	#endif
		#ifdef DEBUG
		#endif

		u8ErrListCntMax = u8CoreErrFaultFilterStackCopy(ACC_DEVELOPMENT,ERR_FILTER_ACTIV,terror,tErrorExt);
		gDb_tRamGeneralC0.u8RamGeneralNeotecC0_2 = u8ErrListCntMax;


		if(u8ErrListCntMax == 0)
		{
			gDb_tRamGeneralC0.boActiveFailure = FALSE;
		}
		else
		{
			gDb_tRamGeneralC0.boActiveFailure = TRUE;
		}
		/*cycle through all active errors*/
		for (i16i = 0; i16i<u8ErrListCntMax;i16i++)
		{
			#ifdef DEBUG
			/*to just get the SPN from the active errors use the following struct-variable:
			tErrorExt[i16i].cptCfg->u32ErrNum;*/
			#endif
			/*if you need all 3 error numbers (DTC): unpack the active error code from the extended error information into SPN , FMI, FMIextended*/
			vCoreErrCodeUnPack(tErrorExt[i16i].u32ErrCode,&u32ErrorCode, &u8Fmi,&u8FmiExt);
			/*print the active error codes*/
			vPrint("SPN:%d, FMI:%d,FMIe:%d", u32ErrorCode, u8Fmi, u8FmiExt);
		}
}
