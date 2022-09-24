// AK-15 Rifles inherit

// AK-15 - Medium Barrel
class CUP_arifle_AK15_Base: CUP_arifle_AK12_Base {
    recoil = QCLASS(762R_MediumBarrel);
};

// Foregrip
class CUP_arifle_AK15_AFG_Base: CUP_arifle_AK15_Base {
    recoil = QCLASS(762R_Foregrip_Medium);
};
class CUP_arifle_AK15_VG_Base: CUP_arifle_AK15_Base {
    recoil = QCLASS(762R_Foregrip_Medium);
};

// GL
class CUP_arifle_AK15_GP34_Base: CUP_arifle_AK15_Base {
    recoil = QCLASS(762R_GL_Medium);
};
