// 7.62x51mm CZ750
class CLASS(10Rnd_762x51_EPR_CZ750): CUP_10Rnd_762x51_CZ750 {
    MACRO_SCOPE;
    ammo = QCLASS(762x51_EPR);
    displayName = "7.62mm 10Rnd CZ750 [T] (EPR)";
    displayNameShort = "EPR Tracer";
    descriptionShort = "7.62x51mm EPR Tracer";
    tracersEvery = 1;
    mass = 7;
};
class CLASS(10Rnd_762x51_AP_CZ750): CLASS(10Rnd_762x51_EPR_CZ750) {
    ammo = QCLASS(762x51_AP);
    displayName = "7.62mm 10Rnd CZ750 [T] (AP)";
    displayNameShort = "AP Tracer";
    descriptionShort = "7.62x51mm AP Tracer";
};

// 7.62x51mm FAL
class CLASS(20Rnd_762x51_Ball_FAL): CUP_20Rnd_762x51_FNFAL_M {
    MACRO_SCOPE;
    ammo = QCLASS(762x51_Ball);
    displayName = "7.62mm 20Rnd FAL (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "7.62x51mm Ball Reload Tracer";
    lastRoundsTracer = 2;
    tracersEvery = 4;
    mass = 11;
};
class CLASS(20Rnd_762x51_Ball_Tracer_FAL): CLASS(20Rnd_762x51_Ball_FAL) {
    displayName = "7.62mm 20Rnd FAL [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "7.62x51mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(20Rnd_762x51_EPR_FAL): CLASS(20Rnd_762x51_Ball_FAL) {
    ammo = QCLASS(762x51_EPR);
    displayName = "7.62mm 20Rnd FAL (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "7.62x51mm EPR Reload Tracer";
};
class CLASS(20Rnd_762x51_AP_FAL): CLASS(20Rnd_762x51_EPR_FAL) {
    ammo = QCLASS(762x51_AP);
    displayName = "7.62mm 20Rnd FAL (AP)";
    displayNameShort = "AP";
    descriptionShort = "7.62x51mm AP Reload Tracer";
};

// 7.62x51mm HK417
class CLASS(20Rnd_762x51_Ball_HK417): CUP_20Rnd_762x51_HK417 {
    MACRO_SCOPE;
    ammo = QCLASS(762x51_Ball);
    displayName = "7.62mm 20Rnd HK417 (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "7.62x51mm Ball Reload Tracer";
    lastRoundsTracer = 2;
    tracersEvery = 4;
    mass = 11;
};
class CLASS(20Rnd_762x51_Ball_Tracer_HK417): CLASS(20Rnd_762x51_Ball_HK417) {
    displayName = "7.62mm 20Rnd HK417 [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "7.62x51mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(20Rnd_762x51_EPR_HK417): CLASS(20Rnd_762x51_Ball_HK417) {
    ammo = QCLASS(762x51_EPR);
    displayName = "7.62mm 20Rnd HK417 (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "7.62x51mm EPR Reload Tracer";
};
class CLASS(20Rnd_762x51_AP_HK417): CLASS(20Rnd_762x51_Ball_HK417) {
    ammo = QCLASS(762x51_AP);
    displayName = "7.62mm 20Rnd HK417 (AP)";
    displayNameShort = "AP";
    descriptionShort = "7.62x51mm AP Reload Tracer";
};

// 7.62x51mm M110
class CLASS(20Rnd_762x51_Ball_M110): CUP_20Rnd_762x51_B_M110 {
    MACRO_SCOPE;
    ammo = QCLASS(762x51_Ball);
    displayName = "7.62mm 20Rnd M110 (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "7.62x51mm Ball Reload Tracer";
    lastRoundsTracer = 2;
    tracersEvery = 4;
    mass = 11;
};
class CLASS(20Rnd_762x51_Ball_Tracer_M110): CLASS(20Rnd_762x51_Ball_M110) {
    displayName = "7.62mm 20Rnd M110 [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "7.62x51mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(20Rnd_762x51_EPR_M110): CLASS(20Rnd_762x51_Ball_M110) {
    ammo = QCLASS(762x51_EPR);
    displayName = "7.62mm 20Rnd M110 (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "7.62x51mm EPR Reload Tracer";
};
class CLASS(20Rnd_762x51_AP_M110): CLASS(20Rnd_762x51_Ball_M110) {
    ammo = QCLASS(762x51_AP);
    displayName = "7.62mm 20Rnd M110 (AP)";
    displayNameShort = "AP";
    descriptionShort = "7.62x51mm AP Reload Tracer";
};

// 7.62x51mm SCAR-H
class CLASS(20Rnd_762x51_Ball_SCAR): CUP_20Rnd_762x51_B_SCAR_bkl {
    MACRO_SCOPE;
    ammo = QCLASS(762x51_Ball);
    displayName = "7.62mm 20Rnd SCAR (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "7.62x51mm Ball Reload Tracer";
    lastRoundsTracer = 2;
    tracersEvery = 4;
    mass = 11;
};
class CLASS(20Rnd_762x51_Ball_Tracer_SCAR): CLASS(20Rnd_762x51_Ball_SCAR) {
    displayName = "7.62mm 20Rnd SCAR [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "7.62x51mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(20Rnd_762x51_EPR_SCAR): CLASS(20Rnd_762x51_Ball_SCAR) {
    ammo = QCLASS(762x51_EPR);
    displayName = "7.62mm 20Rnd SCAR (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "7.62x51mm EPR Reload Tracer";
};
class CLASS(20Rnd_762x51_AP_SCAR): CLASS(20Rnd_762x51_Ball_SCAR) {
    ammo = QCLASS(762x51_AP);
    displayName = "7.62mm 20Rnd SCAR (AP)";
    displayNameShort = "AP";
    descriptionShort = "7.62x51mm AP Reload Tracer";
};
