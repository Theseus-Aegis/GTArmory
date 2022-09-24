// All HK Rifles inherit - All versions bar GL have foregrips

// HK416 - Medium Barrel
class CUP_arifle_HK416_Black: CUP_arifle_HK416_145_Base {
    recoil = QCLASS(556_Foregrip_Medium);
};
// GL
class CUP_arifle_HK416_M203_Black: CUP_arifle_HK416_Black {
    recoil = QCLASS(556_GL_Medium);
};

// HK416 - Short Barrel
class CUP_arifle_HK416_CQB_Black: CUP_arifle_HK416_11_Base {
    recoil = QCLASS(556_Foregrip_Short);
};
// GL
class CUP_arifle_HK416_CQB_M203_Black: CUP_arifle_HK416_CQB_Black {
    recoil = QCLASS(556_GL_Short);
};

