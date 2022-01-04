// M855A1
class CLASS(25Rnd_556x45_M855A1_Famas): CUP_25Rnd_556x45_Famas {
    author = ECSTRING(main,Author);
    scope = 2;
    lastRoundsTracer = 4;
    displayName = "5.56mm 25Rnd Famas [RT] Yellow (M855A1)";
    ammo = QCLASS(556x45_EPR_M855A1);
    mass = 10;
};

// M856A1
class CLASS(25Rnd_556x45_M855A1_Famas_Red): CLASS(25Rnd_556x45_M855A1_Famas) {
    displayName = "5.56mm 25Rnd Famas [T] Red (M856A1)";
    tracersEvery = 1;
    ammo = QCLASS(556x45_EPR_M856A1_Red);
};

// M995
class CLASS(25Rnd_556x45_M995_Famas): CLASS(25Rnd_556x45_M855A1_Famas) {
    displayName = "5.56mm 25Rnd Famas (M995)";
    ammo = "ACE_556x45_Ball_M995_AP";
};
