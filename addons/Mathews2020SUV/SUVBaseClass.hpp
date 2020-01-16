    class LandVehicle;
    class Car: LandVehicle {
        class NewTurret;
    };

    class Car_F: Car {
        class HitPoints {
            class HitLFWheel;
            class HitLF2Wheel;
            class HitRFWheel;
            class HitRF2Wheel;
            class HitBody;
            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
        };

        class NewTurret;
        class Turrets {
            class MainTurret: NewTurret {
                class HitPoints;
            };
        };

        class AnimationSources;
    };

    class TAC_SUV_Base: Car_F {

        expansion=3;
        dlc="CUP_Vehicles";
        model="\CUP\WheeledVehicles\CUP_WheeledVehicles_SUV\CUP_suv.p3d";
        Icon="\CUP\WheeledVehicles\CUP_WheeledVehicles_SUV\Data\UI\Icon_suv_CA.paa";
        Picture="\CUP\WheeledVehicles\CUP_WheeledVehicles_SUV\Data\UI\Picture_suv_CA.paa";
        occludeSoundsWhenIn=1;
        obstructSoundsWhenIn=1;
        displayName="Mathews 2020 Explorer SUV";
        hiddenSelections[]= { "camo" };
        terrainCoef=1.5;
        turnCoef=2.5;
        precision=10;
        brakeDistance=3;
        acceleration=15;
        fireResistance=5;
        armor=40;
        cost=50000;
        transportMaxBackpacks=3;
        hideWeaponsCargo=1;
        transportSoldier=5;
        wheelDamageRadiusCoef=0.9;
        wheelDestroyRadiusCoef=0.5;
        maxFordingDepth=0.75;
        waterResistance=1;
        crewCrashProtection=0.5;
        driverLeftHandAnimName="drivewheel";
        driverRightHandAnimName="drivewheel";
// ACRE
        acre_hasInfantryPhone=0;
        acre_infantryPhoneDisableRinging=1;
        class AcreIntercoms { };
        class AcreRacks { };
        class TransportItems {
            class _xx_FirstAidKit {
                name="FirstAidKit";
                count=0;
            };
        };

  // Damage & Hitpoints    
        class HitPoints: HitPoints {
            class HitLFWheel: HitLFWheel {
                armor=0.125;
                passThrough=0;
            };
            class HitLF2Wheel: HitLF2Wheel {
                armor=0.125;
                passThrough=0;
            };
            class HitRFWheel: HitRFWheel {
                armor=0.125;
                passThrough=0;
            };
            class HitRF2Wheel: HitRF2Wheel {
                armor=0.125;
                passThrough=0;
            };
            class HitFuel {
                armor=0.5;
                material=-1;
                name="palivo";
                visual="";
                passThrough=0;
            };
            class HitEngine {
                armor=0.5;
                material=-1;
                name="engine";
                visual="";
                passThrough=0;
            };
            class HitBody: HitBody {
                name="body";
                visual="camo";
                passThrough=0;
            };
            class HitGlass1: HitGlass1 {
                armor=0.25;
            };
            class HitGlass2: HitGlass2 {
                armor=0.25;
            };
            class HitGlass3: HitGlass3 {
                armor=0.25;
            };
            class HitGlass4: HitGlass4 {
                armor=0.25;
            };
        };

        driverAction="Driver_low01";
        cargoAction[]= { "passenger_low01", "passenger_generic01_leanleft", "passenger_generic01_foldhands", "passenger_generic01_leanleft", "passenger_low01" };
        getInAction="GetInLow";
        getOutAction="GetOutLow";
        cargoGetInAction[]= { "GetInLow" };
        cargoGetOutAction[]= { "GetOutLow" };
        attenuationEffectType="CarAttenuation";
// Get in & out sounds
        soundGetIn[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door","db-5",1 };
        soundGetOut[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door", "db-5",1,40 };
        soundDammage[]= { "","db-5",1 };
// Engine on & off internal and external sounds
        soundEngineOnInt[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_start","db-8",1 };
        soundEngineOnExt[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_start","db-7",1,200 };
        soundEngineOffInt[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_stop","db-8",1 };
        soundEngineOffExt[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_stop","db-7",1,200 };
        buildCrash0[]= { "A3\Sounds_F\vehicles\soft\noises\crash_building_01","db-3",1,200 };
        buildCrash1[]= { "A3\Sounds_F\vehicles\soft\noises\crash_building_02","db-3",1,200 };
        buildCrash2[]= { "A3\Sounds_F\vehicles\soft\noises\crash_building_03","db-3",1,200 };
        buildCrash3[]= { "A3\Sounds_F\vehicles\soft\noises\crash_building_04","db-3",1,200 };
        soundBuildingCrash[]= { "buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25 };
        WoodCrash0[]= { "A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_01","db-3",1,200 };
        WoodCrash1[]= { "A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_02","db-3",1,200 };
        WoodCrash2[]= { "A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_03","db-3",1,200 };
        WoodCrash3[]= { "A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_04","db-3",1,200 };
        WoodCrash4[]= { "A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_05","db-3",1,200 };
        WoodCrash5[]= { "A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_06","db-3",1,200 };
        soundWoodCrash[]= { "woodCrash0",0.16599999,"woodCrash1",0.16599999,"woodCrash2",0.16599999,"woodCrash3",0.16599999,"woodCrash4",0.16599999,"woodCrash5",0.16599999 };
        ArmorCrash0[]= { "A3\Sounds_F\vehicles\soft\noises\crash_vehicle_01","db-3",1,200 };
        ArmorCrash1[]= { "A3\Sounds_F\vehicles\soft\noises\crash_vehicle_02","db-3",1,200 };
        ArmorCrash2[]= { "A3\Sounds_F\vehicles\soft\noises\crash_vehicle_03","db-3",1,200 };
        ArmorCrash3[]= { "A3\Sounds_F\vehicles\soft\noises\crash_vehicle_04","db-3",1,200 };
        soundArmorCrash[]= { "ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25 };

        class Sounds {
            class Idle_ext {
                sound[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_idle","db-13",1,150 };
                frequency="0.9 + ((rpm/7000) factor[(400/7000),(1150/7000)])*0.2";
                volume="engineOn*camPos*1";
            };

            class Engine {
                sound[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_1400rpm","db-11",1,200 };
                frequency="0.8 + ((rpm/7000) factor[(900/7000),(2100/7000)])*0.2";
                volume="engineOn*camPos*(((rpm/7000) factor[(870/7000),(1100/7000)])* ((rpm/7000) factor[(2100/7000),(1300/7000)]))";
            };

            class Engine1_ext {
                sound[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2000rpm","db-9",1,240 };
                frequency="0.8 + ((rpm/7000) factor[(1300/7000),(3100/7000)])*0.2";
                volume="engineOn*camPos*(((rpm/7000) factor[(1250/7000),(2050/7000)])* ((rpm/7000) factor[(3100/7000),(2300/7000)]))";
            };

            class Engine2_ext {
                sound[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2600rpm","db-8",1,280 };
                frequency="0.8 + ((rpm/7000) factor[(2200/7000),(4100/7000)])*0.2";
                volume="engineOn*camPos*(((rpm/7000) factor[(2250/7000),(3050/7000)])* ((rpm/7000) factor[(4100/7000),(3300/7000)]))";
            };

            class Engine3_ext {
                sound[]=
                { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3200rpm","db-7",1,320 };
                frequency="0.8 + ((rpm/7000) factor[(3300/7000),(4900/7000)])*0.2";
                volume="engineOn*camPos*(((rpm/7000) factor[(3250/7000),(4050/7000)])* ((rpm/7000) factor[(4870/7000),(4200/7000)]))";
            };

            class Engine4_ext {
                sound[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3600rpm","db-6",1,360 };
                frequency="0.8 + ((rpm/7000) factor[(4200/7000),(6200/7000)])*0.2";
                volume="engineOn*camPos*(((rpm/7000) factor[(4150/7000),(4800/7000)])* ((rpm/7000) factor[(6150/7000),(5150/7000)]))";
            };

            class Engine5_ext {
                sound[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_4000rpm","db-5",1,420 };
                frequency="0.95 + ((rpm/7000) factor[(5100/7000),(7000/7000)])*0.15";
                volume="engineOn*camPos*((rpm/7000) factor[(5100/7000),(6100/7000)])";
            };

            class IdleThrust {
                sound[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_idle_exhaust","db-6",1,200 };
                frequency="0.9 + ((rpm/7000) factor[(400/7000),(1150/7000)])*0.2";
                volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*1";
            };

            class EngineThrust {
                sound[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_1400rpm_exhaust","db-5",1,250 };
                frequency="0.8 + ((rpm/7000) factor[(900/7000),(2100/7000)])*0.2";
                volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(870/7000),(1100/7000)])* ((rpm/7000) factor[(2100/7000),(1300/7000)]))";
            };

            class Engine1_Thrust_ext {
                sound[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2000rpm_exhaust","db-4",1,280 };
                frequency="0.8 + ((rpm/7000) factor[(1300/7000),(3100/7000)])*0.2";
                volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(1250/7000),(2050/7000)])* ((rpm/7000) factor[(3100/7000),(2300/7000)]))";
            };

            class Engine2_Thrust_ext {
                sound[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2600rpm_exhaust","db-3",1,320 };
                frequency="0.8 + ((rpm/7000) factor[(2200/7000),(4100/7000)])*0.2";
                volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(2250/7000),(3050/7000)])* ((rpm/7000) factor[(4100/7000),(3300/7000)]))";
            };

            class Engine3_Thrust_ext {
                sound[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3200rpm_exhaust","db-2",1,360 };
                frequency="0.8 + ((rpm/7000) factor[(3300/7000),(4900/7000)])*0.2";
                volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(3250/7000),(4050/7000)])* ((rpm/7000) factor[(4870/7000),(4200/7000)]))";
            };

            class Engine4_Thrust_ext {
                sound[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3600rpm_exhaust","db0",1,400 };
                frequency="0.8 + ((rpm/7000) factor[(4200/7000),(6200/7000)])*0.3";
                volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(4150/7000),(4800/7000)])* ((rpm/7000) factor[(6150/7000),(5150/7000)]))";
            };

            class Engine5_Thrust_ext {
                sound[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_4000rpm_exhaust","db2",1,450 };
                frequency="0.9 + ((rpm/7000) factor[(5100/7000),(7000/7000)])*0.2";
                volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/7000) factor[(5100/7000),(6100/7000)])";
            };

            class Idle_int {
                sound[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_idle","db-15",1 };
                frequency="0.9 + ((rpm/7000) factor[(400/7000),(1150/7000)])*0.2";
                volume="engineOn*(1-camPos)*1";
            };

            class Engine_int {
                sound[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_1000rpm","db-14",1 };
                frequency="0.8 + ((rpm/7000) factor[(900/7000),(2100/7000)])*0.2";
                volume="engineOn*(1-camPos)*(((rpm/7000) factor[(870/7000),(1100/7000)])* ((rpm/7000) factor[(2100/7000),(1300/7000)]))";
            };

            class Engine1_int {
                sound[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2000rpm","db-12",1 };
                frequency="0.8 + ((rpm/7000) factor[(1300/7000),(3100/7000)])*0.2";
                volume="engineOn*(1-camPos)*(((rpm/7000) factor[(1250/7000),(2050/7000)])* ((rpm/7000) factor[(3100/7000),(2300/7000)]))";
            };

            class Engine2_int {
                sound[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2600rpm","db-11",1 };
                frequency="0.8 + ((rpm/7000) factor[(2200/7000),(4100/7000)])*0.2";
                volume="engineOn*(1-camPos)*(((rpm/7000) factor[(2250/7000),(3050/7000)])* ((rpm/7000) factor[(4100/7000),(3300/7000)]))";
            };

            class Engine3_int {
                sound[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_3200rpm","db-10",1 };
                frequency="0.8 + ((rpm/7000) factor[(3300/7000),(4900/7000)])*0.2";
                volume="engineOn*(1-camPos)*(((rpm/7000) factor[(3250/7000),(4050/7000)])* ((rpm/7000) factor[(4870/7000),(4200/7000)]))";
            };

            class Engine4_int {
                sound[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_4000rpm","db-9",1 };
                frequency="0.8 + ((rpm/7000) factor[(4200/7000),(6200/7000)])*0.2";
                volume="engineOn*(1-camPos)*(((rpm/7000) factor[(4150/7000),(4800/7000)])* ((rpm/7000) factor[(6150/7000),(5150/7000)]))";
            };

            class Engine5_int {
                sound[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_5000rpm","db-6",1 };
                frequency="0.95 + ((rpm/7000) factor[(5100/7000),(7000/7000)])*0.15";
                volume="engineOn*(1-camPos)*((rpm/7000) factor[(5100/7000),(6100/7000)])";
            };

            class IdleThrust_int {
                sound[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_idle_exhaust","db-10",1 };
                frequency="0.9 + ((rpm/7000) factor[(400/7000),(1150/7000)])*0.2";
                volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*1";
            };

            class EngineThrust_int {
                sound[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_1000rpm_exhaust","db-9",1 };
                frequency="0.8 + ((rpm/7000) factor[(900/7000),(2100/7000)])*0.2";
                volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(870/7000),(1100/7000)])* ((rpm/7000) factor[(2100/7000),(1300/7000)]))";
            };

            class Engine1_Thrust_int {
                sound[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2000rpm_exhaust","db-8",1 };
                frequency="0.8 + ((rpm/7000) factor[(1300/7000),(3100/7000)])*0.2";
                volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(1250/7000),(2050/7000)])* ((rpm/7000) factor[(3100/7000),(2300/7000)]))";
            };

            class Engine2_Thrust_int {
                sound[]={"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2600rpm_exhaust","db-7",1};
                frequency="0.8 + ((rpm/7000) factor[(2200/7000),(4100/7000)])*0.2";
                volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(2250/7000),(3050/7000)])* ((rpm/7000) factor[(4100/7000),(3300/7000)]))";
            };

            class Engine3_Thrust_int {
                sound[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_3200rpm_exhaust","db-6",1 };
                frequency="0.8 + ((rpm/7000) factor[(3300/7000),(4900/7000)])*0.2";
                volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(3250/7000),(4050/7000)])* ((rpm/7000) factor[(4870/7000),(4200/7000)]))";
            };

            class Engine4_Thrust_int {
                sound[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_4000rpm_exhaust","db-5",1 };
                frequency="0.8 + ((rpm/7000) factor[(4200/7000),(6200/7000)])*0.3";
                volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(4150/7000),(4800/7000)])* ((rpm/7000) factor[(6150/7000),(5150/7000)]))";
            };

            class Engine5_Thrust_int {
                sound[]= { "A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_5000rpm_exhaust","db-4",1 };
                frequency="0.9 + ((rpm/7000) factor[(5100/7000),(7000/7000)])*0.2";
                volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/7000) factor[(5100/7000),(6100/7000)])";
            };

            class Movement {
                sound="soundEnviron";
                frequency="1";
                volume="0";
            };

            class TiresRockOut {
                sound[]= { "A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1","db-6",1,60 };
                frequency="1";
                volume="camPos*rock*(speed factor[2, 20])";
            };

            class TiresSandOut {
                sound[]= { "A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1","db-6",1,60 };
                frequency="1";
                volume="camPos*sand*(speed factor[2, 20])";
            };

            class TiresGrassOut {
                sound[]= { "A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2","db-6",1,60 };
                frequency="1";
                volume="camPos*grass*(speed factor[2, 20])";
            };

            class TiresMudOut {
                sound[]= { "A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2","db-6",1,60 };
                frequency="1";
                volume="camPos*mud*(speed factor[2, 20])";
            };

            class TiresGravelOut {
                sound[]= { "A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1","db-6",1,60 };
                frequency="1";
                volume="camPos*gravel*(speed factor[2, 20])";
            };

            class TiresAsphaltOut {
                sound[]= { "A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2","db-6",1,60 };
                frequency="1";
                volume="camPos*asphalt*(speed factor[2, 20])";
            };

            class NoiseOut {
                sound[]= { "A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3","db-8",1,90 };
                frequency="1";
                volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
            };

            class TiresRockIn {
                sound[]= { "A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1","db-6",1 };
                frequency="1";
                volume="(1-camPos)*rock*(speed factor[2, 20])";
            };

            class TiresSandIn {
                sound[]= { "A3\Sounds_F\vehicles\soft\tires\int-tires-sand2","db-6",1 };
                frequency="1";
                volume="(1-camPos)*sand*(speed factor[2, 20])";
            };

            class TiresGrassIn {
                sound[]= { "A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2","db-6",1 };
                frequency="1";
                volume="(1-camPos)*grass*(speed factor[2, 20])";
            };

            class TiresMudIn
            {
                sound[]= { "A3\Sounds_F\vehicles\soft\tires\int-tires-mud2","db-6",1 };
                frequency="1";
                volume="(1-camPos)*mud*(speed factor[2, 20])";
            };

            class TiresGravelIn {
                sound[]= { "A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1","db-6",1 };
                frequency="1";
                volume="(1-camPos)*gravel*(speed factor[2, 20])";
            };

            class TiresAsphaltIn {
                sound[]= { "A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2","db-6",1 };
                frequency="1";
                volume="(1-camPos)*asphalt*(speed factor[2, 20])";
            };

            class NoiseIn
            {
                sound[]= { "A3\Sounds_F\vehicles\soft\noises\noise_int_car_3","db-12",1 };
                frequency="1";
                volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
            };

            class breaking_ext_road {
                sound[]= { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04","db-3",1,80 };
                frequency=1;
                volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
            };

            class acceleration_ext_road {
                sound[]= { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db-3",1,80 };
                frequency=1;
                volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
            };

            class turn_left_ext_road {
                sound[]= { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db-3",1,80 };
                frequency=1;
                volume="engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
            };

            class turn_right_ext_road {
                sound[]= { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db-3",1,80 };
                frequency=1;
                volume="engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
            };

            class breaking_ext_dirt {
                sound[]= { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking","db-3",1,60 };
                frequency=1;
                volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
            };

            class acceleration_ext_dirt {
                sound[]= { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration","db-3",1,60 };
                frequency=1;
                volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
            };

            class turn_left_ext_dirt {
                sound[]= { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db-3",1,60 };
                frequency=1;
                volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
            };

            class turn_right_ext_dirt {
                sound[]= { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db-3",1,60 };
                frequency=1;
                volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
            };

            class breaking_int_road {
                sound[]= { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int","db-10",1 };
                frequency=1;
                volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
            };

            class acceleration_int_road {
                sound[]= { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db-10",1 };
                frequency=1;
                volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
            };

            class turn_left_int_road {
                sound[]= { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db-10",1 };
                frequency=1;
                volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
            };

            class turn_right_int_road {
                sound[]= { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db-10",1 };
                frequency=1;
                volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
            };

            class breaking_int_dirt {
                sound[]= { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int","db-10",1 };
                frequency=1;
                volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15])";
            };

            class acceleration_int_dirt {
                sound[]= { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int","db-10",1 };
                frequency=1;
                volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
            };

            class turn_left_int_dirt {
                sound[]= { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db-10",1 };
                frequency=1;
                volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
            };

            class turn_right_int_dirt {
                sound[]= { "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db-10",1 };
                frequency=1;
                volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
            };
        };

        class RenderTargets {
            class LeftMirror {
                renderTarget="rendertarget0";
                class CameraView1 {
                    pointPosition="pip0_pos";
                    pointDirection="pip0_dir";
                    renderQuality=2;
                    renderVisionMode=0;
                    fov=0.69999999;
                };
            };
            class RearCam {
                renderTarget="rendertarget1";
                class CameraView1 {
                    pointPosition="pip1_pos";
                    pointDirection="pip1_dir";
                    renderQuality=2;
                    renderVisionMode=0;
                    fov=0.69999999;
                };
            };
            class FrontCam {
                renderTarget="rendertarget2";
                class CameraView1 {
                    pointPosition="pip2_pos";
                    pointDirection="pip2_dir";
                    renderQuality=2;
                    renderVisionMode=0;
                    fov=0.69999999;
                };
            };
        };
        thrustDelay=0.5;
        brakeIdleSpeed=1.78;
        maxSpeed=200;
        fuelCapacity=45;
        wheelCircumference=2.8050001;
        antiRollbarForceCoef=1.9;
        antiRollbarForceLimit=5;
        antiRollbarSpeedMin=10;
        antiRollbarSpeedMax=150;
        idleRpm=400;
        redRpm=3500;

        class complexGearbox {
            GearboxRatios[]= {"R1",-4,"N",0,"D1","4.5*(0.58^0)","D2","4.5*(0.58^1)","D3","4.5*(0.58^2)","D4","4.5*(0.58^3)","D5","4.5*(0.59^4)","D6","4.5*(0.6^5)" };
            TransmissionRatios[]= { "High",7 };
            gearBoxMode="auto";
            moveOffGear=1;
            driveString="D";
            neutralString="N";
            reverseString="R";
            gearUpMaxCoef=0.94999999;
            gearDownMaxCoef=0.85000002;
            gearUpMinCoef=0.64999998;
            gearDownMinCoef=0.55000001;
            transmissionDelay=2;
        };
        simulation="carx";
        dampersBumpCoef=3;
        differentialType="all_limited";
        frontRearSplit=0.5;
        frontBias=1.5;
        rearBias=1.5;
        centreBias=1.3;
        clutchStrength=20;
        enginePower=150;
        maxOmega=450;
        peakTorque=425;
        dampingRateFullThrottle=0.079999998;
        dampingRateZeroThrottleClutchEngaged=0.5;
        dampingRateZeroThrottleClutchDisengaged=0.34999999;
        torqueCurve[]= {
            
            {
                "(0/3500)",
                "(0/425)"
            },
            
            {
                "(500/3500)",
                "(200/425)"
            },
            
            {
                "(1500/3500)",
                "(405/425)"
            },
            
            {
                "(2000/3500)",
                "(425/425)"
            },
            
            {
                "(2500/3500)",
                "(350/425)"
            },
            
            {
                "(3000/3500)",
                "(300/425)"
            },
            
            {
                "(6000/3500)",
                "(0/425)"
            }
        };
        changeGearMinEffectivity[]={1,0.15000001,1,1,1,1,1,1};
        switchTime=0.31;
        latency=1.5;
        class Wheels {
            class LF {
                boneName="wheel_1_1_damper";
                steering=1;
                side="left";
                center="wheel_1_1_axis";
                boundary="wheel_1_1_bound";
                width="0.2";
                mass=30;
                MOI=6;
                dampingRate=1;
                dampingRateDamaged=5;
                dampingRateInAir=0.80000001;
                dampingRateDestroyed=5000;
                maxBrakeTorque=2000;
                maxHandBrakeTorque=0;
                suspTravelDirection[]={0,-1,0};
                suspForceAppPointOffset="wheel_1_1_axis";
                tireForceAppPointOffset="wheel_1_1_axis";
                maxCompression=0.1;
                maxDroop=0.050000001;
                sprungMass=400;
                springStrength=14400;
                springDamperRate="1920*2";
                longitudinalStiffnessPerUnitGravity=10000;
                latStiffX=2.5;
                latStiffY=18;
                frictionVsSlipGraph[]= { {0,1.75},{0.5,1.35},{1,1.2} };
            };
            class LR: LF {
                boneName="wheel_1_2_damper";
                steering=0;
                center="wheel_1_2_axis";
                boundary="wheel_1_2_bound";
                suspForceAppPointOffset="wheel_1_2_axis";
                tireForceAppPointOffset="wheel_1_2_axis";
                maxHandBrakeTorque=3000;
                frictionVsSlipGraph[]= { {0,2},{0.5,1.53},{1,1.36} };
            };
            class RF: LF {
                boneName="wheel_2_1_damper";
                center="wheel_2_1_axis";
                boundary="wheel_2_1_bound";
                suspForceAppPointOffset="wheel_2_1_axis";
                tireForceAppPointOffset="wheel_2_1_axis";
                steering=1;
                side="right";
            };
            class RR: RF {
                boneName="wheel_2_2_damper";
                steering=0;
                center="wheel_2_2_axis";
                boundary="wheel_2_2_bound";
                suspForceAppPointOffset="wheel_2_2_axis";
                tireForceAppPointOffset="wheel_2_2_axis";
                maxHandBrakeTorque=3000;
                frictionVsSlipGraph[]= { {0,2.3},{0.5,2.0999999},{1,2} };
            };
        };
        memoryPointTrackFLL="TrackFLL";
        memoryPointTrackFLR="TrackFLR";
        memoryPointTrackBLL="TrackBLL";
        memoryPointTrackBLR="TrackBLR";
        memoryPointTrackFRL="TrackFRL";
        memoryPointTrackFRR="TrackFRR";
        memoryPointTrackBRL="TrackBRL";
        memoryPointTrackBRR="TrackBRR";
        slingLoadCargoMemoryPoints[]= { "SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4" };
        class Damage {
            tex[]={};
            mat[]= {
                "CUP\WheeledVehicles\CUP_WheeledVehicles_SUV\data\suv_body.rvmat",
                "CUP\WheeledVehicles\CUP_WheeledVehicles_SUV\data\suv_body_damage.rvmat",
                "CUP\WheeledVehicles\CUP_WheeledVehicles_SUV\data\suv_body_destruct.rvmat",
                "CUP\WheeledVehicles\CUP_WheeledVehicles_SUV\data\suv_chrom.rvmat",
                "CUP\WheeledVehicles\CUP_WheeledVehicles_SUV\data\suv_chrom_damage.rvmat",
                "CUP\WheeledVehicles\CUP_WheeledVehicles_SUV\data\suv_chrom_destruct.rvmat",
                "CUP\WheeledVehicles\CUP_WheeledVehicles_SUV\data\suv_glass.rvmat",
                "CUP\WheeledVehicles\CUP_WheeledVehicles_SUV\data\suv_glass_damage.rvmat",
                "CUP\WheeledVehicles\CUP_WheeledVehicles_SUV\data\suv_glass_damage.rvmat",
                "CUP\WheeledVehicles\CUP_WheeledVehicles_SUV\data\suv_glass_in.rvmat",
                "CUP\WheeledVehicles\CUP_WheeledVehicles_SUV\data\suv_glass_in_damage.rvmat",
                "CUP\WheeledVehicles\CUP_WheeledVehicles_SUV\data\suv_glass_in_damage.rvmat"
            };
        };

        class Exhausts {
            class Exhaust1 {
                position="exhaust";
                direction="exhaust_dir";
                effect="ExhaustsEffect";
            };
            class Exhaust2 {
                position="exhaust2_pos";
                direction="exhaust2_dir";
                effect="ExhaustsEffect";
            };
        };
        class Reflectors {
            class LightCarHeadL01 {
                color[]={2550,1930,1320};
                ambient[]={8,6,4};
                position="LightCarHeadL01";
                direction="LightCarHeadL01_end";
                hitpoint="Light_L";
                selection="Light_L";
                size=1;
                innerAngle=100;
                outerAngle=179;
                coneFadeCoef=10;
                intensity=1;
                useFlare=1;
                dayLight=0;
                flareSize=1;
                class Attenuation {
                    start=1;
                    constant=0;
                    linear=0;
                    quadratic=0.25;
                    hardLimitStart=30;
                    hardLimitEnd=60;
                };
            };
            class LightCarHeadL02: LightCarHeadL01 {
                position="LightCarHeadL02";
                direction="LightCarHeadL02_end";
                hitpoint="Light_L2";
                selection="Light_L2";
            };
            class LightCarHeadR01: LightCarHeadL01 {
                position="LightCarHeadR01";
                direction="LightCarHeadR01_end";
                hitpoint="Light_R";
                selection="Light_R";
            };
            class LightCarHeadR02: LightCarHeadR01 {
                position="LightCarHeadR02";
                direction="LightCarHeadR02_end";
                hitpoint="Light_R2";
                selection="Light_R2";
            };
        };
        aggregateReflectors[]= { {"LightCarHeadL01","LightCarHeadL02" }, { "LightCarHeadR01","LightCarHeadR02" } };

        class VehicleTransport {
            class Cargo {
                parachuteClass="B_Parachute_02_F";
                parachuteHeightLimit=40;
                canBeTransported=1;
                dimensions[]= { "BBox_1_1_pos","BBox_1_2_pos" };
            };
        };
        ace_refuel_fuelCapacity=60;
    };

        class AnimationSources: AnimationSources {
        class rear_window_source {
            source="door";
            initPhase=0;
            animPeriod=1;
            };
        };
        class textureSources {
            class Black {
                displayName="$STR_A3_TEXTURESOURCES_BLACK0";
                author="$STR_CUP_AUTHOR_STRING";
                textures[]= { "\CUP\WheeledVehicles\CUP_WheeledVehicles_SUV\data\suv_body_co.paa" };
                factions[]={ };
            };

        class CargoTurret;
        class UserActions {
            class OpenRdoor {
                displayName="$STR_CUP_dn_Core_UsrA_OpenRdoor";
                displayNameDefault="";
                position="axis_window";
                radius=3.7;
                onlyForplayer=0;
                priority=0;
                condition="this doorPhase ""rear_window_source"" < 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
                statement="this animateDoor [""rear_window_source"",1];";
            };
            class CloseRdoor {
                displayName="$STR_CUP_dn_Core_UsrA_CloseRdoor";
                displayNameDefault="";
                position="axis_window";
                radius=3.7;
                onlyForplayer=0;
                priority=0;
                condition="this doorPhase ""rear_window_source"" > 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
                statement="this animateDoor [""rear_window_source"",0];";
            };
        };
        transportSoldier=5;
        class Turrets {
            class CargoTurret_01: CargoTurret {
				minElev=-10;
				maxElev=18;
				maxTurn=-10;
				minTurn=-110;
				gunnerAction="passenger_boat_4";
				gunnerName="$STR_CUP_POSITION_Core_FFV_B";
				proxyIndex=13;
				isPersonTurret=1;
				memoryPointsGetInGunner="pos cargo rear";
				memoryPointsGetInGunnerDir="pos cargo dir rear";
				memoryPointGunnerOptics="";
				gunnerOutOpticsModel="";
				gunnerOpticsModel="";
				enabledByAnimationSource="rear_window_source";
				usepip=0;
				startEngine=0;
				outGunnerMayFire=1;
				inGunnerMayFire=0;
				commanding=-2;
			};