class CLASS(17Rnd_9x19mm_Walther_Ball): 16Rnd_9x21_Mag {
    MACRO_SCOPE;
    ammo = QCLASS(9x19_Ball);
    descriptionShort = "9x19mm Ball Reload Tracer";
    displayName = "9mm 17Rnd Walther (Ball)";
    lastRoundsTracer = 2;
    tracersEvery = 4;
};

// 9x19mm
class CLASS(30Rnd_9x19_Ball): 30Rnd_9x21_Mag {
    MACRO_SCOPE;
    ammo = QCLASS(9x19_Ball);
    displayName = "9mm 30Rnd (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "9x19mm Ball Reload Tracer";
    lastRoundsTracer = 4;
    tracersEvery = 4;
    mass = 9;
};
class CLASS(30Rnd_9x19_Ball_Tracer): CLASS(30Rnd_9x19_Ball) {
    displayName = "9mm 30Rnd [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "9x19mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(30Rnd_9x19_EPR): CLASS(30Rnd_9x19_Ball) {
    ammo = QCLASS(9x19_EPR);
    displayName = "9mm 30Rnd (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "9x19mm EPR Reload Tracer";
};
class CLASS(30Rnd_9x19_AP): CLASS(30Rnd_9x19_EPR) {
    ammo = QCLASS(9x19_AP);
    displayName = "9mm 30Rnd (AP)";
    displayNameShort = "AP";
    descriptionShort = "9x19mm AP Reload Tracer";
};
