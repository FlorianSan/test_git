//**************************************************************************************************
/*!
@file       ItfCore.h
@brief      Core interface
@date       01.02.2011
@author     HYDAC/NJP
*/
//**************************************************************************************************

#ifndef __ITFCORE__
    #define __ITFCORE__

    #include <autoconfig.h>

    #include <ItfTypes.h>
    #include <ItfCoreLibTab.h>
    #include <ItfCoreVer.h>
    #include <ItfCoreEcu.h>
    #include <ItfCoreCan.h>
    #include <ItfCorePin.h>
    #include <ItfCoreBoard.h>
    #include <App_ErrDefine.h>

// DEFINES & ENUMS  ================================================================================

    #define CORE_RCV_MSG_MAX    16           //!< Default receive message box

    #define ADC_KELVIN_OFFSET  273           //!< ADC_KEVIN

    //! Main phases
    typedef enum
    {
        MAIN_SAFETY_PRE_START,               //!<   0 Core pre start up ("Core Safety Init", "App. Safety Init" and the "Core Pre Start")
        MAIN_APP_PRE_START,                  //!<   1 Application pre start phase (read/write fix pins/ fix-ADC/DAC blocks)
        MAIN_CORE_CAN_PREPARE,               //!<   2 Core prepare the can (CBUS)
        MAIN_CORE_COM_READY,                 //!<   3 Core basic communication is ready (CBUS/RS/Ethernet)
        MAIN_CORE_START_UP,                  //!<   4 Core start up phase (load basic blocks, version info, faults, db option list's, opt pins in process)
        MAIN_APP_START_UP,                   //!<   5 Application start up phase
        MAIN_CORE_INIT,                      //!<   6 Core init phase (load extended blocks, other db lists)
        MAIN_APP_INIT,                       //!<   7 Application init phase
        MAIN_APP_RUN,                        //!<   8 Application run phase
        MAIN_APP_SHUT_DOWN,                  //!<   9 Application shut down phase
        MAIN_CORE_SHUT_DOWN,                 //!<  10 Core shut down phase
        MAIN_CORE_EXIT,                      //!<  11 Core exit (only for the simulation)
        MAIN_CORE_DEBUG                      //!<  12 Core debug phase
        #ifdef COMPILER_SWITCH_MAIN_CORE_EMC_BREAK
        ,MAIN_CORE_EMC_BREAK = 0xFF          //!< 255 Core emergency break
        #endif
    }EMainPhase;

    //! Access level
    typedef enum
    {
        ACC_UNDEF,                           //!< 00 undefined - n access

        // 8 Level single access
        ACC_DEVELOPMENT,                     //!< 01 Access Level IDE development:   'For each fault' & for the db access
        ACC_ENGINEERING,                     //!< 02 Access Level Engineering:       'For each fault' & for the db access
        ACC_INTEGRATOR,                      //!< 03 Access Level System integrator: 'For each fault' & for the db access
        ACC_OEM,                             //!< 04 Access Level OEM:               'For each fault' & for the db access
        ACC_SERVICE,                         //!< 05 Access Level Service:           'For each fault' & for the db access
        ACC_PRODUCTION,                      //!< 06 Access Level Production:        'For each fault' & for the db access
        ACC_DEALER,                          //!< 07 Access Level Dealer:            'For each fault' & for the db access
        ACC_CUSTOMER,                        //!< 08 Access Level Customer:          'For each fault' & for the db access

        // 3 Level ecu access
        ACC_ECU_DEV,                         //!< 09 Access Level Development:       'For one ECU' - a need for the 'fault development' list
                                             //!                                      Full db access
        ACC_ECU_ENG,                         //!< 10 Access Level Engineering:       'For one ECU' - a need for the 'fault event' list
                                             //!                                      Full db access
        ACC_ECU_CUS                          //!< 11 Access Level Customer:          'For one ECU'
                                             //!                                      Full db access
    }EAccLevel;

    //! Library block (process) status options
    typedef enum
    {
        BLO_RELEASE,                 //!< library block is working (standard functionality)
        BLO_LOCKED,                  //!< library block is locked  (not functioning, but in RAM available, in+outs frozen)
        BLO_FREEZE_INP,              //!< library block inputs  are frozen
        BLO_FREEZE_OUT,              //!< library block outputs are frozen
        BLO_NOT_INIT,                //!< library block not initialized
        BLO_NA = 0xFF                //!< library block is not applicable (no RAM for state variables allocated)
    }EBloStatus;


    //! Time statistic
    typedef struct
    {
        TBoolean   boReset;                  //!< [-]   Reset values
        TUint16    u16Overload;              //!< [-]   Task overload counter
        TUint32    u32Average;               //!< [µs]  Set by task entry, by exit task, calc. difference
        TUint32    u32MinTime;               //!< [µs]  Minimum time
        TUint32    u32MaxTime;               //!< [µs]  Maximum time
        EMainPhase eMaxTimePhase;            //!< [ENU] Show the phase that set the maximum time
        TUint32    u32LastTime;              //!< [µs]  Processing time in last cycle
    }TTimStatistic;

    //! Error Mode Filter
    typedef enum
    {
        ERR_FILTER_ALL,                     //!< 0 - give active and deactive faults
        ERR_FILTER_ACTIV,                   //!< 1 - give only the active faults
        ERR_FILTER_DEACTIV                  //!< 2 - give only the deactive faults
    }EErrFilterMode;

    //! Error signal
    typedef enum
    {
        ERR_SIG_OFF,                         //! Error signal Off
        ERR_SIG_ON,                          //! Error signal ON (Sold)
        ERR_SIG_FLA_SLOW,                    //! Error signal flash slow
        ERR_SIG_FLA_FAST                     //! Error signal flash fast
    }EErrSig;

    //! Application input error-sub-vector
    typedef struct
    {
        TUint32  u32SetCondBits;             //!< [DEF] - Required error set condition register
        TUint32  u32RelCondBits;             //!< [DEF] - Required error clear condition register
    }TCoreErrInp;

    //! Application input interface to the "HCP core library"
    typedef struct
    {
        // Error
        TBoolean    boEngineOn;              //!< [DEF] - Set engine status (FALSE/TRUE) in HCP-LIB
        TCoreErrInp tErrInp;                 //!< [STR] - Application error input
    }TCoreInp;

    //! Application input error-sub-vector
    typedef struct
    {
        EErrSig  eCat1Whi;                   //!< [ENU] - Protect lamp               (DE: Überwachungsfunktion)
        EErrSig  eCat2Yel;                   //!< [ENU] - Yellow warning lamp        (DE: Gelbe Warnlampe)
        EErrSig  eCat3Amb;                   //!< [ENU] - Amber warning lamp         (DE: Gelbe Warnlampe)
        EErrSig  eCat4Red;                   //!< [ENU] - Red stop lamp              (DE: Rote Stoplampe)
        EErrSig  eCat5Mal;                   //!< [ENU] - Malfunction Indicator lamp (DE: Lampe Fehlfunktion)
        TUint64  u64DispOutBits;             //!< [BIT] - Customer specific display output
    }TErrSignal;

    //! Application output error-sub-vector
    typedef struct
    {
        TUint64    u64RestModeBits;           //!< [BIT] - Restricted mode   - register (64Bits)
        TUint64    u64ExtGroupBits;           //!< [BIT] - Excluded group    - register (64Bits)
        TUint32    u32SetCondBits;            //!< [BIT] - Set condition     - register (32Bits)
        TUint32    u32RelCondBits;            //!< [BIT] - Release condition - register (32Bits)
        TErrSignal tSigCat;                   //!< [STR] - Error signal lamp connection
    }TCoreErrOut;


    //! Application output interface to the "HCP Core Library"
    typedef struct
    {
        // Error
        TCoreErrOut tErrOut;                    //!< [STU] - Error output vector
    }TCoreOut;

    //! Scaling the block init loop steps to optimizing the run up phase
    typedef struct
    {
        TUint8 u8Basic;                         //!< [NUM] - Basic blocks    [STD_STU_DB, STD_STU_EXC, STD_BLO_SIL, STD_BLO_ERR, STD_BLO_FLA, STD_STU_CREC, STD_BLO_CSND]
        TUint8 u8Can;                           //!< [NUM] - Can blocks      [STD_BLO_CBUS, STD_BLO_CBUF]
        TUint8 u8Extended;                      //!< [NUM] - Extended blocks [Costumer-Blocks]
    }TBloLoopStep;

    #define OBJ_TYP_NAME_STR_LEN    (32+1)      //!< block[PRO,...] signal[RAMP,...] protocol[DM1...]  etc. (string length)
    #define OBJ_NAME_STR_LEN        (32+1)      //!< form obj configurator - instance name (block, signal)
    #define BLO_NAME_STR_LEN        (32+1)      //!< form obj configurator - instance name from block
    #define SIG_NAME_STR_LEN        (32+1)      //!< signal name           - instance name from signal
    #define PTC_NAME_STR_LEN        (32+1)      //!< protocol name         - instance name from protocol

    //! block update option
    typedef enum
    {
         UPD_NOTHING,                           //!< 0 - no update of configuration
         UPD_CONFIG,                            //!< 1 - update from the project configuration parameter struct
         UPD_PARAM                              //!< 2 - update from the ram parameter struct
    }EUpdate;

    //! input behavior on erroneous input value
    typedef enum
    {
        INPBEH_ERR_TO_OUT,                      //!< 0 - set output to ERROR(no block/sig calculation)
        INPBEH_FREEZE_INP,                      //!< 1 - freeze last valid input value
        INPBEH_PAR_TO_INP                       //!< 2 - set input to predefined parameter value
    }EInpBeh;

    #define PIN_UNDEF 0                         //!< Pin undefined

    //! Block error behavior control
    typedef struct
    {
        TUint16  u16SetErrBitOn;                //!< [NUM] Set the Error Bit to 'ON'
        TUint16  u16SetErrBitOff;               //!< [NUM] Set the Error Bit to 'OFF'
    }TBehErrCntl;

    //! Block error behavior status [status & control]
    typedef struct
    {
        TUint16  u16ErrSta;                     //!< [BIT] present 'Extern' error status   ==> RM, NVMEM-List
                                                //!<                              ( FALSE: INACTIVE, INACTIVE_SC, INACTIVE_EX )
                                                //!<                              ( TRUE:    ACTIVE,   ACTIVE_RC,   ACTIVE_EX )
        TUint16  u16ErrEveDetect;               //!< [BIT] present 'Extern' error detected - event flag
        TUint16  u16ErrEveDelete;               //!< [BIT] present 'Extern' error deleted  - event flag
        TUint16  u16ErrReqSta;                  //!< [BIT] present 'Intern' error status
                                                //!<                              ( FALSE: INACTIVE,   ACTIVE_RC,   ACTIVE_EX ) error intern = INACTIVE but externally held ACTIVE by RC or EX
                                                //!<                              ( TRUE:    ACTIVE, INACTIVE_SC, INACTIVE_EX ) error intern = ACTIVE but externally held INACTIVE by SC or EX
        TUint16  u16ErrBypassRestore;           //!< [BIT] error status change after the 'restore process' [load the fault list and restore the error element]  (see boCoreErrElementsRestored())
                                                //!<       the bit is only '1' if the error is load from the nvmem list, with an active status
                                                //!<       => the error element status is active (the u16ErrBypassRestore will never clear)
        TUint16  u16ErrBypassChange;            //!< [BIT] error status change by eCoreSetErrCodeChaStatus(..)( e.g. protocol (MST))
                                                //!<       the bit is '1' if error element is forced with the function eCoreSetErrCodeChaStatus().
                                                //!<       the bit is '0' if error element isn't forced.  The force is reset after
                                                //!<       the function vEleErrSetBloFaultCode() is called.
    }TBehErrSta;

    //! Block error behavior, for Db-lists header, factory setting block and Sil blocks
    typedef struct
    {
        TBehErrSta  tErrSta;                    //!< Block error behavior status
        TBehErrCntl tErrCntl;                   //!< Block error behavior control
    }TBehErr;

    // BSP-FAULT
    #define BSP_DIAG_MEM_REC_MAX     8          //!< MAX buffer for the BSP fault code

    //! Bsp Fault Record
    typedef struct
    {
        TUint32       u32EngineTimeSec;         //!< [Sec] Engine-Time - [136,19 years]
        TBoolean      boWatchDog;               //!< [DEF] Watchdog
        TUint8        u8ErrCodeRec;             //!< [NUM] Error Code Number
        TDiaErrorCode tErrCode;                 //!< [STU] Error Code Bsp-Values
    }TBspFaultRec;

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the main ecu phase
    //! @return     Application phase
    //--------------------------------------------------------------------------------------------------
    extern EMainPhase eCoreGetMainPhase( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the last working phase before the ecu jump into the 'debug phase'
    //!             If the ecu isn't in the debug phase, the function returns the current application phase
    //! @return     Application phase
    //--------------------------------------------------------------------------------------------------
    extern EMainPhase eCoreDebugGetLastWorkingPhase( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the last working phase before the ecu jump into the 'debug phase'
    //!             If the ecu isn't in the debug phase, the function returns the current internal phase
    //! @return     Internal phase
    //--------------------------------------------------------------------------------------------------
    extern TUint8 u8CoreDebugGetLastWorkingInternPhase( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Go to the debug phase - The setting is soft reset stable.
    //!     Call this Fct in:     Last valid application phase
    //!        vAppTestStart      -> MAIN_CORE_START_UP
    //!        vAppFixInit        -> MAIN_CORE_START_UP
    //!        vAppSafetyInit     -> MAIN_CORE_START_UP
    //!        eAppPreStart       -> MAIN_CORE_START_UP
    //!        eAppStartUp             -> MAIN_APP_START_UP
    //!        vSetAppVersion     -> MAIN_CORE_INIT
    //!        vGetVersionInfo    -> MAIN_CORE_INIT
    //!        eAppInit                -> MAIN_APP_INIT
    //!        vAppRun                 -> MAIN_APP_RUN
    //!        eAppShutDown            -> MAIN_APP_SHUT_DOWN
    //--------------------------------------------------------------------------------------------------
    extern TVoid vCoreGoToDebugPhase( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      The ecu will freeze after the error/event fault load process. Must call before MAIN_APP_INIT
    //!             The ecu will never came into the MAIN_APP_INIT phase.
    //--------------------------------------------------------------------------------------------------
    extern TVoid vCoreEcuFreeze( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Set a user function to be executed at MATCH exit phase(ECU_EXIT/MAIN_CORE_EXIT)
    //! @note       By using that function all possible transitions must be tested.\n
    //!             The setting is soft reset stable.
    //! @warning    There can only be one exit callback function, therefore calling this function will overwrite an existing one!\n
    //!             The user should ensure that there will be no conflicts.
    //!
    //! @param[in] pfvExit( ) - (Dflt=NULL)  Call back function
    //--------------------------------------------------------------------------------------------------
    extern TVoid vCoreExitCbFct( TVoid(*pfvExit)( TBoolean boSoftReset ) );

    //--------------------------------------------------------------------------------------------------
    //! @brief      vCoreDebugCbFct
    //!             NOTE: This function manipulates the match reaction in the debug phase
    //!                   By using this function all possible transitions must be tested
    //!                   The setting is soft reset stable..
    //!  @param[in] pfvDebug            - (Dflt=NULL)  Call back function - this function will be called in the debug phase
    //!  @param[in] boNoEcuPowOut       - (Dflt=FALSE) Stop that all power outputs will be switched to off, if the debug phase is active
    //!  @param[in] boNoCRcvCSndAction  - (Dflt=FALSE) Stop turning off the CRcv/CSnd process (only possible, if the app is over the MAIN_CORE_START_UP phase)
    //!  @param[in] boNoDebugPrintOut   - (Dflt=FALSE) Stop the "## DEBUG-PHASE[x] ##" - report text
    //--------------------------------------------------------------------------------------------------
    extern TVoid vCoreDebugCbFct( TVoid(*pfvDebug)( TVoid ), TBoolean boNoEcuPowOut, TBoolean boNoCanStop, TBoolean boNoDebugPrintOut );

    //--------------------------------------------------------------------------------------------------
    //! @brief     Get the Environment Type ( "HW" for the real target application or
    //!                                       "PC-Thread"/"PC-While" for the simulation application )
    //!
    //!            "PC-Thread" is the default mode for the simulation.
    //!            For "PC-While" must call vCoreSimAppCodeCallInMainFct() in the vAppFixInit()-Function
    //!
    //! @return    Pointer of the Environment Type String
    //--------------------------------------------------------------------------------------------------
    extern const TChar *cpchCoreEnvType( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the Ecu Type ("TTC30H" or "TTC30SH" ...)
    //! @return     Pointer of the Ecu Type String
    //--------------------------------------------------------------------------------------------------
    extern const TChar *cpchCoreEcuType( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Main Start
    //! @param[in]  ptEcuSys - Ecu information pointer
    //! @param[in]  ptVerInf - Version information pointer
    //--------------------------------------------------------------------------------------------------
    extern TVoid vCoreMainStart( TEcuSys *ptEcuSys,  TVerInf *ptVerInf );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Function vAppAutoLibTable
    //! @param[in]  ptPtr   - Init object field
    //! @param[in]  u16Cnt  - Field elements
    //! @note
    //!         TInt32 main( TVoid )
    //!         {
    //!             vCoreMainStart( &gEcu_tSys, &gVer_tInf );
    //!             vCoreLibTabAdding( g_atObjTab, g_u16ObjTabMax );  // must call since the R2019B
    //!             vCoreTestStart( vAppTestStart );
    //!             ...
    //--------------------------------------------------------------------------------------------------
    extern TVoid vCoreLibTabAdding( TObjTab *ptPtr, TUint16 u16Cnt );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Core Simulation Start Function
    //--------------------------------------------------------------------------------------------------
    extern TVoid vCoreTestStart( TVoid (*pfvAppTestStart)( TVoid ));

    //--------------------------------------------------------------------------------------------------
    //! @brief      Call in the 'Start Test Function'?
    //! @retval     TRUE := YES
    //! @retval     FALSE:= NO
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boCoreTestStartFctActive( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Core Init Function
    //--------------------------------------------------------------------------------------------------
    extern TVoid vCoreFixInit( TVoid (*pfvAppFixInit)( TVoid ));

    //--------------------------------------------------------------------------------------------------
    //! @brief      Call in 'Fix Init Function'?
    //! @retval     TRUE := YES
    //! @retval     FALSE:= NO
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boCoreFixInitFctActive( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Core Simulation End Function
    //--------------------------------------------------------------------------------------------------
    extern TVoid vCoreTestEnd( TVoid (*pfvAppTestEnd)( TVoid ));

    //--------------------------------------------------------------------------------------------------
    //! @brief      Call in 'Test End Function'?
    //! @retval     TRUE := YES
    //! @retval     FALSE:= NO
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boCoreTestEndFctActive( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief     Core Main Function
    //! @param[out] pePhase              - [show]   show phase
    //! @param[in]  pfvRegistry          - [single] Registry of new objects
    //! @param[in]  pfvCoreLibTable      - [single] Announce availability of auto generated library objects
    //! @param[in]  pfvAppSafetyPinInit  - [single] Application "Safety Pin Init"
    //! @param[in]  eAppPreStart         - [cyclic] Application "Pre Start" (for fast app reactions - fixed input pin´s available)
    //! @param[in]  pfeAppStartUp        - [single] Application "Start Up" phase        -> DB-Opt-List's are ready
    //! @param[in]  pfvSetAppVersion     - [single] Set application software version information
    //! @param[in]  pfvGetVersionInfo    - [single] Output of complete version information
    //! @param[in]  pfeAppInit           - [cyclic] Application "Initialization" phase  -> all DB-List's are ready
    //! @param[in]  pfvAppRun            - [cyclic] Application "Run" phase
    //! @param[in]  pfeAppShutDown       - [cyclic] Application "Shut Down" phase
    //--------------------------------------------------------------------------------------------------
    extern TVoid vCoreMain(  EMainPhase *pePhase,
                             TVoid     (*pfvRegistry)         ( TVoid ),
                             TVoid     (*pfvCoreLibTable)     ( TVoid ),
                             TVoid     (*pfvAppSafetyPinInit) ( TVoid ),
                             ERetVal   (*pfeAppPreStart)      ( TVoid ),
                             ERetVal   (*pfeAppStartUp)       ( TVoid ),
                             TVoid     (*pfvSetAppVersion)    ( TVoid ),
                             TVoid     (*pfvGetVersionInfo)   ( TVerInf  *ptVer ),
                             ERetVal   (*pfeAppInit)          ( TVoid ),
                             TVoid     (*pfvAppRun)           ( TCoreInp *ptCoreInp, TCoreOut *ptCoreOut ),
                             ERetVal   (*pfeAppShutDown)      ( TCoreInp *ptCoreInp, TCoreOut *ptCoreOut ) );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Core Main Extended Function (For the Second Application)
    //! @param[in]  boDbRooExt             - [single] Set a second application with a own data base
    //! @param[in]  u8SaIdExt              - [single] Set a second application source Id
    //! @param[in]  pchVehicleCodeExt      - [single] Set Second Application Vehicle Code [Max DataLeng= 8(TChars) +'\0']
    //! @param[in]  u32SerielNoExt         - [single] Set Second Application Serial Number
    //! @param[in]  pfvLibRegistryExt      - [single] Registry of blocks/signal/protocol types
    //! @param[in]  pfvAppAutoLibTableExt  - [single] Announce availability of auto generated library objects
    //! @param[in]  pfvAppSafetyPinInitExt - [single] Application "Safety Pin Init"
    //! @param[in]  pfeAppPreStartExt      - [cyclic] Application "Pre-Start" (for fast app reactions - fixed input pin´s available)
    //! @param[in]  pfeAppStartUpExt       - [single] Application "Start Up" phase - (PreInit)  -> DB-Opt-List's are ready
    //! @param[in]  pfeAppInitExt          - [single] Application "Initialization" phase        -> all DB-List's are ready
    //! @param[in]  pfvAppRuExt            - [cyclic] Application "Run" phase
    //! @param[in]  pfeAppShutDownExt      - [cyclic] Application "Shut Down" phase
    //--------------------------------------------------------------------------------------------------
    extern TVoid vCoreMainExt( TBoolean boDbRootExt,                                                            //!< [single] Have a own DB-List/s
                               TUint8   u8SecSaIdExt,                                                           //!< [single] Set second application source Id
                               TChar    *pchVehicleCodeExt,                                                     //!< [single] Set Second Application Vehicle Code [MAX=8+'\0']
                               TUint32  u32SerielNoExt,                                                         //!< [single] Set Second Application Serial Number
                               TVoid   (*pfvLibRegistryExt)     ( TVoid ),                                      //!< [single] Registry of blocks/signal/protocol types
                               TVoid   (*pfvAppAutoLibTableExt) ( TVoid ),                                      //!< [single] Announce availability of auto generated library objects
                               TVoid   (*pfvAppSafetyPinInitExt)( TVoid ),                                      //!< [single] Application "Safety Pin Init"
                               ERetVal (*pfeAppPreStarExt)      ( TVoid ),                                      //!< [cyclic] Application "Pre-Start" (for fast app reactions - fixed input pin´s available)
                               ERetVal (*pfeAppStartExt)        ( TVoid ),                                      //!< [single] Application "Start Up" phase (PreInit!)
                               ERetVal (*pfeAppInitExt)         ( TVoid ),                                      //!< [single] Application "Initialization" phase
                               TVoid   (*pfvAppRunExt)          ( TCoreInp *ptCoreInp, TCoreOut *ptCoreOut ),   //!< [cyclic] Application "Run" phase
                               ERetVal (*pfeAppShutDownExt)     ( TCoreInp *ptCoreInp, TCoreOut *ptCoreOut ) ); //!< [cyclic] Application "Shut Down" phase

    //--------------------------------------------------------------------------------------------------
    //! @brief      Core Main Extended set the error and iom file crc
    //!             Call before the vCoreMainExt(...)
    //! @param[in]  u32ErrFileCrc      - [single] Set error file crc for the second application frame
    //! @param[in]  u32IomFileCrc      - [single] Set iom file crc for the second application frame
    //! @retval     R_OKAY          - Okay
    //! @retval     R_CONFIG        - Error - called after the vCoreMainExt(..)
    //! @retval     R_INCONSISTENT  - Error - double call
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreExtErrIomFileCrc( TUint32 u32ErrFileCrc, TUint32 u32IomFileCrc );

    //--------------------------------------------------------------------------------------------------
    //! @brief    Extend DB-List is there (from the 2nd Application)
    //! @return   TRUE/FALSE
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boCoreAppLayerExtDbListIsThere( TVoid );

    #ifdef COMPILER_SWITCH_SEC_APP

        //--------------------------------------------------------------------------------------------------
        //! @brief    Is the Extend Source Id there (from the 2nd Application)
        //! @return   TRUE/FALSE
        //--------------------------------------------------------------------------------------------------
        extern TBoolean boCoreAppLayerExtSaIsThere( TVoid );

        //--------------------------------------------------------------------------------------------------
        //! @brief    Give the Extend Source Id (from the 2nd Application)
        //! @return   ID
        //--------------------------------------------------------------------------------------------------
        extern TUint8 u8CoreAppLayerExtSaId( TVoid );

        //--------------------------------------------------------------------------------------------------
        //! @brief    Give the Extend Vehicle Code
        //! @return   TChar-Pointer
        //--------------------------------------------------------------------------------------------------
        extern TChar* pchCoreAppLayerExtGetVehicleCode( TVoid );

        //--------------------------------------------------------------------------------------------------
        //! @brief    Give the Extend Serial Number
        //! @return   Serial Number
        //--------------------------------------------------------------------------------------------------
        extern TUint32 u32CoreAppLayerExtGetSerielNo( TVoid );

        // see also eCoreVersSetAppInfoExtended( .. ) and eCoreExtVersSetAppInfo( .. ) to set the version info

        //--------------------------------------------------------------------------------------------------
        //! @brief      Core Auto library extended Init
        //! @param[in]  ptObjTab    - Pointer of the second Application Object Table
        //! @param[in]  u16ObjMax   - Maximum Count
        //--------------------------------------------------------------------------------------------------
        extern TVoid vCoreAutoLibTabExtInit( TObjTab *ptObjTab, TUint16 u16ObjMax );

    #endif

    //--------------------------------------------------------------------------------------------------
    //! @brief      Init ecu statistic timer
    //! @param[in]  u16Cycle        - [ms]  Task cycle
    //! @param[in]  u16AverageLimit - [Cnt] Average limit value of statistic calculation
    //! @param[in]  ptStatistic     - [ms]  Statistic pointer
    //--------------------------------------------------------------------------------------------------
    extern TVoid vCoreInitEcuStatisticTim( TUint16 u16Cycle, TUint16 u16AverageLimit, TTimStatistic *ptStatistic );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Return Ecu Statistic Timer
    //! @return     pointer to statistic timer
    //--------------------------------------------------------------------------------------------------
    extern TTimStatistic* ptCoreGetEcuStatisticTim( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Access to the core main interfaces - cyclic call required
    //! @param[in]  ptInp - Core input  vector
    //! @param[out] ptOut - Core output vector
    //! @retval     R_OKAY
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreAccess( TCoreInp *ptInp, TCoreOut *ptOut );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the diagnose status - it is control by the diagnosis time (set in ecu setting)
    //! @retval     FALSE - not possible to set an error in an error object
    //! @retval     TRUE  - it is possible to set an error in an error object
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boCoreGetDiagStatus( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Set Engine On (overwrite also the TCoreInp *ptCoreInp-Vector)
    //! @param      boOn
    //--------------------------------------------------------------------------------------------------
    extern TVoid vCoreSetEngineOn( TBoolean boOn );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the engine state (ON or OFF)
    //! @retval     FALSE - engine is OFF
    //! @retval     TRUE  - engine is ON
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boCoreGetEngineOn( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get core ecu new start info
    //! @retval     FALSE - Ecu has done a soft restart
    //! @retval     TRUE  - Ecu has done a new start
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boCoreEcuNewStart( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the cycle time in ms
    //! @return     Ecu cycle time in ms
    //--------------------------------------------------------------------------------------------------
    extern TUint16 u16CoreGetCycleTime( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the controller time in ms
    //! @return     Ecu time in ms
    //--------------------------------------------------------------------------------------------------
    extern TUint32 u32CoreGetTime( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the engine time in s
    //! @return     Engine time in seconds
    //--------------------------------------------------------------------------------------------------
    extern TUint32 u32CoreGetEngineTime( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Set engine time in s
    //! @param[in]  u32TimeSec - engine time in seconds
    //--------------------------------------------------------------------------------------------------
    extern TVoid vCoreSetEngineTime( TUint32 u32TimeSec );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Shut Down by Command (The Application go into the AppShutDown() without K15 )
    //!             Only when the application in the APP-RUN-phase, the ECU is terminated properly
    //--------------------------------------------------------------------------------------------------
    extern TVoid vCoreShutDownByCommand( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Ecu power down switch (Hard shutdown of the ECU)
    //!              - The phase MAIN_APP_SHUT_DOWN is not reached.
    //!              - A reboot of the ECU occurs repeatedly as long as the hardware terminal 15 is active.
    //--------------------------------------------------------------------------------------------------
    extern TVoid vCoreEcuPowerDown( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Ecu Power Down
    //! @retval     FALSE - ECU is on
    //! @retval     TRUE  - ECU is OFF (Down)
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boCoreGetEcuPowerDown( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get memory save (can call if the phase is <= ECU_APP_RUN )
    //! @param[in]  u16Size  - Needed RAM space
    //! @param[in]  cpchTyp  - Object type (NULL save)
    //! @param[in]  cpchObj  - Object name (NULL save)
    //! @retval              - !NULL - fine
    //! @retval              -  NULL - can't get memory
    //--------------------------------------------------------------------------------------------------
    extern TVoid* pvCoreGetMemory( TUint16 u16Size, const TChar* cpchTyp, const TChar* cpchObj );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the used memory back
    //! @return     Used memory in byte
    //--------------------------------------------------------------------------------------------------
    extern TUint32 u32CoreGetMemoryUsedSpace( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the memory back
    //! @return     Total memory in byte
    //--------------------------------------------------------------------------------------------------
    extern TUint32 u32CoreGetMemoryTotalSize( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief    Give the nvmem consistent status
    //! @param     pboSta - *pboSta=TRUE  -> the NvMem is in use by match
    //!                   - *pboSta=FALSE -> the NvMem isn't in use by match (the data are reseted, new or invalid)
    //! @retval   R_OKAY         - the date from *pboSta is valid
    //! @retval   R_PHASE        - the function call to early
    //! @retval   R_NULL_POINTER - the parameter is a null pointer
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreNvmIsConsistent( TBoolean *pboSta );

    //--------------------------------------------------------------------------------------------------
    //! @brief    Give the NvMem status
    //! @retval   R_OKAY        - everything fine, driver is idle
    //! @retval   R_BUSY        - a read or a write operation is ongoing, driver is busy
    //! @retval   R_UNKNOWN     - the module is not initialized
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreNvmStatus( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief    NvMem Server Close
    //! @retval   R_OKAY        - everything fine
    //! @retval   R_BUSY        - NvMem server is busy or already closed
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreNvmServerClose( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief    NvMem Server open
    //! @retval   R_OKAY         - everything fine
    //! @retval   R_INCONSISTENT - isn't closed before with eCoreNvmServerClose()
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreNvmServerOpen( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief    Read from the NvMem e.g.
    //!
    //!            static TUint8 m_u8Phase = 0;   // reset in the eAppShutDown() - important for the soft reset
    //!
    //!             ERetVal eReadNvmTestString( TVoid )
    //!             {
    //!                 static TUint8 s_achData[6] = {'x', 'x', 'x', 'x', 'x', 0 };
    //!
    //!                 if( R_OKAY == eCoreNvmServerClose() ){ m_u8Phase++; }
    //!
    //!                 if( m_u8Phase == 1 )
    //!                 {
    //!                     if( R_OKAY == eCoreNvmStatus( ))
    //!                     {
    //!                         if( R_OKAY == eCoreNvmRead( 2000, 6, s_achData ) )
    //!                         {
    //!                             m_u8Phase++;
    //!                         }
    //!                     }
    //!                 }
    //!                 if( m_u8Phase == 2 )
    //!                 {
    //!                     if( R_OKAY == eCoreNvmStatus( ) )
    //!                     {
    //!                         if(  R_OKAY == eCoreNvmServerOpen() )
    //!                         {
    //!                             m_u8Phase = 0;
    //!                             return R_OKAY;
    //!                         }
    //!                     }
    //!                 }
    //!                 return R_BUSY;
    //!             }
    //! @param[in]  u32Address   - [NUM] NvMem-Address
    //! @param[in]  u32DataLen   - [NUM] Count a read bytes
    //! @param[out] pu8Byte      - [PTR] Pointer to data that specifies the input stream
    //! @retval     R_OKAY       - Take the Command -> wait now until eCoreNvmStatus() give R_OKAY back
    //! @retval     R_BUSY       - Don't take the command Nvm manager is full
    //! @retval     R_ADDRESS    - invalid address offset or range
    //! @retval     R_UNKNOWN    - other mistake
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreNvmRead( TUint32 u32Address, TUint32 u32DataLen, TUint8 *pu8Byte );

    //--------------------------------------------------------------------------------------------------
    //! @brief    Write to NvMem  e.g
    //!             ERetVal eAppPreStart( TVoid )
    //!             {
    //!                 static TUint8 m_achData[6] = {'H', 'A', 'L', 'L', 'O', 0 }; // must be static or global
    //!                 static TUint8 m_u8Phase    = 0;
    //!
    //!                 if( R_OKAY == eCoreNvmServerClose() ){ m_u8Phase++; }
    //!
    //!                 if( m_u8Phase == 1 )
    //!                 {
    //!                     if( R_OKAY == eCoreNvmStatus( ))
    //!                     {
    //!                         if( R_OKAY == eCoreNvmWrite( FALSE, 2000, 6, m_achData ) )  // Check off - keep attention
    //!                         {                                                           // for free nvm space on that address
    //!                             m_u8Phase++;
    //!                         }
    //!                     }
    //!                 }
    //!                 if( m_u8Phase == 2 )
    //!                 {
    //!                     if( R_OKAY == eCoreNvmStatus( ) )
    //!                     {
    //!                         if(  R_OKAY == eCoreNvmServerOpen() )
    //!                         {
    //!                             m_u8Phase = 0;
    //!                             return R_OKAY;
    //!                         }
    //!                     }
    //!                 }
    //!                 return R_BUSY;
    //!             }
    //! @param[in]  boCheck    - [DEF] TRUE - Check the USER Addr-Range / FALSE - no check (able to overwrite db/fault/sys data)
    //!                                  the check is possible after the PreStart-Phase
    //! @param[in] u32Address - [NUM] NvMem-Addressee
    //! @param[in] u32DataLen - [NUM] Count a write bytes
    //! @param[in] pu8Byte    - [PTR] Pointer to data that specifies the output stream
    //! @retval    R_OKAY        - Take the Command -> wait now until eCoreNvmStatus() returns R_OKAY
    //! @retval    R_BUSY        - Don't take the command Nvm-Manager is full
    //! @retval    R_ADDRESS     - invalid address offset or range
    //! @retval    R_USERADDRESS - no free address, given address range already used
    //! @retval    R_PHASE       - called to early, boCheck=TRUE does not work before MAIN_APP_START_UP
    //! @retval    R_UNKNOWN     - other mistake
    //! @note      Best case: The address should be after the last list address
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreNvmWrite(  TBoolean boCheck, TUint32 u32Address, TUint32 u32DataLen, TUint8 *pu8Byte );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Give the Fault Record from index
    //! @param[in]  u8Idx (0..BSP_DIAG_MEM_REC_MAX)
    //! @param[out] pu32ErrCode - the MATCH Error-Code-Number
    //! @return     the record, or NULL if the index is out of Range
    //--------------------------------------------------------------------------------------------------
    extern const TBspFaultRec *cptCoreBspFaultRec( TUint8 u8Idx,TUint32 *pu32ErrCode );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Give the the count of stored 'Board Support Package' Faults
    //! @retval     R_OKAY
    //! @retval     R_BUSY
    //! @retval     R_TIMEOUT
    //--------------------------------------------------------------------------------------------------
    extern TUint8 u8CoreGiveBspFaultCount( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Init the 'Board Support Package' Field in the RAM
    //--------------------------------------------------------------------------------------------------
    extern TVoid vCoreBspFaultFieldInit( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Store the 'Board Support Package' Fault Field to the EEPROM
    //! @retval     R_OKAY
    //! @retval     R_BUSY
    //! @retval     R_TIMEOUT
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreNvmStoreBspFaultField( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Sort the Bsp Fault Field
    //--------------------------------------------------------------------------------------------------
    extern TUint8 u8CoreBspSortCopy( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief    Get the ecu memory size
    //! @return   Memory size in byte
    //--------------------------------------------------------------------------------------------------
    extern TUint32 u32CoreNvmSize( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get free ecu memory space (function is can called in the 'MAIN_APP_START_UP'-Phase or bigger)
    //! @param[out] pu16StartAdr - [NUM] First free NvMem-Address
    //! @param[out] pu16EndAdr   - [NUM] End NvMem-Address
    //! @retval     R_OKAY       - is okay
    //! @retval     R_PHASE      - the application phase is lesser as the 'MAIN_APP_START_UP-Phase'
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreNvmFreeSpace( TUint32 *pu32StartAdr, TUint32 *pu32EndAdr );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Activate the core 'license lock'  - call that function in the vCoreFixInit() function call.
    //!             If the application use the function - the application without the unlock mechanisms step instead of
    //!             the APP-RUN-Phase into the DEBUG-Phase with the printout "ERR: Application have no license".
    //!             For unlock see eCoreSetLicenseCode()
    //! @param[in]  pfu32CoreLoginAlgmDfltm
    //!             Default algorithms:
    //!                TUint32 u32CoreLoginAlgmDflt( TUint32 u32MagicNo )
    //!                {
    //!                    TUint32 u32EcuSerNo = (TUint32)atol( gVer_tInf.achEcuSerNo );
    //!                    TUint32 u32VehSerNo = (TUint32)atol( gVer_tInf.achVehSerNo );
    //!                    return (u32EcuSerNo ^ u32MagicNo) ^ (~u32VehSerNo);
    //!                }
    //! @param[in] cpu32FlashLicenseCode - !NULL  - Link to the 'FlashSetting' variable (the variable must be static or global)
    //!                                                 (Avoiding a new license code session on a nvmem cancellation/problems)
    //!                                  -  NULL  - don't use the 'FlashSetting' connection
    //--------------------------------------------------------------------------------------------------
    extern TVoid vCoreLicenseLockUntilLogin( TUint32 (*pfu32CoreLoginAlgmDfltm)( TUint32 u32MagicNo ), TUint32 u32MagicNo, const TUint32 *cpu32FlashLicenseCode );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the license status
    //! @retval     R_OKAY          - is okay
    //! @retval     R_SUPPORT       - the application need no license code
    //! @retval     R_INCONSISTENT  - the license locked is active, but the license code isn't valid
    //! @retval     R_PHASE         - the function call is to early, accept main phase it MAIN_APP_START_UP or bigger
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreGetLicenseLoginStatus( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Set the license code
    //! @param[in]  u32LicenseCode  - license Code
    //! @retval     R_OKAY          - is okay
    //! @retval     R_PHASE         - the function call is to early, accept main phase it MAIN_APP_START_UP or bigger
    //! @retval     R_INCONSISTENT  - the code isn't correct
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreSetLicenseLoginCode( TUint32 u32LicenseCode );


    #ifdef COMPILER_SWITCH_INTERNAL_FLASH_ACCESS

        //--------------------------------------------------------------------------------------------------
        //! @brief      Write on flash sector (normal sector size: 128 Bytes)
        //! @note I     To write a sector, it must first be deleted. See eCoreEraseSectorToFlash(..)
        //! @note II    To read the value from the hw flash, use an pointer (e.g TUint8 *pu8Data = 0xCBC000;)
        //! @note III   To simulate reading in the pc simulation, please use the following function: eCoreSimFlashRead(..)
        //! @param[in]  u32AdrPage  - flash address (e.g 0xCBC000)
        //! @param[in]  pu16Data    - data field
        //! @retval     R_OKAY      - is okay
        //! @retval     R_BUSY      - busy
        //--------------------------------------------------------------------------------------------------
        extern ERetVal eCoreWriteSectorToFlash( TUint32 u32AdrPage, TUint16 *pu16Data );

        //--------------------------------------------------------------------------------------------------
        //! @brief      Erase on flash sector (128 Bytes)
        //! @note       See eCoreWriteSectorToFlash(..)
        //! @param[in]  u32AdrPage  - flash address (e.g 0xCBC000)
        //! @retval     R_OKAY      - is okay
        //! @retval     R_BUSY      - busy
        //--------------------------------------------------------------------------------------------------
        extern ERetVal eCoreEraseSectorToFlash( TUint32 u32AdrPage );

    #endif


    #ifdef COMPILER_SWITCH_EXTERNAL_FLASH_ACCESS

        //--------------------------------------------------------------------------------------------------
        //! @brief     Initializes the flash driver
        //! @retval    R_OKAY         - Everything fine
        //! @retval    R_BUSY         - Driver is busy, last operation is still ongoing
        //! @retval    R_SUPPORT      - The type of the flash chip is not supported
        //! @retval    R_UNKNOWN      - Problems
        //--------------------------------------------------------------------------------------------------
        extern ERetVal eCoreFlashExtGetInit( TVoid );

        //--------------------------------------------------------------------------------------------------
        //! @brief     Returns the status of the last flash operation
        //! @retval    R_OKAY         - everything fine
        //! @retval    R_BUSY         - Driver is busy, last operation is still ongoing
        //! @retval    R_SUPPORT      - The flash module has not been initialized
        //! @retval    R_UNKNOWN      - Problems
        //--------------------------------------------------------------------------------------------------
        extern ERetVal eCoreFlashExtGetStatus ( TVoid );

        //--------------------------------------------------------------------------------------------------
        //! @brief     Erases one block in the external flash
        //! @param     u32Address     - Flash memory offset (beginning of block)
        //! @retval    R_OKAY         - everything fine
        //! @retval    R_BUSY         - Driver is busy, last operation is still ongoing
        //! @retval    R_PARAMETER    - Invalid block offset
        //! @retval    R_SUPPORT      - The flash module has not been initialized
        //! @retval    R_UNKNOWN      - Problems
        //--------------------------------------------------------------------------------------------------
        extern ERetVal eCoreFlashExtBlockErase ( TUint32 u32Address  );

        //--------------------------------------------------------------------------------------------------
        //! @brief     Read the external flash (PC:the flash-file)
        //! @param[in] u32Address     Flash memory offset (0 .. (0x800000U-1))
        //!                           pc: internal calc: (u32Address > 1000) => u32Address/1000 skip the program code
        //! @param[in] u32DataLen     Data length
        //! @param[in] pu8Data        Read field, field musst be that big as the data length
        //! @retval    R_OKAY         - everything fine
        //! @retval    R_BUSY         - Last operation of flash module is still in progress
        //! @retval    R_PARAMETER    - Invalid address offset or length
        //! @retval    R_NULL_POINTER - Parameter data is a NULL pointer
        //! @retval    R_SUPPORT      - The flash module has not been initialized
        //! @retval    R_UNKNOWN      - Unkown problems
        //--------------------------------------------------------------------------------------------------
        extern ERetVal eCoreFlashExtRead ( TUint32 u32Address, TUint32 u32DataLen, TUint8 *pu8Data );

        //--------------------------------------------------------------------------------------------------
        //! @brief      Write to the emulated external flash (the flash-file)
        //! @param[in]  u32Address     internal calc: (u32Address > 1000) => u32Address/1000 skip the program code
        //! @param[in]  u32DataLen     Data length
        //! @param[out] pu8Data        Write field, field musst be that big as the data length
        //! @retval     R_OKAY         - everything fine
        //! @retval     R_UNKNOWN      - Problems mit the Emulations file
        //--------------------------------------------------------------------------------------------------
        extern ERetVal eCoreFlashExtWrite( TUint32 u32Address, TUint32 u32DataLen, TUint8 *pu8Data );


        #ifdef COMPILER_SWITCH_TAR_PC

            //--------------------------------------------------------------------------------------------------
            //! @brief      Create an external flash, if a simulation file doesn't exist (the flash-file)
            //! @param[in]  u32DataLen     Data length
            //! @retval     R_OKAY         - everything fine
            //! @retval     R_NOACT        - file is there
            //--------------------------------------------------------------------------------------------------
            extern ERetVal eCoreFlashExtCreateIfNoExists( TUint32 u32DataLen );

        #endif

    #endif



    #ifdef COMPILER_SWITCH_TAR_PC

        //--------------------------------------------------------------------------------------------------
        //! @brief  Set handling of pvCoreGetMemory in vAppRun(Only for PC simulation)
        //! @param  boSupress   - TRUE: calling pvCoreGetMemory in vAppRun does NOT cause DEBUG_PHASE \n
        //!                       FALSE[Dflt]: pvCoreGetMemory in vAppRun triggers DEBUG_PHASE
        //--------------------------------------------------------------------------------------------------
        extern TVoid vCoreSimSuppressMemDebugPhase( TBoolean boSuppress );

        //--------------------------------------------------------------------------------------------------
        //! @brief      The application don't run in a thread[CPU=5%], the application call now in the main[CPU=25%]
        //--------------------------------------------------------------------------------------------------
        extern TVoid vCoreSimAppCodeCallInMainFct( TVoid );

        //--------------------------------------------------------------------------------------------------
        //! @brief      Set sleep time if app is run in main task to lower cpu utilization[default=0ms]
        //! @warning    Do not set!=0 unless idle time is acceptable for Application
        //! @param      u8Sleep     [ms] Sleep time in each cycle
        //--------------------------------------------------------------------------------------------------
        extern TVoid vCoreSimAppCodeSleepTime( TUint8 u8Sleep );

        //--------------------------------------------------------------------------------------------------
        //! @brief      Show the core use the main mode (is set with the vCoreSimAppCodeCallInMainFct()-Fkt)
        //! @retval     TRUE  - application is run in the main-mode
        //! @retval     FALSE - application is run in a thread
        //--------------------------------------------------------------------------------------------------
        extern TBoolean boCoreGetSimAppCodeCallInMainFct( TVoid );

        //--------------------------------------------------------------------------------------------------
        //! @brief      Set the ecu time [only for the PC-VERSION]
        //! @param[in]  u32TimeMs  - time [ms]
        //--------------------------------------------------------------------------------------------------
        extern TVoid vCoreSimSetTime( TUint32 u32TimeMs );

        //--------------------------------------------------------------------------------------------------
        //! @brief      Deactive the database shared by memory access  (Default: Access is there)
        //! @note       Function musst call in 'vAppTestStart()'-Phase
        //! @retval     R_OKAY
        //! @retval     R_PHASE
        //--------------------------------------------------------------------------------------------------
        extern ERetVal eCoreSimDbShaMemDeactive( TVoid );

        //--------------------------------------------------------------------------------------------------
        //! @brief     Read the emulate flash (the falsh-file)
        //! @param[in] u32Address     internal calc: (u32Address > 1000) => u32Address/1000 skip the program code
        //! @param[in] u32DataLen     Data length
        //! @param[in] pu8Data        Read field, field musst be that big as the data length
        //! @retval    R_OKAY         - everything fine
        //! @retval    R_UNKNOWN      - Problems mit the Emulations file
        //--------------------------------------------------------------------------------------------------
        extern ERetVal eCoreSimFlashRead ( TUint32 u32Address, TUint32 u32DataLen, TUint8 *pu8Data );

    #endif // COMPILER_SWITCH_TAR_PC

    //--------------------------------------------------------------------------------------------------
    //! @brief      Returns if 1App currently running
    //! @retval     TRUE  - currently executing 1app
    //! @retval     FALSE - currently NOT executing 1app, usually that means executing 2app
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boCoreIsFirstAppActive( TVoid );

    #ifdef COMPILER_SWITCH_ENV_CDS
        extern TBloLoopStep g_tBloLoopStep;         //!< @globvar set the block loop steps for the block init
    #endif
    #ifdef COMPILER_SWITCH_ENV_CEN
        extern const TBloLoopStep g_ctBloLoopStep;  //!< @globvar set the block loop steps for the block init
    #endif

    extern TCoreInp gCore_tInp;                     //!< @globvar create by the PDT [Block-Information Set]
    extern TCoreOut gCore_tOut;                     //!< @globvar create by the PDT [Block-Information Set]

#endif
