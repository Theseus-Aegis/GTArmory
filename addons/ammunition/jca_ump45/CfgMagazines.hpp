class CfgMagazines {
    class JCA_25Rnd_45ACP_UMP_Mag;
    class CLASS(30Rnd_45ACP_Ball_UMP_JCA): JCA_25Rnd_45ACP_UMP_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(45ACP_Ball);
        descriptionShort = ".45 ACP Ball Reload Tracer";
        displayName = ".45 ACP 30Rnd UMP (Ball)";
        lastRoundsTracer = 2;
    };
    class CLASS(30Rnd_45ACP_EPR_UMP_JCA): JCA_25Rnd_45ACP_UMP_Mag {
        MACRO_SCOPE;
        ammo = QCLASS(45ACP_EPR);
        descriptionShort = ".45 ACP Ball EPR";
        displayName = ".45 ACP 30Rnd UMP (EPR)";
        lastRoundsTracer = 2;
    };
};
