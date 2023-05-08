class CfgVehicles {
    // Portable Lights (Single & Double)
    class Lamps_base_F;
    class Land_PortableLight_single_F: Lamps_base_F {
        class Reflectors {
            class Light_1 {
                position = "Light_1_pos";
                direction = "Light_1_dir";
                hitpoint = "Light_1_hitpoint";
                selection = "Light_1_hide";
                color[] = {185, 190, 199};
                ambient[] =  {5, 5, 5};
                size = 1;
                innerAngle = 30;
                outerAngle = 180;
                coneFadeCoef = 5;
                intensity = 50;
                useFlare = 1;
                dayLight = 0;
                flareSize = 1;
                flareMaxDistance = 600;
                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 0;
                    quadratic = 0.25;
                    hardLimitStart = 50;
                    hardLimitEnd = 120;
                };
            };
        };
    };
    class Land_PortableLight_double_F: Land_PortableLight_single_F {};
};
