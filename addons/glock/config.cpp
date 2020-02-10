#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            "tacgt_hgun_Glock18_Tan",
            "tacgt_hgun_Glock18_Black"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main", "CUP_Weapons_Glock17"};
        author = "";
        authors[] = {""};
        VERSION_CONFIG;
    };
};

class Mode_SemiAuto;
class Mode_FullAuto;

#include "CfgWeapons.hpp"
