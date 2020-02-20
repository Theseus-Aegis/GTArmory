class CfgMagazines {
    class CA_Magazine;
    class 30Rnd_556x45_Stanag_green;
    class ACE_30Rnd_556x45_Stanag_M995_AP_mag;
    class ACE_30Rnd_556x45_Stanag_Mk262_mag;
    class ACE_30Rnd_556x45_Stanag_Mk318_mag;

    CLASS(8Rnd_P_000): CA_Magazine {
        author = "TyroneMF";
        scope = 2;
        displayName = "8Rnd #00 Magnum Shells";
        displayNameShort = "#00 Magnum";
        ammo = QCLASS(P_12G_000);
        count = 8;
        initSpeed = 385;
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_12gauge_ca.paa";
        descriptionShort = "#00 Magnum";
        mass = 6;
        reloadaction = "CUP_GestureReloadM1014_8Rnd";
    };

    CLASS(8Rnd_S_AP20): CA_Magazine {
        author = "TyroneMF";
        scope = 2;
        displayName = "8Rnd AP-20 Slug";
        displayNameShort = "AP-20 Slug";
        ammo = QCLASS(S_12G_AP20);
        count = 8;
        initSpeed = 510;
        picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_2rnd_12gauge_slugs_CA.paa";
        descriptionShort = "AP-20 Slugs for precise armour penetration";
        mass = 6;
        reloadaction = "CUP_GestureReloadM1014_8Rnd";
    };

    CLASS(6Rnd_P_000): tacgt_8Rnd_P_000 {
        displayName = "6Rnd #00 Magnum Shells";
        count = 6;
    };

    CLASS(6Rnd_S_AP20): tacgt_8Rnd_S_AP20 {
        displayName = "6Rnd AP-20 Slug";
        count = 6;
    };

    CLASS(30Rnd_556x45_M855_PMAG): 30Rnd_556x45_Stanag_green {
        author = "TyroneMF";
        scope = 2;
        lastRoundsTracer = 4;
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_pmag_ca.paa";
        displayName = "5.56 30Rnd PMAG (M855)";
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
        displayName = "5.56 30Rnd PMAG (M995)";
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
        displayName = "5.56 30Rnd PMAG (MK262)";
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
        displayName = "5.56 30Rnd PMAG (MK318)";
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
        displayName = "5.56 30Rnd EMAG (M855)";
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
        displayName = "5.56 30Rnd EMAG (M995)";
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
        displayName = "5.56 30Rnd EMAG (MK262)";
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
        displayName = "5.56 30Rnd EMAG (MK318)";
        model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_EMAG.p3d";
        modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30Rnd_EMAG.p3d";
        modelSpecialIsProxy = 1;
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\emag_co.paa"};
    };

    // Renaming for matching name conventions.
    class 30Rnd_556x45_Stanag: CA_Magazine {
        displayName = "5.56 30Rnd STANAG RT Yellow";
    };

    class 30Rnd_556x45_Stanag_green: CA_Magazine {
        displayName = "5.56 30Rnd STANAG RT Green";
    };

    class 30Rnd_556x45_Stanag_red: CA_Magazine {
        displayName = "5.56 30Rnd STANAG RT Red";
    };

    class 30Rnd_556x45_Stanag_Tracer_Green: CA_Magazine {
        displayName = "5.56 30Rnd STANAG Tracer Green";
    };

    class 30Rnd_556x45_Stanag_Tracer_Red: CA_Magazine {
        displayName = "5.56 30Rnd STANAG Tracer Red";
    };

    class 30Rnd_556x45_Stanag_Tracer_Yellow: CA_Magazine {
        displayName = "5.56 30Rnd STANAG Tracer Yellow";
    };
};
