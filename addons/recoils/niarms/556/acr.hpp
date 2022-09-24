// ACR-E Rifles Inherit

// ACR-E Compact (Short Barrel)
class hlc_rifle_ACR_SBR_tan: hlc_acr556_base {
    recoil = QCLASS(556_ShortBarrel);
};
// GL
class hlc_rifle_ACR_GL_SBR_black: hlc_rifle_ACR_SBR_black {
    recoil = QCLASS(556_GL_Short);
};

// ACR-E Carbine (Medium Barrel)
class hlc_rifle_ACR_carb_black: hlc_rifle_ACR_SBR_tan {
    recoil = QCLASS(556_MediumBarrel);
};
// GL
class hlc_rifle_ACR_GL_Carb_black: hlc_rifle_ACR_Carb_black {
    recoil = QCLASS(556_GL_Medium);
};

// ACR-E Mid (Long Barrel)
class hlc_rifle_ACR_MID_black: hlc_rifle_ACR_SBR_tan {
    recoil = QCLASS(556_LongBarrel);
};
// GL
class hlc_rifle_ACR_GL_mid_black: hlc_rifle_ACR_MID_black {
    recoil = QCLASS(556_GL_Long);
};

// ACR-E Long (Long Barrel)
class hlc_rifle_ACR_Full_black: hlc_rifle_ACR_SBR_tan {
    recoil = QCLASS(556_LongBarrel);
};
