// HK417 Rifles inherit

// HK417 - Long Barrel
class CUP_arifle_HK417_20: CUP_arifle_HK417_Base {
    recoil = QCLASS(762N_LongBarrel);
};

// HK417 CQC - Short Barrel
class CUP_arifle_HK417_12: CUP_arifle_HK417_20 {
    recoil = QCLASS(762N_Foregrip_Short);
};
// GL
class CUP_arifle_HK417_12_M203: CUP_arifle_HK417_12 {
    recoil = QCLASS(762N_GL_Short);
};
class CUP_arifle_HK417_12_AG36: CUP_arifle_HK417_12 {
    recoil = QCLASS(762N_GL_Short);
};
