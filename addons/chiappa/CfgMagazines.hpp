class CfgMagazines {
    class 6Rnd_45ACP_Cylinder;
    class CLASS(6Rnd_357): 6Rnd_45ACP_Cylinder {
        author = ECSTRING(main,Author);
        scope = 2;
        scopeArsenal = 2;
        ammo = QCLASS(357_Magnum);
        displayName = CSTRING(6Rnd_357_Name);
        descriptionShort = CSTRING(6Rnd_357_Description);
    };

    class CLASS(6Rnd_44): 6Rnd_45ACP_Cylinder {
        author = ECSTRING(main,Author);
        scope = 2;
        scopeArsenal = 2;
        ammo = QCLASS(44_Magnum);
        displayName = CSTRING(6Rnd_44_Name);
        descriptionShort = CSTRING(6Rnd_44_Description);
    };
};
