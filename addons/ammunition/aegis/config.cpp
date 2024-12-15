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
            "A3_Aegis_Weapons_F_Aegis",
            "A3_Aegis_Weapons_F_Aegis_Rifles_SA80",
            "A3_Aegis_Weapons_F_Aegis_Rifles_SR25",
            "A3_Aegis_Weapons_F_Aegis_Rifles_M16",
            "A3_Aegis_Weapons_F_Aegis_Rifles_M4A1",
            "A3_Aegis_Weapons_F_Aegis_Rifles_SCAR",
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
