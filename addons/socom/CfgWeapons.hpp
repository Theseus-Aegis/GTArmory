class CfgWeapons {
    class CUP_arifle_SBR_black;
    class CUP_arifle_SBR_od;

    class CLASS(SBR_458_Socom_Tan): CUP_arifle_SBR_black {
        author = "TyroneMF";
        scope = 2;
        scopeArsenal = 2;
        recoil = "recoil_dmr_02";
        displayName = CSTRING(SBR_458_Socom_Tan_Display);
        descriptionShort = CSTRING(SBR_458_Socom_Description);
        magazines[] = {
            QCLASS(10Rnd_458_Socom_PMAG),
            QCLASS(10Rnd_458_Socom_PMAG_OD),
            QCLASS(10Rnd_458_Socom_PMAG_Tan)
        };
        magazineWell[] = {QCLASS(458_Socom)};
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {SOCOM_SOUND_SET};
            };
            class SilencedSound: BaseSoundModeType {
                SoundSetShot[] = {SOCOM_S_SOUND_SET};
            };
        };
    };

    class CLASS(SBR_458_Socom_OD): CUP_arifle_SBR_od {
        author = "TyroneMF";
        scope = 2;
        scopeArsenal = 2;
        recoil = "recoil_dmr_02";
        displayName = CSTRING(SBR_458_Socom_OD_Display);
        descriptionShort = CSTRING(SBR_458_Socom_Description);
        magazines[] = {
            QCLASS(10Rnd_458_Socom_PMAG),
            QCLASS(10Rnd_458_Socom_PMAG_OD),
            QCLASS(10Rnd_458_Socom_PMAG_Tan)
        };
        magazineWell[] = {QCLASS(458_Socom)};
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {SOCOM_SOUND_SET};
            };
            class SilencedSound: BaseSoundModeType {
                SoundSetShot[] = {SOCOM_S_SOUND_SET};
            };
        }
    };
};
