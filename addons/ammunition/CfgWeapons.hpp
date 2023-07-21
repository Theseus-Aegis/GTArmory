class CfgWeapons {

    // Any missing Magazine Wells are added here.
    class pdw2000_base_F;
    class hgun_PDW2000_F: pdw2000_base_F {
        magazineWell[] = {"CBA_9x19_ScorpionEvo3"};
    };

    class Pistol_Base_F;
    class hgun_P07_F: Pistol_Base_F {
        magazineWell[] += {"CBA_9x19_Walther"};
    };

    class CUP_hgun_M17_Coyote: Pistol_Base_F {
        magazineWell[] = {"CBA_9x19_M17"};
    };

    class hgun_Pistol_heavy_01_F: Pistol_Base_F {
        magazineWell[] += {"CBA_45ACP_FNX45"};
    };

    class hgun_Rook40_F: Pistol_Base_F {
        magazineWell[] += {"CBA_9x19_Walther"};
    };

    class CUP_hgun_Mk23: Pistol_Base_F {
        magazineWell[] = {"CBA_45ACP_MK23"};
    };

    class Rifle_Long_Base_F;
    class DMR_07_base_F: Rifle_Long_Base_F {
        magazineWell[] = {"CBA_65x39_QBU"};
    };

    class Rifle_Base_F;
    class arifle_MSBS65_base_F: Rifle_Base_F {
        magazineWell[] += {"CBA_65x39_MSBS"};
    };

    class CUP_CZ_BREN2_Base;
    class CUP_CZ_BREN2_762_Base: CUP_CZ_BREN2_Base {
        magazineWell[] += {QCLASS(762x39_CZ)};
    };

    class CUP_arifle_AK19_Base: Rifle_Base_F {
        magazineWell[] = {"CBA_556x45_AK"};
    };

    class CUP_Famas_Base: Rifle_Base_F {
        magazineWell[] = {"CBA_556x45_FAMAS"};
    };

    class arifle_TRG20_F;
    class CUP_arifle_Fort221: arifle_TRG20_F {
        magazineWell[] = {"CBA_545x39_Fort"};
    };

    class bnae_rk95_base;
    class bnae_rk95_virtual: bnae_rk95_base {
        magazineWell[] = {"CBA_762x39_AK"};
    };

    class CUP_arifle_Mk17_STD;
    class CUP_arifle_Mk17_STD_EGLM: CUP_arifle_Mk17_STD {
        magazineWell[] = {"CBA_762x51_SCAR"};
    };

    class CUP_arifle_Mk17_CQC;
    class CUP_arifle_Mk17_CQC_EGLM: CUP_arifle_Mk17_CQC {
        magazineWell[] = {"CBA_762x51_SCAR"};
    };

    class CUP_arifle_ACR_EGLM_BASE_556;
    class CUP_arifle_ACR_EGLM_blk_556: CUP_arifle_ACR_EGLM_BASE_556 {
        magazineWell[] += {"CBA_556x45_STANAG"};
    };

    class bnae_r1_base: Pistol_Base_F {
        magazineWell[] = {"ACPC2_45ACP", "CBA_45ACP_1911"};
    };

    // Western Sahara Weapons
    class arifle_Galat_base_lxWS;
    class arifle_Galat_lxWS: arifle_Galat_base_lxWS {
        magazineWell[] += {"CBA_762x39_AK"};
    };

    class arifle_SPAR_01_base_F;
    class arifle_XMS_Base_lxWS: arifle_SPAR_01_base_F {
        magazineWell[] += {"CBA_556x45_STANAG"};
    };
};
