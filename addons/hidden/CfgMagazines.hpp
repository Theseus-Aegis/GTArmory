class CfgMagazines {
    // Thrown Grenades - Perform exactly the same as M67s.
    class HandGrenade;
    class CUP_HandGrenade_M67: HandGrenade {
        scope = 1;
    };
    class CUP_HandGrenade_L109A1_HE: CUP_HandGrenade_M67 {
        scope = 1;
    };
    class CUP_HandGrenade_L109A2_HE: CUP_HandGrenade_M67 {
        scope = 1;
    };

    // Placed Explosives
    class CUP_TimeBomb_M;
    class CUP_Mine_M: CUP_TimeBomb_M {
        scope = 1;
    };
    class CUP_MineE_M: CUP_TimeBomb_M {
        scope = 1;
    };
    class CUP_PipeBomb_M: CUP_TimeBomb_M {
        scope = 1;
    };
    class CUP_IED_V1_M: CUP_Mine_M {
        scope = 1;
    };
    class CUP_IED_V2_M: CUP_IED_V1_M {
        scope = 1;
    };
    class CUP_IED_V3_M: CUP_IED_V1_M {
        scope = 1;
    };
    class CUP_IED_V4_M: CUP_IED_V1_M {
        scope = 1;
    };
};
