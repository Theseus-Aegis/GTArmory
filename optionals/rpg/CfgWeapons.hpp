class CfgWeapons {
    class Launcher_Base_F;

    // Vanilla RPG-7
    class launch_RPG7_F: Launcher_Base_F {
        class Single: Mode_SemiAuto {
            minRange = 50;
            minRangeProbab = 0.25;
            midRange = 300;
            midRangeProbab = 0.25;
            maxRange = 600;
            maxRangeProbab = 0.25;
            aiRateOfFire = 7;
            aiRateOfFireDistance = 250;
            aiRateOfFireDispersion = 7;
        };
    };

    // CUP RPG-7
    class CUP_launch_RPG7V: Launcher_Base_F {
        class Single: Mode_SemiAuto {
            minRange = 50;
            minRangeProbab = 0.25;
            midRange = 300;
            midRangeProbab = 0.25;
            maxRange = 600;
            maxRangeProbab = 0.25;
            aiRateOfFire = 7;
            aiRateOfFireDistance = 250;
            aiRateOfFireDispersion = 7;
        };
    };
};
