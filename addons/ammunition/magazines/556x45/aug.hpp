// M855A1
class CLASS(30Rnd_556x45_M855A1_AUG): CUP_30Rnd_556x45_AUG {
    author = ECSTRING(main,Author);
    scope = 2;
    lastRoundsTracer = 4;
    displayName = "5.56mm 30Rnd AUG [RT] Yellow (M855A1)";
    ammo = QCLASS(556x45_EPR_M855A1);
    mass = 10;
};

// M856A1
class CLASS(30Rnd_556x45_M855A1_AUG_Red): CLASS(30Rnd_556x45_M855A1_AUG) {
    displayName = "5.56mm 30Rnd AUG [T] Red (M856A1)";
    tracersEvery = 1;
    ammo = QCLASS(556x45_EPR_M856A1_Red);
};

// M995
class CLASS(30Rnd_556x45_M995_AUG): CLASS(30Rnd_556x45_M855A1_AUG) {
    displayName = "5.56mm 30Rnd AUG (M995)";
    ammo = "ACE_556x45_Ball_M995_AP";
};

// M855A1 (42Rnd)
class CLASS(42Rnd_556x45_M855A1_AUG): hlc_40Rnd_556x45_B_AUG {
    author = ECSTRING(main,Author);
    scope = 2;
    lastRoundsTracer = 4;
    displayName = "5.56mm 42Rnd AUG [RT] Yellow (M855A1)";
    ammo = QCLASS(556x45_EPR_M855A1);
    mass = 13;
};

// M856A1 (42Rnd)
class CLASS(42Rnd_556x45_M855A1_AUG_Red): CLASS(42Rnd_556x45_M855A1_AUG) {
    displayName = "5.56mm 42Rnd AUG [T] Red (M856A1)";
    tracersEvery = 1;
    ammo = QCLASS(556x45_EPR_M856A1_Red);
};

// M995 (42Rnd)
class CLASS(42Rnd_556x45_M995_AUG): CLASS(42Rnd_556x45_M855A1_AUG) {
    displayName = "5.56mm 42Rnd AUG (M995)";
    ammo = "ACE_556x45_Ball_M995_AP";
};
