#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(ModuleFlareStarRed),
            QCLASS(ModuleFlareStarWhite),
            QCLASS(ModuleFlareStarGreen),
            QCLASS(ModuleFlareClusterRed),
            QCLASS(ModuleFlareClusterWhite),
            QCLASS(ModuleFlareClusterGreen)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacgt_main",
            "ace_grenades",
            "CUP_Weapons_Ammunition",
            "CUP_Weapons_Flaregun"
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgVehicles.hpp"
