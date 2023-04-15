// G36 Rifles Inherit

// G36 Variants - Long Barrel
class CUP_arifle_G36A: CUP_arifle_G36_Base_CarryhandleOptics {
    recoil = QCLASS(556_LongBarrel);
};
class CUP_arifle_G36A_RIS: CUP_arifle_G36_Base {
    recoil = QCLASS(556_LongBarrel);
};
// GL
class CUP_arifle_AG36: CUP_arifle_G36A {
    recoil = QCLASS(556_GL_Long);
};
class CUP_arifle_G36A_AG36_RIS: CUP_arifle_G36A_RIS {
    recoil = QCLASS(556_GL_Long);
};
// Foregrip
class CUP_arifle_G36A_RIS: CUP_arifle_G36_Base {
    recoil = QCLASS(556_Foregrip_Long);
};

// G36A3 Variants - Long Barrel
class CUP_arifle_G36A3: CUP_arifle_G36A_RIS {
    recoil = QCLASS(556_LongBarrel);
};
// Foregrip
class CUP_arifle_G36A3_grip: CUP_arifle_G36A3 {
    recoil = QCLASS(556_Foregrip_Long);
};
// GL
class CUP_arifle_G36A3_AG36: CUP_arifle_G36A3 {
    recoil = QCLASS(556_GL_Long);
};

// G36C Variants - Short Barrel
class CUP_arifle_G36C: CUP_arifle_G36_Base {
    recoil = QCLASS(556_ShortBarrel);
};
// Foregrip
class CUP_arifle_G36C_VFG: CUP_arifle_G36C {
    recoil = QCLASS(556_Foregrip_Short);
};

// G36CA3 Variants - Short Barrel
class CUP_arifle_G36CA3: CUP_arifle_G36C {
    recoil = QCLASS(556_ShortBarrel);
};
// Foregrip
class CUP_arifle_G36CA3_grip: CUP_arifle_G36CA3 {
    recoil = QCLASS(556_Foregrip_Short);
};

// G36E - Long Barrel
class CUP_arifle_G36E: CUP_arifle_G36_Base_CarryhandleOptics {
    recoil = QCLASS(556_LongBarrel);
};

// G36K - Short Barrel
class CUP_arifle_G36K: CUP_arifle_G36_Base_CarryhandleOptics {
    recoil = QCLASS(556_ShortBarrel);
};
class CUP_arifle_G36K_RIS: CUP_arifle_G36_Base {
    recoil = QCLASS(556_ShortBarrel);
};
class CUP_arifle_G36K_KSK: CUP_arifle_G36K_RIS {
    recoil = QCLASS(556_ShortBarrel);
};
// Foregrip
class CUP_arifle_G36K_VFG: CUP_arifle_G36K {
    recoil = QCLASS(556_Foregrip_Short);
};
class CUP_arifle_G36K_KSK_VFG: CUP_arifle_G36K_KSK {
    recoil = QCLASS(556_Foregrip_Short);
};
// GL
class CUP_arifle_G36K_AG36: CUP_arifle_G36K {
    recoil = QCLASS(556_GL_Short);
};

// G36KA3 - Short Barrel
class CUP_arifle_G36KA3: CUP_arifle_G36K_RIS {
    recoil = QCLASS(556_ShortBarrel);
};
// Foregrip
class CUP_arifle_G36KA3_grip: CUP_arifle_G36KA3 {
    recoil = QCLASS(556_Foregrip_Short);
};
