class CfgMagazines {
    class CA_Magazine;
    class CLASS(40Rnd_46x30_MP7_Ball): CA_Magazine {
        ammo = QCLASS(46x30_Ball);
        descriptionShort = "4.6x30mm Ball Reload Tracer";
        displayName = "4.6mm 40Rnd MP7 (Ball)";
        displayNameShort = "Ball";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\mp7\SMG_04_blk_F_co.paa)};
        lastRoundsTracer = 4;
        mass = 8;
        modelSpecial = QPATHTOF(data\mp7\magazine\Mag_460x30_MP7_40Rnd.p3d);
        modelSpecialIsProxy = 1;
        picture = QPATHTOF(ui\icon_mp7_magazine_ca.paa);
        scope = 2;
        tracersEvery = 4;
    };

    class CLASS(40Rnd_46x30_MP7_Ball_Tracer): CLASS(40Rnd_46x30_MP7_Ball) {
        displayName = "4.6mm 40Rnd MP7 [T] (Ball)";
        displayNameShort = "Ball Tracer";
        descriptionShort = "4.6x30mm Ball Tracer";
        tracersEvery = 1;
    };

    class CLASS(40Rnd_46x30_MP7_EPR): CLASS(40Rnd_46x30_MP7_Ball) {
        ammo = QCLASS(46x30_EPR);
        displayName = "4.6mm 40Rnd MP7 (EPR)";
        displayNameShort = "EPR";
        descriptionShort = "4.6x30mm EPR Reload Tracer";
    };

    class CLASS(40Rnd_46x30_MP7_AP): CLASS(40Rnd_46x30_MP7_Ball) {
        ammo = QCLASS(46x30_AP);
        displayName = "4.6mm 40Rnd MP7 (AP)";
        displayNameShort = "AP";
        descriptionShort = "4.6x30mm AP Reload Tracer";
    };
};
