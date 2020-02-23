#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            "tacgt_KG_Opscore_Fleck_Patch",
            "tacgt_KG_Opscore_Patch",
            "tacgt_MM_tshirt_G3_field_pants_rgr",
            "tacgt_RG_marciras_medic_belt_khk"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"BWA3_headgear", "milgp_uniforms_cfg", "milgp_vests_cfg", "tacgt_main"};
        author = CSTRING(Author);
        authors[] = {"GilleeDoo", "TyroneMF"};
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
