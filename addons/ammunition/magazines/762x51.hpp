// 7.62x51mm
class CLASS(20Rnd_762x51_Ball): 20Rnd_762x51_Mag {
    MACRO_SCOPE
    ammo = QCLASS(762x51_Ball);
    displayName = "7.62mm 20Rnd (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "7.62x51mm Ball Reload Tracer";
    lastRoundsTracer = 2;
    mass = 11;
};
class CLASS(20Rnd_762x51_Ball_Tracer): CLASS(20Rnd_762x51_Ball) {
    displayName = "7.62mm 20Rnd [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "7.62x51mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(20Rnd_762x51_EPR): CLASS(20Rnd_762x51_Ball) {
    ammo = QCLASS(762x51_EPR);
    displayName = "7.62mm 20Rnd (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "7.62x51mm EPR Reload Tracer";
};
class CLASS(20Rnd_762x51_AP): CLASS(20Rnd_762x51_Ball) {
    ammo = QCLASS(762x51_AP);
    displayName = "7.62mm 20Rnd (AP)";
    displayNameShort = "AP";
    descriptionShort = "7.62x51mm AP Reload Tracer";
};

// 7.62x51mm FAL
class CLASS(20Rnd_762x51_Ball_FAL): CUP_20Rnd_762x51_FNFAL_M {
    MACRO_SCOPE
    ammo = QCLASS(762x51_Ball);
    displayName = "7.62mm 20Rnd FAL (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "7.62x51mm Ball Reload Tracer";
    lastRoundsTracer = 2;
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

// WS FAL (Original FAL magazines are not properly positioned)
class CLASS(20Rnd_762x51_Ball_SLR): 20Rnd_762x51_slr_lxWS {
    MACRO_SCOPE
    ammo = QCLASS(762x51_Ball);
    displayName = "7.62mm 20Rnd SLR (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "7.62x51mm Ball Reload Tracer";
    lastRoundsTracer = 2;
    mass = 11;
};
class CLASS(20Rnd_762x51_Ball_Tracer_SLR): CLASS(20Rnd_762x51_Ball_SLR) {
    displayName = "7.62mm 20Rnd SLR [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "7.62x51mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(20Rnd_762x51_EPR_SLR): CLASS(20Rnd_762x51_Ball_SLR) {
    ammo = QCLASS(762x51_EPR);
    displayName = "7.62mm 20Rnd SLR (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "7.62x51mm EPR Reload Tracer";
};
class CLASS(20Rnd_762x51_AP_SLR): CLASS(20Rnd_762x51_Ball_SLR) {
    ammo = QCLASS(762x51_AP);
    displayName = "7.62mm 20Rnd SLR (AP)";
    displayNameShort = "AP";
    descriptionShort = "7.62x51mm AP Reload Tracer";
};

// 7.62x51mm SCAR-H
class CLASS(20Rnd_762x51_Ball_SCAR): CUP_20Rnd_762x51_B_SCAR_bkl {
    MACRO_SCOPE
    ammo = QCLASS(762x51_Ball);
    displayName = "7.62mm 20Rnd SCAR (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "7.62x51mm Ball Reload Tracer";
    lastRoundsTracer = 2;
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

// 7.62x51mm Belt
class CLASS(100Rnd_762x51_Ball_Belt): hlc_100Rnd_762x51_B_M60E4 {
    MACRO_SCOPE
    ammo = QCLASS(762x51_Ball);
    displayName = "7.62mm 100Rnd [TE4] (Ball)";
    displayNameShort = "Ball TE4";
    descriptionShort = "7.62x51mm Ball Tracer Every 4";
    tracersEvery = 4;
    mass = 30;
};
class CLASS(100Rnd_762x51_Ball_Tracer_Belt): CLASS(100Rnd_762x51_Ball_Belt) {
    displayName = "7.62mm 100Rnd [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "7.62x51mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(100Rnd_762x51_EPR_Belt): CLASS(100Rnd_762x51_Ball_Belt) {
    ammo = QCLASS(762x51_EPR);
    displayName = "7.62mm 100Rnd [TE4] (EPR)";
    displayNameShort = "EPR TE4";
    descriptionShort = "7.62x51mm EPR Tracer Every 4";
};

// Western Sahara Belt
class CLASS(100Rnd_762x51_Ball_Belt_SA77): 100Rnd_762x51_S77_Yellow_lxWS {
    MACRO_SCOPE
    ammo = QCLASS(762x51_Ball);
    displayName = "7.62mm 100Rnd SA-77 [TE4] (Ball)";
    displayNameShort = "Ball TE4";
    descriptionShort = "7.62x51mm Ball Tracer Every 4";
    tracersEvery = 4;
    mass = 30;
};
class CLASS(100Rnd_762x51_Ball_Tracer_Belt_SA77): CLASS(100Rnd_762x51_Ball_Belt_SA77) {
    displayName = "7.62mm 100Rnd SA-77 [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "7.62x51mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(100Rnd_762x51_EPR_Belt_SA77): CLASS(100Rnd_762x51_Ball_Belt_SA77) {
    ammo = QCLASS(762x51_EPR);
    displayName = "7.62mm 100Rnd SA-77 [TE4] (EPR)";
    displayNameShort = "EPR TE4";
    descriptionShort = "7.62x51mm EPR Tracer Every 4";
};
