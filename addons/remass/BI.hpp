    // 556 STANAG Magazine
    class 30Rnd_556x45_Stanag: CA_Magazine {
        mass = 10;
    };
    
    // 9mm Magazines
    class 30Rnd_9x21_Mag: CA_Magazine {
        mass = 9;
    };
    class 16Rnd_9x21_Mag: 30Rnd_9x21_Mag {
        mass = 4;
    };

    // 45ACP Magazines
    class 30Rnd_45ACP_Mag_SMG_01: 30Rnd_9x21_Mag {
        mass = 9;
    };

    // 545 AK Magazines
    class 30Rnd_545x39_Mag_F: CA_Magazine {
        mass = 10;
    };

    // 762x39 AK Magazines
    class 30Rnd_762x39_Mag_F: CA_Magazine {
        mass = 11;
    };
    class 30Rnd_762x39_AK12_Mag_F: 30Rnd_762x39_Mag_F {
        mass = 11;
    };
    class 75Rnd_762x39_Mag_F: 30Rnd_762x39_Mag_F {
        mass = 25;
    };
    class 75rnd_762x39_AK12_Mag_F: 30Rnd_762x39_AK12_Mag_F {
        mass = 25;
    };

    // 762x51 Magazines
    class 20Rnd_762x51_Mag: CA_Magazine {
        mass = 11;
    };
    class 10Rnd_762x51_Mag: 20Rnd_762x51_Mag {
        mass = 5.5;
    };

    // 150Rnd 556 Magazines
    class 150Rnd_556x45_Drum_Mag_F: CA_Magazine {
        mass = 35;
    };
