class CfgMagazines {
    class CUP_30Rnd_556x45_PMAG_QP;
    class CUP_30Rnd_556x45_PMAG_QP_Olive;
    class CUP_30Rnd_556x45_PMAG_QP_Tan;

    class CLASS(10Rnd_458_Socom_PMAG): CUP_30Rnd_556x45_PMAG_QP {
        author = "TyroneMF";
        scope = 2;
        ammo = QCLASS(458_Socom);
        lastRoundsTracer = 2;
        displayName = CSTRING(10Rnd_458_Socom_PMAG_Display);
        mass = 8;
        initSpeed = 510;
        count = 10;
    };
    class CLASS(10Rnd_458_Socom_PMAG_OD): CUP_30Rnd_556x45_PMAG_QP_Olive {
        author = "TyroneMF";
        scope = 2;
        ammo = QCLASS(458_Socom);
        lastRoundsTracer = 2;
        displayName = CSTRING(10Rnd_458_Socom_PMAG_OD_Display);
        mass = 8;
        initSpeed = 510;
        count = 10;
    };
    class CLASS(10Rnd_458_Socom_PMAG_Tan): CUP_30Rnd_556x45_PMAG_QP_Tan {
        author = "TyroneMF";
        scope = 2;
        ammo = QCLASS(458_Socom);
        lastRoundsTracer = 2;
        displayName = CSTRING(10Rnd_458_Socom_PMAG_Tan_Display);
        mass = 8;
        initSpeed = 510;
        count = 10;
    };
};
