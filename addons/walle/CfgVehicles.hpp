class CfgVehicles {
    class UGV_02_Demining_Base_F;
    class B_UGV_02_Demining_F: UGV_02_Demining_Base_F {
        class assembleInfo;
        class Turrets;
        class MainTurret;
        class PlateInfos;
        class Reflectors;
    };

    class CLASS(Wall_E): B_UGV_02_Demining_F {
        displayName = "Wall-E";
        enginePower = 50; // Roughly 10% more power.
        hiddenSelections[] = {
            "Camo_1",
            "Camo_2",
            "Camo_3"
        };
        // Partially complete texture, missing some final details.
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\ugv_walle_co.paa),
            "a3\soft_f_enoch\ugv_02\data\tracks_co.paa",
            "a3\soft_f_enoch\ugv_02\data\ugv2_mdf_ca.paa"
        };
        class assembleInfo: assembleInfo {
            dissasembleTo[] = {QCLASS(Wall_E_Backpack)};
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {QCLASS(Diffuser)}; // Removed Laser Designator
                magazines[] = {QCLASS(Diffuser_Magazine)}; // Removed slugs.
            };
        };
        class PlateInfos: PlateInfos {
            name = "PlateNumber";
            color[] = {0, 0, 0, 1};
            plateFont = "PuristaSemiBold";
            plateFormat = "WALL-E";
            plateLetters = "ABCDEFHIKLMOPRSTVXYZ";
        };
        class Reflectors: Reflectors {
            class Arm_Lamp {
                color[] = {185, 190, 199};
                ambient[] =  {5, 5, 5};
                intensity = 25;
                size = 1;
                innerAngle = 30;
                outerAngle = 90;
                coneFadeCoef = 5;
                position = "PiP1_pos";
                direction = "PiP1_dir";
                hitpoint = "cam_gunner";
                selection = "Light_Camera";
                useFlare = 1;
                flareSize = 4;
                flareMaxDistance = 150;
                dayLight = 0;
                blinking = 0;
                class Attenuation {
                    start = 1;
                    constant = 0;
                    linear = 0;
                    quadratic = 0.25;
                    hardLimitStart = 50;
                    hardLimitEnd = 120;
                };
            };
            class Arm_Lamp_Flare: Arm_Lamp {};
        };
    };

    class UGV_02_Demining_backpack_base_F;
    class B_UGV_02_Demining_backpack_F: UGV_02_Demining_backpack_base_F {
        class assembleInfo;
    };
    class CLASS(Wall_E_Backpack): B_UGV_02_Demining_backpack_F {
        displayName = "Wall-E";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\ugv_walle_co.paa)};
        class assembleInfo: assembleInfo {
            displayName = "Wall-E";
            assembleTo = QCLASS(Wall_E);
        };
    };
};
