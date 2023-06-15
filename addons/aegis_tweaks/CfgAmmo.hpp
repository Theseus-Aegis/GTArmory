class CfgAmmo {
    class GrenadeHand;
    class SmokeShell: GrenadeHand {
        aiAmmoUsageFlags = "4 + 2";
        grenadeFireSound[] = {
            "SmokeShellSoundHit1", 0.25,
            "SmokeShellSoundHit2", 0.25,
            "SmokeShellSoundHit3", 0.5
        };
    };
    class SmokeShellRed: SmokeShell {
        aiAmmoUsageFlags = "4 + 2";
    };
    class SmokeShellGreen: SmokeShell {
        aiAmmoUsageFlags = "4 + 2";
    };
    class SmokeShellYellow: SmokeShell {
        aiAmmoUsageFlags = "4 + 2";
    };
    class SmokeShellPurple: SmokeShell {
        aiAmmoUsageFlags = "4 + 2";
    };
    class SmokeShellBlue: SmokeShell {
        aiAmmoUsageFlags = "4 + 2";
    };
    class SmokeShellOrange: SmokeShell {
        aiAmmoUsageFlags = "4 + 2";
    };
    class G_40mm_Smoke: SmokeShell {
        explosionTime = 2;
        timeToLive = 40;
        SmokeShellSoundHit1[] = {"A3\Sounds_F\weapons\smokeshell\smoke_1", 1.25893, 1, 100};
        SmokeShellSoundHit2[] = {"A3\Sounds_F\weapons\smokeshell\smoke_2", 1.25893, 1, 100};
        SmokeShellSoundHit3[] = {"A3\Sounds_F\weapons\smokeshell\smoke_3", 1.25893, 1, 100};
        SmokeShellSoundLoop1[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop1", 0.125893, 1, 70};
        SmokeShellSoundLoop2[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop2", 0.125893, 1, 70};
        grenadeBurningSound[] = {"SmokeShellSoundLoop1", 0.5, "SmokeShellSoundLoop2", 0.5};
        grenadeFireSound[] = {
            "SmokeShellSoundHit1", 0.25,
            "SmokeShellSoundHit2", 0.25,
            "SmokeShellSoundHit3", 0.5
        };
    };
    class G_40mm_SmokeRed: G_40mm_Smoke {
        aiAmmoUsageFlags = "4 + 2";
    };
    class G_40mm_SmokeGreen: G_40mm_Smoke {
        aiAmmoUsageFlags = "4 + 2";
    };
    class G_40mm_SmokeYellow: G_40mm_Smoke {
        aiAmmoUsageFlags = "4 + 2";
    };
    class G_40mm_SmokePurple: G_40mm_Smoke {
        aiAmmoUsageFlags = "4 + 2";
    };
    class G_40mm_SmokeBlue: G_40mm_Smoke {
        aiAmmoUsageFlags = "4 + 2";
    };
    class G_40mm_SmokeOrange: G_40mm_Smoke {
        aiAmmoUsageFlags = "4 + 2";
    };

    class Chemlight_base;
    class Chemlight_Green: Chemlight_base {
        typicalSpeed = 14;
    };

    class FlareCore;
    class FlareBase: FlareCore {
        timeToLive = 60;
        intensity = 20000;
        flareSize = 12;
    };
    class F_40mm_White: FlareBase {
        lightColor[] = {0.5, 0.5, 0.5, 0.5};
        intensity = 40000;
        brightness = 12;
    };
    class F_40mm_Green: F_40mm_White {
        lightColor[] = {0.25, 0.5, 0.25, 0};
    };
    class F_40mm_Red: F_40mm_White {
        lightColor[] = {0.5, 0.25, 0.25, 0};
    };
    class F_40mm_Yellow: F_40mm_White {
        lightColor[] = {0.5, 0.5, 0.25, 0};
    };
    class F_40mm_Cir: F_40mm_White {
        lightColor[] = {0.5, 0.5, 0.25, 0};
        intensity = 40000;
        brightness = 12;
    };
    class F_20mm_White: FlareBase {
        lightColor[] = {0.5, 0.5, 0.5, 0.5};
        intensity = 20000;
        brightness = 8;
        flareSize = 6;
    };
    class F_20mm_Green: F_20mm_White {
        lightColor[] = {0.25, 0.5, 0.25, 0};
    };
    class F_20mm_Red: F_20mm_White {
        lightColor[] = {0.5, 0.25, 0.25, 0};
    };
    class F_20mm_Yellow: F_20mm_White {
        lightColor[] = {0.5, 0.5, 0.25, 0};
    };

};
