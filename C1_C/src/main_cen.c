//**************************************************************************************************
/*!
@file       main_cen.c
@brief      MATCH MAIN
@see        open
@created    25.04.2018  HYDAC/NJP
*/
//**************************************************************************************************
#include <stdlib.h>
#include <stdio.h>
#include <ItfCore.h>
#include <ItfAppCode.h>

TTimStatistic g_tStatistic = { FALSE, 0, 0, U32_MAX, U32_MIN, MAIN_SAFETY_PRE_START, 0 };
EMainPhase    g_ePhase     = MAIN_CORE_DEBUG;

TInt32 main( TVoid )
{
    vCoreTestStart( vAppTestStart );

    vCoreLibTabAdding( g_atObjTab, g_u16ObjTabMax );

    vCoreInitEcuStatisticTim( u16CoreGetCycleTime(), 100, &g_tStatistic );

    vCoreFixInit( vAppFixInit );

    while( 1 )
    {
        vCoreMain(  &g_ePhase,         // [show] Phase information
                                       //          -> show the current core phase
                    vLibRegistry,      // [ones] Registry of blocks/signal/protocol types
                                       //          -> auto code connection
                    vAppAutoLibTable,  // [ones] Project announcement of the objects and blocks

                    vAppSafetyInit,    // [cyc]  Application "Safety Init"
                                       //          -> factory setting available and safety pin setting functions can be used
                    eAppPreStart,      // [cyc]  Application "Pre-Start"
                                       //          -> safety and fixed pin´s, BLO_ADC/DAC (only with fixed pins) available
                                       //             - need 3 task cycle to be here
                    eAppStartUp,       // [cyc]  Application "Start Up" phase
                                       //          -> load the Db-Opt-List's, the fault stack and system sector
                                       //             option pin's, VER, BLO-ERR/EXC/CBUS/CBUF/CSND/CRCV available
                                       //             - need ca. 120 task cycle to be here
                    vSetAppVersion,    // [ones] Set application software version information
                                       //          -> only for setting the application version numbers
                                       //             - need ca. 121 task cycle to be here
                    vGetVersionInfo,   // [ones] Output of version information
                                       //          -> to send an custom made application version report to the services tool
                                       //             - need ca. 121 task cycle to be here
                    eAppInit,          // [cyc]  Application "Initialization" phase
                                       //          -> load all DB-List's, all other block including the block pins's are available
                                       //             - need ca. 180 task cycle to be here
                    vAppRun,           // [cyc]  Application "Run" phase
                                       //          -> Machine run part
                                       //             - need ca. 181 task cycle to be here
                    eAppShutDown );    // [cyc]  Application "Shut Down" phase
                                       //          -> after K15 switch to off (denouncing  time -  power off detection time)
                                       //             save the DB-Mem-List's, the fault stack and the system sector
                                       //             - need ca. 100-x task cycle from the K15=OFF-Switch to exit

		 #ifdef COMPILER_SWITCH_MAIN_CORE_EMC_BREAK
         if( g_ePhase == MAIN_CORE_EMC_BREAK )
         {// Emergency break
            return 1;
         }
		#endif
         vCoreTestEnd( vAppTestEnd );
    }

    // *** Unreachable code at token  ***
    // return 0;
}
