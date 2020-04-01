#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main", "ace_ballistics", "CUP_Weapons_Ammunition"};
        magazines[] = {
            QCLASS(8Rnd_P_000),
            QCLASS(6Rnd_P_000),
            QCLASS(8Rnd_S_AP20),
            QCLASS(6Rnd_S_AP20),
            QCLASS(30Rnd_556x45_M855_PMAG),
            QCLASS(30Rnd_556x45_M855_PMAG_Tan),
            QCLASS(30Rnd_556x45_M855A1_PMAG),
            QCLASS(30Rnd_556x45_M855A1_PMAG_Tan),
            QCLASS(30Rnd_556x45_M995_PMAG),
            QCLASS(30Rnd_556x45_M995_PMAG_Tan),
            QCLASS(30Rnd_556x45_MK262_PMAG),
            QCLASS(30Rnd_556x45_MK262_PMAG_Tan),
            QCLASS(30Rnd_556x45_MK318_PMAG),
            QCLASS(30Rnd_556x45_MK318_PMAG_Tan),
            QCLASS(30Rnd_556x45_M855_EMAG),
            QCLASS(30Rnd_556x45_M855_EMAG_Tan),
            QCLASS(30Rnd_556x45_M855A1_EMAG),
            QCLASS(30Rnd_556x45_M855A1_EMAG_Tan),
            QCLASS(30Rnd_556x45_M995_EMAG),
            QCLASS(30Rnd_556x45_M995_EMAG_Tan),
            QCLASS(30Rnd_556x45_MK262_EMAG),
            QCLASS(30Rnd_556x45_MK262_EMAG_Tan),
            QCLASS(30Rnd_556x45_MK318_EMAG),
            QCLASS(30Rnd_556x45_MK318_EMAG_Tan),
            QCLASS(200Rnd_556x45_M855A1_Box),
            QCLASS(200Rnd_556x45_M855A1_Box_Red),
            QCLASS(200Rnd_556x45_M855A1_Box_Tracer),
            QCLASS(200Rnd_556x45_M855A1_Box_Tracer_Red),
            QCLASS(30Rnd_762x39_BP_Mag),
            QCLASS(30Rnd_762x39_AK12_BP_Mag),
            QCLASS(30Rnd_762x39_AK12_Arid_BP_Mag),
            QCLASS(30Rnd_762x39_AK12_Lush_BP_Mag)
        };
        ammo[] = {
            QCLASS(S_12G_AP20),
            QCLASS(P_12G_000),
            QCLASS(556x45_EPR_M855A1),
            QCLASS(556x45_EPR_M855A1_Red),
            QCLASS(762x39_BP)
        };
        author = ECSTRING(main,Author);
        authors[] = {"TyroneMF"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
