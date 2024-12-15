class CfgWeapons {
    class Rifle_Base_F;

    // AKM74
    class arifle_AKM_F;
    class Aegis_arifle_AKM74_F: arifle_AKM_F {
        magazineWell[] += {"CBA_545x39_AK"};
    };

    // L22A3
    class arifle_SA80_base_F: Rifle_Base_F {
        magazineWell[] += {"CBA_65x39_MX"};
    };

    // M110 CBA_762x51_SR25
    class Aegis_arifle_SR25_base_F: Rifle_Base_F {
        magazineWell[] += {"CBA_762x51_SR25"};
    };

    // M16
    class Aegis_arifle_M16A4_base_F: Rifle_Base_F {
        magazineWell[] += {"CBA_556x45_STANAG"};
    };

    // M4A1
    class Aegis_arifle_M4A1_base_F: Rifle_Base_F {
        magazineWell[] += {"CBA_556x45_STANAG"};
    };

    // SCAR-L
    class arifle_SCAR_L_base_F: Rifle_Base_F {
        magazineWell[] += {"CBA_556x45_STANAG"};
    };

    // SCAR-H
    class arifle_SCAR_base_F: Rifle_Base_F {
        magazineWell[] += {"CBA_762x51_SCAR"};
    };

    // RPK
    class arifle_RPK_base_F;
    class arifle_RPK_F: arifle_RPK_base_F {
        magazineWell[] += {"CBA_762x39_RPK"};
    };
};
