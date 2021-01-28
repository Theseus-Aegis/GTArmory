#define COMPONENT rpg
#define COMPONENT_BEAUTIFIED RPG
#include "\x\tacgt\addons\main\script_mod.hpp"
#include "\x\tacgt\addons\main\script_macros.hpp"

#define MACRO_RPG_AMMO \
    aiAmmoUsageFlags = "64 + 128 + 256 + 512"; \
    airLock = 1; \
    allowAgainstInfantry = 1; \
    cost = 30;
