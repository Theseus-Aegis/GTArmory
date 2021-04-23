// Vanilla 9x19 - "Clear" Magazine
class CLASS(30Rnd_9x19_Clear_7N21): 30Rnd_9x21_Mag_SMG_02 {
    author = ECSTRING(main,Author);
    scope = 2;
    lastRoundsTracer = 4;
    displayName = CSTRING(30Rnd_9x19_Clear_7N21_Name);
    displayNameShort = CSTRING(30Rnd_9x19_7N21_Name_Short);
    ammo = QCLASS(9x19_7N21);
    mass = 8;
};

class CLASS(30Rnd_9x19_Clear_7N21_Green): CLASS(30Rnd_9x19_Clear_7N21) {
    scope = 2;
    tracersEvery = 1;
    displayName = CSTRING(30Rnd_9x19_Clear_7N21_Green_Name);
};

// Regular Magazine
class CLASS(30Rnd_9x19_7N21): 30Rnd_9x21_Mag {
    author = ECSTRING(main,Author);
    scope = 2;
    lastRoundsTracer = 4;
    displayName = CSTRING(30Rnd_9x19_7N21);
    displayNameShort = CSTRING(30Rnd_9x19_7N21_Name_Short);
    ammo = QCLASS(9x19_7N21);
    mass = 8;
};

class CLASS(30Rnd_9x19_7N21_Green): CLASS(30Rnd_9x19_7N21) {
    scope = 2;
    tracersEvery = 1;
    displayName = CSTRING(30Rnd_9x19_7N21_Green_Name);
};

// CUP MP5 Magazine
class CLASS(30Rnd_9x19_MP5_7N21): CUP_30Rnd_9x19_MP5 {
    author = ECSTRING(main,Author);
    scope = 2;
    lastRoundsTracer = 4;
    displayName = CSTRING(30Rnd_9x19_MP5_7N21_Name);
    ammo = QCLASS(9x19_7N21);
    mass = 8;
};

class CLASS(30Rnd_9x19_MP5_7N21_Green): CLASS(30Rnd_9x19_MP5_7N21) {
    scope = 2;
    tracersEvery = 1;
    displayName = CSTRING(30Rnd_9x19_MP5_7N21_Green_Name);
};
