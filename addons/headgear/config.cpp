#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main", "CUP_Creatures_Extra_OpsCore"};
        author = ECSTRING(main,Authors);
        authors[] = {"GilleeDoo, Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};
#include "CfgWeapons.hpp"
