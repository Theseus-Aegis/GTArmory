#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main", "CUP_Weapons_Ammunition"};
        magazines[] = {
            "tacgt_8Rnd_P_000",
            "tacgt_6Rnd_P_000",
            "tacgt_8Rnd_S_AP20",
            "tacgt_6Rnd_S_AP20",
            "tacgt_30Rnd_556x45_M855_PMAG",
            "tacgt_30Rnd_556x45_M995_PMAG",
            "tacgt_30Rnd_556x45_MK262_PMAG",
            "tacgt_30Rnd_556x45_MK318_PMAG",
            "tacgt_30Rnd_556x45_M855_EMAG",
            "tacgt_30Rnd_556x45_M995_EMAG",
            "tacgt_30Rnd_556x45_MK262_EMAG",
            "tacgt_30Rnd_556x45_MK318_EMAG"
        };
        ammo[] = {
            "tacgt_S_12G_AP20",
            "tacgt_P_12G_000"
        };
        author = CSTRING(Author);
        authors[] = {"GilleeDoo", "TyroneMF"};
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
