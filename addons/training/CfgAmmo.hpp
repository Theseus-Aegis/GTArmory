#define TRAINING_EXPLOSIVE ace_explosives_size = 0;\
    ace_explosives_detonator = 0;\
    CraterEffects = "";\
    explosionEffects = "TrainingMineEffect";\
    hit = 1;\
    indirectHit = 0;\
    indirectHitRange = 1;\
    minDamageForCamShakeHit = 1.55;\
    SoundSetExplosion[] = {"TrainingMine_Exp_SoundSet","TrainingMine_Flag_SoundSet"};\
    suppressionRadiusHit = 0

class CfgAmmo {
    class APERSBoundingMine_Range_Ammo;
    class CLASS(APERSBoundingMine_Range_Training_Ammo): APERSBoundingMine_Range_Ammo {
        TRAINING_EXPLOSIVE;
        ace_explosives_magazine = QCLASS(APERSBoundingMine_Range_Training_Mag);
        defaultMagazine = QCLASS(APERSBoundingMine_Range_Training_Mag);
    };

    class APERSMine_Range_Ammo;
    class CLASS(APERSMine_Range_Training_Ammo): APERSMine_Range_Ammo {
        TRAINING_EXPLOSIVE;
        ace_explosives_magazine = QCLASS(APERSMine_Range_Training_Mag);
        defaultMagazine = QCLASS(APERSMine_Range_Training_Mag);
    };

    class APERSTripMine_Wire_Ammo;
    class CLASS(APERSTripMine_Wire_Training_Ammo): APERSTripMine_Wire_Ammo {
        TRAINING_EXPLOSIVE;
        ace_explosives_magazine = QCLASS(APERSTripMine_Wire_Training_Mag);
        defaultMagazine = QCLASS(APERSTripMine_Wire_Training_Mag);
    };

    class ATMine_Range_Ammo;
    class CLASS(ATMine_Range_Training_Ammo): ATMine_Range_Ammo {
        TRAINING_EXPLOSIVE;
        ace_explosives_magazine = QCLASS(ATMine_Range_Training_Mag);
        defaultMagazine = QCLASS(ATMine_Range_Training_Mag);
    };

    class ClaymoreDirectionalMine_Remote_Ammo;
    class CLASS(ClaymoreDirectionalMine_Remote_Training_Ammo): ClaymoreDirectionalMine_Remote_Ammo {
        TRAINING_EXPLOSIVE;
        ace_explosives_magazine = QCLASS(ClaymoreDirectionalMine_Remote_Training_Mag);
        defaultMagazine = QCLASS(ClaymoreDirectionalMine_Remote_Training_Mag);
    };

    class DemoCharge_Remote_Ammo;
    class CLASS(DemoCharge_Remote_Training_Ammo): DemoCharge_Remote_Ammo {
        TRAINING_EXPLOSIVE;
        ace_explosives_magazine = QCLASS(DemoCharge_Remote_Training_Mag);
        defaultMagazine = QCLASS(DemoCharge_Remote_Training_Mag);
    };

    class SatchelCharge_Remote_Ammo;
    class CLASS(SatchelCharge_Remote_Training_Ammo): SatchelCharge_Remote_Ammo {
        TRAINING_EXPLOSIVE;
        ace_explosives_magazine = QCLASS(SatchelCharge_Remote_Training_Mag);
        defaultMagazine = QCLASS(SatchelCharge_Remote_Training_Mag);
    };

    class SmokeShell;
    class CLASS(SmokeShell_Training_Ammo): SmokeShell {
        timeToLive = 2;
    };

    class SmokeShellRed;
    class CLASS(SmokeShellRed_Training_Ammo): SmokeShellRed {
        timeToLive = 2;
    };

    class SmokeShellGreen;
    class CLASS(SmokeShellGreen_Training_Ammo): SmokeShellGreen {
        timeToLive = 2;
    };

    class SmokeShellYellow;
    class CLASS(SmokeShellYellow_Training_Ammo): SmokeShellYellow {
        timeToLive = 2;
    };

    class SmokeShellPurple;
    class CLASS(SmokeShellPurple_Training_Ammo): SmokeShellPurple {
        timeToLive = 2;
    };

    class SmokeShellBlue;
    class CLASS(SmokeShellBlue_Training_Ammo): SmokeShellBlue {
        timeToLive = 2;
    };

    class SmokeShellOrange;
    class CLASS(SmokeShellOrange_Training_Ammo): SmokeShellOrange {
        timeToLive = 2;
    };
};
