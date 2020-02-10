class CfgMagazines {
    class CA_Magazine;

    CLASS(8Rnd_P_000): CA_Magazine {
        author = "TyroneMF";
        scope = 2;
        displayName = "8Rnd #000 Buckshot Shells";
        displayNameShort = "#000 Buckshot Shells";
        ammo = QCLASS(P_12G_000);
        count = 8;
        initSpeed = 385;
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_12gauge_ca.paa";
        descriptionShort = "#000 Buckshot";
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
        displayName = "6Rnd #000 Buckshot Shells";
        count = 6;
    };

    CLASS(6Rnd_S_AP20): tacgt_8Rnd_S_AP20 {
        displayName = "6Rnd AP-20 Slug";
        count = 6;
    };
};
