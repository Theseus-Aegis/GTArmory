// M855
class CLASS(30Rnd_556x45_M855_EMAG): 30Rnd_556x45_Stanag_green {
    author = ECSTRING(main,Author);
    scope = 2;
    lastRoundsTracer = 4;
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_emag_ca.paa";
    displayName = "5.56mm 30Rnd EMAG [RT] Green (M855)";
    mass = 10;
    model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_EMAG.p3d";
    modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30Rnd_EMAG.p3d";
    modelSpecialIsProxy = 1;
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\emag_co.paa"};
};

// M855 (Tan)
class CLASS(30Rnd_556x45_M855_EMAG_Tan): CLASS(30Rnd_556x45_M855_EMAG) {
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_emag_coyote_ca.paa";
    displayName = "5.56mm 30Rnd EMAG Tan [RT] Green (M855)";
    model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_EMAG_coyote.p3d";
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\emag_coyote_co.paa"};
};

// M855A1
class CLASS(30Rnd_556x45_M855A1_EMAG): 30Rnd_556x45_Stanag_green {
    author = ECSTRING(main,Author);
    scope = 2;
    lastRoundsTracer = 4;
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_emag_ca.paa";
    displayName = "5.56mm 30Rnd EMAG [RT] Yellow (M855A1)";
    ammo = QCLASS(556x45_EPR_M855A1);
    mass = 10;
    model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_EMAG.p3d";
    modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30Rnd_EMAG.p3d";
    modelSpecialIsProxy = 1;
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\emag_co.paa"};
};

// M855A1 (Tan)
class CLASS(30Rnd_556x45_M855A1_EMAG_Tan): CLASS(30Rnd_556x45_M855A1_EMAG) {
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_emag_coyote_ca.paa";
    displayName = "5.56mm 30Rnd EMAG Tan [RT] Yellow (M855A1)";
    model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_EMAG_coyote.p3d";
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\emag_coyote_co.paa"};
};

// M856A1
class CLASS(30Rnd_556x45_M855A1_EMAG_Red): CLASS(30Rnd_556x45_M855A1_EMAG) {
    displayName = "5.56mm 30Rnd EMAG [T] Red (M856A1)";
    tracersEvery = 1;
    ammo = QCLASS(556x45_EPR_M856A1_Red);
};

// M856A1 (Tan)
class CLASS(30Rnd_556x45_M855A1_EMAG_Tan_Red): CLASS(30Rnd_556x45_M855A1_EMAG_Tan) {
    displayName = "5.56mm 30Rnd EMAG Tan [T] Red (M856A1)";
    tracersEvery = 1;
    ammo = QCLASS(556x45_EPR_M856A1_Red);
};

// M995
class CLASS(30Rnd_556x45_M995_EMAG): ACE_30Rnd_556x45_Stanag_M995_AP_mag {
    author = ECSTRING(main,Author);
    scope = 2;
    lastRoundsTracer = 2;
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_emag_ca.paa";
    displayName = "5.56mm 30Rnd EMAG (M995)";
    mass = 10;
    model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_EMAG.p3d";
    modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30Rnd_EMAG.p3d";
    modelSpecialIsProxy = 1;
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\emag_co.paa"};
};

// M995 (Tan)
class CLASS(30Rnd_556x45_M995_EMAG_Tan): CLASS(30Rnd_556x45_M995_EMAG) {
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_emag_coyote_ca.paa";
    displayName = "5.56mm 30Rnd EMAG Tan (M995)";
    model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_EMAG_coyote.p3d";
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\emag_coyote_co.paa"};
};

// MK262
class CLASS(30Rnd_556x45_MK262_EMAG): ACE_30Rnd_556x45_Stanag_Mk262_mag {
    author = ECSTRING(main,Author);
    scope = 2;
    lastRoundsTracer = 2;
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_emag_ca.paa";
    displayName = "5.56mm 30Rnd EMAG (MK262)";
    mass = 10;
    model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_EMAG.p3d";
    modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30Rnd_EMAG.p3d";
    modelSpecialIsProxy = 1;
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\emag_co.paa"};
};

// MK262 (Tan)
class CLASS(30Rnd_556x45_MK262_EMAG_Tan): CLASS(30Rnd_556x45_MK262_EMAG) {
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_emag_coyote_ca.paa";
    displayName = "5.56mm 30Rnd EMAG Tan (MK262)";
    model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_EMAG_coyote.p3d";
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\emag_coyote_co.paa"};
};
