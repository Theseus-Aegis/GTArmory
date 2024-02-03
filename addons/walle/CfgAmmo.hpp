class CfgAmmo {
    class B_12Gauge_Pellets_Submunition;
    class CLASS(Diffuser_Ammo): B_12Gauge_Pellets_Submunition {
        aiAmmoUsageFlags = 0; // Should prevent it from shooting at AI automatically.
        submunitionAmmo = "B_12Gauge_Pellets_Submunition";
        submunitionConeAngle = 0.22;
        submunitionConeAngleHorizontal = 0.22;
        submunitionConeType[] = {"poissondisccenter", 20};
    };
};
