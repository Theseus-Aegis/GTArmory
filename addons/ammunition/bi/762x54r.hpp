// 7.62x54r Negev Boxes
class CLASS(150Rnd_762x54r_Ball_Belt): 150Rnd_762x54_Box {
    MACRO_SCOPE;
    ammo = QCLASS(762x54r_Ball);
    displayName = "7.62mm 150Rnd Belt [TE4] (Ball)";
    displayNameShort = "Ball TE4";
    descriptionShort = "7.62x54r Ball Tracer Every 4";
    tracersEvery = 4;
    mass = 35;
};
class CLASS(150Rnd_762x54r_Ball_Tracer_Belt): CLASS(150Rnd_762x54r_Ball_Belt) {
    displayName = "7.62mm 150Rnd Belt [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "7.62x54r Ball Tracer";
    tracersEvery = 1;
};
class CLASS(150Rnd_762x54r_EPR_Belt): CLASS(150Rnd_762x54r_Ball_Belt) {
    ammo = QCLASS(762x54r_EPR);
    displayName = "7.62mm 150Rnd Belt [TE4] (EPR)";
    displayNameShort = "EPR TE4";
    descriptionShort = "7.62x54r EPR Tracer Every 4";
};
class CLASS(150Rnd_762x54r_AP_Belt): CLASS(150Rnd_762x54r_Ball_Belt) {
    ammo = QCLASS(762x54r_AP);
    displayName = "7.62mm 150Rnd Belt [TE4] (AP)";
    displayNameShort = "AP TE4";
    descriptionShort = "7.62x54r AP Tracer Every 4";
};


// 7.62x54r SVD/VS-121 Magazines
class CLASS(10Rnd_762x54r_Ball): 10Rnd_762x54_Mag {
    MACRO_SCOPE;
    ammo = QCLASS(762x54r_Ball);
    displayName = "7.62mm 10Rnd (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "7.62x54r Ball Reload Tracer";
    lastRoundsTracer = 2;
    tracersEvery = 4;
    mass = 8;
};
class CLASS(10Rnd_762x54r_Ball_Tracer): CLASS(10Rnd_762x54r_Ball) {
    displayName = "7.62mm 10Rnd [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "7.62x54r Ball Tracer";
    tracersEvery = 1;
};
class CLASS(10Rnd_762x54r_EPR): CLASS(10Rnd_762x54r_Ball) {
    ammo = QCLASS(762x54r_EPR);
    displayName = "7.62mm 10Rnd (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "7.62x54r EPR Reload Tracer";
};
class CLASS(10Rnd_762x54r_AP): CLASS(10Rnd_762x54r_Ball) {
    ammo = QCLASS(762x54r_AP);
    displayName = "7.62mm 10Rnd (AP)";
    displayNameShort = "AP";
    descriptionShort = "7.62x54r AP Reload Tracer";
};
