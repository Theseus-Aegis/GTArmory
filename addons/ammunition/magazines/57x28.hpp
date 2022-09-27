// 5.7x28mm
class CLASS(50Rnd_57x28_Ball): 50Rnd_570x28_SMG_03 {
    MACRO_SCOPE
    ammo = QCLASS(57x28_Ball);
    descriptionShort = "5.7x28mm Ball Reload Tracer";
    displayName = "5.7mm 50Rnd (Ball)";
    lastRoundsTracer = 4;
    mass = 12;
};
class CLASS(50Rnd_57x28_Ball_Tracer): CLASS(50Rnd_57x28_Ball) {
    descriptionShort = "5.7x28mm Ball Tracer";
    displayName = "5.7mm 50Rnd [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(50Rnd_57x28_EPR): CLASS(50Rnd_57x28_Ball) {
    ammo = QCLASS(57x28_EPR);
    descriptionShort = "5.7x28mm EPR Reload Tracer";
    displayName = "5.7mm 50Rnd (EPR)";
};
class CLASS(50Rnd_57x28_AP): CLASS(50Rnd_57x28_EPR) {
    ammo = QCLASS(57x28_AP);
    descriptionShort = "5.7x28mm AP Reload Tracer";
    displayName = "5.7mm 50Rnd (AP)";
};
