#define MACRO_PRIMARY \
    descriptionShort = "Laser/Light GT Edition"; \
    author = ECSTRING(main,Author); \
    scope = 2; \
    scopeArsenal = 2

#define MACRO_SECONDARY \
    scope = 1; \
    scopeArsenal = 1

#define MACRO_FLASHLIGHT \
    direction = "flash"; \
    position = "flash dir"; \
    ambient[] = {6, 9, 9}; \
    color[] = {185, 190, 199}; \
    coneFadeCoef = 80; \
    dayLight = 1; \
    flareMaxDistance = 150; \
    flareSize = 1; \
    innerAngle = 15; \
    intensity = 100; \
    outerAngle = 120; \
    size = 1; \
    useFlare = 1; \
    class Attenuation { \
        constant = 1; \
        hardLimitEnd = 120; \
        hardLimitStart = 70; \
        linear = 1; \
        quadratic = 0; \
        start = 0.1; \
    }; \
    scale [] = {0}

#define MACRO_FLASHLIGHT_NIARMS \
    direction = "flash dir"; \
    position = "flash"; \
    ambient[] = {6, 9, 9}; \
    color[] = {185, 190, 199}; \
    coneFadeCoef = 80; \
    dayLight = 1; \
    flareMaxDistance = 150; \
    flareSize = 1; \
    innerAngle = 15; \
    intensity = 100; \
    outerAngle = 120; \
    size = 1; \
    useFlare = 1; \
    class Attenuation { \
        constant = 1; \
        hardLimitEnd = 120; \
        hardLimitStart = 70; \
        linear = 1; \
        quadratic = 0; \
        start = 0.1; \
    }; \
    scale [] = {0}

#define MACRO_RED_FLASHLIGHT \
    ambient[] = {9, 9, 9}; \
    color[] = {175, 50, 36}; \
    coneFadeCoef = 5; \
    dayLight = 0; \
    direction = "flash"; \
    flareMaxDistance = 150; \
    flareSize = 1.5; \
    innerAngle = 18; \
    intensity = 17; \
    outerAngle = 100; \
    position = "flash dir"; \
    size = 1; \
    useFlare = 1; \
    class Attenuation { \
        constant = 1; \
        hardLimitEnd = 200; \
        hardLimitStart = 300; \
        linear = 1; \
        quadratic = 1; \
        start = 0; \
    }; \
    scale [] = {0}

#define MACRO_IR_LIGHT \
    color[] = {1, 1, 1}; \
    ambient[] = {1, 1, 1}; \
    size = 1; \
    innerAngle = 10; \
    outerAngle = 12; \
    position = "laser pos"; \
    direction = "laser dir"; \
    useFlare = 1; \
    flareSize = 1.4; \
    flareMaxDistance = 200; \
    coneFadeCoef = 6; \
    intensity = 50; \
    irLight = 1; \
    volumeShape = "a3\data_f\VolumeLightFlashlight.p3d"; \
    scale[] = {0.25, 0.25, 1}; \
    class Attenuation { \
        constant = 1; \
        linear = 0; \
        quadratic = 0.001; \
        start = 1; \
        hardLimitStart = 100; \
        hardLimitEnd = 120; \
    }

#define MACRO_IR_POINTER \
    RMBhint = "Laser Pointer"; \
    irLaserPos = "laser pos"; \
    irLaserEnd = "laser dir"; \
    irDistance = 5

#define MACRO_VISIBLE_POINTER \
    beamColor[] = {0, 0, 0}; \
    beamMaxLength = 50; \
    beamThickness = 0; \
    dotColor[] = {16384, 0, 0}; \
    irDistance = 5; \
    irDotSize = 0.025; \
    irLaserEnd = "laser dir"; \
    irLaserPos = "laser pos"; \
    isIR = 0
