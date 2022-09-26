class CfgMagazines {
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
};
