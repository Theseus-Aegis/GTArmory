// 6.5 Caseless (Middle ground between 762x39 & 762x51)

// Long barreled variant of a 6.5 rifle (> 16")
class CLASS(65_LongBarrel): CLASS(Recoil_Default) {
    muzzleOuter[] = {0.27, 0.66, 0.38, 0.38};
    permanent = 0.15;
};

// Medium barreled variant of a 6.5 rifle (14"-16")
class CLASS(65_MediumBarrel): CLASS(65_LongBarrel) {
    muzzleOuter[] = {0.3, 0.68, 0.4, 0.4};
    permanent = 0.17;
};

// Short barreled variant of a 6.5 rifle (< 14")
class CLASS(65_ShortBarrel): CLASS(65_MediumBarrel) {
    muzzleOuter[] = {0.32, 0.7, 0.42, 0.42};
    permanent = 0.2;
};

// Bullpup Variants, Lessened horizontal recoil.
class CLASS(65_Bullpup_Long): CLASS(65_LongBarrel) {
    muzzleOuter[] = {0.19, 0.68, 0.3, 0.4};
    permanent = 0.14;
};
class CLASS(65_Bullpup_Medium): CLASS(65_MediumBarrel) {
    muzzleOuter[] = {0.22, 0.7, 0.32, 0.42};
    permanent = 0.16;
};

// GL Variants
class CLASS(65_GL_Long): CLASS(Recoil_Default) {
    muzzleOuter[] = {0.25, 0.64, 0.36, 0.36};
    permanent = 0.14;
};
class CLASS(65_GL_Medium): CLASS(65_GL_Long) {
    muzzleOuter[] = {0.28, 0.66, 0.38, 0.38};
    permanent = 0.16;
};
class CLASS(65_GL_Short): CLASS(65_GL_Medium) {
    muzzleOuter[] = {0.3, 0.68, 0.4, 0.4};
    permanent = 0.18;
};

// Bullpup GL
class CLASS(65_Bullpup_GL_Long): CLASS(Recoil_Default) {
    muzzleOuter[] = {0.18, 0.6, 0.3, 0.37};
    permanent = 0.13;
};
class CLASS(65_Bullpup_GL_Medium): CLASS(65_Bullpup_GL_Long) {
    muzzleOuter[] = {0.21, 0.62, 0.32, 0.39};
    permanent = 0.14;
};

// Foregrip variants, inherits from GL
class CLASS(65_Foregrip_Long): CLASS(65_GL_Long) {};
class CLASS(65_Foregrip_Medium): CLASS(65_GL_Medium) {};
class CLASS(65_Foregrip_Short): CLASS(65_GL_Short) {};

class CLASS(65_Bullpup_Foregrip_Long): CLASS(65_Foregrip_Long) {
    muzzleOuter[] = {0.19, 0.63, 0.3, 0.34};
};
class CLASS(65_Bullpup_Foregrip_Medium): CLASS(65_Bullpup_Foregrip_Long) {
    muzzleOuter[] = {0.22, 0.65, 0.32, 0.36};
};
