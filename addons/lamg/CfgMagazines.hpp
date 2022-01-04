class CfgMagazines {
    class 200Rnd_65x39_cased_Box;
    class CLASS(100Rnd_65x39_Cased_Box): 200Rnd_65x39_cased_Box {
        author = ECSTRING(main,Author);
        displayName = "6.5mm 100Rnd [RT] Yellow Box Mag (Grendel)";
        picture = QPATHTOF(ui\100rnd_65x39_cased_box_ca.paa);
        mass = 25;
        count = 100;
        lastRoundsTracer = 5;
    };
    class CLASS(100Rnd_65x39_Yellow_Cased_Box): CLASS(100Rnd_65x39_cased_Box) {
        displayName = "6.5mm 100Rnd [T] Yellow Box Mag (Grendel)";
        tracersEvery = 1;
    };
};
