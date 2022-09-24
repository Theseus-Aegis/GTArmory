// M16 Rifles inherit

// M16A1 - Long Barrel
class CUP_arifle_M16A1: CUP_arifle_XM16E1 {
    recoil = QCLASS(556_LongBarrel);
};
// GL
class CUP_arifle_M16A1GL: CUP_arifle_XM16E1 {
    recoil = QCLASS(556_GL_Long);
};

// M16A1E1 - Long Barrel
class CUP_arifle_M16A1E1: CUP_arifle_XM16E1 {
    recoil = QCLASS(556_LongBarrel);
};
// GL
class CUP_arifle_M16A1E1GL: CUP_arifle_M16A1GL {
    recoil = QCLASS(556_GL_Long);
};

// M16A2 - Long Barrel
class CUP_arifle_M16A2: CUP_arifle_M16_Base {
    recoil = QCLASS(556_LongBarrel);
};

// M16A2 Carbine - Medium Barrel
class CUP_arifle_Colt727: CUP_arifle_M16_Base {
    recoil = QCLASS(556_MediumBarrel);
};
// GL
class CUP_arifle_M16A2_GL: CUP_arifle_M16_Base {
    recoil = QCLASS(556_GL_Medium);
};

// M16A4 - Long Barrel
class CUP_arifle_M16A4_Base: CUP_arifle_M16_Base {
    recoil = QCLASS(556_LongBarrel);
};
// Foregrip
class CUP_arifle_M16A4_Grip: CUP_arifle_M16A4_Base {
    recoil = QCLASS(556_Foregrip_Long);
};
// GL
class CUP_arifle_M16A4_GL: CUP_arifle_M16_Base {
    recoil = QCLASS(556_GL_Long);
};
