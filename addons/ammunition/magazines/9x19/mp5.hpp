class CLASS(30Rnd_9x19_MP5_7N21): CUP_30Rnd_9x19_MP5 {
    author = ECSTRING(main,Author);
    scope = 2;
    lastRoundsTracer = 4;
    displayName = "9mm 30Rnd MP5 [RT] Green (7N21)";
    ammo = QCLASS(9x19_7N21);
    mass = 8;
};

class CLASS(30Rnd_9x19_MP5_7N21_Green): CLASS(30Rnd_9x19_MP5_7N21) {
    scope = 2;
    tracersEvery = 1;
    displayName = "9mm 30Rnd MP5 [T] Green (7N21)";
};
