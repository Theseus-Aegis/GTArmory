class CfgWeapons {
    class muzzle_snds_H;
    class muzzle_snds_M;
    class bipod_01_F_snd;
    class ItemCore;
    class hlc_rifle_honeybase;
    class hlc_aug_base;
    class hlc_rifle_auga2carb;

    #include "hidden_attachments.hpp"

    // Some cause pop-up errors.
    class hlc_rifle_aug: hlc_aug_base {
        scope = 1;
        scopeArsenal = 1;
        class Single: Single {
            showToPlayer = 1;
        };
    };

    // HBAR semi-auto, isn't not using inheritance fun guys?
    class hlc_rifle_aughbar: hlc_rifle_aug {
        scope = 2;
        scopeArsenal = 2;
        modes[] = {
            "Single",
            "FullAuto",
            "50",
            "AI_long",
            "AI_close",
            "AI_short",
            "AI_far",
            "AI_toofar",
            "AI_far_optic1"
        };
        class Single: Single {
            showToPlayer = 1;
        };
    };

    class hlc_rifle_aughbar_b: hlc_rifle_aughbar {
        modes[] = {
            "Single",
            "FullAuto",
            "fullauto_medium",
            "single_medium_optics1",
            "single_far_optics2"
        };
    };

    class hlc_rifle_aughbar_t: hlc_rifle_aughbar {
        modes[] = {
            "Single",
            "FullAuto",
            "fullauto_medium",
            "single_medium_optics1",
            "single_far_optics2"
        };
    };

    class hlc_rifle_auga1_t: hlc_rifle_aug {
        scope = 1;
        scopeArsenal = 1;
    };
    class hlc_rifle_auga1_b: hlc_rifle_aug {
        scope = 1;
        scopeArsenal = 1;
    };

    class hlc_rifle_auga1carb: hlc_rifle_aug {
        scope = 1;
        scopeArsenal = 1;
    };
    class hlc_rifle_auga1carb_B: hlc_rifle_auga1carb {
        scope = 1;
        scopeArsenal = 1;
    };
    class hlc_rifle_auga1carb_t: hlc_rifle_auga1carb {
        scope = 1;
        scopeArsenal = 1;
    };

    // Enable Semi-Auto for AUGs
    class hlc_rifle_auga2: hlc_rifle_aug {
        class Single: Single {
            showToPlayer = 1;
        };
    };

    class hlc_rifle_auga3: hlc_rifle_aug {
        scope = 2;
        scopeArsenal = 2;
        class Single: Single {
            showToPlayer = 1;
        };
        class LinkedItems {
            delete LinkedItemsMuzzle;
        };
    };
    class hlc_rifle_auga3_b: hlc_rifle_auga3 {
        class LinkedItems {
            delete LinkedItemsMuzzle;
        };
    };

    class hlc_rifle_auga3_bl: hlc_rifle_auga3 {
        class LinkedItems {
            delete LinkedItemsMuzzle;
        };
    };

    class hlc_rifle_augsr: hlc_rifle_auga2 {
        scope = 1;
        scopeArsenal = 1;
    };
    class hlc_rifle_augsr_t: hlc_rifle_augsr {
        scope = 1;
        scopeArsenal = 1;
    };
    class hlc_rifle_augsr_b: hlc_rifle_augsr {
        scope = 1;
        scopeArsenal = 1;
    };

    class hlc_rifle_augsrcarb: hlc_rifle_auga2carb {
        scope = 1;
        scopeArsenal = 1;
    };
    class hlc_rifle_augsrcarb_t: hlc_rifle_augsrcarb {
        scope = 1;
        scopeArsenal = 1;
    };
    class hlc_rifle_augsrcarb_b: hlc_rifle_augsrcarb {
        scope = 1;
        scopeArsenal = 1;
    };

    class hlc_rifle_auga2lsw: hlc_rifle_aughbar {
        modes[] = {
            "Single",
            "FullAuto",
            "50",
            "AI_long",
            "AI_close",
            "AI_short",
            "AI_far",
            "AI_toofar",
            "AI_far_optic1"
        };
    };

    class hlc_rifle_augsrhbar: hlc_rifle_auga2lsw {
        scope = 1;
        scopeArsenal = 1;
    };
    class hlc_rifle_augsrhbar_t: hlc_rifle_augsrhbar {
        scope = 1;
        scopeArsenal = 1;
    };
    class hlc_rifle_augsrhbar_b: hlc_rifle_augsrhbar {
        scope = 1;
        scopeArsenal = 1;
    };

    class hlc_rifle_augpara: hlc_aug_base {
        scope = 1;
        scopeArsenal = 1;
    };
    class hlc_rifle_augpara_b: hlc_rifle_augpara {
        scope = 1;
        scopeArsenal = 1;
    };
    class hlc_rifle_augpara_t: hlc_rifle_augpara {
        scope = 1;
        scopeArsenal = 1;
    };

    class hlc_rifle_auga2para: hlc_aug_base {
        scope = 1;
        scopeArsenal = 1;
    };
    class hlc_rifle_auga2para_t: hlc_rifle_auga2para {
        scope = 1;
        scopeArsenal = 1;
    };
    class hlc_rifle_auga2para_b: hlc_rifle_auga2para {
        scope = 1;
        scopeArsenal = 1;
    };



    class hlc_acc_DBALPL_FL: ItemCore {
        scope = 1;
    };

    // Add linked suppressor.
    class hlc_rifle_honeybadger: hlc_rifle_honeybase {
        class LinkedItems {
            class LinkedItemsMuzzle {
                item = "muzzle_HBADGER";
                slot = "MuzzleSlot";
            };
        };
    };
};
