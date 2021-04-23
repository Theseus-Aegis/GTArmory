class CfgMagazines {
    class 30Rnd_65x39_caseless_msbs_mag;

    class CLASS(MSBS65_Gimmick_M_Red): 30Rnd_65x39_caseless_msbs_mag {
        author = ECSTRING(main,Author);
        scope = 1;
        scopeArsenal = 1;
        displayName = CSTRING(MSBS65_Gimmick_M_Red_Name);
        tracersEvery = 1;
        count = 500;
        ammo = QCLASS(MSBS_Gimmick_A_Red);
    };
    class CLASS(MSBS65_Gimmick_M_Green): CLASS(MSBS65_Gimmick_M_Red) {
        displayName = CSTRING(MSBS65_Gimmick_M_Green_Name);
        ammo = QCLASS(MSBS_Gimmick_A_Green);
    };
};
