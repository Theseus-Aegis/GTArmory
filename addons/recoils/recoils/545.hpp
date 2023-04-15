// 5.45x39

// Long barreled variant of a 5.45 rifle (16"-18")
class CLASS(545_LongBarrel): CLASS(Recoil_Default) {
    muzzleOuter[] = {0.21, 0.5, 0.28, 0.28};
    permanent = 0.14;
};

// Medium barreled variant of a 5.45 rifle (14"-16")
class CLASS(545_MediumBarrel): CLASS(545_LongBarrel) {
    muzzleOuter[] = {0.23, 0.55, 0.30, 0.30};
    permanent = 0.15;
};

// Short barreled variant of a 5.45 rifle (< 14")
class CLASS(545_ShortBarrel): CLASS(545_MediumBarrel) {
    muzzleOuter[] = {0.25, 0.6, 0.31, 0.31};
    permanent = 0.2;
};

// GL Variants
class CLASS(545_GL_Long): CLASS(Recoil_Default) {
    muzzleOuter[] = {0.19, 0.48, 0.26, 0.26};
    permanent = 0.13;
};

class CLASS(545_GL_Medium): CLASS(545_GL_Long) {
    muzzleOuter[] = {0.2, 0.50, 0.27, 0.27};
    permanent = 0.14;
};

class CLASS(545_GL_Short): CLASS(545_GL_Medium) {
    muzzleOuter[] = {0.21, 0.52, 0.28, 0.28};
    permanent = 0.15;
};

// Foregrip Variants, inherits from GL
class CLASS(545_Foregrip_Long): CLASS(545_GL_Long) {};
class CLASS(545_Foregrip_Medium): CLASS(545_GL_Medium) {};
class CLASS(545_Foregrip_Short): CLASS(545_GL_Short) {};

