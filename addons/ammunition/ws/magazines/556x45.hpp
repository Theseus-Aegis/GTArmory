// Western Sahara Assets
class CLASS(35Rnd_556x45_Ball_R4): 35Rnd_556x45_Velko_reload_tracer_yellow_lxWS {
    MACRO_SCOPE;
    ammo = QCLASS(556x45_Ball);
    displayName = "5.56mm 35Rnd R4 (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "5.56x45mm Ball Reload Tracer";
    lastRoundsTracer = 4;
};
class CLASS(35Rnd_556x45_Ball_Tracer_R4): CLASS(35Rnd_556x45_Ball_R4) {
    displayName = "5.56mm 35Rnd R4 [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "5.56x45mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(35Rnd_556x45_EPR_R4): CLASS(35Rnd_556x45_Ball_R4) {
    ammo = QCLASS(556x45_EPR);
    displayName = "5.56mm 35Rnd R4 (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "5.56x45mm EPR Reload Tracer";
};
class CLASS(35Rnd_556x45_AP_R4): CLASS(35Rnd_556x45_EPR_R4) {
    ammo = QCLASS(556x45_AP);
    displayName = "5.56mm 35Rnd R4 (AP)";
    displayNameShort = "AP";
    descriptionShort = "5.56x45mm AP Reload Tracer";
};

class CLASS(50Rnd_556x45_Ball_R4): 50Rnd_556x45_Velko_lxWS {
    MACRO_SCOPE;
    ammo = QCLASS(556x45_Ball);
    displayName = "5.56mm 50Rnd R4 (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "5.56x45mm Ball Reload Tracer";
    lastRoundsTracer = 4;
};
class CLASS(50Rnd_556x45_Ball_Tracer_R4): CLASS(50Rnd_556x45_Ball_R4) {
    displayName = "5.56mm 50Rnd R4 [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "5.56x45mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(50Rnd_556x45_EPR_R4): CLASS(50Rnd_556x45_Ball_R4) {
    ammo = QCLASS(556x45_EPR);
    displayName = "5.56mm 50Rnd R4 (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "5.56x45mm EPR Reload Tracer";
};

// Stanag
class CLASS(30Rnd_556x45_Ball_Camo_Stanag): 30Rnd_556x45_Stanag_Tracer_Yellow_camo_lxWS {
    MACRO_SCOPE;
    ammo = QCLASS(556x45_Ball);
    displayName = "5.56mm 30Rnd Stanag Camo (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "5.56x45mm Ball Reload Tracer";
    lastRoundsTracer = 4;
};
class CLASS(30Rnd_556x45_Ball_Tracer_Camo_Stanag): CLASS(30Rnd_556x45_Ball_Camo_Stanag) {
    displayName = "5.56mm 30Rnd Stanag [T] Camo (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "5.56x45mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(30Rnd_556x45_EPR_Camo_Stanag): CLASS(30Rnd_556x45_Ball_Camo_Stanag) {
    ammo = QCLASS(556x45_EPR);
    displayName = "5.56mm 30Rnd Stanag Camo (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "5.56x45mm EPR Reload Tracer";
};
class CLASS(30Rnd_556x45_AP_Camo_Stanag): CLASS(30Rnd_556x45_Ball_Camo_Stanag) {
    ammo = QCLASS(556x45_AP);
    displayName = "5.56mm 30Rnd Stanag Camo (AP)";
    displayNameShort = "AP";
    descriptionShort = "5.56x45mm AP Reload Tracer";
};

// Surefire
class CLASS(75Rnd_556x45_Ball_Surefire): 75Rnd_556x45_Stanag_lxWS {
    MACRO_SCOPE;
    ammo = QCLASS(556x45_Ball);
    displayName = "5.56mm 75Rnd Surefire (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "5.56x45mm Ball Reload Tracer";
    lastRoundsTracer = 4;
};
class CLASS(75Rnd_556x45_Tracer_Surefire): CLASS(75Rnd_556x45_Ball_Surefire) {
    displayName = "5.56mm 75Rnd Surefire [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "5.56x45mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(75Rnd_556x45_EPR_Surefire): CLASS(75Rnd_556x45_Ball_Surefire) {
    ammo = QCLASS(556x45_EPR);
    displayName = "5.56mm 75Rnd Surefire (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "5.56x45mm EPR Reload Tracer";
};
