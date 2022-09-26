// 5.45x39mm (Using the nice looking AK-12 Mags)
class CLASS(30Rnd_545x39_Ball): 30Rnd_545x39_Mag_F {
    MACRO_SCOPE
    MACRO_AK12_MAGAZINE_TAN
    ammo = QCLASS(545x39_Ball);
    descriptionShort = "5.45x39mm Ball Reload Tracer";
    displayName = "5.45mm 30Rnd Tan (Ball)";
    lastRoundsTracer = 4;
    mass = 10;
};
class CLASS(30Rnd_545x39_Ball_Tracer): CLASS(30Rnd_545x39_Ball) {
    descriptionShort = "5.45x39mm Ball Tracer";
    displayName = "5.45mm 30Rnd Tan [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(30Rnd_545x39_EPR): CLASS(30Rnd_545x39_Ball) {
    ammo = QCLASS(545x39_EPR);
    descriptionShort = "5.45x39mm EPR Reload Tracer";
    displayName = "5.45mm 30Rnd Tan (EPR)";
};
class CLASS(30Rnd_545x39_AP): CLASS(30Rnd_545x39_EPR) {
    ammo = QCLASS(545x39_AP);
    descriptionShort = "5.45x39mm AP Reload Tracer";
    displayName = "5.45mm 30Rnd Tan (AP)";
};

// 5.45x39mm Black
class CLASS(30Rnd_545x39_Ball_Black): CLASS(30Rnd_545x39_Ball) {
    MACRO_AK12_MAGAZINE_BLACK
    displayName = "5.45mm 30Rnd Black (Ball)";
};
class CLASS(30Rnd_545x39_Ball_Tracer_Black): CLASS(30Rnd_545x39_Ball_Tracer) {
    MACRO_AK12_MAGAZINE_BLACK
    displayName = "5.45mm 30Rnd Black [T] (Ball)";
};

class CLASS(30Rnd_545x39_EPR_Black): CLASS(30Rnd_545x39_EPR) {
    MACRO_AK12_MAGAZINE_BLACK
    displayName = "5.45mm 30Rnd Black (EPR)";
};
class CLASS(30Rnd_545x39_AP_Black): CLASS(30Rnd_545x39_AP) {
    MACRO_AK12_MAGAZINE_BLACK
    displayName = "5.45mm 30Rnd Black (AP)";
};

// 5.45x39mm Quadstack
class CLASS(60Rnd_545x39_Ball_Quadstack): CUP_60Rnd_545x39_AK74M_M {
    MACRO_SCOPE
    ammo = QCLASS(545x39_Ball);
    descriptionShort = "5.45x39mm Ball Tracer Every 4";
    displayName = "5.45mm 60Rnd Quadstack [TE4] (Ball)";
    tracersEvery = 4;
    mass = 20;
};
class CLASS(60Rnd_545x39_Ball_Tracer_Quadstack): CLASS(60Rnd_545x39_Ball_Quadstack) {
    descriptionShort = "5.45x39mm Ball Tracer";
    displayName = "5.45mm 60Rnd Quadstack [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(60Rnd_545x39_EPR_Quadstack): CLASS(60Rnd_545x39_Ball_Quadstack) {
    ammo = QCLASS(545x39_EPR);
    descriptionShort = "5.45x39mm EPR Tracer Every 4";
    displayName = "5.45mm 60Rnd Quadstack [TE4] (EPR)";
};

// 5.45x39mm Fort
class CLASS(30Rnd_545x39_Ball_Fort): CUP_30Rnd_545x39_Fort224_M {
    MACRO_SCOPE
    ammo = QCLASS(545x39_Ball);
    descriptionShort = "5.45x39mm Ball Reload Tracer";
    displayName = "5.45mm 30Rnd Fort (Ball)";
    lastRoundsTracer = 4;
    mass = 10;
};
class CLASS(30Rnd_545x39_Ball_Tracer_Fort): CLASS(30Rnd_545x39_Ball_Fort) {
    descriptionShort = "5.45x39mm Ball Tracer";
    displayName = "5.45mm 30Rnd Fort [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(30Rnd_545x39_EPR_Fort): CLASS(30Rnd_545x39_Ball_Fort) {
    ammo = QCLASS(545x39_EPR);
    descriptionShort = "5.45x39mm EPR Reload Tracer";
    displayName = "5.45mm 30Rnd Fort (EPR)";
};
class CLASS(30Rnd_545x39_AP_Fort): CLASS(30Rnd_545x39_EPR_Fort) {
    ammo = QCLASS(545x39_AP);
    descriptionShort = "5.45x39mm AP Reload Tracer";
    displayName = "5.45mm 30Rnd Fort (AP)";
};
