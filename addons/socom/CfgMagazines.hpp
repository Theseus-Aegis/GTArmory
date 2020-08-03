#define MAG458SOCOM(CLASSNAME,PARENT,NAME) \
    class CLASS(CLASSNAME): PARENT { \
        author = "TyroneMF"; \
        scope = 2; \
        ammo = QCLASS(458_Socom); \
        lastRoundsTracer = 2; \
        displayName = CSTRING(NAME); \
        descriptionShort = CSTRING(10Rnd_458_Socom_PMAG_Description); \
        mass = 8; \
        initSpeed = 510; \
        count = 10; \
    }

class CfgMagazines {
    class CUP_30Rnd_556x45_PMAG_QP;
    class CUP_30Rnd_556x45_PMAG_QP_Olive;
    class CUP_30Rnd_556x45_PMAG_QP_Tan;

    MAG458SOCOM(10Rnd_458_Socom_PMAG,CUP_30Rnd_556x45_PMAG_QP,10Rnd_458_Socom_PMAG_Display);
    MAG458SOCOM(10Rnd_458_Socom_PMAG_OD,CUP_30Rnd_556x45_PMAG_QP_Olive,10Rnd_458_Socom_PMAG_OD_Display);
    MAG458SOCOM(10Rnd_458_Socom_PMAG_Tan,CUP_30Rnd_556x45_PMAG_QP_Tan,10Rnd_458_Socom_PMAG_Tan_Display);
};
