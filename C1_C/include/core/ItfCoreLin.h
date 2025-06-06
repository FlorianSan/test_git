//**************************************************************************************************
/*!
@file       ItfCoreLin.h
@brief      Primitive LIN interface
@version    0.0.0.1
@note       For the TTC5XX and TTC5X
\n
<blockquote style="width:40%;">
This is the primitive LIN interface. Don't use that interface in combination with a 'LIN Block'
</blockquote>
\n

Example:
~~~
ERetVal eAppInit( TVoid )
{
    if(eCoreLinBusInit(LIN_BUS0, LIN_RATE_20000, LIN_CST_ENHANCED) != R_OKAY)   // Initialize the LIN BUS
    {
        ... // Initialization of the LIN-BUS failed
    }
    return R_OKAY;
}


TVoid vAppRun( TCoreInp *ptCoreInp, TCoreOut *ptCoreOut )
{
    ERetVal             eRet;
    ELinBusSta          peSta;
    static TUint32      u32Cnt = 0;                                             // Counter for cycle the read and write
    static TUint8       u8Step = 0;                                             // The actual step
    static TLinMsg      ptMsgSnd;                                               // Is the frame to send
    static TLinMsg      ptMsgRcv;                                               // Is the frame to receive

    if(u8Step == 0 && u32Cnt == 100)                                            // Start of the read/write cycle every 100 calls, Step 0 = write a frame
    {
        ptMsgSnd.u8Id = 0x23;                                                   // Is the ID of the frame to write
        ptMsgSnd.u8Dlc = 8;                                                     // Is the number of bytes to write
        ptMsgSnd.au8Data[0] = 0xAB;                                             // Set the data to send (au8Data[0] to au8Data[u8Dlc - 1])

        if(eCoreLinBusWrite(LIN_BUS0, &ptMsgSnd) != R_OKAY)                     // Write the frame
        {
            ... // Write message failed
        }
        else
        {
            u8Step = 1;                                                         // All fine, go to step 1
        }
        u32Cnt = 0;
    }else if(u8Step == 0){u32Cnt++;}


    if(u8Step == 1)                                                             // Send frame is set, start a request
    {
        ptMsgRcv.u8Id = 0x24;                                                   // Set the ID where the data has to request
        ptMsgRcv.u8Dlc = 8;                                                     // Set the expected data length

        eRet = eCoreLinBusRead(LIN_BUS0, &ptMsgRcv);                            // Do the read request
        if(eRet != R_OKAY && eRet != R_BUSY)                                    // If read request not R_OKAY or BUS is busy at the moment, an error is occur
        {
            .// Read failed
            u32Cnt = 0;                                                         // Error is occur, back to the beginning
        }else if(eRet != R_BUSY){ u8Step = 2; }                                 // If no error occur and BUS is not busy at the moment, the request is set, go to step 2
    }


    if(u8Step == 2)                                                             // Get the requested data
    {
        eRet = eCoreLinBusSta(LIN_BUS0, &peSta);                                // Ask for the BUS state
        if(eRet != R_OKAY)                                                      // Is not R_OKAY, an error is occur (cannot get state)
        {
            .// Get BUS state failed
            u8Step = 0;                                                         // Error is occur, back to the beginning
        }
        else
        {
            if(peSta == LINSTA_OKAY)                                            // If BUS state is LINSTA_OKAY, the reading of the data is finished
            {
                ptMsgRcv.u8Id                                                   // Is the ID of the received frame
                ptMsgRcv.u8Dlc                                                  // Is the number of data bytes of the frame
                ptMsgRcv.au8Data[0]                                             // Are the received data (au8Data[0] to au8Data[u8Dlc - 1])
            }
            else if(peSta != LINSTA_BUSY)                                       // If not OK and not busy, an BUS error is occur
            {
                ... // BUS error
            }
            u8Step = 0;                                                         // last step is worked, back to the beginning
        }
    }
}
~~~
*/
//**************************************************************************************************

#ifndef __ITFCORELIN__
  #define __ITFCORELIN__

#include <ItfTypes.h>
#include <ItfCoreBoard.h>

#ifdef COMPILER_SWITCH_LINBUS

    //! LIN bit rate
    enum
    {
        LIN_RATE_2400  = 1,             //!< Use the baud rate 2400
        LIN_RATE_9600  = 2,             //!< Use the baud rate 9600
        LIN_RATE_19200 = 3,             //!< Use the baud rate 19200
        LIN_RATE_20000 = 4,             //!< Use the baud rate 20000
        LIN_RATE_MIN   = 1000,          //!< Use the minimum possible baud rate (2400)
        LIN_RATE_MAX   = 20000          //!< Use the maximum possible baud rate (20000)
                                        //!< or Baud rate in bit/s (1000..20000)
    };

    //! LIN Message
    typedef struct
    {
        TUint8      au8Data[8];         //!< Data buffer
        TUint8      u8Dlc;              //!< Data length code
        TUint8      u8Id;               //!< Identifier
    } TLinMsg;

    //! Are the possible types of checksums
    typedef enum
    {
        LIN_CST_CLASSIC,                //!< Checksum type "Classic" (Take the sum of bits only of the data bytes)
        LIN_CST_ENHANCED                //!< Enhanced type "Enhanced" (Take the sum of bits of the data bytes and header)
    }ELinCstType;

    //! LIN Status
    typedef enum
    {
        LINSTA_OKAY             = 0,    //!< okay
        LINSTA_BUSY             = 1,    //!< busy
        LINSTA_PHYSICAL_BUS     = 2,    //!< physical bus error was detected
        LINSTA_NO_RESPONSE      = 3,    //!< no response from the slave
        LINSTA_TIMEOUT          = 4,    //!< LIN timeout detected, if frame duration exceeded the maximum frame time
        LINSTA_BIT              = 5,    //!< a bit error was detected
        LINSTA_PARITY           = 6,    //!< parity error detected during receiving
        LINSTA_CHECKSUM         = 7,    //!< a checksum error occurred
        LINSTA_FRAMING          = 8,    //!< an expected stop bit is not found
        LINSTA_INCON_SYN_FIELD  = 9,    //!< inconsistent synch field error was detected
        LINSTA_OVERRUN          = 10,   //!< unread data was overwritten
        LINSTA_UNDEF            = 11    //!< undefined error
    }ELinBusSta;

    //--------------------------------------------------------------------------------------------------
    //! @brief      Initialization Lin Bus
    //! @param[in]  u8Baudrate
    //! @param[in]  eCstType
    //! @retval     R_OKAY         - functions execute without error
    //! @retval     R_MEMORY       - No more memory for initialization of LIN-BUS exist
    //! @retval     R_PARAMETER    - range invalid parameter has been passed
    //! @retval     R_UNKNOWN      - unknown error occurred
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreLinBusInit( TUint16 u16Baudrate, ELinCstType eCstType );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Deinitialization Lin Bus
    //! @retval     R_OKAY            - functions execute without error
    //! @retval     R_PARAMETER       - range invalid parameter has been passed
    //! @retval     R_NOT_INITIALIZED - the channel was not configured
    //! @retval     R_UNKONW          - unknown error occurred
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreLinBusDeInit( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Call function in the shut down phase
    //--------------------------------------------------------------------------------------------------
    extern TVoid vCoreLinBusShutDown( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get LinBus status
    //! @param[out] peSta
    //! @retval     R_OKAY         - functions execute without error
    //! @retval     R_NULL_POINTER - null Pointer
    //! @retval     R_CONFIG       - the channel was not configured
    //! @retval     R_PARAMETER    - range invalid parameter has been passed
    //! @retval     R_UNKONW       - unknown error occurred
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreLinBusSta( ELinBusSta *peSta );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Read Lin-Bus
    //! @param[out] ptMsg
    //! @retval     R_OKAY         - functions execute without error
    //! @retval     R_BUSY         - the channel is busy, no new data received
    //! @retval     R_CONFIG       - the channel was not configured
    //! @retval     R_PARAMETER    - range invalid parameter has been passed
    //! @retval     R_NULL_POINTER - null Pointer
    //! @retval     R_UNKNOW       - an unknown error occurred
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreLinBusRead( TLinMsg *ptMsg );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Write Lin-Bus
    //! @param[in]  ptMsg
    //! @retval     R_OKAY         - functions execute without error
    //! @retval     R_BUSY         - the channel is busy, no new data received
    //! @retval     R_CONFIG       - the channel was not configured
    //! @retval     R_PARAMETER    - range invalid parameter has been passed
    //! @retval     R_NULL_POINTER - null Pointer
    //! @retval     R_UNKNOW       - an unknown error occurred
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreLinBusWrite( TLinMsg *ptMsg );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the ID from the protected ID
    //! @param[in]  u8protectedId   - is the protected ID where the ID is searched
    //! @param[out] pu8Id           - is the pointer to the variable to write with the corresponding ID
    //! @retval     R_OKAY          - conversion succeeded
    //! @retval     R_RANGE         - invalid protected ID
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreLinGetID(TUint8 u8ProtectedId, TUint8* pu8Id);

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the ID from the protected ID
    //! @param[in]  u8Id            - is the ID where the protected ID is searched
    //! @param[out] pu8ProtectedId  - is the pointer to the variable to write with the corresponding protected ID
    //! @retval     R_OKAY          - conversion succeeded
    //! @retval     R_RANGE         - invalid ID
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreLinGetProtectedID(TUint8 u8Id, TUint8* pu8ProtectedId);

    //--------------------------------------------------------------------------------------------------
    //! @brief      LIN version information
    //! @retval     *cptVer - Pointer of Versions information
    //--------------------------------------------------------------------------------------------------
    const TVerChapCom *cptLinVersionsInfo( TVoid );

#endif
#endif
