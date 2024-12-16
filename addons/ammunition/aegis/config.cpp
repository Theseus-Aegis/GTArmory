#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacgt_main",
            "tacgt_ammunition",
            "RF_Data_Loadorder",
            "A3_Aegis_Weapons_F_Aegis",
            "A3_Aegis_Weapons_F_Aegis_Rifles_SA80",
            "A3_Aegis_Weapons_F_Aegis_Rifles_SR25",
            "A3_Aegis_Weapons_F_Aegis_Rifles_M16",
            "A3_Aegis_Weapons_F_Aegis_Rifles_M4A1",
            "A3_Aegis_Weapons_F_Aegis_Rifles_SCAR",
            "A3_Aegis_Weapons_F_Aegis_Pistols_G17",
            "A3_Aegis_Weapons_F_Aegis_Pistols_P320",
            "A3_Aegis_Weapons_F_Aegis_Pistols_Mk26",
            "A3_Aegis_Weapons_F_Aegis_Pistols_Ruger57",
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Brett"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgWeapons.hpp"
