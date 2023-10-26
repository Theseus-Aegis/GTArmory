#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cpc_Vest_config",
            "lbtt_Vest_config",
            "fatpack"
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"

// Fatpack Backpack
class CfgVehicles {
    class Bag_Base;
    class fatpack_od: Bag_Base {
        maximumLoad = 180;
    };
    class fatpack_coy: fatpack_od {
        maximumLoad = 180;
    };
};
