// 6.8x43mm ACR
class CLASS(30Rnd_68x43_Ball_ACR): CUP_30Rnd_680x43_Stanag {
    MACRO_SCOPE;
    ammo = QCLASS(68x43_Ball);
    displayName = "6.8mm 30Rnd ACR (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "6.8x43mm Ball Reload Tracer";
    lastRoundsTracer = 4;
    tracersEvery = 4;
    mass = 10;
};
class CLASS(30Rnd_68x43_Ball_Tracer_ACR): CLASS(30Rnd_68x43_Ball_ACR) {
    displayName = "6.8mm 30Rnd ACR [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "6.8x43mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(30Rnd_68x43_EPR_ACR): CLASS(30Rnd_68x43_Ball_ACR) {
    ammo = QCLASS(68x43_EPR);
    displayName = "6.8mm 30Rnd ACR (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "6.8x43mm EPR Reload Tracer";
};
class CLASS(30Rnd_68x43_AP_ACR): CLASS(30Rnd_68x43_EPR_ACR) {
    ammo = QCLASS(68x43_AP);
    displayName = "6.8mm 30Rnd ACR (AP)";
    displayNameShort = "AP";
    descriptionShort = "6.8x43mm AP Reload Tracer";
};
