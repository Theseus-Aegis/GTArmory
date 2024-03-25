class CfgWeapons {
    class muzzle_snds_H;
    class muzzle_snds_M;
    class bipod_01_F_snd;
    class ItemCore;
    class hlc_rifle_honeybase;
    class hlc_aug_base;
    class hlc_rifle_auga2carb;
    class hlc_rifle_auga2;
    class hlc_rifle_auga2lsw;

    #include "hidden_attachments.hpp"
    #include "hidden_augRifles.hpp"
    #include "singleFire_AUG.hpp"

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
