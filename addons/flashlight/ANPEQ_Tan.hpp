class cup_acc_anpeq_15_flashlight_tan_l;
class CLASS(ANPEQ_15_Laser_Tan): cup_acc_anpeq_15_flashlight_tan_l {
    displayName = CSTRING(ANPEQ_15_Laser_Light_Tan_Display);
    MACRO_MULTI_1

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {
            MACRO_IR_POINTER_SETTINGS
        };
        class Flashlight {};
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Light_Tan);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Vis_Laser_Tan);
    MRT_SwitchItemHintText = CSTRING(Laser_Pointer);
};

class cup_acc_anpeq_15_flashlight_tan_f;
class CLASS(ANPEQ_15_Light_Tan): cup_acc_anpeq_15_flashlight_tan_f {
    displayName = CSTRING(ANPEQ_15_Laser_Light_Tan_Display);
    MACRO_MULTI_2

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_HI_FLASHLIGHT_SETTINGS
        };
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Low_Light_Tan);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Laser_Tan);
    MRT_SwitchItemHintText = CSTRING(High_Power_Light);
};

class CLASS(ANPEQ_15_Low_Light_Tan): cup_acc_anpeq_15_flashlight_tan_f {
    displayName = CSTRING(ANPEQ_15_Laser_Light_Tan_Display);
    MACRO_MULTI_2

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_LOW_FLASHLIGHT_SETTINGS
        };
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Vis_Laser_Tan);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Light_Tan);
    MRT_SwitchItemHintText = CSTRING(Low_Power_Light);
};

class cup_acc_anpeq_15_flashlight_tan_v;
class CLASS(ANPEQ_15_Vis_Laser_Tan): cup_acc_anpeq_15_flashlight_tan_v {
    displayName = CSTRING(ANPEQ_15_Laser_Light_Tan_Display);
    MACRO_MULTI_2

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_VIS_POINTER_SETTINGS
        };
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Laser_Tan);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Low_Light_Tan);
    MRT_SwitchItemHintText = CSTRING(Visible_Laser);
    ACE_LaserPointer = 1;
};
