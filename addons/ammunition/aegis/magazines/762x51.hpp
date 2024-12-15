// 7.62x51mm SCAR-H
class 20Rnd_762x51_Mag;
class CLASS(20Rnd_762x51_Ball_SCAR_Aegis): 20Rnd_762x51_Mag {
    MACRO_SCOPE;
    ammo = QCLASS(762x51_Ball);
    displayName = "7.62mm 20Rnd SCAR (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "7.62x51mm Ball Reload Tracer";
    lastRoundsTracer = 2;
    mass = 11;
};
class CLASS(20Rnd_762x51_Ball_Tracer_SCAR_Aegis): CLASS(20Rnd_762x51_Ball_SCAR_Aegis) {
    displayName = "7.62mm 20Rnd SCAR [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "7.62x51mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(20Rnd_762x51_EPR_SCAR_Aegis): CLASS(20Rnd_762x51_Ball_SCAR_Aegis) {
    ammo = QCLASS(762x51_EPR);
    displayName = "7.62mm 20Rnd SCAR (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "7.62x51mm EPR Reload Tracer";
};
class CLASS(20Rnd_762x51_AP_SCAR_Aegis): CLASS(20Rnd_762x51_Ball_SCAR_Aegis) {
    ammo = QCLASS(762x51_AP);
    displayName = "7.62mm 20Rnd SCAR (AP)";
    displayNameShort = "AP";
    descriptionShort = "7.62x51mm AP Reload Tracer";
};
