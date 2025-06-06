//**************************************************************************************************
//! @crc        16722294
//! @file       Cfg_Ver.c
//! @brief      Generate by: HYDAC Controller Project - Code Builder Tool Chain
//! @ecu        TTC580
//! @dll        1.2.7 (Build: 080)
//! @dll itf    1.7.0
//! @build      2023-04-03 16:35:10
//! @Pattern    1.1.0
//! @Subpattern ----
//! @Match      07-04-01-04
//! @PDT        2.11.72.172
//! @PdtProjVer 0.0.0
//! @created    2025-04-18 16:40:50   HYDAC/HCP-CC
//**************************************************************************************************

// INCLUDES ========================================================================================
#include <ItfCoreVer.h>

// GLOBAL VARIABLES ================================================================================
//Sofware Module Name: AppPrivate
TVerInf gVer_tInf = 
{
    // Enviroment Information ---------------------------------------------------------------------
    "06-06",                                                //achHistory             - Project History Version  

    // Machine Access Protection ------------------------------------------------------------------
    "HY1234HY",                                             //achVehicleCode         - Vehicle Code 
    
    // Vehicle Identification --------------------------------------------------------------------- 
    "Neotec skyrailer",                                     //achManufacturer        - Vehicle Manufacturer Name / Fahrzeughersteller                     
    "",                                                     //achManuLocation        - Vehicle Manufacturing Location / Fahrzeug Produktionsstandort      
    "",                                                     //achBrand               - Brand Name / Markenname                                            
    "Nacelle",                                              //achType                - Vehicle Type / Fahrzeugtyp (z.B. 416-01)                           
    "",                                                     //achVehPartNo           - Vehicle Part Number / SAP Materialnummer Fahrzeuggrupp (SAP)       
    "Skyrailer",                                            //achVehSalesName        - Vehicle Sales Name / Verkaufsbezeichnung (z.B: Zero Emission 803)  
    "0",                                                    //achVehSerNo            - Vehicle Serial Number / Fahrgestellnummer                          
    "18.04.2025",                                           //achVehProdDate         - Production Date / Produktionsdatum                                 
    "16:40:32",                                             //achVehProdTime         - Production Time / Produktionszeit                                  
    "20 km/h",                                              //achVehMaxSpeed         - Vehicle Maximum Speed / Maximale Fahrgeschwindigkeit               
    "",                                                     //achVehProdCode         - Complete Production Code / Vollstaendiger Produktionskode
    "Nacelle",                                              //achVehProdType         - SAP Product Type Customer / SAP Produkttyp Kunde    
    
    // Application Software ----------------------------------------------------------------------
    {  
        0,                                                  //u8Major                - Major Software Version Number
        0,                                                  //u8Minor                - Minor Software Version Number
        0,                                                  //u8Index                - Software Version Index
        0,                                                  //u16DevStp              - Software Development Step    
        "-",                                                //achDate[10+1]          - Creation Date - eg: '01.01.2011'
        "-"                                                 //achTime[8+1]           - Creation Time - eg: '00:00:00'
    }, 
    "-",                                                    // achAppHydSwNo         - Hydac Application Software Part Numbers / Hydac Applikations-Software Materialnummern
    {
        "-",                                                // achAppSwPartNo Customer SW Part Number/ Kunden Software Materialnummer             
        "-",                                                // achAppSwPartNo Customer SW Version Number/ Kunden Software Versionsnummer          
        "-",                                                // achAppSwPartNo Customer Parameter Part Number/ Kunden Parameter Materialnummer     
        "-"                                                 // achAppSwPartNo Customer Parameter Version Number/ Kunden Parameter Versionsnummer  
    },
    // SAP Information -----------------------------------------------------------------------------
    0,                                                      //u32SapArtCodeApp 
    0,                                                      //u32SapArtCodeCore 
   
   // Detail Software Informations ----------------------------------------------------------------
    {   // FrameSoftware Version Information
        0,                                                  //u8Major                - Major Software Version Number
        0,                                                  //u8Minor                - Minor Software Version Number
        0,                                                  //u8Index                - Software Version Index
        0,                                                  //u8DbParIdx             - Database Parameter Index
        0,                                                  //u8FlaParIdx            - Factory Flash Data Index
        1245,                                               //u16DevStp              - Software Development Step    
        "18.04.2025",                                       //achDate[10+1]          - Creation Date - eg: '01.01.2011'
        "16:40:32"                                          //achTime[8+1]           - Creation Time - eg: '00:00:00'
    },
    {   // Software Hcp-Bios Version Information
        0xFF,                                               //u8Major                - Major Software Version Number
        0xFF,                                               //u8Minor                - Minor Software Version Number
        0xFF,                                               //u8Index                - Software Version Index
        0xFFFF,                                             //u16DevStp              - Software Development Step    
        "-",                                                //achDate[10+1]          - Creation Date - eg: '01.01.2011'
        "-"                                                 //achTime[8+1]           - Creation Time - eg: '00:00:00'
    },
    {   // Software Ecu-Bios/Cds-Rts Version Information 
        0xFF,                                               // u8Major               -  Major Software Version Number
        0xFF,                                               // u8Minor               - Minor Software Version Number
        0xFFFF                                              // u16DevStp             - Software Development Step  
    },
    {   // Software IO-Driver Version Information
        0xFF,                                               // u8Major               - Major Software Version Number
        0xFF,                                               // u8Minor               - Minor Software Version Number
        0xFFFF                                              // u16DevStp             - Software Development Step  
    },
    {  // Software MinmodulVersion Information
        0xFF,                                               // u8Major               - Major Software Version Number
        0xFF,                                               // u8Minor               - Minor Software Version Number
        0xFFFF                                              // u16DevStp             - Software Development Step  
    },
    {  // Compiler Version Information
        "-",                                                //achSupplier[32+1]      - Compiler Supplier
        "-",                                                //achVersion[32+1]       - Compiler Version
        0xFFFF                                              //u16BuildProcNo         - Build Process Number
    },
     // Controller Information  --------------------------------------------------------------------
    "-",                                                    //achEcuType[32+1]       - Controller Type
    "-",                                                    //achEcuVerNo[32+1]      - Controller Version Number 'xx.xx'
    "-",                                                    //achEcuSerNo[32+1]      - Controller Serial Number  'xxxxxxxxxxx'
    
    "",                                                     // achEcuPartNo           Controller Part Number / Materialnummer Steuergeraet (Hydac)
    "HY-TTC 580 - 00 ",                                     // Part Number for Assembly Controller (incl. Application SW) / Materialnummer Baugruppe Steuergeraet (Kunde) 
    "",                                                     // achEcuSapPartNo        Controller Customer Part Number / Kunden-Materialnummer Steuergeraet (SAP)
    "",                                                     // achEcuSapVerNo         Controller Customer Version Number / Kunden-Versionsnummer Steuergeraet (SAP)
    
    {   // Watchdog Hardware Version Information
        0xFF,                                               // u8Major               - Major Software Version Number
        0xFF,                                               // u8Minor               - Minor Software Version Number
        0xFFFF                                              // u16DevStp             - Software Development Step  
    },
    {   // Flash stamp
        0,                                                  //u16Year                - Major Software Version Number
        0,                                                  //u8Month                - Minor Software Version Number
        0,                                                  //u8Day                  - Software Version Index
        0,                                                  //u8Hour                 - Software Development Step    
        0,                                                  //u8Minute               - Software Development Step    
    },
    // Conrtoller HCP-Environment Information ------------------------------------------------------
    {   // Nvmem Storage
        0,                                                  //u32EcuLastRunTime      - Last run time
        0,                                                  //u32EcuOnSwitch         - Count of On/Off switch Cycles
        0,                                                  //u32NvmDbStoreCnt       - Count of nvmem store processe
        0,                                                  //u32NvmMemStoreCnt      - Count of nvmem mem field store cycles counts
        0,                                                  //u32NvmErrStoreCnt      - Count of nvmem errors store cycle counts
        0,                                                  //u8RestartReaInfo       - Reason for the last restart info
        0,                                                  //u8RestartReaDetail     - Reason for the last restart info in detail
    },
    // Hcp-Code-Creater Version + Enviroment -------------------------------------------------------
    "C-Code",                                               //achEnvVer[8]           - Enviroment OS
    "1-2-7",                                                //achExeVer[8]           - Executable Tool Version      
    "1-1-0",                                                //achPatVer[8]           - Pattern Version  
    
    387127245U,                                             //u32ErrHstFileCrc       - HST Error Definition File Checknumber
    3142656940U,                                            //u32IomHstFileCrc       - HST Pin Definition File Checknumber
    
    // Auto Generate Code - FRAME_CRC_STOP
    0,                                                      //u32AutoCodePreCrc //!< Auto Code Crc
    0,                                                      //u32AutCodePostCrc //!< Auto Code Crc
    
    // Check Core-Frame
    {
        7,                                                  //u8Major                - Major Software Version Number
        4,                                                  //u8Minor                - Minor Software Version Number
        VER_DIGIT_DONTCARE_U8,                              //u8Index                - Software Version Index
        VER_DIGIT_DONTCARE_U16                              //u16DevStp              - Software Development Step
    }
};
