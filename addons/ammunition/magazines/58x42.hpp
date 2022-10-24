// 5.8x42mm
class CLASS(30Rnd_58x42_Ball): 30Rnd_580x42_Mag_F {
    MACRO_SCOPE
    ammo = QCLASS(58x42_Ball);
    displayName = "5.8mm 30Rnd (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "5.8x42mm Ball Reload Tracer";
    lastRoundsTracer = 4;
    mass = 10;
};
class CLASS(30Rnd_58x42_Ball_Tracer): CLASS(30Rnd_58x42_Ball) {
    displayName = "5.8mm 30Rnd [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "5.8x42mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(30Rnd_58x42_EPR): CLASS(30Rnd_58x42_Ball) {
    ammo = QCLASS(58x42_EPR);
    displayName = "5.8mm 30Rnd (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "5.8x42mm EPR Reload Tracer";
};
class CLASS(30Rnd_58x42_AP): CLASS(30Rnd_58x42_EPR) {
    ammo = QCLASS(58x42_AP);
    displayName = "5.8mm 30Rnd (AP)";
    displayNameShort = "AP";
    descriptionShort = "5.8x42mm AP Reload Tracer";
};

// 5.8x42mm Drum
class CLASS(100Rnd_58x42_Ball): 100Rnd_580x42_Mag_F {
    MACRO_SCOPE
    ammo = QCLASS(58x42_Ball);
    displayName = "5.8mm 100Rnd [TE4] (Ball)";
    displayNameShort = "Ball TE4";
    descriptionShort = "5.8x42mm Ball Tracer Every 4";
    tracersEvery = 4;
    mass = 20;
};
class CLASS(100Rnd_58x42_Ball_Tracer): CLASS(100Rnd_58x42_Ball) {
    displayName = "5.8mm 100Rnd [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "5.8x42mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(100Rnd_58x42_EPR): CLASS(100Rnd_58x42_Ball) {
    ammo = QCLASS(58x42_EPR);
    displayName = "5.8mm 100Rnd [TE4] (EPR)";
    displayNameShort = "EPR TE4";
    descriptionShort = "5.8x42mm EPR Tracer Every 4";
};
