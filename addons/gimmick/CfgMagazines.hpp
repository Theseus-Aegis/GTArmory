class CfgMagazines {
    class 30Rnd_65x39_caseless_msbs_mag;

    class CLASS(MSBS65_Gimmick_M_Red): 30Rnd_65x39_caseless_msbs_mag {
        author = "Tyrone";
        scope = 2;
        scopeArsenal = 2;
        displayName = "MSBS Y33T Magazine Red";
        tracersEvery = 1;
        count = 200;
        ammo = QCLASS(MSBS_Gimmick_A_Red);
    };
    class CLASS(MSBS65_Gimmick_M_Green): CLASS(MSBS65_Gimmick_M_Red) {
        displayName = "MSBS Y33T Magazine Green";
        ammo = QCLASS(MSBS_Gimmick_A_Green);
    };
};