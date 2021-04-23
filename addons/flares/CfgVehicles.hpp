class CfgVehicles {
    class ModuleFlareRed_F;
    class ModuleFlareGreen_F;
    class ModuleFlareWhite_F;
    class Logic;
    class Module_F: Logic {
        class ModuleDescription {
            class AnyPlayer;
        };
    };

    class ModuleFlare_F: Module_F {
        class Arguments {
            class Type {
                displayName="$STR_A3_CfgVehicles_ModuleSmoke_F_Arguments_Color_0";
                description="$STR_A3_CfgVehicles_ModuleSmoke_F_Arguments_Color_1";
                class values {
                    class White {
                        name="$STR_A3_CfgMagazines_UGL_FlareWhite_F_dns";
                        value="F_40mm_White";
                        default=1;
                    };
                    class Yellow {
                        name="$STR_A3_CfgMagazines_UGL_FlareYellow_F_dns";
                        value="F_40mm_Yellow";
                    };
                    class Green {
                        name="$STR_A3_CfgMagazines_UGL_FlareGreen_F_dns";
                        value="F_40mm_Green";
                    };
                    class Red {
                        name="$STR_A3_CfgMagazines_UGL_FlareRed_F_dns";
                        value="F_40mm_Red";
                    };
                    class CLASS(Star_Red) {
                        name = CSTRING(Star_Red_Name);
                        value = "CUP_F_40mm_Star_Red";
                    };
                    class CLASS(Star_White) {
                        name = CSTRING(Star_White_Name);
                        value = "CUP_F_40mm_Star_White";
                    };
                    class CLASS(Star_Green) {
                        name = CSTRING(Star_Green_Name);
                        value = "CUP_F_40mm_Star_Green";
                    };
                    class CLASS(Cluster_Red) {
                        name = CSTRING(Cluster_Red_Name);
                        value = "CUP_Sub_F_40mm_StarCluster_Red";
                    };
                    class CLASS(Cluster_White) {
                        name = CSTRING(Cluster_White_Name);
                        value = "CUP_Sub_F_40mm_StarCluster_White";
                    };
                    class CLASS(Cluster_Green) {
                        name = CSTRING(Cluster_Green_Name);
                        value = "CUP_Sub_F_40mm_StarCluster_Green";
                    };
                };
            };
        };
    };

    class CLASS(ModuleFlareStarRed): ModuleFlareRed_F {
        author = ECSTRING(main,Author);
        scope = 1;
        scopeCurator = 2;
        displayName = CSTRING(Star_Red_Name);
        ammo = "CUP_F_40mm_Star_Red";
    };
    class CLASS(ModuleFlareStarWhite): ModuleFlareWhite_F {
        author = ECSTRING(main,Author);
        scope = 1;
        scopeCurator = 2;
        displayName = CSTRING(Star_White_Name);
        ammo = "CUP_F_40mm_Star_White";
    };

    class CLASS(ModuleFlareStarGreen): ModuleFlareGreen_F {
        author = ECSTRING(main,Author);
        scope = 1;
        scopeCurator = 2;
        displayName = CSTRING(Star_Green_Name);
        ammo = "CUP_F_40mm_Star_Green";
    };

    class CLASS(ModuleFlareClusterRed): ModuleFlareRed_F {
        author = ECSTRING(main,Author);
        scope = 1;
        scopeCurator = 2;
        displayName = CSTRING(Cluster_Red_Name);
        ammo = "CUP_Sub_F_40mm_StarCluster_Red";
    };

    class CLASS(ModuleFlareClusterWhite): ModuleFlareWhite_F {
        author = ECSTRING(main,Author);
        scope = 1;
        scopeCurator = 2;
        displayName = CSTRING(Cluster_White_Name);
        ammo = "CUP_Sub_F_40mm_StarCluster_White";
    };

    class CLASS(ModuleFlareClusterGreen): ModuleFlareGreen_F {
        author = ECSTRING(main,Author);
        scope = 1;
        scopeCurator = 2;
        displayName = CSTRING(Cluster_Green_Name);
        ammo = "CUP_Sub_F_40mm_StarCluster_Green";
    };
};
