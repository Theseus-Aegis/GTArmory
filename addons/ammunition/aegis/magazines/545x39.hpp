#define MACRO_AEGIS_AK12_MAGAZINE_BLACK \
    hiddenSelections[] = {"camo"}; \
    hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\magazine_AK74_black_CO.paa"}; \
    model = "\A3\weapons_F\ammo\mag_univ.p3d"; \
    modelSpecial = "\a3\Weapons_F_Exp\MagazineProxies\mag_545x39_ak74_30rnd.p3d"; \
    picture = "\A3_Aegis\weapons_f_aegis\Data\UI\icon_30Rnd_545x39_Black_Mag_F_ca.paa"

#define MACRO_AEGIS_AK12_MAGAZINE_TAN \
    hiddenSelections[] = {"camo"}; \
    hiddenSelectionsMaterials[] = {"\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\magazine_AK74_camo.rvmat"}; \
    hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\magazine_AK74_camo_CO.paa"}; \
    model = "\A3\weapons_F\ammo\mag_univ.p3d"; \
    modelSpecial = "\a3\Weapons_F_Exp\MagazineProxies\mag_545x39_ak74_30rnd.p3d"; \
    picture = "\A3_Aegis\weapons_f_aegis\Data\UI\icon_30Rnd_545x39_AK12_Arid_Mag_F_ca.paa"

#define MACRO_AEGIS_AK12_MAGAZINE_LUSH \
    hiddenSelections[] = {"camo"}; \
    hiddenSelectionsMaterials[] = {"\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\magazine_AK74_khaki.rvmat"}; \
    hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\magazine_AK74_khaki_CO.paa"}; \
    model = "\A3\weapons_F\ammo\mag_univ.p3d"; \
    modelSpecial = "\a3\Weapons_F_Exp\MagazineProxies\mag_545x39_ak74_30rnd.p3d"; \
    picture = "\A3_Aegis\weapons_f_aegis\Data\UI\icon_30Rnd_545x39_AK12_Lush_Mag_F_ca.paa"

#define MACRO_AEGIS_AK12_MAGAZINE_OLIVE \
    hiddenSelections[] = {"camo"}; \
    hiddenSelectionsTextures[] = {"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\magazine_ak74_Olive_co.paa"}; \
    model = "\A3\weapons_F\ammo\mag_univ.p3d"; \
    modelSpecial = "\a3\Weapons_F_Exp\MagazineProxies\mag_545x39_ak74_30rnd.p3d"; \
    picture = "\A3_Aegis\weapons_f_aegis\Rifles\AKM74\Data\UI\icon_30Rnd_545x39_Olive_Mag_Yellow_F_ca.paa"

#define MACRO_AEGIS_AK12_MAGAZINE_SAND \
    hiddenSelections[] = {"camo"}; \
    hiddenSelectionsTextures[] = {"A3_Aegis\weapons_f_Aegis\Rifles\AKM74\data\magazine_ak74_sand_co.paa"}; \
    model = "\A3\weapons_F\ammo\mag_univ.p3d"; \
    modelSpecial = "\a3\Weapons_F_Exp\MagazineProxies\mag_545x39_ak74_30rnd.p3d"; \
    picture = "\A3_Aegis\weapons_f_aegis\Rifles\AKM74\Data\UI\icon_30Rnd_545x39_Sand_Mag_Yellow_F_ca.paa"

#define MACRO_AEGIS_AK12_MAGAZINE_PLUM \
    hiddenSelections[] = {}; \
    hiddenSelectionsTextures[] = {}; \
    hiddenSelectionsMaterials[] = {}; \
    model = "\A3\weapons_F\ammo\mag_univ.p3d"; \
    modelSpecial = "\a3\Weapons_F_Exp\MagazineProxies\mag_545x39_ak74_30rnd.p3d"; \
    picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_F_ca.paa"

// 5.45x39mm (Using Aegis AK-12 mags)
class CLASS(30Rnd_545x39_EPR);
class CLASS(30Rnd_545x39_AP): CLASS(30Rnd_545x39_EPR) {
    MACRO_AEGIS_AK12_MAGAZINE_TAN;
};
class CLASS(30Rnd_545x39_AP_Black): CLASS(30Rnd_545x39_AP) {
    MACRO_AEGIS_AK12_MAGAZINE_BLACK;
};

class 30Rnd_545x39_Mag_F;
class CLASS(30Rnd_545x39_Ball): 30Rnd_545x39_Mag_F {
    MACRO_AEGIS_AK12_MAGAZINE_TAN;
};
class CLASS(30Rnd_545x39_Ball_Black): CLASS(30Rnd_545x39_Ball) {
    MACRO_AEGIS_AK12_MAGAZINE_BLACK;
};

class CLASS(30Rnd_545x39_EPR_Black): CLASS(30Rnd_545x39_EPR) {
    MACRO_AEGIS_AK12_MAGAZINE_BLACK;
};

class CLASS(30Rnd_545x39_Ball_Tracer);
class CLASS(30Rnd_545x39_Ball_Tracer_Black): CLASS(30Rnd_545x39_Ball_Tracer) {
    MACRO_AEGIS_AK12_MAGAZINE_BLACK;
};

// 5.45x39mm (Lush)
class CLASS(30Rnd_545x39_Ball_Lush): CLASS(30Rnd_545x39_Ball) {
    MACRO_AEGIS_AK12_MAGAZINE_LUSH;
    displayName = "5.45mm 30Rnd Lush (Ball)";
};
class CLASS(30Rnd_545x39_Ball_Tracer_Lush): CLASS(30Rnd_545x39_Ball_Tracer) {
    MACRO_AEGIS_AK12_MAGAZINE_LUSH;
    displayName = "5.45mm 30Rnd Lush [T] (Ball)";
};

class CLASS(30Rnd_545x39_EPR_Lush): CLASS(30Rnd_545x39_EPR) {
    MACRO_AEGIS_AK12_MAGAZINE_LUSH;
    displayName = "5.45mm 30Rnd Lush (EPR)";
};
class CLASS(30Rnd_545x39_AP_Lush): CLASS(30Rnd_545x39_AP) {
    MACRO_AEGIS_AK12_MAGAZINE_LUSH;
    displayName = "5.45mm 30Rnd Lush (AP)";
};

// 5.45x39mm (Olive)
class CLASS(30Rnd_545x39_Ball_Olive): CLASS(30Rnd_545x39_Ball) {
    MACRO_AEGIS_AK12_MAGAZINE_OLIVE;
    displayName = "5.45mm 30Rnd Olive (Ball)";
};
class CLASS(30Rnd_545x39_Ball_Tracer_Olive): CLASS(30Rnd_545x39_Ball_Tracer) {
    MACRO_AEGIS_AK12_MAGAZINE_OLIVE;
    displayName = "5.45mm 30Rnd Olive [T] (Ball)";
};

class CLASS(30Rnd_545x39_EPR_Olive): CLASS(30Rnd_545x39_EPR) {
    MACRO_AEGIS_AK12_MAGAZINE_OLIVE;
    displayName = "5.45mm 30Rnd Olive (EPR)";
};
class CLASS(30Rnd_545x39_AP_Olive): CLASS(30Rnd_545x39_AP) {
    MACRO_AEGIS_AK12_MAGAZINE_OLIVE;
    displayName = "5.45mm 30Rnd Olive (AP)";
};

// 5.45x39mm (Sand)
class CLASS(30Rnd_545x39_Ball_Sand): CLASS(30Rnd_545x39_Ball) {
    MACRO_AEGIS_AK12_MAGAZINE_SAND;
    displayName = "5.45mm 30Rnd Sand (Ball)";
};
class CLASS(30Rnd_545x39_Ball_Tracer_Sand): CLASS(30Rnd_545x39_Ball_Tracer) {
    MACRO_AEGIS_AK12_MAGAZINE_SAND;
    displayName = "5.45mm 30Rnd Sand [T] (Ball)";
};

class CLASS(30Rnd_545x39_EPR_Sand): CLASS(30Rnd_545x39_EPR) {
    MACRO_AEGIS_AK12_MAGAZINE_SAND;
    displayName = "5.45mm 30Rnd Sand (EPR)";
};
class CLASS(30Rnd_545x39_AP_Sand): CLASS(30Rnd_545x39_AP) {
    MACRO_AEGIS_AK12_MAGAZINE_SAND;
    displayName = "5.45mm 30Rnd Sand (AP)";
};

// 5.45x39mm (Plum)
class CLASS(30Rnd_545x39_Ball_Plum): CLASS(30Rnd_545x39_Ball) {
    MACRO_AEGIS_AK12_MAGAZINE_PLUM;
    displayName = "5.45mm 30Rnd Plum (Ball)";
};
class CLASS(30Rnd_545x39_Ball_Tracer_Plum): CLASS(30Rnd_545x39_Ball_Tracer) {
    MACRO_AEGIS_AK12_MAGAZINE_PLUM;
    displayName = "5.45mm 30Rnd Plum [T] (Ball)";
};

class CLASS(30Rnd_545x39_EPR_Plum): CLASS(30Rnd_545x39_EPR) {
    MACRO_AEGIS_AK12_MAGAZINE_PLUM;
    displayName = "5.45mm 30Rnd Plum (EPR)";
};
class CLASS(30Rnd_545x39_AP_Plum): CLASS(30Rnd_545x39_AP) {
    MACRO_AEGIS_AK12_MAGAZINE_PLUM;
    displayName = "5.45mm 30Rnd Plum (AP)";
};
