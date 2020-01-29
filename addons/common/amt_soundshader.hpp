class CfgSoundShaders {
	class sg510_Closure_SoundShader {
		samples[] = {{"hlc_wp_sigamt\snd\soundshaders\amt_first", 1}};
		range = 15;
		volume = 0.7;
		rangeCurve[] = {{0, 1},{15, 0}};
	};
	class sg510_closeShot_SoundShader {
		samples[] = {{"hlc_wp_sigamt\snd\soundshaders\amt_close", 1}};
		volume = 0.7;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class sg510_midShot_SoundShader {
		samples[] = {{"hlc_wp_sigamt\snd\soundshaders\amt_mid", 1}};
		volume = 0.6;
		range = 1000;
		rangeCurve[] = {{0, 0.5},{50, 1},{300, 0},{1000, 0}};
	};
	class sg510_distShot_SoundShader {
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_distShot_01", 1}, {"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_distShot_02", 1}, {"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_distShot_03", 1}};
		volume = 0.5;
		range = 2000;
		rangeCurve[] = {{0, 0},{50, 0},{300, 1},{2000, 1}};
	};
	class sg510_tailDistant_SoundShader {
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_taildistant", 1}};
		volume = 0.6;
		range = 2000;
        rangeCurve[] = {{0, 0},{250, 0.2},{600, 0.7},{2000, 1}};
        limitation = 1;
	};
	class sg510_tailForest_SoundShader {
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_tailforest", 1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {{0, 1},{2000, 0}};
		limitation = 1;
	};
	class sg510_tailHouses_SoundShader {
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_tailhouses", 1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {{0, 1},{250, 0.3},{1500, 0}};
		limitation = 1;
	};
	class sg510_tailInterior_SoundShader {
		samples[] = {{"hlc_wp_sigamt\snd\soundshaders\amt_fire_indoor", 1}};
		volume = "interior";
		range = 100;
		rangeCurve[] = {{0, 1},{50, 0.4},{100, 0.2},{350, 0}};
		limitation = 1;
	};
	class sg510_tailMeadows_SoundShader {
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_tailmeadows", 1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {{0, 1},{2000, 0}};
		limitation = 1;
	};
	class sg510_tailTrees_SoundShader {
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_tailtrees", 1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {{0, 1},{2000, 0}};
		limitation = 1;
	};
	class sg510_silencerShot_SoundShader {
		samples[] = {{"hlc_wp_sigamt\snd\soundshaders\amt_suppressed", 1}};
		volume = 1.0;
		range = 250;
		rangeCurve = "closeShotCurve";
	};
	class sg510_silencerTailForest_SoundShader {
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_silencerTailForest", 1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0, 1},{150, 0.3}};
		limitation = 1;
	};
	class sg510_silencerTailHouses_SoundShader {
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_silencerTailHouses", 1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0, 1},{150, 0}};
		limitation = 1;
	};
	class sg510_silencerTailInterior_SoundShader {
		samples[] = {{"hlc_wp_sigamt\snd\soundshaders\amt_suppressed_indoor", 1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0, 1},{50, 0.3},{150, 0}};
		limitation = 1;
	};
	class sg510_silencerTailMeadows_SoundShader {
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_silencerTailMeadows", 1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0, 1},{150, 0.3}};
		limitation = 1;
	};
	class sg510_silencerTailTrees_SoundShader {
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_silencerTailTrees", 1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0, 1},{150, 0.3}};
		limitation = 1;
	};
};

class CfgSoundSets {
	class TACGT_sg510_Shot_SoundSet {
		soundShaders[] = {"sg510_closeShot_SoundShader", "sg510_midShot_SoundShader", "sg510_distShot_SoundShader", "sg510_Closure_SoundShader"};
		volumeFactor = 0.8;
		volumeCurve = "InverseSquare3Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
        frequencyRandomizer = 0.5; 
		frequencyRandomizerMin = 0.1; 
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
	};
	class TACGT_sg510_tail_SoundSet {
		soundShaders[] = {"sg510_tailDistant_SoundShader", "sg510_tailForest_SoundShader", "sg510_tailHouses_SoundShader", "sg510_tailInterior_SoundShader", "sg510_tailMeadows_SoundShader", "sg510_tailTrees_SoundShader"};
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		stereoStartDistance = 100;
		stereoRadius = 50;
        distanceFilter = "HLC_rifleTailDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
	};
	class TACGT_sg510_silencerShot_SoundSet {
		soundShaders[] = {"sg510_silencerShot_SoundShader", "sg510_Closure_SoundShader"};
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare3Curve";
        frequencyRandomizer = 0.3;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class TACGT_sg510_silencerTail_SoundSet {
		soundShaders[] = {"sg510_silencerTailTrees_SoundShader", "sg510_silencerTailForest_SoundShader", "sg510_silencerTailMeadows_SoundShader", "sg510_silencerTailHouses_SoundShader", "sg510_silencerTailInterior_SoundShader"};
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
		stereoStartDistance = 100;
		stereoRadius = 50;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
	};
};