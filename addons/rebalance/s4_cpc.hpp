#define MACRO_HITPROTECTION_CPC \
        class ItemInfo: VestItem { \
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
        };

class cpc_Fast_coy: Vest_Camo_Base {
    MACRO_HITPROTECTION_CPC
};
class cpc_Fast_rngr: cpc_Fast_coy {};
class cpc_Fast_mc: cpc_Fast_coy {};

class cpc_Fastbelt_coy: Vest_Camo_Base {
    MACRO_HITPROTECTION_CPC
};
class cpc_Fastbelt_rngr: cpc_Fastbelt_coy {};
class cpc_Fastbelt_mc: cpc_Fastbelt_coy {};

class cpc_weaponsbelt_coy: Vest_Camo_Base {
    MACRO_HITPROTECTION_CPC
};
class cpc_weaponsbelt_mc: cpc_weaponsbelt_coy {};
class cpc_weaponsbelt_rngr: cpc_weaponsbelt_coy {};

class cpc_light_coy: Vest_Camo_Base {
    MACRO_HITPROTECTION_CPC
};
class cpc_light_rngr: cpc_light_coy {};
class cpc_light_mc: cpc_light_coy {};

class cpc_lightbelt_coy: Vest_Camo_Base {
    MACRO_HITPROTECTION_CPC
};
class cpc_lightbelt_rngr: cpc_lightbelt_coy {};
class cpc_lightbelt_mc: cpc_lightbelt_coy {};

class cpc_weapons_coy: Vest_Camo_Base {
    MACRO_HITPROTECTION_CPC
};
class cpc_weapons_rngr: cpc_weapons_coy {};
class cpc_weapons_mc: cpc_weapons_coy {};

class cpc_communications_coy: Vest_Camo_Base {
    MACRO_HITPROTECTION_CPC
};
class cpc_communications_mc: cpc_communications_coy {};
class cpc_communications_rngr: cpc_communications_coy {};

class cpc_communicationsbelt_coy: Vest_Camo_Base {
    MACRO_HITPROTECTION_CPC
};
class cpc_communicationsbelt_mc: cpc_communicationsbelt_coy {};
class cpc_communicationsbelt_rngr: cpc_communicationsbelt_coy {};

class cpc_tl_coy: Vest_Camo_Base {
    MACRO_HITPROTECTION_CPC
};
class cpc_tl_mc: cpc_tl_coy {};
class cpc_tl_rngr: cpc_tl_coy {};

class cpc_tlbelt_coy: Vest_Camo_Base {
    MACRO_HITPROTECTION_CPC
};
class cpc_tlbelt_rngr: cpc_tlbelt_coy {};
class cpc_tlbelt_mc: cpc_tlbelt_coy {};

class cpc_medical_coy: Vest_Camo_Base {
    MACRO_HITPROTECTION_CPC
};
class cpc_medical_mc: cpc_tl_coy {};
class cpc_medical_rngr: cpc_tl_coy {};

class cpc_medicalbelt_coy: Vest_Camo_Base {
    MACRO_HITPROTECTION_CPC
};
class cpc_medicalbelt_rngr: cpc_medicalbelt_coy {};
class cpc_medicalbelt_mc: cpc_medicalbelt_coy {};
