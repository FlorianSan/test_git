//*****i*********************************************************************************************
/*!
@file       ItfBoardPinApi.h
@brief      Board Interface
@date       26.10.2020
@author     HYDAC/NJP
*/
//**************************************************************************************************

#ifndef INCLUDE_CORE_BOARD_ITFBOARDPINAPI_H_
#define INCLUDE_CORE_BOARD_ITFBOARDPINAPI_H_

    #include <autoconfig.h>

    #ifdef COMPILER_SWITCH_OEM_TTC

    #ifdef COMPILER_SWITCH_FAM_TTC2XXX
       #include <ItfBoardPinApiTtc2xxx.h>
    #else
      #include <ItfBoardPinApiTtc.h>        // TTControl Hydac International
    #endif

    #endif

    #ifdef COMPILER_SWITCH_OEM_HY
      #ifdef COMPILER_SWITCH_FAM_HYMEB
        #include <ItfBoardPinApiHySoft.h>   // Hydac Software
      #else
        #include <ItfBoardPinApiHyElec.h>   // Hydac Electronik
      #endif
    #endif

    // ==============================================================================================================
    // !! The use of these functions in the application leads immediately to the exclusion of the HYDAC liability. !!
    // !! The use of the entire application with all the components used a call at your own risk.                  !!
    // !! IF YOU USE THE FUNCTIONS IN THIS H-FILE, THE HYDAC PRODUCT LIABILITY WILL BE EXTINGUISHED                !!
    // ==============================================================================================================

    #if defined(COMPILER_SWITCH_CORE_BUILD) || defined(COMPILER_SWITCH_PTC_BUILD)

      //--------------------------------------------------------------------------------------------------
      //! @brief     Give pin input type
      //! @note      THE USE OF THESE FUNCTIONS WILL VOID THE PRODUCT LIABILITY
      //! @param[in] u8PinIdx
      //! @retval    Input type
      //! @retval    PININ_NA   if the pin index is out of range
      //--------------------------------------------------------------------------------------------------
      extern EEcuPinInTyp eCorePinInTyp( TUint8 u8PinIdx );

      //--------------------------------------------------------------------------------------------------
      //! @brief     Give pin output type
      //! @note      THE USE OF THESE FUNCTIONS WILL VOID THE PRODUCT LIABILITY
      //! @param[in] u8PinIdx
      //! @retval    Output type
      //! @retval    PINOUT_NA   if the pin index is out of range
      //--------------------------------------------------------------------------------------------------
      extern EEcuPinOutTyp eCorePinOutTyp( TUint8 u8PinIdx );

      //--------------------------------------------------------------------------------------------------
      //! @brief     Give the last system pin values
      //! @note      THE USE OF THESE FUNCTIONS WILL VOID THE PRODUCT LIABILITY
      //! @return    The Pointer to the System pins
      //--------------------------------------------------------------------------------------------------
      extern const TSysPinLast *cptCoreSysPinLast( TVoid );

      //--------------------------------------------------------------------------------------------------
      //! @brief     Give the last pin layer struct
      //! @note      THE USE OF THESE FUNCTIONS WILL VOID THE PRODUCT LIABILITY
      //! @param[in] u8PinIdx
      //! @return    The Pointer to the pins struct
      //-------------------------------------------------------------------------------------------------
      extern const UPinLast *cptCorePinLast( TUint8 u8PinIdx );



      #ifdef COMPILER_SWITCH_FORCE_FEATURE

        //--------------------------------------------------------------------------------------------------
        //! @brief     Enable Forcing
        //! @note      THE USE OF THESE FUNCTIONS WILL VOID THE PRODUCT LIABILITY
        //! @return    TRUE/FALSE
        //--------------------------------------------------------------------------------------------------
        extern TBoolean boCoreForceEnable ( TVoid );

        //--------------------------------------------------------------------------------------------------
        //! @brief     Force Stop - Output 'off'
        //! @note      THE USE OF THESE FUNCTIONS WILL VOID THE PRODUCT LIABILITY
        //! @return    TRUE/FALSE
        //--------------------------------------------------------------------------------------------------
        extern TBoolean boCoreForceStopOut( TVoid );

        //--------------------------------------------------------------------------------------------------
        //! @brief     Clean Force Record
        //! @note      THE USE OF THESE FUNCTIONS WILL VOID THE PRODUCT LIABILITY
        //! @param[in] ptForce
        //--------------------------------------------------------------------------------------------------
        extern TVoid vCoreForceRecClean( TForce *ptForce );

        //--------------------------------------------------------------------------------------------------
        //! @brief     Give pin forcing struct
        //! @note      THE USE OF THESE FUNCTIONS WILL VOID THE PRODUCT LIABILITY
        //! @param[in] u8PinIdx
        //! @return    The Pointer to the struct
        //--------------------------------------------------------------------------------------------------
        extern TForce *ptCorePinForce( TUint8 u8PinIdx );

        //--------------------------------------------------------------------------------------------------
        //! @brief     Forcing pin master control action
        //! @note      THE USE OF THESE FUNCTIONS WILL VOID THE PRODUCT LIABILITY
        //! @param[in] TRUE=Active, FALSE=Inactive
        //--------------------------------------------------------------------------------------------------
        extern TVoid vCoreForcePinMasterCtrl( TBoolean boOn );

        #endif

    #endif


#endif
