// WS FAL (Original FAL magazines are not properly positioned)
class CLASS(20Rnd_762x51_Ball_SLR): 20Rnd_762x51_slr_lxWS {
    MACRO_SCOPE;
    ammo = QCLASS(762x51_Ball);
    displayName = "7.62mm 20Rnd SLR (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "7.62x51mm Ball Reload Tracer";
    lastRoundsTracer = 2;
    tracersEvery = 4;
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

// Western Sahara Belt
class CLASS(100Rnd_762x51_Ball_Belt_SA77): 100Rnd_762x51_S77_Yellow_lxWS {
    MACRO_SCOPE;
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
class CLASS(100Rnd_762x51_AP_Belt_SA77): CLASS(100Rnd_762x51_Ball_Belt_SA77) {
    ammo = QCLASS(762x51_AP);
    displayName = "7.62mm 100Rnd SA-77 [TE4] (AP)";
    displayNameShort = "AP TE4";
    descriptionShort = "7.62x51mm AP Tracer Every 4";
};
