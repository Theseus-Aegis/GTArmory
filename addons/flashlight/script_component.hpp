#define COMPONENT flashlight
#define COMPONENT_BEAUTIFIED Flashlight
#include "\x\tacgt\addons\main\script_mod.hpp"
#include "\x\tacgt\addons\main\script_macros.hpp"

#define MACRO_MULTI_1 \
    descriptionShort = CSTRING(Multi_Description); \
    author = CSTRING(Author); \
    scope = 2; \
    scopeArsenal = 2;

#define MACRO_MULTI_2 \
    descriptionShort = CSTRING(Multi_Description); \
    author = CSTRING(Author); \
    scope = 1; \
    scopeArsenal = 1;

#define MACRO_HI_FLASHLIGHT_SETTINGS \
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
    scale [] = {0};

#define MACRO_LOW_FLASHLIGHT_SETTINGS \
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
    scale [] = {0};

#define MACRO_IR_POINTER_SETTINGS \
    RMBhint = "Laser Pointer"; \
    irLaserPos = "laser pos"; \
    irLaserEnd = "laser dir"; \
    irDistance = 5;

#define MACRO_VIS_POINTER_SETTINGS \
    color[] = {0, 0, 0}; \
    ambient[] = {0, 0, 0}; \
    intensity = 0; \
    size = 0; \
    innerAngle = 0; \
    outerAngle = 0; \
    coneFadeCoef = 0; \
    position = "flash dir"; \
    direction = "flash"; \
    useFlare = 0; \
    flareSize = 0; \
    flareMaxDistance = 0; \
    dayLight = 0; \
    class Attenuation { \
        start = 0; \
        constant = 0; \
        linear = 0; \
        quadratic = 0; \
        hardLimitStart = 0; \
        hardLimitEnd = 0; \
    }; \
    scale [] = {0};
