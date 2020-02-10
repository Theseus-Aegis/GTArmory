class CfgWeapons {
    class Rifle_Base_F;
    class hlc_STGW_base: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {SG510_SOUND_SET};
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {SG510S_SOUND_SET};
            };
        };

        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {SG510_SOUND_SET};
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {SG510S_SOUND_SET};
            };
        };
    };
};
