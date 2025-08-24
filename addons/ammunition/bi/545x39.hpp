// 5.45x39mm (Using the nice looking AK-12 Mags)
class CLASS(30Rnd_545x39_Ball): 30Rnd_545x39_Mag_F {
    MACRO_SCOPE;
    ammo = QCLASS(545x39_Ball);
    displayName = "5.45mm 30Rnd Tan (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "5.45x39mm Ball Reload Tracer";
    lastRoundsTracer = 4;
    tracersEvery = 4;
    mass = 10;
};
class CLASS(30Rnd_545x39_Ball_Tracer): CLASS(30Rnd_545x39_Ball) {
    displayName = "5.45mm 30Rnd Tan [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "5.45x39mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(30Rnd_545x39_EPR): CLASS(30Rnd_545x39_Ball) {
    ammo = QCLASS(545x39_EPR);
    displayName = "5.45mm 30Rnd Tan (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "5.45x39mm EPR Reload Tracer";
};
class CLASS(30Rnd_545x39_AP): CLASS(30Rnd_545x39_EPR) {
    ammo = QCLASS(545x39_AP);
    displayName = "5.45mm 30Rnd Tan (AP)";
    displayNameShort = "AP";
    descriptionShort = "5.45x39mm AP Reload Tracer";
};

// 5.45x39mm Black
class CLASS(30Rnd_545x39_Ball_Black): CLASS(30Rnd_545x39_Ball) {
    displayName = "5.45mm 30Rnd Black (Ball)";
};
class CLASS(30Rnd_545x39_Ball_Tracer_Black): CLASS(30Rnd_545x39_Ball_Tracer) {
    displayName = "5.45mm 30Rnd Black [T] (Ball)";
};

class CLASS(30Rnd_545x39_EPR_Black): CLASS(30Rnd_545x39_EPR) {
    displayName = "5.45mm 30Rnd Black (EPR)";
};
class CLASS(30Rnd_545x39_AP_Black): CLASS(30Rnd_545x39_AP) {
    displayName = "5.45mm 30Rnd Black (AP)";
};
