#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(ModuleFlareStarRed),
            QCLASS(ModuleFlareStarWhite),
            QCLASS(ModuleFlareStarGreen),
            QCLASS(ModuleFlareClusterRed),
            QCLASS(ModuleFlareClusterWhite),
            QCLASS(ModuleFlareClusterGreen)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main", "CUP_Weapons_Ammunition"};
        author = ECSTRING(main,Author);
        authors[] = {"TyroneMF"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgVehicles.hpp"
