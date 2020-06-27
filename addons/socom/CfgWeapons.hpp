class CfgWeapons {
    class CUP_arifle_SBR_black;

    class CLASS(SBR_458_Socom_Tan): CUP_arifle_SBR_black {
        author = "TyroneMF";
        scope = 2;
        scopeArsenal = 2;
        displayName = CSTRING(SBR_458_Socom_Tan_Display);
        magazines[] = {QCLASS(10Rnd_458_Socom_PMAG)};
        magazineWell[] = {QCLASS(458_socom)};
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {"50cal_Type115_Shot_SoundSet", "50cal_Type115_Tail_SoundSet", "50cal_Type115_interiorTail_SoundSet"};
            };
            class SilencedSound: BaseSoundModeType {
                SoundSetShot[] = {"DMR05_silencerShot_SoundSet", "DMR05_silencerTail_SoundSet", "DMR05_silencerInteriorTail_SoundSet"};
            };
        };
    };
};
