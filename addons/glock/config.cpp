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
        requiredAddons[] = {"tacgt_main"};
        author = CSTRING(Author);
        authors[] = {"CUP", "GilleeDoo", "TyroneMF"};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
