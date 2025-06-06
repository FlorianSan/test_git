//**************************************************************************************************
/*!
@file       ItfSigTrigger.h
@brief      \htmlonly <span><img class="imgBriefImage" src="SigTrigger32x32.png" alt="SigTrigger32x32.png"></span><span class="spanBriefText">Signal Function "Trigger" (<b>SigTrigger</b>)</span>\endhtmlonly
@version 0.8.2.0
\n
<table align="left" width="40%">
<tr><td align ="center">\htmlonly <img src="SigTrigger_Schematic.png" width="500"  alt="into", align="center" >\endhtmlonly</td></tr>
<tr><td>\n </td></tr>
<tr><td>
Input and output of the signal for different adge and trigger types:\n\n
<table width="100%" class="doxtable">
<tr><td width="20%"></td><th width="27%"> TRIG_NORM</th><th width="27%">TRIG_PULSE</th><th width="27%">TRIG_LATCH</th></tr>
<tr><th>TRIG_EDGE_NONE</th> <td> Input and output are identical                 </td><td>   Every edge is noticed and sets the output high
                                                                                            for the \ref u16NewPulseTime and returns to low after that      </td><td>   Input and output are identical  </td></tr>
<tr><th>TRIG_RAISE_EDGE</th><td>Only the first rising edge is noticed and sets the output
                                high, next calls will set input to output. Resetting 
                                the trigger element through the function eSigTriggerReset(...)
                                will force the output to zero until the next edge           </td><td>   Every rising edge sets the output to for the 
                                                                                            duration of \ref u16NewPulseTime to high and returns to
                                                                                            low after that                                      </td><td>   The output switches between high
                                                                                                                                                            and low on rising edges only    </td></tr>
<tr><th>TRIG_FALL_EDGE</th><td> Only the first falling edge is noticed and sets the output
                                high, next calls will set input to output.                   </td><td>   Every falling edge sets the output to for the 
                                                                                            duration of \ref u16NewPulseTime to high and returns to
                                                                                            low after that                                      </td><td>   The output switches between high
                                                                                                                                                            and low on falling edges only   </td></tr>
<tr><th>TRIG_ANY_\n OR_INVERSE_EDGE
                    </th><td>   Every edge is noticed and set the output
                                high, next call of \ref bi2SigTrigger will set
                                the output back to low                          </td><td>   Every edge is noticed and sets the output low
                                                                                            for the \ref u16NewPulseTime and returns to high after that </td><td>   The output is inserve to the input</td></tr>
</table>
</td></tr>
</table>
\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n
\htmlonly <img src="SigTrigger_12TriggerSignals01.png" width="1000"  alt="into">\endhtmlonly \n
\htmlonly <img src="SigTrigger_12TriggerSignals02.png" width="1000"  alt="into">\endhtmlonly \n
\htmlonly <img src="SigTrigger_12TriggerSignals03.png" width="1000"  alt="into">\endhtmlonly \n
\htmlonly <img src="SigTriggerPulseOldEdited.png" width="1000"  alt="into">\endhtmlonly \n


@created    12.09.2014
@changelog
-   27.10.2014
    - Merge SigToggle and SigTrigger to have one functionality covering all functions.
    - DoxyGen description.
-   10.11.2014  
    - TRIG_NORM and (TRIG_RAISE_EDGE/ TRIG_FALL_EDGE) follows the 
      input after the first rising/ falling edge.
-   0.3.0.0  26.06.2018
    - The MATCH signal interface version is updated to 1.4.
-   0.3.2.0  14.05.2019
    - Improved pointer error diagnostics (#26971).
-   0.4.0.0  18.06.2019
    - The MATCH signal interface version is updated to 1.5.
-   0.5.0.0 26.02.2020
    - The MATCH Signal interface version is updated to 1.6.
    - Revised doxygen.
-   0.6.0.0 26.06.2020
    - The MATCH signal interface version is updated to 1.7.
-   0.7.1.0 25.08.2020 
    - The MATCH signal interface version is updated to 1.8.
-   0.8.0.0  04.05.2021
    - The MATCH signal interface version is updated to 1.9
-   0.8.1.0  21.07.2021
    - Improved doxygen (General - input/output plots)
-   0.8.2.0  19.04.2021
    - Updated version in HyML file (file was not updated in v0.8.1.0)
*/
//**************************************************************************************************

#ifndef ITFSIGTRIGGER_H_
#define ITFSIGTRIGGER_H_

// INCLUDES ========================================================================================
    #include <ItfCore.h>

// DEFINES & ENUMS  ================================================================================

//! Trigger Type  - this option control the trigger behavior described in the general description
typedef enum {
                            
            TRIG_NORM,      //!< Output toggles from OFF -> ON if input signal changes from OFF -> ON.
                            //!< \ref eSigTriggerReset "Resetting" the trigger element 
                            //!< will force the output to low until the next edge
            TRIG_PULSE,     //!< Output toggles for u16NewPulseTime interval
            TRIG_LATCH      //!< Output toggles from OFF -> ON if input signal gets an rising edge from OFF -> ON.
                            //!< The output is hold to ON state until the next rising or falling edge of the input signal,
                            //!< then the output toggles back ON->OFF
} ESigTriggerTyp;


//! Trigger Edge Type

typedef enum {
            TRIG_EDGE_NONE,             //!<    Depending on \ref ESigTriggerTyp it will notice every edge or give back the input
            TRIG_RISE_EDGE,             //!<    Reaction on rising edge
            TRIG_FALL_EDGE,             //!<    Reaction on falling edge
            TRIG_ANY_OR_INVERS_EDGE     //!<    Depending on \ref ESigTriggerTyp it will notice every edge or inverse the signal
} ESigTriggerEdgeTyp;

// STRUCTURES ==================================================================================

//! Signal object address structure
//! In order to use signal object this structure must be declared 
    typedef struct
    {
        TVoid*   pvObj;    //!< [STU] - Pointer to the private signal
        TUint16  u16Stamp; //!< Registration stamp
    }TSigTriggerAdr;

// VARIABLES =======================================================================================
// PROTOTYPES ======================================================================================

//a) Versions Information

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get a version information of a signal object
    //! @retval     *cptVer - Pointer to a versions information parameter
    //--------------------------------------------------------------------------------------------------
    extern const TVerChapCom *cptSigTriggerVersionsInfo( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Check a version compatibility of a signal object
    //! @retval     TRUE    - A version of a signal object is compatible with a used MATCH version
    //! @retval     FALSE   - A version of an object is incompatible with a used MATCH version
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boSigTriggerVersionCheck( TVoid );

//b) Constructor

    //--------------------------------------------------------------------------------------------------
    //! @brief      Creation
    //! @details    Object constructor
    //! @pre
    //!             - This signal type should be registered in MATCH environment
    //!             - An instance of the structure \ref TSigTriggerAdr must be already declared
    //! @note
    //!             - Method must be used in creation / start up phase (AppStartUp)
    //! @param[in]  ptSigAdr    - [stu] Pointer to a signal address structure
    //! @param[in]  cpchNa      - [char] Certain name of signal
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_MEMORY        - No more memory is available
    //! @retval     R_NOT_NAME      - Name is not valid
    //! @retval     R_NULL_POINTER  - One of arguments is null pointer
    //! @retval     R_NOT_REGISTRY  - Signal object is not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigTriggerCreate( TSigTriggerAdr* ptSigAdr, const TChar* cpchNa );

//c) Initialization

    //--------------------------------------------------------------------------------------------------
    //! @brief      Initialization
    //! @pre
    //!             - The function \ref eSigTriggerCreate must be already successfully executed.
    //! @param[in]  ptSigAdr            - [stu] Pointer to a signal address structure
    //! @param[in]  eInpBeh             - [-] Input behaviour 
    //! @param[in]  eTriggerTyp         - [-] Trigger type (e.g.: \ref ESigTriggerTyp "TRIG_NORM")
    //! @param[in]  eTriggerEdgeType    - [-] Trigger edge type (e.g.: \ref ESigTriggerEdgeTyp "TRIG_EDGE_NONE")
    //! @param[in]  u16InitPulseTime    - [-] Pulse hold time (see \ref ESigTriggerTyp "TRIG_PULSE")
    //! @retval     R_OKAY              - Faultless execution
    //! @retval     R_NULL_POINTER      - Null Pointer
    //! @retval     R_ADDRESS           - Wrong Signal address
    //! @retval     R_NOT_REGISTRY      - Signal not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigTriggerInit( TSigTriggerAdr* ptSigAdr
            ,const EInpBeh ceInpBeh
            ,const ESigTriggerTyp ceTriggerTyp
            ,const ESigTriggerEdgeTyp ceTriggerEdgeType
            ,TUint16 u16InitPulseTime);

//d)  Status set and access functions
    //--------------------------------------------------------------------------------------------------
    //! @brief      Get Trigger count ,the number of relevant edges noticed from the signal functionality  
    //! @param[in]  ptSigAdr    - Signal address
    //! @retval     TUint16     - Number of edges
    //! @retval     U16_ERROR   - Name not valid
    //--------------------------------------------------------------------------------------------------
    extern TUint16 u16SigTriggerGetCnt(TSigTriggerAdr *ptSigAdr);

    //--------------------------------------------------------------------------------------------------
    //! @brief      Sets the time the signal will be hold in TRIG_PULSE configuration
    //! @param[in]  ptSigAdr            - Signal address
    //! @param[in]  PulseTime           - [10ms] set pulse time
    //! @retval     R_OKAY              - Faultless execution
    //! @retval     R_NULL_POINTER      - Null Pointer
    //! @retval     R_ADDRESS           - Wrong Signal address
    //! @retval     R_NOT_REGISTRY      - Signal not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigTriggerSetPulseTime(TSigTriggerAdr* ptSigAdr, TUint16 u16NewPulseTime);

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get name of signal object
    //! @pre
    //!             - The function \ref eSigTriggerInit must be already successfully executed.
    //! @note
    //!             - Method must be used in initialization / run phase
    //!             (AppInit / AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to signal address structure
    //! @retval     != NULL     - Set signal name
    //! @retval     NULL        - Name is not valid
    //--------------------------------------------------------------------------------------------------
    extern TChar* pchSigTriggerGetName(TSigTriggerAdr* ptSigAdr);
        
    //--------------------------------------------------------------------------------------------------
    //! @brief      Reset return value of Trigger Object
    //! @param[in]  ptSigAdr            - [stu] Pointer to signal address structure
    //! @param[in]  bi2ResetState       - New signal output value
    //! @retval     R_OKAY              - Faultless execution
    //! @retval     R_NULL_POINTER      - Null Pointer
    //! @retval     R_ADDRESS           - Wrong Signal address
    //! @retval     R_NOT_REGISTRY      - Signal not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigTriggerReset(TSigTriggerAdr *ptSigAdr, TBit2 bi2ResetState);
        
    //--------------------------------------------------------------------------------------------------
    //! @brief      Get current output state
    //! @param[in]    ptSigAdr     - [stu] Pointer to signal address structure
    //! @retval[out]  TBit2        - Signal output state
    //! @retval       BI2_UNDEF    - Input has not yet been evaluated (Call `bi2SigTrigger()` )
    //! @retval       BI2_ERROR    - Wrong Signal address
    //--------------------------------------------------------------------------------------------------
    extern TBit2 bi2SigTriggerGetState(TSigTriggerAdr *ptSigAdr);

//e)  Cyclic Signal Function(s)

    //--------------------------------------------------------------------------------------------------
    //! @brief      Calculation / Execution
    //! @pre
    //!             - The function \ref eSigTriggerInit must be already successfully executed.
    //! @note
    //!             - Method must be used in run (execution) phase (AppRun).
    //! @param[in]  ptSigAdr       - [stu] Pointer to signal address structure
    //! @param[in]  bi2InpVal      - [bi2] Input value BI2_OFF/BI2_ON
    //! @retval     TBit2          - Signal output state
    //! @retval     BI2_ERROR      - Wrong Signal address
    //!                            - Input value is BI2_ERROR
    //--------------------------------------------------------------------------------------------------
    extern TBit2 bi2SigTrigger(TSigTriggerAdr* ptSigAdr,TBit2 bi2InpVal);
        
#endif
