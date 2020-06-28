#define COMPONENT flashlight
#define COMPONENT_BEAUTIFIED Flashlight
#include "\x\tacgt\addons\main\script_mod.hpp"
#include "\x\tacgt\addons\main\script_macros.hpp"

#define FLASHLIGHT(CLASSNAME, PARENT, STRING, DESC) \
    class CLASS(CLASSNAME): PARENT { \
        displayName = CSTRING(STRING); \
        descriptionShort = CSTRING(DESC); \
        author = "TyroneMF"; \
        scope = 2; \
        scopeArsenal = 2; \
        displayName = CSTRING(STRING); \
        class ItemInfo: InventoryFlashLightItem_Base_F { \
            mass = 4; \
            class Flashlight { \
                color[] = {185, 190, 199}; \
                ambient[] = {6, 9, 9}; \
                intensity = 100; \
                size = 1; \
                innerAngle = 18; \
                outerAngle = 150; \
                coneFadeCoef = 8; \
                position = "flash dir"; \
                direction = "flash"; \
                useFlare = 1; \
                flareSize = 1.5; \
                flareMaxDistance = 300; \
                dayLight = 0; \
                class Attenuation { \
                    start = 0; \
                    constant = 1; \
                    linear = 1; \
                    quadratic = 1; \
                    hardLimitStart = 200; \
                    hardLimitEnd = 300; \
                }; \
                scale [] = {0}; \
            }; \
        }; \
    } \

#define SWITCHIR(CLASSNAME, PARENT, STRING, DESC, SWITCH) \
    class CLASS(CLASSNAME): PARENT { \
        displayName = CSTRING(STRING); \
        descriptionShort = CSTRING(DESC); \
        author = "TyroneMF"; \
        scope = 2; \
        scopeArsenal = 2; \
        displayName = CSTRING(STRING); \
        class ItemInfo: InventoryFlashLightItem_Base_F { \
            mass = 4; \
            class Pointer { \
                RMBhint="Laser Pointer"; \
                irLaserPos="laser pos"; \
                irLaserEnd="laser dir"; \
                irDistance=5; \
            }; \
            class Flashlight { \
                }; \
            }; \
        MRT_SwitchItemNextClass = QCLASS(SWITCH); \
        MRT_SwitchItemPrevClass = QCLASS(SWITCH); \
    } \

#define SWITCHLIGHT(CLASSNAME, PARENT, STRING, DESC, SWITCH) \
    class CLASS(CLASSNAME): PARENT { \
        displayName = CSTRING(STRING); \
        descriptionShort = CSTRING(DESC); \
        author = "TyroneMF"; \
        scope = 1; \
        scopeArsenal = 1; \
        displayName = CSTRING(STRING); \
        class ItemInfo: InventoryFlashLightItem_Base_F { \
            mass = 4; \
            class Pointer {}; \
            class Flashlight { \
                color[] = {185, 190, 199}; \
                ambient[] = {6, 9, 9}; \
                intensity = 100; \
                size = 1; \
                innerAngle = 18; \
                outerAngle = 150; \
                coneFadeCoef = 8; \
                position = "flash dir"; \
                direction = "flash"; \
                useFlare = 1; \
                flareSize = 1.5; \
                flareMaxDistance = 300; \
                dayLight = 0; \
                class Attenuation { \
                    start = 0; \
                    constant = 1; \
                    linear = 1; \
                    quadratic = 1; \
                    hardLimitStart = 200; \
                    hardLimitEnd = 300; \
                }; \
                scale [] = {0}; \
            }; \
        }; \
        MRT_SwitchItemNextClass = QCLASS(SWITCH); \
        MRT_SwitchItemPrevClass = QCLASS(SWITCH); \
    } \

#define SWITCHLASER(CLASSNAME, PARENT, STRING, DESC, SWITCH) \
    class CLASS(CLASSNAME): PARENT { \
        displayName = CSTRING(STRING); \
        descriptionShort = CSTRING(DESC); \
        author = "TyroneMF"; \
        scope = 1; \
        scopeArsenal = 1; \
        displayName = CSTRING(STRING); \
        class ItemInfo: InventoryFlashLightItem_Base_F { \
            mass = 4; \
            class Pointer {}; \
            class Flashlight { \
                color[] = {0, 0, 0}; \
                ambient[] = {0, 0, 0}; \
                intensity = 0; \
                size = 0; \
                innerAngle = 0; \
                outerAngle = 0; \
                coneFadeCoef = 0; \
                position = "flash dir"; \
                direction = "flash"; \
                useFlare = 0; \
                flareSize = 0; \
                flareMaxDistance = 0; \
                dayLight = 0; \
                class Attenuation { \
                    start = 0; \
                    constant = 0; \
                    linear = 0; \
                    quadratic = 0; \
                    hardLimitStart = 0; \
                    hardLimitEnd = 0; \
                }; \
                scale [] = {0}; \
            }; \
        }; \
        MRT_SwitchItemNextClass = QCLASS(SWITCH); \
        MRT_SwitchItemPrevClass = QCLASS(SWITCH); \
    } \
