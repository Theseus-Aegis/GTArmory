// .45ACP
class CLASS(25Rnd_45ACP_Ball): 30Rnd_45ACP_Mag_SMG_01 {
    MACRO_SCOPE
    ammo = QCLASS(45ACP_Ball);
    descriptionShort = ".45ACP Ball Reload Tracer";
    displayName = ".45ACP 25Rnd (Ball)";
    lastRoundsTracer = 4;
    mass = 9;
};
class CLASS(25Rnd_45ACP_Ball_Tracer): CLASS(25Rnd_45ACP_Ball) {
    descriptionShort = ".45ACP Ball Tracer";
    displayName = ".45ACP 25Rnd [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(25Rnd_45ACP_EPR): CLASS(25Rnd_45ACP_Ball) {
    ammo = QCLASS(45ACP_EPR);
    descriptionShort = ".45ACP EPR Reload Tracer";
    displayName = ".45ACP 25Rnd (EPR)";
};
