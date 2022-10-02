class CUP_L85A2_base: Rifle_Base_F {
    class Single: Mode_SemiAuto {
        class BaseSoundModeType;
        class StandardSound: BaseSoundModeType {
            soundSetShot[] = {L85_SOUND_SET};
        };
        class SilencedSound: BaseSoundModeType {
            soundSetShot[] = {L85_SOUND_SET};
        };
    };

    class FullAuto: Mode_FullAuto {
        class BaseSoundModeType;
        class StandardSound: BaseSoundModeType {
            soundSetShot[] = {L85S_SOUND_SET};
        };
        class SilencedSound: BaseSoundModeType {
            soundSetShot[] = {L85S_SOUND_SET};
        };
    };
};
