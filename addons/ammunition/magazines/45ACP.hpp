// .45ACP
class CLASS(25Rnd_45ACP_Ball): 30Rnd_45ACP_Mag_SMG_01 {
    MACRO_SCOPE
    ammo = QCLASS(45ACP_Ball);
    displayName = ".45ACP 25Rnd (Ball)";
    displayNameShort = "Ball";
    descriptionShort = ".45ACP Ball Reload Tracer";
    lastRoundsTracer = 4;
    mass = 9;
};
class CLASS(25Rnd_45ACP_Ball_Tracer): CLASS(25Rnd_45ACP_Ball) {
    displayName = ".45ACP 25Rnd [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = ".45ACP Ball Tracer";
    tracersEvery = 1;
};
class CLASS(25Rnd_45ACP_EPR): CLASS(25Rnd_45ACP_Ball) {
    ammo = QCLASS(45ACP_EPR);
    displayName = ".45ACP 25Rnd (EPR)";
    displayNameShort = "EPR";
    descriptionShort = ".45ACP EPR Reload Tracer";
};
