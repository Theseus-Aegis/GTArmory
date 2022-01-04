class CfgMagazines {
    class 20Rnd_556x45_UW_mag;

    class CLASS(20Rnd_762x51_RFB_Mag): 20Rnd_556x45_UW_mag {
        author = ECSTRING(main,Author);
        scope = 2;
        displayName = "7.62mm 20Rnd RFB Mag (M80)";
        mass = 11;
        ammo = QCLASS(762x51_dual);
    };
};
