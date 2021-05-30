class CfgWeapons {
    class Rifle_Base_F;
    class CUP_sgun_M1014_base: Rifle_Base_F {
        magazines[] = {
            "CUP_8Rnd_B_Beneli_74Slug",
            "CUP_8Rnd_B_Beneli_74Pellets",
            "CUP_6Rnd_B_Beneli_74Pellets",
            "CUP_6Rnd_B_Benelli_74Slug",
            "tacgt_8Rnd_P_000",
            "tacgt_6Rnd_P_000",
            "tacgt_8Rnd_S_AP20",
            "tacgt_6Rnd_S_AP20"
        };

        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {M1014_SOUND_SET};
            };

            reloadTime = 0;
        };
    };

    class CUP_sgun_M1014_Entry: CUP_sgun_M1014_base {
        magazines[] = {
            "CUP_6Rnd_B_Beneli_74Pellets",
            "CUP_6Rnd_B_Benelli_74Slug",
            "tacgt_6Rnd_P_000",
            "tacgt_6Rnd_S_AP20"
        };

        class Single: Single {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {M1014_SOUND_SET};
            };

            reloadTime = 0;
        };
    };
};
