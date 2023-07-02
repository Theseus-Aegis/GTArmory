// AN-PEQ Top Mount (Black)
class CLASS(ANPEQ_15_Top_Laser_Black): cup_acc_anpeq_15_top_flashlight_black_l {
    displayName = "AN/PEQ-15 Laser + Flashlight (Top/Black/GT Edition)";
    MACRO_PRIMARY;

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {
            MACRO_IR_POINTER;
        };
        class Flashlight {};
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Top_Light_Black);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Top_Vis_Laser_Black);
    MRT_SwitchItemHintText = "IR Laser";
};

class CLASS(ANPEQ_15_Top_Light_Black): CLASS(ANPEQ_15_Top_Laser_Black) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        class Pointer {};
        class Flashlight {
            MACRO_FLASHLIGHT;
        };
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Top_Low_Light_Black);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Top_Laser_Black);
    MRT_SwitchItemHintText = "Flashlight Blue";
};

class CLASS(ANPEQ_15_Top_Low_Light_Black): CLASS(ANPEQ_15_Top_Laser_Black) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        class Pointer {};
        class Flashlight {
            MACRO_RED_FLASHLIGHT;
        };
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Top_Vis_Laser_Black);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Top_Light_Black);
    MRT_SwitchItemHintText = "Flashlight Red";
};

class CLASS(ANPEQ_15_Top_Vis_Laser_Black): CLASS(ANPEQ_15_Top_Laser_Black) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        class Pointer {
            MACRO_VISIBLE_POINTER;
        };
        class Flashlight {};
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Top_Laser_Black);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Top_Low_Light_Black);
    MRT_SwitchItemHintText = "Visible Laser";
};

// AN-PEQ Top Mount (OD)
class CLASS(ANPEQ_15_Top_Laser_OD): cup_acc_anpeq_15_top_flashlight_od_l {
    displayName = "AN/PEQ-15 Laser + Flashlight (Top/OD/GT Edition)";
    MACRO_PRIMARY;

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {
            MACRO_IR_POINTER;
        };
        class Flashlight {};
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Top_Light_OD);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Top_Vis_Laser_OD);
    MRT_SwitchItemHintText = "IR Laser";
};

class CLASS(ANPEQ_15_Top_Light_OD): CLASS(ANPEQ_15_Top_Laser_OD) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        class Pointer {};
        class Flashlight {
            MACRO_FLASHLIGHT;
        };
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Top_Low_Light_OD);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Top_Laser_OD);
    MRT_SwitchItemHintText = "Flashlight Blue";
};

class CLASS(ANPEQ_15_Top_Low_Light_OD): CLASS(ANPEQ_15_Top_Laser_OD) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        class Pointer {};
        class Flashlight {
            MACRO_RED_FLASHLIGHT;
        };
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Top_Vis_Laser_OD);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Top_Light_OD);
    MRT_SwitchItemHintText = "Flashlight Red";
};

class CLASS(ANPEQ_15_Top_Vis_Laser_OD): CLASS(ANPEQ_15_Top_Laser_OD) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        class Pointer {
            MACRO_VISIBLE_POINTER;
        };
        class Flashlight {};
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Top_Laser_OD);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Top_Low_Light_OD);
    MRT_SwitchItemHintText = "Visible Laser";
};

// AN-PEQ Top Mount (Tan)
class CLASS(ANPEQ_15_Top_Laser_Tan): cup_acc_anpeq_15_top_flashlight_tan_l {
    displayName = "AN/PEQ-15 Laser + Flashlight (Top/Tan/GT Edition)";
    MACRO_PRIMARY;

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {
            MACRO_IR_POINTER;
        };
        class Flashlight {};
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Top_Light_Tan);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Top_Vis_Laser_Tan);
    MRT_SwitchItemHintText = "IR Laser";
};

class CLASS(ANPEQ_15_Top_Light_Tan): CLASS(ANPEQ_15_Top_Laser_Tan) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        class Pointer {};
        class Flashlight {
            MACRO_FLASHLIGHT;
        };
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Top_Low_Light_Tan);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Top_Laser_Tan);
    MRT_SwitchItemHintText = "Flashlight Blue";
};

class CLASS(ANPEQ_15_Top_Low_Light_Tan): CLASS(ANPEQ_15_Top_Laser_Tan) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        class Pointer {};
        class Flashlight {
            MACRO_RED_FLASHLIGHT;
        };
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Top_Vis_Laser_Tan);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Top_Light_Tan);
    MRT_SwitchItemHintText = "Flashlight Red";
};

class CLASS(ANPEQ_15_Top_Vis_Laser_Tan): CLASS(ANPEQ_15_Top_Laser_Tan) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        class Pointer {
            MACRO_VISIBLE_POINTER;
        };
        class Flashlight {};
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Top_Laser_Tan);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Top_Low_Light_Tan);
    MRT_SwitchItemHintText = "Visible Laser";
};
