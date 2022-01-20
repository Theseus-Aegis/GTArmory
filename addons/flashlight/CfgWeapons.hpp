class CfgWeapons {
    class InventoryFlashLightItem_Base_F;

    class acc_flashlight;
    class CLASS(UTG_Flashlight): acc_flashlight {
        displayName = "UTG Defender 126 (GT Edition)";
        MACRO_MULTI_1

        class ItemInfo: InventoryFlashLightItem_Base_F {
            mass = 4;
            class Flashlight {
                MACRO_HI_FLASHLIGHT_SETTINGS
            };
        };
        MRT_SwitchItemNextClass = QCLASS(UTG_Low_Flashlight);
        MRT_SwitchItemPrevClass = QCLASS(UTG_Low_Flashlight);
    };

    class CLASS(UTG_Low_Flashlight): acc_flashlight {
        displayName = "UTG Defender 126 (GT Edition)";
        MACRO_MULTI_2

        class ItemInfo: InventoryFlashLightItem_Base_F {
            mass = 4;
            class Flashlight {
                MACRO_LOW_FLASHLIGHT_SETTINGS
            };
        };
        MRT_SwitchItemNextClass = QCLASS(UTG_Flashlight);
        MRT_SwitchItemPrevClass = QCLASS(UTG_Flashlight);
    };

    #include "Surefire_Flashlights.hpp"

    // Multi-Function Laser/Lights - Top
    #include "ANPEQ_Top_Black.hpp"
    #include "ANPEQ_Top_Tan.hpp"
    #include "ANPEQ_Top_OD.hpp"

    // Multi-Function Laser/Lights - Side
    #include "ANPEQ_Black.hpp"
    #include "ANPEQ_Tan.hpp"
    #include "ANPEQ_OD.hpp"
    #include "LLM.hpp"

    // Pistol based Laser/Lights
    #include "Handgun.hpp"
};
