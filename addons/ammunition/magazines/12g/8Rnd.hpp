class CLASS(8Rnd_P_000): CA_Magazine {
    author = ECSTRING(main,Author);
    scope = 2;
    displayName = "8Rnd #00 Magnum Shells";
    displayNameShort = "#00 Magnum Shells";
    descriptionShort = "#00 Magnum";
    ammo = QCLASS(P_12G_000);
    count = 8;
    initSpeed = 385;
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_12gauge_ca.paa";
    mass = 8;
    reloadaction = "CUP_GestureReloadM1014_8Rnd";
};

class CLASS(8Rnd_S_AP20): CA_Magazine {
    author = ECSTRING(main,Author);
    scope = 2;
    displayName = "8Rnd AP-20 Slug";
    displayNameShort = "AP-20 Slug";
    descriptionShort = "AP-20 Slugs for precise armour penetration";
    ammo = QCLASS(S_12G_AP20);
    count = 8;
    initSpeed = 510;
    picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_2rnd_12gauge_slugs_CA.paa";
    mass = 8;
    reloadaction = "CUP_GestureReloadM1014_8Rnd";
};
