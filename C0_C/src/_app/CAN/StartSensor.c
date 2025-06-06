
//==================================================================================================
//! @file StartSensor.c
//! @brief Start sensor on bus
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 25.01.2019 HYDAC/CK
//! @history: #- CK 25.01.2019 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "StartSensor.h"

//-----------------------------------------------------------------------------------------------------
//! @brief Start sensor on bus
//!
//!
//! @globvar
//!		TCanSigRecStartSensor 	gCsr_tStartSensor			Structure of signal CAN
//!		TBloCSnd				gCSnd_tStartSensor			Structure of send CAN block
//!		TBloCRcv				gCRcv_tDeversFrame1			Structure of reveice CAN block
//!		TBloCRcv 				gCRcv_tDeversFrame2			Structure of reveice CAN block
//!		TBloCRcv 				gCRcv_tEncodeurTurret1		Structure of reveice CAN block
//!		TBloCRcv 				gCRcv_tEncodeurTurret2		Structure of reveice CAN block
//!		TBloCRcv 				gCRcv_tMastMeasure			Structure of reveice CAN block
//!
//! @staticvar
//!
//! @created 25.01.2019 HYDAC/CK
//!
//! @change  24.07.2019 HYDAC/CK - add start sensor with timeout failure
//!			 17.01.2019 HYDAC/CK - change the frequency of transmission of start messages at each cycle to a frequency defined by the cycle time parameter of the message
//!			 28.01.2019 HYDAC/CK - Filling of the part  @globar and @staticvar in the header of the function
//!			 19.02.2019 HYDAC/CK - Add sdo request to change frequency transmission of EncodeurTurret1 and EncodeurTurret2, call function in comment
//! @care
//! @todo
//
//07.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vStartSensor(TVoid)
{
    /* ============================================================================================= */
  	/* 										Start Sensor										     */
  	/* ============================================================================================= */
	// check , if the failure timeout of data frame is detected
	if(boBloCRcvGetErrStaBit(&gCRcv_tDeversFrame1,DM_CRCV_TIMEOUT))
	{
		// set command to start sensor ( 1 = start , 8 = stop)
		gCsr_tStartSensor.u8Command = 1;
		// set node ID of Devers1 sensor
		gCsr_tStartSensor.u8NodeId = 43;

		// sends sensor start frame cycle
		gCSnd_tStartSensor.tInp.eStart = SNDSTART_ACTIVE;
	}
	else
	{
		// stop sends sensor start frame cycle
		gCSnd_tStartSensor.tInp.eStart = SNDSTART_NA;
	}

	// check , if the failure timeout of data frame is detected
	if(boBloCRcvGetErrStaBit(&gCRcv_tDeversFrame2,DM_CRCV_TIMEOUT))
	{
		// set command to start sensor ( 1 = start , 8 = stop)
		gCsr_tStartSensor.u8Command = 1;
		// set node ID of Devers2 sensor
		gCsr_tStartSensor.u8NodeId = 44;

		// sends sensor start frame cycle
		gCSnd_tStartSensor.tInp.eStart = SNDSTART_ACTIVE;
	}
	else
	{
		// stop sends sensor start frame cycle
		gCSnd_tStartSensor.tInp.eStart = SNDSTART_NA;
	}

	// check , if the failure timeout of data frame is detected
	if(boBloCRcvGetErrStaBit(&gCRcv_tEncodeurTurret1,DM_CRCV_TIMEOUT))
	{
		// set command to start sensor ( 1 = start , 8 = stop)
		gCsr_tStartSensor.u8Command = 1;
		// set node ID of Encodeur Turret1 sensor
		gCsr_tStartSensor.u8NodeId = 51;

		// sends sensor start frame cycle
		gCSnd_tStartSensor.tInp.eStart = SNDSTART_ACTIVE;
	}
	else
	{
		// stop sends sensor start frame cycle
		gCSnd_tStartSensor.tInp.eStart = SNDSTART_NA;
	}

	// check , if the failure timeout of data frame is detected
	if(boBloCRcvGetErrStaBit(&gCRcv_tEncodeurTurret2,DM_CRCV_TIMEOUT))
	{
		// set command to start sensor ( 1 = start , 8 = stop)
		gCsr_tStartSensor.u8Command = 1;
		// set node ID of Encodeur Turret2 sensor
		gCsr_tStartSensor.u8NodeId = 52;

		// sends sensor start frame cycle
		gCSnd_tStartSensor.tInp.eStart = SNDSTART_ACTIVE;
	}
	else
	{
		// stop sends sensor start frame cycle
		gCSnd_tStartSensor.tInp.eStart = SNDSTART_NA;
	}

	//boStaterMotor
	TBoolean boStaterMotor;
	if (gDb_tRamEcuInputsC0.eStarterMotorState == GE_DI_ON)
		boStaterMotor = TRUE;
	else
		boStaterMotor = FALSE;

	//FallingboStaterMotor
	static TBoolean PreviousboStaterMotor = FALSE;
	TBoolean FallingboStaterMotor = FALSE;
	if (boStaterMotor == FALSE && PreviousboStaterMotor == TRUE)
		FallingboStaterMotor = TRUE;
	// Memorize the previous value
	PreviousboStaterMotor = boStaterMotor;

	if(boBloCRcvGetErrStaBit(&gCRcv_tMastMeasure,DM_CRCV_TIMEOUT)

	|| 	FallingboStaterMotor == TRUE

	)
	{
		gCsr_tStartSensor.u8Command = 1;
		gCsr_tStartSensor.u8NodeId = 49;



			// send start message
			gCSnd_tStartSensor.tInp.boSndNow = TRUE;

	}
}
	/* ============================================================================================= */
	/* 										Sdo Request Encodeur Turret							     */
	/* ============================================================================================= */

//-----------------------------------------------------------------------------------------------------
//! @brief Sdo request encodeur turret 1 sensor
//!
//!
//! @globvar
//!		TCanSigRecStartSensor 	gCsr_tStartSensor			Structure of signal CAN
//!		TBloCSnd				gCSnd_tStartSensor			Structure of send CAN block
//!		TBloCRcv				gCRcv_tDeversFrame1			Structure of reveice CAN block
//!		TBloCRcv 				gCRcv_tDeversFrame2			Structure of reveice CAN block
//!		TBloCRcv 				gCRcv_tEncodeurTurret1		Structure of reveice CAN block
//!		TBloCRcv 				gCRcv_tEncodeurTurret2		Structure of reveice CAN block
//!		TBloCRcv 				gCRcv_tMastMeasure			Structure of reveice CAN block
//!
//! @staticvar
//!
//! @created  19.02.2019 HYDAC/CK
//!
//! @change
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vSdoRequestEncodeurTurret1Sensor(TVoid)
{
	// declare local variable
	static TUint8 u8StateEncdTurret1 = 0;
	static TUint32 u32CounterEncodeurTurret1Frame = 0;
	TBoolean	boTimerTimeoutSdoRequestEncodeurTurret1Status;
	TBoolean	boTimerTimeoutSdoRequestEncodeurTurret1Event;
	TUint32		u32Dt;
	static TUint8	u8CounterAttemptSdoRequestEncdTurret1 = 0;
	const TUint8 u8NbMaxAttemptSdoRequest = 2;
	static TUint32 u32CounterSdoAnswerEncodeurTurret1Frame = 0;

	/* ============================================================================================= */
	/* 										Timer management									     */
	/* ============================================================================================= */
	// run block , get the status
	boTimerTimeoutSdoRequestEncodeurTurret1Status = boEleTimerCalculate(&tTimerTimeoutSdoRequestEncodeurTurret1);

	// get event of block
	boTimerTimeoutSdoRequestEncodeurTurret1Event = boEleTimerGetEvent (&tTimerTimeoutSdoRequestEncodeurTurret1);

	// reset flag timeout sdo request
	gDb_tRamCanSensorC0.boTimeoutSdoReqDetectedEncdTurret1 = FALSE;
	// machine state to follow the start process
	switch(u8StateEncdTurret1)
	{
	// case 0 : wait receive data frame
	case 0 :
		// Check, if we receive data frame from Encodeur turret 1
		 if(gCRcv_tEncodeurTurret1.tOut.u32RcvCnt != u32CounterEncodeurTurret1Frame)
		 {
			// go to next state
			 u8StateEncdTurret1 = 1;
		 }
		break;
	// case 1 :Send Sdo request to change frequency transmission
	case 1 :
		// set Command code, indicates the type of command or response, as well as the size of the data when the message contains it
		gCsr_tSdo_Request_Encodeur_Turret1.u8CCD = 0x2B;

		// Index of the parameter to write/read
		gCsr_tSdo_Request_Encodeur_Turret1.u16Index = 0x6200;

		// Sub-index of the parameter to write/read
		gCsr_tSdo_Request_Encodeur_Turret1.u8Sub_Index = 0x00;

		// Set Data
		gCsr_tSdo_Request_Encodeur_Turret1.u32Data = 0x32;

		// Send first Sdo request
		gCSnd_tSdo_Request_Encodeur_Turret.tInp.boSndNow = TRUE;

		// go to next state
		u8StateEncdTurret1 = 2;

		break;
	// case 2 : Receive Sdo request
	case 2:
		// start timer
		if(boTimerTimeoutSdoRequestEncodeurTurret1Status == FALSE && boTimerTimeoutSdoRequestEncodeurTurret1Event == FALSE)
		{
			u32EleTimerStart(&tTimerTimeoutSdoRequestEncodeurTurret1);
		}

		// check if timer is done
		if(boTimerTimeoutSdoRequestEncodeurTurret1Event == TRUE)
		{
			// check if counter of sdo request is higher at X attempt
			if(u8CounterAttemptSdoRequestEncdTurret1 >= u8NbMaxAttemptSdoRequest)
			{
				// go to state 100 : timeout sdo
				u8StateEncdTurret1 = 100;
			}
			else
			{
				// go to previous state to re-send sdo request
				u8StateEncdTurret1 = 1;

				// increase counter attempt sdo request
				u8CounterAttemptSdoRequestEncdTurret1 = u8CounterAttemptSdoRequestEncdTurret1 + 1;
			}
		}

		// check, if we receive sdo answer frame
		if(gCRcv_tSdo_Answer_Encodeur_Turret1.tOut.u32RcvCnt != u32CounterSdoAnswerEncodeurTurret1Frame)
		{
			// check if Command code, Index, sub-index, Crc value of SRDO1  corresponding to request Command code
			if(gCsr_tSdo_Answer_Encodeur_Turret1.u8CCD == 0x60 &&
				gCsr_tSdo_Answer_Encodeur_Turret1.u16Index == 0x6200 &&
				gCsr_tSdo_Answer_Encodeur_Turret1.u8Sub_Index == 0x00
			)
			{
				// reset timer
				eEleTimerManStop(&tTimerTimeoutSdoRequestEncodeurTurret1,&u32Dt);

				// reset counter attempt sdo request
				u8CounterAttemptSdoRequestEncdTurret1 = 0;

				// go to next state
				u8StateEncdTurret1 = 99;
			}
		}

		break;

	// case 99 : verify failure timeout of data frame
	case 99:
		// check , if the failure timeout of data frame is detected
		if(boBloCRcvGetErrStaBit(&gCRcv_tEncodeurTurret1,DM_CRCV_TIMEOUT))
		{
			// go to first state
			u8StateEncdTurret1 = 0;
		}
		break;

	// case 100 : timeout sdo request detected
	case 100:

		// set flag timeout sdo request detected
		gDb_tRamCanSensorC0.boTimeoutSdoReqDetectedEncdTurret1 = TRUE;

		// check , if the failure timeout of data frame is detected
		if(boBloCRcvGetErrStaBit(&gCRcv_tEncodeurTurret1,DM_CRCV_TIMEOUT))
		{
			// go to first state
			u8StateEncdTurret1 = 0;
		}
		break;

	// default state
	default:
		break;

	}

	/* ============================================================================================= */
	/* 										Receive counter frame								     */
	/* ============================================================================================= */
	// get the actual receive counter value EncodeurTurret1 frame
	u32CounterEncodeurTurret1Frame = gCRcv_tEncodeurTurret1.tOut.u32RcvCnt;
	// get the actual receive counter value of Sdo answer encodeur turret 1 frame
	u32CounterSdoAnswerEncodeurTurret1Frame = gCRcv_tSdo_Answer_Encodeur_Turret1.tOut.u32RcvCnt;
}

//-----------------------------------------------------------------------------------------------------
//! @brief Start encodeur turret 2 sensor
//!
//!
//! @globvar
//!		TCanSigRecStartSensor 	gCsr_tStartSensor			Structure of signal CAN
//!		TBloCSnd				gCSnd_tStartSensor			Structure of send CAN block
//!		TBloCRcv				gCRcv_tDeversFrame1			Structure of reveice CAN block
//!		TBloCRcv 				gCRcv_tDeversFrame2			Structure of reveice CAN block
//!		TBloCRcv 				gCRcv_tEncodeurTurret1		Structure of reveice CAN block
//!		TBloCRcv 				gCRcv_tEncodeurTurret2		Structure of reveice CAN block
//!		TBloCRcv 				gCRcv_tMastMeasure			Structure of reveice CAN block
//!
//! @staticvar
//!
//! @created  19.02.2019 HYDAC/CK
//!
//! @change
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vSdoRequestEncodeurTurret2Sensor(TVoid)
{
    /* ============================================================================================= */
  	/* 										Sdo Request Encodeur Turret							     */
  	/* ============================================================================================= */
	// declare local variable
	static TUint8 u8StateEncdTurret2 = 0;
	static TUint32 u32CounterEncodeurTurret2Frame = 0;
	TBoolean	boTimerTimeoutSdoRequestEncodeurTurret2Status;
	TBoolean	boTimerTimeoutSdoRequestEncodeurTurret2Event;
	TUint32		u32Dt;
	static TUint8	u8CounterAttemptSdoRequestEncdTurret2 = 0;
	const TUint8 u8NbMaxAttemptSdoRequest = 2;
	static TUint32 u32CounterSdoAnswerEncodeurTurret2Frame = 0;

	/* ============================================================================================= */
	/* 										Timer management									     */
	/* ============================================================================================= */
	// run block , get the status
	boTimerTimeoutSdoRequestEncodeurTurret2Status = boEleTimerCalculate(&tTimerTimeoutSdoRequestEncodeurTurret2);

	// get event of block
	boTimerTimeoutSdoRequestEncodeurTurret2Event = boEleTimerGetEvent (&tTimerTimeoutSdoRequestEncodeurTurret2);

	// reset flag timeout sdo request
	gDb_tRamCanSensorC0.boTimeoutSdoReqDetectedEncdTurret2 = FALSE;
	// machine state to follow the start process
	switch(u8StateEncdTurret2)
	{
	// case 0 : wait receive data frame
	case 0 :
		// Check, if we receive data frame from Encodeur turret 2
		 if(gCRcv_tEncodeurTurret2.tOut.u32RcvCnt != u32CounterEncodeurTurret2Frame)
		 {
			// go to next state
			 u8StateEncdTurret2 = 1;
		 }
		break;
	// case 1 :Send Sdo request to change frequency transmission
	case 1 :
		// set Command code, indicates the type of command or response, as well as the size of the data when the message contains it
		gCsr_tSdo_Request_Encodeur_Turret2.u8CCD = 0x2B;

		// Index of the parameter to write/read
		gCsr_tSdo_Request_Encodeur_Turret2.u16Index = 0x6200;

		// Sub-index of the parameter to write/read
		gCsr_tSdo_Request_Encodeur_Turret2.u8Sub_Index = 0x00;

		// Set Data
		gCsr_tSdo_Request_Encodeur_Turret2.u32Data = 0x32;

		// Send first Sdo request
		gCSnd_tSdo_Request_Encodeur_Turret2.tInp.boSndNow = TRUE;

		// go to next state
		u8StateEncdTurret2 = 2;

		break;
	// case 2 : Receive Sdo request
	case 2:
		// start timer
		if(boTimerTimeoutSdoRequestEncodeurTurret2Status == FALSE && boTimerTimeoutSdoRequestEncodeurTurret2Event == FALSE)
		{
			u32EleTimerStart(&tTimerTimeoutSdoRequestEncodeurTurret2);
		}

		// check if timer is done
		if(boTimerTimeoutSdoRequestEncodeurTurret2Event == TRUE)
		{
			// check if counter of sdo request is higher at X attempt
			if(u8CounterAttemptSdoRequestEncdTurret2 >= u8NbMaxAttemptSdoRequest)
			{
				// go to state 100 : timeout sdo
				u8StateEncdTurret2 = 100;
			}
			else
			{
				// go to previous state to re-send sdo request
				u8StateEncdTurret2 = 1;

				// increase counter attempt sdo request
				u8CounterAttemptSdoRequestEncdTurret2 = u8CounterAttemptSdoRequestEncdTurret2 + 1;
			}
		}

		// check, if we receive sdo answer frame
		if(gCRcv_tSdo_Answer_Encodeur_Turret2.tOut.u32RcvCnt != u32CounterSdoAnswerEncodeurTurret2Frame)
		{
			// check if Command code, Index, sub-index, Crc value of SRDO1  corresponding to request Command code
			if(gCsr_tSdo_Answer_Encodeur_Turret2.u8CCD == 0x60 &&
				gCsr_tSdo_Answer_Encodeur_Turret2.u16Index == 0x6200 &&
				gCsr_tSdo_Answer_Encodeur_Turret2.u8Sub_Index == 0x00
			)
			{
				// reset timer
				eEleTimerManStop(&tTimerTimeoutSdoRequestEncodeurTurret2,&u32Dt);

				// reset counter attempt sdo request
				u8CounterAttemptSdoRequestEncdTurret2 = 0;

				// go to next state
				u8StateEncdTurret2 = 99;
			}
		}

		break;

	// case 99 : verify failure timeout of data frame
	case 99:
		// check , if the failure timeout of data frame is detected
		if(boBloCRcvGetErrStaBit(&gCRcv_tEncodeurTurret2,DM_CRCV_TIMEOUT))
		{
			// go to first state
			u8StateEncdTurret2 = 0;
		}
		break;

	// case 100 : timeout sdo request detected
	case 100:

		// set flag timeout sdo request detected
		gDb_tRamCanSensorC0.boTimeoutSdoReqDetectedEncdTurret2 = TRUE;

		// check , if the failure timeout of data frame is detected
		if(boBloCRcvGetErrStaBit(&gCRcv_tEncodeurTurret2,DM_CRCV_TIMEOUT))
		{
			// go to first state
			u8StateEncdTurret2 = 0;
		}
		break;

	// default state
	default:
		break;

	}

	/* ============================================================================================= */
	/* 										Receive counter frame								     */
	/* ============================================================================================= */
	// get the actual receive counter value EncodeurTurret2 frame
	u32CounterEncodeurTurret2Frame = gCRcv_tEncodeurTurret2.tOut.u32RcvCnt;
	// get the actual receive counter value of Sdo answer encodeur turret 2 frame
	u32CounterSdoAnswerEncodeurTurret2Frame = gCRcv_tSdo_Answer_Encodeur_Turret2.tOut.u32RcvCnt;
}
