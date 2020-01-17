class CfgSoundshaders {
    class GTA_sgun_M1014_closeShot_SoundShader {
        samples[] = { { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Close_01",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Close_02",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Close_03",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Close_04",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Close_05",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Close_06",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Close_07",1 } };
        volume = 1.0;
        range = 200;
        rangeCurve = "closeShotCurve";
    };
    
    class GTA_sgun_M1014_closeShotCenter_SoundShader {
        samples[] = { { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Close_Center_01",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Close_Center_02",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Close_Center_03",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Close_Center_04",1 } };
        volume = 1.9;
        range = 25;
        rangeCurve = "closeShotCurve";
    };
    
    class GTA_sgun_M1014_distShot_SoundShader {
        samples[] = { { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Distant_01",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Distant_01",2 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Distant_01",3 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Distant_01",4 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Distant_01",5 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Distant_01",6 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Distant_01",7 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Distant_01",8 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Distant_01",9 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Distant_01",10 } };
        volume = 0.6;
        range = 2000;
        rangeCurve[] = { { 0,0 }, { 100,0.5 }, { 300,1 }, { 1500,1 }, { 2000,0 } };
    };

    class GTA_sgun_M1014_tailForest_SoundShader {
        samples[] = { { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_01",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_02",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_03",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_04",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_05",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_06",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_07",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_08",1 } };
        volume = "(1-interior/1.4)*forest/2";
        range = 2000;
        rangeCurve[] = { { 0,1 },{ 2000,0 } };
        limitation = 1;
    };

    class GTA_sgun_M1014_tailHouses_SoundShader {
        samples[] = { { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_01",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_02",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_03",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_04",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_05",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_06",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_07",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_08",1 } };
        volume = "(1-interior/1.4)*houses/2";
        range = 2000;
        rangeCurve[] = { { 0,1 }, { 2000,0 } };
        limitation = 1;
    };

    class GTA_sgun_M1014_tailInt_SoundShader {
        samples[] = { { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Int_01",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Int_02",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Int_03",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Int_04",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Int_05",1 } };
        volume = "1.3 * interior";
        range = 60;
        rangeCurve[] = { { 0,1 }, { 50,0.4 }, { 100,0.2 }, { 350,0 } };
        limitation = 1;
    };

    class GTA_sgun_M1014_tailMeadows_SoundShader {
        samples[] = { { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Open_01",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Open_02",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Open_03",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Open_04",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Open_05",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Open_06",1 } };
        volume = "1 * (1-interior/1.4) * (1-forest)";
        range = 2000;
        rangeCurve[] = { { 0,1 }, { 2000,0 } };
        limitation = 1;
    };

    class GTA_sgun_M1014_tailUrban_SoundShader {
        samples[] = { { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Urban_01",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Urban_02",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Urban_03",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Urban_04",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Urban_05",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Urban_06",1 }, { "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Urban_07",1 } };
        volume = "1 * (1-forest)* (1.4-interior/1.4)*houses/2";
        range = 100;
        rangeCurve = "CannonMidShotCurve";
        limitation = 1;
    };
};