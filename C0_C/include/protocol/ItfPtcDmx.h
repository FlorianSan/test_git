//**************************************************************************************************
/*!
@file           ItfPtcDmx.h
@brief          Protocol interfaces - support DM1, DM2 and DM3
@date           08.01.2019
@version 1.1.5.0
@author         HYDAC/NJP
@changelog
-#  1.0.0.0 01.06.2018  Initial version of separate PtcDmx
-#  1.0.0.0 18.09.2018  Changed Mapping of Lampstatus
-#  1.1.0.0 08.01.2019  skip unhandled requests, added ePtcDmxSetSkipUnhandledMsg to set behavior
-#  1.1.0.0 02.07.2019  ignore CAN priority and source address on requests
-#  1.1.0.0 02.07.2019  configurable CAN priority for transportlayer/bam
-#  1.1.0.0 02.07.2019  settings ptc active/inactive can id issue fixed
-#  1.1.4.0 18.11.2020  added ePtcDmxGetAllDmxMsg
-#  1.1.5.0 07.07.2021  call eDmxModifySpnWithOffset/eDmxModifySpnWithPattern in MAIN_APP_START_UP
*/
//**************************************************************************************************
#ifndef __ITFPTCDMX__
    #define __ITFPTCDMX__

    #include <ItfCoreCan.h>
    #include <ItfCoreEcu.h>
    #include <ItfCoreDb.h>


    #define DM_PTC_DMX_OVERFLOW    0            //!< DM overflow fault
    #define DM_PTC_DMX_FAULT_MAX   1            //!< Max fault count

    //DMx CAN message type
    typedef enum
    {
       DMX_TYPE_DM1,    //!< DM1 message
       DMX_TYPE_DM2,    //!< DM2 message
       DMX_TYPE_DM3,    //!< DM3 response(ACK)
       DMX_TYPE_NOTHING //!< no DM message
    } EDmxType;

    //! DM1 Version
    typedef enum
    {
        DM_DTC_VER1,                            //!< Dm dtc Version 1
        DM_DTC_VER2,                            //!< Dm dtc Version 2
        DM_DTC_VER3,                            //!< Dm dtc Version 3
        DM_DTC_VER4                             //!< Dm dtc Version 4
    }EDmDtcVer;

    //! - DM1-DM3 protocol (J1939)
    typedef struct
    {
        //! Common
        TChar      achName[PTC_NAME_STR_LEN];   //!< [STR] - Block name
        //! Setting
        TBoolean   boDmxActiv;                  //!< [DEF] Protocol active/inactive
        ECBusHwBuf eDmxSndHwBufNo;              //!< [DEF] CAN send buffer position connection link
        ECBusHwBuf eDmxRcvHwBufNo;              //!< [NUM] CAN receive buffer position connection link
        TUint8     u8DmxPrioRevPage;            //!< [NUM] Priority + Rev + page
        TUint8     u8DmxPrioRevPageTp;          //!< [NUM] Priority + Rev + Page for CM(TP) messages
        TUint8     u8DmxPf;                     //!< [NUM] PDU format
        TUint8     u8DmxSa;                     //!< [NUM] Source address
        EDmDtcVer  eDmxDtcVersion;              //!< [NUM] DMx Dtc version format (DTC mapping style)
       // Error
        TErrCfgFea   atErrFea[1];               //!< [CLA] - Error configuration
    }TPtcDmx;

    //--------------------------------------------------------------------------------------------------
    //! @brief      DMx protocol - version information [function call for the eCorePtcRegistry(..)]
    //! @retval     *cptVer - Pointer to the versions information
    //--------------------------------------------------------------------------------------------------
    extern const TVerChapCom *cptPtcDmxVersionsInfo( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      DMx protocol - version check [function call for the eCorePtcRegistry(..)]
    //! @retval     TRUE   - is correct
    //! @retval     FALSE  - is incorrect
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boPtcDmxVersionCheck( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      DMx protocol - application call [function call for the eCorePtcRegistry(..)]
    //! @param[in]  eMainPhase  - show the MainPhase
    //--------------------------------------------------------------------------------------------------
    extern TVoid vPtcDmxAppCall( EMainPhase eMainPhase );

    //--------------------------------------------------------------------------------------------------
    //! @brief      DMx protocol - shut down call [function call for the eCorePtcRegistry(..)]
    //--------------------------------------------------------------------------------------------------
    extern ERetVal ePtcDmxShutDown( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      DMx protocol - receive function [function call for the eCorePtcRegistry(..)]
    //! @param[in]  eHwBuf    - CAN hardware buffer
    //! @param[in]  ptRcvMsg  - receive message
    //! @retval     TRUE      - consume the message - message don't affect the system any more
    //! @retval     FALSE     - the message will be handle by the system
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boPtcDmxRcvHwBuf( ECBusHwBuf eHwBuf, TRcvMsg* ptRcvMsg );

    //--------------------------------------------------------------------------------------------------
    //! @brief     DMx protocol - send function [function call for the eCorePtcRegistry(..)]
    //! @param[in] eHwBuf    - CAN hardware buffer
    //! @param[in] ptSndMsg  - send message
    //! @retval    TRUE      - send ptSndMsg out
    //! @retval    FALSE     - dont't send ptSndMsg out
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boPtcDmxSndHwBuf( ECBusHwBuf eHwBuf, TSndMsg* ptSndMsg );

    // Service function ===============================================================================

    //--------------------------------------------------------------------------------------------------
    //! @brief      DMx protocol - change the DMx-CAN-Id setting, only effective before MAIN_APP_RUN!
    //! @param[in]  u8PrioRevPage   - DMx priority & rev & page
    //! @param[in]  u8PrioRevPageTp - DMx priority & rev & page for ConnManagmt(TP) messages
    //! @param[in]  u8Pf            - DMx PDU format
    //! @param[in]  u8Sa            - DMx source address
    //! @param[in]  eDmDtcVersion   - DMx DTC version/format used in DM1/2
    //--------------------------------------------------------------------------------------------------
    extern TVoid vPtcDmxCanIdChange( TUint8 u8PrioRevPage, TUint8 u8PrioRevPageTp,
                                     TUint8 u8Pf, TUint8 u8Sa, EDmDtcVer eDmDtcVersion );

    //--------------------------------------------------------------------------------------------------
    //! @brief      DMx protocol - change the action behavior, call after phase MAIN_CORE_COM_READY
    //! @details    Deactivates processing of DM requests.\n
    //!             CAN messages still unavailable for other processes.\n
    //!             Use TPtcDmx.boDmxActiv to also ignore CAN messages.
    //! @param[in]  boStatus FALSE= stop the DMx protocol, TRUE activate the DMx protocol
    //--------------------------------------------------------------------------------------------------
    extern TVoid vPtcDmxAction( TBoolean boStatus  );

    //--------------------------------------------------------------------------------------------------
    //! @brief      DMx protocol - set the DMX access level, is can set in and after the Phase: MAIN_APP_START_UP
    //! @param[in]  eLevel
    //! @return     R_OKAY / R_PHASE
    //--------------------------------------------------------------------------------------------------
    extern ERetVal ePtcDmxSetAccessLevel( EAccLevel eLevel );

    //--------------------------------------------------------------------------------------------------
    //! @brief      DMx protocol - modify the DMX transmission SPN - with an pattern.
    //!             Must be called in the phase MAIN_APP_START_UP.
    //!             An example with the  eDmxModifySpnWithPattern( 8, 5, 13 );  // 13 -> b1101
    //!               NegtivMask  0b11111111111111111111111100000111
    //!               Pattern     0b00000000000000000000000001101000
    //!               Result      0b-------------xxxxxxxxxxx01101xxx  (only 19 BITS)
    //! @param[in]  u8Pos     - Bit position (19 until x-Len)
    //! @param[in]  u8Size    - Bit position (1 until 8)
    //! @param[in]  u8Pattern - Error Pattern
    //! @retval     R_OKAY
    //! @retval     R_CONFIG
    //! @retval     R_PHASE
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eDmxModifySpnWithPattern( TUint8 u8Pos, TUint8 u8Size, TUint8 u8Pattern );

    //--------------------------------------------------------------------------------------------------
    //! @brief      DMx protocol - modify the DMX transmission SPN - with an offset.
    //!             Must be called in the phase MAIN_APP_START_UP.
    //! @Note       The SPN have 19 BITS (0x7FFFF = 524287). The SPN_orginal + Offset must be smaller or equal as 524287.
    //! @param[in]  u32Offset       -  must be smaller as 0x6FFFF (458751)
    //! @return     R_OKAY / R_CONFIG / R_PHASE
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eDmxModifySpnWithOffset( TUint32 u32Offset );

    //--------------------------------------------------------------------------------------------------
    //! @brief      DMx protocol - show that a multi frame message is transferring from DMx
    //! @return     TRUE / FALSE
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boDmxSndMultiMsgActive( TVoid );


    //--------------------------------------------------------------------------------------------------
    //! @brief      Return the Dmx Error Status / Error over write control
    //! @param[in]  ptErrCntl (NULL - no error control)
    //--------------------------------------------------------------------------------------------------
    extern const TBehErrSta *cptPtcDmxErrSta( TBehErrCntl *ptErrCntl );


    //--------------------------------------------------------------------------------------------------
    //! @brief      Set usage of unprocessed CAN messages(J1939 RQST), call after MAIN_CORE_COM_READY
    //! @param[in]  boSkipUnhandledMsg  TRUE - unhandled message available in application, FALSE = not
    //! @retval     R_OKAY  - value set
    //! @retval     R_PHASE - value not set, not called after MAIN_CORE_COM_READY
    //--------------------------------------------------------------------------------------------------
    extern ERetVal ePtcDmxSetSkipUnhandledMsg( TBoolean boSkipUnhandledMsg );

    //--------------------------------------------------------------------------------------------------
    //! @brief         DMx protocol - get last sent DMx CAN message(raw)
    //! @details       PtcDmx tries to copy max one DMx CAN message per cycle on the configured Snd-Buffer.
    //!                This message can be retrieved using this function. \n
    //!                Function must be used every cycle to not miss messages. \n
    //!                If original message was not sent due to HW Bufferoverflow or other CAN HW issue, the message is still copied.
    //! @example
    //!      if( DMX_TYPE_NOTHING != ePtcDmxGetAllDmxMsg( &tSnd ) ) eCoreSndCanSndHwBuf( CBUS1_HWBUF_SND0, &tSnd );
    //! @param[out] ptSndMsg - pointer to a CAN send message where DM1 message will be copied to.
    //! @retval     DMX_TYPE_DM1     - ptSndMsg  is valid, a new DM1 message was copied
    //! @retval     DMX_TYPE_DM2     - ptSndMsg  is valid, a new DM2 message was copied
    //! @retval     DMX_TYPE_DM3     - ptSndMsg  is valid, a new DM3 response(ACK) was copied
    //! @retval     DMX_TYPE_NOTHING - ptSndMsg  is not valid, no new DM message was sent
    //--------------------------------------------------------------------------------------------------
    extern EDmxType ePtcDmxGetAllDmxMsg( TSndMsg* ptSndMsg );

#endif
