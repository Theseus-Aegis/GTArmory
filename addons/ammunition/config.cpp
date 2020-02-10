#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main"};
        magazines[] = {
            "tacgt_8Rnd_P_000",
            "tacgt_6Rnd_P_000",
            "tacgt_8Rnd_S_AP20",
            "tacgt_6Rnd_S_AP20"
        };
        ammo[] = {
            "tacgt_S_12G_AP20",
            "tacgt_P_12G_000"
        };
        author = CSTRING(Author);
        authors[] = {"GilleeDoo", "TyroneMF"};
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
