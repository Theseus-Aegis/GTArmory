class CUP_sgun_Saiga12K: Rifle_Base_F {
    class Single: Mode_SemiAuto {
        class BaseSoundModeType;
        class StandardSound: BaseSoundModeType {
            soundSetShot[] = {SAIGA12_SOUND_SET};
        };
        class SilencedSound: BaseSoundModeType {
            soundSetShot[] = {SAIGA12_SOUND_SET};
        };
    };
};
