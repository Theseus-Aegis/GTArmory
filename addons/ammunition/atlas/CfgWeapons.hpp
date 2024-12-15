class CfgWeapons {
    // AUG
    class Rifle_Base_F;
    class arifle_AUG_base_F: Rifle_Base_F {
        magazineWell[] += {"CBA_556x45_STEYR"};
    };

    // FAMAS
    class Atlas_Arifle_Famas_Base;
    class Atlas_ARifle_FamasF1_Base: Atlas_Arifle_Famas_Base {
        magazineWell[] += {"CBA_556x45_FAMAS"};
    };
    class Atlas_Arifle_Famas_M203_base;
    class Atlas_arifle_famasF1_GL_F: Atlas_Arifle_Famas_M203_base {
        magazineWell[] += {"CBA_556x45_FAMAS"};
    };
    class atlas_arifle_FamasG4_Base: Atlas_Arifle_Famas_Base {
        magazineWell[] += {"CBA_65x39_MSBS"};
    };
    class Atlas_Arifle_famasG4_GL_F: Atlas_Arifle_Famas_M203_base {
        magazineWell[] += {"CBA_65x39_MSBS"};
    };

    // Fort-22*
    class arifle_TRG20_F;
    class arifle_FORT651_F: arifle_TRG20_F {
        magazineWell[] += {"CBA_65x39_MSBS"};
    };
    class arifle_TRG21_F;
    class arifle_FORT652_F: arifle_TRG21_F {
        magazineWell[] += {"CBA_65x39_MSBS"};
    };
    class arifle_TRG21_GL_F;
    class arifle_FORT652_GL_F: arifle_TRG21_GL_F {
        magazineWell[] += {"CBA_65x39_MSBS"};
    };

    // G36
    class arifle_G36_base_F: Rifle_Base_F {
        magazineWell[] += {"CBA_65x39_MSBS"};
    };

    // class NCAR-15
    class arifle_AK12_F;
    class A3_Atlas_Weapons_F_Atlas_Rifles_NCAR15: arifle_AK12_F {
        magazineWell[] += {"CBA_580x42_TYPE95", "CBA_580x42_TYPE95_XL"};
    };
    class arifle_AK12_GL_F;
    class arifle_NCAR15_GL_F: arifle_AK12_GL_F {
        magazineWell[] += {"CBA_580x42_TYPE95", "CBA_580x42_TYPE95_XL"};
    };
    class arifle_RPK12_F;
    class arifle_NCAR15_MG_F: arifle_RPK12_F {
        magazineWell[] += {"CBA_580x42_TYPE95", "CBA_580x42_TYPE95_XL"};
    };
    class arifle_AK12U_F;
    class arifle_NCAR15B_F: arifle_AK12U_F {
        magazineWell[] += {"CBA_580x42_TYPE95", "CBA_580x42_TYPE95_XL"};
    };
};
