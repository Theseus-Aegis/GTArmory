#define COMPONENT ammunitionai
#define COMPONENT_BEAUTIFIED Ammunition AI
#include "\x\tacgt\addons\main\script_mod.hpp"
#include "\x\tacgt\addons\main\script_macros.hpp"

#define MACRO_TRACERS \
    model = "\A3\Weapons_f\Data\bullettracer\tracer_Red"; \
    tracerEndTime = 1; \
    tracerScale = 0.5; \
    tracerstartTime = 0.05;

#define MACRO_AI_MAGAZINE \
    scope = 1; \
    scopeArsenal = 1; \
    author = ECSTRING(main,Author); \
    descriptionShort = ""; \
    tracerEvery = 5;

#define MACRO_AI_MAGAZINE_HANDGUN \
    scope = 1; \
    scopeArsenal = 1; \
    author = ECSTRING(main,Author); \
    descriptionShort = ""; \
    lastRoundsTracer = 2;
