class CUP_srifle_SVD: Rifle_Base_F {
    class Single: Mode_SemiAuto {
        class BaseSoundModeType;
        class StandardSound: BaseSoundModeType {
            soundSetShot[] = {SVD_SOUND_SET};
        };
        class SilencedSound: BaseSoundModeType {
            soundSetShot[] = {SVDS_SOUND_SET};
        };
    };
};
