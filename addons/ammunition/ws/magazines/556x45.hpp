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
