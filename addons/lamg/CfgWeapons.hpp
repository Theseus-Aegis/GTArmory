class CfgWeapons {
    class LMG_Mk200_F;
    class CLASS(LMG_LAMG_F): LMG_Mk200_F {
        author = "TyroneMF";
        scope = 2;
        displayName = CSTRING(LMG_LAMG_F_Display);
        descriptionShort = CSTRING(LMG_LAMG_F_Description);
        magazines[] = {
            QCLASS(100Rnd_65x39_Cased_Box),
            QCLASS(100Rnd_65x39_Yellow_Cased_Box)
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\1st_person_GT_co.paa),
            QPATHTOF(data\body_GT_co.paa),
            "\A3\Weapons_F\Machineguns\M200\data\grip_co"
        };
        magazineWell[] = {};
        baseWeapon = QCLASS(LMG_LAMG_F);
    };
};
