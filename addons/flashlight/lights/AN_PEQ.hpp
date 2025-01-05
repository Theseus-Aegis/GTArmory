// AN-PEQ Side Mount (Black)
class CLASS(ANPEQ_15_Laser_Black): cup_acc_anpeq_15_flashlight_black_l {
    displayName = "AN/PEQ-15 Laser + Flashlight (Black/GT Edition)";
    MACRO_PRIMARY;

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {
            MACRO_IR_POINTER;
        };
        class Flashlight {};
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Light_Black);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Vis_Laser_Black);
    MRT_SwitchItemHintText = "IR Laser";
};

class CLASS(ANPEQ_15_Light_Black): CLASS(ANPEQ_15_Laser_Black) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_FLASHLIGHT;
        };
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Low_Light_Black);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Laser_Black);
    MRT_SwitchItemHintText = "Visible White";
};

class CLASS(ANPEQ_15_Low_Light_Black): CLASS(ANPEQ_15_Laser_Black) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_RED_FLASHLIGHT;
        };
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_IR_Light_Black);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Light_Black);
    MRT_SwitchItemHintText = "Visible Red";
};

class CLASS(ANPEQ_15_IR_Light_Black): CLASS(ANPEQ_15_Laser_Black) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_IR_LIGHT;
        };
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Vis_Laser_Black);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Low_Light_Black);
    MRT_SwitchItemHintText = "IR Illuminator";
};

class CLASS(ANPEQ_15_Vis_Laser_Black): CLASS(ANPEQ_15_Laser_Black) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        mass = 4;
        class Pointer {
            MACRO_VISIBLE_POINTER;
        };
        class Flashlight {};
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Laser_Black);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_IR_Light_Black);
    MRT_SwitchItemHintText = "Visible Laser";
};

// AN-PEQ Side Mount (OD)
class CLASS(ANPEQ_15_Laser_OD): cup_acc_anpeq_15_flashlight_od_l {
    displayName = "AN/PEQ-15 Laser + Flashlight (OD/GT Edition)";
    MACRO_PRIMARY;

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {
            MACRO_IR_POINTER;
        };
        class Flashlight {};
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Light_OD);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Vis_Laser_OD);
    MRT_SwitchItemHintText = "IR Laser";
};

class CLASS(ANPEQ_15_Light_OD): CLASS(ANPEQ_15_Laser_OD) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_FLASHLIGHT;
        };
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Low_Light_OD);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Laser_OD);
    MRT_SwitchItemHintText = "Visible White";
};

class CLASS(ANPEQ_15_Low_Light_OD): CLASS(ANPEQ_15_Laser_OD) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_RED_FLASHLIGHT;
        };
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_IR_Light_OD);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Light_OD);
    MRT_SwitchItemHintText = "Visible Red";
};

class CLASS(ANPEQ_15_IR_Light_OD): CLASS(ANPEQ_15_Laser_OD) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_IR_LIGHT;
        };
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Vis_Laser_OD);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Low_Light_OD);
    MRT_SwitchItemHintText = "IR Illuminator";
};

class CLASS(ANPEQ_15_Vis_Laser_OD): CLASS(ANPEQ_15_Laser_OD) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        mass = 4;
        class Pointer {
            MACRO_VISIBLE_POINTER;
        };
        class Flashlight {};
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Laser_OD);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_IR_Light_OD);
    MRT_SwitchItemHintText = "Visible Laser";
};

// AN-PEQ Side Mount (Tan)
class CLASS(ANPEQ_15_Laser_Tan): cup_acc_anpeq_15_flashlight_tan_l {
    displayName = "AN/PEQ-15 Laser + Flashlight (Tan/GT Edition)";
    MACRO_PRIMARY;

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {
            MACRO_IR_POINTER;
        };
        class Flashlight {};
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Light_Tan);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Vis_Laser_Tan);
    MRT_SwitchItemHintText = "IR Laser";
};

class CLASS(ANPEQ_15_Light_Tan): CLASS(ANPEQ_15_Laser_Tan) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_FLASHLIGHT;
        };
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Low_Light_Tan);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Laser_Tan);
    MRT_SwitchItemHintText = "Visible White";
};

class CLASS(ANPEQ_15_Low_Light_Tan): CLASS(ANPEQ_15_Laser_Tan) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_RED_FLASHLIGHT;
        };
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_IR_Light_Tan);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Light_Tan);
    MRT_SwitchItemHintText = "Visible Red";
};

class CLASS(ANPEQ_15_IR_Light_Tan): CLASS(ANPEQ_15_Laser_Tan) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_IR_LIGHT;
        };
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Vis_Laser_Tan);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_Low_Light_Tan);
    MRT_SwitchItemHintText = "IR Illuminator";
};

class CLASS(ANPEQ_15_Vis_Laser_Tan): CLASS(ANPEQ_15_Laser_Tan) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        mass = 4;
        class Pointer {
            MACRO_VISIBLE_POINTER;
        };
        class Flashlight {};
    };
    MRT_SwitchItemNextClass = QCLASS(ANPEQ_15_Laser_Tan);
    MRT_SwitchItemPrevClass = QCLASS(ANPEQ_15_IR_Light_Tan);
    MRT_SwitchItemHintText = "Visible Laser";
};
