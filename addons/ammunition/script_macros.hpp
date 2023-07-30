#define MACRO_SCOPE \
    scope = 2; \
    scopeArsenal = 2; \
    author = ECSTRING(main,Author);

#define MACRO_TRACERS \
    model = "\A3\Weapons_f\Data\bullettracer\tracer_Yellow";
    tracerEndTime = 1;
    tracerScale = 0.5;
    tracerstartTime = 0.05;

#define MACRO_AK12_MAGAZINE_TAN \
    hiddenSelections[] = {"Camo1"}; \
    hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\ak12_mag_tan_co.paa"}; \
    model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_AK12.p3d"; \
    modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30Rnd_AK12.p3d"; \
    modelSpecialIsProxy = 1; \
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_ak74_ca.paa";

#define MACRO_AK12_MAGAZINE_BLACK \
    hiddenSelections[] = {"Camo1"}; \
    hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\ak12_mag_co.paa"}; \
    model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_AK12.p3d"; \
    modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30Rnd_AK12.p3d"; \
    modelSpecialIsProxy = 1; \
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_ak74_ca.paa";

#define MACRO_556_MAGAZINE_PMAG_Black \
    hiddenSelections[] = {"Camo1"}; \
    hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\cup_pmag_black_co.paa"}; \
    model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30rnd_pmag.p3d"; \
    modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30rnd_pmag.p3d"; \
    modelSpecialIsProxy = 1; \
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_30rnd_pmag_black_ca.paa";

#define MACRO_556_MAGAZINE_PMAG_Tan \
    hiddenSelections[] = {"Camo1"}; \
    hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\cup_pmag_coyote_co.paa"}; \
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_30rnd_pmag_coyote_ca.paa";

#define MACRO_556_MAGAZINE_EMAG_Black \
    hiddenSelections[] = {"Camo1"}; \
    hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\emag_co.paa"}; \
    model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_EMAG.p3d"; \
    modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30Rnd_EMAG.p3d"; \
    modelSpecialIsProxy = 1;

#define MACRO_556_MAGAZINE_EMAG_Tan \
    hiddenSelections[] = {"Camo1"}; \
    hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\emag_coyote_co.paa"};

#define MACRO_65_MAGAZINE_MX_Black \
    hiddenSelections[] = {"camo"}; \
    hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"}; \
    picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_CA.paa";

#define MACRO_65_MAGAZINE_MX_LSW_Black \
    hiddenSelections[] = {"camo"}; \
    hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_lmg_Black_co.paa"}; \
    picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_black_mag_CA.paa";

#define MACRO_762_AK12_MAGAZINE_TAN \
    hiddenSelections[] = {"Camo"}; \
    hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat"}; \
    hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\ak12_ak12_2_camo_co.paa"}; \
    picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30rnd_762x39_AK12_Arid_Mag_F_CA.paa";
