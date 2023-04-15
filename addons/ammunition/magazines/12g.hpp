class CLASS(2Rnd_P_000): 2Rnd_12Gauge_Pellets {
    MACRO_SCOPE
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
    MACRO_SCOPE
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
    MACRO_SCOPE
    ammo = QCLASS(P_12G_000);
    displayName = "6Rnd MSBS (Magnum)";
    displayNameShort = "#00 Magnum";
    descriptionShort = "#00 Magnum Shells";
};

class CLASS(6Rnd_S_UGL): 6Rnd_12Gauge_Slug {
    MACRO_SCOPE
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

// 8Rnd Saiga
class CLASS(8Rnd_Saiga_000): CUP_5Rnd_B_Saiga12_Buck_00 {
    MACRO_SCOPE
    ammo = QCLASS(P_12G_000);
    count = 8;
    displayName = "8Rnd Saiga (Magnum)";
    displayNameShort = "#00 Magnum";
    descriptionShort = "#00 Magnum Shells";
};
class CLASS(8Rnd_Saiga_AP20): CLASS(8Rnd_Saiga_000) {
    ammo = QCLASS(S_12G_AP20);
    displayName = "8Rnd Saiga (Slug)";
    displayNameShort = "AP-20";
    descriptionShort = "AP-20 Slug";
};

class CLASS(8Rnd_Saiga_Smoke): CLASS(8Rnd_Saiga_AP20) {
    ammo = "B_12gauge_Smoke_Cartridge_lxWS";
    displayName = "8Rnd Saiga (Smoke)";
    displayNameShort = "Smoke Screen";
    descriptionShort = "Smoke Shell";
};

// 20Rnd Saiga
class CLASS(20Rnd_Saiga_000): CLASS(8Rnd_Saiga_000) {
    count = 20;
    displayName = "20Rnd Saiga (Magnum)";
    displayNameShort = "#00 Magnum";
    descriptionShort = "#00 Magnum Shells";
    model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_20Rnd_Saiga_12K.p3d";
    modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_20Rnd_Saiga_12K.p3d";
    modelSpecialIsProxy = 1;
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\M_20_Saiga12K_CA.paa";
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\cup\weapons\cup_weapons_ammunition\magazines\data\saiga12_drum_co.paa"};
};

class CLASS(20Rnd_Saiga_AP20): CLASS(20Rnd_Saiga_000) {
    descriptionShort = "AP-20 Slug";
    displayName = "20Rnd Saiga (Slug)";
    displayNameShort = "AP-20";
    ammo = QCLASS(S_12G_AP20);
};

class CLASS(20Rnd_Saiga_Smoke): CLASS(20Rnd_Saiga_AP20) {
    ammo = "B_12gauge_Smoke_Cartridge_lxWS";
    descriptionShort = "Smoke Shell";
    displayNameShort = "Smoke Screen";
    displayName = "20Rnd Saiga (Smoke)";
};

// Western Sahara - AA40
class CLASS(8Rnd_AA40_000): 8Rnd_12Gauge_AA40_Pellets_lxWS {
    ammo = QCLASS(P_12G_000);
    displayName = "8Rnd AA40 (Magnum)";
    displayNameShort = "#00 Magnum";
    descriptionShort = "#00 Magnum Shells";
    mass = 8;
};
class CLASS(8Rnd_AA40_AP20): CLASS(8Rnd_AA40_000){
    ammo = QCLASS(S_12G_AP20);
    displayName = "8Rnd AA40 (Slug)";
    displayNameShort = "AP-20";
    descriptionShort = "AP-20 Slug";
};
class CLASS(8Rnd_AA40_Smoke): CLASS(8Rnd_AA40_AP20) {
    ammo = "B_12gauge_Smoke_Cartridge_lxWS";
    displayName = "8Rnd AA40 (Smoke)";
    displayNameShort = "Smoke Screen";
    descriptionShort = "Smoke Shell";
};
class CLASS(20Rnd_AA40_000): 20Rnd_12Gauge_AA40_Pellets_lxWS {
    ammo = QCLASS(P_12G_000);
    displayName = "20Rnd AA40 (Magnum)";
    displayNameShort = "#00 Magnum";
    descriptionShort = "#00 Magnum Shells";
    mass = 14;
};
class CLASS(20Rnd_AA40_AP20): CLASS(20Rnd_AA40_000) {
    ammo = QCLASS(S_12G_AP20);
    displayName = "20Rnd AA40 (Slug)";
    displayNameShort = "AP-20";
    descriptionShort = "AP-20 Slug";
};
class CLASS(20Rnd_AA40_Smoke): CLASS(20Rnd_AA40_AP20) {
    ammo = "B_12gauge_Smoke_Cartridge_lxWS";
    displayName = "20Rnd AA40 (Smoke)";
    displayNameShort = "Smoke Screen";
    descriptionShort = "Smoke Shell";
};
