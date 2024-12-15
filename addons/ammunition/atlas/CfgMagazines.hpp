class CfgMagazines {
    // 5.56x45mm AUG
    class 30Rnd_556x45_AUG_Mag_Green_F;
    class CLASS(30Rnd_556x45_Ball_AUG_Atlas): 30Rnd_556x45_AUG_Mag_Green_F {
        MACRO_SCOPE;
        ammo = QCLASS(556x45_Ball);
        displayName = "5.56mm 30Rnd AUG (Ball)";
        displayNameShort = "Ball";
        descriptionShort = "5.56x45mm Ball Reload Tracer";
        lastRoundsTracer = 4;
        mass = 10;
    };
    class CLASS(30Rnd_556x45_Ball_Tracer_AUG_Atlas): CLASS(30Rnd_556x45_Ball_AUG_Atlas) {
        displayName = "5.56mm 30Rnd AUG [T] (Ball)";
        displayNameShort = "Ball Tracer";
        descriptionShort = "5.56x45mm Ball Tracer";
        tracersEvery = 1;
    };
    class CLASS(30Rnd_556x45_EPR_AUG_Atlas): CLASS(30Rnd_556x45_Ball_AUG_Atlas) {
        ammo = QCLASS(556x45_EPR);
        displayName = "5.56mm 30Rnd AUG (EPR)";
        displayNameShort = "EPR";
        descriptionShort = "5.56x45mm EPR Reload Tracer";
    };
    class CLASS(30Rnd_556x45_AP_AUG_Atlas): CLASS(30Rnd_556x45_EPR_AUG_Atlas) {
        ammo = QCLASS(556x45_AP);
        displayName = "5.56mm 30Rnd AUG (AP)";
        displayNameShort = "AP";
        descriptionShort = "5.56x45mm AP Reload Tracer";
    };

    // 5.56x45mm FAMAS
    class Atlas_25Rnd_556x45_Famas;
    class CLASS(25Rnd_556x45_Ball_FAMAS_Atlas): Atlas_25Rnd_556x45_Famas {
        MACRO_SCOPE;
        ammo = QCLASS(556x45_Ball);
        displayName = "5.56mm 25Rnd FAMAS (Ball)";
        displayNameShort = "Ball";
        descriptionShort = "5.56x45mm Ball Reload Tracer";
        lastRoundsTracer = 4;
        mass = 9;
    };
    class CLASS(25Rnd_556x45_Ball_Tracer_FAMAS_Atlas): CLASS(25Rnd_556x45_Ball_FAMAS_Atlas) {
        displayName = "5.56mm 25Rnd FAMAS [T] (Ball)";
        displayNameShort = "Ball Tracer";
        descriptionShort = "5.56x45mm Ball Tracer";
        tracersEvery = 1;
    };
    class CLASS(25Rnd_556x45_EPR_FAMAS_Atlas): CLASS(25Rnd_556x45_Ball_FAMAS_Atlas) {
        ammo = QCLASS(556x45_EPR);
        displayName = "5.56mm 25Rnd FAMAS (EPR)";
        displayNameShort = "EPR";
        descriptionShort = "5.56x45mm EPR Reload Tracer";
    };
    class CLASS(25Rnd_556x45_AP_FAMAS_Atlas): CLASS(25Rnd_556x45_Ball_FAMAS_Atlas) {
        ammo = QCLASS(556x45_AP);
        displayName = "5.56mm 25Rnd FAMAS (AP)";
        displayNameShort = "AP";
        descriptionShort = "5.56x45mm AP Reload Tracer";
    };
};
