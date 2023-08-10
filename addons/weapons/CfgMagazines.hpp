class CfgMagazines {
    // Chiappa
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

    // LAMG
    class 200Rnd_65x39_cased_Box;
    class CLASS(100Rnd_65x39_Ball_Belt): 200Rnd_65x39_cased_Box {
        author = ECSTRING(main,Author);
        ammo = QCLASS(65x39_Ball);
        descriptionShort = "6.5x39mm Ball Tracer Every 4";
        displayName = "6.5mm 100Rnd [TE4] (Ball)";
        picture = QPATHTOF(ui\100rnd_65x39_cased_box_ca.paa);
        mass = 25;
        count = 100;
        tracersEvery = 4;
    };
    class CLASS(100Rnd_65x39_Ball_Tracer_Belt): CLASS(100Rnd_65x39_Ball_Belt) {
        descriptionShort = "6.5x39mm Ball Tracer";
        displayName = "6.5mm 100Rnd [T] (Ball)";
        tracersEvery = 1;
    };
    class CLASS(100Rnd_65x39_EPR_Belt): CLASS(100Rnd_65x39_Ball_Belt) {
        ammo = QCLASS(65x39_EPR);
        descriptionShort = "6.5x39mm EPR Tracer Every 4";
        displayName = "6.5mm 100Rnd Belt [TE4] (EPR)";
    };

    // Keltec RFB
    class 20Rnd_556x45_UW_mag;
    class CLASS(20Rnd_762x51_RFB_Mag): 20Rnd_556x45_UW_mag {
        author = ECSTRING(main,Author);
        scope = 2;
        displayName = "7.62mm 20Rnd RFB Mag (M80)";
        mass = 11;
        ammo = QCLASS(762x51_dual);
    };
};
