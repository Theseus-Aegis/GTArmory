#define COMPONENT rebalance_spec4gear
#define COMPONENT_BEAUTIFIED Rebalance Spec4Gear
#include "\x\tacgt\addons\main\script_mod.hpp"
#include "\x\tacgt\addons\main\script_macros.hpp"

#define MACRO_HITPROTECTION_CPC \
    class ItemInfo: VestItem { \
        containerClass = "Supply140"; \
        mass = 50; \
        class HitpointsProtectionInfo { \
            class Chest { \
                HitpointName = "HitChest"; \
                armor = 16; \
                passThrough = 0.38; \
            }; \
            class Diaphragm { \
                HitpointName = "HitDiaphragm"; \
                armor = 16; \
                passThrough = 0.38; \
            }; \
            class Abdomen { \
                hitpointName = "HitAbdomen"; \
                armor = 16; \
                passThrough = 0.38; \
            }; \
            class Body { \
                hitpointName = "HitBody"; \
                armor = 16; \
                passThrough = 0.38; \
            }; \
        }; \
    }

#define MACRO_HITPROTECTION_CPC_ALT \
    class ItemInfo: ItemInfo { \
        containerClass = "Supply140"; \
        mass = 50; \
        class HitpointsProtectionInfo { \
            class Chest { \
                HitpointName = "HitChest"; \
                armor = 16; \
                passThrough = 0.38; \
            }; \
            class Diaphragm { \
                HitpointName = "HitDiaphragm"; \
                armor = 16; \
                passThrough = 0.38; \
            }; \
            class Abdomen { \
                hitpointName = "HitAbdomen"; \
                armor = 16; \
                passThrough = 0.38; \
            }; \
            class Body { \
                hitpointName = "HitBody"; \
                armor = 16; \
                passThrough = 0.38; \
            }; \
        }; \
    }

#define MACRO_HITPROTECTION_LBT \
    class ItemInfo: VestItem { \
        containerClass = "Supply140"; \
        mass = 50; \
        class HitpointsProtectionInfo { \
            class Chest { \
                HitpointName = "HitChest"; \
                armor = 16; \
                passThrough = 0.35; \
            }; \
            class Diaphragm { \
                HitpointName = "HitDiaphragm"; \
                armor = 16; \
                passThrough = 0.35; \
            }; \
            class Abdomen { \
                hitpointName = "HitAbdomen"; \
                armor = 16; \
                passThrough = 0.35; \
            }; \
            class Body { \
                hitpointName = "HitBody"; \
                armor = 16; \
                passThrough = 0.35; \
            }; \
        }; \
    }

#define MACRO_HITPROTECTION_LBT_ALT \
    class ItemInfo: ItemInfo { \
        containerClass = "Supply140"; \
        mass = 50; \
        class HitpointsProtectionInfo { \
            class Chest { \
                HitpointName = "HitChest"; \
                armor = 16; \
                passThrough = 0.35; \
            }; \
            class Diaphragm { \
                HitpointName = "HitDiaphragm"; \
                armor = 16; \
                passThrough = 0.35; \
            }; \
            class Abdomen { \
                hitpointName = "HitAbdomen"; \
                armor = 16; \
                passThrough = 0.35; \
            }; \
            class Body { \
                hitpointName = "HitBody"; \
                armor = 16; \
                passThrough = 0.35; \
            }; \
        }; \
    }
