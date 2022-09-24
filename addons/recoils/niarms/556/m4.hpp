// M4 Variants Inherits (Some are broken with no barrel length at all.)

// AR15 Sanitised Carbine - Short Barrel
class hlc_rifle_RU556: hlc_ar15_base {
    recoil = QCLASS(556_ShortBarrel);
};

// BCM 'Jack' Carbine - Medium Barrel
class hlc_rifle_bcmjack: hlc_ar15_base {
    recoil = QCLASS(556_MediumBarrel);
};

// Colt M4A1 Carbine - Medium Barrel
class hlc_rifle_M4: hlc_ar15_base {
    recoil = QCLASS(556_MediumBarrel);
};
// GL
class hlc_rifle_m4m203: hlc_rifle_M4 {
    recoil = QCLASS(556_GL_Medium);
};

// Colt R0727 Carbine - Medium Barrel
class hlc_rifle_Colt727: hlc_ar15_base {
    recoil = QCLASS(556_MediumBarrel);
};
// GL
class hlc_rifle_Colt727_GL: hlc_rifle_Colt727 {
    recoil = QCLASS(556_GL_Medium);
};

// MK18 MOD 0 - Short Barrel
class hlc_rifle_mk18mod0: hlc_rifle_CQBR {
    recoil = QCLASS(556_ShortBarrel);
};

// RRA LAR-15 AMR - Long Barrel
class hlc_rifle_SAMR: hlc_ar15_base {
    recoil = QCLASS(556_LongBarrel);
};
