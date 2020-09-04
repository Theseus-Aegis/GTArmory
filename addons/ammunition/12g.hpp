class CLASS(2Rnd_P_000): 2Rnd_12Gauge_Pellets {
    author = "TyroneMF";
    scope = 2;
    displayName = CSTRING(2Rnd_P_000_Name);
    displayNameShort = CSTRING(8Rnd_P_000_Name_Short);
    descriptionShort = CSTRING(8Rnd_P_000_Description);
    ammo = QCLASS(P_12G_000);
    mass = 0.6;
};

class CLASS(8Rnd_P_000): CA_Magazine {
    author = "TyroneMF";
    scope = 2;
    displayName = CSTRING(8Rnd_P_000_Name);
    displayNameShort = CSTRING(8Rnd_P_000_Name_Short);
    ammo = QCLASS(P_12G_000);
    count = 8;
    initSpeed = 385;
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_12gauge_ca.paa";
    descriptionShort = CSTRING(8Rnd_P_000_Description);
    mass = 8;
    reloadaction = "CUP_GestureReloadM1014_8Rnd";
};

class CLASS(8Rnd_S_AP20): CA_Magazine {
    author = "TyroneMF";
    scope = 2;
    displayName = CSTRING(8Rnd_S_AP20_Name);
    displayNameShort = CSTRING(8Rnd_S_AP20_Name_Short);
    ammo = QCLASS(S_12G_AP20);
    count = 8;
    initSpeed = 510;
    picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_2rnd_12gauge_slugs_CA.paa";
    descriptionShort = CSTRING(8Rnd_S_AP20_Description);
    mass = 8;
    reloadaction = "CUP_GestureReloadM1014_8Rnd";
};

class CLASS(6Rnd_P_000): CLASS(8Rnd_P_000) {
    displayName = CSTRING(6Rnd_P_000_Name);
    displayNameShort = CSTRING(8Rnd_P_000_Name_Short);
    count = 6;
    mass = 6;
};

class CLASS(6Rnd_S_AP20): CLASS(8Rnd_S_AP20) {
    displayName = CSTRING(6Rnd_S_AP20_Name);
    displayNameShort = CSTRING(8Rnd_S_AP20_Name_Short);
    count = 6;
    mass = 6;
};
