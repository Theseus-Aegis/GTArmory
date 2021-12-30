class CLASS(30Rnd_545x39_Mag_Black): 30Rnd_545x39_Mag_F {
    author = ECSTRING(main,Author);
    scope = 2;
    displayName = CSTRING(30Rnd_545x39_Mag_Black_Name);
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\cup\weapons\cup_weapons_ak\data\ak74m_magazine_co.paa"};
    model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_AK74M.p3d";
    modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30Rnd_AK74M.p3d";
    modelSpecialIsProxy = 1;
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_ak74m_ca.paa";
};

class CLASS(30Rnd_545x39_Mag_Plum): CLASS(30Rnd_545x39_Mag_Black) {
    displayName = CSTRING(30Rnd_545x39_Mag_Plum_Name);
    model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_AK74_plum.p3d";
    hiddenSelectionsTextures[] = {"\cup\weapons\cup_weapons_ak\data\ak74n_magazine_co.paa"};
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_ak74_plum_ca.paa";
};

// AP Rounds
class CLASS(30Rnd_545x39_BP_Mag_Bakelite): 30Rnd_545x39_Mag_F {
    author = ECSTRING(main,Author);
    displayName = CSTRING(30Rnd_545x39_BP_Mag_Bakelite_Name);
    scope = 2;
    ammo = QCLASS(545x39_BP);
    lastRoundsTracer = 4;
};

class CLASS(30Rnd_545x39_BT_Mag_Bakelite): CLASS(30Rnd_545x39_BP_Mag_Bakelite) {
    displayName = CSTRING(30Rnd_545x39_BT_Mag_Bakelite_Name);
    ammo = QCLASS(545x39_BT);
    tracersEvery = 1;
};

class CLASS(30Rnd_545x39_BP_Mag_Black): CLASS(30Rnd_545x39_BP_Mag_Bakelite) {
    author = ECSTRING(main,Author);
    scope = 2;
    displayName = CSTRING(30Rnd_545x39_BP_Mag_Black_Name);
    ammo = QCLASS(545x39_BP);
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\cup\weapons\cup_weapons_ak\data\ak74m_magazine_co.paa"};
    model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_AK74M.p3d";
    modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30Rnd_AK74M.p3d";
    modelSpecialIsProxy = 1;
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_ak74m_ca.paa";
};

class CLASS(30Rnd_545x39_BT_Mag_Black): CLASS(30Rnd_545x39_BP_Mag_Black) {
    displayName = CSTRING(30Rnd_545x39_BT_Mag_Black_Name);
    ammo = QCLASS(545x39_BT);
    tracersEvery = 1;
};

class CLASS(30Rnd_545x39_BP_Mag_Plum): CLASS(30Rnd_545x39_BP_Mag_Black) {
    author = ECSTRING(main,Author);
    scope = 2;
    displayName = CSTRING(30Rnd_545x39_BP_Mag_Plum_Name);
    model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_AK74_plum.p3d";
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\cup\weapons\cup_weapons_ak\data\ak74n_magazine_co.paa"};
    modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30Rnd_AK74M.p3d";
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_ak74_plum_ca.paa";
};

class CLASS(30Rnd_545x39_BT_Mag_Plum): CLASS(30Rnd_545x39_BP_Mag_Plum) {
    displayName = CSTRING(30Rnd_545x39_BT_Mag_Plum_Name);
    ammo = QCLASS(545x39_BT);
    tracersEvery = 1;
};

class CLASS(30Rnd_545x39_BP_Mag_AK12_Black): CUP_30Rnd_545x39_AK12_M {
    author = ECSTRING(main,Author);
    scope = 2;
    displayName = "5.45mm 30Rnd AK-12 [RT] Yellow (BP)";
    ammo = QCLASS(545x39_BP);
    lastRoundsTracer = 4;
};
class CLASS(30Rnd_545x39_BT_Mag_AK12_Black): CLASS(30Rnd_545x39_BP_Mag_Black) {
    displayName = "5.45mm 30Rnd AK-12 [T] Red (BT)";
    ammo = QCLASS(545x39_BT);
    tracersEvery = 1;
};
class CLASS(30Rnd_545x39_BP_Mag_AK12_Tan): CUP_30Rnd_545x39_AK12_Tan_M {
    author = ECSTRING(main,Author);
    scope = 2;
    displayName = "5.45mm 30Rnd AK-12 Tan [RT] Yellow (BP)";
    ammo = QCLASS(545x39_BP);
    lastRoundsTracer = 4;
};
class CLASS(30Rnd_545x39_BT_Mag_AK12_Tan): CLASS(30Rnd_545x39_BP_Mag_Tan) {
    displayName = "5.45mm 30Rnd AK-12 Tan [T] Red (BT)";
    ammo = QCLASS(545x39_BT);
    tracersEvery = 1;
};

