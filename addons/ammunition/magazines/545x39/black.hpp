class CLASS(30Rnd_545x39_Mag_Black): 30Rnd_545x39_Mag_F {
    author = ECSTRING(main,Author);
    scope = 2;
    displayName = "5.45mm 30Rnd Black [RT] Yellow (PS)";
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\cup\weapons\cup_weapons_ak\data\ak74m_magazine_co.paa"};
    model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_AK74M.p3d";
    modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30Rnd_AK74M.p3d";
    modelSpecialIsProxy = 1;
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_ak74m_ca.paa";
};

// BP
class CLASS(30Rnd_545x39_BP_Mag_Black): CLASS(30Rnd_545x39_BP_Mag_Bakelite) {
    author = ECSTRING(main,Author);
    scope = 2;
    displayName = "5.45mm 30Rnd Black [RT] Yellow (BP)";
    ammo = QCLASS(545x39_BP);
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\cup\weapons\cup_weapons_ak\data\ak74m_magazine_co.paa"};
    model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_AK74M.p3d";
    modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30Rnd_AK74M.p3d";
    modelSpecialIsProxy = 1;
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_ak74m_ca.paa";
};

// BT
class CLASS(30Rnd_545x39_BT_Mag_Black): CLASS(30Rnd_545x39_BP_Mag_Black) {
    displayName = "5.45mm 30Rnd Black [T] Red (BT)";
    ammo = QCLASS(545x39_BT);
    tracersEvery = 1;
};

// AK-12 BP
class CLASS(30Rnd_545x39_BP_Mag_AK12_Black): CUP_30Rnd_545x39_AK12_M {
    author = ECSTRING(main,Author);
    scope = 2;
    displayName = "5.45mm 30Rnd AK-12 [RT] Yellow (BP)";
    ammo = QCLASS(545x39_BP);
    lastRoundsTracer = 4;
};

// AK-12 BT
class CLASS(30Rnd_545x39_BT_Mag_AK12_Black): CLASS(30Rnd_545x39_BP_Mag_AK12_Black) {
    displayName = "5.45mm 30Rnd AK-12 [T] Red (BT)";
    ammo = QCLASS(545x39_BT);
    tracersEvery = 1;
};
