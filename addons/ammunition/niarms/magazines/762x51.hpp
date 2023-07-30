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
