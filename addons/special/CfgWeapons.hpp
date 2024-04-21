class CfgWeapons {
    class CUP_arifle_HK417_20;
    class CUP_arifle_Mk17_CQC_EGLM;
    class CUP_H_OpsCore_Covered_MCAM;
    class H_HelmetB_TI_arid_F;
    class H_PilotHelmetHeli_B;
    class HeadgearItem;
    class hlc_Pistol_M11A1;
    class hlc_pistol_Mk25TR;
    class hlc_rifle_auga2lsw_b;
    class ItemCore;
    class milgp_v_marciras_medic_belt_khk;
    class milgp_v_marciras_medic_belt_rgr;
    class U_B_CTRG_Soldier_2_Arid_F;
    class U_B_GEN_Commander_F;
    class U_C_Uniform_Scientist_02_formal_F;
    class U_I_C_Soldier_Bandit_2_F;
    class Uniform_Base;
    class UniformItem;

    // Joram
    class CLASS(Custom_Davids_Helmet): H_PilotHelmetHeli_B {
        author = "GilleeDoo";
        scope = 2;
        displayName = "Heli Pilot Helmet Black 'Joram' Edition";
        hiddenSelectionsTextures[] = {QPATHTOF(data\custom_davids_helmet_co.paa)};
    };

    // Jay - Incomplete
    class U_C_E_LooterJacket_01_F;
    class CLASS(Custom_Fifright_Uniform): U_C_E_LooterJacket_01_F {
        author = "GilleeDoo";
        scope = 1;
        displayName = "FINISH ME";
        hiddenSelections[] = {"camo"};
        hiddenselectionsTextures[] = {QPATHTOF(data\custom_fifright_uniform_co.paa)};
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QCLASS(Custom_Fifright_Uniform_V);
            containerClass = "Supply40";
            mass = 20;
        };
    };

    // Rory
    class CLASS(Custom_Guldentops_Vest_KHK): milgp_v_marciras_medic_belt_khk {
        author = "GilleeDoo";
        scope = 2;
        displayName = "MarCiras Head Honcho 'RG' Edition + Belt (KHK)";
        hiddenSelections[] = {"camo", "camo1", "camo2", "camo3"};
        hiddenSelectionsTextures[] = {
            "milgp_vests\textures\v_marciras_khk_co.paa",
            "milgp_vests\textures\v_battle_belt_khk_co.paa",
            QPATHTOF(data\custom_guldentops_vest_khk_co.paa),
            "milgp_vests\textures\v_gear_02_co.paa"
        };
    };

    class CLASS(Custom_Guldentops_Vest_RGR): milgp_v_marciras_medic_belt_rgr {
        author = "GilleeDoo";
        scope = 2;
        displayName = "MarCiras Head Honcho 'RG' Edition + Belt (RGR)";
        hiddenSelections[] = {"camo", "camo1", "camo2", "camo3"};
        hiddenSelectionsTextures[] = {
            "milgp_vests\textures\v_marciras_rgr_co.paa",
            "milgp_vests\textures\v_battle_belt_rgr_co.paa",
            QPATHTOF(data\custom_guldentops_vest_rgr_co.paa),
            "milgp_vests\textures\v_gear_02_co.paa"
        };
    };

    // JJ
    class CLASS(Custom_James_Helmet): H_PilotHelmetHeli_B {
        author = "GilleeDoo";
        scope = 2;
        displayName = "Heli Pilot Helmet Black 'JJ' Edition";
        hiddenSelectionsTextures[] = {QPATHTOF(data\custom_james_helmet_co.paa)};
    };

    // Jack
    class CUP_H_C_Beret_01: ItemCore {
        class ItemInfo: HeadgearItem {
            class HitpointsProtectionInfo {
                class Head;
            };
        };
    };
    class CLASS(Custom_Laird_Bonnet): CUP_H_C_Beret_01 {
        author = "GilleeDoo";
        scope = 2;
        displayName = "Beret, True Freedom Edition";
        descriptionShort = "Fitted with a steel plate";
        hiddenSelectionsTextures[] = {QPATHTOF(data\custom_laird_bonnet_co.paa)};
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Head: Head {
                    armor = 10;
                };
            };
        };
    };

    class CLASS(Custom_Laird_Uniform): U_C_Uniform_Scientist_02_formal_F {
        author = "GilleeDoo";
        scope = 2;
        displayName = "Tee, Jeans (Sventa)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\custom_laird_uniform_co.paa)};
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QCLASS(Custom_Laird_Uniform_V);
            containerClass = "Supply40";
            mass = 20;
        };
    };

    // Mick
    class CLASS(Custom_Mathews_Uniform): U_I_C_Soldier_Bandit_2_F {
        author = "GilleeDoo";
        scope = 2;
        displayName = "Minotaur Uniform 'MM' Edition";
        picture = QPATHTOF(ui\custom_mathews_uniform_ca.paa);
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QCLASS(Custom_Mathews_Uniform_V);
            containerClass = "Supply40";
            mass = 40;
        };
    };

    // Matt
    class CLASS(Custom_McCarthy_Helmet): CUP_H_OpsCore_Covered_MCAM {
        author = "GilleeDoo";
        scope = 2;
        displayName = "OpsCore Covered 'MM' Edition (Multicam)";
        hiddenSelections[] = {"camo1", "camo2", "camo3", "flag"};
        hiddenSelectionsTextures[] = {
            "\cup\creatures\people\military\cup_creatures_people_military_extra\opscore\data\cup_ops_core_covered_mcam_co.paa",
            QPATHTOF(data\custom_mccarthy_helmet_co.paa),
            "\cup\creatures\people\military\cup_creatures_people_military_extra\opscore\data\cup_ops_core_parts_2_co.paa",
            ""
        };
    };

    // Ethan
    class CLASS(Custom_McQuade_Helmet): H_HelmetB_TI_arid_F {
        displayName = "Stealth Helmet, 'Ethan' Edition";
        scope = 2;
        hiddenSelectionsTextures[] = {QPATHTOF(data\custom_mcquade_helmet_co.paa)};
        picture = QPATHTOF(ui\custom_mcquade_helmet_ca.paa);
    };

    class CLASS(Custom_McQuade_SCARH_EGLM): CUP_arifle_Mk17_CQC_EGLM {
        author = "GilleeDoo";
        baseWeapon = QCLASS(Custom_McQuade_SCARH_EGLM);
        displayName = "SCAR-H CQC 'Ethan' Edition (EGLM)";
        hiddenSelections[] = {
            "Camo1",
            "Camo2",
            "Camo3"
        };
        hiddenSelectionsTextures[] = {
            "\CUP\Weapons\CUP_Weapons_SCAR\data\scar_h_co.paa",
            "\CUP\Weapons\CUP_Weapons_SCAR\data\scar_acc_co.paa",
            QPATHTOF(data\custom_mcquade_scarh_eglm_co.paa)
        };
    };

    // Ian
    class CLASS(Custom_Pierce_Handgun): hlc_pistol_Mk25TR {
        displayName = "SigSauer P226R Combat 'IP' Edition";
        magazines[]= {"hlc_12Rnd_357SIG_B_P226","hlc_12Rnd_357SIG_JHP_P226"};
        magazineWell[]= {"CBA_357SIG_P226"};
        baseWeapon = QCLASS(Custom_Pierce_Handgun);
        hiddenSelections[]= {
            "226Slides",
            "Sigframe_226Mk25",
            "Hogue_overmold",
            "SIGpistol_Common"
        };
        hiddenSelectionsTextures[]= {
            "hlc_wp_p226\tex\p226\226slides_co.paa",
            QPATHTOF(data\custom_pierce_handgun_co.paa),
            "hlc_wp_p226\tex\p226\226usgrip_co.paa",
            "hlc_wp_p226\tex\p226\common_co.paa"
        };
    };

    // Rambo
    class CLASS(Custom_Rambo_HK417): CUP_arifle_HK417_20 {
        author = "GilleeDoo";
        scope = 2;
        displayName = "HK417 DMR 'White Rambo' Edition";
        baseWeapon = QCLASS(Custom_Rambo_HK417);
        hiddenSelectionsTextures[] = {QPATHTOF(data\custom_rambo_hk417_co.paa)};
    };

    // Josh V
    class CLASS(Custom_Vee_Uniform): U_B_GEN_Commander_F {
        author = "GilleeDoo";
        scope = 2;
        displayName = "Kempton, 'Vee' Edition";
        hiddenSelections[]= {"camo"};
        hiddenSelectionsTextures[]= {QPATHTOF(data\custom_vee_uniform_co.paa)};
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QCLASS(Custom_Vee_Uniform_V);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class CLASS(Custom_Vee_HBAR): hlc_rifle_auga2lsw_b {
        author = "GilleeDoo";
        displayName = "Steyr AUGA2 HBAR 'Vee' Edition (Blue)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\custom_vee_hbar_co.paa)};
        baseWeapon = QCLASS(Custom_Vee_HBAR);
    };

    // Mike
    class CLASS(Custom_Woods_Vest): milgp_v_marciras_medic_belt_rgr {
        author = "GilleeDoo";
        scope = 2;
        displayName = "MarCiras 'War Daddy' Edition + Belt (RGR)";
        hiddenSelections[] = {"camo", "camo1", "camo2", "camo3"};
        hiddenSelectionsTextures[] = {
            "milgp_vests\textures\v_marciras_rgr_co.paa",
            "milgp_vests\textures\v_battle_belt_rgr_co.paa",
            QPATHTOF(data\custom_woods_vest_co.paa),
            "milgp_vests\textures\v_gear_02_co.paa"
        };
    };
    class CLASS(Custom_Woods_Uniform): U_B_CTRG_Soldier_2_Arid_F {
        author = "GilleeDoo";
        scope = 2;
        displayName = "Stealth Uniform 'CUP' Edition (Tee, Arid)";
        hiddenSelections[]= {"camo"};
        hiddenSelectionsTextures[]= {"\a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f_co.paa"};
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QCLASS(Custom_Woods_Uniform_V);
            containerClass = "Supply50";
            mass = 40;
        };
    };

    // Zak (Additional stuff inside Ammunition component)
    class CLASS(Custom_Zakharov_Handgun): hlc_Pistol_M11A1 {
        author = "Mike";
        scope = 2;
        displayName = "SigSauer M11 10th Legion Special";
        magazines[] = {QCLASS(10mm_Ball_Special)};
        magazineWell[] = {};
        baseWeapon = QCLASS(Custom_Zakharov_Handgun);
        hiddenSelections[] = {"228Slides", "Sigframe_228", "SIG_US_Grips228", "SIGpistol_Common"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\custom_zakharov_handgun_co.paa),
            "hlc_wp_p226\tex\p226\228m11a1_frame_co.paa",
            "hlc_wp_p226\tex\p226\228_grips_co.paa",
            "hlc_wp_p226\tex\p226\common_co.paa"
        };
        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {"ACPC2_Shot_SoundSet", "ACPC2_Tail_SoundSet", "ACPC2_InteriorTail_SoundSet"};
            };
            class SilencedSound: BaseSoundModeType {
                SoundSetShot[] = {"ACPC2_silencerShot_SoundSet", "ACPC2_silencerTail_SoundSet", "ACPC2_silencerInteriorTail_SoundSet"};
            };
        };
    };
};
