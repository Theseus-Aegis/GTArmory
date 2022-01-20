// M855A1 (Yellow)
class CLASS(200Rnd_556x45_M855A1_Box): 200Rnd_556x45_Box_F {
    author = ECSTRING(main,Author);
    scope = 2;
    displayName = "5.56mm 200Rnd [TE4] Yellow Box Mag (M855A1)";
    ammo = QCLASS(556x45_EPR_M855A1);
    mass = 40;
    tracersEvery = 4;
};

// M855A1 (Red)
class CLASS(200Rnd_556x45_M855A1_Box_Red): CLASS(200Rnd_556x45_M855A1_Box) {
    displayName = "5.56mm 200Rnd [TE4] Red Box Mag (M855A1)";
    ammo = QCLASS(556x45_EPR_M856A1_Red);
    tracersEvery = 4;
};

// M856A1 (Yellow)
class CLASS(200Rnd_556x45_M855A1_Box_Tracer): CLASS(200Rnd_556x45_M855A1_Box) {
    displayName = "5.56mm 200Rnd [T] Yellow Box Mag (M856A1)";
    ammo = QCLASS(556x45_EPR_M855A1);
    tracersEvery = 1;
};

// M856A1 (Red)
class CLASS(200Rnd_556x45_M855A1_Box_Tracer_Red): CLASS(200Rnd_556x45_M855A1_Box_Tracer) {
    displayName = "5.56mm 200Rnd [T] Red Box Mag (M856A1)";
    ammo = QCLASS(556x45_EPR_M856A1_Red);
    tracersEvery = 1;
};
