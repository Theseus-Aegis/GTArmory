#define MACRO_HITPROTECTION_LBT \
        class ItemInfo: VestItem { \
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
        };

class lbt_pouchless_coy: Vest_Camo_Base {
    MACRO_HITPROTECTION_LBT
};
class lbt_pouchless_od: lbt_pouchless_coy {};
class lbt_pouchless_aor1: lbt_pouchless_coy {};
class lbt_pouchless_aor2: lbt_pouchless_coy {};
class lbt_pouchless_mc: lbt_pouchless_coy {};
class lbt_operator_coy: lbt_pouchless_coy {};
class lbt_operator_od: lbt_pouchless_coy {};
class lbt_operator_aor1: lbt_pouchless_coy {};
class lbt_operator_aor2: lbt_pouchless_coy {};
class lbt_operator_mc: lbt_pouchless_coy {};
class lbt_weapons_coy: lbt_pouchless_coy {};
class lbt_weapons_od: lbt_weapons_coy {};
class lbt_weapons_aor1: lbt_weapons_coy {};
class lbt_weapons_aor2: lbt_weapons_coy {};
class lbt_weapons_mc: lbt_pouchless_coy {};
class lbt_medical_coy: lbt_pouchless_coy {};
class lbt_medical_od: lbt_medical_coy {};
class lbt_medical_aor1: lbt_medical_coy {};
class lbt_medical_aor2: lbt_medical_coy {};
class lbt_medical_mc: lbt_pouchless_coy {};
class lbt_comms_coy: lbt_pouchless_coy {};
class lbt_comms_od: lbt_comms_coy {};
class lbt_comms_aor1: lbt_comms_coy {};
class lbt_comms_aor2: lbt_comms_coy {};
class lbt_comms_mc: lbt_pouchless_coy {};
class lbt_light_od: lbt_pouchless_coy {};
class lbt_light_mc: lbt_pouchless_coy {};
class lbt_light_aor1: lbt_pouchless_coy {};
class lbt_light_aor2: lbt_pouchless_coy {};
class lbt_light_coy: lbt_pouchless_coy {};
class lbt_fast_coy: lbt_pouchless_coy {};

class lbt_tl_mc: Vest_Camo_Base {
    MACRO_HITPROTECTION_LBT
};
class lbt_tl_coy: lbt_tl_mc {};
class lbt_tl_od: lbt_tl_mc {};
class lbt_tl_aor1: lbt_tl_mc {};
class lbt_tl_aor2: lbt_tl_mc {};

