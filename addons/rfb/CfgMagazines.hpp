class CfgMagazines {
    class 20Rnd_556x45_UW_mag;

    class CLASS(20Rnd_762x51_RFB_Mag): 20Rnd_556x45_UW_mag {
        author = "TyroneMF";
        scope = 2;
        displayName = CSTRING(20Rnd_762x51_RFB_Mag_Display);
        mass = 11;
        ammo = QCLASS(762x51_dual);
    };
};
