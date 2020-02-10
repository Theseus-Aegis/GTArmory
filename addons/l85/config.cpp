#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        magazines[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main"};
        author = CSTRING(Author);
        authors[] = {"GilleeDoo", "TyroneMF"};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
