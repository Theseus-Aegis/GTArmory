class CfgAmmo {
 /*
  * Ammunition used for AI only. Won't be labelled as AP/EPR/Ball, designed around giving players a challenge and weaker enemies still being lethal.
  * Shotgun ammunition can be the same or Vanilla.
  * High calibers (7.62x54r or above should be Vanilla)
  * .300AAC / 9x39 Subsonic should just use whatever is available
  */

    // 9x19
    class B_9x21_Ball_Tracer_Red;
    class CLASS(AI_9x19): B_9x21_Ball_Tracer_Red {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 1;
        hit = 9;
        MACRO_TRACERS
    };

    // .45ACP
    class B_45ACP_Ball;
    class CLASS(AI_45ACP): B_45ACP_Ball {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 0.65;
        hit = 11.5;
        MACRO_TRACERS
    };

    // 4.6x30
    class CUP_B_46x30_Ball_Tracer_Red;
    class CLASS(AI_46x30): CUP_B_46x30_Ball_Tracer_Red {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 1;
        hit = 9.3;
        MACRO_TRACERS
    };

    // 5.45x39
    class B_545x39_Ball_Green_F;
    class CLASS(AI_545x39): B_545x39_Ball_Green_F {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 1.1;
        hit = 11.3;
        MACRO_TRACERS
    };

    // 5.56x45
    class B_556x45_Ball;
    class CLASS(AI_556x45): B_556x45_Ball {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 1.7;
        hit = 12.3;
        MACRO_TRACERS
    };

    // 5.7x28
    class CUP_B_570x28_Ball_Tracer_Red;
    class CLASS(AI_57x28): CUP_B_570x28_Ball_Tracer_Red {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 1.6;
        hit = 13;
        MACRO_TRACERS
    };

    // 5.8x42
    class B_580x42_Ball_F;
    class CLASS(AI_58x42): B_580x42_Ball_F {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 1.4;
        hit = 10.7;
        MACRO_TRACERS
    };

    // 6.5x39
    class B_65x39_Caseless;
    class CLASS(AI_65x39): B_65x39_Caseless {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 1.8;
        hit = 12;
        MACRO_TRACERS
    };

    // 6.8x43
    class CLASS(AI_68x43): CLASS(AI_65x39) {
        caliber = 2;
        hit = 12.3;
    };

    // 7.62x39
    class B_762x39_Ball_F;
    class CLASS(AI_762x39): B_762x39_Ball_F {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 1.68;
        hit = 12.5;
        MACRO_TRACERS
    };

    // 7.62x51
    class B_762x51_Ball;
    class CLASS(AI_762x51): B_762x51_Ball {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 2;
        hit = 14;
        MACRO_TRACERS
    };
};
