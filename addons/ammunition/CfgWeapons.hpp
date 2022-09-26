class CfgWeapons {

    // Any missing Magazine Wells are added here.
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
        magazineWell[] = {QCLASS(762x39_CZ)};
    };

    class CUP_arifle_AK19_Base: Rifle_Base_F {
        magazineWell[] = {"CBA_556x45_AK"};
    };

    class CUP_Famas_Base: Rifle_Base_F {
        magazineWell[] = {"CBA_556x45_FAMAS"};
    };
};
