#define COMPONENT misc
#define COMPONENT_BEAUTIFIED Misc
#include "\x\tacgt\addons\main\script_mod.hpp"
#include "\x\tacgt\addons\main\script_macros.hpp"

#define BOAT_UPGRADE_MACRO \
        ace_cargo_space = 1; \
        ace_cargo_hasCargo = 1; \
        ace_cargo_size = 4; \
        ace_cargo_canLoad = 1; \
        ace_dragging_canDrag = 1; \
        ace_dragging_dragPosition[] = {0, 3, 0}; \
        ace_dragging_dragDirection = 90; \
        armor = 15; \
        armorStructural = 1.8; \
        enginePower = 40; \
        maxSpeed = 55;
