// AK-12 Rifles inherit

// AK-12 - Medium Barrel
class CUP_arifle_AK12_Base: Rifle_Base_F {
    recoil = QCLASS(545_MediumBarrel);
};

// Foregrip
class CUP_arifle_AK12_AFG_Base: CUP_arifle_AK12_Base {
    recoil = QCLASS(545_Foregrip_Medium);
};
class CUP_arifle_AK12_VG_Base: CUP_arifle_AK12_Base {
    recoil = QCLASS(545_Foregrip_Medium);
};

// GL
class CUP_arifle_AK12_GP34_Base: CUP_arifle_AK12_Base {
    recoil = QCLASS(545_GL_Medium);
};
