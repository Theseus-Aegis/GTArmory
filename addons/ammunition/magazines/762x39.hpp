// 7.62x39mm (Plastic, Black)
class CLASS(30Rnd_762x39_Ball_Plastic_Black): 30Rnd_762x39_AK12_Mag_F {
    MACRO_SCOPE
    ammo = QCLASS(762x39_Ball);
    descriptionShort = "7.62x39mm Ball Reload Tracer";
    displayName = "7.62mm 30Rnd AK Plastic Black (Ball)";
    lastRoundsTracer = 4;
};
class CLASS(30Rnd_762x39_Ball_Tracer_Plastic_Black): CLASS(30Rnd_762x39_Ball_Plastic_Black) {
    descriptionShort = "7.62x39mm Ball Tracer";
    displayName = "7.62mm 30Rnd AK Plastic Black [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(30Rnd_762x39_EPR_Plastic_Black): CLASS(30Rnd_762x39_Ball_Plastic_Black) {
    ammo = QCLASS(762x39_EPR);
    descriptionShort = "7.62x39mm EPR Reload Tracer";
    displayName = "7.62mm 30Rnd AK Plastic Black (EPR)";
};
class CLASS(30Rnd_762x39_AP_Plastic_Black): CLASS(30Rnd_762x39_EPR_Plastic_Black) {
    ammo = QCLASS(762x39_AP);
    descriptionShort = "7.62x39mm AP Reload Tracer";
    displayName = "7.62mm 30Rnd AK Plastic Black (AP)";
};

// 7.62x39mm (Plastic, Tan)
class CLASS(30Rnd_762x39_Ball_Plastic_Tan): CLASS(30Rnd_762x39_Ball_Plastic_Black) {
    MACRO_762_AK12_MAGAZINE_TAN
    displayName = "7.62mm 30Rnd AK Plastic Tan (Ball)";
};
class CLASS(30Rnd_762x39_Ball_Tracer_Plastic_Tan): CLASS(30Rnd_762x39_Ball_Tracer_Plastic_Black) {
    MACRO_762_AK12_MAGAZINE_TAN
    displayName = "7.62mm 30Rnd AK Plastic Tan [T] (Ball)";
};
class CLASS(30Rnd_762x39_EPR_Plastic_Tan): CLASS(30Rnd_762x39_EPR_Plastic_Black) {
    MACRO_762_AK12_MAGAZINE_TAN
    displayName = "7.62mm 30Rnd AK Plastic Tan (EPR)";
};
class CLASS(30Rnd_762x39_AP_Plastic_Tan): CLASS(30Rnd_762x39_AP_Plastic_Black) {
    MACRO_762_AK12_MAGAZINE_TAN
    displayName = "7.62mm 30Rnd AK Plastic Tan (AP)";
};

// 7.62x39mm (Metal)
class CLASS(30Rnd_762x39_Ball_Metal): 30Rnd_762x39_Mag_F {
    MACRO_SCOPE
    ammo = QCLASS(762x39_Ball);
    descriptionShort = "7.62x39mm Ball Reload Tracer";
    displayName = "7.62mm 30Rnd AK Metal (Ball)";
    lastRoundsTracer = 4;
};
class CLASS(30Rnd_762x39_Ball_Tracer_Metal): CLASS(30Rnd_762x39_Ball_Metal) {
    descriptionShort = "7.62x39mm Ball Tracer";
    displayName = "7.62mm 30Rnd AK Metal [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(30Rnd_762x39_EPR_Metal): CLASS(30Rnd_762x39_Ball_Metal) {
    ammo = QCLASS(762x39_EPR);
    descriptionShort = "7.62x39mm EPR Reload Tracer";
    displayName = "7.62mm 30Rnd AK Metal (EPR)";
};
class CLASS(30Rnd_762x39_AP_Metal): CLASS(30Rnd_762x39_EPR_Metal) {
    ammo = QCLASS(762x39_AP);
    descriptionShort = "7.62x39mm AP Reload Tracer";
    displayName = "7.62mm 30Rnd AK Metal (AP)";
};

// 7.62x39mm (Drum)
class CLASS(75Rnd_762x39_Ball_Drum): 75rnd_762x39_AK12_Mag_F {
    MACRO_SCOPE
    ammo = QCLASS(762x39_Ball);
    descriptionShort = "7.62x39mm Ball Tracer Every 4";
    displayName = "7.62mm 75Rnd AK Drum [TE4] (Ball)";
    tracersEvery = 4;
    mass = 25;
};
class CLASS(75Rnd_762x39_Ball_Tracer_Drum): CLASS(75Rnd_762x39_Ball_Drum) {
    descriptionShort = "7.62x39mm Ball Tracer";
    displayName = "7.62mm 75Rnd AK Drum [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(75Rnd_762x39_EPR_Drum): CLASS(75Rnd_762x39_Ball_Drum) {
    ammo = QCLASS(762x39_EPR);
    descriptionShort = "7.62x39mm EPR Tracer Every 4";
    displayName = "7.62mm 75Rnd AK Drum [TE4] (EPR)";
};

// 7.62x39mm CZ807
class CLASS(30Rnd_762x39_Ball_CZ): CUP_30Rnd_762x39_CZ807 {
    MACRO_SCOPE
    ammo = QCLASS(762x39_Ball);
    descriptionShort = "7.62x39mm Ball Reload Tracer";
    displayName = "7.62mm 30Rnd CZ (Ball)";
    lastRoundsTracer = 4;
    mass = 10;
};
class CLASS(30Rnd_762x39_Ball_Tracer_CZ): CLASS(30Rnd_762x39_Ball_CZ) {
    descriptionShort = "7.62x39mm Ball Tracer";
    displayName = "7.62mm 30Rnd CZ [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(30Rnd_762x39_EPR_CZ): CLASS(30Rnd_762x39_Ball_CZ) {
    ammo = QCLASS(762x39_EPR);
    descriptionShort = "7.62x39mm EPR Reload Tracer";
    displayName = "7.62mm 30Rnd CZ (EPR)";
};
class CLASS(30Rnd_762x39_AP_CZ): CLASS(30Rnd_762x39_EPR_CZ) {
    ammo = QCLASS(762x39_AP);
    descriptionShort = "7.62x39mm AP Reload Tracer";
    displayName = "7.62mm 30Rnd CZ (AP)";
};
