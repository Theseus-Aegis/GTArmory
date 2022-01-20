// PS
class CUP_20Rnd_762x51_G3: CA_Magazine {
    ammo = "B_762x51_Ball";
};

// AP
class CLASS(20Rnd_762x51_G3_AP_Mag): CUP_20Rnd_762x51_G3 {
    author = ECSTRING(main,Author);
    scope = 2;
    displayName = "7.62mm 20Rnd G3 Mag (M993)";
    ammo = "ACE_762x51_Ball_M993_AP";
    lastRoundsTracer = 2;
};
