#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(MM_item_minotaur_uniform)
        };
        weapons[] = {
            QCLASS(KG_Opscore_Fleck_Patch),
            QCLASS(KG_Opscore_Patch),
            QCLASS(JJ_HeliPilot_Black),
            QCLASS(RG_marciras_hh_belt_rgr),
            QCLASS(RG_marciras_hh_belt_khk),
            QCLASS(MM_minotaur_uniform)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main", "BWA3_headgear", "milgp_uniforms_cfg", "milgp_vests_cfg"};
        author = ECSTRING(main,Author);
        authors[] = {"GilleeDoo", "TyroneMF"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgFaces.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
