// RPK Rifles inherit (All RPKs are done here for inheritance purposes)

// RPK - Long Barrel
class CUP_arifle_RPK74: CUP_arifle_AK_Base {
    recoil = QCLASS(762R_LongBarrel);
};

// RPK74M - Long Barrel
class CUP_arifle_RPK74M: CUP_arifle_RPK74 {
    recoil = QCLASS(762R_LongBarrel);
};

// RPK-74 (5.45x39) - Long Barrel
class CUP_arifle_RPK74_45: CUP_arifle_RPK74 {
    recoil = QCLASS(545_LongBarrel);
};
