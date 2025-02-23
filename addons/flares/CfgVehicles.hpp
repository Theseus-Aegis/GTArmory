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
                        name = "Parachute Red";
                        value = "CUP_F_40mm_Star_Red";
                    };
                    class CLASS(Star_White) {
                        name = "Parachute White";
                        value = "CUP_F_40mm_Star_White";
                    };
                    class CLASS(Star_Green) {
                        name = "Parachute Green";
                        value = "CUP_F_40mm_Star_Green";
                    };
                    class CLASS(Cluster_Red) {
                        name = "Cluster Red";
                        value = "CUP_Sub_F_40mm_StarCluster_Red";
                    };
                    class CLASS(Cluster_White) {
                        name = "Cluster White";
                        value = "CUP_Sub_F_40mm_StarCluster_White";
                    };
                    class CLASS(Cluster_Green) {
                        name = "Cluster Green";
                        value = "CUP_Sub_F_40mm_StarCluster_Green";
                    };
                };
            };
        };
    };

    class CLASS(ModuleFlareStarRed): ModuleFlareRed_F {
        author = ECSTRING(main,Author);
        displayName = "Parachute Red";
        scope = 1;
        scopeCurator = 2;
        ammo = "CUP_F_40mm_Star_Red";
    };
    class CLASS(ModuleFlareStarWhite): ModuleFlareWhite_F {
        author = ECSTRING(main,Author);
        displayName = "Parachute White";
        scope = 1;
        scopeCurator = 2;
        ammo = "CUP_F_40mm_Star_White";
    };

    class CLASS(ModuleFlareStarGreen): ModuleFlareGreen_F {
        author = ECSTRING(main,Author);
        displayName = "Parachute Green";
        scope = 1;
        scopeCurator = 2;
        ammo = "CUP_F_40mm_Star_Green";
    };

    class CLASS(ModuleFlareClusterRed): ModuleFlareRed_F {
        author = ECSTRING(main,Author);
        displayName = "Cluster Red";
        scope = 1;
        scopeCurator = 2;
        ammo = "CUP_Sub_F_40mm_StarCluster_Red";
    };

    class CLASS(ModuleFlareClusterWhite): ModuleFlareWhite_F {
        author = ECSTRING(main,Author);
        displayName = "Cluster White";
        scope = 1;
        scopeCurator = 2;
        ammo = "CUP_Sub_F_40mm_StarCluster_White";
    };

    class CLASS(ModuleFlareClusterGreen): ModuleFlareGreen_F {
        author = ECSTRING(main,Author);
        displayName = "Cluster Green";
        scope = 1;
        scopeCurator = 2;
        ammo = "CUP_Sub_F_40mm_StarCluster_Green";
    };
};
