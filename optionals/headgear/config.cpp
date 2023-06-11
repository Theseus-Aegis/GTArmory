#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QCLASS(OpsCore_Medic),
            QCLASS(Cap_DEF_NYMets),
            QCLASS(Jack_Beret)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacgt_main",
            "CUP_Creatures_Extra_OpsCore",
            "CUP_Creatures_People_Civil_Chernarus",
        };
        author = ECSTRING(main,Authors);
        authors[] = {"GilleeDoo, Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};
#include "CfgWeapons.hpp"
