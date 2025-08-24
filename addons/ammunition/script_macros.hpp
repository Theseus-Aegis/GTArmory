#define MACRO_SCOPE \
    scope = 2; \
    scopeArsenal = 2; \
    author = ECSTRING(main,Author)

#define MACRO_TRACERS \
    model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow.p3d"; \
    tracerEndTime = 1; \
    tracerScale = 0.5; \
    tracerstartTime = 0.05

#define MACRO_65_MAGAZINE_MX_Black \
    hiddenSelections[] = {"camo"}; \
    hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"}; \
    picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_CA.paa"

#define MACRO_65_MAGAZINE_MX_Khaki \
    hiddenSelections[] = {"camo"}; \
    hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"}; \
    picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_CA.paa"

#define MACRO_65_MAGAZINE_MX_LSW_Black \
    hiddenSelections[] = {"camo"}; \
    hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_lmg_Black_co.paa"}; \
    picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_black_mag_CA.paa"

#define MACRO_65_MAGAZINE_MX_LSW_Khaki \
    hiddenSelections[] = {"camo"}; \
    hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"}; \
    picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_khaki_mag_CA.paa"

#define MACRO_762_AK12_MAGAZINE_TAN \
    hiddenSelections[] = {"Camo"}; \
    hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat"}; \
    hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\ak12_ak12_2_camo_co.paa"}; \
    picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30rnd_762x39_AK12_Arid_Mag_F_CA.paa"
