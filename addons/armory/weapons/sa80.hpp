#include "sa80_base.hpp"

// Black Variants
class CLASS(SA80_Black): CLASS(SA80_Base) {
    baseWeapon = QCLASS(SA80_Black);
    displayName = "L85A3 6.5mm (Black)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\sa80\sa80_f_01_co.paa),
        QPATHTOF(data\sa80\sa80_f_02_co.paa),
        QPATHTOF(data\sa80\grip_co.paa)
    };
    picture = QPATHTOF(ui\icon_sa80_black_ca.paa);
    scope = 2;
    scopeArsenal = 2;
};

class CLASS(SA80_Black_GL): CLASS(SA80_GL_Base) {
    baseWeapon = QCLASS(SA80_Black_GL);
    displayName = "L85A3 GL 6.5mm (Black)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\sa80\sa80_f_01_co.paa),
        QPATHTOF(data\sa80\sa80_f_02_co.paa),
        QPATHTOF(data\sa80\sa80_f_gl_co.paa)
    };
    picture = QPATHTOF(ui\icon_sa80_black_gl_ca.paa);
    scope = 2;
    scopeArsenal = 2;
};

class CLASS(SA80_Black_C): CLASS(SA80_Carbine_Base) {
    baseWeapon = QCLASS(SA80_Black_C);
    displayName = "L22A3 6.5mm (Black)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\sa80\sa80_f_01_co.paa),
        QPATHTOF(data\sa80\sa80_f_c_co.paa)
    };
    picture = QPATHTOF(ui\icon_sa80_black_carbine_ca.paa);
    scope = 2;
    scopeArsenal = 2;
};

// Sand Variants
class CLASS(SA80_Sand): CLASS(SA80_Base) {
    baseWeapon = QCLASS(SA80_Sand);
    displayName = "L85A3 6.5mm (Sand)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\sa80\sa80_f_01_snd_co.paa),
        QPATHTOF(data\sa80\sa80_f_02_snd_co.paa),
        QPATHTOF(data\sa80\grip_co.paa)
    };
    picture = QPATHTOF(ui\icon_sa80_sand_ca.paa);
    scope = 2;
    scopeArsenal = 2;
};

class CLASS(SA80_Sand_GL): CLASS(SA80_GL_Base) {
    baseWeapon = QCLASS(SA80_Sand_GL);
    displayName = "L85A3 GL 6.5mm (Sand)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\sa80\sa80_f_01_snd_co.paa),
        QPATHTOF(data\sa80\sa80_f_02_snd_co.paa),
        QPATHTOF(data\sa80\sa80_f_gl_snd_co.paa)
    };
    picture = QPATHTOF(ui\icon_sa80_sand_gl_ca.paa);
    scope = 2;
    scopeArsenal = 2;
};

class CLASS(SA80_Sand_C): CLASS(SA80_Carbine_Base) {
    baseWeapon = QCLASS(SA80_Sand_C);
    displayName = "L22A3 6.5mm (Sand)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\sa80\sa80_f_01_snd_co.paa),
        QPATHTOF(data\sa80\sa80_f_c_snd_co.paa)
    };
    picture = QPATHTOF(ui\icon_sa80_sand_carbine_ca.paa);
    scope = 2;
    scopeArsenal = 2;
};
