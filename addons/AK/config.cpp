#include "script_component.hpp"

#include "\x\tacgt\addons\common\ak_soundshader.hpp"

class CfgPatches {
    class TACGT_Weapons_AK {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredaddons[] = {"TACGT", "TACGT_Common"};
        VERSION_CONFIG;
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons {

    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo;
        class GunParticles;
    };

    class CUP_arifle_AK_Base: Rifle_Base_F {};
    class CUP_arifle_AKS_Base: CUP_arifle_AK_Base {};
    class CUP_arifle_AK107_Base: CUP_arifle_AK_Base {};

    class CUP_arifle_AKM: CUP_arifle_AK_Base {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
            soundSetShot[] = {AKM_SOUND_SET};
            };
        };
    class Burst: Mode_Burst {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
            soundSetShot[] = {AKM_SOUND_SET};
            };
        };
    class FullAuto: Mode_FullAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AKM_SOUND_SET};
            };
        };
    };

    class CUP_arifle_AKS74U: CUP_arifle_AKS_Base {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
        class Burst: Mode_Burst {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            }; 
        };
    };

    class CUP_arifle_AK47: CUP_arifle_AK_Base {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
            soundSetShot[] = {AKM_SOUND_SET};
            };
        };
    class Burst: Mode_Burst {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
            soundSetShot[] = {AKM_SOUND_SET};
            };
        };
    class FullAuto: Mode_FullAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AKM_SOUND_SET };
            };
        };
    };

    class CUP_arifle_AKS: CUP_arifle_AKM {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
        class Burst: Mode_Burst {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
    };

    class CUP_arifle_AK74: CUP_arifle_AK_Base {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
        class Burst: Mode_Burst {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
    };

    class CUP_arifle_AK74_GL: CUP_arifle_AK_Base {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
        class Burst: Mode_Burst {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
    };

    class CUP_arifle_AKS74: CUP_arifle_AKS_Base {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
        class Burst: Mode_Burst {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
    };

    class CUP_arifle_AKS74_GL: CUP_arifle_AK74_GL {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
        class Burst: Mode_Burst {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
    };

    class CUP_arifle_AK74M: CUP_arifle_AK_Base {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
        class Burst: Mode_Burst {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
    };

    class CUP_arifle_AK107: CUP_arifle_AK107_Base {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
        class Burst: Mode_Burst {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
    };

    class CUP_arifle_AK74M_GL: CUP_arifle_AK_Base {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
        class Burst: Mode_Burst {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
    };

    class CUP_arifle_AK107_GL: CUP_arifle_AK107_Base {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
        class Burst: Mode_Burst {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
    };

    class CUP_arifle_AK102: CUP_arifle_AK_Base {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
            soundSetShot[] = {AKM_SOUND_SET};
            };
        };
    class Burst: Mode_Burst {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
            soundSetShot[] = {AKM_SOUND_SET};
            };
        };
    class FullAuto: Mode_FullAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AKM_SOUND_SET };
            };
        };
    };

    class CUP_arifle_AK104: CUP_arifle_AK_Base {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
            soundSetShot[] = {AKM_SOUND_SET};
            };
        };
    class Burst: Mode_Burst {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
            soundSetShot[] = {AKM_SOUND_SET};
            };
        };
    class FullAuto: Mode_FullAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AKM_SOUND_SET };
            };
        };
    };

    class CUP_arifle_AK105: CUP_arifle_AK_Base {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
            soundSetShot[] = {AKM_SOUND_SET};
            };
        };
    class Burst: Mode_Burst {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
            soundSetShot[] = {AKM_SOUND_SET};
            };
        };
    class FullAuto: Mode_FullAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AKM_SOUND_SET };
            };
        };
    };

    class CUP_arifle_RPK74: CUP_arifle_AK_Base {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
        class Burst: Mode_Burst {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            };
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {AK74_SOUND_SET};
            }; 
        };
    };
};
