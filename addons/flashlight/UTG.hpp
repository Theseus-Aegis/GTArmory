// UTG Defender (No Laser)
class CLASS(UTG_Flashlight): acc_flashlight {
    displayName = "UTG Defender 126 (GT Edition)";
    descriptionShort = "Light GT Edition";
    scope = 2;
    scopeArsenal = 2;

    class ItemInfo: ItemInfo {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_FLASHLIGHT;
        };
    };
    MRT_SwitchItemNextClass = QCLASS(UTG_Low_Flashlight);
    MRT_SwitchItemPrevClass = QCLASS(UTG_Low_Flashlight);
    MRT_SwitchItemHintText = "Flashlight Blue";
};

class CLASS(UTG_Low_Flashlight): CLASS(UTG_Flashlight) {
    MACRO_SECONDARY;

    class ItemInfo: ItemInfo {
        mass = 4;
        class Pointer {};
        class Flashlight {
            MACRO_RED_FLASHLIGHT;
        };
    };
    MRT_SwitchItemNextClass = QCLASS(UTG_Flashlight);
    MRT_SwitchItemPrevClass = QCLASS(UTG_Flashlight);
    MRT_SwitchItemHintText = "Flashlight Red";
};
