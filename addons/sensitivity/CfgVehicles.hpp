#define MACRO_SENSITIVITY sensitivity = 5;

class CfgVehicles {
    // Base Classes
    class Civilian_F;
    class Land;
    class SoldierWB;
    class SoldierEB;
    class SoldierGB;

    class Man: Land {
        MACRO_SENSITIVITY
    };

    // TAC - Units
    #include "units\tacu_units.hpp"

    // CUP Units
    #include "units\cup\acr.hpp"
    #include "units\cup\baf.hpp"
    #include "units\cup\cdf.hpp"
    #include "units\cup\chedaki.hpp"
    #include "units\cup\civilians.hpp"
    #include "units\cup\germany.hpp"
    #include "units\cup\hil.hpp"
    #include "units\cup\napa.hpp"
    #include "units\cup\pmc.hpp"
    #include "units\cup\racs.hpp"
    #include "units\cup\russia.hpp"
    #include "units\cup\sla.hpp"
    #include "units\cup\taki.hpp"
    #include "units\cup\takiinsurgents.hpp"
    #include "units\cup\usarmy.hpp"
    #include "units\cup\usmc.hpp"
};
