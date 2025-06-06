
//==================================================================================================
//! @file ControlMastDigitalDisplay.c
//! @brief Control mast digital display
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 23.07.2018 HYDAC/CK
//! @history: #- CK 23.07.2018 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "ControlMastDigitalDisplay.h"

//-----------------------------------------------------------------------------------------------------
//! @brief control the digital display of the measuring mast
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 24.04.2019 HYDAC/FC
//!
//! @change
//!
//! @care
//! @todo
//
//07.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vControlMastDigitalDisplay(TVoid)
{
#ifdef COMPILER_SWITCH_TAR_HW //C14 //SIMULATION POUR COMPILLER EN MODE PC
	/* First and second digits of the display address (address 00 = message sent to all slaves)*/
	const TUint8 DISP_ADDR_DIGIT1 = 0;
	const TUint8 DISP_ADDR_DIGIT2 = 0;
	/* Offset used to convert a digit in an ASCII character*/
	const TUint8 ASCII_DIGIT_OFFSET = 0x30;

	/* If measuring mast and digital display options are enabled*/
	if (gDb_tNvOptionsC0.boMeasuringMat && gDb_tNvOptionsC0.boMastDigitalDisplay){

		/* If initialization not done*/
		static TBoolean InitDone = FALSE;
		if (InitDone == FALSE){

			/*Initialize the UART driver*/
			gDb_tRamMastDisplayMeasureC0.u16ErrorCodeInit = IO_UART_Init(
				9600,                		// baud rate
				8,                     		// data bits
				IO_UART_PARITY_NONE,   		// parity bit
				1);                    		// stop bit

			/* start the timer used to send the message cyclically*/
			u32EleTimerStart(&tTimerSendMsgToMastDisplay);

			/* Initialization done*/
			InitDone = TRUE;
		}
		else{

			/* Send cyclically a message to the mast digital display*/
			boEleTimerCalculate(&tTimerSendMsgToMastDisplay);
			if (boEleTimerGetEvent (&tTimerSendMsgToMastDisplay)){

				/* If mast measure function is active the display the measure*/
				if (gDb_tRamEcuC0RcvFromC1.boMastMeasureFonctionActive){

					/* Convert the measure in 4 digits*/
					TUint16 Rest = gDb_tRamEcuC0RcvFromC1.u16EncodeurMastMeasureCentimeter;
					if (Rest > 9999) Rest = 9999;		/* Limit the displayed value to 9999*/
					gDb_tRamMastDisplayMeasureC0.u8DisplayedDigit1 = Rest / 1000;
					Rest = Rest - gDb_tRamMastDisplayMeasureC0.u8DisplayedDigit1*1000;
					gDb_tRamMastDisplayMeasureC0.u8DisplayedDigit2 = Rest / 100;
					Rest = Rest - gDb_tRamMastDisplayMeasureC0.u8DisplayedDigit2*100;
					gDb_tRamMastDisplayMeasureC0.u8DisplayedDigit3 = Rest / 10;
					Rest = Rest - gDb_tRamMastDisplayMeasureC0.u8DisplayedDigit3*10;
					gDb_tRamMastDisplayMeasureC0.u8DisplayedDigit4 = Rest;


					/* Write the data array*/
					gDb_tRamMastDisplayMeasureC0.au8SentDataArray[0] = 0x4E;											/* first digit of the display address (in ASCII code)*/
					gDb_tRamMastDisplayMeasureC0.au8SentDataArray[1] = DISP_ADDR_DIGIT1 + ASCII_DIGIT_OFFSET;			/* second digit of the display address (in ASCII code)*/
					gDb_tRamMastDisplayMeasureC0.au8SentDataArray[2] = DISP_ADDR_DIGIT2 + ASCII_DIGIT_OFFSET;			/* marker of the beginning of the frame*/
					gDb_tRamMastDisplayMeasureC0.au8SentDataArray[3] = gDb_tRamMastDisplayMeasureC0.u8DisplayedDigit1 + ASCII_DIGIT_OFFSET;	/* displayed digit 1 (in ASCII code)*/
					gDb_tRamMastDisplayMeasureC0.au8SentDataArray[4] = gDb_tRamMastDisplayMeasureC0.u8DisplayedDigit2 + ASCII_DIGIT_OFFSET;	/* displayed digit 2 (in ASCII code)*/
					gDb_tRamMastDisplayMeasureC0.au8SentDataArray[5] = gDb_tRamMastDisplayMeasureC0.u8DisplayedDigit3 + ASCII_DIGIT_OFFSET;	/* displayed digit 3 (in ASCII code)*/
					gDb_tRamMastDisplayMeasureC0.au8SentDataArray[6] = gDb_tRamMastDisplayMeasureC0.u8DisplayedDigit4 + ASCII_DIGIT_OFFSET;	/* displayed digit 4 (in ASCII code)*/
					gDb_tRamMastDisplayMeasureC0.au8SentDataArray[7] = 0x0D;


					/* Transmit data to the digital display*/
					gDb_tRamMastDisplayMeasureC0.u16ErrorCodeWrite = IO_UART_Write(
							gDb_tRamMastDisplayMeasureC0.au8SentDataArray,
						sizeof(gDb_tRamMastDisplayMeasureC0.au8SentDataArray),
						&gDb_tRamMastDisplayMeasureC0.u16RetDataBytesSent);
				}
				/* Else clear the display*/
				else{


					/* Write the data array*/
					gDb_tRamMastDisplayMeasureC0.au8SentDataArray[0] = 0x4E;															/* first digit of the display address (in ASCII code)*/
					gDb_tRamMastDisplayMeasureC0.au8SentDataArray[1] = DISP_ADDR_DIGIT1 + ASCII_DIGIT_OFFSET;							/* second digit of the display address (in ASCII code)*/
					gDb_tRamMastDisplayMeasureC0.au8SentDataArray[2] = DISP_ADDR_DIGIT2 + ASCII_DIGIT_OFFSET;							/* marker of the beginning of the frame*/
					gDb_tRamMastDisplayMeasureC0.au8SentDataArray[3] = 0x2A;//0x07;														/* marker used to clear the display*/
					gDb_tRamMastDisplayMeasureC0.au8SentDataArray[4] = 0x0D;															/* marker of the end of the frame*/
					gDb_tRamMastDisplayMeasureC0.au8SentDataArray[5] = 0;																/* not used*/
					gDb_tRamMastDisplayMeasureC0.au8SentDataArray[6] = 0;																/* not used*/
					gDb_tRamMastDisplayMeasureC0.au8SentDataArray[7] = 0;

					/* Transmit data to the digital display*/
					gDb_tRamMastDisplayMeasureC0.u16ErrorCodeWrite = IO_UART_Write(
							gDb_tRamMastDisplayMeasureC0.au8SentDataArray,
						5,		/* send only the 5 first bytes*/
						&gDb_tRamMastDisplayMeasureC0.u16RetDataBytesSent);
				}
			}
		}
	}
#endif  //D14 //SIMULATION POUR COMPILLER EN MODE PC
}
