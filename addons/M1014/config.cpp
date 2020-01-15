#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches {
    class CUP_Weapons_M1014 {
        name = "TAC_M1014";
        units[] = { };
        weapons[] = { "CUP_sgun_M1014", "CUP_sgun_M1014_solidstock", "CUP_sgun_M1014_vfg", "CUP_sgun_M1014_Entry", "CUP_sgun_M1014_Entry_vfg" };
		requiredVersion=0.1;
        requiredaddons[] = {"TACR"};
    };
        author[] = {"TyroneMF"};
        version = "0.1";
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class asdg_FrontSideRail;
class CUP_PicatinnyTopShortMount;

class CfgWeapons {
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class CUP_sgun_M1014_base: Rifle_Base_F
	{
		dlc="CUP_Weapons";
		scope=1;
		model="CUP\Weapons\CUP_Weapons_M1014\CUP_benelli_m1014";
		picture="\CUP\Weapons\CUP_Weapons_M1014\data\ui\gear_M1014_X_ca.paa";
		magazines[]= { "CUP_8Rnd_B_Beneli_74Slug", "CUP_8Rnd_B_Beneli_74Pellets", "CUP_6Rnd_B_Beneli_74Pellets", "CUP_6Rnd_B_Benelli_74Slug" };
		magazineWell[]= { "CBA_12g_8rnds", "CBA_12g_6rnds" };
		hiddenSelections[]= { "CamoBody", "CamoBarrel", "CamoStock" };
		hiddenSelectionsTextures[]= { "CUP\Weapons\CUP_Weapons_M1014\data\benelli_m1014_body_co.paa", "CUP\Weapons\CUP_Weapons_M1014\data\benelli_m1014_barrel_co.paa", "CUP\Weapons\CUP_Weapons_M1014\data\benelli_m1014_stock_co.paa" };
		inertia=0.5;
		aimTransitionSpeed=0.89999998;
		bullet1[]= { "a3\sounds_f\weapons\Shells\shotgun\metal_shotgun_01",0.50118721,1,15 };
		bullet2[]= { "A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_02", 0.50118721,1,15 };
		bullet3[]= { "A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_03",0.50118721,1,15 };
		bullet4[]= { "A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_04", 0.50118721,1,15 };
		bullet5[]= { "A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_01",0.39810717,1,15 };
		bullet6[]= { "A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_02",0.39810717,1,15 };
		bullet7[]= { "A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_03", 0.39810717,1,15 };
		bullet8[]= { "A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_04",0.39810717,1,15 };
		bullet9[]= { "A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_01",0.2238721,1,15 };
		bullet10[]= { "A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_02",0.2238721,1,15 };
		bullet11[]= { "A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_03",0.2238721,1,15 };
		bullet12[]= { "A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_04",0.2238721,1,15 };
		soundBullet[]={ "bullet1",0.082999997, "bullet2",0.082999997, "bullet3",0.082999997, "bullet4",0.082999997, "bullet5",0.082999997, "bullet6",0.082999997, "bullet7",0.082999997, "bullet8",0.082999997, "bullet9",0.082999997, "bullet10",0.082999997, "bullet11",0.082999997, "bullet12",0.082999997 };
		reloadMagazineSound[]= { "CUP\Weapons\CUP_Weapons_M1014\data\sfx\Reload_6Rnd",1,1,35 };
		drySound[]= { "CUP\Weapons\CUP_Weapons_M1014\data\sfx\Dry",1,1,35 };
		optics=1;
		modelOptics="-";
		selectionFireAnim="zasleh";
		reloadAction="CUP_GestureReloadM1014_1Rnd";
		recoil="Recoil_M1014";
		modes[]= { "Single", "Single_close", "Single_far" };
		distanceZoomMin=50;
		distanceZoomMax=50;
		fireSpreadAngle=0.94999999;
		cursor="sgun";
		ACE_twistDirection=0;
		ACE_barrelTwist=0;
		ACE_barrelLength=469.89999;
		discreteDistance[]={100};
		maxZeroing=400;
		class Single: Mode_SemiAuto {
            class BaseSoundModeType {
			};
			class StandardSound: BaseSoundModeType {
                soundSetShot[]= { "TAC_sgun_M1014_Shot_SoundSet", "TAC_sgun_M1014_tail_SoundSet" };
            };
			class SilencedSound: BaseSoundModeType {
				soundSetShot[]= { "TAC_sgun_M1014_Shot_SoundSet", "TAC_sgun_M1014_tail_SoundSet" };
			};
			dispersion=0.003;
			soundContinuous=0;
			reloadTime=0;
			magazineReloadTime=6;
			aiRateOfFire=1;
			aiRateOfFireDistance=20;
			minRange=0;
			minRangeProbab=0.1;
			midRange=10;
			midRangeProbab=0.80000001;
			maxRange=50;
			maxRangeProbab=0.15000001;
		};
		class Single_close: Single
		{
			showToPlayer=0;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
			minRange=50;
			minRangeProbab=0.1;
			midRange=170;
			midRangeProbab=0.80000001;
			maxRange=250;
			maxRangeProbab=0.15000001;
		};
		class Single_far: Single_close
		{
			aiRateOfFire=4;
			aiRateOfFireDistance=300;
			minRange=220;
			minRangeProbab=0.1;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.15000001;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=84.199997;
			class MuzzleSlot
			{
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPinpoint="center";
				iconPosition[]={0.252,0.55900002};
				iconScale=0.20999999;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
			};
			class CowsSlot: CUP_PicatinnyTopShortMount
			{
				iconPinpoint="center";
				iconPosition[]={0.49599999,0.33199999};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
			};
		};
	};
};