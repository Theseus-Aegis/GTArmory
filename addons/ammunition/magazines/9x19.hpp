// 9x19mm
class CLASS(30Rnd_9x19_Ball): 30Rnd_9x21_Mag {
    MACRO_SCOPE
    ammo = QCLASS(9x19_Ball);
    descriptionShort = "9x19mm Ball Reload Tracer";
    displayName = "9mm 30Rnd (Ball)";
    lastRoundsTracer = 4;
    mass = 9;
};
class CLASS(30Rnd_9x19_Ball_Tracer): CLASS(30Rnd_9x19_Ball) {
    descriptionShort = "9x19mm Ball Tracer";
    displayName = "9mm 30Rnd [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(30Rnd_9x19_EPR): CLASS(30Rnd_9x19_Ball) {
    ammo = QCLASS(9x19_EPR);
    descriptionShort = "9x19mm EPR Reload Tracer";
    displayName = "9mm 30Rnd (EPR)";
};
class CLASS(30Rnd_9x19_AP): CLASS(30Rnd_9x19_EPR) {
    ammo = QCLASS(9x19_AP);
    descriptionShort = "9x19mm AP Reload Tracer";
    displayName = "9mm 30Rnd (AP)";
};

// 9x19mm MP5
class CLASS(30Rnd_9x19_Ball_MP5): CUP_30Rnd_9x19_MP5 {
    MACRO_SCOPE
    ammo = QCLASS(9x19_Ball);
    descriptionShort = "9x19mm Ball Reload Tracer";
    displayName = "9mm 30Rnd MP5 (Ball)";
    lastRoundsTracer = 4;
    mass = 9;
};
class CLASS(30Rnd_9x19_Ball_Tracer_MP5): CLASS(30Rnd_9x19_Ball_MP5) {
    descriptionShort = "9x19mm Ball Tracer";
    displayName = "9mm 30Rnd MP5 [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(30Rnd_9x19_EPR_MP5): CLASS(30Rnd_9x19_Ball_MP5) {
    ammo = QCLASS(9x19_EPR);
    descriptionShort = "9x19mm EPR Reload Tracer";
    displayName = "9mm 30Rnd MP5 (EPR)";
};
class CLASS(30Rnd_9x19_AP_MP5): CLASS(30Rnd_9x19_EPR_MP5) {
    ammo = QCLASS(9x19_AP);
    descriptionShort = "9x19mm AP Reload Tracer";
    displayName = "9mm 30Rnd MP5 (AP)";
};

// 9x19mm Vityaz
class CLASS(30Rnd_9x19_Ball_Vityaz): CUP_30Rnd_9x19_Vityaz {
    MACRO_SCOPE
    ammo = QCLASS(9x19_Ball);
    descriptionShort = "9x19mm Ball Reload Tracer";
    displayName = "9mm 30Rnd Vityaz (Ball)";
    lastRoundsTracer = 4;
    mass = 9;
};
class CLASS(30Rnd_9x19_Ball_Tracer_Vityaz): CLASS(30Rnd_9x19_Ball_Vityaz) {
    descriptionShort = "9x19mm Ball Tracer";
    displayName = "9mm 30Rnd Vityaz [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(30Rnd_9x19_EPR_Vityaz): CLASS(30Rnd_9x19_Ball_Vityaz) {
    ammo = QCLASS(9x19_EPR);
    descriptionShort = "9x19mm EPR Reload Tracer";
    displayName = "9mm 30Rnd Vityaz (EPR)";
};
class CLASS(30Rnd_9x19_AP_Vityaz): CLASS(30Rnd_9x19_EPR_Vityaz) {
    ammo = QCLASS(9x19_AP);
    descriptionShort = "9x19mm AP Reload Tracer";
    displayName = "9mm 30Rnd Vityaz (AP)";
};

// 9x19 Bizon
class CLASS(64Rnd_9x19_Ball_Bizon): CUP_64Rnd_9x19_Bizon_M {
    MACRO_SCOPE
    ammo = QCLASS(9x19_Ball);
    descriptionShort = "9x19mm Ball Reload Tracer";
    displayName = "9mm 64Rnd Bizon (Ball)";
    lastRoundsTracer = 4;
    mass = 20;
};
class CLASS(64Rnd_9x19_Ball_Tracer_Bizon): CLASS(64Rnd_9x19_Ball_Bizon) {
    descriptionShort = "9x19mm Ball Tracer";
    displayName = "9mm 64Rnd Bizon [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(64Rnd_9x19_EPR_Bizon): CLASS(64Rnd_9x19_Ball_Bizon) {
    ammo = QCLASS(9x19_EPR);
    descriptionShort = "9x19mm EPR Reload Tracer";
    displayName = "9mm 64Rnd Bizon (EPR)";
};
class CLASS(64Rnd_9x19_AP_Bizon): CLASS(64Rnd_9x19_EPR_Bizon) {
    ammo = QCLASS(9x19_AP);
    descriptionShort = "9x19mm AP Reload Tracer";
    displayName = "9mm 64Rnd Bizon (AP)";
};
