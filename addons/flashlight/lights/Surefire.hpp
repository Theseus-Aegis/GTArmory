// Surefire Flashlights (No Lasers)
class CLASS(Surefire_Flashlight_Black): cup_acc_flashlight {
    displayName = "Surefire Black (GT Edition)";
    descriptionShort = "Light GT Edition";
    scope = 2;
    scopeArsenal = 2;

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_FLASHLIGHT;
        };
    };
    MRT_SwitchItemNextClass = QCLASS(Surefire_Low_Flashlight_Black);
    MRT_SwitchItemPrevClass = QCLASS(Surefire_Low_Flashlight_Black);
    MRT_SwitchItemHintText = "Visible White";
};

class CLASS(Surefire_Low_Flashlight_Black): CLASS(Surefire_Flashlight_Black) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_RED_FLASHLIGHT;
        };
    };
    MRT_SwitchItemNextClass = QCLASS(Surefire_Flashlight_Black);
    MRT_SwitchItemPrevClass = QCLASS(Surefire_Flashlight_Black);
    MRT_SwitchItemHintText = "Visible Red";
};

// Surefire OD
class CLASS(Surefire_Flashlight_OD): CUP_acc_Flashlight_wdl {
    displayName = "Surefire OD (GT Edition)";
    descriptionShort = "Light GT Edition";
    scope = 2;
    scopeArsenal = 2;

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_FLASHLIGHT;
        };
    };
    MRT_SwitchItemNextClass = QCLASS(Surefire_Low_Flashlight_OD);
    MRT_SwitchItemPrevClass = QCLASS(Surefire_Low_Flashlight_OD);
    MRT_SwitchItemHintText = "Visible White";
};

class CLASS(Surefire_Low_Flashlight_OD): CLASS(Surefire_Flashlight_OD) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_RED_FLASHLIGHT;
        };
    };
    MRT_SwitchItemNextClass = QCLASS(Surefire_Flashlight_OD);
    MRT_SwitchItemPrevClass = QCLASS(Surefire_Flashlight_OD);
    MRT_SwitchItemHintText = "Visible Red";
};

// Surefire Tan
class CLASS(Surefire_Flashlight_Tan): CUP_acc_Flashlight_desert {
    displayName = "Surefire Tan (GT Edition)";
    descriptionShort = "Light GT Edition";
    scope = 2;
    scopeArsenal = 2;

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_FLASHLIGHT;
        };
    };
    MRT_SwitchItemNextClass = QCLASS(Surefire_Low_Flashlight_Tan);
    MRT_SwitchItemPrevClass = QCLASS(Surefire_Low_Flashlight_Tan);
    MRT_SwitchItemHintText = "Visible White";
};

class CLASS(Surefire_Low_Flashlight_Tan): CLASS(Surefire_Flashlight_Tan) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_RED_FLASHLIGHT;
        };
    };
    MRT_SwitchItemNextClass = QCLASS(Surefire_Flashlight_Tan);
    MRT_SwitchItemPrevClass = QCLASS(Surefire_Flashlight_Tan);
    MRT_SwitchItemHintText = "Visible Red";
};

// XC-1-C Pistol Flashlight
class CLASS(Surefire_XC1_Flashlight): CUP_acc_SF_XC1 {
    displayName = "Surefire XC1-C (GT Edition)";
    descriptionShort = "Light GT Edition";
    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Flashlight {
            MACRO_FLASHLIGHT;
        };
    };
};
