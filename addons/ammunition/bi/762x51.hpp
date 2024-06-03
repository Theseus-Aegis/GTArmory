// 7.62x51mm
class CLASS(20Rnd_762x51_Ball): 20Rnd_762x51_Mag {
    MACRO_SCOPE;
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
