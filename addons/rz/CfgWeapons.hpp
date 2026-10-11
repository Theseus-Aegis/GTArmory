class CfgWeapons {
    class Rifle_Long_Base_F;
    class LMG_MCR56_blk_F: Rifle_Long_Base_F {
        magazines[] = {QCLASS(200Rnd_556x45_Ball_Belt)};
        magazineWell[] = {"CBA_556x45_MINIMI"};
        class LinkedItems {
            delete LinkedItemsUnder;
        };
    };

    class LMG_MCR56_pouch_blk_F: LMG_MCR56_blk_F {
        magazines[] = {QCLASS(200Rnd_556x45_Ball_Belt)};
        magazineWell[] = {"CBA_556x45_MINIMI"};
    };
};
