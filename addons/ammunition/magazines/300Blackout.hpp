class CLASS(30Rnd_300AAC_Ball): hlc_29rnd_300BLK_STANAG_T {
    MACRO_SCOPE
    ammo = QCLASS(300AAC_Ball);
    displayName = ".300AAC 30Rnd (Ball)";
    displayNameShort = "Ball";
    descriptionShort = ".300AAC Ball Reload Tracer Subsonic";
    lastRoundsTracer = 4;
    mass = 10;
};
class CLASS(30Rnd_300AAC_Ball_Tracer): CLASS(30Rnd_300AAC_Ball) {
    displayName = ".300AAC 30Rnd [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = ".300AAC Ball Tracer Subsonic";
    tracersEvery = 1;
};
class CLASS(30Rnd_300AAC_EPR): CLASS(30Rnd_300AAC_Ball) {
    ammo = QCLASS(300AAC_EPR);
    displayName = ".300AAC 30Rnd (EPR)";
    displayNameShort = "EPR";
    descriptionShort = ".300AAC EPR Reload Tracer Subsonic";
};
class CLASS(30Rnd_300AAC_AP): CLASS(30Rnd_300AAC_EPR) {
    ammo = QCLASS(300AAC_AP);
    displayName = ".300AAC 30Rnd (AP)";
    displayNameShort = "AP";
    descriptionShort = ".300AAC AP Reload Tracer Subsonic";
};
