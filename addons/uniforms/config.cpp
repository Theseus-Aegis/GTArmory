#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QCLASS(Uniform_PMC_Casual_YeeYees),
            QCLASS(Uniform_PMC_Casual_Arcadian),
            QCLASS(Uniform_PMC_Casual_GTArmoury),
            QCLASS(Uniform_PMC_Casual_ACRE2)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main", "tacgt_theseus"};
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
