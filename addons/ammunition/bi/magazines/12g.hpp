class CLASS(2Rnd_P_000): 2Rnd_12Gauge_Pellets {
    MACRO_SCOPE;
    displayName = "2Rnd (Magnum)";
    displayNameShort = "#00 Magnum";
    descriptionShort = "#00 Magnum Shells";
    ammo = QCLASS(P_12G_000);
    mass = 0.6;
};

// 8Rnd M1014
class CLASS(8Rnd_P_000): CA_Magazine {
    author = ECSTRING(main,Author);
    scope = 2;
    displayName = "8Rnd M1014 (Magnum)";
    displayNameShort = "#00 Magnum";
    descriptionShort = "#00 Magnum";
    ammo = QCLASS(P_12G_000);
    count = 8;
    initSpeed = 385;
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_12gauge_ca.paa";
    mass = 8;
    reloadaction = "CUP_GestureReloadM1014_8Rnd";
};

class CLASS(8Rnd_S_AP20): CA_Magazine {
    MACRO_SCOPE;
    ammo = QCLASS(S_12G_AP20);
    displayName = "8Rnd M1014 (Slug)";
    displayNameShort = "AP-20";
    descriptionShort = "AP-20 Slug";
    count = 8;
    picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_2rnd_12gauge_slugs_CA.paa";
    mass = 8;
    reloadaction = "CUP_GestureReloadM1014_8Rnd";
};

class CLASS(8Rnd_Smoke_M1014): CLASS(8Rnd_S_AP20) {
    ammo = "B_12gauge_Smoke_Cartridge_lxWS";
    displayName = "8Rnd M1014 (Smoke)";
    displayNameShort = "Smoke Screen";
    descriptionShort = "Smoke Shell";
};

// 6Rnd M1014
class CLASS(6Rnd_P_000): CLASS(8Rnd_P_000) {
    displayName = "6Rnd M1014 (Magnum)";
    displayNameShort = "#00 Magnum";
    descriptionShort = "#00 Magnum Shells";
    count = 6;
    mass = 6;
};

class CLASS(6Rnd_S_AP20): CLASS(8Rnd_S_AP20) {
    displayName = "6Rnd M1014 (Slug)";
    displayNameShort = "AP-20";
    descriptionShort = "AP-20 Slug Round";
    count = 6;
    mass = 6;
};

class CLASS(6Rnd_Smoke_M1014): CLASS(8Rnd_Smoke_M1014) {
    displayName = "6Rnd M1014 (Smoke)";
    displayNameShort = "Smoke Screen";
    descriptionShort = "Smoke Shell";
    count = 6;
    mass = 6;
};

// 6Rnd MSBS GROT
class CLASS(6Rnd_P_UGL): 6Rnd_12Gauge_Pellets {
    MACRO_SCOPE;
    ammo = QCLASS(P_12G_000);
    displayName = "6Rnd MSBS (Magnum)";
    displayNameShort = "#00 Magnum";
    descriptionShort = "#00 Magnum Shells";
};

class CLASS(6Rnd_S_UGL): 6Rnd_12Gauge_Slug {
    MACRO_SCOPE;
    ammo = QCLASS(S_12G_AP20);
    displayName = "6Rnd MSBS (Slug)";
    displayNameShort = "AP-20";
    descriptionShort = "AP-20 Slug";
};

class CLASS(6Rnd_Smoke_UGL): CLASS(6Rnd_S_UGL) {
    ammo = "B_12gauge_Smoke_Cartridge_lxWS";
    displayName = "6Rnd MSBS (Smoke)";
    displayNameShort = "Smoke Screen";
    descriptionShort = "Smoke Shell";
};
