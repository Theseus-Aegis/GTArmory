#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacgt_main",
            "CUP_Weapons_Ammunition",
            "CUP_Weapons_AK",
            "CUP_Weapons_Deagle",
            "CUP_Weapons_L85",
            "CUP_Weapons_M1014",
            "CUP_Weapons_MP7",
            "CUP_Weapons_Saiga12K",
            "CUP_Weapons_Sounds"
        };
        author = ECSTRING(main,Authors);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MGun;

#include "CfgAmmo.hpp"
#include "CfgWeapons.hpp"
