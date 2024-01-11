#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(MM_item_minotaur_uniform)
        };
        weapons[] = {
            QCLASS(Ethan_Helmet),
            QCLASS(Jack_Beret),
            QCLASS(JJ_HeliPilot_Black),
            QCLASS(Joram_HeliPilot_Black),
            QCLASS(RG_marciras_hh_belt_rgr),
            QCLASS(RG_marciras_hh_belt_khk),
            QCLASS(MM_minotaur_uniform),
            QCLASS(M11A1_Special),
            QCLASS(Rambo_HK417DMR_White)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacgt_main",
            "tacgt_ammunition",
            "tacgt_theseus",
            "CUP_Creatures_People_LoadOrder",
            "CUP_Weapons_LoadOrder",
            "milgp_uniforms_cfg",
            "milgp_vests_cfg",
            "niaweapons_226",
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"GilleeDoo", "Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class Mode_SemiAuto;

#include "CfgFaces.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
