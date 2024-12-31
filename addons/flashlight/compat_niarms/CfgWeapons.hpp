class CfgWeapons {
    class InventoryFlashLightItem_Base_F;
    class hlc_acc_TLR1;
    class CLASS(Light_TLR1): hlc_acc_TLR1 {
        displayName = "Streamlight TLR-1 (GT Edition)";
        MACRO_PRIMARY;

        class ItemInfo: InventoryFlashLightItem_Base_F {
            mass = 2;
            class Pointer {};
            class Flashlight {
                MACRO_FLASHLIGHT_NIARMS;
            };
        };
    };
};
