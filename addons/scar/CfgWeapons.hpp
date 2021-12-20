#define SCARNAME(CLASSNAME,PARENT,NAME) \
    class CLASSNAME: PARENT { \
        displayName = CSTRING(NAME); \
    }

// Includes Mag fix
#define SCARNAMEMF(CLASSNAME,PARENT,NAME) \
    class CLASSNAME: PARENT { \
        displayName = CSTRING(NAME); \
        magazineWell[] = {"CBA_556x45_STANAG", "STANAG_556x45", "STANAG_556x45_Large", "CBA_556x45_SCAR_EGLM"}; \
    }

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
    SCARNAME(CUP_arifle_Mk16_STD,CUP_arifle_SCAR_L_Base,L_Display);
    SCARNAME(CUP_arifle_Mk16_STD_black,CUP_arifle_Mk16_STD,L_Black_Display);
    SCARNAME(CUP_arifle_Mk16_STD_woodland,CUP_arifle_Mk16_STD,L_Woodland_Display);
    SCARNAME(CUP_arifle_Mk16_STD_FG,CUP_arifle_Mk16_STD,L_FG_Display);
    SCARNAME(CUP_arifle_Mk16_STD_FG_black,CUP_arifle_Mk16_STD_FG,L_Black_FG_Display);
    SCARNAME(CUP_arifle_Mk16_STD_FG_woodland,CUP_arifle_Mk16_STD_FG,L_Woodland_FG_Display);
    SCARNAME(CUP_arifle_Mk16_STD_SFG,CUP_arifle_Mk16_STD,L_SFG_Display);
    SCARNAME(CUP_arifle_Mk16_STD_SFG_black,CUP_arifle_Mk16_STD_SFG,L_Black_SFG_Display);
    SCARNAME(CUP_arifle_Mk16_STD_SFG_woodland,CUP_arifle_Mk16_STD_SFG,L_Woodland_SFG_Display);
    SCARNAMEMF(CUP_arifle_Mk16_STD_EGLM,CUP_arifle_Mk16_STD,L_EGLM_Display);
    SCARNAME(CUP_arifle_Mk16_STD_EGLM_black,CUP_arifle_Mk16_STD_EGLM,L_Black_EGLM_Display);
    SCARNAME(CUP_arifle_Mk16_STD_EGLM_woodland,CUP_arifle_Mk16_STD_EGLM,L_Woodland_EGLM_Display);
    SCARNAME(CUP_arifle_Mk16_SV,CUP_arifle_SCAR_L_Base,L_MR_Display);
    SCARNAME(CUP_arifle_Mk16_SV_black,CUP_arifle_Mk16_SV,L_Black_MR_Display);
    SCARNAME(CUP_arifle_Mk16_SV_woodland,CUP_arifle_Mk16_SV,L_Woodland_MR_Display);
    SCARNAME(CUP_arifle_Mk16_CQC,CUP_arifle_SCAR_L_Base,L_CQC_Display);
    SCARNAME(CUP_arifle_Mk16_CQC_black,CUP_arifle_Mk16_CQC,L_Black_CQC_Display);
    SCARNAME(CUP_arifle_Mk16_CQC_woodland,CUP_arifle_Mk16_CQC,L_Woodland_CQC_Display);
    SCARNAME(CUP_arifle_Mk16_CQC_FG,CUP_arifle_Mk16_CQC,L_CQC_FG_Display);
    SCARNAME(CUP_arifle_Mk16_CQC_AFG,CUP_arifle_Mk16_CQC_FG,L_CQC_AFG_Display);
    SCARNAME(CUP_arifle_Mk16_CQC_AFG_black,CUP_arifle_Mk16_CQC_AFG,L_Black_CQC_AFG_Display);
    SCARNAME(CUP_arifle_Mk16_CQC_AFG_woodland,CUP_arifle_Mk16_CQC_AFG,L_Woodland_CQC_AFG);
    SCARNAME(CUP_arifle_Mk16_STD_AFG,CUP_arifle_Mk16_STD_FG,L_AFG_Display);
    SCARNAME(CUP_arifle_Mk16_STD_AFG_black,CUP_arifle_Mk16_STD_AFG,L_Black_AFG_Display);
    SCARNAME(CUP_arifle_Mk16_STD_AFG_woodland,CUP_arifle_Mk16_STD_AFG,L_Woodland_AFG_Display);
    SCARNAME(CUP_arifle_Mk16_CQC_FG_black,CUP_arifle_Mk16_CQC_FG,L_Black_CQC_FG_Display);
    SCARNAME(CUP_arifle_Mk16_CQC_FG_woodland,CUP_arifle_Mk16_CQC_FG,L_Woodland_CQC_FG_Display);
    SCARNAME(CUP_arifle_Mk16_CQC_SFG,CUP_arifle_Mk16_CQC,L_CQC_SFG_Display);
    SCARNAME(CUP_arifle_Mk16_CQC_SFG_black,CUP_arifle_Mk16_CQC_SFG,L_Black_CQC_SFG_Display);
    SCARNAME(CUP_arifle_Mk16_CQC_SFG_woodland,CUP_arifle_Mk16_CQC_SFG,L_Woodland_CQC_SFG_Display);
    SCARNAMEMF(CUP_arifle_Mk16_CQC_EGLM,CUP_arifle_Mk16_CQC,L_CQC_EGLM_Display);
    SCARNAME(CUP_arifle_Mk16_CQC_EGLM_black,CUP_arifle_Mk16_CQC_EGLM,L_Black_CQC_EGLM_Display);
    SCARNAME(CUP_arifle_Mk16_CQC_EGLM_woodland,CUP_arifle_Mk16_CQC_EGLM,L_Woodland_CQC_EGLM_Display);

    // MK17 Renaming
    SCARNAME(CUP_arifle_Mk17_STD,CUP_arifle_Mk17_Base,H_Display);
    SCARNAME(CUP_arifle_Mk17_STD_black,CUP_arifle_Mk17_STD,H_Black_Display);
    SCARNAME(CUP_arifle_Mk17_STD_woodland,CUP_arifle_Mk17_STD,H_Woodland_Display);
    SCARNAME(CUP_arifle_Mk17_STD_FG,CUP_arifle_Mk17_STD,H_FG_Display);
    SCARNAME(CUP_arifle_Mk17_STD_FG_black,CUP_arifle_Mk17_STD_FG,H_Black_FG_Display);
    SCARNAME(CUP_arifle_Mk17_STD_FG_woodland,CUP_arifle_Mk17_STD_FG,H_Woodland_FG_Display);
    SCARNAME(CUP_arifle_Mk17_STD_AFG,CUP_arifle_Mk17_STD_FG,H_AFG_Display);
    SCARNAME(CUP_arifle_Mk17_STD_AFG_black,CUP_arifle_Mk17_STD_AFG,H_Black_AFG_Display);
    SCARNAME(CUP_arifle_Mk17_STD_AFG_woodland,CUP_arifle_Mk17_STD_AFG,H_Woodland_AFG_Display);
    SCARNAME(CUP_arifle_Mk17_STD_SFG,CUP_arifle_Mk17_STD_FG,H_SFG_Display);
    SCARNAME(CUP_arifle_Mk17_STD_SFG_black,CUP_arifle_Mk17_STD_SFG,H_Black_SFG_Display);
    SCARNAME(CUP_arifle_Mk17_STD_SFG_woodland,CUP_arifle_Mk17_STD_SFG,H_Woodland_SFG_Display);
    SCARNAME(CUP_arifle_Mk17_STD_EGLM,CUP_arifle_Mk17_STD,H_EGLM_Display);
    SCARNAME(CUP_arifle_Mk17_STD_EGLM_black,CUP_arifle_Mk17_STD_EGLM,H_Black_EGLM_Display);
    SCARNAME(CUP_arifle_Mk17_STD_EGLM_woodland,CUP_arifle_Mk17_STD_EGLM,H_Woodland_EGLM_Display);
    SCARNAME(CUP_arifle_Mk20,CUP_arifle_Mk17_Base,H_MR_Display);
    SCARNAME(CUP_arifle_Mk20_black,CUP_arifle_Mk20,H_Black_MR_Display);
    SCARNAME(CUP_arifle_Mk20_woodland,CUP_arifle_Mk20,H_Woodland_MR_Display);
    SCARNAME(CUP_arifle_Mk17_CQC,CUP_arifle_Mk17_Base,H_CQC_Display);
    SCARNAME(CUP_arifle_Mk17_CQC_Black,CUP_arifle_Mk17_CQC,H_Black_CQC_Display);
    SCARNAME(CUP_arifle_Mk17_CQC_woodland,CUP_arifle_Mk17_CQC,H_Woodland_CQC_Display);
    SCARNAME(CUP_arifle_Mk17_CQC_FG,CUP_arifle_Mk17_CQC,H_CQC_FG_Display);
    SCARNAME(CUP_arifle_Mk17_CQC_FG_black,CUP_arifle_Mk17_CQC_FG,H_Black_CQC_FG_Display);
    SCARNAME(CUP_arifle_Mk17_CQC_FG_woodland,CUP_arifle_Mk17_CQC_FG,H_Woodland_CQC_FG_Display);
    SCARNAME(CUP_arifle_Mk17_CQC_AFG,CUP_arifle_Mk17_CQC_FG,H_CQC_AFG_Display);
    SCARNAME(CUP_arifle_Mk17_CQC_AFG_black,CUP_arifle_Mk17_CQC_AFG,H_CQC_AFG_Black_Display);
    SCARNAME(CUP_arifle_Mk17_CQC_AFG_woodland,CUP_arifle_Mk17_CQC_AFG,H_CQC_AFG_Woodland_Display);
    SCARNAME(CUP_arifle_Mk17_CQC_SFG,CUP_arifle_Mk17_CQC_FG,H_CQC_SFG_Display);
    SCARNAME(CUP_arifle_Mk17_CQC_SFG_black,CUP_arifle_Mk17_CQC_SFG,H_Black_CQC_SFG_Display);
    SCARNAME(CUP_arifle_Mk17_CQC_SFG_woodland,CUP_arifle_Mk17_CQC_SFG,H_Woodland_CQC_SFG_Display);
    SCARNAME(CUP_arifle_Mk17_CQC_EGLM,CUP_arifle_Mk17_CQC,H_CQC_EGLM_Display);
    SCARNAME(CUP_arifle_Mk17_CQC_EGLM_black,CUP_arifle_Mk17_CQC_EGLM,H_Black_CQC_EGLM_Display);
    SCARNAME(CUP_arifle_Mk17_CQC_EGLM_woodland,CUP_arifle_Mk17_CQC_EGLM,H_Woodland_CQC_EGLM_Display);
};
