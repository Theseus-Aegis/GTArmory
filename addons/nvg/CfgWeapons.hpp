#define MACRO_NVG_WP_PRESET \
    modelOptics = ""; \
    ace_nightvision_border = "z\ace\addons\nightvision\data\nvg_mask_quad_4096.paa"; \
    ace_nightvision_bluRadius = 0.13; \
    ace_nightvision_generation = 4; \
    ace_nightvision_colorPreset[] = {0.0, {0.0, 0.0, 0.0, 0.0}, {1.1, 0.8, 1.9, 0.9}, {1, 1, 6, 0.0}}

class CfgWeapons {
    class CUP_NVG_GPNVG_black;
    class CLASS(GPNVG_Black_WP): CUP_NVG_GPNVG_black {
        displayName = "GPNVG (Black, WP)";
        MACRO_NVG_WP_PRESET;
    };

    class CUP_NVG_GPNVG_green;
    class CLASS(GPNVG_Green_WP): CUP_NVG_GPNVG_green {
        displayName = "GPNVG (Green, WP)";
        MACRO_NVG_WP_PRESET;
    };

    class CUP_NVG_GPNVG_tan;
    class CLASS(GPNVG_Tan_WP): CUP_NVG_GPNVG_tan {
        displayName = "GPNVG (Tan, WP)";
        MACRO_NVG_WP_PRESET;
    };

    class CUP_NVG_GPNVG_winter;
    class CLASS(GPNVG_Winter_WP): CUP_NVG_GPNVG_winter {
        displayName = "GPNVG (Winter, WP)";
        MACRO_NVG_WP_PRESET;
    };
};
