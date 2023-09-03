// ACR
class hlc_rifle_ACR68_SBR_tan: hlc_acr_base {
    recoil = QCLASS(65_Short);
};
class hlc_rifle_ACR68_GL_SBR_black: hlc_rifle_ACR68_SBR_black {
    recoil = QCLASS(65_Short_FG);
};
class hlc_rifle_ACR68_carb_black: hlc_rifle_ACR68_SBR_tan {
    recoil = QCLASS(65_Medium);
};
class hlc_rifle_ACR68_GL_Carb_black: hlc_rifle_ACR68_carb_black {
    recoil = QCLASS(65_Medium_FG);
};
class hlc_rifle_ACR68_MID_black: hlc_rifle_ACR68_SBR_tan {
    recoil = QCLASS(65_Long);
};
class hlc_rifle_ACR68_GL_mid_black: hlc_rifle_ACR68_MID_black {
    recoil = QCLASS(65_Long_FG);
};
class hlc_rifle_ACR68_full_black: hlc_rifle_ACR68_SBR_tan {
    recoil = QCLASS(65_Long);
};
