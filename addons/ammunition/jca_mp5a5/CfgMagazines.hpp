class CfgMagazines {
    class JCA_30Rnd_9x21_MP5_Mag;
    class CLASS(30Rnd_9x21_Ball_MP5_JCA): JCA_30Rnd_9x21_MP5_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(9x19_Ball);
        descriptionShort = "9mm Ball Reload Tracer";
        displayName = "9mm 30Rnd MP5 (Ball)";
        lastRoundsTracer = 2;
    };
    class CLASS(30Rnd_9x21_Ball_Tracer_MP5_JCA): JCA_30Rnd_9x21_MP5_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(9x19_Ball_Tracer);
        descriptionShort = "9mm Ball Tracer";
        displayName = "9mm 30Rnd MP5 [T] (Ball)";
        lastRoundsTracer = 2;
    };
    class CLASS(30Rnd_9x21_Ball_MP5_EPR_JCA): JCA_30Rnd_9x21_MP5_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(9x19_Ball_EPR);
        descriptionShort = "9mm Ball EPR";
        displayName = "9mm 30Rnd MP5 (EPR)";
        lastRoundsTracer = 2;
    };
    class CLASS(30Rnd_9x21_Ball_AP_MP5_JCA): JCA_30Rnd_9x21_MP5_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(9x19_Ball_AP);
        descriptionShort = "9mm Ball AP";
        displayName = "9mm 30Rnd MP5 (AP)";
        lastRoundsTracer = 2;
    };
};
