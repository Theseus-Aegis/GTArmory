class CfgWeapons {
    class Launcher_Base_F;
    // Vanilla RPG-7
    class launch_RPG7_F: Launcher_Base_F {
        class Single: Mode_SemiAuto {
            minRange = 50;
            minRangeProbab = 0.50;
            midRange = 500;
            midRangeProbab = 0.40;
            maxRange = 800;
            maxRangeProbab = 0.30;
            aiRateOfFire = 7;
            aiRateOfFireDistance = 250;
            aiRateOfFireDispersion = 7;
        };
    };

    // CUP RPG-7
    class CUP_launch_RPG7V: Launcher_Base_F {
        class Single: Mode_SemiAuto {
            minRange = 50;
            minRangeProbab = 0.50;
            midRange = 500;
            midRangeProbab = 0.40;
            maxRange = 800;
            maxRangeProbab = 0.30;
            aiRateOfFire = 7;
            aiRateOfFireDistance = 250;
            aiRateOfFireDispersion = 7;
        };
    };
};
