#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        weapons[] = {
            QCLASS(battle_belt_assaulter_gry),
            QCLASS(battle_belt_hgunner_gry),
            QCLASS(mmac_light_gry),
            QCLASS(mmac_assaulter_gry),
            QCLASS(mmac_assaulter_belt_gry),
            QCLASS(mmac_medic_gry),
            QCLASS(mmac_medic_belt_gry),
            QCLASS(mmac_teamleader_gry),
            QCLASS(mmac_teamleader_belt_gry),
            QCLASS(mmac_marksman_gry),
            QCLASS(mmac_marksman_belt_gry),
            QCLASS(mmac_hgunner_gry),
            QCLASS(mmac_hgunner_belt_gry),
            QCLASS(mmac_grenadier_gry),
            QCLASS(mmac_grenadier_belt_gry)
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

// TODO: UI pictures
