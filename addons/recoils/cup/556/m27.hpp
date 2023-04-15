// M27 Rifles, only 3 exist so no need for inheritance

// M27 - Medium Barrel
class CUP_arifle_HK_M27: CUP_arifle_HK416_Black {
    recoil = QCLASS(556_MediumBarrel);
};
// Foregrip
class CUP_arifle_HK_M27_VFG: CUP_arifle_HK_M27 {
    recoil = QCLASS(556_Foregrip_Medium);
};
// GL
class CUP_arifle_HK_M27_AG36: CUP_arifle_HK416_Black {
    recoil = QCLASS(556_GL_Medium);
};
