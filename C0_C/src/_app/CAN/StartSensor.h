//**************************************************************************************************
//! @file StartSensor.h
//! @brief Start sensor on bus
//! @author Christian Klein (CK)
//! @created 11.12.2018 HYDAC/CK
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_CONTROL_STARTSENSOR_H_
#define SRC__APP_CONTROL_STARTSENSOR_H_


// INCLUDES =======================================================================================
#include <ItfTypes.h>
#include <App_LibTab.h>
#include <CustomLibrary.h>
#include <ItfBasMath.h>
#include <App_CanSigRec.h>
// GLOBAL DEFINES =================================================================================

// GLOBAL TYPE DEFINITON ==========================================================================
extern TEleTimAdr		tTimerTimeoutSdoRequestEncodeurTurret1;		   // Timer used to check timeout sdo request to encodeur turret 1
extern TEleTimAdr		tTimerTimeoutSdoRequestEncodeurTurret2;		   // Timer used to check timeout sdo request to encodeur turret 2

// GLOBAL VARIABLES DECLARATIONS ==================================================================

// GLOBAL PROTOTYPES DECLARATIONS =================================================================

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
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vStartSensor(TVoid);

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
TVoid vSdoRequestEncodeurTurret1Sensor(TVoid);


//-----------------------------------------------------------------------------------------------------
//! @brief Sdo request encodeur turret 2 sensor
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
TVoid vSdoRequestEncodeurTurret2Sensor(TVoid);

#endif  /*SRC__APP_CONTROL_STARTSENSOR_H_*/

