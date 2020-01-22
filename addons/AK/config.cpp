#include "cfgsoundset.hpp"

class CfgPatches {
    class GTA_Weapons_AK {
        name = "GTA_AK";
        units[] = { };
        weapons[] = { };
        requiredVersion = 0.1;
        requiredaddons[] = { "GTA" };
    };
        author[] = { "TyroneMF" };
        version = "0.1";
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

    class CUP_arifle_AK_Base: Rifle_Base_F { };
    class CUP_arifle_AKS_Base: CUP_arifle_AK_Base { };
    class CUP_arifle_AK107_Base: CUP_arifle_AK_Base { };

    class CUP_arifle_AKM: CUP_arifle_AK_Base {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
            soundSetShot[] = { "TAC_AKM_Shot_SoundSet", "TAC_AKM_tail_SoundSet" };
            };
        };
        class SilencedSound: BaseSoundModeType {
            soundSetShot[] = { "TAC_AKM_Silencer_SoundSet", "TAC_AKM_SilencerTail_SoundSet" };
            };
    class Burst: Mode_Burst {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
            soundSetShot[] = { "TAC_AKM_Shot_SoundSet", "TAC_AKM_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
            soundSetShot[] = { "TAC_AKM_Silencer_SoundSet", "TAC_AKM_SilencerTail_SoundSet" };
            };
        };
    class FullAuto: Mode_FullAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AKM_Shot_SoundSet", "TAC_AKM_tail_SoundSet"  };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AKM_Silencer_SoundSet", "TAC_AKM_SilencerTail_SoundSet" };
            };
        };
    };

    class CUP_arifle_AKS74U: CUP_arifle_AKS_Base {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            };
        };
        class Burst: Mode_Burst {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            };
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            }; 
        };
    };

    class CUP_arifle_AK47: CUP_arifle_AK_Base {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
            soundSetShot[] = { "TAC_AKM_Shot_SoundSet", "TAC_AKM_tail_SoundSet" };
            };
        };
        class SilencedSound: BaseSoundModeType {
            soundSetShot[] = { "TAC_AKM_Silencer_SoundSet", "TAC_AKM_SilencerTail_SoundSet" };
            };
    class Burst: Mode_Burst {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
            soundSetShot[] = { "TAC_AKM_Shot_SoundSet", "TAC_AKM_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
            soundSetShot[] = { "TAC_AKM_Silencer_SoundSet", "TAC_AKM_SilencerTail_SoundSet" };
            };
        };
    class FullAuto: Mode_FullAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AKM_Shot_SoundSet", "TAC_AKM_tail_SoundSet"  };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AKM_Silencer_SoundSet", "TAC_AKM_SilencerTail_SoundSet" };
            };
        };
    };

    class CUP_arifle_AKS: CUP_arifle_AKM {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            };
        };
        class Burst: Mode_Burst {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            };
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            }; 
        };
    };

    class CUP_arifle_AK74: CUP_arifle_AK_Base {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            };
        };
        class Burst: Mode_Burst {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            };
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            }; 
        };
    };

    class CUP_arifle_AK74_GL: CUP_arifle_AK_Base {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            };
        };
        class Burst: Mode_Burst {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            };
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            }; 
        };
    };

    class CUP_arifle_AKS74: CUP_arifle_AKS_Base {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            };
        };
        class Burst: Mode_Burst {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            };
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            }; 
        };
    };

    class CUP_arifle_AKS74_GL: CUP_arifle_AK74_GL {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            };
        };
        class Burst: Mode_Burst {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            };
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            }; 
        };
    };

    class CUP_arifle_AK74M: CUP_arifle_AK_Base {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            };
        };
        class Burst: Mode_Burst {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            };
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            }; 
        };
    };

    class CUP_arifle_AK107: CUP_arifle_AK107_Base {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            };
        };
        class Burst: Mode_Burst {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            };
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            }; 
        };
    };

    class CUP_arifle_AK74M_GL: CUP_arifle_AK_Base {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            };
        };
        class Burst: Mode_Burst {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            };
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            }; 
        };
    };

    class CUP_arifle_AK107_GL: CUP_arifle_AK107_Base {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            };
        };
        class Burst: Mode_Burst {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            };
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            }; 
        };
    };

    class CUP_arifle_AK102: CUP_arifle_AK_Base {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
            soundSetShot[] = { "TAC_AKM_Shot_SoundSet", "TAC_AKM_tail_SoundSet" };
            };
        };
        class SilencedSound: BaseSoundModeType {
            soundSetShot[] = { "TAC_AKM_Silencer_SoundSet", "TAC_AKM_SilencerTail_SoundSet" };
            };
    class Burst: Mode_Burst {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
            soundSetShot[] = { "TAC_AKM_Shot_SoundSet", "TAC_AKM_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
            soundSetShot[] = { "TAC_AKM_Silencer_SoundSet", "TAC_AKM_SilencerTail_SoundSet" };
            };
        };
    class FullAuto: Mode_FullAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AKM_Shot_SoundSet", "TAC_AKM_tail_SoundSet"  };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AKM_Silencer_SoundSet", "TAC_AKM_SilencerTail_SoundSet" };
            };
        };
    };

    class CUP_arifle_AK104: CUP_arifle_AK_Base {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
            soundSetShot[] = { "TAC_AKM_Shot_SoundSet", "TAC_AKM_tail_SoundSet" };
            };
        };
        class SilencedSound: BaseSoundModeType {
            soundSetShot[] = { "TAC_AKM_Silencer_SoundSet", "TAC_AKM_SilencerTail_SoundSet" };
            };
    class Burst: Mode_Burst {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
            soundSetShot[] = { "TAC_AKM_Shot_SoundSet", "TAC_AKM_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
            soundSetShot[] = { "TAC_AKM_Silencer_SoundSet", "TAC_AKM_SilencerTail_SoundSet" };
            };
        };
    class FullAuto: Mode_FullAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AKM_Shot_SoundSet", "TAC_AKM_tail_SoundSet"  };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AKM_Silencer_SoundSet", "TAC_AKM_SilencerTail_SoundSet" };
            };
        };
    };

    class CUP_arifle_AK105: CUP_arifle_AK_Base {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
            soundSetShot[] = { "TAC_AKM_Shot_SoundSet", "TAC_AKM_tail_SoundSet" };
            };
        };
        class SilencedSound: BaseSoundModeType {
            soundSetShot[] = { "TAC_AKM_Silencer_SoundSet", "TAC_AKM_SilencerTail_SoundSet" };
            };
    class Burst: Mode_Burst {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
            soundSetShot[] = { "TAC_AKM_Shot_SoundSet", "TAC_AKM_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
            soundSetShot[] = { "TAC_AKM_Silencer_SoundSet", "TAC_AKM_SilencerTail_SoundSet" };
            };
        };
    class FullAuto: Mode_FullAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AKM_Shot_SoundSet", "TAC_AKM_tail_SoundSet"  };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AKM_Silencer_SoundSet", "TAC_AKM_SilencerTail_SoundSet" };
            };
        };
    };

    class CUP_arifle_RPK74: CUP_arifle_AK_Base {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            };
        };
        class Burst: Mode_Burst {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            };
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Shot_SoundSet", "TAC_AK74U_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_AK74U_Silencer_SoundSet", "TAC_AK74U_SilencerTail_SoundSet" };
            }; 
        };
    };
};
