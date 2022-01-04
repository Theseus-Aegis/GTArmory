// M855
class CLASS(30Rnd_556x45_M855_PMAG): 30Rnd_556x45_Stanag_green {
    author = ECSTRING(main,Author);
    scope = 2;
    lastRoundsTracer = 4;
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_pmag_ca.paa";
    displayName = "5.56mm 30Rnd PMAG [RT] Green (M855)";
    mass = 10;
    model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30rnd_pmag_qp.p3d";
    modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30rnd_pmag_qp.p3d";
    modelSpecialIsProxy = 1;
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\pmag_black_co.paa"};
};

// M855 (Tan)
class CLASS(30Rnd_556x45_M855_PMAG_Tan): CLASS(30Rnd_556x45_M855_PMAG) {
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_pmag_coyote_ca.paa";
    displayName = "5.56mm 30Rnd PMAG Tan [RT] Green (M855)";
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\pmag_coyote_co.paa"};
};

// M855A1
class CLASS(30Rnd_556x45_M855A1_PMAG): 30Rnd_556x45_Stanag_green {
    author = ECSTRING(main,Author);
    scope = 2;
    lastRoundsTracer = 4;
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_pmag_ca.paa";
    displayName = "5.56mm 30Rnd PMAG [RT] Yellow (M855A1)";
    ammo = QCLASS(556x45_EPR_M855A1);
    mass = 10;
    model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30rnd_pmag_qp.p3d";
    modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30rnd_pmag_qp.p3d";
    modelSpecialIsProxy = 1;
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\pmag_black_co.paa"};
};

// M855A1 (Tan)
class CLASS(30Rnd_556x45_M855A1_PMAG_Tan): CLASS(30Rnd_556x45_M855A1_PMAG) {
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_pmag_coyote_ca.paa";
    displayName = "5.56mm 30Rnd PMAG Tan [RT] Yellow (M855A1)";
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\pmag_coyote_co.paa"};
};

// M856A1
class CLASS(30Rnd_556x45_M855A1_PMAG_Red): CLASS(30Rnd_556x45_M855A1_PMAG) {
    displayName = "5.56mm 30Rnd PMAG [T] Red (M856A1)";
    tracersEvery = 1;
    ammo = QCLASS(556x45_EPR_M856A1_Red);
};

// M995
class CLASS(30Rnd_556x45_M995_PMAG): ACE_30Rnd_556x45_Stanag_M995_AP_mag {
    author = ECSTRING(main,Author);
    scope = 2;
    lastRoundsTracer = 2;
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_pmag_ca.paa";
    displayName = "5.56mm 30Rnd PMAG (M995)";
    mass = 10;
    model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30rnd_pmag_qp.p3d";
    modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30rnd_pmag_qp.p3d";
    modelSpecialIsProxy = 1;
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\pmag_black_co.paa"};
};

// M995 (Tan)
class CLASS(30Rnd_556x45_M995_PMAG_Tan): CLASS(30Rnd_556x45_M995_PMAG) {
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_pmag_coyote_ca.paa";
    displayName = "5.56mm 30Rnd PMAG Tan (M995)";
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\pmag_coyote_co.paa"};
};

// MK262
class CLASS(30Rnd_556x45_MK262_PMAG): ACE_30Rnd_556x45_Stanag_Mk262_mag {
    author = ECSTRING(main,Author);
    scope = 2;
    lastRoundsTracer = 2;
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_pmag_ca.paa";
    displayName = "5.56mm 30Rnd PMAG (MK262)";
    mass = 10;
    model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30rnd_pmag_qp.p3d";
    modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30rnd_pmag_qp.p3d";
    modelSpecialIsProxy = 1;
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\pmag_black_co.paa"};
};

// MK262 (Tan)
class CLASS(30Rnd_556x45_MK262_PMAG_Tan): CLASS(30Rnd_556x45_MK262_PMAG) {
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_pmag_coyote_ca.paa";
    displayName = "5.56mm 30Rnd PMAG Tan (MK262)";
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\pmag_coyote_co.paa"};
};
