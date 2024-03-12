class CfgVehicles {
    class APERSBoundingMine;
    class CLASS(APERSBoundingMine_Training): APERSBoundingMine {
        ammo = QCLASS(APERSBoundingMine_Range_Training_Ammo);
        displayName = "APERS Bounding Mine (Training)";
    };
    class ModuleMine_APERSBoundingMine_F;
    class CLASS(ModuleMine_APERSBoundingMine_Training_F): ModuleMine_APERSBoundingMine_F {
        displayName = "APERS Bounding Mine (Training)";
        explosive = QCLASS(APERSBoundingMine_Range_Training_Ammo);
    };

    class APERSMine;
    class CLASS(APERSMine_Training): APERSMine {
        ammo = QCLASS(APERSMine_Range_Training_Ammo);
        displayName = "APERS Mine (Training)";
    };
    class ModuleMine_APERSMine_F;
    class CLASS(ModuleMine_APERSMine_Training_F): ModuleMine_APERSMine_F {
        displayName = "APERS Mine (Training)";
        explosive = QCLASS(APERSMine_Range_Training_Ammo);
    };

    class APERSTripMine;
    class CLASS(APERSTripMine_Training): APERSTripMine {
        ammo = QCLASS(APERSTripMine_Wire_Training_Ammo);
        displayName = "APERS Tripwire Mine (Training)";
    };
    class ModuleMine_APERSTripMine_F;
    class CLASS(ModuleMine_APERSTripMine_Training_F): ModuleMine_APERSTripMine_F {
        displayName = "APERS Tripwire Mine (Training)";
        explosive = QCLASS(APERSTripMine_Wire_Training_Ammo);
    };

    class ATMine;
    class CLASS(ATMine_Training): ATMine {
        ammo = QCLASS(ATMine_Range_Training_Ammo);
        displayName = "AT Mine (Training)";
    };
    class ModuleMine_ATMine_F;
    class CLASS(ModuleMine_ATMine_Training_F): ModuleMine_ATMine_F {
        displayName = "AT Mine (Training)";
        explosive = QCLASS(ATMine_Range_Training_Ammo);
    };

    class Claymore_F;
    class CLASS(Claymore_Training): Claymore_F {
        ammo = QCLASS(ClaymoreDirectionalMine_Remote_Training_Ammo);
        displayName = "Claymore (Training)";
    };
    class ModuleExplosive_Claymore_F;
    class CLASS(ModuleExplosive_Claymore_Training_F): ModuleExplosive_Claymore_F {
        displayName = "Claymore (Training)";
        explosive = QCLASS(ClaymoreDirectionalMine_Remote_Training_Ammo);
    };

    class DemoCharge_F;
    class CLASS(DemoCharge_Training): DemoCharge_F {
        ammo = QCLASS(DemoCharge_Remote_Training_Ammo);
        displayName = "Demo Charge (Training)";
    };
    class ModuleExplosive_DemoCharge_F;
    class CLASS(ModuleExplosive_DemoCharge_Training_F): ModuleExplosive_DemoCharge_F {
        displayName = "Demo Charge (Training)";
        explosive = QCLASS(DemoCharge_Remote_Training_Ammo);
    };

    class SatchelCharge_F;
    class CLASS(SatchelCharge_Training): SatchelCharge_F {
        ammo = QCLASS(SatchelCharge_Remote_Training_Ammo);
        displayName = "Satchel Charge (Training)";
    };
    class ModuleExplosive_SatchelCharge_F;
    class CLASS(ModuleExplosive_SatchelCharge_Training_F): ModuleExplosive_SatchelCharge_F {
        displayName = "Satchel Charge (Training)";
        explosive = QCLASS(SatchelCharge_Remote_Training_Ammo);
    };
};
