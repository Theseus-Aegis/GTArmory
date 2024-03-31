class CfgWeapons {
    class CUP_arifle_HK417_20;
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

    // Ethan
    class CLASS(Ethan_Helmet): H_HelmetB_TI_arid_F {
        displayName = "Stealth Helmet, 'Ethan' Edition";
        scope = 2;
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\h_helmetb_ti_ethan_f_co.paa)
        };
    };

    // Ian
    class CLASS(Sig_P226R_Combat_IP_Edition): hlc_pistol_Mk25TR {
        displayName = "SigSauer P226R Combat 'IP' Edition";
        magazines[]= {"hlc_12Rnd_357SIG_B_P226","hlc_12Rnd_357SIG_JHP_P226"};
        magazineWell[]= {"CBA_357SIG_P226"};
        baseWeapon = QCLASS(Sig_P226R_Combat_IP_Edition);
        hiddenSelections[]= {
            "226Slides",
            "Sigframe_226Mk25",
            "Hogue_overmold",
            "SIGpistol_Common"
        };
        hiddenSelectionsTextures[]= {
            "hlc_wp_p226\tex\p226\226slides_co.paa",
            QPATHTOF(data\ip_p226r_frame_co.paa),
            "hlc_wp_p226\tex\p226\226usgrip_co.paa",
            "hlc_wp_p226\tex\p226\common_co.paa"
        };
    };

    // Jack
    class CUP_H_C_Beret_01: ItemCore {
        class ItemInfo: HeadgearItem {
            class HitpointsProtectionInfo {
                class Head;
            };
        };
    };
    class CLASS(Jack_Beret): CUP_H_C_Beret_01 {
        author = "GilleeDoo";
        scope = 2;
        displayName = "Beret, True Freedom Edition";
        descriptionShort = "Fitted with a steel plate";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\jack_beret_co.paa)
        };
        // Mythical head protection of an unknown origin..
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Head: Head {
                    armor = 10;
                };
            };
        };
    };

    class CLASS(Jack_Uniform): U_C_Uniform_Scientist_02_formal_F {
        author = "GilleeDoo";
        scope = 2;
        displayName = "Tee, Jeans (Sventa)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\scientist_02_1_sventa_co.paa)};
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QCLASS(JL_Uniform);
            containerClass = "Supply40";
            mass = 20;
        };
    };

    // JJ
    class CLASS(JJ_HeliPilot_Black): H_PilotHelmetHeli_B {
        author = "GilleeDoo";
        scope = 2;
        displayName = "Heli Pilot Helmet Black 'JJ' Edition";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\jj_heliPilot_black_co.paa)
        };
    };

    // Joram
    class CLASS(Joram_HeliPilot_Black): H_PilotHelmetHeli_B {
        author = "GilleeDoo";
        scope = 2;
        displayName = "Heli Pilot Helmet Black 'Joram' Edition";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\joram_heliPilot_black_co.paa)
        };
    };

    // Josh V
    class CLASS(JV_Uniform): U_B_GEN_Commander_F {
        author = "GilleeDoo";
        scope = 2;
        displayName = "Kempton, 'Vee' Edition";
        hiddenSelections[]= {"camo"};
        hiddenSelectionsTextures[]= {QPATHTOF(data\jv_kempton_uniform_co.paa)};
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QCLASS(JV_Uniform);
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class CLASS(AUGA2_HBAR_Vee_Blue): hlc_rifle_auga2lsw_b {
        author = "GilleeDoo";
        displayName = "Steyr AUGA2 HBAR 'Vee' Edition (Blue)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\steyr_aug_jv_co.paa)};
        baseWeapon = QCLASS(AUGA2_HBAR_Vee_Blue);
    };

    // Rory
    class CLASS(RG_marciras_hh_belt_khk): milgp_v_marciras_medic_belt_khk {
        author = "GilleeDoo";
        scope = 2;
        displayName = "MarCiras Head Honcho 'RG' Edition + Belt (KHK)";
        hiddenSelections[] = {"camo", "camo1", "camo2", "camo3"};
        hiddenSelectionsTextures[] = {
            "milgp_vests\textures\v_marciras_khk_co.paa",
            "milgp_vests\textures\v_battle_belt_khk_co.paa",
            QPATHTOF(data\rg_marciras_hh_belt_khk_co.paa),
            "milgp_vests\textures\v_gear_02_co.paa"
        };
    };

    class CLASS(RG_marciras_hh_belt_rgr): milgp_v_marciras_medic_belt_rgr {
        author = "GilleeDoo";
        scope = 2;
        displayName = "MarCiras Head Honcho 'RG' Edition + Belt (RGR)";
        hiddenSelections[] = {"camo", "camo1", "camo2", "camo3"};
        hiddenSelectionsTextures[] = {
            "milgp_vests\textures\v_marciras_rgr_co.paa",
            "milgp_vests\textures\v_battle_belt_rgr_co.paa",
            QPATHTOF(data\rg_marciras_hh_belt_rgr_co.paa),
            "milgp_vests\textures\v_gear_02_co.paa"
        };
    };

    // Matt
    class CLASS(MM_opscore_mcam): CUP_H_OpsCore_Covered_MCAM {
        author = "GilleeDoo";
        scope = 2;
        displayName = "OpsCore Covered 'MM' Edition (Multicam)";
        hiddenSelections[] = {"camo1", "camo2", "camo3", "flag"};
        hiddenSelectionsTextures[] = {
            "\cup\creatures\people\military\cup_creatures_people_military_extra\opscore\data\cup_ops_core_covered_mcam_co.paa",
            QPATHTOF(data\mm_opscore_mcam_co.paa),
            "\cup\creatures\people\military\cup_creatures_people_military_extra\opscore\data\cup_ops_core_parts_2_co.paa",
            ""
        };
    };

    // Mick
    class CLASS(MM_Minotaur_Uniform): U_I_C_Soldier_Bandit_2_F {
        author = "GilleeDoo";
        scope = 2;
        displayName = "Minotaur Uniform 'MM' Edition";
        picture = QPATHTOF(ui\mm_minotaur_uniform.paa);
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QCLASS(MM_Minotaur_Uniform);
            containerClass = "Supply40";
            mass = 40;
        };
    };

    // Mike
    class CLASS(MW_marciras_wd_belt_rgr): milgp_v_marciras_medic_belt_rgr {
        author = "GilleeDoo";
        scope = 2;
        displayName = "MarCiras 'War Daddy' Edition + Belt (RGR)";
        hiddenSelections[] = {"camo", "camo1", "camo2", "camo3"};
        hiddenSelectionsTextures[] = {
            "milgp_vests\textures\v_marciras_rgr_co.paa",
            "milgp_vests\textures\v_battle_belt_rgr_co.paa",
            QPATHTOF(data\mw_marciras_wd_belt_rgr_co.paa),
            "milgp_vests\textures\v_gear_02_co.paa"
        };
    };
    class CLASS(MW_stealth_tee): U_B_CTRG_Soldier_2_Arid_F {
        author = "GilleeDoo";
        scope = 2;
        displayName = "Stealth Uniform 'CUP' Edition (Tee, Arid)";
        hiddenSelections[]= {"camo"};
        hiddenSelectionsTextures[]= {"\a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_f_co.paa"};
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QCLASS(MW_Stealth_Uniform);
            containerClass = "Supply50";
            mass = 40;
        };
    };

    // Rambo
    class CLASS(Rambo_HK417DMR_White): CUP_arifle_HK417_20 {
        author = "GilleeDoo";
        scope = 2;
        displayName = "HK417 DMR 'White Rambo' Edition";
        baseWeapon = QCLASS(Rambo_HK417DMR_White);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\rambo_hk417_white_co.paa)
        };
    };

    // Zak (Additional stuff inside Ammunition component)
    class CLASS(M11A1_Special): hlc_Pistol_M11A1 {
        author = "Mike";
        scope = 2;
        displayName = "SigSauer M11 10th Legion Special";
        magazines[] = {QCLASS(10mm_Ball_Special)};
        magazineWell[] = {};
        baseWeapon = QCLASS(M11A1_Special);
        hiddenSelections[] = {"228Slides", "Sigframe_228", "SIG_US_Grips228", "SIGpistol_Common"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\228slides_zz_co.paa),
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
