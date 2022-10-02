class CUP_hgun_Deagle: Pistol_Base_F {
    class Single: Mode_SemiAuto {
        class BaseSoundModeType;
        class StandardSound: BaseSoundModeType {
            soundSetShot[] = {DEAGLE_SOUND_SET};
        };
        class SilencedSound: BaseSoundModeType {
            soundSetShot[] = {DEAGLE_SOUND_SET};
        };
    };
};
