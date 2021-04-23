#define MACRO_SOUNDSETS \
            class Single: Mode_SemiAuto { \
                class BaseSoundModeType; \
                class StandardSound: BaseSoundModeType { \
                    soundSetShot[] = {"50cal_Type115_Shot_SoundSet", "50cal_Type115_Tail_SoundSet", "50cal_Type115_interiorTail_SoundSet"}; \
                }; \
                class SilencedSound: BaseSoundModeType { \
                    SoundSetShot[] = {"DMR05_silencerShot_SoundSet", "DMR05_silencerTail_SoundSet", "DMR05_silencerInteriorTail_SoundSet"}; \
                }; \
            }

class CfgWeapons {
    class CUP_arifle_SBR_black;
    class CUP_arifle_SBR_od;

    class CLASS(SBR_458_Socom_Tan): CUP_arifle_SBR_black {
        author = ECSTRING(main,Author);
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
        MACRO_SOUNDSETS;
    };

    class CLASS(SBR_458_Socom_OD): CUP_arifle_SBR_od {
        author = ECSTRING(main,Author);
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
        MACRO_SOUNDSETS;
    };
};
