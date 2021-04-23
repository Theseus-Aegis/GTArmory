class CLASS(30Rnd_762x39_BP_Mag): 30Rnd_762x39_Mag_F {
    displayName = CSTRING(30Rnd_762x39_BP_Mag_Name);
    ammo = QCLASS(762x39_BP);
    lastRoundsTracer = 2;
};

class CLASS(30Rnd_762x39_AK12_BP_Mag): 30Rnd_762x39_AK12_Mag_F {
    displayName = CSTRING(30Rnd_762x39_AK12_BP_Mag_Name);
    ammo = QCLASS(762x39_BP);
    lastRoundsTracer = 2;
};

class CLASS(30Rnd_762x39_AK12_Arid_BP_Mag): 30rnd_762x39_AK12_Arid_Mag_F {
    displayName = CSTRING(30Rnd_762x39_AK12_Arid_BP_Mag_Name);
    ammo = QCLASS(762x39_BP);
    lastRoundsTracer = 2;
};

class CLASS(30Rnd_762x39_AK12_Lush_BP_Mag): 30rnd_762x39_AK12_Lush_Mag_F {
    displayName = CSTRING(30Rnd_762x39_AK12_Lush_BP_Mag_Name);
    ammo = QCLASS(762x39_BP);
    lastRoundsTracer = 2;
};

class CLASS(30Rnd_762x39_CZ807_BP_Mag): CUP_30Rnd_762x39_CZ807 {
    displayName = CSTRING(30Rnd_762x39_CZ807_BP_Mag_Name);
    ammo = QCLASS(762x39_BP);
    lastRoundsTracer = 2;
};

// 75Rnd 762x39 Magazines
class CLASS(75Rnd_762x39_RPK_BP_Mag): 75rnd_762x39_AK12_Mag_F {
    author = ECSTRING(main,Author);
    scope = 2;
    displayName = CSTRING(75Rnd_762x39_RPK_BP_Mag_Name);
    ammo = QCLASS(762x39_BP);
    tracersEvery = 4;
};
