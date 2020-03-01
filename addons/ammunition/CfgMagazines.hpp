class CfgMagazines {
    class CA_Magazine;
    class ACE_30Rnd_556x45_Stanag_M995_AP_mag;
    class ACE_30Rnd_556x45_Stanag_Mk262_mag;
    class ACE_30Rnd_556x45_Stanag_Mk318_mag;

    // Renaming for matching name conventions.
    class 30Rnd_556x45_Stanag: CA_Magazine {
        displayName = "$STR_Ammunition_30Rnd_556x45_Stanag_Display";
    };

    class 30Rnd_556x45_Stanag_green: 30Rnd_556x45_Stanag {
        displayName = "$STR_Ammunition_30Rnd_556x45_Stanag_green_Display";
    };

    class 30Rnd_556x45_Stanag_red: 30Rnd_556x45_Stanag {
        displayName = "$STR_Ammunition_30Rnd_556x45_Stanag_red_Display";
    };

    class 30Rnd_556x45_Stanag_Tracer_Green: 30Rnd_556x45_Stanag {
        displayName = "$STR_Ammunition_30Rnd_556x45_Stanag_Tracer_Green_Display";
    };

    class 30Rnd_556x45_Stanag_Tracer_Red: 30Rnd_556x45_Stanag {
        displayName = "$STR_Ammunition_30Rnd_556x45_Stanag_Tracer_Red_Display";
    };

    class 30Rnd_556x45_Stanag_Tracer_Yellow: 30Rnd_556x45_Stanag {
        displayName = "$STR_Ammunition_30Rnd_556x45_Stanag_Tracer_Yellow_Display";
    };

    CLASS(8Rnd_P_000): CA_Magazine {
        author = "TyroneMF";
        scope = 2;
        displayName = "$STR_Ammunition_TACGT_8Rnd_P_000_Display";
        displayNameShort = "$STR_Ammunition_TACGT_8Rnd_P_000_Display_Short";
        ammo = QCLASS(P_12G_000);
        count = 8;
        initSpeed = 385;
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_12gauge_ca.paa";
        descriptionShort = "$STR_Ammunition_TACGT_8Rnd_P_000_Description";
        mass = 8;
        reloadaction = "CUP_GestureReloadM1014_8Rnd";
    };

    CLASS(8Rnd_S_AP20): CA_Magazine {
        author = "TyroneMF";
        scope = 2;
        displayName = "$STR_Ammunition_TACGT_8Rnd_S_AP20_Display";
        displayNameShort = "$STR_Ammunition_TACGT_8Rnd_S_AP20_Display_Short";
        ammo = QCLASS(S_12G_AP20);
        count = 8;
        initSpeed = 510;
        picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_2rnd_12gauge_slugs_CA.paa";
        descriptionShort = "$STR_Ammunition_TACGT_8Rnd_S_AP20_Description";
        mass = 8;
        reloadaction = "CUP_GestureReloadM1014_8Rnd";
    };

    CLASS(6Rnd_P_000): tacgt_8Rnd_P_000 {
        displayName = "$STR_Ammunition_TACGT_6Rnd_P_000_Display";
        displayNameShort = "$STR_Ammunition_TACGT_8Rnd_P_000_Display_Short";
        count = 6;
        mass = 6;
    };

    CLASS(6Rnd_S_AP20): tacgt_8Rnd_S_AP20 {
        displayName = "$STR_Ammunition_TACGT_6Rnd_S_AP20_Display";
        displayNameShort = "$STR_Ammunition_TACGT_8Rnd_S_AP20_Display_Short";
        count = 6;
        mass = 6;
    };

    CLASS(30Rnd_556x45_M855_PMAG): 30Rnd_556x45_Stanag_green {
        author = "TyroneMF";
        scope = 2;
        lastRoundsTracer = 4;
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_pmag_ca.paa";
        displayName = "$STR_Ammunition_TACGT_30Rnd_556x45_M855_PMAG_Display";
        mass = 10;
        model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30rnd_pmag_qp.p3d";
        modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30rnd_pmag_qp.p3d";
        modelSpecialIsProxy = 1;
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\pmag_black_co.paa"};
    };

    CLASS(30Rnd_556x45_M995_PMAG): ACE_30Rnd_556x45_Stanag_M995_AP_mag {
        author = "TyroneMF";
        scope = 2;
        lastRoundsTracer = 2;
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_pmag_ca.paa";
        displayName = "$STR_Ammunition_TACGT_30Rnd_556x45_M995_PMAG_Display";
        mass = 10;
        model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30rnd_pmag_qp.p3d";
        modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30rnd_pmag_qp.p3d";
        modelSpecialIsProxy = 1;
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\pmag_black_co.paa"};
    };

    CLASS(30Rnd_556x45_MK262_PMAG): ACE_30Rnd_556x45_Stanag_Mk262_mag {
        author = "TyroneMF";
        scope = 2;
        lastRoundsTracer = 2;
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_pmag_ca.paa";
        displayName = "$STR_Ammunition_TACGT_30Rnd_556x45_MK262_PMAG_Display";
        mass = 10;
        model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30rnd_pmag_qp.p3d";
        modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30rnd_pmag_qp.p3d";
        modelSpecialIsProxy = 1;
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\pmag_black_co.paa"};
    };

    CLASS(30Rnd_556x45_MK318_PMAG): ACE_30Rnd_556x45_Stanag_Mk318_mag {
        author = "TyroneMF";
        scope = 2;
        lastRoundsTracer = 2;
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_pmag_ca.paa";
        displayName = "$STR_Ammunition_TACGT_30Rnd_556x45_MK318_PMAG_Display";
        mass = 10;
        model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30rnd_pmag_qp.p3d";
        modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30rnd_pmag_qp.p3d";
        modelSpecialIsProxy = 1;
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\pmag_black_co.paa"};
    };

    CLASS(30Rnd_556x45_M855_EMAG): 30Rnd_556x45_Stanag_green {
        author = "TyroneMF";
        scope = 2;
        lastRoundsTracer = 4;
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_emag_ca.paa";
        displayName = "$STR_Ammunition_TACGT_30Rnd_556x45_M855_EMAG_Display";
        mass = 10;
        model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_EMAG.p3d";
        modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30Rnd_EMAG.p3d";
        modelSpecialIsProxy = 1;
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\emag_co.paa"};
    };

    CLASS(30Rnd_556x45_M995_EMAG): ACE_30Rnd_556x45_Stanag_M995_AP_mag {
        author = "TyroneMF";
        scope = 2;
        lastRoundsTracer = 2;
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_emag_ca.paa";
        displayName = "$STR_Ammunition_TACGT_30Rnd_556x45_M995_EMAG_Display";
        mass = 10;
        model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_EMAG.p3d";
        modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30Rnd_EMAG.p3d";
        modelSpecialIsProxy = 1;
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\emag_co.paa"};
    };

    CLASS(30Rnd_556X45_MK262_EMAG): ACE_30Rnd_556x45_Stanag_Mk262_mag {
        author = "TyroneMF";
        scope = 2;
        lastRoundsTracer = 2;
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_emag_ca.paa";
        displayName = "$STR_Ammunition_TACGT_30Rnd_556X45_MK262_EMAG_Display";
        mass = 10;
        model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_EMAG.p3d";
        modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30Rnd_EMAG.p3d";
        modelSpecialIsProxy = 1;
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\emag_co.paa"};
    };

    CLASS(30Rnd_556X45_MK318_EMAG): ACE_30Rnd_556x45_Stanag_Mk318_mag {
        author = "TyroneMF";
        scope = 2;
        lastRoundsTracer = 2;
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_emag_ca.paa";
        displayName = "$STR_Ammunition_TACGT_30Rnd_556X45_MK318_EMAG_Display";
        mass = 10;
        model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_EMAG.p3d";
        modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30Rnd_EMAG.p3d";
        modelSpecialIsProxy = 1;
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\emag_co.paa"};
    };
};
