// 7.62x39mm CZ807
class CLASS(30Rnd_762x39_Ball_CZ): CUP_30Rnd_762x39_CZ807 {
    MACRO_SCOPE;
    ammo = QCLASS(762x39_Ball);
    displayName = "7.62mm 30Rnd CZ (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "7.62x39mm Ball Reload Tracer";
    lastRoundsTracer = 4;
    tracersEvery = 4;
    mass = 11;
};
class CLASS(30Rnd_762x39_Ball_Tracer_CZ): CLASS(30Rnd_762x39_Ball_CZ) {
    displayName = "7.62mm 30Rnd CZ [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "7.62x39mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(30Rnd_762x39_EPR_CZ): CLASS(30Rnd_762x39_Ball_CZ) {
    ammo = QCLASS(762x39_EPR);
    displayName = "7.62mm 30Rnd CZ (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "7.62x39mm EPR Reload Tracer";
};
class CLASS(30Rnd_762x39_AP_CZ): CLASS(30Rnd_762x39_EPR_CZ) {
    ammo = QCLASS(762x39_AP);
    displayName = "7.62mm 30Rnd CZ (AP)";
    displayNameShort = "AP";
    descriptionShort = "7.62x39mm AP Reload Tracer";
};
