class CfgMagazines {
    class CA_Magazine;
    class CUP_TimeBomb_M;

    // AT-15 Anti-Tank Mine
    class CUP_Mine_M: CUP_TimeBomb_M {
        scope = 1;
    };

    // TM46 Anti-Tank Mine
    class CUP_MineE_M: CUP_TimeBomb_M {
        scope = 1;
    };

    // Satchel Charge
    class CUP_PipeBomb_M: CUP_TimeBomb_M {
        scope = 1;
    };

    // Small IED (Urban)
    class CUP_IED_V1_M: CUP_Mine_M {
        scope = 1;
    };

    // Large IED (Urban)
    class CUP_IED_V2_M: CUP_IED_V1_M {
        scope = 1;
    };

    // Small IED (Dug-in)
    class CUP_IED_V3_M: CUP_IED_V1_M {
        scope = 1;
    };

    // Large IED (Dug-in)
    class CUP_IED_V4_M: CUP_IED_V1_M {
        scope = 1;
    };
};
