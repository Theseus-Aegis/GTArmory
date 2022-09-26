class CfgMagazines {
    class 6Rnd_45ACP_Cylinder;
    class CLASS(6Rnd_357): 6Rnd_45ACP_Cylinder {
        author = ECSTRING(main,Author);
        displayName = "6Rnd .357 Cylinder";
        descriptionShort = "Caliber: .357 Magnum";
        scope = 2;
        scopeArsenal = 2;
        ammo = QCLASS(357_Magnum);
    };
    class CLASS(6Rnd_44): CLASS(6Rnd_357) {
        displayName = "6Rnd .44 Cylinder";
        descriptionShort = "Caliber: .44 Magnum";
        ammo = QCLASS(44_Magnum);
    };
};
