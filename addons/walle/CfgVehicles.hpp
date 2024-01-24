class CfgVehicles {
    class UGV_02_Demining_Base_F;
    class B_UGV_02_Demining_F: UGV_02_Demining_Base_F {
        class assembleInfo;
        class Turrets;
        class MainTurret;
    };

    class CLASS(Wall_E): B_UGV_02_Demining_F {
        displayName = "Wall-E";
        enginePower = 50; // Roughly 10% more power.
        hiddenSelections[] = {
            "Camo_1",
            "Camo_2",
            "Camo_3"
        };
        hiddenSelectionsTextures[] = { // todo, new texture.
            "a3\soft_f_enoch\ugv_02\data\ugv_co.paa",
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
    };

    class UGV_02_Demining_backpack_base_F;
    class B_UGV_02_Demining_backpack_F: UGV_02_Demining_backpack_base_F {
        class assembleInfo;
    };
    class CLASS(Wall_E_Backpack): B_UGV_02_Demining_backpack_F {
        displayName = "Wall-E";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"a3\soft_f_enoch\ugv_02\data\ugv_co.paa"};
        class assembleInfo: assembleInfo {
            displayName = "Wall-E";
            assembleTo = QCLASS(Wall_E);
        };
    };
};
