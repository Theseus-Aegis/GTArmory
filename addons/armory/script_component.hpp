#define COMPONENT armory
#define COMPONENT_BEAUTIFIED Armory
#include "\x\tacgt\addons\main\script_mod.hpp"
#include "\x\tacgt\addons\main\script_macros.hpp"

#define MACRO_SA80_SOUNDS \
    sounds[] = {"StandardSound", "SilencedSound"}; \
    class StandardSound { \
        soundSetShot[] = { \
            "Msbs65_01_Shot_SoundSet", \
            "Msbs65_01_Tail_SoundSet", \
            "Mx_Tail_Contact_SoundSet" \
        }; \
    }; \
    class SilencedSound { \
        soundSetShot[] = { \
            "Msbs65_01_Shot_Silencer_SoundSet", \
            "Msbs65_01_Tail_Int_Silencer_SoundSet" \
        }; \
    }
