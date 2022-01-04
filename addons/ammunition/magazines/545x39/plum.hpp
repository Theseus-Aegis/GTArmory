class CLASS(30Rnd_545x39_Mag_Plum): CLASS(30Rnd_545x39_Mag_Black) {
    displayName = "5.45mm 30Rnd Plum [RT] Yellow (PS)";
    model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_AK74_plum.p3d";
    hiddenSelectionsTextures[] = {"\cup\weapons\cup_weapons_ak\data\ak74n_magazine_co.paa"};
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_ak74_plum_ca.paa";
};

// BP
class CLASS(30Rnd_545x39_BP_Mag_Plum): CLASS(30Rnd_545x39_BP_Mag_Black) {
    author = ECSTRING(main,Author);
    scope = 2;
    displayName = "5.45mm 30Rnd Plum [RT] Yellow (BP)";
    model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_AK74_plum.p3d";
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\cup\weapons\cup_weapons_ak\data\ak74n_magazine_co.paa"};
    modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30Rnd_AK74M.p3d";
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_ak74_plum_ca.paa";
};

// BT
class CLASS(30Rnd_545x39_BT_Mag_Plum): CLASS(30Rnd_545x39_BP_Mag_Plum) {
    displayName = "5.45mm 30Rnd Plum [T] Red (BT)";
    ammo = QCLASS(545x39_BT);
    tracersEvery = 1;
};
