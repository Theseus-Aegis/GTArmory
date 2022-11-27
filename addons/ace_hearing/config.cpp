#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacgt_main",
            "ace_hearing",
            // CUP
            "CUP_Creatures_Extra_OpsCore",
            "CUP_Creatures_Military_ACR",
            "CUP_Creatures_Military_BAF",
            "CUP_Creatures_Military_Germany",
            "CUP_Creatures_Military_PMC",
            "CUP_Creatures_Military_USArmy",
            "CUP_Creatures_Military_USMC",
            // MilGearPack
            "milgp_headgear_cfg",
            // Western Sahara
            "Characters_f_lxWS_headgear"
        };
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
