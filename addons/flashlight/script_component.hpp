#define COMPONENT flashlight
#define COMPONENT_BEAUTIFIED Flashlight
#include "\x\tacgt\addons\main\script_mod.hpp"
#include "\x\tacgt\addons\main\script_macros.hpp"

#define MACRO_PRIMARY \
    descriptionShort = "Laser/Light GT Edition"; \
    author = ECSTRING(main,Author); \
    scope = 2; \
    scopeArsenal = 2

#define MACRO_SECONDARY \
    scope = 1; \
    scopeArsenal = 1

#define MACRO_FLASHLIGHT \
    color[] = {185, 190, 199}; \
    ambient[] = {6, 9, 9}; \
    intensity = 100; \
    size = 1; \
    innerAngle = 18; \
    outerAngle = 150; \
    coneFadeCoef = 8; \
    position = "flash dir"; \
    direction = "flash"; \
    useFlare = 1; \
    flareSize = 1.5; \
    flareMaxDistance = 300; \
    dayLight = 0; \
    class Attenuation { \
        start = 0; \
        constant = 1; \
        linear = 1; \
        quadratic = 1; \
        hardLimitStart = 200; \
        hardLimitEnd = 300; \
    }; \
    scale [] = {0}

#define MACRO_RED_FLASHLIGHT \
    color[] = {175, 50, 36}; \
    ambient[] = {9, 9, 9}; \
    intensity = 17; \
    size = 1; \
    innerAngle = 18; \
    outerAngle = 100; \
    coneFadeCoef = 5; \
    position = "flash dir"; \
    direction = "flash"; \
    useFlare = 1; \
    flareSize = 1.5; \
    flareMaxDistance = 150; \
    dayLight = 0; \
    class Attenuation { \
        start = 0; \
        constant = 1; \
        linear = 1; \
        quadratic = 1; \
        hardLimitStart = 200; \
        hardLimitEnd = 300; \
    }; \
    scale [] = {0}

#define MACRO_IR_POINTER \
    RMBhint = "Laser Pointer"; \
    irLaserPos = "laser pos"; \
    irLaserEnd = "laser dir"; \
    irDistance = 5

#define MACRO_VISIBLE_POINTER \
    irDistance = 5; \
    irLaserEnd = "laser dir"; \
    irLaserPos = "laser pos"; \
    isIR = 0; \
    irDotSize = 0.1; \
    beamThickness = 0; \
    beamMaxLength = 1000; \
    beamColor[] = {0, 0, 0}; \
    dotColor[] = {0, 10000, 0}
