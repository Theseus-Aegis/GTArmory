class CfgWeapons {
    #include "CfgWeapons_Base.hpp"

    // Hide guns we already have.
    class sgun_AA40_F: Rifle_Short_Base_F {
        scope = 1;
    };
    class sgun_M4_F: Rifle_Short_Base_F {
        scope = 1;
    };
    class arifle_TRG20_black_F: arifle_TRG20_F {
        scope = 1;
    };
    class arifle_TRG21_black_F: arifle_TRG21_F {
        scope = 1;
    };
    class arifle_TRG21_GL_black_F: arifle_TRG21_GL_F {
        scope = 1;
    };
    class arifle_Mk20_black_F: arifle_Mk20_plain_F {
        scope = 1;
    };
    class arifle_Mk20C_black_F: arifle_Mk20C_plain_F {
        scope = 1;
    };
    class arifle_Mk20_GL_black_F: arifle_Mk20_GL_plain_F {
        scope = 1;
    };
    class srifle_EBR_blk_F: srifle_EBR_F {
        scope = 1;
    };

    // Conform to ACE realistic names.
    class arifle_Mk20_hex_F: arifle_Mk20_plain_F {
        displayName = "F2000 (Hex)";
    };
    class arifle_Mk20C_hex_F: arifle_Mk20C_plain_F {
        displayName = "F2000 Tactical (Hex)";
    };
    class arifle_Mk20_GL_hex_F: arifle_Mk20_GL_plain_F {
        displayName = "F2000 EGLM (Hex)";
    };
    class srifle_DMR_05_ghex_F: srifle_DMR_05_blk_F {
        displayName = "Cyrus (Green Hex)";
    };
    class srifle_DMR_02_tna_F: srifle_DMR_02_F {
        displayName = "Noreen ""Bad News"" ULR (Tropic)";
    };
    class srifle_DMR_01_black_F: srifle_DMR_01_F {
        displayName = "VS-121 (Black)";
    };
    class MMG_02_khaki_F: MMG_02_black_F {
        displayName = "LWMMG (Khaki)";
    };
    class SMG_01_black_F: SMG_01_F {
        displayName = "Vector SMG (Black)";
    };
    class SMG_01_khk_F: SMG_01_F {
        displayName = "Vector SMG (Khaki)";
    };
    class LMG_Zafir_black_F: LMG_Zafir_F {
        displayName = "Negev NG7 (Black)";
    };
    class LMG_Zafir_ghex_F: LMG_Zafir_F {
        displayName = "Negev NG7 (Green Hex)";
    };
    class srifle_EBR_cbr_F: srifle_EBR_F {
        displayName = "Mk14 Mod 1 EBR (Coyote)";
    };
    class srifle_EBR_khk_F: srifle_EBR_F {
        displayName = "Mk14 Mod 1 EBR (Khaki)";
    };
    class srifle_DMR_06_black_F: srifle_DMR_06_camo_F {
        displayName = "M14 (Black)";
    };
    class hgun_Pistol_heavy_01_black_F: hgun_Pistol_heavy_01_F {
        displayName = "FNX-45 Tactical (Black)";
    };
    class MMG_01_black_F: MMG_01_hex_F {
        displayName = "HK121 (Black)";
    };
    class MMG_01_ghex_F: MMG_01_hex_F {
        displayName = "HK121 (Green Hex)";
    };
    class LMG_03_khk_F: LMG_03_base_F {
        displayName = "FN Minimi SPW (Khaki)";
    };
    class LMG_03_snd_F: LMG_03_base_F {
        displayName = "FN Minimi SPW (Sand)";
    };
    class LMG_Mk200_khk_F: LMG_Mk200_F {
        displayName = "Stoner 99 LMG (Khaki)";
    };
    class LMG_Mk200_plain_F: LMG_Mk200_F {
        displayName = "Stoner 99 LMG (Sand)";
    };
};
