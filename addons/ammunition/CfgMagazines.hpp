class CfgMagazines {
    class CA_Magazine;
    class 200Rnd_556x45_Box_F;
    class 30Rnd_556x45_Stanag_green;
    class 30Rnd_762x39_Mag_F;
    class 30Rnd_762x39_AK12_Mag_F;
    class 30rnd_762x39_AK12_Arid_Mag_F;
    class 30rnd_762x39_AK12_Lush_Mag_F;
    class ACE_30Rnd_556x45_Stanag_M995_AP_mag;
    class ACE_30Rnd_556x45_Stanag_Mk262_mag;
    class ACE_30Rnd_556x45_Stanag_Mk318_mag;

    class CLASS(8Rnd_P_000): CA_Magazine {
        author = "TyroneMF";
        scope = 2;
        displayName = CSTRING(8Rnd_P_000_Display);
        displayNameShort = CSTRING(8Rnd_P_000_Display_Short);
        ammo = QCLASS(P_12G_000);
        count = 8;
        initSpeed = 385;
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_12gauge_ca.paa";
        descriptionShort = CSTRING(8Rnd_P_000_Description);
        mass = 8;
        reloadaction = "CUP_GestureReloadM1014_8Rnd";
    };

    class CLASS(8Rnd_S_AP20): CA_Magazine {
        author = "TyroneMF";
        scope = 2;
        displayName = CSTRING(8Rnd_S_AP20_Display);
        displayNameShort = CSTRING(8Rnd_S_AP20_Display_Short);
        ammo = QCLASS(S_12G_AP20);
        count = 8;
        initSpeed = 510;
        picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_2rnd_12gauge_slugs_CA.paa";
        descriptionShort = CSTRING(8Rnd_S_AP20_Description);
        mass = 8;
        reloadaction = "CUP_GestureReloadM1014_8Rnd";
    };

    class CLASS(6Rnd_P_000): CLASS(8Rnd_P_000) {
        displayName = CSTRING(6Rnd_P_000_Display);
        displayNameShort = CSTRING(8Rnd_P_000_Display_Short);
        count = 6;
        mass = 6;
    };

    class CLASS(6Rnd_S_AP20): CLASS(8Rnd_S_AP20) {
        displayName = CSTRING(6Rnd_S_AP20_Display);
        displayNameShort = CSTRING(8Rnd_S_AP20_Display_Short);
        count = 6;
        mass = 6;
    };

    // 556 30Rnd Magazines
    // PMAG
    class CLASS(30Rnd_556x45_M855_PMAG): 30Rnd_556x45_Stanag_green {
        author = "TyroneMF";
        scope = 2;
        lastRoundsTracer = 4;
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_pmag_ca.paa";
        displayName = CSTRING(30Rnd_556x45_M855_PMAG_Display);
        mass = 10;
        model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30rnd_pmag_qp.p3d";
        modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30rnd_pmag_qp.p3d";
        modelSpecialIsProxy = 1;
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\pmag_black_co.paa"};
    };

    class CLASS(30Rnd_556x45_M855_PMAG_Tan): CLASS(30Rnd_556x45_M855_PMAG) {
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_pmag_coyote_ca.paa";
        displayName = CSTRING(30Rnd_556x45_M855_PMAG_Tan_Display);
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\pmag_coyote_co.paa"};
    };

    class CLASS(30Rnd_556x45_M855A1_PMAG): 30Rnd_556x45_Stanag_green {
        author = "TyroneMF";
        scope = 2;
        lastRoundsTracer = 4;
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_pmag_ca.paa";
        displayName = CSTRING(30Rnd_556x45_M855A1_PMAG_Display);
        ammo = QCLASS(556x45_EPR_M855A1);
        mass = 10;
        model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30rnd_pmag_qp.p3d";
        modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30rnd_pmag_qp.p3d";
        modelSpecialIsProxy = 1;
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\pmag_black_co.paa"};
    };

    class CLASS(30Rnd_556x45_M855A1_PMAG_Tan): CLASS(30Rnd_556x45_M855A1_PMAG) {
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_pmag_coyote_ca.paa";
        displayName = CSTRING(30Rnd_556x45_M855A1_PMAG_Tan_Display);
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\pmag_coyote_co.paa"};
    };

    class CLASS(30Rnd_556x45_M995_PMAG): ACE_30Rnd_556x45_Stanag_M995_AP_mag {
        author = "TyroneMF";
        scope = 2;
        lastRoundsTracer = 2;
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_pmag_ca.paa";
        displayName = CSTRING(30Rnd_556x45_M995_PMAG_Display);
        mass = 10;
        model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30rnd_pmag_qp.p3d";
        modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30rnd_pmag_qp.p3d";
        modelSpecialIsProxy = 1;
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\pmag_black_co.paa"};
    };

    class CLASS(30Rnd_556x45_M995_PMAG_Tan): CLASS(30Rnd_556x45_M995_PMAG) {
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_pmag_coyote_ca.paa";
        displayName = CSTRING(30Rnd_556x45_M995_PMAG_Tan_Display);
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\pmag_coyote_co.paa"};
    };

    class CLASS(30Rnd_556x45_MK262_PMAG): ACE_30Rnd_556x45_Stanag_Mk262_mag {
        author = "TyroneMF";
        scope = 2;
        lastRoundsTracer = 2;
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_pmag_ca.paa";
        displayName = CSTRING(30Rnd_556x45_MK262_PMAG_Display);
        mass = 10;
        model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30rnd_pmag_qp.p3d";
        modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30rnd_pmag_qp.p3d";
        modelSpecialIsProxy = 1;
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\pmag_black_co.paa"};
    };

    class CLASS(30Rnd_556x45_MK262_PMAG_Tan): CLASS(30Rnd_556x45_MK262_PMAG) {
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_pmag_coyote_ca.paa";
        displayName = CSTRING(30Rnd_556x45_MK262_PMAG_Tan_Display);
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\pmag_coyote_co.paa"};
    };

    class CLASS(30Rnd_556x45_MK318_PMAG): ACE_30Rnd_556x45_Stanag_Mk318_mag {
        author = "TyroneMF";
        scope = 2;
        lastRoundsTracer = 2;
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_pmag_ca.paa";
        displayName = CSTRING(30Rnd_556x45_MK318_PMAG_Display);
        mass = 10;
        model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30rnd_pmag_qp.p3d";
        modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30rnd_pmag_qp.p3d";
        modelSpecialIsProxy = 1;
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\pmag_black_co.paa"};
    };

    class CLASS(30Rnd_556x45_MK318_PMAG_Tan): CLASS(30Rnd_556x45_MK318_PMAG) {
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_pmag_coyote_ca.paa";
        displayName = CSTRING(30Rnd_556x45_MK318_PMAG_Tan_Display);
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\pmag_coyote_co.paa"};
    };

    // EMAG
    class CLASS(30Rnd_556x45_M855_EMAG): 30Rnd_556x45_Stanag_green {
        author = "TyroneMF";
        scope = 2;
        lastRoundsTracer = 4;
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_emag_ca.paa";
        displayName = CSTRING(30Rnd_556x45_M855_EMAG_Display);
        mass = 10;
        model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_EMAG.p3d";
        modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30Rnd_EMAG.p3d";
        modelSpecialIsProxy = 1;
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\emag_co.paa"};
    };

    class CLASS(30Rnd_556x45_M855_EMAG_Tan): CLASS(30Rnd_556x45_M855_EMAG) {
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_emag_coyote_ca.paa";
        displayName = CSTRING(30Rnd_556x45_M855_EMAG_Tan_Display);
        model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_EMAG_coyote.p3d";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\emag_coyote_co.paa"}; 
    };

    class CLASS(30Rnd_556x45_M855A1_EMAG): 30Rnd_556x45_Stanag_green {
        author = "TyroneMF";
        scope = 2;
        lastRoundsTracer = 4;
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_emag_ca.paa";
        displayName = CSTRING(30Rnd_556x45_M855A1_EMAG_Display);
        ammo = QCLASS(556x45_EPR_M855A1);
        mass = 10;
        model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_EMAG.p3d";
        modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30Rnd_EMAG.p3d";
        modelSpecialIsProxy = 1;
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\emag_co.paa"};
    };

    class CLASS(30Rnd_556x45_M855A1_EMAG_Tan): CLASS(30Rnd_556x45_M855A1_EMAG) {
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_emag_coyote_ca.paa";
        displayName = CSTRING(30Rnd_556x45_M855A1_EMAG_Tan_Display);
        model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_EMAG_coyote.p3d";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\emag_coyote_co.paa"}; 
    };

    class CLASS(30Rnd_556x45_M995_EMAG): ACE_30Rnd_556x45_Stanag_M995_AP_mag {
        author = "TyroneMF";
        scope = 2;
        lastRoundsTracer = 2;
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_emag_ca.paa";
        displayName = CSTRING(30Rnd_556x45_M995_EMAG_Display);
        mass = 10;
        model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_EMAG.p3d";
        modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30Rnd_EMAG.p3d";
        modelSpecialIsProxy = 1;
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\emag_co.paa"};
    };

    class CLASS(30Rnd_556x45_M995_EMAG_Tan): CLASS(30Rnd_556x45_M995_EMAG) {
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_emag_coyote_ca.paa";
        displayName = CSTRING(30Rnd_556x45_M995_EMAG_Tan_Display);
        model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_EMAG_coyote.p3d";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\emag_coyote_co.paa"};
    };

    class CLASS(30Rnd_556x45_MK262_EMAG): ACE_30Rnd_556x45_Stanag_Mk262_mag {
        author = "TyroneMF";
        scope = 2;
        lastRoundsTracer = 2;
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_emag_ca.paa";
        displayName = CSTRING(30Rnd_556x45_MK262_EMAG_Display);
        mass = 10;
        model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_EMAG.p3d";
        modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30Rnd_EMAG.p3d";
        modelSpecialIsProxy = 1;
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\emag_co.paa"};
    };

    class CLASS(30Rnd_556x45_MK262_EMAG_Tan): CLASS(30Rnd_556x45_MK262_EMAG) {
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_emag_coyote_ca.paa";
        displayName = CSTRING(30Rnd_556x45_MK262_EMAG_Tan_Display);
        model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_EMAG_coyote.p3d";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\emag_coyote_co.paa"};
    };

    class CLASS(30Rnd_556x45_MK318_EMAG): ACE_30Rnd_556x45_Stanag_Mk318_mag {
        author = "TyroneMF";
        scope = 2;
        lastRoundsTracer = 2;
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_emag_ca.paa";
        displayName = CSTRING(30Rnd_556x45_MK318_EMAG_Display);
        mass = 10;
        model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_EMAG.p3d";
        modelSpecial = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_30Rnd_EMAG.p3d";
        modelSpecialIsProxy = 1;
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\emag_co.paa"};
    };

    class CLASS(30Rnd_556x45_MK318_EMAG_Tan): CLASS(30Rnd_556x45_MK318_EMAG) {
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_emag_coyote_ca.paa";
        displayName = CSTRING(30Rnd_556x45_MK318_EMAG_Tan_Display);
        model = "\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_30Rnd_EMAG_coyote.p3d";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Ammunition\magazines\data\emag_coyote_co.paa"};
    };

    // 200Rnd 556 Box Magazines
    class CLASS(200Rnd_556x45_M855A1_Box): 200Rnd_556x45_Box_F {
        author = "TyroneMF";
        scope = 2;
        displayName = CSTRING(200Rnd_556x45_M855A1_Box_Display);
        ammo = QCLASS(556x45_EPR_M855A1);
        mass = 40;
        tracersEvery = 4;
    };

    class CLASS(200Rnd_556x45_M855A1_Box_Red): CLASS(200Rnd_556x45_M855A1_Box) {
        displayName = CSTRING(200Rnd_556x45_M855A1_Box_Red_Display);
        ammo = QCLASS(556x45_EPR_M855A1_Red);
        tracersEvery = 4;
    };

    class CLASS(200Rnd_556x45_M855A1_Box_Tracer): CLASS(200Rnd_556x45_M855A1_Box) {
        displayName = CSTRING(200Rnd_556x45_M855A1_Box_Tracer_Display);
        ammo = QCLASS(556x45_EPR_M855A1);
        tracersEvery = 1;
    };

    class CLASS(200Rnd_556x45_M855A1_Box_Tracer_Red): CLASS(200Rnd_556x45_M855A1_Box_Tracer) {
        displayName = CSTRING(200Rnd_556x45_M855A1_Box_Tracer_Red_Display);
        ammo = QCLASS(556x45_EPR_M855A1_Red);
        tracersEvery = 1;
    };

    // 30Rnd 762x39 Magazines
    class CLASS(30Rnd_762x39_BP_Mag): 30Rnd_762x39_Mag_F {
        displayName = CSTRING(30Rnd_762x39_BP_Mag);
        ammo = QCLASS(762x39_BP);
        lastRoundsTracer = 2;
    };

    class CLASS(30Rnd_762x39_AK12_BP_Mag): 30Rnd_762x39_AK12_Mag_F {
        displayName = CSTRING(30Rnd_762x39_AK12_BP_Mag);
        ammo = QCLASS(762x39_BP);
        lastRoundsTracer = 2;
    };

    class CLASS(30Rnd_762x39_AK12_Arid_BP_Mag): 30rnd_762x39_AK12_Arid_Mag_F {
        displayName = CSTRING(30Rnd_762x39_AK12_Arid_BP_Mag);
        ammo = QCLASS(762x39_BP);
        lastRoundsTracer = 2;
    };

    class CLASS(30Rnd_762x39_AK12_Lush_BP_Mag): 30rnd_762x39_AK12_Lush_Mag_F {
        displayName = CSTRING(30Rnd_762x39_AK12_Lush_BP_Mag);
        ammo = QCLASS(762x39_BP);
        lastRoundsTracer = 2;
    };
};
