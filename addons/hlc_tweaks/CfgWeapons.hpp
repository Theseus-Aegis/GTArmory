class CfgWeapons {
    class ItemCore;
    class hlc_acc_DBALPL_FL : ItemCore {
        scope = 1;
    };

    // Enable Semi-Auto for AUGs
    class hlc_aug_base;
    class hlc_rifle_aug : hlc_aug_base {
        class Single: Single {
            showToPlayer = 1;
        };
    };

    class hlc_rifle_auga2: hlc_rifle_aug {
        class Single: Single {
            showToPlayer = 1;
        };
    };

    class hlc_rifle_auga3: hlc_rifle_aug {
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

    class hlc_rifle_honeybase;
    class hlc_rifle_honeybadger: hlc_rifle_honeybase {
        class LinkedItems {
            class LinkedItemsMuzzle {
                item = "muzzle_HBADGER";
                slot = "MuzzleSlot";
            };
        };
    };
};
