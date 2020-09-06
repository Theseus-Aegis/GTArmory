// 5.8 30Rnd Magazines
class CLASS(30Rnd_580x42_DBP88): 30Rnd_580x42_Mag_F {
    author = "TyroneMF";
    scope = 2;
    lastRoundsTracer = 4;
    displayName = CSTRING(30Rnd_580x42_DBP88_Name);
    ammo = QCLASS(580x42_DBP88);
    mass = 8;
};

class CLASS(30Rnd_580x42_DBP88_Green): CLASS(30Rnd_580x42_DBP88) {
    tracersEvery = 1;
    displayName = CSTRING(30Rnd_580x42_DBP88_Green_Name);
};

// 5.8 100Rnd Magazines
class CLASS(100Rnd_580x42_DBP88): 100Rnd_580x42_Mag_F {
    author = "TyroneMF";
    scope = 2;
    tracersEvery = 4;
    lastRoundsTracer = 4;
    displayName = CSTRING(100Rnd_580x42_DBP88_Name);
    ammo = QCLASS(580x42_DBP88);
    mass = 20;
};

class CLASS(100Rnd_580x42_DBP88_Green): CLASS(100Rnd_580x42_DBP88) {
    tracersEvery = 1;
    displayName = CSTRING(100Rnd_580x42_DBP88_Green_Name);
};
