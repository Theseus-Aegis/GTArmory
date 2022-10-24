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
};
