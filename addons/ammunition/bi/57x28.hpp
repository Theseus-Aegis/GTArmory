// 5.7x28mm - Only one because all 5.7 Ammo is considered AP.
class CLASS(50Rnd_57x28_Ball): 50Rnd_570x28_SMG_03 {
    MACRO_SCOPE;
    ammo = QCLASS(57x28_Ball);
    displayName = "5.7mm 50Rnd (AP)";
    displayNameShort = "AP";
    descriptionShort = "5.7x28mm AP Reload Tracer";
    lastRoundsTracer = 4;
    tracersEvery = 4;
    mass = 12;
};
