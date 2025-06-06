//**************************************************************************************************
/*!
@file  	    ItfCoreCan.h
@brief	    CAN Interface
@date       21.03.2012
@author     HYDAC/NJP
*/
//**************************************************************************************************

#ifndef __ITFCORECAN__
  #define __ITFCORECAN__

// INCLUDES ========================================================================================
    #include <ItfTypes.h>
    #include <ItfCoreBoard.h>

    //! Receive message
    typedef struct
    {
        TUint8  au8Data[8];         //!< Data buffer
        TUint8  u8Dlc;              //!< Data length code
        TUint8  u8Xtd;              //!< :=FALSE  11bit-Identifier, :=TRUE  29bit-Identifier
        TUint32 u32Id;              //!< Identifier
    }TRcvMsg;

    //! Transmit message
    typedef struct
    {
        TUint8  au8Data[8];         //!< Data buffer
        TUint8  u8Dlc;              //!< Data length code
        TUint8  u8Xtd;              //!< :=FALSE  11bit-Identifier, :=TRUE  29bit-Identifier
        TUint32 u32Id;              //!< Identifier
    }TSndMsg;

    //! Transmit message
    typedef struct
    {
        TUint8  au8Data[8];         //!< Data buffer
        TUint8  u8Dlc;              //!< Data length code
        TUint8  u8Xtd;              //!< :=FALSE  11bit-Identifier, :=TRUE  29bit-Identifier
        TUint32 u32Id;              //!< Identifier
    }TCanMsg;

    //! CAN format
    typedef enum
    {
        DATA_INTEL,                 //! 0 LSB (least significant bit) Format for the CAN variable  (early: LSB_FORMAT)
        DATA_MOTOROLA,              //! 1 MSB (most significant bit) Format for the CAN variable   (early: MSB_FORMAT)
        DATA_ECU                    //! 2 --   pure ecu
    }ECanFormat;

    //! Fifo type
    typedef enum
    {
        CAN_FIFO_RCV,               //!< CAN Fifo Receive Message
        CAN_FIFO_SND                //!< CAN Fifo Send Message
    }ECanFifoType;

    #ifdef COMPILER_SWITCH_CANBUS

    //--------------------------------------------------------------------------------------------------
    //! @brief          Get the associated CAN bus number for given CAN hardware buffer number eHwBuf
    //! @details        Valid values are only returned if the CAN HW buffer identified by eHwBuf is initialized on the system.\n
    //!                 If given HW Buffer is not configured this will return CAN_BUS_MAX.
    //! @param[in]      eHwBuf      -  [ENU] CAN hardware buffer
    //! @return         CAN bus number(CAN_BUS_MAX=invalid eHwBuf or CAN Bus not ready)
    //--------------------------------------------------------------------------------------------------
    extern ECanBus eCoreGiveCanBusNo( ECBusHwBuf eHwBuf );


    //--------------------------------------------------------------------------------------------------
    //! @brief          Get status for given Hardware Buffer eHwBuf
    //! @param[in]      eHwBuf      - [ENU] CAN hardware buffer
    //! @retval         R_OKAY      - CAN bus and hardware buffer are ready
    //! @retval         R_CONFIG    - HW Buffer not valid/CAN not [yet] available
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreGiveCanHwBufStatus( ECBusHwBuf eHwBuf );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Return available send calls available for the given HW buffer in the current task cycle
    //! @param[in]  eHwBuf
    //! @param[out] pu8MaxCntPerCyc - maximal possible CAN send calls per cycle, 0 if eHwBuf not initialized
    //! @return     remaining CAN send calls this cycle, 0 if eHwBuf not initialized
    //--------------------------------------------------------------------------------------------------
    extern TUint8 u8CoreCanSndHwBufFeeCntPerCyc( ECBusHwBuf eHwBuf, TUint8 *pu8MaxCntPerCyc );

    //--------------------------------------------------------------------------------------------------
    //! @brief          Send Messages out via the ECBusHwBuf
    //! @param[in]      eSndBuf             - [ENU] use that hardware send buffer
    //! @param[out]     ptSndMsg            - [PNT] Pointer to the send that message out
    //! @retval         R_OKAY              - Functions execute without error
    //! @retval         R_OVERFLOW          - CAN-HW-FIFO is full - no data has been transmitted        -> Set the DM_CBUSx_HOVERF_SNDx fault
    //! @retval         R_NOACT             - No Action - Hardware send count per task cycle is reached -> Set the DM_CBUSx_HOVERF_SNDx fault
    //! @retval         R_UNKNOWN           - Unknown internal device error
    //! @retval         R_NULL_POINTER      - NULL pointer
    //! @retval         R_ADDRESS           - wrong block address
    //! @retval         R_CONFIG            - HW Buffer not valid/CAN not [yet] available
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreSndCanSndHwBuf( ECBusHwBuf eSndBuf, TSndMsg *ptSndMsg );

    //--------------------------------------------------------------------------------------------------
    //! @brief          Give the not predefined receive messages back (Msg with no Rcv-Msg connection)
    //!                 Call the function until R_OKAY was returned (the Receive message is copy to the ptRcvMsg pointer)
    //!                 If the return value is R_EMPTY there are no RCV-Messages any more.
    //!                 After each pass, the messages are deleted.
    //! @param[in]      eRcvBuf             - [ENU] use that hardware receive buffer
    //! @param[out]     ptRcvMsg            - [PNT] Pointer to the receive a message data
    //! @retval         R_OKAY              - Functions execute without error -> on the ptRcvMsg-Pointer send the message
    //! @retval         R_EMPTY             - The are no more receive messages
    //! @retval         R_NULL_POINTER      - NULL pointer
    //! @retval         R_CONFIG            - HW Buffer not valid/CAN not [yet] available
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreRcvCanNoPreDefineRcvMsg( ECBusHwBuf eRcvBuf, TRcvMsg *ptRcvMsg );

    #ifdef COMPILER_SWITCH_TAR_PC

        //--------------------------------------------------------------------------------------------------
        //! @brief      Rename the Pc Can client name (default-Name is "PCANLight_SIM")
        //! @param[in]  pchName - client name
        //! @param[in]  u8CanBusNo - Can bus number
        //--------------------------------------------------------------------------------------------------
        extern TVoid vPcCanClientRename( TChar *pchName, TUint8 u8CanBusNo );

        //--------------------------------------------------------------------------------------------------
        //! @brief      Remove the PC client
        //--------------------------------------------------------------------------------------------------
        extern TVoid vPcCanClientRemove( TVoid );

        //--------------------------------------------------------------------------------------------------
        //! @brief    This function suppress all positive Can client reports to the console window
        //!           Used PCANLight_SIM
        //!            -> Client: ECU-C0-Application
        //--------------------------------------------------------------------------------------------------
        extern TVoid vPcCanClientInfoSuppress( TVoid );

        //--------------------------------------------------------------------------------------------------
        //! @brief    This function tries to close/remove ALL PCAN nets, clients and hw from pc
        //! @warning  Only use in case of configuration problems! \n
        //!           Call after external signal or in vAppFixInit. \n
        //!           Avoid/Remove call after successful CAN config
        //! @retval   R_OKAY    - done
        //! @retval   R_SUPPORT - failed
        //--------------------------------------------------------------------------------------------------
        extern ERetVal ePcCanClientCloseAll( TVoid );

    #endif
    #endif

#endif
