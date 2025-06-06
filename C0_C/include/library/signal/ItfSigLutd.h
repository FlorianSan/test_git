//*************************************************************************************************
/*!
@file       ItfSigLutd.h
@brief      \htmlonly <span><img class="imgBriefImage" src="SigLutd32x32.png" alt="SigLutd32x32.png"></span><span class="spanBriefText">Signal Function "Double Lookup Table" (<b>SigLutd</b>)</span>\endhtmlonly
@version 0.8.0.0
@created    16.03.2012  HYDAC/ELA
@changelog
-   19.01.2016  
    - ItfSigBasEle.h renamed to ItfBasStruc.h in MATCH 06.09.XX.XX.
-   0.3.0.0  26.06.2018  
    - The MATCH signal interface version updated to 1.4.
-   0.3.2.0  14.05.2019  
    - Improved pointer error diagnostics (#26971).
-   0.4.0.0  18.06.2019
    - The MATCH signal interface version updated to 1.5.
-   0.5.0.0 26.02.2020
    - The MATCH Signal interface version is updated to 1.6.
    - Revised doxygen
-   0.6.0.0 26.06.2020
    - The MATCH signal interface version is updated to 1.7.
-   0.7.1.0 25.08.2020 
    - The MATCH signal interface version is updated to 1.8.
-   0.8.0.0  04.05.2021
    - The MATCH signal interface version is updated to 1.9
*/
//*************************************************************************************************

#ifndef __ITFSIGLUTD__
    #define __ITFSIGLUTD__

// INCLUDES =======================================================================================
    #include <ItfBasStruc.h>

// DEFINES & ENUMS  ===============================================================================
    //! Behavior previous "First Node" and greater than "Last Node"
    //! comment: "Limitation"-Mode is used as a "standard mode"
    typedef enum
    {
        LUTDMOD_LIMITATION,      //!< 0 - Get 1st node value before first node and/or last after last node
        LUTDMOD_EXTRAPOLATE,     //!< 1 - Extrapolation before 1st node and/or after last node
        LUTDMOD_DEAD_RANGE,      //!< 2 - Zero output before 1st node and/or after last node
        LUTDMOD_START_ZERO,      //!< 3 - Start from 1st node (0,0) and zero after last node
        LUTDMOD_MAX              //!< Maximum count of node behavior
    }ELutdMode;

    //! Signal Lutd Block
    typedef struct
    {
        TVoid*   pvObj;         //!< [STU] - Pointer to the private signal
        TUint16  u16Stamp;      //!< Registration stamp
    }TSigLutdAdr;

// VARIABLES =======================================================================================

// PROTOTYPES ======================================================================================

//a) Versions Information

    //--------------------------------------------------------------------------------------------------
    //! @brief      Signal Lutd Version information
    //! @retval     *cptVer - Pointer of Versions information
    //--------------------------------------------------------------------------------------------------
    extern const TVerChapCom *cptSigLutdVersionsInfo( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Check a version compatibility of a Signal
    //! @retval     TRUE    - This Signal is compatible with the current MATCH version
    //! @retval     FALSE   - This Signal is not compatible with the current MATCH version
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boSigLutdVersionCheck( TVoid );

//b) Constructor

    //--------------------------------------------------------------------------------------------------
    //! @brief      LUTD(Look-up table dual directions) - signal Constructor / create object
    //! @param[in]  ptSigAdr    - [stu] LUTD Signal address
    //! @param[in]  cpchNa      - [cha] Signal Name
    //! @param[in]  u8PntPosMax - [num] Maximum quantity of nodes for the positive direction
    //! @param[in]  u8PntNegMax - [num] Maximum quantity of nodes for the negative direction
    //! @retval     R_OKAY          - Okay
    //! @retval     R_NULL_POINTER - NULL pointer
    //! @retval     R_NOT_NAME     - Name is not valid
    //! @retval     R_MEMORY       - No more memory
    //! @retval     R_NOT_REGISTRY - Signal not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigLutdCreate( TSigLutdAdr* ptSigAdr, const TChar* cpchNa, TUint8 u8PntPosMax, TUint8 u8PntNegMax );

//c)  Initialization

    //--------------------------------------------------------------------------------------------------
    //! @brief      LUTD - Initialization of signal
    //! @param[in]  ptSigAdr    - [stu] LUTD signal address
    //! @param[in]  eModeFirst  - [enu] Behaviour before first node
    //! @param[in]  eModeLast   - [enu] Behaviour after last node
    //! @param[in]  u8PntPosMax - [num] Quantity of nodes to store for positive direction
    //! @param[in]  u8PntNegMax - [num] Quantity of nodes to store for negative direction
    //! @param[in]  ptPntPos    - [stu] Pointer of nodes for positive direction
    //! @param[in]  ptPntNeg    - [stu] Pointer of nodes for negative direction
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_UNKNOWN       - Wrong object name
    //! @retval     R_CONFIG        - Configurated mode(s) out of range
    //! @retval     R_EMPTY         - Too few points (empty characteristic definition)
    //! @retval     R_OVERFLOW      - Too many points
    //! @retval     R_MONOTONY      - X values not  monotonically increasing
    //! @retval     R_PARAMETER     - Wrong node parameters (e.g. at node #0)
    //! @retval     R_MEMORY        - Quantity of nodes exceeds created maximum quantity
    //! @retval     R_NULL_POINTER  - NULL pointer
    //! @retval     R_ADDRESS       - Wrong Signal address
    //! @retval     R_NOT_REGISTRY  - Signal not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigLutdInit(TSigLutdAdr* ptSigAdr, ELutdMode eModeFirst, ELutdMode eModeLast, TUint8 u8PntPosMax, TPntI16* ptPntPos, TUint8 u8PntNegMax, TPntI16* ptPntNeg);

    //--------------------------------------------------------------------------------------------------
    //! @brief      LUTD - Set characteristic curves (incl. set maximum count of nodes)
    //! @param[in]  ptSigAdr    - [stu] LUTD signal address
    //! @param[in]  u8PntPosMax - [num] Quantity of nodes to store for positive direction
    //! @param[in]  u8PntNegMax - [num] Quantity of nodes to store for negative direction
    //! @param[in]  ptPntPos    - [stu] Pointer to nodes of positive direction
    //! @param[in]  ptPntNeg    - [stu] Pointer to nodes of negative direction
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_NOACT         - No action, because of incorrect initialization
    //! @retval     R_EMPTY         - Too few points (empty characteristic definition)
    //! @retval     R_OVERFLOW      - Too many points
    //! @retval     R_MONOTONY      - X values not  monotonically increasing
    //! @retval     R_PARAMETER     - Wrong node parameters (e.g. at node #0)
    //! @retval     R_MEMORY        - Quantity of nodes exceeds created maximum quantity
    //! @retval     R_NULL_POINTER  - NULL pointer
    //! @retval     R_ADDRESS       - Wrong Signal address
    //! @retval     R_NOT_REGISTRY  - Signal not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigLutdSetCurves(TSigLutdAdr* ptSigAdr, TUint8 u8PntPosMax, TPntI16* ptPntPos, TUint8 u8PntNegMax, TPntI16* ptPntNeg);

    //--------------------------------------------------------------------------------------------------
    //! @brief      LUTD - Set start and end mode
    //! @brief           - if set mode is out of range -> standard "Limitation" mode will be used
    //! @param[in]  ptSigAdr    - [stu] LUTD signal address
    //! @param[in]  eModeFirst  - [enu] Behaviour before first node
    //! @param[in]  eModeLast   - [enu] Behaviour after last node
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_NOACT         - No action, because of incorrect initialization
    //! @retval     R_CONFIG        - Configured mode(s) out of range
    //! @retval     R_NULL_POINTER  - NULL pointer
    //! @retval     R_ADDRESS       - Wrong Signal address
    //! @retval     R_NOT_REGISTRY  - Signal not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigLutdSetMode(TSigLutdAdr* ptSigAdr, ELutdMode eModeFirst, ELutdMode eModeLast);

//d)  Status set and access functions

    //--------------------------------------------------------------------------------------------------
    //! @brief      LUTD - Get signal name
    //! @param[in]  ptSigAdr    - Signal address
    //! @retval     TChar*      - Signal name
    //! @retval     NULL
    //!        - Null Pointer
    //!        - Wrong Signal address
    //!        - Signal not registered
    //--------------------------------------------------------------------------------------------------
    extern TChar* pchLutdGetName(TSigLutdAdr* ptSigAdr);

    //--------------------------------------------------------------------------------------------------
    //! @brief      LUTD - Get initialization status
    //! @param[in]  ptSigAdr   - [stu] LUTD Signal address
    //! @retval     R_OKAY          - Faultless status
    //! @retval     R_NULL_POINTER  - NULL pointer
    //! @retval     R_ADDRESS       - Wrong Signal address
    //! @retval     R_NOT_REGISTRY  - Signal not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigLutdGetInitSta(TSigLutdAdr* ptSigAdr);

    //--------------------------------------------------------------------------------------------------
    //! @brief      LUTD - Get output offset value "Y[0]" of a specific direction
    //! @param[in]  ptSigAdr  - [stu] LUTD Signal address
    //! @param[in]  u8Dir     - [NUM] Control direction
    //! @retval     [1,I16_MAX] - [cus] Output offset(1st node) signal
    //! @retval     0
    //!     - Null Pointer
    //!     - Wrong Signal address
    //!     - Signal not registered
    //--------------------------------------------------------------------------------------------------
    extern TInt16 i16SigLutdGetYOffSet(TSigLutdAdr* ptSigAdr, TUint8 u8Dir);

    //--------------------------------------------------------------------------------------------------
    //! @brief      LUTD - Get output value of last characteristic node "Y[max]" of a specific direction
    //! @param[in]  ptSigAdr  - [stu] LUTD Signal address
    //! @param[in]  u8Dir     - [NUM] Control direction
    //! @retval     [1,I16_MAX] - [cus] Output signal of last node
    //! @retval     0
    //!     - Null Pointer
    //!     - Wrong Signal address
    //!     - Signal not registered
    //--------------------------------------------------------------------------------------------------
    extern TInt16 i16SigLutdGetYLastNode(TSigLutdAdr* ptSigAdr, TUint8 u8Dir);

//e)  Cyclic Signal Function

    //--------------------------------------------------------------------------------------------------
    //! @brief      LUTD - Look-up table dual direction calculation algorithm
    //! @param[in]  ptSigAdr  - [stu] LUTD Signal address
    //! @param[in]  i16X      - [cus] Input signal
    //! @retval     [1,I16_MAX] - [cus] Output signal
    //! @retval     0
    //!     - Initialization error
    //!     - Wrong Signal address
    //--------------------------------------------------------------------------------------------------
    extern TInt16 i16SigLutd(TSigLutdAdr* ptSigAdr, TInt16 i16X);

    //--------------------------------------------------------------------------------------------------
    //! @brief      LUTD - Look-up table dual directions calculation w/ direction status and maximum value check
    //! @param[in]  ptSigAdr - [stu] LUTD Signal address
    //! @param[in]  ptX      - [stu] Input  signal with direction status
    //! @param[out] ptY      - [stu] Output signal with direction status
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_NOACT         - No action, because of incorrect initialization
    //! @retval     R_NULL_POINTER  - NULL pointer
    //! @retval     R_ADDRESS       - Wrong Signal address
    //! @retval     R_NOT_REGISTRY  - Signal not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigLutdDir(TSigLutdAdr* ptSigAdr, TSigDir* ptX, TSigDir* ptY);

#endif
