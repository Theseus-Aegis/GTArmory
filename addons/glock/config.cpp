#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QCLASS(hgun_Glock18_Tan),
            QCLASS(hgun_Glock18_Black)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main", "CUP_Weapons_Glock17"};
        author = CSTRING(Author);
        authors[] = {"CUP", "TyroneMF"};
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

class Mode_SemiAuto;
class Mode_FullAuto;

#include "CfgWeapons.hpp"
