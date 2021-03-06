#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        magazines[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacgt_main",
            "tacgt_ammunition",
            "CUP_Weapons_Ammunition",
            "hlcweapons_core",
            "hlcweapons_SG550",
            "hlcweapons_SAW",
            "hlcweapons_AUG",
            "hlcweapons_acr"
        };
        author = ECSTRING(main,Authors);
        authors[] = {"Tyrone"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgMagazines.hpp"
