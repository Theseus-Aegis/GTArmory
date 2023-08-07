// LLM01 (Black)
class CLASS(LLM01_Laser_Black): CUP_acc_LLM01_L {
    displayName = "LLM01 Black (GT Edition)";
    MACRO_PRIMARY;

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {
            MACRO_IR_POINTER;
        };
        class Flashlight {};
    };
    MRT_SwitchItemNextClass = QCLASS(LLM01_Light_Black);
    MRT_SwitchItemPrevClass = QCLASS(LLM01_Vis_Laser_Black);
    MRT_SwitchItemHintText = "IR Laser";
};

class CLASS(LLM01_Light_Black): CLASS(LLM01_Laser_Black) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_FLASHLIGHT;
        };
    };
    MRT_SwitchItemNextClass = QCLASS(LLM01_Low_Light_Black);
    MRT_SwitchItemPrevClass = QCLASS(LLM01_Laser_Black);
    MRT_SwitchItemHintText = "Flashlight Blue";
};

class CLASS(LLM01_Low_Light_Black): CLASS(LLM01_Laser_Black) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_RED_FLASHLIGHT;
        };
    };
    MRT_SwitchItemNextClass = QCLASS(LLM01_Vis_Laser_Black);
    MRT_SwitchItemPrevClass = QCLASS(LLM01_Light_Black);
    MRT_SwitchItemHintText = "Flashlight Red";
};

class CLASS(LLM01_Vis_Laser_Black): CLASS(LLM01_Laser_Black) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        mass = 4;
        class Pointer {
            MACRO_VISIBLE_POINTER;
        };
        class Flashlight {};
    };
    MRT_SwitchItemNextClass = QCLASS(LLM01_Laser_Black);
    MRT_SwitchItemPrevClass = QCLASS(LLM01_Low_Light_Black);
    MRT_SwitchItemHintText = "Visible Laser";
};
