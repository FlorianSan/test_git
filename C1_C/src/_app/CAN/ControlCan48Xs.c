//==================================================================================================
//! @file ControlCan48Xs.c
//! @brief Control Can 48 Xs start msg , sync , hearbeat
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 23.07.2018 HYDAC/CK
//! @history: #- CK 23.07.2018 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "ControlCan48Xs.h"


//-----------------------------------------------------------------------------------------------------
//! @brief Control Can 48 Xs start msg , sync , hearbeat
//!
//!
//! @globvar
//!		TDbRamGeneralC1 		gDb_tRamGeneralC1			structure Data variable list
//!		TBloCRcv 				gCRcv_tSRDO1_48XS			Structure of receive CAN block
//!		TBloCSnd				gCSnd_tSRDO4_48XS			Structure of send CAN block
//!
//! @staticvar
//!		TUint32					u32CounterSrdo1				Counter of number receive Srdo1 CAN Frame
//!
//! @created 27.11.2018 HYDAC/CK
//!
//! @change  27.01.2019 HYDAC/CK - add vStart48Xs function to start 48xs slave module
//!			 28.01.2019 HYDAC/CK - Filling of the part  @globar and @staticvar in the header of the function
//!
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vControlCan48Xs(TVoid)
{
	static TUint32      u32CounterSrdo1 = 0;

	/* ============================================================================================= */
	/* 										Start 48Xs											     */
	/* ============================================================================================= */


/*NEW METHOD  CK : 27.01.2019*/
/*	gDb_tRamGeneralC1.i16ReturnValStart48XsFunc = vStart48Xs();/ Nouvelle méthode non fonctionnelle*/

	/*OLD METHOD*/
		if (u32CounterSrdo1 == gCRcv_tSRDO1_48XS.tOut.u32RcvCnt)
		{
			/* start message*/
			gCsr_tStart_48XS.u8Command = 1;
			gCsr_tStart_48XS.u8NodeId = 10;

			/* send start message*/
			gCSnd_tStart_48XS.tInp.boSndNow = TRUE;
		}


    /* SRDO 1 is received each 10ms (every cycle)*/
    /* it means that the counter shall increase every cycle, else the 48XS is not running*/
    if (u32CounterSrdo1 == gCRcv_tSRDO1_48XS.tOut.u32RcvCnt)
    {
          gCSnd_tSRDO4_48XS.tInp.eStart = SNDSTART_NA;   }	/* stop sending msg*/
    else{
          gCSnd_tSRDO4_48XS.tInp.eStart = SNDSTART_ACTIVE;  /* start sending msg*/
    }

    u32CounterSrdo1 = gCRcv_tSRDO1_48XS.tOut.u32RcvCnt;
}



//-----------------------------------------------------------------------------------------------------
//! @brief Start slave Module 48xs
//!
//! @retval R_OKAY			 Function executed without error
//! @retval R_BUSY NVMEM 	 Function is running
//! @retval R_TIMEOUT 		 Timeout is detected after a SDO request
//! @retval R_CHECKSUM		 Wrong CRC value of 48xs configuration
//! @retval R_SUPPORT 		 State not support by the machine state
//! @retval R_SIL_CRITICAL	 Watchdog or CPU state of 48xs is not running
//!
//! @globvar
//!		TEleTimAdr			tTimerTimeoutSdoRequest			Structure timer element
//!		TBloCRcv			gCRcv_tHearbeat_48XS			Structure of receive CAN block
//!		TBloCSnd			gCsr_tSdo_Request_48XS			Structure of send CAN block
//!		TDbRam48XsInputsC1	gDb_tRam48XsInputsC1			Structure Data variable list
//!		TDbNvParametersC1	gDb_tNvParametersC1				Structure parameter list
//!
//! @staticvar
//!		TUint8				u8State							State of the machine state
//!		TUint32				u32CounterHearbeatFrame			Counter number receive hearbeat CAN frame
//!		TUint32				u32CounterSdoReceiveFrame		Counter sdo receive CAN frame
//!		TUint8				u8CounterWaitTimeStarting48XS	counter use to wait a number of cycle after send the start can msg to 48XS
//!		TBoolean			boStart48XS						flag when the 48xs at receive the start can msg
//!		TUint8 				u8CounterTimerPreoperational	Counter when the salve module is in pre operational mode
//!
//! @created 20.01.2019 HYDAC/CK
//!
//! @change	03.02.2019 HYDAC/CK		- Add u8CounterTimerPreoperational to wait x cycle before send the first SDO request
//!			05.02.2020 HYDAC/CK		- Add SDO request to know index version of 48XS
//!			10.02.2020 HYDAC/CK		- Extract index version 48XS
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
ERetVal vStart48Xs(TVoid)
{
	/* local variable*/
	ERetVal eRetVal = R_OKAY;
	static TUint8	u8State = 0;
	static TUint32 u32CounterHearbeatFrame = 0;
	static TUint32 u32CounterSdoReceiveFrame = 0;
	TUint32		u32Dt;
	TBoolean	boTimerTimeoutSdoRequestStatus;
	TBoolean	boTimerTimeoutSdoRequestEvent;
	static TBoolean boStart48XS = FALSE;
	static TUint8	u8CounterWaitTimeStarting48XS = 0;
	const TUint8	u8cycleWaitTime = 30;
	static TUint8 u8CounterTimerPreoperational = 0;
	const TUint8 u8NbCycleWaitPreoperational = 2;
	static TUint8	u8CounterAttemptSdoRequest = 0;
	const TUint8 u8NbMaxAttemptSdoRequest = 2;

	/* ============================================================================================= */
	/* 										Timer management									     */
	/* ============================================================================================= */

	/* run block , get the status*/
	boTimerTimeoutSdoRequestStatus = boEleTimerCalculate(&tTimerTimeoutSdoRequest);

	/* get event of block*/
	boTimerTimeoutSdoRequestEvent = boEleTimerGetEvent (&tTimerTimeoutSdoRequest);

	/* ============================================================================================= */
	/* 										Machine state start 48xs process					     */
	/* ============================================================================================= */

	/* machine state to follow the start process*/
	switch(u8State)
	{
		/* case 0 : wait the first hearbeat frame from slave module*/
		case 0 :
			/* reset flag boStart48XS*/
			boStart48XS = FALSE;
			/* reset counter time*/
			u8CounterWaitTimeStarting48XS = 0;

			/* Check, if we receive the first hearbeat frame from slave module*/
			if(gCRcv_tHearbeat_48XS.tOut.u32RcvCnt != u32CounterHearbeatFrame)
			{
				/* check, if data value of state is 0, this means that the slave module is present on the CAN bus*/
				if(gCsr_tHearbeat_48XS.u8State == 0x7F)
				{
					u8CounterTimerPreoperational = u8CounterTimerPreoperational + 1;

					if(u8CounterTimerPreoperational >= u8NbCycleWaitPreoperational)
					{
						/* go to next state*/
						u8State = 1;
					}
				}
			}
			/* set busy state at return state*/
			eRetVal = R_BUSY;
			break;

		/* case 1 : Send CRC request of the first SRDO*/
		case 1 :
			u8CounterTimerPreoperational = 0;

			/* set Command code, indicates the type of command or response, as well as the size of the data when the message contains it*/
			gCsr_tSdo_Request_48XS.u8CCD = 0x40;

			/* Index of the parameter to write/read*/
			gCsr_tSdo_Request_48XS.u16Index = 0x13FF;

			/* Sub-index of the parameter to write/read*/
			gCsr_tSdo_Request_48XS.u8Sub_Index = 0x01;

			/* Set Data*/
			gCsr_tSdo_Request_48XS.u32Data = 0x000;

			/* Send first Sdo request to get first Srdo crc value*/
			gCSnd_tSdo_Request_48XS.tInp.boSndNow = TRUE;

			/* go to next state*/
			u8State = 2;

			break;

			/* case 2 : Receive CRC value of the first SRDO*/
			case 2 :

				/* start timer*/
				if(boTimerTimeoutSdoRequestStatus == FALSE && boTimerTimeoutSdoRequestStatus == FALSE)
				{
					u32EleTimerStart(&tTimerTimeoutSdoRequest);
				}

				/* check if timer is done*/
				if(boTimerTimeoutSdoRequestEvent == TRUE)
				{
					/* check if counter of sdo request is higher at X attempt*/
					if(u8CounterAttemptSdoRequest >= u8NbMaxAttemptSdoRequest)
					{
						/* go to state 100 : timeout sdo*/
						u8State = 100;
					}
					else
					{
						/* go to previous state to re-send sdo request*/
						u8State = 1;

						/* increase counter attempt sdo request*/
						u8CounterAttemptSdoRequest = u8CounterAttemptSdoRequest + 1;
					}
				}

				/* check, if we receive sdo answer frame*/
				if(gCRcv_tSdo_Answer_48XS.tOut.u32RcvCnt != u32CounterSdoReceiveFrame)
				{
					/* check if Command code, Index, sub-index, Crc value of SRDO1  corresponding to request Command code*/
					if(gCsr_tSdo_Answer_48XS.u8CCD == 0x4B &&
						gCsr_tSdo_Answer_48XS.u16Index == 0x13FF &&
						gCsr_tSdo_Answer_48XS.u8Sub_Index == 0x01
					)
					{
						/* reset timer*/
						eEleTimerManStop(&tTimerTimeoutSdoRequest,&u32Dt);

						/* check Crc value*/
						if(gCsr_tSdo_Answer_48XS.u32Data == gDb_tNvParametersC1.u16CRC_SRDO1)
						{
							/* go to next state*/
							u8State = 3;

							/* reset counter attempt sdo request*/
							u8CounterAttemptSdoRequest = 0;
						}
						else
						{
							/* go to next state*/
							u8State = 102;
						}
					}
				}

			break;

			/* case 3 : Send CRC request of the second SRDO*/
			case 3 :
				/* set Command code, indicates the type of command or response, as well as the size of the data when the message contains it*/
				gCsr_tSdo_Request_48XS.u8CCD = 0x40;

				/* Index of the parameter to write/read*/
				gCsr_tSdo_Request_48XS.u16Index = 0x13FF;

				/* Sub-index of the parameter to write/read*/
				gCsr_tSdo_Request_48XS.u8Sub_Index = 0x02;

				/* Set Data*/
				gCsr_tSdo_Request_48XS.u32Data = 0x000;

				/* Send  Sdo request to get Srdo crc value*/
				gCSnd_tSdo_Request_48XS.tInp.boSndNow = TRUE;

				/* go to next state*/
				u8State = 4;

				break;

			/* case 4 : Receive CRC value of the second SRDO*/
			case 4 :
				/* start timer*/
				if(boTimerTimeoutSdoRequestStatus == FALSE && boTimerTimeoutSdoRequestStatus == FALSE)
				{
					u32EleTimerStart(&tTimerTimeoutSdoRequest);
				}

				/* check if timer is done*/
				if(boTimerTimeoutSdoRequestEvent == TRUE)
				{
					/* check if counter of sdo request is higher at X attempt*/
					if(u8CounterAttemptSdoRequest >= u8NbMaxAttemptSdoRequest)
					{
						/* go to state 100 : timeout sdo*/
						u8State = 100;
					}
					else
					{
						/* go to previous state to re-send sdo request*/
						u8State = 3;

						/* increase counter attempt sdo request*/
						u8CounterAttemptSdoRequest = u8CounterAttemptSdoRequest + 1;
					}
				}

				/* check, if we receive sdo answer frame*/
				if(gCRcv_tSdo_Answer_48XS.tOut.u32RcvCnt != u32CounterSdoReceiveFrame)
				{
					/* check if Command code, Index, sub-index, Crc value of SRDO2  corresponding to request Command code*/
					if(gCsr_tSdo_Answer_48XS.u8CCD == 0x4B &&
						gCsr_tSdo_Answer_48XS.u16Index == 0x13FF &&
						gCsr_tSdo_Answer_48XS.u8Sub_Index == 0x02
					)
					{
						/* reset timer*/
						eEleTimerManStop(&tTimerTimeoutSdoRequest,&u32Dt);

						/* check Crc value*/
						if(gCsr_tSdo_Answer_48XS.u32Data == gDb_tNvParametersC1.u16CRC_SRDO2)
						{
							/* go to next state*/
							u8State = 5;

							/* reset counter attempt sdo request*/
							u8CounterAttemptSdoRequest = 0;
						}
						else
						{
							/* go to next state*/
							u8State = 102;
						}
					}
				}

				break;

			/* case 5 : Send CRC request of the third SRDO*/
			case 5 :
				/* set Command code, indicates the type of command or response, as well as the size of the data when the message contains it*/
				gCsr_tSdo_Request_48XS.u8CCD = 0x40;

				/* Index of the parameter to write/read*/
				gCsr_tSdo_Request_48XS.u16Index = 0x13FF;

				/* Sub-index of the parameter to write/read*/
				gCsr_tSdo_Request_48XS.u8Sub_Index = 0x03;

				/* Set Data*/
				gCsr_tSdo_Request_48XS.u32Data = 0x000;

				/* Send  Sdo request to get Srdo crc value*/
				gCSnd_tSdo_Request_48XS.tInp.boSndNow = TRUE;

				/* go to next state*/
				u8State = 6;

				break;

			/* case 6 : Receive CRC value of the third SRDO*/
			case 6 :
				/* start timer*/
				if(boTimerTimeoutSdoRequestStatus == FALSE && boTimerTimeoutSdoRequestStatus == FALSE)
				{
					u32EleTimerStart(&tTimerTimeoutSdoRequest);
				}

				/* check if timer is done*/
				if(boTimerTimeoutSdoRequestEvent == TRUE)
				{
					/* check if counter of sdo request is higher at X attempt*/
					if(u8CounterAttemptSdoRequest >= u8NbMaxAttemptSdoRequest)
					{
						/* go to state 100 : timeout sdo*/
						u8State = 100;
					}
					else
					{
						/* go to previous state to re-send sdo request*/
						u8State = 5;

						/* increase counter attempt sdo request*/
						u8CounterAttemptSdoRequest = u8CounterAttemptSdoRequest + 1;
					}
				}
				/* check, if we receive sdo answer frame*/
				if(gCRcv_tSdo_Answer_48XS.tOut.u32RcvCnt != u32CounterSdoReceiveFrame)
				{
					/* check if Command code, Index, sub-index, Crc value of SRDO3  corresponding to request Command code*/
					if(gCsr_tSdo_Answer_48XS.u8CCD == 0x4B &&
						gCsr_tSdo_Answer_48XS.u16Index == 0x13FF &&
						gCsr_tSdo_Answer_48XS.u8Sub_Index == 0x03
					)
					{
						/* reset timer*/
						eEleTimerManStop(&tTimerTimeoutSdoRequest,&u32Dt);

						/* check Crc value*/
						if(gCsr_tSdo_Answer_48XS.u32Data == gDb_tNvParametersC1.u16CRC_SRDO3)
						{
							/* go to next state*/
							u8State = 7;
							/* reset counter attempt sdo request*/
							u8CounterAttemptSdoRequest = 0;
						}
						else
						{
							/* go to next state*/
							u8State = 102;
						}
					}
				}
				break;

			/* case 7 : Send CRC request of the fourth SRDO*/
			case 7 :
				/* set Command code, indicates the type of command or response, as well as the size of the data when the message contains it*/
				gCsr_tSdo_Request_48XS.u8CCD = 0x40;

				/* Index of the parameter to write/read*/
				gCsr_tSdo_Request_48XS.u16Index = 0x13FF;

				/* Sub-index of the parameter to write/read*/
				gCsr_tSdo_Request_48XS.u8Sub_Index = 0x04;

				/* Set Data*/
				gCsr_tSdo_Request_48XS.u32Data = 0x000;

				/* Send  Sdo request to get Srdo crc value*/
				gCSnd_tSdo_Request_48XS.tInp.boSndNow = TRUE;

				/* go to next state*/
				u8State = 8;

				break;

			/* case 8 : Receive CRC value of the fourth SRDO*/
			case 8 :
				/* start timer*/
				if(boTimerTimeoutSdoRequestStatus == FALSE && boTimerTimeoutSdoRequestStatus == FALSE)
				{
					u32EleTimerStart(&tTimerTimeoutSdoRequest);
				}

				/* check if timer is done*/
				if(boTimerTimeoutSdoRequestEvent == TRUE)
				{
					/* check if counter of sdo request is higher at X attempt*/
					if(u8CounterAttemptSdoRequest >= u8NbMaxAttemptSdoRequest)
					{
						/* go to state 100 : timeout sdo*/
						u8State = 100;
					}
					else
					{
						/* go to previous state to re-send sdo request*/
						u8State = 7;

						/* increase counter attempt sdo request*/
						u8CounterAttemptSdoRequest = u8CounterAttemptSdoRequest + 1;
					}
				}

				/* check, if we receive sdo answer frame*/
				if(gCRcv_tSdo_Answer_48XS.tOut.u32RcvCnt != u32CounterSdoReceiveFrame)
				{
					/* check if Command code, Index, sub-index, Crc value of SRDO4  corresponding to request Command code*/
					if(gCsr_tSdo_Answer_48XS.u8CCD == 0x4B &&
						gCsr_tSdo_Answer_48XS.u16Index == 0x13FF &&
						gCsr_tSdo_Answer_48XS.u8Sub_Index == 0x04
					)
					{
						/* reset timer*/
						eEleTimerManStop(&tTimerTimeoutSdoRequest,&u32Dt);

						/* check Crc value*/
						if(gCsr_tSdo_Answer_48XS.u32Data == gDb_tNvParametersC1.u16CRC_SRDO4)
						{
							/* go to next state*/
							u8State = 9;
							/* reset counter attempt sdo request*/
							u8CounterAttemptSdoRequest = 0;
						}
						else
						{
							/* go to next state*/
							u8State = 102;
						}
					}
				}
				break;

			/* case 9 : Send CRC request of the fifth SRDO*/
			case 9 :
				/* set Command code, indicates the type of command or response, as well as the size of the data when the message contains it*/
				gCsr_tSdo_Request_48XS.u8CCD = 0x40;

				/* Index of the parameter to write/read*/
				gCsr_tSdo_Request_48XS.u16Index = 0x13FF;

				/* Sub-index of the parameter to write/read*/
				gCsr_tSdo_Request_48XS.u8Sub_Index = 0x05;

				/* Set Data*/
				gCsr_tSdo_Request_48XS.u32Data = 0x000;

				/* Send  Sdo request to get Srdo crc value*/
				gCSnd_tSdo_Request_48XS.tInp.boSndNow = TRUE;

				/* go to next state*/
				u8State = 10;

				break;

			/* case 10 : Receive CRC value of the fifth SRDO*/
			case 10 :
				/* start timer*/
				if(boTimerTimeoutSdoRequestStatus == FALSE && boTimerTimeoutSdoRequestStatus == FALSE)
				{
					u32EleTimerStart(&tTimerTimeoutSdoRequest);
				}

				/* check if timer is done*/
				if(boTimerTimeoutSdoRequestEvent == TRUE)
				{
					/* check if counter of sdo request is higher at X attempt*/
					if(u8CounterAttemptSdoRequest >= u8NbMaxAttemptSdoRequest)
					{
						/* go to state 100 : timeout sdo*/
						u8State = 100;
					}
					else
					{
						/* go to previous state to re-send sdo request*/
						u8State = 9;

						/* increase counter attempt sdo request*/
						u8CounterAttemptSdoRequest = u8CounterAttemptSdoRequest + 1;
					}
				}

				/* check, if we receive sdo answer frame*/
				if(gCRcv_tSdo_Answer_48XS.tOut.u32RcvCnt != u32CounterSdoReceiveFrame)
				{
					/* check if Command code, Index, sub-index, Crc value of SRDO5  corresponding to request Command code*/
					if(gCsr_tSdo_Answer_48XS.u8CCD == 0x4B &&
						gCsr_tSdo_Answer_48XS.u16Index == 0x13FF &&
						gCsr_tSdo_Answer_48XS.u8Sub_Index == 0x05
					)
					{
						/* reset timer*/
						eEleTimerManStop(&tTimerTimeoutSdoRequest,&u32Dt);

						/* check Crc value*/
						if(gCsr_tSdo_Answer_48XS.u32Data == gDb_tNvParametersC1.u16CRC_SRDO5)
						{
							/* go to next state*/
							u8State = 11;
							/* reset counter attempt sdo request*/
							u8CounterAttemptSdoRequest = 0;
						}
						else
						{
							/* go to next state*/
							u8State = 102;
						}
					}
				}
				break;

			/* case 11 : Send CRC request of the sixth SRDO*/
			case 11 :
				/* set Command code, indicates the type of command or response, as well as the size of the data when the message contains it*/
				gCsr_tSdo_Request_48XS.u8CCD = 0x40;

				/* Index of the parameter to write/read*/
				gCsr_tSdo_Request_48XS.u16Index = 0x13FF;

				/* Sub-index of the parameter to write/read*/
				gCsr_tSdo_Request_48XS.u8Sub_Index = 0x06;

				/* Set Data*/
				gCsr_tSdo_Request_48XS.u32Data = 0x000;

				/* Send  Sdo request to get Srdo crc value*/
				gCSnd_tSdo_Request_48XS.tInp.boSndNow = TRUE;

				/* go to next state*/
				u8State = 12;

				break;

			/* case 12 : Receive CRC value of the sixth SRDO*/
			case 12 :
				/* start timer*/
				if(boTimerTimeoutSdoRequestStatus == FALSE && boTimerTimeoutSdoRequestStatus == FALSE)
				{
					u32EleTimerStart(&tTimerTimeoutSdoRequest);
				}

				/* check if timer is done*/
				if(boTimerTimeoutSdoRequestEvent == TRUE)
				{
					/* check if counter of sdo request is higher at X attempt*/
					if(u8CounterAttemptSdoRequest >= u8NbMaxAttemptSdoRequest)
					{
						/* go to state 100 : timeout sdo*/
						u8State = 100;
					}
					else
					{
						/* go to previous state to re-send sdo request*/
						u8State = 11;

						/* increase counter attempt sdo request*/
						u8CounterAttemptSdoRequest = u8CounterAttemptSdoRequest + 1;
					}
				}

				/* check, if we receive sdo answer frame*/
				if(gCRcv_tSdo_Answer_48XS.tOut.u32RcvCnt != u32CounterSdoReceiveFrame)
				{
					/* check if Command code, Index, sub-index, Crc value of SRDO6  corresponding to request Command code*/
					if(gCsr_tSdo_Answer_48XS.u8CCD == 0x4B &&
						gCsr_tSdo_Answer_48XS.u16Index == 0x13FF &&
						gCsr_tSdo_Answer_48XS.u8Sub_Index == 0x06
					)
					{
						/* reset timer*/
						eEleTimerManStop(&tTimerTimeoutSdoRequest,&u32Dt);

						/* check Crc value*/
						if(gCsr_tSdo_Answer_48XS.u32Data == gDb_tNvParametersC1.u16CRC_SRDO6)
						{
							/* go to next state*/
							u8State = 13;
							/* reset counter attempt sdo request*/
							u8CounterAttemptSdoRequest = 0;
						}
						else
						{
							/* go to next state*/
							u8State = 102;
						}
					}
				}
				break;

			/* case 13 : Send CRC request of the seventh SRDO*/
			case 13 :
				/* set Command code, indicates the type of command or response, as well as the size of the data when the message contains it*/
				gCsr_tSdo_Request_48XS.u8CCD = 0x40;

				/* Index of the parameter to write/read*/
				gCsr_tSdo_Request_48XS.u16Index = 0x13FF;

				/* Sub-index of the parameter to write/read*/
				gCsr_tSdo_Request_48XS.u8Sub_Index = 0x07;

				/* Set Data*/
				gCsr_tSdo_Request_48XS.u32Data = 0x000;

				/* Send  Sdo request to get Srdo crc value*/
				gCSnd_tSdo_Request_48XS.tInp.boSndNow = TRUE;

				/* go to next state*/
				u8State = 14;

				break;

			/* case 14 : Receive CRC value of the seventh SRDO*/
			case 14 :
				/* start timer*/
				if(boTimerTimeoutSdoRequestStatus == FALSE && boTimerTimeoutSdoRequestStatus == FALSE)
				{
					u32EleTimerStart(&tTimerTimeoutSdoRequest);
				}

				/* check if timer is done*/
				if(boTimerTimeoutSdoRequestEvent == TRUE)
				{
					/* check if counter of sdo request is higher at X attempt*/
					if(u8CounterAttemptSdoRequest >= u8NbMaxAttemptSdoRequest)
					{
						/* go to state 100 : timeout sdo*/
						u8State = 100;
					}
					else
					{
						/* go to previous state to re-send sdo request*/
						u8State = 13;

						/* increase counter attempt sdo request*/
						u8CounterAttemptSdoRequest = u8CounterAttemptSdoRequest + 1;
					}
				}

				/* check, if we receive sdo answer frame*/
				if(gCRcv_tSdo_Answer_48XS.tOut.u32RcvCnt != u32CounterSdoReceiveFrame)
				{
					/* check if Command code, Index, sub-index, Crc value of SRDO7  corresponding to request Command code*/
					if(gCsr_tSdo_Answer_48XS.u8CCD == 0x4B &&
						gCsr_tSdo_Answer_48XS.u16Index == 0x13FF &&
						gCsr_tSdo_Answer_48XS.u8Sub_Index == 0x07
					)
					{
						/* reset timer*/
						eEleTimerManStop(&tTimerTimeoutSdoRequest,&u32Dt);

						/* check Crc value*/
						if(gCsr_tSdo_Answer_48XS.u32Data == gDb_tNvParametersC1.u16CRC_SRDO7)
						{
							/* go to next state*/
							u8State = 15;
							/* reset counter attempt sdo request*/
							u8CounterAttemptSdoRequest = 0;
						}
						else
						{
							/* go to next state*/
							u8State = 102;
						}
					}
				}
				break;

			/* case 15 : Send CRC request of the eighth SRDO*/
			case 15 :
				/* set Command code, indicates the type of command or response, as well as the size of the data when the message contains it*/
				gCsr_tSdo_Request_48XS.u8CCD = 0x40;

				/* Index of the parameter to write/read*/
				gCsr_tSdo_Request_48XS.u16Index = 0x13FF;

				/* Sub-index of the parameter to write/read*/
				gCsr_tSdo_Request_48XS.u8Sub_Index = 0x08;

				/* Set Data*/
				gCsr_tSdo_Request_48XS.u32Data = 0x000;

				/* Send  Sdo request to get Srdo crc value*/
				gCSnd_tSdo_Request_48XS.tInp.boSndNow = TRUE;

				/* go to next state*/
				u8State = 16;

				break;

			/* case 16 : Receive CRC value of the eighth SRDO*/
			case 16 :
				/* start timer*/
				if(boTimerTimeoutSdoRequestStatus == FALSE && boTimerTimeoutSdoRequestStatus == FALSE)
				{
					u32EleTimerStart(&tTimerTimeoutSdoRequest);
				}

				/* check if timer is done*/
				if(boTimerTimeoutSdoRequestEvent == TRUE)
				{
					/* check if counter of sdo request is higher at X attempt*/
					if(u8CounterAttemptSdoRequest >= u8NbMaxAttemptSdoRequest)
					{
						/* go to state 100 : timeout sdo*/
						u8State = 100;
					}
					else
					{
						/* go to previous state to re-send sdo request*/
						u8State = 15;

						/* increase counter attempt sdo request*/
						u8CounterAttemptSdoRequest = u8CounterAttemptSdoRequest + 1;
					}
				}

				/* check, if we receive sdo answer frame*/
				if(gCRcv_tSdo_Answer_48XS.tOut.u32RcvCnt != u32CounterSdoReceiveFrame)
				{
					/* check if Command code, Index, sub-index, Crc value of SRDO8  corresponding to request Command code*/
					if(gCsr_tSdo_Answer_48XS.u8CCD == 0x4B &&
						gCsr_tSdo_Answer_48XS.u16Index == 0x13FF &&
						gCsr_tSdo_Answer_48XS.u8Sub_Index == 0x08
					)
					{
						/* reset timer*/
						eEleTimerManStop(&tTimerTimeoutSdoRequest,&u32Dt);

						/* check Crc value*/
						if(gCsr_tSdo_Answer_48XS.u32Data == gDb_tNvParametersC1.u16CRC_SRDO8)
						{
							/* go to next state*/
							u8State = 17;
							/* reset counter attempt sdo request*/
							u8CounterAttemptSdoRequest = 0;
						}
						else
						{
							/* go to next state*/
							u8State = 102;
						}
					}
				}
				break;

			/* case 17 : Send CRC request of the ninth SRDO*/
			case 17 :
				/* set Command code, indicates the type of command or response, as well as the size of the data when the message contains it*/
				gCsr_tSdo_Request_48XS.u8CCD = 0x40;

				/* Index of the parameter to write/read*/
				gCsr_tSdo_Request_48XS.u16Index = 0x13FF;

				/* Sub-index of the parameter to write/read*/
				gCsr_tSdo_Request_48XS.u8Sub_Index = 0x09;

				/* Set Data*/
				gCsr_tSdo_Request_48XS.u32Data = 0x000;

				/* Send  Sdo request to get Srdo crc value*/
				gCSnd_tSdo_Request_48XS.tInp.boSndNow = TRUE;

				/* go to next state*/
				u8State = 18;

				break;

			/* case 18 : Receive CRC value of the ninth SRDO*/
			case 18 :
				/* start timer*/
				if(boTimerTimeoutSdoRequestStatus == FALSE && boTimerTimeoutSdoRequestStatus == FALSE)
				{
					u32EleTimerStart(&tTimerTimeoutSdoRequest);
				}

				/* check if timer is done*/
				if(boTimerTimeoutSdoRequestEvent == TRUE)
				{
					/* check if counter of sdo request is higher at X attempt*/
					if(u8CounterAttemptSdoRequest >= u8NbMaxAttemptSdoRequest)
					{
						/* go to state 100 : timeout sdo*/
						u8State = 100;
					}
					else
					{
						/* go to previous state to re-send sdo request*/
						u8State = 17;

						/* increase counter attempt sdo request*/
						u8CounterAttemptSdoRequest = u8CounterAttemptSdoRequest + 1;
					}
				}

				/* check, if we receive sdo answer frame*/
				if(gCRcv_tSdo_Answer_48XS.tOut.u32RcvCnt != u32CounterSdoReceiveFrame)
				{
					/* check if Command code, Index, sub-index, Crc value of SRDO9  corresponding to request Command code*/
					if(gCsr_tSdo_Answer_48XS.u8CCD == 0x4B &&
						gCsr_tSdo_Answer_48XS.u16Index == 0x13FF &&
						gCsr_tSdo_Answer_48XS.u8Sub_Index == 0x09
					)
					{
						/* reset timer*/
						eEleTimerManStop(&tTimerTimeoutSdoRequest,&u32Dt);

						/* check Crc value*/
						if(gCsr_tSdo_Answer_48XS.u32Data == gDb_tNvParametersC1.u16CRC_SRDO9)
						{
							/* go to next state*/
							u8State = 19;
							/* reset counter attempt sdo request*/
							u8CounterAttemptSdoRequest = 0;
						}
						else
						{
							/* go to next state*/
							u8State = 102;
						}
					}
				}
				break;

			/* case 19 : Send CRC request of the tenth SRDO*/
			case 19 :
				/* set Command code, indicates the type of command or response, as well as the size of the data when the message contains it*/
				gCsr_tSdo_Request_48XS.u8CCD = 0x40;

				/* Index of the parameter to write/read*/
				gCsr_tSdo_Request_48XS.u16Index = 0x13FF;

				/* Sub-index of the parameter to write/read*/
				gCsr_tSdo_Request_48XS.u8Sub_Index = 0x0A;

				/* Set Data*/
				gCsr_tSdo_Request_48XS.u32Data = 0x000;

				/* Send  Sdo request to get Srdo crc value*/
				gCSnd_tSdo_Request_48XS.tInp.boSndNow = TRUE;

				/* go to next state*/
				u8State = 20;

				break;

			/* case 20 : Receive CRC value of the ninth SRDO*/
			case 20 :
				/* start timer*/
				if(boTimerTimeoutSdoRequestStatus == FALSE && boTimerTimeoutSdoRequestStatus == FALSE)
				{
					u32EleTimerStart(&tTimerTimeoutSdoRequest);
				}

				/* check if timer is done*/
				if(boTimerTimeoutSdoRequestEvent == TRUE)
				{
					/* check if counter of sdo request is higher at X attempt*/
					if(u8CounterAttemptSdoRequest >= u8NbMaxAttemptSdoRequest)
					{
						/* go to state 100 : timeout sdo*/
						u8State = 100;
					}
					else
					{
						/* go to previous state to re-send sdo request*/
						u8State = 19;

						/* increase counter attempt sdo request*/
						u8CounterAttemptSdoRequest = u8CounterAttemptSdoRequest + 1;
					}
				}

				/* check, if we receive sdo answer frame*/
				if(gCRcv_tSdo_Answer_48XS.tOut.u32RcvCnt != u32CounterSdoReceiveFrame)
				{
					/* check if Command code, Index, sub-index, Crc value of SRD10  corresponding to request Command code*/
					if(gCsr_tSdo_Answer_48XS.u8CCD == 0x4B &&
						gCsr_tSdo_Answer_48XS.u16Index == 0x13FF &&
						gCsr_tSdo_Answer_48XS.u8Sub_Index == 0x0A
					)
					{
						/* reset timer*/
						eEleTimerManStop(&tTimerTimeoutSdoRequest,&u32Dt);

						/* check Crc value*/
						if(gCsr_tSdo_Answer_48XS.u32Data == gDb_tNvParametersC1.u16CRC_SRDO10)
						{
							/* go to next state*/
							u8State = 21;
							/* reset counter attempt sdo request*/
							u8CounterAttemptSdoRequest = 0;
						}
						else
						{
							/* go to next state*/
							u8State = 102;
						}
					}
				}
				break;

			/* case 21 :  Send CRC request of Diagnostic state CPU*/
			case 21 :

				/* set Command code, indicates the type of command or response, as well as the size of the data when the message contains it*/
				gCsr_tSdo_Request_48XS.u8CCD = 0x40;

				/* Index of the parameter to write/read*/
				gCsr_tSdo_Request_48XS.u16Index = 0x3003;

				/* Sub-index of the parameter to write/read*/
				gCsr_tSdo_Request_48XS.u8Sub_Index = 0x01;

				/* Set Data*/
				gCsr_tSdo_Request_48XS.u32Data = 0x000;

				/* Send  Sdo request to get Srdo crc value*/
				gCSnd_tSdo_Request_48XS.tInp.boSndNow = TRUE;

				/* go to next state*/
				u8State = 22;

				break;

			/* case 22 : Receive Diagnostic state CPU value*/
			case 22 :
				/* start timer*/
				if(boTimerTimeoutSdoRequestStatus == FALSE && boTimerTimeoutSdoRequestStatus == FALSE)
				{
					u32EleTimerStart(&tTimerTimeoutSdoRequest);
				}

				/* check if timer is done*/
				if(boTimerTimeoutSdoRequestEvent == TRUE)
				{
					/* check if counter of sdo request is higher at X attempt*/
					if(u8CounterAttemptSdoRequest >= u8NbMaxAttemptSdoRequest)
					{
						/* go to state 100 : timeout sdo*/
						u8State = 100;
					}
					else
					{
						/* go to previous state to re-send sdo request*/
						u8State = 21;

						/* increase counter attempt sdo request*/
						u8CounterAttemptSdoRequest = u8CounterAttemptSdoRequest + 1;
					}
				}

				/* check, if we receive sdo answer frame*/
				if(gCRcv_tSdo_Answer_48XS.tOut.u32RcvCnt != u32CounterSdoReceiveFrame)
				{
					/* check if Command code, Index, sub-index, Crc value of Diagnostic state CPU  corresponding to request Command code*/
					if(gCsr_tSdo_Answer_48XS.u8CCD == 0x4F &&
						gCsr_tSdo_Answer_48XS.u16Index == 0x3003 &&
						gCsr_tSdo_Answer_48XS.u8Sub_Index == 0x01
					)
					{
						/* reset timer*/
						eEleTimerManStop(&tTimerTimeoutSdoRequest,&u32Dt);

						/* check data value*/
						if(gCsr_tSdo_Answer_48XS.u32Data == 0x06|| gCsr_tSdo_Answer_48XS.u32Data == 0x05)
						{
							/* go to next state*/
							u8State = 23;
							/* reset counter attempt sdo request*/
							u8CounterAttemptSdoRequest = 0;
						}
						else
						{
							/* go to next state*/
							u8State = 101;
						}
					}
				}
				break;

			/* case 23 :  Send CRC request of Diagnostic state Watchdog CPU*/
			case 23 :

				/* set Command code, indicates the type of command or response, as well as the size of the data when the message contains it*/
				gCsr_tSdo_Request_48XS.u8CCD = 0x40;

				/* Index of the parameter to write/read*/
				gCsr_tSdo_Request_48XS.u16Index = 0x3003;

				/* Sub-index of the parameter to write/read*/
				gCsr_tSdo_Request_48XS.u8Sub_Index = 0x09;

				/* Set Data*/
				gCsr_tSdo_Request_48XS.u32Data = 0x000;

				/* Send  Sdo request to get Srdo crc value*/
				gCSnd_tSdo_Request_48XS.tInp.boSndNow = TRUE;

				/* go to next state*/
				u8State = 24;

				break;

			/* case 24 : Receive Diagnostic state Watchdog CPU value*/
			case 24 :
				/* start timer*/
				if(boTimerTimeoutSdoRequestStatus == FALSE && boTimerTimeoutSdoRequestStatus == FALSE)
				{
					u32EleTimerStart(&tTimerTimeoutSdoRequest);
				}

				/* check if timer is done*/
				if(boTimerTimeoutSdoRequestEvent == TRUE)
				{
					/* check if counter of sdo request is higher at X attempt*/
					if(u8CounterAttemptSdoRequest >= u8NbMaxAttemptSdoRequest)
					{
						/* go to state 100 : timeout sdo*/
						u8State = 100;
					}
					else
					{
						/* go to previous state to re-send sdo request*/
						u8State = 23;

						/* increase counter attempt sdo request*/
						u8CounterAttemptSdoRequest = u8CounterAttemptSdoRequest + 1;
					}
				}

				/* check, if we receive sdo answer frame*/
				if(gCRcv_tSdo_Answer_48XS.tOut.u32RcvCnt != u32CounterSdoReceiveFrame)
				{
					/* check if Command code, Index, sub-index, Crc value of Diagnostic state Watchdog CPU  corresponding to request Command code*/
					if(gCsr_tSdo_Answer_48XS.u8CCD == 0x4F &&
						gCsr_tSdo_Answer_48XS.u16Index == 0x3003 &&
						gCsr_tSdo_Answer_48XS.u8Sub_Index == 0x09
					)
					{
						/* reset timer*/
						eEleTimerManStop(&tTimerTimeoutSdoRequest,&u32Dt);

						/* check data value*/
						if(gCsr_tSdo_Answer_48XS.u32Data == 0x06)
						{
							/* go to next state*/
							u8State = 25;
							/* reset counter attempt sdo request*/
							u8CounterAttemptSdoRequest = 0;
						}
						else
						{
							/* go to next state*/
							u8State = 101;
						}
					}
				}
				break;

			/* case 25 : Send sdo request index version 48xs*/
			case 25 :

				/* set Command code, indicates the type of command or response, as well as the size of the data when the message contains it*/
				gCsr_tSdo_Request_48XS.u8CCD = 0x40;

				/* Index of the parameter to write/read*/
				gCsr_tSdo_Request_48XS.u16Index = 0x203A;

				/* Sub-index of the parameter to write/read*/
				gCsr_tSdo_Request_48XS.u8Sub_Index = 0x0B;

				/* Set Data*/
				gCsr_tSdo_Request_48XS.u32Data = 0x000;

				/* Send  Sdo request to get index version of 48xs*/
				gCSnd_tSdo_Request_48XS.tInp.boSndNow = TRUE;

				/* go to next state*/
				u8State = 26;
				break;

			/* case 26 : receive index version 48xs*/
			case 26 :
				/* start timer*/
				if(boTimerTimeoutSdoRequestStatus == FALSE && boTimerTimeoutSdoRequestStatus == FALSE)
				{
					u32EleTimerStart(&tTimerTimeoutSdoRequest);
				}

				/* check if timer is done*/
				if(boTimerTimeoutSdoRequestEvent == TRUE)
				{
					/* check if counter of sdo request is higher at X attempt*/
					if(u8CounterAttemptSdoRequest >= u8NbMaxAttemptSdoRequest)
					{
						/* go to state 100 : timeout sdo*/
						u8State = 100;
					}
					else
					{
						/*go to previous state to re-send sdo request*/
						u8State = 25;

						/* increase counter attempt sdo request*/
						u8CounterAttemptSdoRequest = u8CounterAttemptSdoRequest + 1;
					}
				}

				/* check, if we receive sdo answer frame*/
				if(gCRcv_tSdo_Answer_48XS.tOut.u32RcvCnt != u32CounterSdoReceiveFrame)
				{
					/* check if Command code, Index, sub-index, Crc value of Diagnostic state Watchdog CPU  corresponding to request Command code*/
					if(gCsr_tSdo_Answer_48XS.u8CCD == 0x43 &&
						gCsr_tSdo_Answer_48XS.u16Index == 0x203A &&
						gCsr_tSdo_Answer_48XS.u8Sub_Index == 0x0B
					)
					{
						/* get data value*/
						gDb_tRamGeneralC1.u32IndexVersion48Xs = gCsr_tSdo_Answer_48XS.u32Data;
						/* extract data value*/
						gDb_tRamGeneralC1.u8Major_48XS =  (TUint8)(gDb_tRamGeneralC1.u32IndexVersion48Xs >> 24);
						gDb_tRamGeneralC1.u8Minor_48XS =  (TUint8)(gDb_tRamGeneralC1.u32IndexVersion48Xs >> 16);
						gDb_tRamGeneralC1.u8Patch_48XS =  (TUint8)(gDb_tRamGeneralC1.u32IndexVersion48Xs >> 8);
						gDb_tRamGeneralC1.u8Custom_48XS = (TUint8)(gDb_tRamGeneralC1.u32IndexVersion48Xs);

						/* go to next state*/
						u8State = 27;
						/* reset counter attempt sdo request*/
						u8CounterAttemptSdoRequest = 0;
					}
				}
					break;

			/* case 27 : Send start frame to slave module*/
			case 27 :
				/* set data start frame*/
				gCsr_tStart_48XS.u8Command = 0x01;
				gCsr_tStart_48XS.u8NodeId = 0x0A;

				/* Send start frame to slave module*/
				gCSnd_tStart_48XS.tInp.boSndNow = TRUE;

				/* go to next state*/
				u8State = 99;

				break;

			/* case 99 : start 48xs slave module is good*/
			case 99 :
				/* set return value*/
				eRetVal = R_OKAY;

				/* check if timeout failur eof hearbeat 48xs msg is detected OR heartbeat48xs state is equal to PRE_OPERATION 7F and the flag of stat 48xs is true*/
				if(boBloCRcvGetErrStaBit(&gCRcv_tHearbeat_48XS,DM_CRCV_TIMEOUT) || (gDb_tRam48XsInputsC1.u8Hearbeat48Xs == 0x7F && boStart48XS == TRUE))
				{
					u8State = 0;
				}

				/* check if counter wait time cycle is over or equal to cycle wait time*/
				if(u8CounterWaitTimeStarting48XS >= u8cycleWaitTime)
				{
					/* set flag boStart48XS*/
					boStart48XS = TRUE;
				}
				else
				{
					/* increase timer cycle*/
					u8CounterWaitTimeStarting48XS++;
				}
				break;

			/* case 100 : timeout sdo request detected*/
			case 100:
				/* set timeout Sdo request*/
				eRetVal = R_TIMEOUT;
				break;

			/* case 101 : timeout sdo request detected*/
			case 101:
				/* set Sil critical Diagnostic state Watchdog or CPU is not running*/
				eRetVal = R_SIL_CRITICAL;
				break;

			/* case 102 : error checksum value of 48xs configuration*/
			case 102:
				/* set error checksum*/
				eRetVal = R_CHECKSUM;
				break;

		/* default state*/
		default:
			eRetVal = R_SUPPORT;
			break;
	}

	/* ============================================================================================= */
	/* 										Receive counter frame								     */
	/* ============================================================================================= */
	/* get the actual receive counter value of hearbeat frame*/
	u32CounterHearbeatFrame = gCRcv_tHearbeat_48XS.tOut.u32RcvCnt ;
	/* get the actual receive counter value of Sdo answer frame*/
	u32CounterSdoReceiveFrame = gCRcv_tSdo_Answer_48XS.tOut.u32RcvCnt;

	/* ============================================================================================= */
	/* 										Return value										     */
	/* ============================================================================================= */
	/* return value of this function*/
	return eRetVal;
}
