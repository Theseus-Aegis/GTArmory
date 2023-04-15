// ACR Rifles inherit

// ACR-E Compact (Short Barrel)
class hlc_rifle_ACR68_SBR_tan: hlc_acr_base {
    recoil = QCLASS(68_ShortBarrel);
};
// GL
class hlc_rifle_ACR68_GL_SBR_black: hlc_rifle_ACR68_SBR_black {
    recoil = QCLASS(68_GL_Short);
};

// ACR-E Carbine (Medium Barrel)
class hlc_rifle_ACR68_carb_black: hlc_rifle_ACR68_SBR_tan {
    recoil = QCLASS(68_MediumBarrel);
};
// GL
class hlc_rifle_ACR68_GL_Carb_black: hlc_rifle_ACR68_carb_black {
    recoil = QCLASS(68_GL_Medium);
};

// ACR-E Mid (Long Barrel)
class hlc_rifle_ACR68_MID_black: hlc_rifle_ACR68_SBR_tan {
    recoil = QCLASS(68_LongBarrel);
};
// GL
class hlc_rifle_ACR68_GL_mid_black: hlc_rifle_ACR68_MID_black {
    recoil = QCLASS(68_GL_Long);
};

// ACR-E Long (Long Barrel)
class hlc_rifle_ACR68_full_black: hlc_rifle_ACR68_SBR_tan {
    recoil = QCLASS(68_LongBarrel);
};
