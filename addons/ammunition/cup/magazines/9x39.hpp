// 9x39mm
class CLASS(30Rnd_9x39_Ball): CUP_30Rnd_9x39_SP5_VIKHR_M {
    MACRO_SCOPE;
    ammo = QCLASS(9x39_Ball);
    displayName = "9x39mm 30Rnd (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "9x39mm Ball Reload Tracer Subsonic";
    lastRoundsTracer = 4;
    mass = 10;
};
class CLASS(30Rnd_9x39_Ball_Tracer): CLASS(30Rnd_9x39_Ball) {
    displayName = "9x39mm 30Rnd [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "9x39mm Ball Tracer Subsonic";
    tracersEvery = 1;
};
class CLASS(30Rnd_9x39_EPR): CLASS(30Rnd_9x39_Ball) {
    ammo = QCLASS(9x39_EPR);
    displayName = "9x39mm 30Rnd (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "9x39mm EPR Reload Tracer Subsonic";
};
class CLASS(30Rnd_9x39_AP): CLASS(30Rnd_9x39_EPR) {
    ammo = QCLASS(9x39_AP);
    displayName = "9x39mm 30Rnd (AP)";
    displayNameShort = "AP";
    descriptionShort = "9x39mm AP Reload Tracer Subsonic";
};
