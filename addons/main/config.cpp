#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            // Arma 3
            "A3_Data_F_Enoch_Loadorder",
            "A3_Data_F_Mod_Loadorder",
            // ACE
            "ace_main",
            // CBA
            "cba_main",
            // CUP
            "CUP_Weapons_Ammunition",
            "CUP_Weapons_East_Attachments",
            "CUP_Weapons_WeaponsCore",
            "CUP_Weapons_L85",
            "CUP_Weapons_M1014",
            "CUP_Weapons_MP7",
            "CUP_Weapons_Saiga12K",
            "CUP_Weapons_Scar",
            // NIArms
            "hlcweapons_core",
            "hlcweapons_mp5",
            "hlcweapons_sg550",
            "hlcweapons_stgw57",
            // Theseus
            "tacs_main"
        };
        author = CSTRING(Author);
        authors[] = {"GilleeDoo", "Jonpas", "TyroneMF"};
        VERSION_CONFIG;
    };
};

#include "CfgMods.hpp"
