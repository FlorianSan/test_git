//**************************************************************************************************
/*!
@file       ItfCorePin.h
@brief      PIN Interface
@date       26.10.2020
@author     HYDAC/NJP
*/
//**************************************************************************************************

#ifndef __ITFCOREPIN__
    #define __ITFCOREPIN__

    #include <autoconfig.h>

    #ifdef COMPILER_SWITCH_FAM_TTC5X
        #include <ItfCorePinTtc5x.h>
    #endif

    #ifdef COMPILER_SWITCH_FAM_TTC7X
        #include <ItfCorePinTtc7x.h>
    #endif

    #ifdef COMPILER_SWITCH_FAM_TTC3X
        #include <ItfCorePinTtc3x.h>
    #endif

    #ifdef COMPILER_SWITCH_FAM_TTC5XX
        #include <ItfCorePinTtc5xx.h>
    #endif

    #ifdef COMPILER_SWITCH_FAM_TTC2XXX
        #include <ItfCorePinTtc2xxx.h>
    #endif

    #ifdef COMPILER_SWITCH_FAM_HYOBE
        #include <ItfCorePinHyObe.h>
    #endif

    #ifdef COMPILER_SWITCH_FAM_HYICU
        #include <ItfCorePinHyIcu.h>
    #endif

    #ifdef COMPILER_SWITCH_FAM_HYMEB
        #include <ItfCorePinHyMeb.h>
    #endif

#endif
