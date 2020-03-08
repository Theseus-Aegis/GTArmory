#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QCLASS(KG_Opscore_Fleck_Patch),
            QCLASS(KG_Opscore_Patch),
            QCLASS(JJ_HeliPilot_Black),
            QCLASS(RG_marciras_hh_belt_rgr),
            QCLASS(RG_marciras_hh_belt_khk)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main", "BWA3_headgear", "milgp_uniforms_cfg", "milgp_vests_cfg"};
        author = CSTRING(Author);
        authors[] = {"GilleeDoo", "TyroneMF"};
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
