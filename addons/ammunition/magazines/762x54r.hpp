// 7.62x54r Negev Boxes
class CLASS(150Rnd_762x54r_Ball_Belt): 150Rnd_762x54_Box {
    MACRO_SCOPE
    ammo = QCLASS(762x54r_Ball);
    descriptionShort = "7.62x54r Ball Tracer Every 4";
    displayName = "7.62mm 150Rnd Belt [TE4] (Ball)";
    tracersEvery = 4;
    mass = 35;
};
class CLASS(150Rnd_762x54r_Ball_Tracer_Belt): CLASS(150Rnd_762x54r_Ball_Belt) {
    descriptionShort = "7.62x54r Ball Tracer";
    displayName = "7.62mm 150Rnd Belt [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(150Rnd_762x54r_EPR_Belt): CLASS(150Rnd_762x54r_Ball_Belt) {
    ammo = QCLASS(762x54r_EPR);
    descriptionShort = "7.62x54r EPR Tracer Every 4";
    displayName = "7.62mm 150Rnd Belt [TE4] (EPR)";
};

// 7.62x54r SVD/VS-121 Magazines
class CLASS(10Rnd_762x54r_Ball): 10Rnd_762x54_Mag {
    MACRO_SCOPE
    ammo = QCLASS(762x54r_Ball);
    descriptionShort = "7.62x54r Ball Reload Tracer";
    displayName = "7.62mm 10Rnd (Ball)";
    lastRoundsTracer = 2;
    mass = 8;
};
class CLASS(10Rnd_762x54r_Ball_Tracer): CLASS(10Rnd_762x54r_Ball) {
    descriptionShort = "7.62x54r Ball Tracer";
    displayName = "7.62mm 10Rnd [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(10Rnd_762x54r_EPR): CLASS(10Rnd_762x54r_Ball) {
    ammo = QCLASS(762x54r_EPR);
    descriptionShort = "7.62x54r EPR Reload Tracer";
    displayName = "7.62mm 10Rnd (EPR)";
};
class CLASS(10Rnd_762x54r_AP): CLASS(10Rnd_762x54r_Ball) {
    ammo = QCLASS(762x54r_AP);
    descriptionShort = "7.62x54r AP Reload Tracer";
    displayName = "7.62mm 10Rnd (AP)";
};
