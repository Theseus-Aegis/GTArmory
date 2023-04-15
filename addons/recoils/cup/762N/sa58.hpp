// SA58 Rifles inherit

// SA58 - Long Barrel
class CUP_arifle_DSA_SA58: CUP_arifle_FNFAL {
    recoil = QCLASS(762N_LongBarrel);
};

// SA58 OSW - Short Barrel
class CUP_arifle_DSA_SA58_OSW: CUP_arifle_DSA_SA58 {
    recoil = QCLASS(762N_ShortBarrel);
};
// Foregrip
class CUP_arifle_DSA_SA58_OSW_VFG: CUP_arifle_DSA_SA58_OSW {
    recoil = QCLASS(762N_Foregrip_Short);
};
// GL
class CUP_arifle_DSA_SA58_OSW_M203: CUP_arifle_DSA_SA58_OSW {
    recoil = QCLASS(762N_GL_Short);
};
