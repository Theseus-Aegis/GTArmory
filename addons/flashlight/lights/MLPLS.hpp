// MLPLS (No flashlight option, Handgun attachment)
class CLASS(MLPLS_Laser): CUP_acc_MLPLS_Laser {
    displayName = "Pistol IR/Vis Module (GT Edition)";
    descriptionShort = "Laser GT Edition";
    scope = 2;
    scopeArsenal = 2;

    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer {
            MACRO_IR_POINTER;
        };
        class Flashlight {};
    };
    MRT_SwitchItemNextClass = QCLASS(MLPLS_Vis_Laser);
    MRT_SwitchItemPrevClass = QCLASS(MLPLS_Vis_Laser);
    MRT_SwitchItemHintText = "IR Laser";
};

class CLASS(MLPLS_Vis_Laser): CLASS(MLPLS_Laser) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        mass = 4;
        class Pointer {
            MACRO_VISIBLE_POINTER;
        };
        class Flashlight {};
    };
    MRT_SwitchItemNextClass = QCLASS(MLPLS_Laser);
    MRT_SwitchItemPrevClass = QCLASS(MLPLS_Laser);
    MRT_SwitchItemHintText = "Visible Laser";
};
