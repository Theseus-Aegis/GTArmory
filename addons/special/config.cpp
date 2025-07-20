#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(Custom_Fifright_Uniform_V),
            QCLASS(Custom_Laird_Uniform_V),
            QCLASS(Custom_Mathews_Uniform_V),
            QCLASS(Custom_McQuade_Backpack),
            QCLASS(Custom_Sarkozy_Uniform_V),
            QCLASS(Custom_Vee_Uniform_V),
            QCLASS(Custom_Woods_Uniform_V)
        };
        weapons[] = {
            QCLASS(Custom_Almeida_HK416),
            QCLASS(Custom_Davids_Helmet),
            QCLASS(Custom_Fifright_Uniform),
            QCLASS(Custom_Guldentops_Vest_KHK),
            QCLASS(Custom_Guldentops_Vest_RGR),
            QCLASS(Custom_James_Helmet),
            QCLASS(Custom_Krotzko_AUG),
            QCLASS(Custom_Laird_Bonnet),
            QCLASS(Custom_Laird_Uniform),
            QCLASS(Custom_Langston_Helmet),
            QCLASS(Custom_Langston_Helmet2),
            QCLASS(Custom_Mathews_Uniform),
            QCLASS(Custom_McCarthy_Helmet),
            QCLASS(Custom_McQuade_Helmet),
            QCLASS(Custom_McQuade_SCARH_EGLM),
            QCLASS(Custom_Pierce_Handgun),
            QCLASS(Custom_Rambo_HK417),
            QCLASS(Custom_Sarkozy_Uniform),
            QCLASS(Custom_Vee_HBAR),
            QCLASS(Custom_Vee_Uniform),
            QCLASS(Custom_Woods_Uniform),
            QCLASS(Custom_Woods_Vest),
            QCLASS(Custom_Zakharov_Handgun)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacgt_main",
            "tacgt_ammunition",
            "tacgt_theseus",
            "CUP_Creatures_People_LoadOrder",
            "CUP_Weapons_LoadOrder",
            "milgp_uniforms_cfg",
            "milgp_vests_cfg",
            "niaweapons_226",
            "hlcweapons_AUG",
            "RF_Data_Loadorder"
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"GilleeDoo", "Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class Mode_SemiAuto;

#include "CfgFaces.hpp"
#include "CfgGlasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
