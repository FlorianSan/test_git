//**************************************************************************************************
//! @file ControlCan48Xs.h
//! @brief Control rotation frame
//! @author Christian Klein (CK)
//! @created 23.07.2018 HYDAC/CK
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_CONTROL_CONTROLCAN48XS_H_
#define SRC__APP_CONTROL_CONTROLCAN48XS_H_

// INCLUDES =======================================================================================
#include <ItfTypes.h>
#include <App_Db.h>
#include <App_CanSigRec.h>
#include <ItfGlobal.h>
#include <ItfBloCSnd.h>
#include <App_LibTab.h>


// GLOBAL DEFINES =================================================================================

// GLOBAL TYPE DEFINITON ==========================================================================
extern TEleTimAdr		tTimerTimeoutSdoRequest;					// Timer used to check timeout sdo request to the 48XS slave module

// GLOBAL VARIABLES DECLARATIONS ==================================================================

// GLOBAL PROTOTYPES DECLARATIONS =================================================================

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
//-----------------------------------------------------------------------------------------------------
TVoid vControlCan48Xs(TVoid);

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
//!
//! @created 20.01.2019 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
ERetVal vStart48Xs(TVoid);

#endif /* SRC__APP_CONTROL_CONTROLCAN48XS_H_ */
