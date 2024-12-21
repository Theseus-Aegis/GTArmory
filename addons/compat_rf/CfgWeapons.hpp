class CfgWeapons {
    class launch_PSRL1_base_RF;
    class launch_PSRL1_PWS_base_RF: launch_PSRL1_base_RF {
        class OpticsModes {
            class PWS {
                visionMode[] = {"Normal", "NVG"}; // Remove TI
            };
        };
    };
};
