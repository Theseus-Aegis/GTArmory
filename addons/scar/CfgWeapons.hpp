class CfgWeapons {
    class Rifle_Base_F;
    class CUP_arifle_SCAR_Base: Rifle_Base_F {
        modes[] = {"SCAR_L_Single", "SCAR_L_FullAuto"};

        class SCAR_L_Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {MK20_SOUND_SET};
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {MK20S_SOUND_SET};
            };
        };

        class SCAR_L_FullAuto: Mode_FullAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {MK20_SOUND_SET};
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {MK20S_SOUND_SET};
            };
        };

    };

    class CUP_arifle_Mk17_Base: CUP_arifle_SCAR_Base {
        class SCAR_H_Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {MK18_SOUND_SET};
            };

            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {MK18S_SOUND_SET};
            };
        };

        class SCAR_H_FullAuto: Mode_FullAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {MK18_SOUND_SET};
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {MK18S_SOUND_SET};
            };
        };
    };

    class CUP_arifle_SCAR_L_Base: CUP_arifle_SCAR_Base {};

    // SCAR-L
    #include "l\tan.hpp"
    #include "l\black.hpp"
    #include "l\woodland.hpp"

    // SCAR-H
    #include "h\tan.hpp"
    #include "h\black.hpp"
    #include "h\woodland.hpp"
};
