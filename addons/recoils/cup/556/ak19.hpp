// AK-19 Rifles inherit

// AK-19 - Medium Barrel
class CUP_arifle_AK19_Base: Rifle_Base_F {
    recoil = QCLASS(556_MediumBarrel);
};

// Foregrip
class CUP_arifle_AK19_AFG_Base: CUP_arifle_AK19_Base {
    recoil = QCLASS(556_Foregrip_Medium);
};
class CUP_arifle_AK19_VG_Base: CUP_arifle_AK19_Base {
    recoil = QCLASS(556_Foregrip_Medium);
};

// GL
class CUP_arifle_AK19_GP34_Base: CUP_arifle_AK19_Base {
    recoil = QCLASS(556_GL_Medium);
};
