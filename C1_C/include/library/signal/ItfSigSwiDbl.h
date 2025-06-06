//**************************************************************************************************
/*!
@file       ItfSigSwiDbl.h
@brief      \htmlonly <span><img class="imgBriefImage" src="SigSwiDbl32x32.png" alt="SigSwiDbl32x32.png"></span><span class="spanBriefText">Signal Function "Double Switch" (<b>SigSwiDbl</b>)</span>\endhtmlonly
@version 1.9.0.0
\n

The Double Switch Signal generates the state of redundant boolean signals SWI0 and SWI1,
where in case of a pair of a NO and a NC switch one of them is TRUE, the other one FALSE and vice versa.
In real life toggle switches are often used to generate such signals.
The problem is now to generate one switch state SWI_NONC using two inputs and being robust against switching effects as bouncing and lagging.
The truth table of the Double Switches NO/NC, NC/NO, NO/NO and NC/NC should look like this:
\n\n
|   SWI0    |   SWI1    |   SWI_NONC    |   SWI_NCNO    |   SWI_NONO    |   SWI_NCNC    |
|-----------|-----------|---------------|---------------|---------------|---------------|
|   BI2_ON  |   FALSE   |   BI2_ON      |   FALSE       |   ERROR       |   ERROR       |
|   BI2_OFF |   BI2_ON  |   BI2_OFF     |   BI2_ON      |   ERROR       |   ERROR       |
|   BI2_ON  |   BI2_ON  |   ERROR       |   ERROR       |   BI2_ON      |   BI2_OFF     |
|   BI2_OFF |   BI2_OFF |   ERROR       |   ERROR       |   BI2_OFF     |   BI2_ON      |
\n\n
This means there are two states, where the output of the Double Switch is not defined or even erroneous.
During the process of switching these states occur regularly.
Therefore the Output of the Double Switch is determined by the following state machine:
\n
\htmlonly
<img src="SigSwiDblStateMachine.png" width="600"  alt="into", align="center" >
\endhtmlonly
\n
The double switch state is initialized as UNDEF. If the Input switches are in Error State\n
E(NONC) = (SWI0 && SWI1) || (!SWI0 && !SWI1)\n
E(NCNO) = (SWI0 && SWI1) || (!SWI0 && !SWI1)\n
E(NONO) = (!SWI0 && SWI1) || (SWI0 && !SWI1)\n
E(NCNC) = (!SWI0 && SWI1) || (SWI0 && !SWI1)\n
the Double Switch state changes to ERR when the timer delay T_Err is elapsed. This means the transition to ERR is defined as \n
err =E && Delay(T_Err).\n
The transition to ERR is also performed from States ON and OFF. The transitions between ON and OFF for the NO/NC switch are defined as\n
-off(NONC) = SWI0 && !SWI1 and\n
-on(NONC) = !SWI0 && SWI1,\n
the NC/NO\n
-off(NCNO) = !SWI0 && SWI1 and\n
-on(NCNO) = SWI0 && !SWI1,\n
the NO/NO\n
-off(NONO) = SWI0 && SWI1 and\n
-on(NONO) = !SWI0 && !SWI1,\n
and the NC/NC\n
-off(NCNC) = !SWI0 && !SWI1 and\n
-on(NCNC) = SWI0 && SWI1,\n

which means that switching between non ERR states happens immediately.
These transitions are also valid from UNDEF and ERR to ON and OFF.
To avoid fast toggling between ON, OFF ERR and UNDEF,
the input signals SWI0 and SWI1 are debounced with time T_Dbo before further usage in the state machine.
\n
\htmlonly
<img src="SigSwiDblBlockDiagram.png" width="600"  alt="into", align="center" >
\endhtmlonly
\n
Used Signal MATCH Objects
-------------------------
For debouncing of the input switches the function uses the SigDbo function.
The Delay of error detection is done by EleTim.

Parameters\n
----------
-Parameter: T_Err: Error detection delay\n
-Parameter: T_Dbo: Debounce time for inputs\n
-Configuration: NO/NC, NC/NO, NO/NO or NC/NC\n

@created    08.12.2014  
@changelog
-   1.4.0.0 26.06.2018
    - The MATCH signal interface version is updated to 1.4.
-   1.4.2.0 14.05.2019
    - Improved pointer error diagnostics (#26971).
-   1.5.0.0 18.06.2019
    - The MATCH signal interface version is updated to 1.5.
-   1.6.0.0 26.02.2020
    - The MATCH Signal interface version is updated to 1.6.
-   1.7.0.0 26.06.2020
    - The MATCH signal interface version is updated to 1.7.
-   1.8.2.0 25.08.2020 
    - The MATCH signal interface version is updated to 1.8.
-   1.9.0.0  04.05.2021
    - The MATCH signal interface version is updated to 1.9
*/
//**************************************************************************************************

#ifndef ITFSIGSWIDBL_H_
#define ITFSIGSWIDBL_H_

// INCLUDES ========================================================================================
    #include <ItfCore.h>

// DEFINES & ENUMS  ================================================================================
    //! Signal
    typedef struct
    {
        TVoid*   pvObj;    //!< [STU] - Pointer to the private signal
        TUint16  u16Stamp; //!< Registration stamp
    }TSigSwiDblAdr;

    //! Switch Mode Configuration
    enum
    {
        SWIDBL_NONC,    //!< [CUST] Switch 0 is normally open, Switch 1 is normally closed
        SWIDBL_NCNO,    //!< [CUST] Switch 0 is normally closed, Switch 1 is normally open
        SWIDBL_NONO,    //!< [CUST] Switch 0 is normally open, Switch 1 is normally closed
        SWIDBL_NCNC     //!< [CUST] Switch 0 is normally closed, Switch 1 is normally open
    };

// VARIABLES =======================================================================================
// ROTOTYPES =======================================================================================

//a) Versions Information

    //--------------------------------------------------------------------------------------------------
    //! @brief      Signal Input double Version information
    //! @retval     *cptVer - Pointer of Versions information
    //--------------------------------------------------------------------------------------------------
    extern const TVerChapCom *cptSigSwiDblVersionsInfo( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Signal SWI DOUBLE Version check
    //! @retval     TRUE   - is correct
    //! @retval     FALSE  - is incorrect
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boSigSwiDblVersionCheck( TVoid );

//b) Constructor

    //--------------------------------------------------------------------------------------------------
    //! @brief      Signal Constructor / create object
    //! @param[in]  ptSigAdr   - [SIG] Signal addresse
    //! @param[in]  pchNa      - [STR] Signal Name
    //! @retval     R_OKAY         - Okay
    //! @retval     R_NULL_POINTER - Null Pointer
    //! @retval     R_MEMORY       - No more memory
    //! @retval     R_NOT_REGISTRY - Signal not registere
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigSwiDblCreate( TSigSwiDblAdr* ptSigAdr, const TChar* pchNa );

//c) Initialization

    //--------------------------------------------------------------------------------------------------
    //! @brief      Initialization of Object
    //! @param[in,out]  ptSigAdr        - [SIG] SwiDbl-Signal addresse
    //! @param[in]  u32DebTimeSwitches  - [ms] Switch debounce time
    //! @param[in]  u32DelayTimeError   - [ms] delay time for errors
    //! @param[in]  u8SwiDblConfig      - [ENU] 0-NONC, 1-NCNO, 2-NONO, 3-NCNC
    //! @retval     R_OKAY          - faultless execution
    //! @retval     R_NULL_POINTER  - Null Pointer
    //! @retval     R_ADDRESS       - wrong block adresse
    //! @retval     R_NOT_REGISTRY - signal not registere
    //! @created    29.07.2013  HYDAC/NJP
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigSwiDblInit( TSigSwiDblAdr* ptSigAdr, TUint32 u32DebTimeSwitches, TUint32 u32DelayTimeError, TUint8 u8SwiDblConfig );

//d)  Status set and access functions

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get signal name
    //! @param[in]  ptSigAdr    - Signal addresse
    //! @retval     != NULL     - Get signal name
    //! @retval     NULL        - Name not valid
    //--------------------------------------------------------------------------------------------------
    extern TChar* pchSigSwiDblGetName(TSigSwiDblAdr* ptSigAdr);

//e)  Cyclic Signal Function(s)
    //--------------------------------------------------------------------------------------------------
    //! @brief      Calculation Algorithm
    //! @param[in]  ptSigAdr - [SIG] SwiDbl-Signal addresse
    //! @param[in]  bi2Swi0 - [bool] Switch 0 input
    //! @param[in]  bi2Swi1 - [bool] Switch 1 input
    //! @created    29.07.2013  HYDAC/NJP
    //--------------------------------------------------------------------------------------------------
    extern TBit2 bi2SigSwiDbl(TSigSwiDblAdr* ptSigAdr, TBit2 bi2Swi0, TBit2 bi2Swi1);

#endif /* ITFSIGSWIDBL_H_ */
