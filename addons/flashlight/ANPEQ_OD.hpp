class cup_acc_anpeq_15_flashlight_od_l;
class CLASS(ANPEQ_15_Laser_OD): cup_acc_anpeq_15_flashlight_od_l {
    displayName = CSTRING(ANPEQ_15_Laser_Light_OD_Display);
    MACRO_MULTI_1

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {
            MACRO_IR_POINTER_SETTINGS
        };
        class Flashlight {};
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Light_OD);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Vis_Laser_OD);
    MRT_SwitchItemHintText = CSTRING(Laser_Pointer);
};

class cup_acc_anpeq_15_flashlight_od_f;
class CLASS(ANPEQ_15_Light_OD): cup_acc_anpeq_15_flashlight_od_f {
    displayName = CSTRING(ANPEQ_15_Laser_Light_OD_Display);
    MACRO_MULTI_2

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_HI_FLASHLIGHT_SETTINGS
        };
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Low_Light_OD);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Laser_OD);
    MRT_SwitchItemHintText = CSTRING(High_Power_Light);
};

class CLASS(ANPEQ_15_Low_Light_OD): cup_acc_anpeq_15_flashlight_od_f {
    displayName = CSTRING(ANPEQ_15_Laser_Light_OD_Display);
    MACRO_MULTI_2

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_LOW_FLASHLIGHT_SETTINGS
        };
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Vis_Laser_OD);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Light_OD);
    MRT_SwitchItemHintText = CSTRING(Low_Power_Light);
};

class cup_acc_anpeq_15_flashlight_od_v;
class CLASS(ANPEQ_15_Vis_Laser_OD): cup_acc_anpeq_15_flashlight_od_v {
    displayName = CSTRING(ANPEQ_15_Laser_Light_OD_Display);
    MACRO_MULTI_2

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_VIS_POINTER_SETTINGS
        };
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Laser_OD);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Low_Light_OD);
    MRT_SwitchItemHintText = CSTRING(Visible_Laser);
    ACE_LaserPointer = 1;
};
