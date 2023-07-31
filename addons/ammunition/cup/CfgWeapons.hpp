class CfgWeapons {
    class Pistol_Base_F;
    class CUP_hgun_M17_Coyote: Pistol_Base_F {
        magazineWell[] += {"CBA_9x19_M17"};
    };

    class CUP_hgun_Mk23: Pistol_Base_F {
        magazineWell[] += {"CBA_45ACP_MK23"};
    };

    class CUP_CZ_BREN2_Base;
    class CUP_CZ_BREN2_762_Base: CUP_CZ_BREN2_Base {
        magazineWell[] += {QCLASS(762x39_CZ)};
    };

    class CUP_arifle_AK19_Base: Rifle_Base_F {
        magazineWell[] += {"CBA_556x45_AK"};
    };

    class CUP_Famas_Base: Rifle_Base_F {
        magazineWell[] += {"CBA_556x45_FAMAS"};
    };

    class arifle_TRG20_F;
    class CUP_arifle_Fort221: arifle_TRG20_F {
        magazineWell[] += {"CBA_545x39_Fort"};
    };

    class CUP_arifle_Mk17_STD;
    class CUP_arifle_Mk17_STD_EGLM: CUP_arifle_Mk17_STD {
        magazineWell[] += {"CBA_762x51_SCAR"};
    };

    class CUP_arifle_Mk17_CQC;
    class CUP_arifle_Mk17_CQC_EGLM: CUP_arifle_Mk17_CQC {
        magazineWell[] += {"CBA_762x51_SCAR"};
    };

    class CUP_arifle_ACR_EGLM_BASE_556;
    class CUP_arifle_ACR_EGLM_blk_556: CUP_arifle_ACR_EGLM_BASE_556 {
        magazineWell[] += {"CBA_556x45_STANAG"};
    };
};
