class CfgWeapons {
    class Rifle_Base_F;
    class hlc_MP5_base: Rifle_Base_F {
        magazines[] = {
            "hlc_30Rnd_9x19_B_MP5",
            "hlc_30Rnd_9x19_GD_MP5",
            "hlc_30Rnd_9x19_SD_MP5"
        };
        magazineWell[] = {QCLASS(9x19_MP5)};

        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound;
            class SilencedSound;
        };
        class Burst: Mode_Burst {
            class BaseSoundModeType;
            class StandardSound;
            class SilencedSound;
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType;
            class StandardSound;
            class SilencedSound;
        };
    };

    class hlc_smg_MP5N: hlc_MP5_base {};
    class hlc_smg_mp510: hlc_smg_MP5N {
        magazines[] = {
            "hlc_30Rnd_10mm_B_MP5",
            "hlc_30Rnd_10mm_JHP_MP5"
        };
        magazineWell[] = {QCLASS(10x25_MP5)};
    };

    class hlc_smg_9mmar: hlc_smg_MP5N {
        class Single: Single {
            class StandardSound: StandardSound {
                soundSetShot[] = {"mp5_Shot_SoundSet", "mp5_tail_SoundSet"};
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {"mp5_Shot_SoundSet", "mp5_tail_SoundSet"};
            };
        };

        class Burst: Burst {
            class StandardSound: StandardSound {
                soundSetShot[] = {"mp5_Shot_SoundSet", "mp5_tail_SoundSet"};
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {"mp5_Shot_SoundSet", "mp5_tail_SoundSet"};
            };
        };

        class FullAuto: FullAuto {
            class StandardSound: StandardSound {
                soundSetShot[] = {"mp5_Shot_SoundSet", "mp5_tail_SoundSet"};
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {"mp5_Shot_SoundSet", "mp5_tail_SoundSet"};
            };
        };
    };
};
