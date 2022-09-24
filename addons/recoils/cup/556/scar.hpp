// SCAR-L Rifles - All rifles inherit

// SCAR-L - Long Barrel
class CUP_arifle_Mk16_SV: CUP_arifle_SCAR_L_Base {
    recoil = QCLASS(556_LongBarrel);
};

// SCAR-L - Medium Barrel
class CUP_arifle_Mk16_STD: CUP_arifle_SCAR_L_Base {
    recoil = QCLASS(556_MediumBarrel);
};
// Foregrip
class CUP_arifle_Mk16_STD_FG: CUP_arifle_Mk16_STD {
    recoil = QCLASS(556_Foregrip_Medium);
};
class CUP_arifle_Mk16_STD_SFG: CUP_arifle_Mk16_STD {
    recoil = QCLASS(556_Foregrip_Medium);
};
class CUP_arifle_Mk16_STD_AFG: CUP_arifle_Mk16_STD_FG {
    recoil = QCLASS(556_Foregrip_Medium);
};
// GL
class CUP_arifle_Mk16_STD_EGLM: CUP_arifle_Mk16_STD {
    recoil = QCLASS(556_GL_Medium);
};

// SCAR-L - Short Barrel
class CUP_arifle_Mk16_CQC: CUP_arifle_SCAR_L_Base {
    recoil = QCLASS(556_ShortBarrel);
};
// Foregrip
class CUP_arifle_Mk16_CQC_FG: CUP_arifle_Mk16_CQC {
    recoil = QCLASS(556_Foregrip_Short);
};
class CUP_arifle_Mk16_CQC_SFG: CUP_arifle_Mk16_CQC {
    recoil = QCLASS(556_Foregrip_Short);
};
// GL
class CUP_arifle_Mk16_CQC_EGLM: CUP_arifle_Mk16_CQC {
    recoil = QCLASS(556_GL_Short);
};
