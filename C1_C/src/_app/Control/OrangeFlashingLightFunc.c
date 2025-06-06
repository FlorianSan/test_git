//==================================================================================================
//! @file OrangeFlashingLightFunc.c
//! @brief Control motor Function
//! @see Target for ...
//! @section app
//! @subsection
//! @author Christian Klein (CK)
//! @created 13.10.2018 HYDAC/CK
//! @history: #- CK 13.10.2018 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "OrangeFlashingLightFunc.h"

//-----------------------------------------------------------------------------------------------------
//! @brief Control  orange flashing light
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 28.12.2018 HYDAC/CK
//!
//! @change  28.05.2019 add manual command and radio post
//!
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vOrangeFlashingLightControl(TVoid)
{
TBoolean RisingbogKeyFlashLightON = FALSE;
static TBoolean PreviousbogKeyFlashLightON = FALSE;
TBoolean RisingEssieuxEnHautPremiereFois = FALSE;
static TBoolean PreviousEssieuxEnHautPremiereFois = FALSE;
static TBoolean boEssieuxEnHaut = FALSE;
static TBoolean boEssieuxEnHautPremiereFois = FALSE;
static TBoolean boFeuxEclatsModeA = FALSE;
static TBoolean boFeuxEclatsModeB = FALSE;
static TBoolean boFeuxEclatsModeC = FALSE;
static TBoolean boFeuxEclatsActifs = FALSE;

	/*Détection des essieux en haut*/
	if(gDb_tRamEcuC1RcvFromC0.boUpFixeAxlePos == TRUE && gDb_tRamEcuC1RcvFromC0.boUpOsciAxlePos == TRUE)
		boEssieuxEnHaut = TRUE;
	else
		boEssieuxEnHaut = FALSE;

	/*Mémorisation de la premiere fois*/
	if(boEssieuxEnHaut == TRUE)
		boEssieuxEnHautPremiereFois = TRUE;

	/* Rising EssieuxEnHautPremiereFois*/
	RisingEssieuxEnHautPremiereFois = FALSE;
	if (boEssieuxEnHautPremiereFois == TRUE && PreviousEssieuxEnHautPremiereFois == FALSE)
		RisingEssieuxEnHautPremiereFois = TRUE;
	/* Memorize the previous value*/
	PreviousEssieuxEnHautPremiereFois = boEssieuxEnHautPremiereFois;

	/* Rising bogKeyFlashLightON*/
	RisingbogKeyFlashLightON = FALSE;
	if (gDb_tRamEvision7C1.bogKeyFlashLightON == TRUE && PreviousbogKeyFlashLightON == FALSE)
		RisingbogKeyFlashLightON = TRUE;
	/* Memorize the previous value*/
	PreviousbogKeyFlashLightON = gDb_tRamEvision7C1.bogKeyFlashLightON;

	/*Mode fonctionnement A
	Mode ferroviaire désactivé
	Mode route ON/OFF*/
	if(gDb_tNvOptionsC1.boFlashingLightOnRail == FALSE
	&& gDb_tNvOptionsC1.boFlasingLightAlwaysOnAUS == FALSE)
		boFeuxEclatsModeA = TRUE;
	else
		boFeuxEclatsModeA = FALSE;

	/*Mode fonctionnement B
	Mode ferroviaire ON/OFF
	Mode route ON/OFF*/
	if(gDb_tNvOptionsC1.boFlashingLightOnRail == TRUE
	&& gDb_tNvOptionsC1.boFlasingLightAlwaysOnAUS == FALSE)
		boFeuxEclatsModeB = TRUE;
	else
		boFeuxEclatsModeB = FALSE;

	/*Mode fonctionnement C
	Mode ferroviaire ON
	Mode route ON*/
	if(gDb_tNvOptionsC1.boFlashingLightOnRail == FALSE
	&& gDb_tNvOptionsC1.boFlasingLightAlwaysOnAUS == TRUE)
		boFeuxEclatsModeC = TRUE;
	else
		boFeuxEclatsModeC = FALSE;

	/*Activation feux à éclats
	 Mise à un*/
	/*Cas mode A*/
	if((boFeuxEclatsModeA == TRUE && boEssieuxEnHaut == TRUE)
	/*Cas mode B*/
	|| ((boFeuxEclatsModeB == TRUE && RisingbogKeyFlashLightON == TRUE && boFeuxEclatsActifs == FALSE)
		|| (boFeuxEclatsModeB == TRUE && RisingEssieuxEnHautPremiereFois == TRUE))
	/*Cas mode C*/
	|| boFeuxEclatsModeC == TRUE)
	{
		boFeuxEclatsActifs = TRUE;
	}
	/*Mise à zéro*/
	/*Cas mode A*/
	else if((boFeuxEclatsModeA == TRUE && boEssieuxEnHaut == FALSE && bo_ARU_C1_Actived == FALSE)
	/*Cas mode B*/
	|| (boFeuxEclatsModeB == TRUE && RisingbogKeyFlashLightON == TRUE && boFeuxEclatsActifs == TRUE))
	{
		boFeuxEclatsActifs = FALSE;
	}

	if(boFeuxEclatsActifs == TRUE
	|| (gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_RADIO && (gDb_tRamEcuC1RcvFromC0.boDownAxleFixeSensor == FALSE || gDb_tRamEcuC1RcvFromC0.boDownAxleOscillantSensor == FALSE)))
		gDb_tRamEcuOutputsC1.boOrangeFlashingLightCommand = TRUE;
	else
		gDb_tRamEcuOutputsC1.boOrangeFlashingLightCommand = FALSE;


//	TBoolean boOptionFlashingAlways = gDb_tNvOptionsC1.boFlashingLightOnRail;
//	static TBoolean boFlashingLightsOn = FALSE;
//	TBoolean RisingbogKeyFlashLightON = FALSE;
//	static TBoolean PreviousbogKeyFlashLightON = FALSE;
//
//	/* Rising bogKeyFlashLightON*/
//	RisingbogKeyFlashLightON = FALSE;
//	if (gDb_tRamEvision7C1.bogKeyFlashLightON == TRUE && PreviousbogKeyFlashLightON == FALSE)
//		RisingbogKeyFlashLightON = TRUE;
//	/* Memorize the previous value*/
//	PreviousbogKeyFlashLightON = gDb_tRamEvision7C1.bogKeyFlashLightON;
//
//	/*boWarningLightsOn*/
//	/*set*/
//	if(RisingbogKeyFlashLightON == TRUE
//	&& boFlashingLightsOn == FALSE
//	&& ( (gDb_tRamEcuC1RcvFromC0.boUpFixeAxlePos == TRUE && gDb_tRamEcuC1RcvFromC0.boUpOsciAxlePos == TRUE) || boOptionFlashingAlways == TRUE))
//		boFlashingLightsOn = TRUE;
//	/*reset*/
//	else if (((RisingbogKeyFlashLightON == TRUE && boFlashingLightsOn == TRUE)
//	|| gDb_tRamEcuC1RcvFromC0.boUpFixeAxlePos == FALSE
//	|| gDb_tRamEcuC1RcvFromC0.boUpOsciAxlePos == FALSE)
//	&& boOptionFlashingAlways == FALSE)
//
//		boFlashingLightsOn = FALSE;
//
//	if((boFlashingLightsOn == TRUE
//	|| gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_RADIO)
//	/*Demande Australienne*/
//	|| gDb_tNvOptionsC1.boFlasingLightAlwaysOnAUS == TRUE)/*Option feu à éclat permanent*/
//		gDb_tRamEcuOutputsC1.boOrangeFlashingLightCommand = TRUE;
//	else
//		gDb_tRamEcuOutputsC1.boOrangeFlashingLightCommand = FALSE;


}
