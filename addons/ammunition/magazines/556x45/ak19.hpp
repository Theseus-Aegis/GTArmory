// M855A1
class CLASS(30Rnd_556x45_M855A1_AK19): CUP_30Rnd_556x45_AK19_M {
    author = ECSTRING(main,Author);
    scope = 2;
    lastRoundsTracer = 4;
    displayName = "5.56mm 30Rnd AK-19 [RT] Yellow (M855A1)";
    ammo = QCLASS(556x45_EPR_M855A1);
    mass = 10;
};

// M856A1
class CLASS(30Rnd_556x45_M855A1_AK19_Red): CLASS(30Rnd_556x45_M855A1_AK19) {
    displayName = "5.56mm 30Rnd AK-19 [T] Red (M856A1)";
    tracersEvery = 1;
    ammo = QCLASS(556x45_EPR_M856A1_Red);
};

// M855A1 (Tan)
class CLASS(30Rnd_556x45_M855A1_AK19_Tan): CUP_30Rnd_556x45_AK19_Tan_M {
    author = ECSTRING(main,Author);
    scope = 2;
    lastRoundsTracer = 4;
    displayName = "5.56mm 30Rnd AK-19 Tan [RT] Yellow (M855A1)";
    ammo = QCLASS(556x45_EPR_M855A1);
    mass = 10;
};

// M856A1 (Tan)
class CLASS(30Rnd_556x45_M855A1_AK19_Tan_Red): CLASS(30Rnd_556x45_M855A1_AK19_Tan) {
    displayName = "5.56mm 30Rnd AK-19 Tan [T] Red (M856A1)";
    tracersEvery = 1;
    ammo = QCLASS(556x45_EPR_M856A1_Red);
};
