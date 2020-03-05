#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_ballistics", "CUP_Weapons_Ammunition", "tacgt_main"};
        magazines[] = {
            "tacgt_8Rnd_P_000",
            "tacgt_6Rnd_P_000",
            "tacgt_8Rnd_S_AP20",
            "tacgt_6Rnd_S_AP20",
            "tacgt_30Rnd_556x45_M855_PMAG",
            "tacgt_30Rnd_556x45_M855_PMAG_Tan",
            "tacgt_30Rnd_556x45_M855A1_PMAG",
            "tacgt_30Rnd_556x45_M855A1_PMAG_Tan",
            "tacgt_30Rnd_556x45_M995_PMAG",
            "tacgt_30Rnd_556x45_M995_PMAG_Tan",
            "tacgt_30Rnd_556x45_MK262_PMAG",
            "tacgt_30Rnd_556x45_MK262_PMAG_Tan",
            "tacgt_30Rnd_556x45_MK318_PMAG",
            "tacgt_30Rnd_556x45_MK318_PMAG_Tan",
            "tacgt_30Rnd_556x45_M855_EMAG",
            "tacgt_30Rnd_556x45_M855_EMAG_Tan",
            "tacgt_30Rnd_556x45_M855A1_EMAG",
            "tacgt_30Rnd_556x45_M855A1_EMAG_Tan",
            "tacgt_30Rnd_556x45_M995_EMAG",
            "tacgt_30Rnd_556x45_M995_EMAG_Tan",
            "tacgt_30Rnd_556x45_MK262_EMAG",
            "tacgt_30Rnd_556x45_MK262_EMAG_Tan",
            "tacgt_30Rnd_556x45_MK318_EMAG",
            "tacgt_30Rnd_556x45_MK318_EMAG_Tan",
            "tacgt_200Rnd_556x45_M855A1_Box",
            "tacgt_200Rnd_556x45_M855A1_Box_Red",
            "tacgt_200Rnd_556x45_M855A1_Box_Tracer",
            "tacgt_200Rnd_556x45_M855A1_Box_Tracer_Red"
        };
        ammo[] = {
            "tacgt_S_12G_AP20",
            "tacgt_P_12G_000",
            "tacgt_556x45_EPR_M855A1",
            "tacgt_556x45_EPR_M855A1_Red"
        };
        author = CSTRING(Author);
        authors[] = {"TyroneMF"};
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
