//==================================================================================================
//! @file LimitationControl.c
//! @brief Control limitation of movement
//! @see Target for ...
//! @section app
//! @subsection
//! @author Christian Klein (CK)
//! @created 11.10.2018 HYDAC/CK
//! @history: #- CK 11.10.2018 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "LimitationControl.h"

//-----------------------------------------------------------------------------------------------------
//! @brief Control limitation
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 11.10.2018 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vLimitationControl(TVoid)
{
	vArrowArmLimitationControl();
	vDeltaArmLimitationControl();
	vTelescopeArmLimitationControl();
	vSafetyTelescopeLimitation();
	vInclinaisonBasketLimitationControl();
	vPendularLimitationControl();
	vRotationBasketLimitationControl();
	vRotationTurretLimitationControl();
}
