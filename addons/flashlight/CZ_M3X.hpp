// CZ M3X (No low flashlight option, Handgun attachment)
class CLASS(CZ_M3X_Laser): CUP_acc_CZ_M3X {
    displayName = "CZ M3X Laser/Light (GT Edition)";
    MACRO_PRIMARY;

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {
            MACRO_IR_POINTER;
        };
        class Flashlight {};
    };
    MRT_SwitchItemNextClass = QCLASS(CZ_M3X_Light);
    MRT_SwitchItemPrevClass = QCLASS(CZ_M3X_Vis_Laser);
    MRT_SwitchItemHintText = "IR Laser";
};

class CLASS(CZ_M3X_Light): CLASS(CZ_M3X_Laser) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_FLASHLIGHT;
        };
    };
    MRT_SwitchItemNextClass = QCLASS(CZ_M3X_Vis_Laser);
    MRT_SwitchItemPrevClass = QCLASS(CZ_M3X_Laser);
    MRT_SwitchItemHintText = "Flashlight Blue";
};

class CLASS(CZ_M3X_Vis_Laser): CLASS(CZ_M3X_Laser) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        mass = 4;
        class Pointer {
            MACRO_VISIBLE_POINTER;
        };
        class Flashlight {};
    };
    MRT_SwitchItemNextClass = QCLASS(CZ_M3X_Laser);
    MRT_SwitchItemPrevClass = QCLASS(CZ_M3X_Light);
    MRT_SwitchItemHintText = "Visible Laser";
};
