// 5.56x45mm Belt
class CLASS(200Rnd_556x45_Ball_Belt): 200Rnd_556x45_Box_F {
    MACRO_SCOPE;
    ammo = QCLASS(556x45_Ball);
    displayName = "5.56mm 200Rnd Belt [TE4] (Ball)";
    displayNameShort = "Ball TE4";
    descriptionShort = "5.56x45mm Ball Tracer Every 4";
    tracersEvery = 4;
    mass = 40;
};
class CLASS(200Rnd_556x45_Ball_Tracer_Belt): CLASS(200Rnd_556x45_Ball_Belt) {
    displayName = "5.56mm 200Rnd Belt [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "5.56x45mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(200Rnd_556x45_EPR_Belt): CLASS(200Rnd_556x45_Ball_Belt) {
    ammo = QCLASS(556x45_EPR);
    displayName = "5.56mm 200Rnd Belt [TE4] (EPR)";
    displayNameShort = "EPR TE4";
    descriptionShort = "5.56x45mm EPR Tracer Every 4";
};
class CLASS(200Rnd_556x45_AP_Belt): CLASS(200Rnd_556x45_Ball_Belt) {
    ammo = QCLASS(556x45_AP);
    displayName = "5.56mm 200Rnd Belt [TE4] (AP)";
    displayNameShort = "AP TE4";
    descriptionShort = "5.56x45mm AP Tracer Every 4";
};


// 5.56x45mm Drum 150
class CLASS(150Rnd_556x45_Ball_Drum): 150Rnd_556x45_Drum_Mag_F {
    MACRO_SCOPE;
    ammo = QCLASS(556x45_Ball);
    displayName = "5.56mm 150Rnd Drum [TE4] (Ball)";
    displayNameShort = "Ball TE4";
    descriptionShort = "5.56x45mm Ball Tracer Every 4";
    tracersEvery = 4;
    mass = 35;
};
class CLASS(150Rnd_556x45_Ball_Tracer_Drum): CLASS(150Rnd_556x45_Ball_Drum) {
    displayName = "5.56mm 150Rnd Drum [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "5.56x45mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(150Rnd_556x45_EPR_Drum): CLASS(150Rnd_556x45_Ball_Drum) {
    ammo = QCLASS(556x45_EPR);
    displayName = "5.56mm 150Rnd Drum [TE4] (EPR)";
    displayNameShort = "EPR TE4";
    descriptionShort = "5.56x45mm EPR Tracer Every 4";
};
class CLASS(150Rnd_556x45_AP_Drum): CLASS(150Rnd_556x45_Ball_Drum) {
    ammo = QCLASS(556x45_AP);
    displayName = "5.56mm 150Rnd Drum [TE4] (AP)";
    displayNameShort = "AP TE4";
    descriptionShort = "5.56x45mm AP Tracer Every 4";
};

