// 8Rnd Saiga
class CLASS(8Rnd_Saiga_000): CUP_5Rnd_B_Saiga12_Buck_00 {
    MACRO_SCOPE;
    ammo = QCLASS(P_12G_000);
    count = 8;
    descriptionShort = "#00 Magnum Shells";
    displayName = "8Rnd Saiga (Magnum)";
    displayNameShort = "#00 Magnum";
    mass = 6.5;
};
class CLASS(8Rnd_Saiga_AP20): CLASS(8Rnd_Saiga_000) {
    ammo = QCLASS(S_12G_AP20);
    descriptionShort = "AP-20 Slug";
    displayName = "8Rnd Saiga (Slug)";
    displayNameShort = "AP-20";
};

class CLASS(8Rnd_Saiga_Smoke): CLASS(8Rnd_Saiga_AP20) {
    ammo = "B_12gauge_Smoke_Cartridge_lxWS";
    descriptionShort = "Smoke Shell";
    displayName = "8Rnd Saiga (Smoke)";
    displayNameShort = "Smoke Screen";
};

// 20Rnd Saiga
class CLASS(20Rnd_Saiga_000): CLASS(8Rnd_Saiga_000) {
    count = 20;
    descriptionShort = "#00 Magnum Shells";
    displayName = "20Rnd Saiga (Magnum)";
    displayNameShort = "#00 Magnum";
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\cup\weapons\cup_weapons_ammunition\magazines\data\saiga12_drum_co.paa"};
    mass = 12;
    model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_20Rnd_Saiga_12K.p3d";
    modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_20Rnd_Saiga_12K.p3d";
    modelSpecialIsProxy = 1;
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\M_20_Saiga12K_CA.paa";
};

class CLASS(20Rnd_Saiga_AP20): CLASS(20Rnd_Saiga_000) {
    ammo = QCLASS(S_12G_AP20);
    descriptionShort = "AP-20 Slug";
    displayName = "20Rnd Saiga (Slug)";
    displayNameShort = "AP-20";
};

class CLASS(20Rnd_Saiga_Smoke): CLASS(20Rnd_Saiga_AP20) {
    ammo = "B_12gauge_Smoke_Cartridge_lxWS";
    descriptionShort = "Smoke Shell";
    displayName = "20Rnd Saiga (Smoke)";
    displayNameShort = "Smoke Screen";
};
