// Inheritance doesn't work, AKs inherit from other caliber AKs and i hate it.

// AK 101 Rifles - Medium variants
class CUP_arifle_AK101: CUP_arifle_AK74M {
    recoil = QCLASS(556_MediumBarrel);
};
class CUP_arifle_AK101_top_rail: CUP_arifle_AK101 {
    recoil = QCLASS(556_MediumBarrel);
};
// Foregrip
class CUP_arifle_AK101_railed: CUP_arifle_AK101 {
    recoil = QCLASS(556_Foregrip_Medium);
};
// GL variants that dont inherit
class CUP_arifle_AK101_GL: CUP_arifle_AK74M_GL {
    recoil = QCLASS(556_GL_Medium);
};
class CUP_arifle_AK101_GL_railed: CUP_arifle_AK101_GL {
    recoil = QCLASS(556_GL_Medium);
};
class CUP_arifle_AK101_GL_top_rail: CUP_arifle_AK101_GL {
    recoil = QCLASS(556_GL_Medium);
};

// AK 102 Rifles - Short
class CUP_arifle_AK102: CUP_arifle_AK_Base {
    recoil = QCLASS(556_ShortBarrel);
};
class CUP_arifle_AK102_top_rail: CUP_arifle_AK102 {
    recoil = QCLASS(556_ShortBarrel);
};
// Foregrip
class CUP_arifle_AK102_railed: CUP_arifle_AK102 {
    recoil = QCLASS(556_Foregrip_Medium);
};

// AK 108 Rifles - Medium
class CUP_arifle_AK108: CUP_arifle_AK107 {
    recoil = QCLASS(556_MediumBarrel);
};
class CUP_arifle_AK108_top_rail: CUP_arifle_AK108 {
    recoil = QCLASS(556_MediumBarrel);
};
// Foregrip
class CUP_arifle_AK108_railed: CUP_arifle_AK108 {
    recoil = QCLASS(556_Foregrip_Medium);
};
// GL
class CUP_arifle_AK108_GL: CUP_arifle_AK107_GL {
    recoil = QCLASS(556_GL_Medium);
};
class CUP_arifle_AK108_GL_railed: CUP_arifle_AK108_GL {
    recoil = QCLASS(556_GL_Medium);
};
class CUP_arifle_AK108_GL_top_rail: CUP_arifle_AK108_GL {
    recoil = QCLASS(556_GL_Medium);
};
