//**************************************************************************************************
//! @crc        3674308320
//! @file       Cfg_LibRegistry.c
//! @brief      Generate by: HYDAC Controller Project - Code Builder Tool Chain
//! @ecu        TTC580
//! @dll        1.2.7 (Build: 080)
//! @dll itf    1.7.0
//! @build      2023-04-03 16:35:10
//! @Match      07-04-01-04
//! @PDT        2.11.72.172
//! @PdtProjVer 0.0.0
//! @created    2025-04-18 16:40:50   HYDAC/HCP-CC
//**************************************************************************************************

// INCLUDES ========================================================================================
#include <ItfCoreLib.h>
#include <ItfCoreAllObj.h>

// GLOBAL VARIABLES ================================================================================
TUint16 g_u16EnuStdTypMax = (TUint16)STD_LIB_MAX;
TUint16 g_u16EnuBloTypMax = (TUint16)BLO_LIB_MAX;
TUint16 g_u16EnuSigTypMax = (TUint16)SIG_LIB_MAX;

extern TPtcDmx gPtc_tDmxPtcDmxCfg;
extern TPtcMst gPtc_tMstPtcMstCfg;

//--------------------------------------------------------------------------------------------------
//! @brief      Lib Registry Ptd
//--------------------------------------------------------------------------------------------------
TVoid vLibRegistry( TVoid )
{
    // block's
    eCoreBloRegistry("BLO_PRO", BLO_PRO, eBloProCreateInitRegistry, cptBloProVersionsInfo, boBloProVersionCheck );
    eCoreBloRegistry("BLO_DIG", BLO_DIG, eBloDigCreateInitRegistry, cptBloDigVersionsInfo, boBloDigVersionCheck );

    // customer block's
    eCoreBloRegistry("BLO_INRESIST", BLO_INRESIST, eBloInResistCreateInitRegistry, cptBloInResistVersionsInfo, boBloInResistVersionCheck );
    eCoreBloRegistry("BLO_SWINO", BLO_SWINO, eBloSwiNoCreateInitRegistry, cptBloSwiNoVersionsInfo, boBloSwiNoVersionCheck );
    eCoreBloRegistry("BLO_INCURDBL", BLO_INCURDBL, eBloInCurDblCreateInitRegistry, cptBloInCurDblVersionsInfo, boBloInCurDblVersionCheck );
    eCoreBloRegistry("BLO_INCUR", BLO_INCUR, eBloInCurCreateInitRegistry, cptBloInCurVersionsInfo, boBloInCurVersionCheck );
    eCoreBloRegistry("BLO_OUTVOLTPRO", BLO_OUTVOLTPRO, eBloOutVoltProCreateInitRegistry, cptBloOutVoltProVersionsInfo, boBloOutVoltProVersionCheck );

    // customer signal's
    eCoreSigRegistry("SIG_DBO", SIG_DBO, cptSigDboVersionsInfo, boSigDboVersionCheck );
    eCoreSigRegistry("SIG_INANADBL", SIG_INANADBL, cptSigInAnaDblVersionsInfo, boSigInAnaDblVersionCheck );
    eCoreSigRegistry("SIG_LUT", SIG_LUT, cptSigLutVersionsInfo, boSigLutVersionCheck );
    eCoreSigRegistry("SIG_PID", SIG_PID, cptSigPidVersionsInfo, boSigPidVersionCheck );
    eCoreSigRegistry("SIG_RAMP", SIG_RAMP, cptSigRampVersionsInfo, boSigRampVersionCheck );
    eCoreSigRegistry("SIG_SWIDBL", SIG_SWIDBL, cptSigSwiDblVersionsInfo, boSigSwiDblVersionCheck );
    eCoreSigRegistry("SIG_TRIGGER", SIG_TRIGGER, cptSigTriggerVersionsInfo, boSigTriggerVersionCheck );

    // customer protocol's
    eCorePtcRegistry("PTC_DMX", cptPtcDmxVersionsInfo, boPtcDmxVersionCheck, &gPtc_tDmxPtcDmxCfg, vPtcDmxAppCall, boPtcDmxRcvHwBuf, boPtcDmxSndHwBuf );
    eCorePtcRegistry("PTC_MST", cptPtcMstVersionsInfo, boPtcMstVersionCheck, &gPtc_tMstPtcMstCfg, vPtcMstAppCall, boPtcMstRcvHwBuf, boPtcMstSndHwBuf );

}
