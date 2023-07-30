class CfgWeapons {
    class bnae_rk95_base;
    class bnae_rk95_virtual: bnae_rk95_base {
        magazineWell[] += {"CBA_762x39_AK"};
    };

    class Pistol_Base_F;
    class bnae_r1_base: Pistol_Base_F {
        magazineWell[] += {"ACPC2_45ACP", "CBA_45ACP_1911"};
    };
};
