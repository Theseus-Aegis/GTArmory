#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacgt_main",
            "tacgt_ammunition",
            "A3_Atlas_Weapons_F_Atlas",
            "A3_Atlas_Weapons_F_Atlas_Rifles_AUG",
            "A3_Atlas_Weapons_F_Atlas_Rifles_FAMAS",
            "A3_Atlas_Weapons_F_Atlas_Rifles_FORT650",
            "A3_Atlas_Weapons_F_Atlas_Rifles_G36",
            "A3_Atlas_Weapons_F_Atlas_Rifles_NCAR15",
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Brett"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgWeapons.hpp"
