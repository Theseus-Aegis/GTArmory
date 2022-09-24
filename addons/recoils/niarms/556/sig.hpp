// SG 55X Rifles Inherit

// SG550 - Long Barrel
class hlc_rifle_SG550: hlc_sg550_base {
    recoil = QCLASS(556_LongBarrel);
};
// GL
class hlc_rifle_SG550_GL: hlc_rifle_SG550 {
    recoil = QCLASS(556_GL_Long);
};
class hlc_rifle_SG550_TAC_GL: hlc_rifle_SG550 {
    recoil = QCLASS(556_GL_Long);
};

// SG550-1 SP - Long Barrel
class hlc_rifle_SG550Sniper: hlc_sg550_base {
    recoil = QCLASS(556_LongBarrel);
};

// SG551 - Medium Barrel
class hlc_rifle_SG551SB: hlc_sg550_base {
    recoil = QCLASS(556_MediumBarrel);
};
// GL
class hlc_rifle_SG551SB_TAC_GL: hlc_rifle_SG551SB {
    recoil = QCLASS(556_GL_Medium);
};

// SG551 - Long Barrel
class hlc_rifle_SG551LB: hlc_rifle_SG551SB {
    recoil = QCLASS(556_LongBarrel);
};
// GL
class hlc_rifle_SG551LB_TAC_GL: hlc_rifle_SG551LB {
    recoil = QCLASS(556_GL_Long);
};

// SSG553 - Short Barrel
class hlc_rifle_SG553SB: hlc_sg550_base {
    recoil = QCLASS(556_ShortBarrel);
};
