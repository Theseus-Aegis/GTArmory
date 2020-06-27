class CfgMagazines {
    class 30Rnd_556x45_Stanag_green;

    class CLASS(10Rnd_458_Socom_PMAG): 30Rnd_556x45_Stanag_green {
        author = "TyroneMF";
        scope = 2;
        ammo = QCLASS(458_Socom);
        lastRoundsTracer = 2;
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_pmag_ca.paa";
        displayName = CSTRING(10Rnd_458_Socom_PMAG_Display);
        mass = 8;
        initSpeed = 510;
        count = 10;
        model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30rnd_pmag_qp.p3d";
        modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30rnd_pmag_qp.p3d";
        modelSpecialIsProxy = 1;
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\pmag_black_co.paa"};
    };
};
