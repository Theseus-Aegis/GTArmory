#define HEARING(CLASSNAME) \
    class CLASSNAME: ItemCore { \
        ace_hearing_protection = 0.75; \
        ace_hearing_lowerVolume = 0; \
    }

#define HEARING_PARENT(CLASSNAME,PARENT) \
    class CLASSNAME: PARENT { \
        ace_hearing_protection = 0.75; \
        ace_hearing_lowerVolume = 0; \
    }

class CfgWeapons {
    class ItemCore;

    #include "weapons\cup.hpp"
    #include "weapons\milgp.hpp"
    #include "weapons\ws.hpp"
};
