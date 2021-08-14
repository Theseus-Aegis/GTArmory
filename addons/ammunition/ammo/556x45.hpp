class CLASS(556x45_EPR_M855A1): B_556x45_Ball {
    hit = 10.28;
    airFriction = -0.0012744;
    caliber = 1.37;
    deflecting = 17;
    audibleFire = 20;
    ACE_caliber = 5.69;
    ACE_bulletLength = 23.012;
    ACE_bulletMass = 4.0176;
    ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
    ACE_ballisticCoefficients[] = {0.175};
    ACE_velocityBoundaries[] = {};
    ACE_standardAtmosphere = "ASM";
    ACE_dragModel = 1;
    ACE_muzzleVelocities[] = {723, 764, 796, 825, 843, 866, 878, 892, 906, 915, 922, 900};
    ACE_barrelLengths[] = {210.82, 238.76, 269.24, 299.72, 330.2, 360.68, 391.16, 419.1, 449.58, 480.06, 508.0, 609.6};
};

class CLASS(556x45_EPR_M856A1_Red): CLASS(556x45_EPR_M855A1) {
    model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
};
