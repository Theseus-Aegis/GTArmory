// 5.45x39mm Quadstack
class CLASS(60Rnd_545x39_Ball_Quadstack): CUP_60Rnd_545x39_AK74M_M {
    MACRO_SCOPE;
    ammo = QCLASS(545x39_Ball);
    displayName = "5.45mm 60Rnd Quadstack [TE4] (Ball)";
    displayNameShort = "Ball TE4";
    descriptionShort = "5.45x39mm Ball Tracer Every 4";
    tracersEvery = 4;
    mass = 20;
};
class CLASS(60Rnd_545x39_Ball_Tracer_Quadstack): CLASS(60Rnd_545x39_Ball_Quadstack) {
    displayName = "5.45mm 60Rnd Quadstack [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "5.45x39mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(60Rnd_545x39_EPR_Quadstack): CLASS(60Rnd_545x39_Ball_Quadstack) {
    ammo = QCLASS(545x39_EPR);
    displayName = "5.45mm 60Rnd Quadstack [TE4] (EPR)";
    displayNameShort = "EPR TE4";
    descriptionShort = "5.45x39mm EPR Tracer Every 4";
};

// 5.45x39mm Fort
class CLASS(30Rnd_545x39_Ball_Fort): CUP_30Rnd_545x39_Fort224_M {
    MACRO_SCOPE;
    ammo = QCLASS(545x39_Ball);
    displayName = "5.45mm 30Rnd Fort (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "5.45x39mm Ball Reload Tracer";
    lastRoundsTracer = 4;
    tracersEvery = 4;
    mass = 10;
};
class CLASS(30Rnd_545x39_Ball_Tracer_Fort): CLASS(30Rnd_545x39_Ball_Fort) {
    displayName = "5.45mm 30Rnd Fort [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "5.45x39mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(30Rnd_545x39_EPR_Fort): CLASS(30Rnd_545x39_Ball_Fort) {
    ammo = QCLASS(545x39_EPR);
    displayName = "5.45mm 30Rnd Fort (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "5.45x39mm EPR Reload Tracer";
};
class CLASS(30Rnd_545x39_AP_Fort): CLASS(30Rnd_545x39_EPR_Fort) {
    ammo = QCLASS(545x39_AP);
    displayName = "5.45mm 30Rnd Fort (AP)";
    displayNameShort = "AP";
    descriptionShort = "5.45x39mm AP Reload Tracer";
};
