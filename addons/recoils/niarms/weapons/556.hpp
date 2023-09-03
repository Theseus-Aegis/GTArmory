// ACR
class hlc_rifle_ACR_SBR_tan: hlc_acr556_base {
    recoil = QCLASS(556_Short);
};
class hlc_rifle_ACR_GL_SBR_black: hlc_rifle_ACR_SBR_black {
    recoil = QCLASS(556_Short_FG);
};
class hlc_rifle_ACR_carb_black: hlc_rifle_ACR_SBR_tan {
    recoil = QCLASS(556_Medium);
};
class hlc_rifle_ACR_GL_Carb_black: hlc_rifle_ACR_Carb_black {
    recoil = QCLASS(556_Medium_FG);
};
class hlc_rifle_ACR_MID_black: hlc_rifle_ACR_SBR_tan {
    recoil = QCLASS(556_Long);
};
class hlc_rifle_ACR_GL_mid_black: hlc_rifle_ACR_MID_black {
    recoil = QCLASS(556_Long_FG);
};
class hlc_rifle_ACR_Full_black: hlc_rifle_ACR_SBR_tan {
    recoil = QCLASS(556_Long);
};

// AUG
class hlc_rifle_aug: hlc_aug_base {
    recoil = QCLASS(556_Long_BP);
};
class hlc_rifle_auga3_GL: hlc_rifle_auga3 {
    recoil = QCLASS(556_Long_BP);
};

// M4 Variants
class hlc_rifle_RU556: hlc_ar15_base {
    recoil = QCLASS(556_Short);
};
class hlc_rifle_bcmjack: hlc_ar15_base {
    recoil = QCLASS(556_Medium);
};
class hlc_rifle_M4: hlc_ar15_base {
    recoil = QCLASS(556_Medium);
};
class hlc_rifle_m4m203: hlc_rifle_M4 {
    recoil = QCLASS(556_Medium_FG);
};
class hlc_rifle_Colt727: hlc_ar15_base {
    recoil = QCLASS(556_Medium);
};
class hlc_rifle_Colt727_GL: hlc_rifle_Colt727 {
    recoil = QCLASS(556_Medium_FG);
};
class hlc_rifle_mk18mod0: hlc_rifle_CQBR {
    recoil = QCLASS(556_Short);
};
class hlc_rifle_SAMR: hlc_ar15_base {
    recoil = QCLASS(556_Long);
};
class hlc_rifle_Bushmaster300: hlc_ar15_base {
    recoil = QCLASS(556_Medium);
};
class hlc_rifle_bcmblackjack: hlc_rifle_bcmjack {
    recoil = QCLASS(556_Medium);
};
class hlc_rifle_honeybadger: hlc_rifle_honeybase {
    recoil = QCLASS(556_Short);
};
class hlc_rifle_vendimus: hlc_rifle_Bushmaster300 {
    recoil = QCLASS(556_Long);
};

// SiG Rifles
class hlc_rifle_SG550: hlc_sg550_base {
    recoil = QCLASS(556_Long);
};
class hlc_rifle_SG550_GL: hlc_rifle_SG550 {
    recoil = QCLASS(556_Long_FG);
};
class hlc_rifle_SG550_TAC_GL: hlc_rifle_SG550 {
    recoil = QCLASS(556_Long_FG);
};
class hlc_rifle_SG550Sniper: hlc_sg550_base {
    recoil = QCLASS(556_Long);
};
class hlc_rifle_SG551SB: hlc_sg550_base {
    recoil = QCLASS(556_Medium);
};
class hlc_rifle_SG551SB_TAC_GL: hlc_rifle_SG551SB {
    recoil = QCLASS(556_Medium_FG);
};
class hlc_rifle_SG551LB: hlc_rifle_SG551SB {
    recoil = QCLASS(556_Long);
};
class hlc_rifle_SG551LB_TAC_GL: hlc_rifle_SG551LB {
    recoil = QCLASS(556_Long_FG);
};
class hlc_rifle_SG553SB: hlc_sg550_base {
    recoil = QCLASS(556_Short);
};

// M249
class hlc_m249_pip1: hlc_lmg_minimi_railed {
    recoil = QCLASS(556_Long_MG);
};
class hlc_m249_pip2: hlc_lmg_minimi_railed {
    recoil = QCLASS(556_Long_MG);
};
class hlc_m249_pip3: hlc_lmg_minimi_railed {
    recoil = QCLASS(556_Long_MG);
};
class hlc_m249_pip4: hlc_lmg_minimi_railed {
    recoil = QCLASS(556_Long_MG);
};
class hlc_m249_SQuantoon: hlc_m249_pip4 {
    recoil = QCLASS(556_Long_MG);
};
class hlc_lmg_M249E1: hlc_lmg_minimipara {
    recoil = QCLASS(556_Long_MG);
};
class hlc_lmg_M249E2: hlc_lmg_minimipara {
    recoil = QCLASS(556_Long_MG);
};
class hlc_lmg_m249para: hlc_lmg_minimipara {
    recoil = QCLASS(556_Long_MG);
};

// Mk46
class hlc_lmg_mk46: hlc_lmg_minimi_railed {
    recoil = QCLASS(556_Long_MG);
};
class hlc_lmg_mk46mod1: hlc_lmg_mk46 {
    recoil = QCLASS(556_Long_MG);
};

// Minimi
class hlc_lmg_minimipara: hlc_saw_base {
    recoil = QCLASS(556_Long_MG);
};
class hlc_lmg_minimi_railed: hlc_lmg_minimipara {
    recoil = QCLASS(556_Long_MG);
};
class hlc_lmg_minimipara_long: hlc_lmg_minimipara {
    recoil = QCLASS(556_Long_MG);
};
class hlc_lmg_minimipara_railed: hlc_lmg_minimipara {
    recoil = QCLASS(556_Long_MG);
};
class hlc_lmg_minimipara_long_railed: hlc_lmg_minimipara {
    recoil = QCLASS(556_Long_MG);
};
