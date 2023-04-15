// 7.62x39 Russian

// Long barreled variant of a 7.62 rifle (16"-18")
class CLASS(762R_LongBarrel): CLASS(Recoil_Default) {
    muzzleOuter[] = {0.245, 0.63, 0.33, 0.33};
    permanent = 0.15;
};

// Medium barreled variant of a 7.62 rifle (14"-16")
class CLASS(762R_MediumBarrel): CLASS(762R_LongBarrel) {
    muzzleOuter[] = {0.25, 0.65, 0.34, 0.34};
    permanent = 0.17;
};

// Short barreled variant of a 7.62 rifle (< 14")
class CLASS(762R_ShortBarrel): CLASS(762R_MediumBarrel) {
    muzzleOuter[] = {0.28, 0.7, 0.36, 0.36};
    permanent = 0.2;
};

// GL Variants
class CLASS(762R_GL_Long): CLASS(Recoil_Default) {
    muzzleOuter[] = {0.23, 0.65, 0.32, 0.32};
    permanent = 0.13;
};
class CLASS(762R_GL_Medium): CLASS(762R_GL_Long) {
    muzzleOuter[] = {0.24, 0.67, 0.33, 0.33};
    permanent = 0.14;
};
class CLASS(762R_GL_Short): CLASS(762R_GL_Medium) {
    muzzleOuter[] = {0.25, 0.69, 0.34, 0.34};
    permanent = 0.15;
};

// Foregrip variants, inherits from GL
class CLASS(762R_Foregrip_Long): CLASS(762R_GL_Long) {};
class CLASS(762R_Foregrip_Medium): CLASS(762R_GL_Medium) {};
class CLASS(762R_Foregrip_Short): CLASS(762R_GL_Short) {};
