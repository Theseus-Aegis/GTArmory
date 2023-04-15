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
            QCLASS(MM_minotaur_uniform)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacgt_main",
            "CUP_Creatures_People_Civil_Chernarus",
            "tacgt_ammunition",
            "milgp_uniforms_cfg",
            "milgp_vests_cfg",
            "niaweapons_226"
        };
        author = ECSTRING(main,Authors);
        authors[] = {"GilleeDoo", "Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class Mode_SemiAuto;

#include "CfgFaces.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
