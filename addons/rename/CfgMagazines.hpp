class CfgMagazines {
    class CA_Magazine;
    class 30Rnd_545x39_Mag_Tracer_F;
    class CUP_30Rnd_556x45_Stanag;
    class 100Rnd_65x39_caseless_mag;
    class 100Rnd_65x39_caseless_mag_Tracer;
    class 30Rnd_65x39_caseless_mag;
    class 30Rnd_65x39_caseless_mag_Tracer;
    class 30Rnd_65x39_caseless_green;
    class 16Rnd_9x21_Mag;
    class 30Rnd_9x21_Mag;
    class 30Rnd_9x21_Mag_SMG_02;
    class 200Rnd_65x39_cased_Box;
    class 200Rnd_65x39_cased_Box_Tracer;

    // 30Rnd 545 Russian Magazines
    class 30Rnd_545x39_Mag_F: CA_Magazine {
        displayName = CSTRING(30Rnd_545x39_Mag_F_Display);
    };
    class 30Rnd_545x39_Mag_Tracer_Green_F: 30Rnd_545x39_Mag_Tracer_F {
        displayName = CSTRING(30Rnd_545x39_Mag_Tracer_Green_F_Display);
    };
    class 30Rnd_545x39_Mag_Tracer_F: 30Rnd_545x39_Mag_F {
        displayName = CSTRING(30Rnd_545x39_Mag_Tracer_F_Display);
    };
    class 30Rnd_545x39_Mag_Green_F: 30Rnd_545x39_Mag_F {
        displayName = CSTRING(30Rnd_545x39_Mag_Green_F_Display);
    };

    // 30Rnd 556 Magazines
    class 30Rnd_556x45_Stanag: CA_Magazine {
        displayName = CSTRING(30Rnd_556x45_Stanag_Display);
    };
    class 30Rnd_556x45_Stanag_green: 30Rnd_556x45_Stanag {
        displayName = CSTRING(30Rnd_556x45_Stanag_Green_Display);
    };
    class 30Rnd_556x45_Stanag_red: 30Rnd_556x45_Stanag {
        displayName = CSTRING(30Rnd_556x45_Stanag_Red_Display);
    };
    class 30Rnd_556x45_Stanag_Tracer_Green: 30Rnd_556x45_Stanag {
        displayName = CSTRING(30Rnd_556x45_Stanag_Tracer_Green_Display);
    };
    class 30Rnd_556x45_Stanag_Tracer_Red: 30Rnd_556x45_Stanag {
        displayName = CSTRING(30Rnd_556x45_Stanag_Tracer_Red_Display);
    };
    class 30Rnd_556x45_Stanag_Tracer_Yellow: 30Rnd_556x45_Stanag {
        displayName = CSTRING(30Rnd_556x45_Stanag_Tracer_Yellow_Display);
    };
    class CUP_30Rnd_556x45_X95: CA_Magazine {
        displayName = CSTRING(CUP_30Rnd_556x45_X95_Display);
    };
    class CUP_30Rnd_556x45_X95_Tracer_Red: CUP_30Rnd_556x45_X95 {
        displayName = CSTRING(CUP_30Rnd_556x45_X95_Tracer_Red_Display);
    };
    class CUP_30Rnd_556x45_X95_Tracer_Green: CUP_30Rnd_556x45_X95_Tracer_Red {
        displayName = CSTRING(CUP_30Rnd_556x45_X95_Tracer_Green_Display);
    };
    class CUP_30Rnd_556x45_X95_Tracer_Yellow: CUP_30Rnd_556x45_X95_Tracer_Red {
        displayName = CSTRING(CUP_30Rnd_556x45_X95_Tracer_Yellow_Display);
    };

    // 60Rnd 556 Magazines
    class CUP_60Rnd_556x45_SureFire: CUP_30Rnd_556x45_Stanag {
        displayName = CSTRING(CUP_60Rnd_556x45_SureFire_Display);
    };

    // 150Rnd 556 Magazines
    class 150Rnd_556x45_Drum_Mag_F: CA_Magazine {
        displayName = CSTRING(150Rnd_556x45_Drum_Display);
    };
    class 150Rnd_556x45_Drum_Sand_Mag_F: 150Rnd_556x45_Drum_Mag_F {
        displayName = CSTRING(150Rnd_556x45_Drum_Sand_Display);
    };
    class 150Rnd_556x45_Drum_Sand_Mag_Tracer_F: 150Rnd_556x45_Drum_Sand_Mag_F {
        displayName = CSTRING(150Rnd_556x45_Drum_Sand_Tracer_Display);
    };
    class 150Rnd_556x45_Drum_Green_Mag_F: 150Rnd_556x45_Drum_Mag_F {
        displayName = CSTRING(150Rnd_556x45_Drum_Green_Display);
    };
    class 150Rnd_556x45_Drum_Green_Mag_Tracer_F: 150Rnd_556x45_Drum_Green_Mag_F {
        displayName = CSTRING(150Rnd_556x45_Drum_Green_Tracer_Display);
    };
    class 150Rnd_556x45_Drum_Mag_Tracer_F: 150Rnd_556x45_Drum_Mag_F {
        displayName = CSTRING(150Rnd_556x45_Drum_Tracer_Display);
    };

    // 200Rnd 556 Box Magazines
    class 200Rnd_556x45_Box_F: CA_Magazine {
        displayName = CSTRING(200Rnd_556x45_Box_Display);
    };
    class 200Rnd_556x45_Box_Red_F: 200Rnd_556x45_Box_F {
        displayName = CSTRING(200Rnd_556x45_Box_Red_Display);
    };
    class 200Rnd_556x45_Box_Tracer_F: 200Rnd_556x45_Box_F {
        displayName = CSTRING(200Rnd_556x45_Box_Tracer_Display);
    };
    class 200Rnd_556x45_Box_Tracer_Red_F: 200Rnd_556x45_Box_Tracer_F {
        displayName = CSTRING(200Rnd_556x45_Box_Tracer_Red_Display);
    };

    // 30Rnd 6.5x39 Magazines MX
    class 30Rnd_65x39_caseless_black_mag: 30Rnd_65x39_caseless_mag {
        displayName = CSTRING(30Rnd_65x39_caseless_black_mag_Display);
    };
    class 30Rnd_65x39_caseless_black_mag_Tracer: 30Rnd_65x39_caseless_mag_Tracer {
        displayName = CSTRING(30Rnd_65x39_caseless_black_mag_Tracer_Display);
    };
    class 30Rnd_65x39_caseless_khaki_mag: 30Rnd_65x39_caseless_mag {
        displayName = CSTRING(30Rnd_65x39_caseless_khaki_mag_Display);
    };
    class 30Rnd_65x39_caseless_khaki_mag_Tracer: 30Rnd_65x39_caseless_mag_Tracer {
        displayName = CSTRING(30Rnd_65x39_caseless_khaki_mag_Tracer_Display);
    };
    class tacs_30Rnd_65x39_caseless_BlackCamo_mag: 30Rnd_65x39_caseless_mag {
        displayName = CSTRING(tacs_30Rnd_65x39_caseless_BlackCamo_mag_Display);
    };
    // Katiba/Type 115
    class 30Rnd_65x39_caseless_green_mag_Tracer: 30Rnd_65x39_caseless_green {
        displayName = CSTRING(30Rnd_65x39_caseless_green_mag_Tracer_Display);
    };

    // 100Rnd 6.5x39 Magazines
    class 100Rnd_65x39_caseless_black_mag: 100Rnd_65x39_caseless_mag {
        displayName = CSTRING(100Rnd_65x39_caseless_black_mag_Display);
    };
    class 100Rnd_65x39_caseless_black_mag_tracer: 100Rnd_65x39_caseless_mag_Tracer {
        displayName = CSTRING(100Rnd_65x39_caseless_black_mag_tracer_Display);
    };
    class 100Rnd_65x39_caseless_khaki_mag: 100Rnd_65x39_caseless_mag {
        displayName = CSTRING(100Rnd_65x39_caseless_khaki_mag_Display);
    };
    class 100Rnd_65x39_caseless_khaki_mag_tracer: 100Rnd_65x39_caseless_mag_Tracer {
        displayName = CSTRING(100Rnd_65x39_caseless_khaki_mag_tracer_Display);
    };

    // 200Rnd 6.5x39 Magazines
    class 200Rnd_65x39_cased_Box_Red: 100Rnd_65x39_caseless_mag {
        displayName = CSTRING(200Rnd_65x39_cased_Box_Red_Display);
    };
    class 200Rnd_65x39_cased_Box_Tracer_Red: 200Rnd_65x39_cased_Box {
        displayName = CSTRING(200Rnd_65x39_cased_Box_Tracer_Red_Display);
    };

    // 30Rnd 762x39 Magazines
    class 30Rnd_762x39_Mag_F: CA_Magazine {
        displayName = CSTRING(30Rnd_762x39_Mag_Display);
    };
    class 30Rnd_762x39_Mag_Green_F: 30Rnd_762x39_Mag_F {
        displayName = CSTRING(30Rnd_762x39_Mag_Green_Display);
    };
    class 30Rnd_762x39_Mag_Tracer_F: 30Rnd_762x39_Mag_F {
        displayName = CSTRING(30Rnd_762x39_Mag_Yellow_Tracer_Display);
    };
    class 30Rnd_762x39_Mag_Tracer_Green_F: 30Rnd_762x39_Mag_Tracer_F {
        displayName = CSTRING(30Rnd_762x39_Mag_Green_Tracer_Display);
    };
    class 30Rnd_762x39_AK12_Mag_F: 30Rnd_762x39_Mag_F {
        displayName = CSTRING(30Rnd_762x39_AK12_Mag_Display);
    };
    class 30Rnd_762x39_AK12_Mag_Tracer_F: 30Rnd_762x39_AK12_Mag_F {
        displayName = CSTRING(30Rnd_762x39_AK12_Mag_Tracer_Display);
    };
    class 30rnd_762x39_AK12_Arid_Mag_F: 30Rnd_762x39_AK12_Mag_F {
        displayName = CSTRING(30Rnd_762x39_AK12_Arid_Mag_Display);
    };
    class 30rnd_762x39_AK12_Arid_Mag_Tracer_F: 30Rnd_762x39_AK12_Mag_Tracer_F {
        displayName = CSTRING(30Rnd_762x39_AK12_Arid_Mag_Tracer_Display);
    };
    class 30rnd_762x39_AK12_Lush_Mag_F: 30Rnd_762x39_AK12_Mag_F {
        displayName = CSTRING(30Rnd_762x39_AK12_Lush_Mag_Display);
    };
    class 30rnd_762x39_AK12_Lush_Mag_Tracer_F: 30Rnd_762x39_AK12_Mag_Tracer_F {
        displayName = CSTRING(30Rnd_762x39_AK12_Lush_Mag_Tracer_Display);
    };
    class 75Rnd_762x39_Mag_F: 30Rnd_762x39_Mag_F {
        displayName = CSTRING(75Rnd_762x39_AKM_Mag_Display);
    };
    class 75Rnd_762x39_Mag_Tracer_F: 75Rnd_762x39_Mag_F {
        displayName = CSTRING(75Rnd_762x39_AKM_Mag_Tracer_Display);
    };
    class 75rnd_762x39_AK12_Mag_F: 30Rnd_762x39_AK12_Mag_F {
        displayName = CSTRING(75Rnd_762x39_AK12_Mag_Display);
    };
    class 75rnd_762x39_AK12_Mag_Tracer_F: 75rnd_762x39_AK12_Mag_F {
        displayName = CSTRING(75Rnd_762x39_AK12_Mag_Tracer_Display);
    };
    class 75rnd_762x39_AK12_Arid_Mag_F: 75rnd_762x39_AK12_Mag_F {
        displayName = CSTRING(75Rnd_762x39_AK12_Arid_Mag_Display);
    };
    class 75rnd_762x39_AK12_Arid_Mag_Tracer_F: 75rnd_762x39_AK12_Mag_Tracer_F {
        displayName = CSTRING(75Rnd_762x39_AK12_Arid_Mag_Tracer_Display);
    };
    class 75rnd_762x39_AK12_Lush_Mag_F: 75rnd_762x39_AK12_Mag_F {
        displayName = CSTRING(75Rnd_762x39_AK12_Lush_Mag_Display);
    };
    class 75rnd_762x39_AK12_Lush_Mag_Tracer_F: 75rnd_762x39_AK12_Mag_Tracer_F {
        displayName = CSTRING(75Rnd_762x39_AK12_Lush_Mag_Tracer_Display);
    };

    // 20Rnd 762x51 Magazines
    class 20Rnd_762x51_Mag: CA_Magazine {
        displayName = CSTRING(20Rnd_762x51_Mag_Display);
    };
    class ACE_20Rnd_762x51_Mag_Tracer: 20Rnd_762x51_Mag {
        displayName = CSTRING(20Rnd_762x51_Tracer_Mag_Display);
    };

    // 30Rnd 9x19 Magazines
    class 30Rnd_9x21_Green_Mag: 30Rnd_9x21_Mag {
        displayName = CSTRING(30Rnd_9x21_Green_Mag_Display);
    };
    class 30Rnd_9x21_Red_Mag: 30Rnd_9x21_Mag {
        displayName = CSTRING(30Rnd_9x21_Red_Mag_Display);
    };
    class 30Rnd_9x21_Yellow_Mag: 30Rnd_9x21_Mag {
        displayName = CSTRING(30Rnd_9x21_Yellow_Mag_Display);
    };
    class 30Rnd_9x21_Mag_SMG_02_Tracer_Green: 30Rnd_9x21_Mag_SMG_02 {
        displayName = CSTRING(30Rnd_9x21_Green_Mag_Display);
    };
    class 30Rnd_9x21_Mag_SMG_02_Tracer_Red: 30Rnd_9x21_Mag_SMG_02 {
        displayName = CSTRING(30Rnd_9x21_Red_Mag_Display);
    };
    class 30Rnd_9x21_Mag_SMG_02_Tracer_Yellow: 30Rnd_9x21_Mag_SMG_02 {
        displayName = CSTRING(30Rnd_9x21_Yellow_Mag_Display);
    };

    // 17Rnd 9x19 Magazines
    class 16Rnd_9x21_green_Mag: 16Rnd_9x21_Mag {
        displayName = CSTRING(17Rnd_9x21_Green_Mag_Display);
    };
    class 16Rnd_9x21_red_Mag: 16Rnd_9x21_Mag {
        displayName = CSTRING(17Rnd_9x21_Red_Mag_Display);
    };
    class 16Rnd_9x21_yellow_Mag: 16Rnd_9x21_Mag {
        displayName = CSTRING(17Rnd_9x21_Yellow_Mag_Display);
    };

    // 30Rnd .45ACP Magazines
    class 30Rnd_45ACP_Mag_SMG_01: 30Rnd_9x21_Mag {
        displayName = CSTRING(30Rnd_45ACP_Mag_SMG_01_Display);
    };
    class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green: 30Rnd_45ACP_Mag_SMG_01 {
        displayName = CSTRING(30Rnd_45ACP_Mag_SMG_01_Tracer_Green_Display);
    };
    class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red: 30Rnd_45ACP_Mag_SMG_01 {
        displayName = CSTRING(30Rnd_45ACP_Mag_SMG_01_Tracer_Red_Display);
    };
    class 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow: 30Rnd_45ACP_Mag_SMG_01 {
        displayName = CSTRING(30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow_Display);
    };

    // Handgun .45ACP Magazines
    class 11Rnd_45ACP_Mag: CA_Magazine {
        displayName = CSTRING(11Rnd_45ACP_Mag_Display);
    };
    class 6Rnd_45ACP_Cylinder: 11Rnd_45ACP_Mag {
        displayName = CSTRING(6Rnd_45ACP_Cylinder_Display);
    };
};
