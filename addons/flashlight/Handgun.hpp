// CZ M3X - IR/VIS/Flashlight
class CUP_acc_CZ_M3X;
class CLASS(CZ_M3X_Laser): CUP_acc_CZ_M3X {
    displayName = CSTRING(CZ_M3X_Display);
    MACRO_MULTI_1

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 2;
        class Pointer {
            MACRO_IR_POINTER_SETTINGS
        };
        class Flashlight {};
    };
    MRT_SwitchItemNextClass = QCLASS(CZ_M3X_Light);
    MRT_SwitchItemPrevClass = QCLASS(CZ_M3X_Vis_Laser);
    MRT_SwitchItemHintText = CSTRING(Laser_Pointer);
};

class CLASS(CZ_M3X_Light): CUP_acc_CZ_M3X {
    displayName = CSTRING(CZ_M3X_Display);
    MACRO_MULTI_2

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 2;
        class Pointer {};
        class Flashlight {
            MACRO_HI_FLASHLIGHT_SETTINGS
        };
    };
    MRT_SwitchItemNextClass = QCLASS(CZ_M3X_Vis_Laser);
    MRT_SwitchItemPrevClass = QCLASS(CZ_M3X_Laser);
    MRT_SwitchItemHintText = CSTRING(High_Power_Light);
};

class CLASS(CZ_M3X_Vis_Laser): CUP_acc_CZ_M3X {
    displayName = CSTRING(CZ_M3X_Display);
    MACRO_MULTI_2

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 2;
        class Pointer {};
        class Flashlight {
            MACRO_VIS_POINTER_SETTINGS
        };
    };
    MRT_SwitchItemNextClass = QCLASS(CZ_M3X_Laser);
    MRT_SwitchItemPrevClass = QCLASS(CZ_M3X_Light);
    MRT_SwitchItemHintText = CSTRING(Visible_Laser);
    ACE_LaserPointer = 1;
};

// MLPLS - IR/VIS Laser
class CUP_acc_MLPLS_Laser;
class CLASS(MLPLS_Laser): CUP_acc_MLPLS_Laser {
    displayName = CSTRING(MLPLS_Display);
    MACRO_MULTI_1

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 2;
        class Pointer {
            MACRO_IR_POINTER_SETTINGS
        };
        class Flashlight {};
    };
    MRT_SwitchItemNextClass = QCLASS(MLPLS_Vis_Laser);
    MRT_SwitchItemPrevClass = QCLASS(MLPLS_Vis_Laser);
    MRT_SwitchItemHintText = CSTRING(Laser_Pointer);
};

class CLASS(MLPLS_Vis_Laser): CUP_acc_MLPLS_Laser {
    displayName = CSTRING(MLPLS_Display);
    MACRO_MULTI_2

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 2;
        class Pointer {};
        class Flashlight {
            MACRO_VIS_POINTER_SETTINGS
        };
    };
    MRT_SwitchItemNextClass = QCLASS(MLPLS_Laser);
    MRT_SwitchItemPrevClass = QCLASS(MLPLS_Laser);
    MRT_SwitchItemHintText = CSTRING(Visible_Laser);
    ACE_LaserPointer = 1;
};
