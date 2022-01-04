class CLASS(30Rnd_9x19_7N21): 30Rnd_9x21_Mag {
    author = ECSTRING(main,Author);
    scope = 2;
    lastRoundsTracer = 4;
    displayName = "9mm 30Rnd [RT] Green (7N21)";
    displayNameShort = "7N21 Rounds";
    ammo = QCLASS(9x19_7N21);
    mass = 8;
};

class CLASS(30Rnd_9x19_7N21_Green): CLASS(30Rnd_9x19_7N21) {
    scope = 2;
    tracersEvery = 1;
    displayName = "9mm 30Rnd [T] Green (7N21)";
};
