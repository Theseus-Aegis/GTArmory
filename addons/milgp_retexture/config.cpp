#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        weapons[] = {
            QCLASS(mmac_assaulter_gry),
            QCLASS(mmac_assaulter_belt_gry)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacgt_main",
            "milgp_uniforms_cfg"
        };
        author = ECSTRING(main,Authors);
        authors[] = {"GilleeDoo"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class CfgWeapons {
    #include "battlebelt.hpp"
    #include "mmac.hpp"
};
