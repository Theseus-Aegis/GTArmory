class CfgMagazines {
    class 200Rnd_65x39_cased_Box;
    class CLASS(100Rnd_65x39_Cased_Box): 200Rnd_65x39_cased_Box {
        author = ECSTRING(main,Author);
        displayName = CSTRING(100Rnd_65x39_Cased_Box_Display);
        picture = QPATHTOF(ui\100rnd_65x39_cased_box_ca.paa);
        mass = 25;
        count = 100;
        lastRoundsTracer = 5;
    };
    class CLASS(100Rnd_65x39_Yellow_Cased_Box): CLASS(100Rnd_65x39_cased_Box) {
        displayName = CSTRING(100Rnd_65x39_Yellow_Cased_Box_Display);
        tracersEvery = 1;
    };
};
