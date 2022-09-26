// 6.8x43mm ACR
class CLASS(30Rnd_68x43_Ball_ACR): CUP_30Rnd_680x43_Stanag {
    MACRO_SCOPE
    ammo = QCLASS(68x43_Ball);
    descriptionShort = "6.8x43mm Ball Reload Tracer";
    displayName = "6.8mm 30Rnd ACR (Ball)";
    lastRoundsTracer = 4;
    mass = 10;
};
class CLASS(30Rnd_68x43_Ball_Tracer_ACR): CLASS(30Rnd_68x43_Ball_ACR) {
    descriptionShort = "6.8x43mm Ball Tracer";
    displayName = "6.8mm 30Rnd ACR [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(30Rnd_68x43_EPR_ACR): CLASS(30Rnd_68x43_Ball_ACR) {
    ammo = QCLASS(68x43_EPR);
    descriptionShort = "6.8x43mm EPR Reload Tracer";
    displayName = "6.8mm 30Rnd ACR (EPR)";
};
class CLASS(30Rnd_68x43_AP_ACR): CLASS(30Rnd_68x43_EPR_ACR) {
    ammo = QCLASS(68x43_AP);
    descriptionShort = "6.8x43mm AP Reload Tracer";
    displayName = "6.8mm 30Rnd ACR (AP)";
};
