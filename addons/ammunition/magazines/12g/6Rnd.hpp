// 6Rnd M1014
class CLASS(6Rnd_P_000): CLASS(8Rnd_P_000) {
    displayName = "6Rnd #00 Magnum Shells";
    displayNameShort = "#00 Magnum Shells";
    count = 6;
    mass = 6;
};

class CLASS(6Rnd_S_AP20): CLASS(8Rnd_S_AP20) {
    displayName = "6Rnd AP-20 Slug";
    displayNameShort = "AP-20 Slug";
    count = 6;
    mass = 6;
};

// 6Rnd MSBS GROT
class CLASS(6Rnd_P_UGL): 6Rnd_12Gauge_Pellets {
    scope = 2;
    scopeArsenal = 2;
    displayName = "6Rnd #00 Magnum Shells";
    displayNameShort = "#00 Magnum Shells";
    descriptionShort = "#00 Magnum Shells";
    ammo = QCLASS(P_12G_000);
};

class CLASS(6Rnd_S_UGL): 6Rnd_12Gauge_Slug {
    scope = 2;
    scopeArsenal = 2;
    displayName = "6Rnd AP-20 Slug";
    displayNameShort = "AP-20 Slug";
    descriptionShort = "AP-20 Slug";
    ammo = QCLASS(S_12G_AP20);
};
