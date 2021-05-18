class CfgWeapons {
    class LMG_RCWS;
    class MGun;

    class LMG_Minigun: LMG_RCWS {
        class manual: MGun {
            class StandardSound {
                soundsetshot[] = {"CUP_M134_Shot_SoundSet", "CUP_mmg1_Tail_SoundSet"};
            };
        };
    };
};
