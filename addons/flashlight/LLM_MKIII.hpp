// LLM MK III (Black)
class CLASS(LLM_Laser_Black): cup_acc_llm_black {
    displayName = "LLM MKIII (GT Edition)";
    MACRO_PRIMARY;

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {
            MACRO_IR_POINTER;
        };
        class Flashlight {};
    };
    MRT_SwitchItemNextClass = QCLASS(LLM_Light_Black);
    MRT_SwitchItemPrevClass = QCLASS(LLM_Vis_Laser_Black);
    MRT_SwitchItemHintText = "IR Laser";
};

class CLASS(LLM_Light_Black): CLASS(LLM_Laser_Black) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_FLASHLIGHT;
        };
    };
    MRT_SwitchItemNextClass = QCLASS(LLM_Low_Light_Black);
    MRT_SwitchItemPrevClass = QCLASS(LLM_Laser_Black);
    MRT_SwitchItemHintText = "Flashlight Blue";
};

class CLASS(LLM_Low_Light_Black): CLASS(LLM_Laser_Black) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_RED_FLASHLIGHT;
        };
    };
    MRT_SwitchItemNextClass = QCLASS(LLM_Vis_Laser_Black);
    MRT_SwitchItemPrevClass = QCLASS(LLM_Light_Black);
    MRT_SwitchItemHintText = "Flashlight Red";
};

class CLASS(LLM_Vis_Laser_Black): CLASS(LLM_Laser_Black) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        mass = 4;
        class Pointer {
            MACRO_VISIBLE_POINTER;
        };
        class Flashlight {};
    };
    MRT_SwitchItemNextClass = QCLASS(LLM_Laser_Black);
    MRT_SwitchItemPrevClass = QCLASS(LLM_Low_Light_Black);
    MRT_SwitchItemHintText = "Visible Laser";
};
