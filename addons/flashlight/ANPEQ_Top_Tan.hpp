class cup_acc_anpeq_15_top_flashlight_tan_l;
class CLASS(ANPEQ_15_Top_Laser_Tan): cup_acc_anpeq_15_top_flashlight_tan_l {
    displayName = "AN/PEQ-15 Laser + Flashlight (Top/Tan/GT Edition)";
    MACRO_MULTI_1

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {
            MACRO_IR_POINTER_SETTINGS
        };
        class Flashlight {};
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Top_Light_Tan);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Top_Vis_Laser_Tan);
    MRT_SwitchItemHintText = "IR Laser";
};

class cup_acc_anpeq_15_top_flashlight_tan_f;
class CLASS(ANPEQ_15_Top_Light_Tan): cup_acc_anpeq_15_top_flashlight_tan_f {
    displayName = "AN/PEQ-15 Laser + Flashlight (Top/Tan/GT Edition)";
    MACRO_MULTI_2

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_HI_FLASHLIGHT_SETTINGS
        };
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Top_Low_Light_Tan);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Top_Laser_Tan);
    MRT_SwitchItemHintText = "Flashlight Blue";
};

class CLASS(ANPEQ_15_Top_Low_Light_Tan): cup_acc_anpeq_15_top_flashlight_tan_f {
    displayName = "AN/PEQ-15 Laser + Flashlight (Top/Tan/GT Edition)";
    MACRO_MULTI_2

    class ItemInfo: InventoryFlashLightItem_Base_F {
        class Pointer {};
        class Flashlight {
            MACRO_LOW_FLASHLIGHT_SETTINGS
        };
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Top_Vis_Laser_Tan);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Top_Light_Tan);
    MRT_SwitchItemHintText = "Flashlight Red";
};

class cup_acc_anpeq_15_top_flashlight_tan_v;
class CLASS(ANPEQ_15_Top_Vis_Laser_Tan): cup_acc_anpeq_15_top_flashlight_tan_v {
    displayName = "AN/PEQ-15 Laser + Flashlight (Top/Tan/GT Edition)";
    MACRO_MULTI_2

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_VIS_POINTER_SETTINGS
        };
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Top_Laser_Tan);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Top_Low_Light_Tan);
    MRT_SwitchItemHintText = "Visible Laser";
    ACE_LaserPointer = 1;
};
