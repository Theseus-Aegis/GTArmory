class CfgMagazines {
    class APERSBoundingMine_Range_Mag;
    class CLASS(APERSBoundingMine_Range_Training_Mag): APERSBoundingMine_Range_Mag {
        displayName = "M26 Anti-Personnel Bounding Mine (Training)";
        ammo = QCLASS(APERSBoundingMine_Range_Training_Ammo);
    };

    class APERSMine_Range_Mag;
    class CLASS(APERSMine_Range_Training_Mag): APERSMine_Range_Mag {
        displayName = "VS-50 Anti-Personnel Mine (Training)";
        ammo = QCLASS(APERSMine_Range_Training_Ammo);
    };

    class APERSTripMine_Wire_Mag;
    class CLASS(APERSTripMine_Wire_Training_Mag): APERSTripMine_Wire_Mag {
        displayName = "PMR-3 Anti-Personnel Tripwire Mine (Training)";
        ammo = QCLASS(APERSTripMine_Wire_Training_Ammo);
    };

    class ATMine_Range_Mag;
    class CLASS(ATMine_Range_Training): ATMine_Range_Mag {
        displayName = "AT Mine (Training)";
        ammo = QCLASS(ATMine_Range_Training_Ammo);
    };

    class ClaymoreDirectionalMine_Remote_Mag;
    class CLASS(ClaymoreDirectionalMine_Remote_Training_Mag): ClaymoreDirectionalMine_Remote_Mag {
        displayName = "M18A1 Claymore (Training)";
        ammo = QCLASS(ClaymoreDirectionalMine_Remote_Training_Ammo);
    };

    class DemoCharge_Remote_Mag;
    class CLASS(DemoCharge_Remote_Training_Mag): DemoCharge_Remote_Mag {
        displayName = "M112 Demolition Block (Training)";
        ammo = QCLASS(DemoCharge_Remote_Training_Ammo);
    };

    class SatchelCharge_Remote_Mag;
    class CLASS(SatchelCharge_Remote_Training_Mag): SatchelCharge_Remote_Mag {
        displayName = "M183 Demolition Charge Assembly (Training)";
        ammo = QCLASS(SatchelCharge_Remote_Training_Ammo);
    };

    class SmokeShell;
    class CLASS(SmokeShell_Training): SmokeShell {
        displayName = "M83 Smoke Shell (White, Training)";
        ammo = QCLASS(SmokeShell_Training_Ammo);
    };

    class SmokeShellGreen;
    class CLASS(SmokeShellGreen_Training): SmokeShellGreen {
        displayName = "M18 Smoke Shell (Green, Training)";
        ammo = QCLASS(SmokeShellGreen_Training_Ammo);
    };

    class SmokeShellRed;
    class CLASS(SmokeShellRed_Training): SmokeShellRed {
        displayName = "M18 Smoke Shell (Red, Training)";
        ammo = QCLASS(SmokeShellRed_Training_Ammo);
    };

    class SmokeShellYellow;
    class CLASS(SmokeShellYellow_Training): SmokeShellYellow {
        displayName = "M18 Smoke Shell (Yellow, Training)";
        ammo = QCLASS(SmokeShellYellow_Training_Ammo);
    };

    class SmokeShellPurple;
    class CLASS(SmokeShellPurple_Training): SmokeShellPurple {
        displayName = "M18 Smoke Shell (Purple, Training)";
        ammo = QCLASS(SmokeShellPurple_Training_Ammo);
    };

    class SmokeShellBlue;
    class CLASS(SmokeShellBlue_Training): SmokeShellBlue {
        displayName = "M18 Smoke Shell (Blue, Training)";
        ammo = QCLASS(SmokeShellBlue_Training_Ammo);
    };

    class SmokeShellOrange;
    class CLASS(SmokeShellOrange_Training): SmokeShellOrange {
        displayName = "M18 Smoke Shell (Orange, Training)";
        ammo = QCLASS(SmokeShellOrange_Training_Ammo);
    };
};
