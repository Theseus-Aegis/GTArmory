#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        magazines[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacgt_main",
            "tacgt_recoils",
            "CUP_weapons_ACR",
            "CUP_Weapons_AK",
            "CUP_Weapons_AK12",
            "CUP_Weapons_CZ805",
            "CUP_Weapons_Famas",
            "CUP_Weapons_FNFAL",
            "CUP_Weapons_G3",
            "CUP_Weapons_G36",
            "CUP_Weapons_Galil",
            "CUP_Weapons_GROZA",
            "CUP_Weapons_HK416",
            "CUP_Weapons_L129",
            "CUP_Weapons_L85",
            "CUP_Weapons_M1014",
            "CUP_Weapons_M110",
            "CUP_Weapons_M14",
            "CUP_Weapons_M16",
            "CUP_Weapons_Saiga12K",
            "CUP_Weapons_SCAR",
            "CUP_Weapons_SVD",
            "CUP_Weapons_X95",
        };
        author = ECSTRING(main,Authors);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

class CfgWeapons {
    // Multiple
    class Rifle_Base_F;
    class Tavor_base_F;
    class arifle_TRG20_F;
    class arifle_TRG21_F;

    // ACRs
    class CUP_arifle_ACR_Short_BASE_556;
    class CUP_arifle_ACR_EGLM_SHORT_BASE_556;
    class CUP_arifle_ACR_BASE_556;
    class CUP_arifle_ACR_DMR_BASE_556;
    class CUP_arifle_ACR_EGLM_BASE_556;
    class CUP_arifle_ACR_Short_BASE_68;
    class CUP_arifle_ACR_EGLM_SHORT_BASE_68;
    class CUP_arifle_ACR_BASE_68;
    class CUP_arifle_ACR_EGLM_BASE_68;
    class CUP_arifle_ACR_DMR_BASE_68;

    // AKs
    class CUP_arifle_AK_Base;
    class CUP_arifle_AKS_Base;
    class CUP_arifle_AK107_Base;

    // AUG
    class CUP_arifle_AUG_Base;

    // CZs
    class CUP_arifle_CZ805_Base;
    class CUP_CZ_BREN2_Base;
    class CUP_CZ_BREN2_GL_Base;
    class CUP_CZ_BREN2_762_Base;
    class CUP_CZ_BREN2_762_GL_Base;

    // FAMAS
    class CUP_Famas_Base;

    // X95
    class CUP_arifle_X95;
    class CUP_arifle_X95_Grippod;

    // G3
    class CUP_arifle_G3_Base;

    // G36
    class CUP_arifle_G36_Base_CarryhandleOptics;
    class CUP_arifle_G36_Base;

    // Galil
    class CUP_arifle_GALIL_BASE;

    // Groza
    class CUP_arifle_OTS14_GROZA_762_base;

    // HK416
    class CUP_arifle_HK416_145_Base;
    class CUP_arifle_HK416_11_Base;

    // HK417
    class CUP_arifle_HK417_Base;

    // L85
    class CUP_l85a2;
    class CUP_l85a2_ris_ng;
    class CUP_l85a2_ris;
    class CUP_l85a2_ugl;

    // M16
    class CUP_arifle_XM16E1;
    class CUP_arifle_M4_Base;
    class CUP_arifle_M16_Base;

    // M4
    class CUP_arifle_M4A1_BUIS_Base;

    // SCAR
    class CUP_arifle_SCAR_L_Base;
    class CUP_arifle_Mk17_Base;

    // M1014
    class CUP_sgun_M1014_base;

    #include "545\ak.hpp"
    #include "545\ak12.hpp"
    #include "556\acr.hpp"
    #include "556\ak.hpp"
    #include "556\ak19.hpp"
    #include "556\aug.hpp"
    #include "556\cz.hpp"
    #include "556\famas.hpp"
    #include "556\fort.hpp"
    #include "556\g36.hpp"
    #include "556\galil.hpp"
    #include "556\hk416.hpp"
    #include "556\l85.hpp"
    #include "556\m4.hpp"
    #include "556\m16.hpp"
    #include "556\m27.hpp"
    #include "556\mg36.hpp"
    #include "556\mk12.hpp"
    #include "556\mk18.hpp"
    #include "556\scar.hpp"
    #include "68\acr.hpp"
    #include "762R\ak.hpp"
    #include "762R\ak15.hpp"
    #include "762R\cz.hpp"
    #include "762R\groza.hpp"
    #include "762R\rpk.hpp"
    #include "762N\fal.hpp"
    #include "762N\g3.hpp"
    #include "762N\galil.hpp"
    #include "762N\gewehr.hpp"
    #include "762N\hk417.hpp"
    #include "762N\l129a1.hpp"
    #include "762N\m14.hpp"
    #include "762N\m110.hpp"
    #include "762N\romat.hpp"
    #include "762N\sa58.hpp"
    #include "762N\scar.hpp"
    #include "762N\stg.hpp"
    #include "762_54\svd.hpp"
    #include "12G\m1014.hpp"
    #include "12G\saiga12.hpp"
};
