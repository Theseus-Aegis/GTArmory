// .45ACP FNX-45
class CLASS(15Rnd_45ACP_FNX45_Ball): 11Rnd_45ACP_Mag {
    MACRO_SCOPE;
    ammo = QCLASS(45ACP_Ball);
    descriptionShort = ".45ACP Ball Reload Tracer";
    displayName = ".45ACP 15Rnd FNX-45 (Ball)";
    lastRoundsTracer = 2;
};

// .45ACP C-1911
class CLASS(8Rnd_45ACP_C1911_Ball): 9Rnd_45ACP_Mag {
    MACRO_SCOPE;
    ammo = QCLASS(45ACP_Ball);
    descriptionShort = ".45ACP Ball Reload Tracer";
    displayName = ".45ACP 8Rnd C-1911 (Ball)";
    lastRoundsTracer = 2;
};

// .45ACP SMG
class CLASS(25Rnd_45ACP_Ball): 30Rnd_45ACP_Mag_SMG_01 {
    MACRO_SCOPE;
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
