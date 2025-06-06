//**************************************************************************************************
/*!
@file       ItfBloErr.h
@brief      Error block interface
@date       01.02.2011   
@author     HYDAC/NJP
*/
//**************************************************************************************************

#ifndef __ITFBLOERR__
    #define __ITFBLOERR__

// INCLUDES ========================================================================================
    #include <ItfTypes.h>
    #include <ItfBasEleErr.h>
    #include <ItfCore.h>
    #include <App_ErrBitPos.h>
    #include <App_ErrDefine.h>

// DEFINES & ENUMS  ===============================================================================
    #define DM_ERR_CNT_MAX    8                 //!< [NO] - Maximal error count

// CONFIGURATION STRUCTURE =========================================================================
    //! Configuration of ERR-Block
    typedef struct
    {   // Common
       TChar       achName[BLO_NAME_STR_LEN];   //!< [STR] - Block name
       EBloStatus  eBloProc;                    //!< [ENU] - Block process
       // Fixed setting
       TUint8      u8ErrCnt;                    //!< [NUM] - Cnt of valid error case
       // Error [0-8]
       TErrCfgFea   atErrFea[DM_ERR_CNT_MAX];   //!< [CLA] - Error number configurations
    } TErrCfg;

    //! INPUT SUB-BLOCK
    typedef struct
    {
        EBloStatus   eBehProc;                  //!< [ENU] - Block process status options
        TBoolean     boIgnoreDiagTime;          //!< [DEF] - Ignore diagnose time
        TBehErrCntl  tBehErrCntl;               //!< [STU] - Error control behavior
        TUint8       u8SetErr;                  //!< [DEF] - Error bit position
    } TErrInp;

    //! OUTPUT SUB-BLOCK
    typedef struct
    {
        EBloStatus eBehProcSta;                 //!< [ENU] - Block process status options
        TBehErrSta tBehErrSta;                  //!< [STU] - Error behavior status
    } TErrOut;

    //! ADDRESS SUB-BLOCK
    typedef struct
    {
        const TErrCfg* cptCfg;                  //!< [STU] - Configuration struct
              TVoid*   pvObj;                   //!< [STU] - Pointer to the private object
              TUint16  u16Stamp;                //!< [NUM] - Block stamp 'A'xx,'E'  xx is the block Id
    }TErrAdr;

    //! BLOCK
    typedef struct
    {
        TErrInp   tInp;                         //!< [STU] - Input vector
        TErrOut   tOut;                         //!< [STU] - Output vector
        TErrAdr   tXAdr;                        //!< [STU] - Private address information
    } TBloErr;

// LIBRARY PROTOTYPES ==============================================================================+

    //--------------------------------------------------------------------------------------------------
    //! @brief      Create the ERR block  (*** needed if the block was not created by the PDT ***)
    //! @param[in]  ptBlo           - Pointer to ERR block
    //! @param[in]  cptCfg          - Pointer to the config struct
    //! @retval     R_OKAY          - Functions execute without error
    //! @retval     R_NULL_POINTER  - NULL pointer
    //! @retval     R_MEMORY        - Out of memory
    //--------------------------------------------------------------------------------------------------
     extern ERetVal eBloErrCreate( TBloErr* ptBlo, const TErrCfg* cptCfg );

     //--------------------------------------------------------------------------------------------------
    //! @brief      Initialization function for ERR block interface (*** needed if the block was not created by the PDT ***)
    //! @param[in]  ptBlo          - [PNT] Pointer to ERR block
    //! @retval     R_OKAY         - Functions execute without error
    //! @retval     R_NULL_POINTER - NULL pointer
    //! @retval     R_ADDRESS      - Wrong block address
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloErrInit( TBloErr *ptBlo );

    //--------------------------------------------------------------------------------------------------
    //! @brief          Error block function
    //! @param[in,out]  ptBlo           - [PNT] Pointer to ERR block
    //! @retval         R_OKAY          - Functions execute without error
    //! @retval         R_ADDRESS       - Wrong block address
    //! @retval         R_NULL_POINTER  - NULL pointer
    //! @retval         R_ADDRESS       - Wrong block address
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloErr( TBloErr* ptBlo );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Set the Error-Input-Bit at the commit bit position
    //! @param[in]  ptBlo    - [PNT]   Pointer to ERR block
    //! @param[in]  u8BitPos - [Index] Bit number 0-7
    //! @param[in]  boErrSta - [BO]    Error state of specific bit position
    //--------------------------------------------------------------------------------------------------
    extern TVoid vBloErrSetInpBit( TBloErr* ptBlo, TUint8 u8BitPos, TBoolean boErrSta );

    //------------------------------------------------------------------------------------------------
    //! @brief      Get the Error-Input-Bit at the commit bit position
    //! @param[in]  ptBlo     - [PNT]   Pointer to the block
    //! @param[in]  u8BitPos  - [Index] Bit number 0-7
    //! @retval     OKAY      - [BO]    Error state of the specific bit position
    //! @retval     ERROR     - If wrong ptBlo-Addr, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boBloErrGetInpBit( TBloErr* ptBlo, TUint8 u8BitPos );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the error status on a specified bit position
    //! @param[in]  ptBlo     - [PNT] Pointer to the block
    //! @param[in]  u8BitPos  - [Index] Bit number 0-7
    //! @retval     OKAY      - [BO] Error state of the specific bit position
    //! @retval     ERROR     - If wrong ptBlo-Addr, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boBloErrGetErrStaBit( TBloErr* ptBlo, TUint8 u8BitPos );

     //--------------------------------------------------------------------------------------------------
    //! @brief      Get the sum error status Information
    //! @param[in]  ptBlo     - [PNT] Pointer to the block
    //! @retval     OKAY     -  [BIT] Error state bit coded
    //! @retval     ERROR     - If wrong ptBlo-Addr, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TUint16 u16BloErrGetErrStaAll( TBloErr* ptBlo );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the error event on a specified bit position
    //! @param[in]  ptBlo     - [PNT] Pointer to the block
    //! @param[in]  boDetect  - [DEF] TRUE = the Detect-Bit-Event, FALSE = the Delete-Bit-Event
    //! @param[in]  u8BitPos  - [Index] Bit number 0-7
    //! @retval     OKAY      - [BO] Error state of the specific bit position
    //! @retval     ERROR     - If wrong ptBlo-Addr, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boBloErrGetErrEveBit( TBloErr* ptBlo, TBoolean boDetect, TUint8 u8BitPos );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the error event on a specified bit position
    //! @param[in]  ptBlo     - [PNT] Pointer to the block
    //! @param[in]  boDetect  - [DEF] TRUE = the Detect-Bit-Event, FALSE = the Delete-Bit-Event
    //! @retval     OKAY      - [BIT] Error state bit coded
    //! @retval     ERROR     - If wrong ptBlo-Addr, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TUint16 u16BloErrGetErrEveAll( TBloErr* ptBlo, TBoolean boDetect );

#endif
