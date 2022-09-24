// 7.62x51 NATO.

// Long barreled variant of a 7.62 rifle (> 16")
class CLASS(762N_LongBarrel): CLASS(Recoil_Default) {
    muzzleOuter[] = {0.3, 0.7, 0.46, 0.46};
    permanent = 0.15;
};

// Medium barreled variant of a 7.62 rifle (14"-16")
class CLASS(762N_MediumBarrel): CLASS(762N_LongBarrel) {
    muzzleOuter[] = {0.32, 0.72, 0.48, 0.48};
    permanent = 0.17;
};

// Short barreled variant of a 7.62 rifle (< 14")
class CLASS(762N_ShortBarrel): CLASS(762N_MediumBarrel) {
    muzzleOuter[] = {0.34, 0.74, 0.5, 0.5};
    permanent = 0.19;
};

// GL Variants
class CLASS(762N_GL_Long): CLASS(Recoil_Default) {
    muzzleOuter[] = {0.29, 0.69, 0.45, 0.45};
    permanent = 0.14;
};
class CLASS(762N_GL_Medium): CLASS(762N_GL_Long) {
    muzzleOuter[] = {0.31, 0.71, 0.47, 0.47};
    permanent = 0.16;
};
class CLASS(762N_GL_Short): CLASS(762N_GL_Medium) {
    muzzleOuter[] = {0.33, 0.73, 0.49, 0.49};
    permanent = 0.17;
};

// Foregrip variants, inherits from GL
class CLASS(762N_Foregrip_Long): CLASS(762N_GL_Long) {};
class CLASS(762N_Foregrip_Medium): CLASS(762N_GL_Medium) {};
class CLASS(762N_Foregrip_Short): CLASS(762N_GL_Short) {};
