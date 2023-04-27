#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(breacher_gry),
            QCLASS(breacher_blk),
            QCLASS(hydration_gry),
            QCLASS(hydration_blk),
            QCLASS(pointman_gry),
            QCLASS(pointman_blk),
            QCLASS(tomahawk_gry),
            QCLASS(tomahawk_blk),
            QCLASS(patrol_01_gry),
            QCLASS(patrol_01_blk)
        };
        weapons[] = {
            QCLASS(battle_belt_assaulter_gry),
            QCLASS(battle_belt_assaulter_blk),
            QCLASS(battle_belt_hgunner_gry),
            QCLASS(battle_belt_hgunner_blk),
            QCLASS(jpc_light_gry),
            QCLASS(jpc_light_blk),
            QCLASS(jpc_assaulter_gry),
            QCLASS(jpc_assaulter_belt_gry),
            QCLASS(jpc_assaulter_blk),
            QCLASS(jpc_assaulter_belt_blk),
            QCLASS(jpc_grenadier_gry),
            QCLASS(jpc_grenadier_belt_gry),
            QCLASS(jpc_grenadier_blk),
            QCLASS(jpc_grenadier_belt_blk),
            QCLASS(jpc_hgunner_gry),
            QCLASS(jpc_hgunner_belt_gry),
            QCLASS(jpc_hgunner_blk),
            QCLASS(jpc_hgunner_belt_blk),
            QCLASS(jpc_marksman_gry),
            QCLASS(jpc_marksman_belt_gry),
            QCLASS(jpc_marksman_blk),
            QCLASS(jpc_marksman_belt_blk),
            QCLASS(jpc_medic_gry),
            QCLASS(jpc_medic_belt_gry),
            QCLASS(jpc_medic_blk),
            QCLASS(jpc_medic_belt_blk),
            QCLASS(jpc_teamleader_gry),
            QCLASS(jpc_teamleader_belt_gry),
            QCLASS(jpc_teamleader_blk),
            QCLASS(jpc_teamleader_belt_blk),
            QCLASS(marciras_light_gry),
            QCLASS(marciras_light_blk),
            QCLASS(marciras_assaulter_gry),
            QCLASS(marciras_assaulter_belt_gry),
            QCLASS(marciras_assaulter_blk),
            QCLASS(marciras_assaulter_belt_blk),
            QCLASS(marciras_grenadier_gry),
            QCLASS(marciras_grenadier_belt_gry),
            QCLASS(marciras_grenadier_blk),
            QCLASS(marciras_grenadier_belt_blk),
            QCLASS(marciras_hgunner_gry),
            QCLASS(marciras_hgunner_belt_gry),
            QCLASS(marciras_hgunner_blk),
            QCLASS(marciras_hgunner_belt_gry),
            QCLASS(marciras_marksman_gry),
            QCLASS(marciras_marksman_belt_gry),
            QCLASS(marciras_marksman_blk),
            QCLASS(marciras_marksman_belt_blk),
            QCLASS(marciras_medic_gry),
            QCLASS(marciras_medic_belt_gry),
            QCLASS(marciras_medic_blk),
            QCLASS(marciras_medic_belt_blk),
            QCLASS(marciras_teamleader_gry),
            QCLASS(marciras_teamleader_belt_gry),
            QCLASS(marciras_teamleader_blk),
            QCLASS(marciras_teamleader_belt_blk),
            QCLASS(mmac_light_gry),
            QCLASS(mmac_light_blk),
            QCLASS(mmac_assaulter_gry),
            QCLASS(mmac_assaulter_belt_gry),
            QCLASS(mmac_assaulter_blk),
            QCLASS(mmac_assaulter_belt_blk),
            QCLASS(mmac_grenadier_gry),
            QCLASS(mmac_grenadier_belt_gry),
            QCLASS(mmac_grenadier_blk),
            QCLASS(mmac_grenadier_belt_blk),
            QCLASS(mmac_hgunner_gry),
            QCLASS(mmac_hgunner_belt_gry),
            QCLASS(mmac_hgunner_blk),
            QCLASS(mmac_hgunner_belt_blk),
            QCLASS(mmac_marksman_gry),
            QCLASS(mmac_marksman_belt_gry),
            QCLASS(mmac_marksman_blk),
            QCLASS(mmac_marksman_belt_blk),
            QCLASS(mmac_medic_gry),
            QCLASS(mmac_medic_belt_gry),
            QCLASS(mmac_medic_blk),
            QCLASS(mmac_medic_belt_blk),
            QCLASS(mmac_teamleader_gry),
            QCLASS(mmac_teamleader_belt_gry),
            QCLASS(mmac_teamleader_blk),
            QCLASS(mmac_teamleader_belt_blk)
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

class CfgVehicles {
    #include "backpacks.hpp"
};

class CfgWeapons {
    #include "battlebelt.hpp"
    #include "jpc.hpp"
    #include "marciras.hpp"
    #include "mmac.hpp"
};

// TODO: Finish textures
// TODO: UI pictures
