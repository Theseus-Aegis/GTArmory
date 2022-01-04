class cup_acc_flashlight;
class CLASS(Surefire_Flashlight_Black): cup_acc_flashlight {
    displayName = "Surefire Black (GT Edition)";
    MACRO_MULTI_1

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Flashlight {
            MACRO_HI_FLASHLIGHT_SETTINGS
        };
    };
    MRT_SwitchItemNextClass = QCLASS(Surefire_Low_Flashlight_Black);
    MRT_SwitchItemPrevClass = QCLASS(Surefire_Low_Flashlight_Black);
    MRT_SwitchItemHintText = "Flashlight Blue";
};

class CLASS(Surefire_Low_Flashlight_Black): cup_acc_flashlight {
    displayName = "Surefire Black (GT Edition)";
    MACRO_MULTI_2

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Flashlight {
            MACRO_LOW_FLASHLIGHT_SETTINGS
        };
    };
    MRT_SwitchItemNextClass = QCLASS(Surefire_Flashlight_Black);
    MRT_SwitchItemPrevClass = QCLASS(Surefire_Flashlight_Black);
    MRT_SwitchItemHintText = "Flashlight Red";
};

class CUP_acc_Flashlight_wdl;
class CLASS(Surefire_Flashlight_OD): CUP_acc_Flashlight_wdl {
    displayName = "Surefire OD (GT Edition)";
    MACRO_MULTI_1

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Flashlight {
            MACRO_HI_FLASHLIGHT_SETTINGS
        };
    };
    MRT_SwitchItemNextClass = QCLASS(Surefire_Low_Flashlight_OD);
    MRT_SwitchItemPrevClass = QCLASS(Surefire_Low_Flashlight_OD);
    MRT_SwitchItemHintText = "Flashlight Blue";
};

class CLASS(Surefire_Low_Flashlight_OD): CUP_acc_Flashlight_wdl {
    displayName = "Surefire OD (GT Edition)";
    MACRO_MULTI_2

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Flashlight {
            MACRO_LOW_FLASHLIGHT_SETTINGS
        };
    };
    MRT_SwitchItemNextClass = QCLASS(Surefire_Flashlight_OD);
    MRT_SwitchItemPrevClass = QCLASS(Surefire_Flashlight_OD);
    MRT_SwitchItemHintText = "Flashlight Red";
};

class CUP_acc_Flashlight_desert;
class CLASS(Surefire_Flashlight_Tan): CUP_acc_Flashlight_desert {
    displayName = "Surefire Tan (GT Edition)";
    MACRO_MULTI_1

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Flashlight {
            MACRO_HI_FLASHLIGHT_SETTINGS
        };
    };
    MRT_SwitchItemNextClass = QCLASS(Surefire_Low_Flashlight_Tan);
    MRT_SwitchItemPrevClass = QCLASS(Surefire_Low_Flashlight_Tan);
    MRT_SwitchItemHintText = "Flashlight Blue";
};

class CLASS(Surefire_Low_Flashlight_Tan): CUP_acc_Flashlight_desert {
    displayName = "Surefire Tan (GT Edition)";
    MACRO_MULTI_2

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Flashlight {
            MACRO_LOW_FLASHLIGHT_SETTINGS
        };
    };
    MRT_SwitchItemNextClass = QCLASS(Surefire_Flashlight_Tan);
    MRT_SwitchItemPrevClass = QCLASS(Surefire_Flashlight_Tan);
    MRT_SwitchItemHintText = "Flashlight Red";
};
