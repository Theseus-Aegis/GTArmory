// M855A1
class CLASS(30Rnd_556x45_M855A1_SG550): hlc_30Rnd_556x45_EPR_sg550 {
    author = ECSTRING(main,Author);
    scope = 2;
    lastRoundsTracer = 4;
    displayName = "5.56mm 30Rnd SG550 [RT] Yellow (M855A1)";
    ammo = QCLASS(556x45_EPR_M855A1);
    mass = 10;
};

// M856A1
class CLASS(30Rnd_556x45_M855A1_SG550_Red): CLASS(30Rnd_556x45_M855A1_SG550) {
    displayName = "5.56mm 30Rnd SG550 [T] Red (M856A1)";
    tracersEvery = 1;
    ammo = QCLASS(556x45_EPR_M856A1_Red);
};

// M995
class CLASS(30Rnd_556x45_M995_SG550): CLASS(30Rnd_556x45_M855A1_SG550) {
    displayName = "5.56mm 30Rnd SG550 (M995)";
    ammo = "ACE_556x45_Ball_M995_AP";
};
