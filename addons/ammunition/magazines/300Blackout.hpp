class CLASS(30Rnd_300AAC_Ball): 29rnd_300BLK_STANAG_T {
    MACRO_SCOPE
    ammo = QCLASS(300AAC_Ball);
    descriptionShort = ".300AAC Ball Reload Tracer Subsonic";
    displayName = ".300AAC 30Rnd (Ball)";
    lastRoundsTracer = 4;
    mass = 10;
};
class CLASS(30Rnd_300AAC_Ball_Tracer): CLASS(30Rnd_300AAC_Ball) {
    descriptionShort = ".300AAC Ball Tracer Subsonic";
    displayName = ".300AAC 30Rnd [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(30Rnd_300AAC_EPR): CLASS(30Rnd_300AAC_Ball) {
    ammo = QCLASS(300AAC_EPR);
    descriptionShort = ".300AAC EPR Reload Tracer Subsonic";
    displayName = ".300AAC 30Rnd (EPR)";
};
class CLASS(30Rnd_300AAC_AP): CLASS(30Rnd_300AAC_EPR) {
    ammo = QCLASS(300AAC_AP);
    descriptionShort = ".300AAC AP Reload Tracer Subsonic";
    displayName = ".300AAC 30Rnd (AP)";
};
