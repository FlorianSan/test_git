//**************************************************************************************************
/*!
@file    ItfBloInCurDbl.h
@version 1.12.0.0
@brief   \htmlonly
<span><img class="imgBriefImage" src="BloInCurDbl32x32.png" alt="BloInCurDbl32x32.png"></span>
<span class="spanBriefText">Block "Double Current Input" (<b>BloInCurDbl</b>)</span>
\endhtmlonly

\n
<blockquote style="width:40%;">
\htmlonly
<img src="BloInCurDblSketch.png" width="500"  alt="into", align="left" >
\endhtmlonly
\n\n\n\n\n\n\n\n\n\n
\htmlonly
The Block can be attached to two redundant Pin's delivering 0...25 [mA] analog Signal. The Block
will deliver a Signal and a Direction. The Signal is customizable within the Limits of Tint16. The
Input Block can be configured to deliver a single Direction Signal (default 0...1000 [&permil;]) or a double
direction Signal (default -1000...1000 [&permil;]).  This can be done by right setting of input and output
characteristic parameters. The characteristic for input and output has the same form: ai16Char{POS1,CENTER,POS2}[&mu;A].
\endhtmlonly
\n
|ai16InChar         |[3]        |
|:--:               |--         |
|       4500        |[0] POS1   |
|       2500        |[1] CENTER |
|       500         |[2] POS2   |
\n
So for example: \n
<b>Dual contrary direction </b>\n
<table>
<tr><th> ai16InCharMaster   </th><th>[3]</th><th>ai16InCharSlave                </th><th>[3]</th><th>        ai16OutChar            </th><th>[3]</th></tr> 
<tr><td align="right">  20000                   </td><td>[POS1]</td><td align="right">      4000        </td><td>[POS1]</td><td align="right">      1000        </td><td>[POS1]</td></tr>
<tr><td align="right">  12000                   </td><td>[CENTER]</td><td align="right">    12000       </td><td>[CENTER]</td><td align="right">    0           </td><td>[CENTER]</td></tr>
<tr><td align="right">  4000                    </td><td>[POS2]</td><td align="right">      20000       </td><td>[POS2]</td><td align="right">      -1000       </td><td>[POS2]</td></tr>
</table>

\htmlonly <img src="BloInCurDblDualContraryDir.png" width="600" alt="into", align="left"> \endhtmlonly
\n\n\n\n\n\n\n\n\n\n\n\n\n\n
<b>Single direction positive (Third (POS2) parameter set equal to second (CENTER) parameter)</b>\n
<table>
<tr><th> ai16InCharMaster           </th><th>[3]</th><th>ai16InCharSlave                </th><th>[3]</th><th>        ai16OutChar            </th><th>[3]</th></tr> 
<tr><td align="right">  20000                   </td><td>[POS1]</td><td align="right">      20000       </td><td>[POS1]</td><td align="right">      1000        </td><td>[POS1]</td></tr>
<tr><td align="right">  4000                    </td><td>[CENTER]</td><td align="right">    4000        </td><td>[CENTER]</td><td align="right">    0           </td><td>[CENTER]</td></tr>
<tr><td align="right">  4000                    </td><td>[POS2]</td><td align="right">      4000        </td><td>[POS2]</td><td align="right">      0           </td><td>[POS2]</td></tr>
</table>
\htmlonly <img src="BloInCurDblSingleDirPos.png" width="600" alt="into", align="left"> \endhtmlonly
\n\n\n\n\n\n\n\n\n\n\n
<b>Single direction negative positive (First (POS1) parameter set equal to second (CENTER) parameter)</b>\n
\n
<table>
<tr><th> ai16InCharMaster           </th><th>[3]</th><th>ai16InCharSlave                </th><th>[3]</th><th>        ai16OutChar            </th><th>[3]</th></tr> 
<tr><td align="right">  4000                    </td><td>[POS1]</td><td align="right">      4000        </td><td>[POS1]</td><td align="right">      0           </td><td>[POS1]</td></tr>
<tr><td align="right">  4000                    </td><td>[CENTER]</td><td align="right">    4000        </td><td>[CENTER]</td><td align="right">    0           </td><td>[CENTER]</td></tr>
<tr><td align="right">  20000                   </td><td>[POS2]</td><td align="right">      20000       </td><td>[POS2]</td><td align="right">      -1000       </td><td>[POS2]</td></tr>
</table>
\n
\htmlonly <img src="BloInCurDblSingleDirNeg.png" width="600" alt="into", align="left"> \endhtmlonly
\n\n\n\n\n\n\n\n\n\n
\n
As next the deviation limit, dead zone and limits for error detection\n 
like short to GND and short to PWR must be set. Also a limp mode can be\n 
activated. If the limp mode is active the block will deliver a valid output\n 
even if one of the channels indicated an error.

@created    22.10.2013
@changelog  
-   03.12.2014  
    - eInpBeh and eLimpMode functionality is drawn from SigInAnaDbl to this (BloInCurDbl).
-   1.5.0.0 09.02.2017  
    - The MATCH block interface version updated to 1.4.
-   1.5.2.0 15.05.2017  
    - The states of pins are added in the output structure.
-   1.6.0.0 16.05.2017  
    - The MATCH block interface version updated to 1.5.
-   1.7.0.0 26.06.2018  
    - The MATCH block interface version updated to 1.6.
-   1.7.4.0 14.05.2019  
    -   Improved pointer error diagnostics (#26971).
    -   Improved error diagnostic when pin is in protection mode (#19966).
    -   Fixed a bug were the error DM_INCURDBL_PARAM would stay active longer than intended (#32028).
-   1.8.0.0 17.06.2019
    - The MATCH block interface version updated to 1.7.
-   1.9.0.0 25.02.2020 
    - The MATCH block interface version is updated to 1.8.
-   1.10.0.0    26.06.2020
    - The MATCH block interface version is updated to 1.9.
-   1.11.1.0    25.08.2020  
    - The MATCH block interface version is updated to 1.10.
-   1.12.0.0  23.04.2021  
    - The MATCH block interface version is updated to 1.11
*/
//**************************************************************************************************

    #ifndef __ITFBLOINCURDBL__
    #define __ITFBLOINCURDBL__

// INCLUDES ========================================================================================
    #include <ItfCore.h>
    #include <ItfSigInAnaDbl.h>
    #include <ItfBasEleErr.h>
    #include <ItfCoreDb.h>

// DEFINES & ENUMS =================================================================================
    //! Enumerations
     enum
     {
         DM_INCURDBL_SP_MAS,          //!< 0 - Masterpin current is higher than \ref TInCurDblPrp#ai16InLimMaster "ai16InLimMaster [SHT_PWR]"
         DM_INCURDBL_SG_OL_MAS,       //!< 1 - Masterpin current is lower than \ref TInCurDblPrp#ai16InLimMaster "ai16InLimMaster [SHT_GND]"
         DM_INCURDBL_SP_SLA,          //!< 2 - Slavepin current is higher than \ref TInCurDblPrp#ai16InLimMaster "ai16InLimMaster [SHT_PWR]"
         DM_INCURDBL_SG_OL_SLA,       //!< 3 - Slavepin current is lower than \ref TInCurDblPrp#ai16InLimMaster "ai16InLimMaster [SHT_GND]"
         DM_INCURDBL_DEV,             //!< 4 - The scaled values from Masterpin current and Slavepin\n current are further apart than with \ref TInCurDblPrp#u8DevLim "u8DevLim" defined
         DM_INCURDBL_LIMP,            //!< 5 - A single Error occurred at Master- or Slavepin and\n \ref TInCurDblPrp#eLimpMode "eLimpMode" is enabled. In that case the output will\n be calculated with the faultless input
         DM_INCURDBL_PARAM,           //!< 6 - Parameters violate the constrains
         DM_INCURDBL_UNKNOWN,         //!< 7 - Internal Error in case a Match function is faulty
         DM_INCURDBL_CNT_MAX
     };

// STRUCTURES ======================================================================================


     //! Fixed configuration settings
     typedef struct
     {
         // Dummy
         TBoolean    boDummy;                    //!< [BOO] - Stuck detection activation/deactivation
     }TInCurDblFix;



    //! Properties
    /*!
    \htmlonly
    <img src="BloInCurDblGraph.png" width="500" alt="into", align="left">
    \endhtmlonly
    \n\n\n\n\n\n\n\n\n\n\n\n
    */
    /*!
        
<table> <tr><th>         tPrp               </th><th>           Default                     </th><th>        Range                  </th></tr> 
        <tr><td>    \ref TInCurDblPrp#eInpBeh "eInpBeh" </td><td align="centre">    INBEH_ERR_TO_OUT    </td><td  align="left">INPBEH_ERR_TO_OUT<br>
                                                                                                                    INPBEH_FREEZE_INP<br>
                                                                                                                    INPBEH_PAR_TO_INP</td></tr>
        <tr><td>    \ref ePinMas            </td><td align="right"> PIN_NA                  </td><td align="right"> PIN_xxx         </td></tr>
        <tr><td>    \ref ePinSla            </td><td align="right"> PIN_NA                  </td><td align="right"> PIN_xxx         </td></tr>
        <tr><td>    \ref ai16InLimMaster[2] </td><td align="right"> {21000,1000}            </td><td align="right"> 0..32767        </td></tr>
        <tr><td>    \ref ai16InLimMaster[2] </td><td align="right"> {21000,1000}            </td><td align="right"> 0..32767        </td></tr>
        <tr><td>    \ref eLimpMode          </td><td align="right"> LIMP_DISABLE                </td><td align="right"> LIMP_DISABLE<br>
                                                                                                LIMP_ENABLE                         </td></tr>
        <tr><td>    \ref u8DevLim           </td><td align="right"> 1                       </td><td align="right"> 0..100          </td></tr>
        <tr><td>    \ref u8DeadZone         </td><td align="right"> 1                       </td><td align="right"> 0..100          </td></tr>
        <tr><td>    \ref ai16OutChar [3]    </td><td align="right">{1000,0,-1000}   </td><td align="right"> -32768..32767           </td></tr>
</table>
    */
    typedef struct
    {
        /*!
        \htmlonly
         <img src="BloInCurDblInpBeh.png" width="700" alt="into", align="right">
         \endhtmlonly
        <table><tr><th></th><th></th><th></th></tr>
        <tr><td>    eInpBeh         </td><td>
        INPBEH_ERR_TO_OUT<br>INPBEH_FREEZE_INP<br>INPBEH_PAR_TO_INP</td><td>
        A detected error at one of the input pins will set the output in an error state<br>
        A detected error at one of the input pins will set the last valid input value at the faulty input<br>
        A detected error at one of the input pins will set a predefined value at the faulty input</td></tr>
        </table>
        \n\n\n\n\n
        */
        EInpBeh   eInpBeh;                          //!< [ENU] - Input behavior at fault input signal
        EPin      ePinMas;                          //!< [ENU] - Pin (Cfg-Idx) master channel
        EPin      ePinSla;                          //!< [ENU] - Pin (Cfg-Idx) slave channel
        /*!
        |       ai16InLimMaster     |       [2]         | 
        |------------------         | ----------------- | 
        |Short to Power Detection   |       [SHT_PWR]           |
        |Short to Ground Detection  |       [SHT_GND]           |
        */
        TDbLinkI16Var    atDbInLimMaster[2];               //!< [&mu;A]  - Input Master limits for error detection
        /*!
        |ai16InLimSlave             |       [2]         | 
        |------------------         | ----------------- | 
        |Short to Power Detection   |       [SHT_PWR]           |
        |Short to Ground Detection  |       [SHT_GND]           |
        */ 

        TDbLinkI16Var    atDbInLimSlave[2];                //!< [&mu;A]  - Input Slave limits for error detection
        ELimpMode   eLimpMode;                        //!< [DEF] - Limp mode anable/disable
        TUint8      u8DevLim;                         //!< [%]   - Deviation limit
        TDbLink     tDbDevLim;                        //!< [STU] - Deviation limit
        TUint8      u8DeadZone;                       //!< [%]   - Dead zone
        TDbLink     tDbDeadZone;                      //!< [STU] - Dead zone
        TDbLinkI16Var    atDbOutChar[3];                   //!< [CUS] - Output characteristic
    }TInCurDblPrp;

    //! PARAMETER
    typedef struct
    {
        /*!
                See further \ref ItfSigInAnaDbl.h "Double Input Signal"\n
        */
        TDbLinkI16Var   atDbInCharMaster[3];              //!< [&mu;A]  - Input Master characteristic
        /*!
                See further \ref ItfSigInAnaDbl.h "Double Input Signal"\n
        */
        TDbLinkI16Var   atDbInCharSlave[3];               //!< [STU]    - DBL: Input Slave characteristic
        /*!
        In case of an input error at the Masterpin and the option \ref TInCurDblPrp#eInpBeh "eInpBeh" is set\n
        to \c INPBEH_PAR_TO_INP , this value will be used as static input as long as the\n
        occurs at the Masterpin.
        */
        TInt16    i16InpValMasDefault;              //!< [&mu;A]    - Default input value for input behavior INPBEH_VAL_TO_INP
        TDbLink   tDbInpValMasDefault;              //!< [STU]    - DBL: Default input value for input behavior INPBEH_VAL_TO_INP
        /*!
        In case of an input error at the Slavepin and the option \ref TInCurDblPrp#eInpBeh "eInpBeh" is set\n
        to \c INPBEH_PAR_TO_INP , this value will be used as static input as long as the\n
        occurs at the Slavepin.
        */
        TInt16    i16InpValSlaDefault;              //!< [&mu;A]    - Default input value for input behavior INPBEH_VAL_TO_INP
        TDbLink   tDbInpValSlaDefault;              //!< [STU]    - DBL: Default input value for input behavior INPBEH_VAL_TO_INP
    }TInCurDblPar;

    //! BLOCK CONFIGURATION
    typedef struct
    {
        // Common
        TChar      achName[BLO_NAME_STR_LEN];           //!< [STR] - Block Name
        /*!
        \htmlonly
        <img src="BloInCurDblEBloProcTable.png" width="700" alt="into", align="right">
        \endhtmlonly
        <blockquote style="width:40%;">
        <table> <tr><th>eBloProc        </th><th>Description</th></tr>
                <tr><td>\b BLO_RELEASE      </td><td>library block is working (standard functionality)</td></tr>
                <tr><td>\b BLO_LOCKED       </td><td>library block is locked  (not functioning - no error detection, but in RAM available, in+outs frozen)</td></tr>
                <tr><td>\b BLO_FREEZE_INP   </td><td>library block inputs  are frozen \n -> errors are inactive\n -> input value stays constant and produces the output with the block routine</td></tr>
                <tr><td>\b BLO_FREEZE_OUT   </td><td>library block outputs are frozen \n -> errors are active\n -> the output is constant no matter of the input</td></tr>
                <tr><td>\b BLO_NOT_INIT </td><td>library block not initialized</td></tr>
                <tr><td>\b BLO_NA           </td><td>library block is not applicable (no RAM for state variables allocated)</td></tr>
        </table>
        <table> <tr><td>                    </td><td align="center"><b>Input Block</b>                                      </td><td align="center"><b>Output Block</b></td></tr>
                <tr><td>\b BLO_FREEZE_INP   </td><td>
                                                    - the block calculation is turned off\n
                                                    - the output remains constant\n
                                                    - error detection according to the HW pin is still functional</td><td>
                                                                                                                            - input signal is hold constant\n
                                                                                                                            - output is calculated with block routine\n
                                                                                                                            - error detection according to the HW pin is active </td></tr>
                <tr><td>\b BLO_FREEZE_OUT   </td><td>
                                                        - the input value measured by the HW pin is now a constant\n
                                                        - the output gets calculated with the usual block routine\n
                                                        - error detection according to the HW pin is not functional</td><td>
                                                                                                                            - the output at the HW pin is put to a constant value\n
                                                                                                                            - error detection according to the HW pin is deactivated\n\n\n</td></tr>
        </table>
        </blockquote>
        */
        EBloStatus eBloProc;                            //!< [ENU] - Block Process
        // Fixed configuration settings
        TInCurDblFix tFix;                             //!< [STU] - Fixed settings
        
        // Properties
        TInCurDblPrp tPrp;                             //!< [STU] - Properties

        // Parameter
        TInCurDblPar tPar;                             //!< [STU] - Parameter
        
        // Errors
        TUint8     u8ErrCnt;                            //!< [NUM] - Number of defined errors
        TErrCfgFea atErrFea[DM_INCURDBL_CNT_MAX];      //!< [CLA] - Error Configurations
    }TInCurDblCfg;

    //! Input Sub-Block
    typedef struct
    {
        // Common
        /*!
        Enter the block status here to set the block accordingly. For information to the states see \ref TInCurDblCfg#eBloProc "eBloProc".
         */
        EBloStatus   eBehProc;                       //!< [ENU] - Block Process Behavior
        EUpdate      eUpdatePar;                     //!< [ENU] - Parameter update option

        // Error handling
        TBehErrCntl  tBehErrCntl;                    //!< [STU] - Error Control Behavior
    }TInCurDblInp;

    //! Output Sub-Block
    typedef struct
    {
        // Common
        /*!
         To double check the block status read from here. For information to the states see \ref TInCurDblCfg#eBloProc "eBloProc".
         */
        EBloStatus eBehProc;                         //!< [ENU] - Block Process Behavior
        /*!
         An actual status of the controller pin used to read a current as a master channel.
         In the faultless state is PINSTA_OK. Provided in order to define a custom error
         management if it is necessary.
         */
        EPinStatus ePinStaMas;                       //!< [ENU] - Actual status of master pin
        /*!
         An actual status of the controller pin used to read a current as a slave channel.
         In the faultless state is PINSTA_OK. Provided in order to define a custom error
         management if it is necessary.
         */
        EPinStatus ePinStaSla;                       //!< [ENU] - Actual status of slave pin

        // Output
        /*!
        This structure has the scaled output value and its direction. See further \ref TSigDir . 
        */
        TSigDir tOutVal;                            //!< [CUS] - Output value
        /*!
        The RawValue displays the measurement at the input pin. 
        */
        TUint16 u16RawValMaster;                     //!< [&mu;A] - Raw Value
        /*!
        The RawValue displays the measurement at the input pin. 
        */
        TUint16 u16RawValSlave;                      //!< [&mu;A] - Raw Value

        // Error handling
        TBehErrSta tBehErrSta;                       //!< [STU] - Error Behavior Status
    }TInCurDblOut;

    //! Address Sub-Block
    typedef struct
    {
        const TInCurDblCfg* cptCfg;                       //!< [STU] - Configuration Struct
        TVoid*   pvObj;                              //!< [STU] - Pointer to the private Object
        TUint16  u16Stamp;                           //!< Registration stamp
    }TInCurDblAdr;

    //! Block
    typedef struct
    {
        TInCurDblInp   tInp;                              //!< [STU] - Input vector
        TInCurDblOut   tOut;                              //!< [STU] - Output vector
        TInCurDblPrp   tPrp;                              //!< [STU] - Properties
        TInCurDblPar   tPar;                              //!< [STU] - Parameter
        TInCurDblAdr   tXAdr;                             //!< [STU] - Private Address Information
    }TBloInCurDbl;

    // LIBRARY PROTOTYPES ==============================================================================
        //--------------------------------------------------------------------------------------------------
        //! @brief      Create the InCurDbl-Block  (*** for manually block creation without PDT ***)
        //! @param[in]  ptBlo          - [PNT] Pointer to Block
        //! @param[in]  cptCfg         - [PNT] Pointer to the config struct
        //! @retval     R_OKAY         - [ENU] Functions execute without error
        //! @retval     R_NULL_POINTER - [ENU] Null Pointer
        //! @retval     R_MEMORY       - [ENU] Out of memory
        //! @retval     R_NOT_REGISTRY - [ENU] Block not registered
        //--------------------------------------------------------------------------------------------------
        extern ERetVal eBloInCurDblCreate( TBloInCurDbl* ptBlo, const TInCurDblCfg* cptCfg );

        //--------------------------------------------------------------------------------------------------
        //! @brief      Initialization function for InCurDbl-Block Interface  (*** for manually block creation without PDT ***)
        //! @param[in]  ptBlo          - [PNT] Pointer to Block
        //! @retval     R_OKAY         - [ENU] Functions execute without error
        //! @retval     R_NULL_POINTER - [ENU] Null Pointer
        //! @retval     R_ADDRESS      - [ENU] Wrong block address
        //--------------------------------------------------------------------------------------------------
        extern ERetVal eBloInCurDblInit(TBloInCurDbl* ptBlo );

        //--------------------------------------------------------------------------------------------------
        //! @brief      Create and Initialization function for INCURDBL-Block Interface (*** only for block creation by PDT ***)
        //! @param[in]  pvBlo          - [PNT] Pointer to output block structure
        //! @retval     R_OKAY         - [ENU] Functions execute without error
        //! @retval     R_NULL_POINTER - [ENU] Null Pointer
        //! @retval     R_ADDRESS      - [ENU] Wrong block address
        //! @retval     R_NOT_REGISTRY - [ENU] Block not registered
        //--------------------------------------------------------------------------------------------------
        extern ERetVal eBloInCurDblCreateInitRegistry( TVoid *pvBlo );

        //--------------------------------------------------------------------------------------------------
        //! @brief      Block INCURDBL Version information
        //! @retval     *cptVer - Pointer of Versions information
        //--------------------------------------------------------------------------------------------------
        extern const TVerChapCom *cptBloInCurDblVersionsInfo( TVoid );

        //--------------------------------------------------------------------------------------------------
        //! @brief      Block INCURDBL Version check
        //! @retval     TRUE   - is correct
        //! @retval     FALSE  - is incorrect
        //--------------------------------------------------------------------------------------------------
        extern TBoolean boBloInCurDblVersionCheck( TVoid );

        //--------------------------------------------------------------------------------------------------
        //! @brief      InCurDbl Block Function
        //! @param[in]  ptBlo          - [PNT] Pointer to Block
        //! @retval     R_OKAY         - [ENU] Functions execute without error
        //! @retval     R_ADDRESS      - [ENU] Wrong block address
        //! @retval     R_NULL_POINTER - [ENU] Null Pointer
        //! @retval     R_ADDRESS      - [ENU] Wrong block address
        //--------------------------------------------------------------------------------------------------
        extern ERetVal eBloInCurDbl( TBloInCurDbl* ptBlo );

        //--------------------------------------------------------------------------------------------------
        //! @brief      Get the Error Status on a specified Bit-Position
        //! @param[in]  ptBlo       - [PNT]   Pointer to Block
        //! @param[in]  u8BitPos    - [Index] Bitnumber 0-7
        //! @param[in]  pboErrStaBit- [Bit] Error State of the specific Bit-Position
        //! @retval     R_OKAY         - Pointer okay
        //! @retval     R_NULL_POINTER - Null Pointer
        //! @retval     R_ADDRESS      - wrong block address
        //! @retval     R_NOT_REGISTRY - block not registered
        //! @created    30.09.2014          HYDAC/ODU  (review EWU)
        //--------------------------------------------------------------------------------------------------
        extern ERetVal eBloCurDblGetErrStaBit( TBloInCurDbl* ptBlo, TUint8 u8BitPos, TBoolean* pboErrStaBit);

        //-----------------!!!Do not use this function, use eBloInCurDblGetErrStaBit instead!!!------------
        //! @brief      Get the InCurDbl Status on a specified Bit-Position
        //! @param[in]  ptBlo     - [PNT] Pointer to Block
        //! @param[in]  u8BitPos  - [IDX] Bitnumber 0-7
        //! @retval     OKAY      - [BIT] Error State of the specific Bit-Position
        //! @retval     ERROR     - If wrong ptBlo-Addr, return value is '0'
        //-----------------!!!Do not use this function, use eBloInCurDblGetErrStaBit instead!!!------------
        extern TBoolean boBloInCurDblGetErrStaBit( TBloInCurDbl* ptBlo, TUint8 u8BitPos );

        //--------------------------------------------------------------------------------------------------
        //! @brief      Get the sum Error Status Information
        //! @param[in]  ptBlo       - [PNT]   Pointer to Block
        //! @param[in]  pu16ErrStaAll- [PNT]   Pointer to Block
        //! @retval     R_OKAY         - Pointer okay
        //! @retval     R_NULL_POINTER - Null Pointer
        //! @retval     R_ADDRESS      - wrong block address
        //! @retval     R_NOT_REGISTRY - block not registered
        //! @created    30.09.2014          HYDAC/ODU  (review EWU)
        //--------------------------------------------------------------------------------------------------
        extern ERetVal eBloInCurDblGetErrStaAll( TBloInCurDbl* ptBlo,TUint16* pu16ErrStaAll );

        //-----------------!!!Do not use this function, use eBloInCurDblGetErrStaAll instead!!!------------
        //! @brief      Get the sum InCurDbl Status Information
        //! @param[in]  ptBlo     - [PNT] Pointer to Block
        //! @retval     OKAY      - [BIT] Error State Bit Coded
        //! @retval     ERROR     - If wrong ptBlo-Addr, return value is '0'
        //-----------------!!!Do not use this function, use eBloInCurDblGetErrStaAll instead!!!------------
        extern TUint16 u16BloInCurDblGetErrStaAll( TBloInCurDbl* ptBlo );

        //--------------------------------------------------------------------------------------------------
        //! @brief      Get the Error Event on a specified Bit-Position
        //! @param[in]  ptBlo        - [PNT]   Pointer to Block
        //! @param[in]  boDetect     - [DEF]   TRUE = the Detect-Bit-Event, FALSE = the Delete-Bit-Event
        //! @param[in]  u8BitPos     - [Index] Bitnumber 0-7
        //! @param[in]  pboErrEveBit  - [BIT] Error State of the specific Bit-Position
        //! @retval     R_OKAY         - Pointer okay
        //! @retval     R_NULL_POINTER - Null Pointer
        //! @retval     R_ADDRESS      - wrong block address
        //! @retval     R_NOT_REGISTRY - block not registered
        //! @created    30.09.2014          HYDAC/ODU  (review EWU)
        //--------------------------------------------------------------------------------------------------
        extern ERetVal eBloInCurDblGetErrEveBit( TBloInCurDbl* ptBlo, TBoolean boDetect, TUint8 u8BitPos, TBoolean* pboErrEveBit);

        //-----------------!!!Do not use this function, use eBloInCurDblGetErrEveBit instead!!!------------
        //! @brief      Get the InCurDbl Event on a specified Bit-Position
        //! @param[in]  ptBlo     - [PNT] Pointer to Block
        //! @param[in]  boDetect  - [BOO] TRUE = Detect-Bit-Event, FALSE = Delete-Bit-Event
        //! @param[in]  u8BitPos  - [IDX] Bitnumber 0-7
        //! @retval     OKAY      - [BIT] Error State of the specific Bit-Position
        //! @retval     ERROR     - If wrong ptBlo-Addr, return value is '0'
        //-----------------!!!Do not use this function, use eBloInCurDblGetErrEveBit instead!!!------------
        extern TBoolean boBloInCurDblGetErrEveBit( TBloInCurDbl* ptBlo, TBoolean boDetect, TUint8 u8BitPos );

        //--------------------------------------------------------------------------------------------------
        //! @brief      Get the Error Event on a specified Bit-Position
        //! @param[in]  ptBlo       - [PNT] Pointer to Block
        //! @param[in]  boDetect    - [DEF] TRUE = the Detect-Bit-Event, FALSE = the Delete-Bit-Event
        //! @param[in]  pu16ErrEveAll- [BIT]    Error State Bit Coded
        //! @retval     R_OKAY         - Pointer okay
        //! @retval     R_NULL_POINTER - Null Pointer
        //! @retval     R_ADDRESS      - wrong block address
        //! @retval     R_NOT_REGISTRY - block not registered
        //! @created    30.09.2014          HYDAC/ODU  (review EWU)
        //--------------------------------------------------------------------------------------------------
        extern ERetVal eBloInCurDblGetErrEveAll( TBloInCurDbl* ptBlo, TBoolean boDetect, TUint16* pu16ErrEveAll );

        //----------------!!!Do not use this function, use u16BloInCurDblGetErrEveAll instead!!!-----------
        //! @brief      Get the InCurDbl Event on a specified Bit-Position
        //! @param[in]  ptBlo     - [PNT] Pointer to Block
        //! @param[in]  boDetect  - [BOO] TRUE = Detect-Bit-Event, FALSE = Delete-Bit-Event
        //! @retval     OKAY      - [BIT] Error State Bit Coded
        //! @retval     ERROR     - If wrong ptBlo-Addr, return value is '0'
        //----------------!!!Do not use this function, use u16BloInCurDblGetErrEveAll instead!!!-----------
        extern TUint16 u16BloInCurDblGetErrEveAll( TBloInCurDbl* ptBlo, TBoolean boDetect );

    #endif
