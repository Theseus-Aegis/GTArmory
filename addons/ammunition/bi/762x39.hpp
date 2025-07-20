// 7.62x39mm (Plastic, Black)
class CLASS(30Rnd_762x39_Ball_Plastic_Black): 30Rnd_762x39_AK12_Mag_F {
    MACRO_SCOPE;
    ammo = QCLASS(762x39_Ball);
    displayName = "7.62mm 30Rnd AK Plastic Black (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "7.62x39mm Ball Reload Tracer";
    lastRoundsTracer = 4;
    tracersEvery = 4;
    mass = 11;
};
class CLASS(30Rnd_762x39_Ball_Tracer_Plastic_Black): CLASS(30Rnd_762x39_Ball_Plastic_Black) {
    displayName = "7.62mm 30Rnd AK Plastic Black [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "7.62x39mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(30Rnd_762x39_EPR_Plastic_Black): CLASS(30Rnd_762x39_Ball_Plastic_Black) {
    ammo = QCLASS(762x39_EPR);
    displayName = "7.62mm 30Rnd AK Plastic Black (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "7.62x39mm EPR Reload Tracer";
};
class CLASS(30Rnd_762x39_AP_Plastic_Black): CLASS(30Rnd_762x39_EPR_Plastic_Black) {
    ammo = QCLASS(762x39_AP);
    displayName = "7.62mm 30Rnd AK Plastic Black (AP)";
    displayNameShort = "AP";
    descriptionShort = "7.62x39mm AP Reload Tracer";
};

// 7.62x39mm (Plastic, Tan)
class CLASS(30Rnd_762x39_Ball_Plastic_Tan): CLASS(30Rnd_762x39_Ball_Plastic_Black) {
    MACRO_762_AK12_MAGAZINE_TAN;
    displayName = "7.62mm 30Rnd AK Plastic Tan (Ball)";
    mass = 11;
};
class CLASS(30Rnd_762x39_Ball_Tracer_Plastic_Tan): CLASS(30Rnd_762x39_Ball_Tracer_Plastic_Black) {
    MACRO_762_AK12_MAGAZINE_TAN;
    displayName = "7.62mm 30Rnd AK Plastic Tan [T] (Ball)";
};
class CLASS(30Rnd_762x39_EPR_Plastic_Tan): CLASS(30Rnd_762x39_EPR_Plastic_Black) {
    MACRO_762_AK12_MAGAZINE_TAN;
    displayName = "7.62mm 30Rnd AK Plastic Tan (EPR)";
};
class CLASS(30Rnd_762x39_AP_Plastic_Tan): CLASS(30Rnd_762x39_AP_Plastic_Black) {
    MACRO_762_AK12_MAGAZINE_TAN;
    displayName = "7.62mm 30Rnd AK Plastic Tan (AP)";
};

// 7.62x39mm (Metal)
class CLASS(30Rnd_762x39_Ball_Metal): 30Rnd_762x39_Mag_F {
    MACRO_SCOPE;
    ammo = QCLASS(762x39_Ball);
    displayName = "7.62mm 30Rnd AK Metal (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "7.62x39mm Ball Reload Tracer";
    lastRoundsTracer = 4;
    tracersEvery = 4;
    mass = 11;
};
class CLASS(30Rnd_762x39_Ball_Tracer_Metal): CLASS(30Rnd_762x39_Ball_Metal) {
    displayName = "7.62mm 30Rnd AK Metal [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "7.62x39mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(30Rnd_762x39_EPR_Metal): CLASS(30Rnd_762x39_Ball_Metal) {
    ammo = QCLASS(762x39_EPR);
    displayName = "7.62mm 30Rnd AK Metal (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "7.62x39mm EPR Reload Tracer";
};
class CLASS(30Rnd_762x39_AP_Metal): CLASS(30Rnd_762x39_EPR_Metal) {
    ammo = QCLASS(762x39_AP);
    displayName = "7.62mm 30Rnd AK Metal (AP)";
    displayNameShort = "AP";
    descriptionShort = "7.62x39mm AP Reload Tracer";
};

// 7.62x39mm (Drum) Plastic
class CLASS(75Rnd_762x39_Ball_Drum): 75rnd_762x39_AK12_Mag_F {
    MACRO_SCOPE;
    ammo = QCLASS(762x39_Ball);
    displayName = "7.62mm 75Rnd Plastic Drum [TE4] (Ball)";
    displayNameShort = "Ball TE4";
    descriptionShort = "7.62x39mm Ball Tracer Every 4";
    tracersEvery = 4;
    mass = 25;
};
class CLASS(75Rnd_762x39_Ball_Tracer_Drum): CLASS(75Rnd_762x39_Ball_Drum) {
    displayName = "7.62mm 75Rnd Plastic Drum [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "7.62x39mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(75Rnd_762x39_EPR_Drum): CLASS(75Rnd_762x39_Ball_Drum) {
    ammo = QCLASS(762x39_EPR);
    displayName = "7.62mm 75Rnd Plastic Drum [TE4] (EPR)";
    displayNameShort = "EPR TE4";
    descriptionShort = "7.62x39mm EPR Tracer Every 4";
};

// 7.62x39mm (Drum) Metal
class CLASS(75Rnd_762x39_Ball_Drum_Metal): 75Rnd_762x39_Mag_F {
    MACRO_SCOPE;
    ammo = QCLASS(762x39_Ball);
    displayName = "7.62mm 75Rnd Metal Drum [TE4] (Ball)";
    displayNameShort = "Ball TE4";
    descriptionShort = "7.62x39mm Ball Tracer Every 4";
    tracersEvery = 4;
    mass = 25;
};
class CLASS(75Rnd_762x39_Ball_Tracer_Drum_Metal): CLASS(75Rnd_762x39_Ball_Drum_Metal) {
    displayName = "7.62mm 75Rnd Metal Drum [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "7.62x39mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(75Rnd_762x39_EPR_Drum_Metal): CLASS(75Rnd_762x39_Ball_Drum_Metal) {
    ammo = QCLASS(762x39_EPR);
    displayName = "7.62mm 75Rnd Metal Drum [TE4] (EPR)";
    displayNameShort = "EPR TE4";
    descriptionShort = "7.62x39mm EPR Tracer Every 4";
};
