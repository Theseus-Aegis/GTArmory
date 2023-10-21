#define COMPONENT rebalance_milgp
#define COMPONENT_BEAUTIFIED Rebalance MILGP
#include "\x\tacgt\addons\main\script_mod.hpp"
#include "\x\tacgt\addons\main\script_macros.hpp"

#define MACRO_HITPROTECTION_JPC \
    class ItemInfo: VestItem { \
        class HitpointsProtectionInfo { \
            class Chest { \
                HitpointName = "HitChest"; \
                armor = 15; \
                passThrough = 0.45; \
            }; \
            class Diaphragm { \
                HitpointName = "HitDiaphragm"; \
                armor = 15; \
                passThrough = 0.45; \
            }; \
            class Abdomen { \
                hitpointName = "HitAbdomen"; \
                armor = 15; \
                passThrough = 0.45; \
            }; \
            class Body { \
                hitpointName = "HitBody"; \
                armor = 15; \
                passThrough = 0.45; \
            }; \
        }; \
    }

#define MACRO_HITPROTECTION_MARCIRAS \
        class ItemInfo: VestItem { \
            class HitpointsProtectionInfo { \
                class Chest { \
                    HitpointName = "HitChest"; \
                    armor = 18; \
                    passThrough = 0.3; \
                }; \
                class Diaphragm { \
                    HitpointName = "HitDiaphragm"; \
                    armor = 18; \
                    passThrough = 0.3; \
                }; \
                class Abdomen { \
                    hitpointName = "HitAbdomen"; \
                    armor = 18; \
                    passThrough = 0.3; \
                }; \
                class Body { \
                    hitpointName = "HitBody"; \
                    armor = 18; \
                    passThrough = 0.3; \
                }; \
            }; \
        }

#define MACRO_HITPROTECTION_MMAC \
        class ItemInfo: VestItem { \
            class HitpointsProtectionInfo { \
                class Chest { \
                    HitpointName = "HitChest"; \
                    armor = 16; \
                    passThrough = 0.4; \
                }; \
                class Diaphragm { \
                    HitpointName = "HitDiaphragm"; \
                    armor = 16; \
                    passThrough = 0.4; \
                }; \
                class Abdomen { \
                    hitpointName = "HitAbdomen"; \
                    armor = 16; \
                    passThrough = 0.4; \
                }; \
                class Body { \
                    hitpointName = "HitBody"; \
                    armor = 16; \
                    passThrough = 0.4; \
                }; \
            }; \
        }
