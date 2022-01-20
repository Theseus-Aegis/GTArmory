// M855A1
class CLASS(30Rnd_556x45_M855A1_AK): CUP_30Rnd_556x45_AK {
    author = ECSTRING(main,Author);
    scope = 2;
    lastRoundsTracer = 4;
    displayName = "5.56mm 30Rnd AK [RT] Yellow (M855A1)";
    ammo = QCLASS(556x45_EPR_M855A1);
    mass = 10;
};

// M856A1
class CLASS(30Rnd_556x45_M855A1_AK_Red): CLASS(30Rnd_556x45_M855A1_AK) {
    displayName = "5.56mm 30Rnd AK [T] Red (M856A1)";
    tracersEvery = 1;
    ammo = QCLASS(556x45_EPR_M856A1_Red);
};

// M995
class CLASS(30Rnd_556x45_M995_AK): CLASS(30Rnd_556x45_M855A1_AK) {
    displayName = "5.56mm 30Rnd AK (M995)";
    ammo = "ACE_556x45_Ball_M995_AP";
};
