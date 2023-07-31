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
            "CUP_Weapons_Ammunition",
            "CUP_Weapons_AK12",
            "CUP_Weapons_Bren2",
            "CUP_Weapons_Famas",
            "CUP_Weapons_M17",
            "CUP_Weapons_Mk23",
            "CUP_Weapons_SCAR",
            "CUP_Weapons_X95",
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Authors);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
