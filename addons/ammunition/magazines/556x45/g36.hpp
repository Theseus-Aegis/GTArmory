// M855A1
class CLASS(30Rnd_556x45_M855A1_G36): CUP_30Rnd_556x45_G36 {
    author = ECSTRING(main,Author);
    scope = 2;
    lastRoundsTracer = 4;
    displayName = "5.56mm 30Rnd G36 [RT] Yellow (M855A1)";
    ammo = QCLASS(556x45_EPR_M855A1);
    mass = 10;
};

// M856A1
class CLASS(30Rnd_556x45_M855A1_G36_Red): CLASS(30Rnd_556x45_M855A1_G36) {
    displayName = "5.56mm 30Rnd G36 [T] Red (M856A1)";
    ammo = QCLASS(556x45_EPR_M856A1_Red);
    tracersEvery = 1;
};

// M995
class CLASS(30Rnd_556x45_M995_G36): CLASS(30Rnd_556x45_M855A1_G36) {
    displayName = "5.56mm 30Rnd G36 (M995)";
    ammo = "ACE_556x45_Ball_M995_AP";
};
