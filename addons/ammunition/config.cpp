#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacgt_main",
            "ace_ballistics",
            "bnae_RK95",
            "CUP_Weapons_Ammunition",
            "CUP_Weapons_AK12",
            "CUP_Weapons_Bren2",
            "CUP_Weapons_Famas",
            "CUP_Weapons_X95",
            "hlcweapons_core",
            "hlcweapons_AUG",
            "hlcweapons_SG550"
        };
        author = ECSTRING(main,Authors);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgWeapons.hpp"
