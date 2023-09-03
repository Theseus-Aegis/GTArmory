class CfgRecoils {
    /*
        - Parameter muzzleOuter defines the possible area where the recoil would like to move the weapon's muzzle randomly at each shot.
        It is defined as ellipse with variables defining the:
            x = horizontal axis position (Kick Right)
            y = vertical axis position (Kick Up)
            a = horizontal magnitude (Kick Left)
            b = vertical magnitude (Kick Up/Down)
        (how far to the right, how high up, how much horizontal deviation, how much vertical deviation).

        - Parameter kickBack defines the minimum and maximum of random interval for backward force applied over the arms and torso for each fired shot.
        - Parameter temporary defines how much shake the weapon has when fired.
        - Parameter permanent defines how much your weapon climbs per shot.

        - Recoil Naming:

            Regular Rifles:
            Caliber_Long - 16-18"
            Caliber_Medium - 14-16"
            Caliber_Short - < 14"

            Foregrip or Grenade Launchers: Lessened horizontal recoil.
            Caliber_Long_FG
            Caliber_Medium_FG
            Caliber_Short_FG

            Bullpups: Lessened horizontal recoil, no FG variant, slightly better than FG for rifles.
            Caliber_Long_BP
            Caliber_Medium_BP
            Caliber_Short_BP

            LMGs: Different recoil patterns to make them more manageable, will be separated into Long/Medium.
            Caliber_Long_MG
            Caliber_Medium_MG
            Caliber_Short_MG
    */

    // 12G - Operate differently from regular rifles, the barrel is either short or long.
    class CLASS(12G_Long) {
        kickBack[] = {0.02, 0.04};
        muzzleOuter[] = {0.25, 0.75, 0.4, 0.4};
        permanent = 0.4;
        temporary = 0.025;
    };
    class CLASS(12G_Long_FG) {
        kickBack[] = {0.018, 0.038};
        muzzleOuter[] = {0.22, 0.7, 0.37, 0.37};
        permanent = 0.35;
        temporary = 0.02;
    };
    class CLASS(12G_Short) {
        kickBack[] = {0.025, 0.045};
        muzzleOuter[] = {0.28, 0.85, 0.44, 0.44};
        permanent = 0.44;
        temporary = 0.03;
    };
    class CLASS(12G_Short_FG) {
        kickBack[] = {0.023, 0.043};
        muzzleOuter[] = {0.25, 0.8, 0.41, 0.41};
        permanent = 0.39;
        temporary = 0.025;
    };

    // 6.5
    class CLASS(65_Long) {
        kickBack[] = {0.02, 0.04};
        muzzleOuter[] = {0.25, 0.6, 0.35, 0.3};
        permanent = 0.15;
        temporary = 0.015;
    };
    class CLASS(65_Medium) {
        kickBack[] = {0.025, 0.05};
        muzzleOuter[] = {0.28, 0.64, 0.38, 0.3};
        permanent = 0.15;
        temporary = 0.017;
    };
    class CLASS(65_Short) {
        kickBack[] = {0.03, 0.06};
        muzzleOuter[] = {0.31, 0.66, 0.41, 0.4};
        permanent = 0.15;
        temporary = 0.019;
    };

    class CLASS(65_Long_FG) {
        kickBack[] = {0.02, 0.04};
        muzzleOuter[] = {0.22, 0.55, 0.32, 0.3};
        permanent = 0.15;
        temporary = 0.013;
    };
    class CLASS(65_Medium_FG) {
        kickBack[] = {0.025, 0.05};
        muzzleOuter[] = {0.24, 0.59, 0.35, 0.3};
        permanent = 0.15;
        temporary = 0.015;
    };
    class CLASS(65_Short_FG) {
        kickBack[] = {0.03, 0.06};
        muzzleOuter[] = {0.26, 0.61, 0.38, 0.4};
        permanent = 0.15;
        temporary = 0.017;
    };

    class CLASS(65_Long_BP) {
        kickBack[] = {0.015, 0.035};
        muzzleOuter[] = {0.22, 0.6, 0.35, 0.3};
        permanent = 0.15;
        temporary = 0.014;
    };
    class CLASS(65_Medium_BP) {
        kickBack[] = {0.02, 0.04};
        muzzleOuter[] = {0.24, 0.64, 0.38, 0.4};
        permanent = 0.15;
        temporary = 0.016;
    };

    // 300WM
    class CLASS(300WM_Long) {
        kickBack[] = {0.3, 0.5};
        muzzleOuter[] = {0.46, 0.76, 0.5, 0.5};
        permanent = 0.2;
        temporary = 0.02;
    };

    // 338 Lapua
    class CLASS(338_Long) {
        kickBack[] = {0.33, 0.53};
        muzzleOuter[] = {0.5, 0.82, 0.55, 0.55};
        permanent = 0.22;
        temporary = 0.02;
    };

    // 5.45
    class CLASS(545_Long) {
        kickBack[] = {0.02, 0.04};
        muzzleOuter[] = {0.2, 0.45, 0.3, 0.3};
        permanent = 0.15;
        temporary = 0.015;
    };
    class CLASS(545_Medium) {
        kickBack[] = {0.025, 0.05};
        muzzleOuter[] = {0.23, 0.49, 0.36, 0.3};
        permanent = 0.15;
        temporary = 0.017;
    };
    class CLASS(545_Short) {
        kickBack[] = {0.03, 0.06};
        muzzleOuter[] = {0.26, 0.51, 0.39, 0.4};
        permanent = 0.15;
        temporary = 0.019;
    };

    class CLASS(545_Long_FG) {
        kickBack[] = {0.02, 0.04};
        muzzleOuter[] = {0.2, 0.44, 0.33, 0.3};
        permanent = 0.15;
        temporary = 0.013;
    };
    class CLASS(545_Medium_FG) {
        kickBack[] = {0.025, 0.05};
        muzzleOuter[] = {0.22, 0.48, 0.36, 0.3};
        permanent = 0.15;
        temporary = 0.015;
    };
    class CLASS(545_Short_FG) {
        kickBack[] = {0.03, 0.06};
        muzzleOuter[] = {0.24, 0.5, 0.39, 0.3};
        permanent =  0.15;
        temporary = 0.017;
    };

    class CLASS(545_Long_BP) {
        kickBack[] = {0.02, 0.04};
        muzzleOuter[] = {0.18, 0.4, 0.3, 0.3};
        permanent = 0.15;
        temporary = 0.013;
    };
    class CLASS(545_Short_BP) {
        kickBack[] = {0.03, 0.05};
        muzzleOuter[] = {0.22, 0.44, 0.33, 0.3};
        permanent = 0.15;
        temporary = 0.015;
    };

    // 5.56
    class CLASS(556_Long) {
        kickBack[] = {0.02, 0.04};
        muzzleOuter[] = {0.225, 0.525, 0.325, 0.3};
        permanent = 0.15;
        temporary = 0.015;
    };
    class CLASS(556_Medium) {
        kickBack[] = {0.025, 0.05};
        muzzleOuter[] = {0.255, 0.565, 0.37, 0.3};
        permanent = 0.15;
        temporary = 0.017;
    };
    class CLASS(556_Short) {
        kickBack[] = {0.03, 0.06};
        muzzleOuter[] = {0.285, 0.585, 0.4, 0.4};
        permanent = 0.15;
        temporary = 0.019;
    };

    class CLASS(556_Long_FG) {
        kickBack[] = {0.02, 0.04};
        muzzleOuter[] = {0.21, 0.495, 0.325, 0.3};
        permanent = 0.15;
        temporary = 0.013;
    };
    class CLASS(556_Medium_FG) {
        kickBack[] = {0.025, 0.05};
        muzzleOuter[] = {0.23, 0.535, 0.355, 0.3};
        permanent = 0.15;
        temporary = 0.015;
    };
    class CLASS(556_Short_FG) {
        kickBack[] = {0.03, 0.06};
        muzzleOuter[] = {0.025, 0.555, 0.385, 0.4};
        permanent = 0.15;
        temporary = 0.017;
    };

    class CLASS(556_Long_BP) {
        kickBack[] = {0.015, 0.035};
        muzzleOuter[] = {0.22, 0.6, 0.35, 0.3};
        permanent = 0.15;
        temporary = 0.014;
    };
    class CLASS(556_Medium_BP) {
        kickBack[] = {0.02, 0.04};
        muzzleOuter[] = {0.24, 0.64, 0.38, 0.4};
        permanent = 0.15;
        temporary = 0.016;
    };
    class CLASS(556_Short_BP) {
        kickBack[] = {0.025, 0.045};
        muzzleOuter[] = {0.26, 0.68, 0.41, 0.4};
        permanent = 0.15;
        temporary = 0.018;
    };

    class CLASS(556_Long_MG) {
        kickBack[] = {0.01, 0.03};
        muzzleOuter[] = {0.15, 0.36, 0.25, 0.25};
        permanent = 0.12;
        temporary = 0.01;
    };

    // 7.62 NATO
    class CLASS(762N_Long) {
        kickBack[] = {0.02, 0.04};
        muzzleOuter[] = {0.31, 0.7, 0.41, 0.3};
        permanent = 0.15;
        temporary = 0.015;
    };
    class CLASS(762N_Medium) {
        kickBack[] = {0.025, 0.05};
        muzzleOuter[] = {0.34, 0.74, 0.44, 0.3};
        permanent = 0.015;
        temporary = 0.017;
    };
    class CLASS(762N_Short) {
        kickBack[] = {0.03, 0.06};
        muzzleOuter[] = {0.37, 0.78, 0.47, 0.4};
        permanent = 0.015;
        temporary = 0.019;
    };

    class CLASS(762N_Long_FG) {
        kickBack[] = {0.02, 0.04};
        muzzleOuter[] = {0.28, 0.65, 0.38, 0.3};
        permanent = 0.15;
        temporary = 0.015;
    };
    class CLASS(762N_Medium_FG) {
        kickBack[] = {0.025, 0.05};
        muzzleOuter[] = {0.3, 0.69, 0.41, 0.3};
        permanent = 0.15;
        temporary = 0.017;
    };
    class CLASS(762N_Short_FG) {
        kickBack[] = {0.03, 0.06};
        muzzleOuter[] = {0.32, 0.73, 0.44, 0.4};
        permanent = 0.15;
        temporary = 0.019;
    };

    class CLASS(762N_Long_MG) {
        kickBack[] = {0.01, 0.03};
        muzzleOuter[] = {0.25, 0.45, 0.35, 0.35};
        permanent = 0.15;
        temporary = 0.015;
    };

    // 7.62 Russian
    class CLASS(762R_Long) {
        kickBack[] = {0.02, 0.04};
        muzzleOuter[] = {0.28, 0.65, 0.38, 0.3};
        permanent = 0.15;
        temporary = 0.015;
    };
    class CLASS(762R_Medium) {
        kickBack[] = {0.025, 0.05};
        muzzleOuter[] = {0.31, 0.69, 0.41, 0.3};
        permanent = 0.15;
        temporary = 0.017;
    };
    class CLASS(762R_Short) {
        kickBack[] = {0.03, 0.06};
        muzzleOuter[] = {0.34, 0.73, 0.43, 0.4};
        permanent = 0.15;
        temporary = 0.019;
    };

    class CLASS(762R_Long_FG) {
        kickBack[] = {0.02, 0.04};
        muzzleOuter[] = {0.25, 0.6, 0.35, 0.3};
        permanent = 0.15;
        temporary = 0.013;
    };
    class CLASS(762R_Medium_FG) {
        kickBack[] = {0.025, 0.05};
        muzzleOuter[] = {0.27, 0.64, 0.38, 0.3};
        permanent = 0.15;
        temporary = 0.015;
    };
    class CLASS(762R_Short_FG) {
        kickBack[] = {0.03, 0.06};
        muzzleOuter[] = {0.29, 0.68, 0.41, 0.4};
        permanent = 0.15;
        temporary = 0.017;
    };
};
