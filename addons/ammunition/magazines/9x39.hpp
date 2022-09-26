class CLASS(30Rnd_9x39_Ball): CUP_30Rnd_9x39_SP5_VIKHR_M {
    MACRO_SCOPE
    ammo = QCLASS(9x39_Ball);
    descriptionShort = "9x39mm Ball Reload Tracer Subsonic";
    displayName = "9x39mm 30Rnd (Ball)";
    lastRoundsTracer = 4;
    mass = 10;
};
class CLASS(30Rnd_9x39_Ball_Tracer): CLASS(30Rnd_9x39_Ball) {
    descriptionShort = "9x39mm Ball Tracer Subsonic";
    displayName = "9x39mm 30Rnd [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(30Rnd_9x39_EPR): CLASS(30Rnd_9x39_Ball) {
    ammo = QCLASS(9x39_EPR);
    descriptionShort = "9x39mm EPR Reload Tracer Subsonic";
    displayName = "9x39mm 30Rnd (EPR)";
};
class CLASS(30Rnd_9x39_AP): CLASS(30Rnd_9x39_EPR) {
    ammo = QCLASS(9x39_AP);
    descriptionShort = "9x39mm AP Reload Tracer Subsonic";
    displayName = "9x39mm 30Rnd (AP)";
};
