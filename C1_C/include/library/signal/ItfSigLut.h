//*************************************************************************************************
/*!
@file       ItfSigLut.h
@brief      \htmlonly <span><img class="imgBriefImage" src="SigLut32x32.png" alt="SigLut32x32.png"></span><span class="spanBriefText">Signal Function "Lookup Table" (<b>SigLut</b>)</span>\endhtmlonly
@version 1.10.0.0

### General
With the Lookup Table an input \p i16X can be mapped to an output \p i16Y via a graph.

\htmlonly <div class=divMaxWidth align="center">
    <img class="imgInCenter" width="50%" align="center" src="SigLutSchematic.png" alt="SigLutSchematic.png">
    <table width="100%"></table>
    </div>
\endhtmlonly

This graph is defined by up to 100 value pairs (X,Y) called \ref TPntI16 "nodes".
The X values for the nodes have to be strictly monotonically increasing.
In between nodes the graph is linearly interpolated.
The result for input values which are not covered by the graph are determined by the selected \ref ELutMode option.
The image below shows an example graph with three nodes and the behaviour for each respective option:

<div class=divMaxWidth align="center">
| Node No. | X        | Y        |
|:--------:|:--------:|:--------:|
| 1        | 50       |  100     |
| 2        | 100      |  125     |
| 3        | 200      |  200     |
</div>
<table width="100%"></table>

\htmlonly <div class=divMaxWidth align="center">
    <img class="imgInCenter" width="100%" align="left" src="SigLutGraph.png" alt="SigLutGraph.png">
    <table width="100%"></table>
    </div> 
\endhtmlonly

### Mirroring feature
With the \ref eSigLutInit "boMirCha" option the signal can be configured to mirror the graph at the origin.
If enabled, the resulting output Y will be given by \f$ y(x)=-y(-x)\f$.

\htmlonly <div class=divMaxWidth style="max-width: 910px;">
  <img class="imgInCenter" width="600px" align="center" src="SigLutMirror.png" alt="SigLutMirror.png">
</div> <table width="100%"></table> \endhtmlonly

### Calculation functions
The output Y will be computed each time one of the three cyclic functions
 - \ref i16SigLut,
 - \ref eSigLutCmd,
 - \ref eSigLutDir

is called.
\ref eSigLutCmd and \ref eSigLutDir allow a more advanced calculation as they require an additional \ref TSigCmd "command" / \ref TSigDir "direction" status.
 - - -
### Example
In this example a look-up table with 3 nodes will be set up.

Firstly, for creation, a namespace for the \ref TSigLutAdr "address object" needs to be declared globally.
It will be called \p tLut where the prefix \p t is chosen as a struct identifier:

@code
    static TSigLutAdr  tLut;
@endcode

Additionally the nodes for the graph will be defined globally as a node array :

@code
static TPntI16    atPoints[3]={
    //    x   y
    {    10,  0},//00
    {   100,  5},//01
    {  1000, 10},//02
};
@endcode

During `eAppStartUp()` the signal will be \ref eSigLutCreate "created".
Therefore a name needs to be chosen (\p "Output1").
The amount of points passed with \p u8PntMax limits the possible quantity of nodes for the entire runtime (\p 3).
The return value \p eRetVal is used for further failure handling.

@code
    eRetVal=eSigLutCreate(&tLut,"Output1",3);
@endcode

During \ref eAppInit "application initialization" the signal needs to be \ref eSigLutInit "initialized".
Therefore the signal address \p &tLut is passed in addition to the five required \ref eSigLutInit "initialization parameters".
The behaviour beyond the node range is chosen to be \ref ELutMode "LUTMOD_LIMITATION".
This will cause a saturation of the output values.
In this example the saturation will apply if X is smaller than 10 or greater than 1000.
The \ref eSigLutSetMirCha "mirroring" feature will be disabled by setting \p boMirCha to \p FALSE.
Next the \p u8PntMax specifies the amount of points which will be used for calculation (\p 3).
This value must not be higher than the value during \ref eSigLutCreate "creation".
As last parameter the start address of the above defined node array is passed (\p atPoints).

@code
 eRetVal=eSigLutInit(&tLut,LUTMOD_LIMITATION,LUTMOD_LIMITATION,FALSE,3,atPoints);
@endcode

Now, during the \ref vAppRun "application run phase", any of the calculation or reconfiguring functions may be called:

- \ref i16SigLut "Calulate" output Y for input X=150:

@code
 i16Val = i16SigLut(&tLut,150);
@endcode

- Enable the \ref eSigLutSetMirCha "mirroring feature"

@code
 eRetVal=eSigLutSetMirCha(&tLut, TRUE);
@endcode

- Read the \ref i16SigLutGetYNode "output value of node" 3.<br>
In this example 3 is the maximum quantity of nodes. Thus both of the following calls will return 10 for \p i16Val.

@code
 i16Val=i16SigLutGetYNode(&tLut, 2);
 i16Val=i16SigLutGetYLastNode(&tLut);
@endcode
<br>
- - -

@created    17.02.2012
@changelog
-   0.0.0.1  15.05.2014
    - `eSigLutCmd()`: adapting range check of "ptX.i16Sig" - is now without checking 
      against the Last LUT Node.
    - `eSigLutCmd()`: mirror flag behavior changed - now mirroring at point of origin.
    - `eSigLutDir()`: change range checks - 4 quadrant characteristics now supported.
-   0.0.1.0  21.10.2014
    - Revised Doxygen.
-   1.3.0.0  19.01.2016
    - ItfSigBasEle.h renamed to ItfBasStruc.h in MATCH 06.09.XX.XX.
-   1.4.7.0  08.08.2016
    - Added functions `i16SigLutGetYNode()`, `i16SigLutGetXNode()`, `eSigLutGetChars()`.
-   1.4.12.0  31.01.2016
    - Improved calculation precision.
-   1.4.13.0  24.04.2018  
    - Improved rounding with negative gradients.
    - `eSigLutGetInitSta()` now returns R_NOT_INITIALIZED instead of R_UNKNOWN 
      in case of missing initialization.
    - Revised Doxygen.
-   1.5.0.0  26.06.2018
    - The MATCH signal interface version updated to 1.4.
-   1.5.2.0  14.05.2019
    - Improved pointer error diagnostics (#26971).
-   1.6.0.0  18.06.2019
    - The MATCH signal interface version updated to 1.5.
-   1.7.0.0 26.02.2020
    - The MATCH Signal interface version is updated to 1.6.
-   1.8.0.0 26.06.2020
    - The MATCH signal interface version is updated to 1.7.
-   1.9.1.0 25.08.2020 
    - The MATCH signal interface version is updated to 1.8.
-   1.10.0.0  04.05.2021
    - The MATCH signal interface version is updated to 1.9
*/
//*************************************************************************************************

#ifndef __ITFSIGLUT__
    #define __ITFSIGLUT__

// INCLUDES =======================================================================================
    #include <ItfBasStruc.h>
    #include <ItfBasOut.h>
    #include <ItfBasConv.h>
    #include <ItfBasEleTimer.h>

    //! @brief      Behaviour beyond node range
    //! @details    Output behaviour for input values which are not covered by the defined node range.
    //!             Behaviour can be set seperately for inputs \p i16X which
    //!             - undercut the first node's X value or
    //!             - exceed the last node's X value.
    //!
    //!             \htmlonly <div class=divMaxWidth align="center"><img class="imgInCenter" width="100%" align="left" src="SigLutGraph.png" alt="SigLutGraph.png"><table width="100%"></table></div>\endhtmlonly
    //! @note
    //!             - In case \ref LUTMOD_START_ZERO is selected, all X values have to be positive.
    //!             - \ref LUTMOD_LIMITATION will be set in case a value higher than \ref LUTMOD_MAX is chosen.
    //! @sa         \ref eSigLutInit
    typedef enum
    {
        LUTMOD_LIMITATION,      //!< 0 - Saturate output with values of first/last node.
        LUTMOD_EXTRAPOLATE,     //!< 1 - Extrapolation before first/ after last node.
        LUTMOD_DEAD_RANGE,      //!< 2 - Zero output before first/ after last node.
        LUTMOD_START_ZERO,      //!< 3 - Interpolate between origin (0,0) and first node. Zero after last node.
        LUTMOD_MAX              //!<     LUTMOD_MAX represents a mode that is not yet available.
                                //!<
    }ELutMode;

    //! Signal Lut Block
    typedef struct
    {
        TVoid*   pvObj;         //!< [stu] - Pointer to the private Object
        TUint16  u16Stamp;      //!< Registration stamp
    }TSigLutAdr;

// VARIABLES =======================================================================================

// PROTOTYPES ======================================================================================

//a) Versions Information

    //--------------------------------------------------------------------------------------------------
    //! @brief      Version information of Signal Lut
    //! @retval     struct* - Pointer to version information
    //--------------------------------------------------------------------------------------------------
    extern const TVerChapCom *cptSigLutVersionsInfo( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Version check of Signal Lut
    //! @retval     TRUE   - is correct
    //! @retval     FALSE  - is incorrect
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boSigLutVersionCheck( TVoid );

//b) Constructor

    //--------------------------------------------------------------------------------------------------
    //! @brief      Creation of Signal Lut
    //!
    //! @pre        Function must be called during `eAppStartUp()`.
    //!
    //! @details    Memory for chosen configuration will be allocated and filled with internal default values.
    //!
    //! @attention  A signal with more than 100 \ref TPntI16 "nodes" can currently be created but not be \ref eSigLutInit "initialized".
    //! @note       The signal type \p SigLut will automatically added to the name.<br>
    //!             Example: `cpchNa="Test"` produces the signal name `SigLut.Test`
    //!
    //! @post       \ref eSigLutInit should be called afterwards to finish the setup process for the signal (during `eAppInit()`).
    //!
    //! @param[in]  ptSigAdr        - [stu] LUT signal address
    //! @param[in]  cpchNa          - [str] LUT signal name
    //! @param[in]  u8PntMax        - [num] Quantity of nodes
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_MEMORY        - Insufficient memory
    //! @retval     R_NOT_NAME      - LUT signal name is invalid
    //! @retval     R_NULL_POINTER  - Signal address is NULL
    //! @retval     R_NOT_REGISTRY  - Signal not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigLutCreate( TSigLutAdr* ptSigAdr, const TChar* cpchNa, TUint8 u8PntMax );

//c) Initialization

    //--------------------------------------------------------------------------------------------------
    //! @brief      Initialization of Signal Lut
    //!
    //! @pre        The function \ref eSigLutCreate must already be successfully executed.
    //!
    //! @details    The signal with will be configured with nodes, mirroring feature and the behaviour beyond the node range.
    //!
    //! @note       In case of exceeding possible values for \ref ELutMode "eModeFirst" or \ref ELutMode "eModeLast" (i.e \ref ELutMode "LUTMOD_MAX" is selected )
    //!             \ref ELutMode "LUTMOD_LIMITATION" will be chosen instead.
    //! @note       Up to \p u8PntMax=100 points can be initialized for SigLut.
    //!
    //! @param[in]  ptSigAdr            - [stu] LUT signal address
    //! @param[in]  eModeFirst          - [enu] Behaviour before first node
    //! @param[in]  eModeLast           - [enu] Behaviour after last node
    //! @param[in]  boMirCha            - [boo] Mirror graph at origin
    //! @param[in]  u8PntMax            - [num] Quantity of nodes
    //! @param[in]  ptPnt               - [stu] Points of characteristic curve
    //! @retval     R_OKAY              - Faultless execution
    //! @retval     R_NOT_INITIALIZED   - Object created but not initialized  
    //! @retval     R_CONFIG            - Configured mode(s) out of range
    //! @retval     R_EMPTY             - Too few points (empty node definition)
    //! @retval     R_OVERFLOW          - Too many points
    //! @retval     R_MONOTONY          - X values not strictly monotonically increasing
    //! @retval     R_PARAMETER         - First node not greater than 0 (Only for \ref LUTMOD_START_ZERO)
    //! @retval     R_MEMORY            - Quantity of nodes is higher than created maximum.
    //! @retval     R_NULL_POINTER      - Signal address is NULL
    //! @retval     R_ADDRESS           - Wrong signal address
    //! @retval     R_NOT_REGISTRY      - Signal not registered
    //! @retval     R_NOACT             - No action, because of incorrect initialization
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigLutInit( TSigLutAdr* ptSigAdr, ELutMode eModeFirst, ELutMode eModeLast, TBoolean boMirCha, TUint8 u8PntMax, TPntI16* ptPnt );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Set values and quantity for graph \ref TPntI16 "nodes"
    //!
    //! @pre        The function \ref eSigLutCreate must already be successfully executed.
    //! @pre        The function \ref eSigLutInit must already be successfully executed.
    //!
    //! @param[in]  ptSigAdr        - [stu] LUT signal address
    //! @param[in]  u8PntMax        - [num] Quantity of nodes
    //! @param[in]  ptPnt           - [stu] Points of characteristic curve
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_NOACT         - No action, because of incorrect initialization
    //! @retval     R_EMPTY         - Too few points (empty node definition)
    //! @retval     R_OVERFLOW      - Too many points
    //! @retval     R_MONOTONY      - X values not strictly monotonically increasing
    //! @retval     R_PARAMETER     - First node not greater than 0 (Only for \ref LUTMOD_START_ZERO)
    //! @retval     R_MEMORY        - Quantity of nodes is higher than created maximum.
    //! @retval     R_NULL_POINTER  - Signal address is NULL
    //! @retval     R_ADDRESS       - Wrong signal address
    //! @retval     R_NOT_REGISTRY  - Signal not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigLutSetChars( TSigLutAdr* ptSigAdr, TUint8 u8PntMax, TPntI16* ptPnt );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Set mirroring feature
    //!
    //! @pre        The function \ref eSigLutCreate must already be successfully executed.
    //! @pre        The function \ref eSigLutInit must already be successfully executed.
    //!
    //! @details    With the \ref eSigLutInit "boMirCha" option the signal can be configured to mirror the graph at the origin.
    //!             If enabled, the resulting output \p i16Y will be given by \f$ y(x)=-y(-x)\f$.
    //!
    //! @param[in]  ptSigAdr        - [stu] LUT signal address
    //! @param[in]  boMirCha        - [boo] Enable mirror feature 
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_NOACT         - No action, because of incorrect initialization
    //! @retval     R_PARAMETER     - First node not greater than 0 (Only for \ref LUTMOD_START_ZERO)
    //! @retval     R_NULL_POINTER  - Signal address is NULL
    //! @retval     R_ADDRESS       - Wrong signal address
    //! @retval     R_NOT_REGISTRY  - Signal not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigLutSetMirCha( TSigLutAdr* ptSigAdr, TBoolean boMirCha );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Set the behaviour beyond node range
    //!
    //! @pre        The function \ref eSigLutCreate must already be successfully executed.
    //! @pre        The function \ref eSigLutInit must already be successfully executed.
    //!
    //! @note       In case of exceeding possible values (example: \ref LUTMOD_MAX is selected )
    //!             \ref LUTMOD_LIMITATION will be chosen instead.
    //!
    //! @details    Changes the \ref ELutMode "behaviour" applied to input values \p i16X which are not covered by the nodes.
    //!
    //! @param[in]  ptSigAdr        - [stu] LUT signal address
    //! @param[in]  eModeFirst      - [enu] Behaviour before first node
    //! @param[in]  eModeLast       - [enu] Behaviour after last node
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_NOACT         - No action, because of incorrect initialization
    //! @retval     R_CONFIG        - Configured mode(s) out of range
    //! @retval     R_NULL_POINTER  - Signal address is NULL
    //! @retval     R_ADDRESS       - Wrong signal address
    //! @retval     R_NOT_REGISTRY  - Signal not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigLutSetMode( TSigLutAdr* ptSigAdr, ELutMode eModeFirst, ELutMode eModeLast );

//d) Status set and access functions

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get signal name
    //!
    //! @pre        The function \ref eSigLutCreate must already be successfully executed.
    //!
    //! @details    Returns pointer to the name of a SigLut object.
    //!             The name is defined during \ref eSigLutCreate "creation" by \p cpchNa and the signal type.
    //!
    //! @param[in]  ptSigAdr        - [stu] LUT signal address
    //! @retval     char*           - Pointer to signal name
    //! @retval     NULL-Pointer    - Signal registration or address invalid
    //--------------------------------------------------------------------------------------------------
    extern TChar* pchLutGetName( TSigLutAdr* ptSigAdr );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get initialization status
    //!
    //! @pre        The function \ref eSigLutCreate must already be successfully executed.
    //! @pre        The function \ref eSigLutInit must already be successfully executed.
    //!
    //! @param[in]  ptSigAdr            - [stu] LUT signal address
    //! @retval     R_OKAY              - Correct initialization
    //! @retval     R_NULL_POINTER      - Signal address is NULL
    //! @retval     R_ADDRESS           - Wrong signal address
    //! @retval     R_CONFIG            - Configured mode(s) out of range
    //! @retval     R_EMPTY             - Too few points (empty node definition)
    //! @retval     R_MEMORY            - Quantity of nodes is higher than created maximum.
    //! @retval     R_MONOTONY          - X values not strictly monotonically increasing
    //! @retval     R_NOACT             - No action, because of incorrect initialization
    //! @retval     R_NOT_REGISTRY      - Signal not registered
    //! @retval     R_OVERFLOW          - Too many points
    //! @retval     R_PARAMETER         - First node not greater than 0 (Only for \ref LUTMOD_START_ZERO)
    //! @retval     R_NOT_INITIALIZED   - Object created but not initialized
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigLutGetInitSta( TSigLutAdr* ptSigAdr );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get output offset value: Y[0]
    //!
    //! @pre        The function \ref eSigLutCreate must already be successfully executed.
    //!
    //! @param[in]  ptSigAdr        - [stu] LUT signal address
    //! @retval     i16             - Output value offset
    //! @retval     0               - Signal registration or address invalid
    //--------------------------------------------------------------------------------------------------
    extern TInt16 i16SigLutGetYOffSet( TSigLutAdr* ptSigAdr );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get last Y value: Y[max]
    //!
    //! @pre        The function \ref eSigLutCreate must already be successfully executed.
    //! @details    The funtion returns the Y value of the last node in the node array.
    //!
    //! @param[in]  ptSigAdr        - [stu] LUT signal address
    //! @retval     i16             - Output value at last node
    //! @retval     0               - Signal registration or address invalid
    //--------------------------------------------------------------------------------------------------
    extern TInt16 i16SigLutGetYLastNode( TSigLutAdr* ptSigAdr );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get Y value of the node with index i: "Y[i]"
    //!
    //! @pre        The function \ref eSigLutCreate must already be successfully executed.
    //!
    //! @note       Remember that a graph with 8 nodes is kept with indices [0]...[7].
    //!             In this case \ref u8Idx = 8 would cause an error with \ref I16_LIMIT.
    //!
    //! @param[in]  ptSigAdr        - [stu] LUT signal address
    //! @param[in]  u8Idx           - [num] Index of certain node from node (points) array
    //! @retval     i16             - Output value of certain node (point)
    //! @retval     I16_UNDEF       - Signal registration or address invalid
    //! @retval     I16_LIMIT       - Node index is out of range
    //--------------------------------------------------------------------------------------------------
    extern TInt16 i16SigLutGetYNode( TSigLutAdr* ptSigAdr, TUint8 u8Idx );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get X value of the node with index i: "X[i]"
    //!
    //! @pre        The function \ref eSigLutCreate must already be successfully executed.
    //!
    //! @note       Remember that a graph with 8 nodes is kept with indices [0]...[7].
    //!             In this case \ref u8Idx = 8 would cause an error with \ref I16_LIMIT.
    //!
    //! @param[in]  ptSigAdr        - [stu] LUT signal address
    //! @param[in]  u8Idx           - [num] Index of certain node from node (points) array
    //! @retval     i16             - Input value of certain node (point)
    //! @retval     I16_UNDEF       - Signal registration or address invalid
    //! @retval     I16_LIMIT       - Node index is out of range
    //--------------------------------------------------------------------------------------------------
    extern TInt16 i16SigLutGetXNode( TSigLutAdr* ptSigAdr, TUint8 u8Idx );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get all node values as node array
    //!
    //! @param[in]  ptSigAdr        - [stu] LUT signal address
    //! @param[in]  u8PntQnt        - [num] Quantity of points (to be copied)
    //! @param[in]  atPnti16        - [arr] Output node array (nodes will be copied there)
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_ADDRESS       - Wrong signal address
    //! @retval     R_NOT_REGISTRY  - Signal not registered
    //! @retval     R_NULL_POINTER  - NULL-Pointer for signal or output array
    //! @retval     R_RANGE         - Quantity of nodes is higher than the created maximum
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigLutGetChars(TSigLutAdr* ptSigAdr, TUint8 u8PntQnt, TPntI16 atPnti16[]);

//e)  Cyclic Signal Function

    //--------------------------------------------------------------------------------------------------
    //! @brief      Look-up table calculation algorithm
    //!
    //! @pre        The function \ref eSigLutCreate must already be successfully executed.
    //! @pre        The function \ref eSigLutInit must already be successfully executed.
    //!
    //! @details    The algorithm calculates the output values Y according to the defined nodes.
    //!             Values between adjacent nodes will be linearly interpolated.
    //!
    //! @param[in]  ptSigAdr        - [stu] LUT signal address
    //! @param[in]  i16X            - [num] Input signal
    //! @retval     i16             - Calculated output signal
    //! @retval     ERROR(0)        - Signal registration or address invalid / Wrong Initialization
    //--------------------------------------------------------------------------------------------------
    extern TInt16 i16SigLut( TSigLutAdr* ptSigAdr, TInt16  i16X );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Look-up table calculation with command status
    //!
    //! @pre        The function \ref eSigLutCreate must already be successfully executed.
    //! @pre        The function \ref eSigLutInit must already be successfully executed.
    //!
    //! @attention  \ref eSigLutCmd requires a graph to be determined by nodes in the first quadrant (`x,y >= 0`).
    //!             Otherwise an error value will be returned in \p ptY.
    //!
    //! @details    This function enhances the basic output calculation \ref i16SigLut with an additional
    //!             command parameter \ref TSigCmd::bi2Cmd "bi2Cmd" for both input \p ptX and output \p ptY.
    //!             The algorithm will generate an valid output if one of the following combinations is applied to \p ptX:
    //!             - \ref BI2_OFF and \p PtX.i16Sig = 0
    //!             - \ref BI2_ON and \p PtX.i16Sig > 0 (\ref eSigLutInit "Mirror feature" disabled)
    //!             - \ref BI2_ON and \p PtX.i16Sig < 0 (\ref eSigLutInit "Mirror feature" enabled)
    //!
    //!             Otherwise the output is \ref I16_ERROR. The table below summarizes the cases stated above.
    //!
    //!             <div class="divMono" style=""></div>
    //!             |   ptX || |ptY|| | ptY ||
    //!             |:-----:|| |:-------:|:--------:||:-------:|:--------:|
    //!             ||| | \ref eSigLutSetMirCha "Mirroring" disabled||   |\ref eSigLutSetMirCha "Mirroring" enabled||
    //!             | \ref TSigCmd::bi2Cmd "bi2Cmd" | \ref TSigCmd::i16Sig  |^|\ref TSigCmd::bi2Cmd "bi2Cmd"    | \ref TSigCmd::i16Sig    |^|\ref TSigCmd::bi2Cmd "bi2Cmd"    | \ref TSigCmd::i16Sig    |
    //!             |BI2_ON                         | 0                     |^|  BI2_ERROR                      |I16_ERROR                |^|  BI2_ERROR                      |I16_ERROR                |
    //!             |BI2_ON                         | >0                    |^|  BI2_ON / BI2_OFF               |i16                      |^|  BI2_ERROR                      |I16_ERROR                |
    //!             |BI2_ON                         | <0                    |^|  BI2_ERROR                      |I16_ERROR                |^|  BI2_ON / BI2_OFF               |i16                      |
    //!             |BI2_OFF                        | 0                     |^|  BI2_ON / BI2_OFF               |i16                      |^|  BI2_ON / BI2_OFF               |i16                      |
    //!             |BI2_OFF                        | >0                    |^|  BI2_ERROR                      |I16_ERROR                |^|  BI2_ERROR                      |I16_ERROR                |
    //!             |BI2_OFF                        | <0                    |^|  BI2_ERROR                      |I16_ERROR                |^|  BI2_ERROR                      |I16_ERROR                |
    //!
    //! @param[in]  ptSigAdr        - [stu] LUT signal address
    //! @param[in]  ptX             - [stu] Input  signal with command status
    //! @param[out] ptY             - [stu] Output signal with command status
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_NOACT         - No action, because of incorrect initialization
    //! @retval     R_NULL_POINTER  - Pointer is NULL
    //! @retval     R_ADDRESS       - Wrong block adresse
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigLutCmd( TSigLutAdr* ptSigAdr, TSigCmd* ptX, TSigCmd* ptY );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Look-up table calculation with direction status
    //!
    //! @pre        The function \ref eSigLutCreate must already be successfully executed.
    //! @pre        The function \ref eSigLutInit must already be successfully executed.
    //!
    //! @attention  This function does not support the mirroring feature.
    //!
    //! @details    This function enhances the basic output calculation \ref i16SigLut with a 
    //!             directional parameter \ref TSigCmd::bi3Dir "bi3Dir" for both input \p ptX and output \p ptY.
    //!             The algorithm will generate a valid output if one of the following value combinations is applied to \p ptX:
    //!             - \ref BI3_POS and X>0
    //!             - \ref BI3_NEU and X=0
    //!             - \ref BI3_NEG and X<0
    //!
    //!             Otherwise the output is \ref I16_ERROR.
    //!
    //! @param[in]  ptSigAdr        - [stu] LUT signal address
    //! @param[in]  ptX             - [stu] Input  signal with direction status
    //! @param[out] ptY             - [stu] Output signal with direction status
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_NOACT         - No action, because of incorrect initialization
    //! @retval     R_NULL_POINTER  - Pointer is NULL
    //! @retval     R_ADDRESS       - Wrong block adresse
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigLutDir( TSigLutAdr* ptSigAdr, TSigDir* ptX, TSigDir* ptY );

#endif
