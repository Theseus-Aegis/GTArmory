class CfgVehicles {
    class Car;
    class Car_F: Car {
        class Turrets;
    };

    class tacs_Arcadian_Base: Car_F {
        class Turrets: Turrets {
            class MainTurret;
        };
    };

    class tacs_Arcadian_Armed_Base: tacs_Arcadian_Base {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {QCLASS(2000Rnd_65_EPR_Arcadian), QCLASS(1000Rnd_65_EPR_Arcadian)};
            };
        };
    };
};
