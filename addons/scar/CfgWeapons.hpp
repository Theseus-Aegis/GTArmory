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

            recoil = "recoil_single_ebr";
            recoilProne = "recoil_single_prone_ebr";
        };

        class SCAR_H_FullAuto: Mode_FullAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {MK18_SOUND_SET};
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {MK18S_SOUND_SET};
            };

            recoil = "recoil_auto_ebr";
            recoilProne = "recoil_auto_prone_ebr";
        };
    };

    class CUP_arifle_SCAR_L_Base: CUP_arifle_SCAR_Base {};

    // MK16 Renaming
    class CUP_arifle_Mk16_STD: CUP_arifle_SCAR_L_Base {
        displayName = "SCAR-L";
    };

    class CUP_arifle_Mk16_STD_black: CUP_arifle_Mk16_STD {
        displayName = "SCAR-L Black";
    };

    class CUP_arifle_Mk16_STD_woodland: CUP_arifle_Mk16_STD {
        displayName = "SCAR-L Woodland";
    };

    class CUP_arifle_Mk16_STD_FG: CUP_arifle_Mk16_STD {
        displayName = "SCAR-L (Front Grip)";
    };

    class CUP_arifle_Mk16_STD_FG_black: CUP_arifle_Mk16_STD_FG {
        displayName = "SCAR-L Black (Front Grip)";
    };

    class CUP_arifle_Mk16_STD_FG_woodland: CUP_arifle_Mk16_STD_FG {
        displayName = "SCAR-L Woodland (Front Grip)";
    };

    class CUP_arifle_Mk16_STD_SFG: CUP_arifle_Mk16_STD {
        displayName = "SCAR-L (Surefire Front Grip)";
    };

    class CUP_arifle_Mk16_STD_SFG_black: CUP_arifle_Mk16_STD_SFG {
        displayName = "SCAR-L Black (Surefire Front Grip)";
    };

    class CUP_arifle_Mk16_STD_SFG_woodland: CUP_arifle_Mk16_STD_SFG {
        displayName = "SCAR-L Woodland (Surefire Front Grip)";
    };

    class CUP_arifle_Mk16_STD_EGLM: CUP_arifle_Mk16_STD {
        displayName = "SCAR-L (EGLM)";
        magazineWell[] = {"CBA_556x45_STANAG", "STANAG_556x45", "STANAG_556x45_Large", "CBA_556x45_SCAR_EGLM"};
    };

    class CUP_arifle_Mk16_STD_EGLM_black: CUP_arifle_Mk16_STD_EGLM {
        displayName = "SCAR-L Black (EGLM)";
    };

    class CUP_arifle_Mk16_STD_EGLM_woodland: CUP_arifle_Mk16_STD_EGLM {
        displayName = "SCAR-L Woodland (EGLM)";
    };

    class CUP_arifle_Mk16_SV: CUP_arifle_SCAR_L_Base {
        displayName = "SCAR-L MR";
    };

    class CUP_arifle_Mk16_SV_black: CUP_arifle_Mk16_SV {
        displayName = "SCAR-L Black MR";
    };

    class CUP_arifle_Mk16_SV_woodland: CUP_arifle_Mk16_SV {
        displayName = "SCAR-L Woodland MR";
    };

    class CUP_arifle_Mk16_CQC: CUP_arifle_SCAR_L_Base {
        displayName = "SCAR-L CQC";
    };

    class CUP_arifle_Mk16_CQC_black: CUP_arifle_Mk16_CQC {
        displayName = "SCAR-L CQC Black";
    };

    class CUP_arifle_Mk16_CQC_woodland: CUP_arifle_Mk16_CQC {
        displayName = "SCAR-L CQC Woodland";
    };

    class CUP_arifle_Mk16_CQC_FG: CUP_arifle_Mk16_CQC {
        displayName = "SCAR-L CQC (Front Grip)";
    };

    class CUP_arifle_Mk16_CQC_FG_black: CUP_arifle_Mk16_CQC_FG {
        displayName = "SCAR-L CQC Black (Front Grip)";
    };

    class CUP_arifle_Mk16_CQC_FG_woodland: CUP_arifle_Mk16_CQC_FG {
        displayName = "SCAR-L CQC Woodland (Front Grip)";
    };

    class CUP_arifle_Mk16_CQC_SFG: CUP_arifle_Mk16_CQC {
        displayName = "SCAR-L CQC (Surefire Front Grip)";
    };

    class CUP_arifle_Mk16_CQC_SFG_black: CUP_arifle_Mk16_CQC_SFG {
        displayName = "SCAR-L CQC Black (Surefire Front Grip)";
    };

    class CUP_arifle_Mk16_CQC_SFG_woodland: CUP_arifle_Mk16_CQC_SFG {
        displayName = "SCAR-L CQC Woodland (Surefire Front Grip)";
    };

    class CUP_arifle_Mk16_CQC_EGLM: CUP_arifle_Mk16_CQC {
        displayName = "SCAR-L CQC (EGLM)";
        magazineWell[] = {"CBA_556x45_STANAG", "STANAG_556x45", "STANAG_556x45_Large", "CBA_556x45_SCAR_EGLM"};
    };

    class CUP_arifle_Mk16_CQC_EGLM_black: CUP_arifle_Mk16_CQC_EGLM {
        displayName = "SCAR-L CQC Black (EGLM)";
    };

    class CUP_arifle_Mk16_CQC_EGLM_woodland: CUP_arifle_Mk16_CQC_EGLM {
        displayName = "SCAR-L CQC Woodland (EGLM)";
    };

    // MK17 Renaming
    class CUP_arifle_Mk17_STD: CUP_arifle_Mk17_Base {
        displayName = "SCAR-H";
    };

    class CUP_arifle_Mk17_STD_black: CUP_arifle_Mk17_STD {
        displayName = "SCAR-H Black";
    };

    class CUP_arifle_Mk17_STD_woodland: CUP_arifle_Mk17_STD {
        displayName = "SCAR-H Woodland";
    };

    class CUP_arifle_Mk17_STD_FG: CUP_arifle_Mk17_STD {
        displayName = "SCAR-H (Front Grip)";
    };

    class CUP_arifle_Mk17_STD_FG_black: CUP_arifle_Mk17_STD_FG {
        displayName = "SCAR-H Black (Front Grip)";
    };

    class CUP_arifle_Mk17_STD_FG_woodland: CUP_arifle_Mk17_STD_FG {
        displayName = "SCAR-H Woodland (Front Grip)";
    };

    class CUP_arifle_Mk17_STD_SFG: CUP_arifle_Mk17_STD_FG {
        displayName = "SCAR-H (Surefire Front Grip)";
    };

    class CUP_arifle_Mk17_STD_SFG_black: CUP_arifle_Mk17_STD_SFG {
        displayName = "SCAR-H Black (Surefire Front Grip)";
    };

    class CUP_arifle_Mk17_STD_SFG_woodland: CUP_arifle_Mk17_STD_SFG {
        displayName = "SCAR-H Woodland (Surefire Front Grip)";
    };

    class CUP_arifle_Mk17_STD_EGLM: CUP_arifle_Mk17_CQC {
        displayName = "SCAR-H (EGLM)";
    };

    class CUP_arifle_Mk17_STD_EGLM_black: CUP_arifle_Mk17_STD_EGLM {
        displayName = "SCAR-H Black (EGLM)";
    };

    class CUP_arifle_Mk17_CQC_EGLM_woodland: CUP_arifle_Mk17_CQC_EGLM {
        displayName = "SCAR-H Woodland (EGLM)";
    };

    class CUP_arifle_Mk20: CUP_arifle_Mk17_Base {
        displayName = "SCAR-H Woodland (EGLM)";
    };

    class CUP_arifle_Mk20: CUP_arifle_Mk17_Base {
        displayName = "SCAR-H MR";
    };

    class CUP_arifle_Mk20_black: CUP_arifle_Mk20 {
        displayName = "SCAR-H Black MR";
    };

    class CUP_arifle_Mk20_woodland: CUP_arifle_Mk20 {
        displayName = "SCAR-H Woodland MR";
    };

    class CUP_arifle_Mk17_CQC: CUP_arifle_Mk17_Base {
        displayName = "SCAR-H CQC";
    };

    class CUP_arifle_Mk17_CQC_Black: CUP_arifle_Mk17_CQC {
        displayName = "SCAR-H Black CQC";
    };

    class CUP_arifle_Mk17_CQC_woodland: CUP_arifle_Mk17_CQC {
        displayName = "SCAR-H Woodland CQC ";
    };

    class CUP_arifle_Mk17_CQC_FG: CUP_arifle_Mk17_CQC {
        displayName = "SCAR-H CQC (Front Grip)";
    };

    class CUP_arifle_Mk17_CQC_FG_black: CUP_arifle_Mk17_CQC_FG {
        displayName = "SCAR-H Black CQC (Front Grip)";
    };

    class CUP_arifle_Mk17_CQC_FG_woodland: CUP_arifle_Mk17_CQC_FG {
        displayName = "SCAR-H Woodland CQC (Front Grip)";
    };

    class CUP_arifle_Mk17_CQC_SFG: CUP_arifle_Mk17_CQC_FG {
        displayName = "SCAR-H CQC (Surefire Front Grip)";
    };

    class CUP_arifle_Mk17_CQC_SFG_black: CUP_arifle_Mk17_CQC_SFG {
        displayName = "SCAR-H Black CQC (Surefire Front Grip)";
    };

    class CUP_arifle_Mk17_CQC_SFG_woodland: CUP_arifle_Mk17_CQC_SFG {
        displayName = "SCAR-H Woodland CQC (Surefire Front Grip)";
    };

    class CUP_arifle_Mk17_CQC_EGLM: CUP_arifle_Mk17_CQC {
        displayName = "SCAR-H CQC (EGLM)";
    };

    class CUP_arifle_Mk17_CQC_EGLM_black: CUP_arifle_Mk17_CQC_EGLM {
        displayName = "SCAR-H Black CQC (EGLM)";
    };

    class CUP_arifle_Mk17_STD_EGLM_woodland: CUP_arifle_Mk17_STD_EGLM {
        displayName = "SCAR-H Woodland CQC (EGLM)";
    };
};
