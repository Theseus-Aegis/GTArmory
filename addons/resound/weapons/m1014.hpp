class CUP_sgun_M1014_base: Rifle_Base_F {
    class Single: Mode_SemiAuto {
        class BaseSoundModeType;
        class StandardSound: BaseSoundModeType {
            soundSetShot[] = {M1014_SOUND_SET};
        };
        reloadTime = 0;
    };
};

class CUP_sgun_M1014_Entry: CUP_sgun_M1014_base {
    class Single: Single {
        class BaseSoundModeType;
        class StandardSound: BaseSoundModeType {
            soundSetShot[] = {M1014_SOUND_SET};
        };
        reloadTime = 0;
    };
};
