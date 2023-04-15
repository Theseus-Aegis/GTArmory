// 5.56x45

// Long barreled variant of a 5.56 rifle. (16"-18")
class CLASS(556_LongBarrel): CLASS(Recoil_Default) {
    muzzleOuter[] = {0.23, 0.6, 0.30, 0.30};
    permanent = 0.15;
};

// Medium barreled variant of a 5.56 rifle. (14"-16")
class CLASS(556_MediumBarrel): CLASS(556_LongBarrel) {
    muzzleOuter[] = {0.25, 0.7, 0.33, 0.33};
    permanent = 0.17;
};

// Short barreled variant of a 5.56 rifle. (< 14")
class CLASS(556_ShortBarrel): CLASS(556_MediumBarrel) {
    muzzleOuter[] = {0.25, 0.7, 0.36, 0.36};
    permanent = 0.2;
};

// Bullpup Variants, Lessened horizontal recoil.
class CLASS(556_Bullpup_Long): CLASS(Recoil_Default) {
    muzzleOuter[] = {0.14, 0.65, 0.25, 0.33};
    permanent = 0.14;
};

class CLASS(556_Bullpup_Medium): CLASS(556_Bullpup_Long) {
    muzzleOuter[] = {0.15, 0.7, 0.25, 0.33};
    permanent = 0.15;
};
class CLASS(556_Bullpup_Short): CLASS(556_Bullpup_Medium) {
    muzzleOuter[] = {0.15, 0.7, 0.25, 0.36};
    permanent = 0.2;
};

// GL Variants - More Weight, less overall recoil
class CLASS(556_GL_Long): CLASS(Recoil_Default) {
    muzzleOuter[] = {0.22, 0.63, 0.29, 0.29};
    permanent = 0.13;
};
class CLASS(556_GL_Medium): CLASS(556_GL_Long) {
    muzzleOuter[] = {0.23, 0.65, 0.3, 0.3};
    permanent = 0.14;
};
// Short Barreled GL - Pretty rare.
class CLASS(556_GL_Short): CLASS(556_GL_Medium) {
    muzzleOuter[] = {0.24, 0.67, 0.33, 0.33};
    permanent = 0.16;
};

// Bullpup GLs
class CLASS(556_Bullpup_GL_Long): CLASS(Recoil_Default) {
    muzzleOuter[] = {0.14, 0.60, 0.25, 0.3};
    permanent = 0.12;
};
class CLASS(556_Bullpup_GL_Medium): CLASS(556_Bullpup_GL_Long) {
    muzzleOuter[] = {0.15, 0.63, 0.28, 0.3};
    permanent = 0.13;
};
class CLASS(556_Bullpup_GL_Short): CLASS(556_Bullpup_GL_Medium) {
    muzzleOuter[] = {0.16, 0.64, 0.29, 0.31};
    permanent = 0.14;
};

// Foregrip Variants, inherits from GL
class CLASS(556_Foregrip_Long): CLASS(556_GL_Long) {};
class CLASS(556_Foregrip_Medium): CLASS(556_GL_Medium) {};
class CLASS(556_Foregrip_Short): CLASS(556_GL_Short) {};
class CLASS(556_Bullpup_Foregrip_Short): CLASS(556_Bullpup_GL_Short) {};
class CLASS(556_Bullpup_Foregrip_Long): CLASS(556_Bullpup_GL_Long) {};
