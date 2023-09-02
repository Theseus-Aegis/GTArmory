// 7.62x51mm FAL
class CLASS(20Rnd_762x51_Ball_FAL): CUP_20Rnd_762x51_FNFAL_M {
    MACRO_SCOPE;
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

// 7.62x51mm SCAR-H
class CLASS(20Rnd_762x51_Ball_SCAR): CUP_20Rnd_762x51_B_SCAR_bkl {
    MACRO_SCOPE;
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
