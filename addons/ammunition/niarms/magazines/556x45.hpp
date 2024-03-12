// 5.56x45mm SG55X Series
class CLASS(30Rnd_556x45_Ball_SG): hlc_30Rnd_556x45_EPR_sg550 {
    MACRO_SCOPE;
    ammo = QCLASS(556x45_Ball);
    displayName = "5.56mm 30Rnd SiG (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "5.56x45mm Ball Reload Tracer";
    lastRoundsTracer = 4;
    mass = 10;
};
class CLASS(30Rnd_556x45_Ball_Tracer_SG): CLASS(30Rnd_556x45_Ball_SG) {
    displayName = "5.56mm 30Rnd SiG [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "5.56x45mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(30Rnd_556x45_EPR_SG): CLASS(30Rnd_556x45_Ball_SG) {
    ammo = QCLASS(556x45_EPR);
    displayName = "5.56mm 30Rnd SiG (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "5.56x45mm EPR Reload Tracer";
};
class CLASS(30Rnd_556x45_AP_SG): CLASS(30Rnd_556x45_EPR_SG) {
    ammo = QCLASS(556x45_AP);
    displayName = "5.56mm 30Rnd SiG (AP)";
    displayNameShort = "AP";
    descriptionShort = "5.56x45mm AP Reload Tracer";
};

// 5.56x45mm AUG 42Rnd
class CLASS(42Rnd_556x45_Ball_AUG): hlc_40Rnd_556x45_B_AUG {
    MACRO_SCOPE;
    ammo = QCLASS(556x45_Ball);
    displayName = "5.56mm 42Rnd AUG (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "5.56x45mm Ball Reload Tracer";
    lastRoundsTracer = 4;
    mass = 15;
};
class CLASS(42Rnd_556x45_Ball_Tracer_AUG): CLASS(42Rnd_556x45_Ball_AUG) {
    displayName = "5.56mm 42Rnd AUG [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "5.56x45mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(42Rnd_556x45_EPR_AUG): CLASS(42Rnd_556x45_Ball_AUG) {
    ammo = QCLASS(556x45_EPR);
    displayName = "5.56mm 42Rnd AUG (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "5.56x45mm EPR Reload Tracer";
};
class CLASS(42Rnd_556x45_AP_AUG): CLASS(42Rnd_556x45_EPR_AUG) {
    ammo = QCLASS(556x45_AP);
    displayName = "5.56mm 42Rnd AUG (AP)";
    displayNameShort = "AP";
    descriptionShort = "5.56x45mm AP Reload Tracer";
};
