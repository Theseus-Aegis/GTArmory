#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches {
    class CUP_Weapons_Saiga12k {
        name = "GTA_Saiga12k";
        units[] = { };
        weapons[] = { "CUP_sgun_Saiga12K", "CUP_sgun_Saiga12K_top_rail" };
        requiredVersion = 0.1;
        requiredAddons[] = { "GTA" };
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CUP_DovetailMount;
class CUP_EastMuzzleSlot9mm;
class CUP_PicatinnyTopShortMount;

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class CUP_sgun_Saiga12K: Rifle_Base_F {
        author="$STR_CUP_AUTHOR_STRING";
        dlc="CUP_Weapons";
        scope = 2;
        model = "CUP\Weapons\CUP_Weapons_Saiga12K\CUP_saiga12k.p3d";
        picture = "\CUP\Weapons\CUP_Weapons_Saiga12K\data\ui\gear_saiga12k_X_ca.paa";
        handAnim[] = { "OFP2_ManSkeleton", "CUP\Weapons\CUP_Weapons_Saiga12K\data\anim\Saiga12K_new.rtm" };
        magazines[] = { "CUP_8Rnd_B_Saiga12_74Slug_M", "CUP_8Rnd_B_Saiga12_74Pellets_M", "CUP_20Rnd_B_Saiga12_74Slug_M", "CUP_20Rnd_B_Saiga12_74Pellets_M" };
        magazineWell[] = { "CBA_12g_SAIGA", "CBA_12g_SAIGA_XL" };
        drySound[] = { "CUP\Weapons\CUP_Weapons_Saiga12k\data\sfx\Dry",1,1,35 };
        optics = 1;
        modelOptics = "-";
        displayname = "$STR_CUP_dn_saiga12k";
        modes[] = { "Single", "Single_close", "Single_far" };
        distanceZoomMin = 50;
        distanceZoomMax = 50;
        ACE_barrelTwist = 0;
        ACE_twistDirection = 0;
        ACE_barrelLength = 429.26001;
        initSpeed = -1;
        reloadAction = "CUP_GestureReloadAK";
        recoil = "Recoil_CUP_Saiga12K";
        magazineReloadSwitchPhase = 0.15384001;
        fireSpreadAngle = 0.94999999;
        cursor = "sgun";
        class Single: Mode_SemiAuto {
        class BaseSoundModeType { };
            sounds[] = { "StandardSound", "SilencedSound" };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_sgun_Saiga12_Shot_SoundSet", "TAC_sgun_Saiga12_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_sgun_Saiga12_Shot_SoundSet", "TAC_sgun_Saiga12_tail_SoundSet" };
            };
            dispersion = 0.003;
            soundContinuous = 0;
            reloadTime = 0;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 20;
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 10;
            midRangeProbab = 0.80000001;
            maxRange = 50;
            maxRangeProbab = 0.15000001;
        };
        class Single_close: Single {
            showToPlayer = 0;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
            minRange = 50;
            minRangeProbab = 0.1;
            midRange = 170;
            midRangeProbab = 0.80000001;
            maxRange = 250;
            maxRangeProbab = 0.15000001;
        };
        class Single_far: Single_close {
            aiRateOfFire = 4;
            aiRateOfFireDistance = 300;
            minRange = 220;
            minRangeProbab = 0.1;
            midRange = 250;
            midRangeProbab = 0.69999999;
            maxRange = 350;
            maxRangeProbab = 0.15000001;
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 77.099998;
            class CUP_DovetailMount_Saiga12k: CUP_DovetailMount {
                iconPinpoint = "center";
                iconPosition[] = { 0.588,0.227 };
                iconScale = 0.1;
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
            };
            class CowsSlot: CowsSlot {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = { };
            };
            class PointerSlot: PointerSlot {
                linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                compatibleItems[] = { };
            };
        };
        aimTransitionSpeed = 0.89999998;
    };
};