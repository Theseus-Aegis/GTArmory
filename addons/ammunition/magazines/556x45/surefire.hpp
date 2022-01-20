// M855A1
class CLASS(60Rnd_556x45_M855A1_SureFire): CUP_60Rnd_556x45_SureFire {
    author = ECSTRING(main,Author);
    scope = 2;
    displayName = "5.56mm 60Rnd Surefire [TE4] Yellow (M855A1)";
    ammo = QCLASS(556x45_EPR_M855A1);
    tracersEvery = 4;
};

// M856A1
class CLASS(60Rnd_556x45_M855A1_Surefire_Red): CLASS(60Rnd_556x45_M855A1_SureFire) {
    displayName = "5.56mm 60Rnd Surefire [T] Red (M856A1)";
    tracersEvery = 1;
    ammo = QCLASS(556x45_EPR_M856A1_Red);
};
