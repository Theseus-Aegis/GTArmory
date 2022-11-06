class CfgMagazines {
 /*
  * All magazines here are scope = 1, will provide a list somewhere for usage in TAC Units.
  * As with our other magazines these will utilise a shared pool.
  * Magazine display names won't conform to our usual standard to differentiate easily in-game.
  */

    // 9mm
    // Walther
    class 16Rnd_9x21_Mag;
    class CLASS(AI_17Rnd_9x19_Walther): 16Rnd_9x21_Mag {
        MACRO_AI_MAGAZINE_HANDGUN
        ammo = QCLASS(AI_9x19);
        displayName = "Generic 9mm Walther Magazine";
    };

    // Browning
    class CUP_13Rnd_9x19_Browning_HP;
    class CLASS(AI_13Rnd_9x19_Browning): CUP_13Rnd_9x19_Browning_HP {
        MACRO_AI_MAGAZINE_HANDGUN
        ammo = QCLASS(AI_9x19);
        displayName = "Generic 9mm Browning Magazine";
    };

    // CZ75
    class CUP_18Rnd_9x19_Phantom;
    class CLASS(AI_18Rnd_9x19_CZ75): CUP_18Rnd_9x19_Phantom {
        MACRO_AI_MAGAZINE_HANDGUN
        ammo = QCLASS(AI_9x19);
        displayName = "Generic 9mm CZ75 Magazine";
    };

    // Glock
    class CUP_17Rnd_9x19_glock17;
    class CLASS(AI_17Rnd_9x19_Glock): CUP_17Rnd_9x19_glock17 {
        MACRO_AI_MAGAZINE_HANDGUN
        ammo = QCLASS(AI_9x19);
        displayName = "Generic 9mm Glock Magazine";
    };

    /// SiG
    class hlc_15Rnd_9x19_B_P226;
    class CLASS(AI_15Rnd_9x19_SIG): hlc_15Rnd_9x19_B_P226 {
        MACRO_AI_MAGAZINE_HANDGUN
        ammo = QCLASS(AI_9x19);
        displayName = "Generic 9mm SiG Magazine";
    };

    // M17
    class CUP_17Rnd_9x19_M17_Black;
    class CLASS(AI_17Rnd_9x19_M17): CUP_17Rnd_9x19_M17_Black {
        MACRO_AI_MAGAZINE_HANDGUN
        ammo = QCLASS(AI_9x19);
        displayName = "Generic 9mm M17 Magazine";
    };

    // M9
    class CUP_15Rnd_9x19_M9;
    class CLASS(AI_15Rnd_9x19_M9): CUP_15Rnd_9x19_M9 {
        MACRO_AI_MAGAZINE_HANDGUN
        ammo = QCLASS(AI_9x19);
        displayName = "Generic 9mm M9 Magazine";
    };

    // SiG P239
    class hlc_10Rnd_9x19_B_P239;
    class CLASS(AI_10Rnd_9x19_P239): hlc_10Rnd_9x19_B_P239 {
        MACRO_AI_MAGAZINE_HANDGUN
        ammo = QCLASS(AI_9x19);
        displayName = "Generic 9mm P239 Magazine";
    };

    // Generic 9x19 SMG
    class 30Rnd_9x21_Mag;
    class CLASS(AI_30Rnd_9x19): 30Rnd_9x21_Mag {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_9x19);
        displayName = "Generic 9mm Magazine";
    };

    // MP5
    class CUP_30Rnd_9x19_MP5;
    class CLASS(AI_30Rnd_9x19_MP5): CUP_30Rnd_9x19_MP5 {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_9x19);
        displayName = "Generic MP5 Magazine";
    };

    // TEC9
    class CUP_32Rnd_9x19_TEC9;
    class CLASS(AI_32Rnd_9x19_TEC9): CUP_32Rnd_9x19_TEC9 {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_9x19);
        displayName = "Generic TEC9 Magazine";
    };

    // UZI
    class CUP_32Rnd_9x19_UZI_M;
    class CLASS(AI_32Rnd_9x19_UZI): CUP_32Rnd_9x19_UZI_M {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_9x19);
        displayName = "Generic UZI Magazine";
    };

    // Vityaz
    class CUP_30Rnd_9x19_Vityaz;
    class CLASS(AI_30Rnd_9x19_Vityaz): CUP_30Rnd_9x19_Vityaz {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_9x19);
        displayName = "Generic Vityaz Magazine";
    };

    // Bizon
    class CUP_64Rnd_9x19_Bizon_M;
    class CLASS(AI_64Rnd_9x19_Bizon): CUP_64Rnd_9x19_Bizon_M {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_9x19);
        displayName = "Generic Bizon Magazine";
    };

    // .45ACP
    // 1911
    class CUP_7Rnd_45ACP_1911;
    class CLASS(AI_8Rnd_45ACP_1911): CUP_7Rnd_45ACP_1911 {
        MACRO_AI_MAGAZINE_HANDGUN
        ammo = QCLASS(AI_45ACP);
        displayName = "Generic .45ACP 1911 Magazine";
    };

    // FNX-45
    class 11Rnd_45ACP_Mag;
    class CLASS(AI_11Rnd_45ACP_FNX): 11Rnd_45ACP_Mag {
        MACRO_AI_MAGAZINE_HANDGUN
        ammo = QCLASS(AI_45ACP);
        displayName = "Generic .45ACP FNX Magazine";
    };

    // MK23 SOCOM
    class CUP_12Rnd_45ACP_mk23;
    class CLASS(AI_12Rnd_45ACP_MK23): CUP_12Rnd_45ACP_mk23 {
        MACRO_AI_MAGAZINE_HANDGUN
        ammo = QCLASS(AI_45ACP);
        displayName = "Generic .45ACP MK23 Magazine";
    };

    // MAC-10
    class CUP_30Rnd_45ACP_MAC10_M;
    class CLASS(AI_30Rnd_45ACP_MAC10): CUP_30Rnd_45ACP_MAC10_M {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_45ACP);
        displayName = "Generic .45ACP MAC10 Magazine";
    };

    // Vector
    class 30Rnd_45ACP_Mag_SMG_01;
    class CLASS(AI_25Rnd_45ACP_Vector): 30Rnd_45ACP_Mag_SMG_01 {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_45ACP);
        displayName = "Generic .45ACP Vector Magazine";
    };

    // 4.6x30
    class CUP_40Rnd_46x30_MP7;
    class CLASS(AI_40Rnd_46x30_MP7): CUP_40Rnd_46x30_MP7 {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_46x30);
        displayName = "Generic 4.6x30 MP7 Magazine";
    };

    // 5.45x39
    // Regular
    class 30Rnd_545x39_Mag_F;
    class CLASS(AI_30Rnd_545x39_AK): 30Rnd_545x39_Mag_F {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_545x39);
        displayName = "Generic 5.45x39 AK Magazine";
    };

    // Fort
    class CUP_30Rnd_545x39_Fort224_M;
    class CLASS(AI_30Rnd_545x39_Fort): CUP_30Rnd_545x39_Fort224_M {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_545x39);
        displayName = "Generic 5.45x39 Fort Magazine";
    };

    // Quadstack
    class CUP_60Rnd_545x39_AK74M_M;
    class CLASS(AI_60Rnd_545x39_AK): CUP_60Rnd_545x39_AK74M_M {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_545x39);
        displayName = "Generic 5.45x39 AK Quadstack Magazine";
    };

    // 5.56x45
    // STANAG
    class 30Rnd_556x45_Stanag;
    class CLASS(AI_30Rnd_556x45_STANAG): 30Rnd_556x45_Stanag {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_556x45);
        displayName = "Generic 5.56x45 STANAG Magazine";
    };

    // AUG
    class hlc_30Rnd_556x45_B_AUG;
    class CLASS(AI_30Rnd_556x45_AUG): hlc_30Rnd_556x45_B_AUG {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_556x45);
        displayName = "Generic 5.56x45 AUG Magazine";
    };

    // AK
    class CUP_30Rnd_556x45_AK;
    class CLASS(AI_30Rnd_556x45_AK): CUP_30Rnd_556x45_AK {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_556x45);
        displayName = "Generic 5.56x45 AK Magazine";
    };

    // G36
    class CUP_30Rnd_TE1_Green_Tracer_556x45_G36;
    class CLASS(AI_30Rnd_556x45_G36): CUP_30Rnd_TE1_Green_Tracer_556x45_G36 {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_556x45);
        displayName = "Generic 5.56x45 G36 Magazine";
    };

    // FAMAS
    class CUP_25Rnd_556x45_Famas;
    class CLASS(AI_25Rnd_556x45_FAMAS): CUP_25Rnd_556x45_Famas {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_556x45);
        displayName = "Generic 5.56x45 FAMAS Magazine";
    };

    // R4
    class 35Rnd_556x45_Velko_reload_tracer_yellow_lxWS;
    class CLASS(AI_35Rnd_556x45_R4): 35Rnd_556x45_Velko_reload_tracer_yellow_lxWS {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_556x45);
        displayName = "Generic 5.56x45 R4 Magazine";
    };

    // SG55X Series
    class hlc_30Rnd_556x45_EPR_sg550;
    class CLASS(AI_30Rnd_556x45_SIG): hlc_30Rnd_556x45_EPR_sg550 {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_556x45);
        displayName = "Generic 5.56x45 SIG Magazine";
    };

    // Surefire
    class CUP_60Rnd_556x45_SureFire;
    class CLASS(AI_60Rnd_556x45_Surefire): CUP_60Rnd_556x45_SureFire {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_556x45);
        displayName = "Generic 5.56x45 Surefire Magazine";
    };

    // Beta-C
    class CUP_100Rnd_556x45_BetaCMag;
    class CLASS(AI_100Rnd_556x45_BetaC): CUP_100Rnd_556x45_BetaCMag {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_556x45);
        displayName = "Generic 5.56x45 Beta-C Magazine";
    };

    // Drum
    class 150Rnd_556x45_Drum_Mag_F;
    class CLASS(AI_150Rnd_556x45_Drum): 150Rnd_556x45_Drum_Mag_F {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_556x45);
        displayName = "Generic 5.56x45 Drum Magazine";
    };

    // M249 Pouch
    class CUP_200Rnd_TE4_Green_Tracer_556x45_M249_Pouch;
    class CLASS(AI_200Rnd_556x45_Pouch): CUP_200Rnd_TE4_Green_Tracer_556x45_M249_Pouch {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_556x45);
        displayName = "Generic 5.56x45 Pouch";
    };

    // Box
    class 200Rnd_556x45_Box_F;
    class CLASS(AI_200Rnd_556x45_Box): 200Rnd_556x45_Box_F {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_556x45);
        displayName = "Generic 5.56x45 Box Magazine";
    };

    // 5.7x28
    class 50Rnd_570x28_SMG_03;
    class CLASS(AI_50Rnd_57x28): 50Rnd_570x28_SMG_03 {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_57x28);
        displayName = "Generic 5.7x28 Magazine";
    };

    // 5.8x42
    // QBZ
    class 30Rnd_580x42_Mag_F;
    class CLASS(AI_30Rnd_58x42): 30Rnd_580x42_Mag_F {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_58x42);
        displayName = "Generic 5.8x42 Magazine";
    };

    // QBZ LSW
    class 100Rnd_580x42_Mag_F;
    class CLASS(AI_100Rnd_58x42): 100Rnd_580x42_Mag_F {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_58x42);
        displayName = "Generic 5.8x42 Drum Magazine";
    };

    // 6.5x39
    // MX
    class 30Rnd_65x39_caseless_mag;
    class CLASS(AI_30Rnd_65x39_MX): 30Rnd_65x39_caseless_mag {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_65x39);
        displayName = "Generic 6.5x39 MX Magazine";
    };

    class 30Rnd_65x39_caseless_black_mag;
    class CLASS(AI_30Rnd_65x39_MX_Black): 30Rnd_65x39_caseless_black_mag {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_65x39);
        displayName = "Generic 6.5x39 MX Magazine";
    };

    // MX LSW
    class 100Rnd_65x39_caseless_mag;
    class CLASS(AI_100Rnd_65x39_MX): 100Rnd_65x39_caseless_mag {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_65x39);
        displayName = "Generic 6.5x39 MX Magazine";
    };

    class 100Rnd_65x39_caseless_black_mag;
    class CLASS(AI_100Rnd_65x39_MX_Black): 100Rnd_65x39_caseless_black_mag {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_65x39);
        displayName = "Generic 6.5x39 MX Magazine";
    };

    // GROT
    class 30Rnd_65x39_caseless_msbs_mag;
    class CLASS(AI_30Rnd_65x39_GROT): 30Rnd_65x39_caseless_msbs_mag {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_65x39);
        displayName = "Generic 6.5x39 GROT Magazine";
    };

    // Katiba / Type-115
    class 30Rnd_65x39_caseless_green;
    class CLASS(AI_30Rnd_65x39_Katiba): 30Rnd_65x39_caseless_green {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_65x39);
        displayName = "Generic 6.5x39 Katiba Magazine";
    };

    // QBU
    class 20Rnd_650x39_Cased_Mag_F;
    class CLASS(AI_20Rnd_65x39): 20Rnd_650x39_Cased_Mag_F {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_65x39);
        displayName = "Generic 6.5x39 QBU Magazine";
    };

    // Belt
    class 200Rnd_65x39_cased_Box;
    class CLASS(AI_200Rnd_65x39_Belt): 200Rnd_65x39_cased_Box {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_65x39);
        displayName = "Generic 6.5x39 Belt";
    };

    // 6.8x43
    // ACR
    class CUP_30Rnd_680x43_Stanag;
    class CLASS(AI_30Rnd_68x43): CUP_30Rnd_680x43_Stanag {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_68x43);
        displayName = "Generic 6.8x43 Magazine";
    };

    // 7.62x39
    // AK
    class 30Rnd_762x39_Mag_F;
    class CLASS(AI_30Rnd_762x39_AK): 30Rnd_762x39_Mag_F {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_762x39);
        displayName = "Generic 7.62x39 Magazine";
    };

    // CZ807
    class CUP_30Rnd_762x39_CZ807;
    class CLASS(AI_30Rnd_762x39_CZ807): CUP_30Rnd_762x39_CZ807 {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_762x39);
        displayName = "Generic 7.62x39 Magazine";
    };

    // Drum
    class 75rnd_762x39_AK12_Mag_F;
    class CLASS(AI_75Rnd_762x39_Drum): 75rnd_762x39_AK12_Mag_F {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_762x39);
        displayName = "Generic 7.62x39 Drum";
    };

    // 7.62x51
    // Generic DMR
    class 20Rnd_762x51_Mag;
    class CLASS(AI_20Rnd_762x51): 20Rnd_762x51_Mag {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_762x51);
        displayName = "Generic 7.62x51 Magazine";
    };

    // FAL
    class CUP_20Rnd_762x51_FNFAL_M;
    class CLASS(AI_20Rnd_762x51_FAL): CUP_20Rnd_762x51_FNFAL_M {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_762x51);
        displayName = "Generic 7.62x51 FAL Magazine";
    };

    // SCAR-H
    class CUP_20Rnd_762x51_B_SCAR_bkl;
    class CLASS(AI_20Rnd_762x51_SCARH): CUP_20Rnd_762x51_B_SCAR_bkl {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_762x51);
        displayName = "Generic 7.62x51 SCAR-H Magazine";
    };

    // Belt
    class hlc_100Rnd_762x51_B_M60E4;
    class CLASS(AI_100Rnd_762x51_Belt): hlc_100Rnd_762x51_B_M60E4 {
        MACRO_AI_MAGAZINE
        ammo = QCLASS(AI_762x51);
        displayName = "Generic 7.62x51 Belt";
    };
};
