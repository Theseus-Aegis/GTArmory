// .300WM, using 7.62x54r Ammo as it's borderline the same, especially for Bolt-action rifles.

// .300WM G22
class CLASS(5Rnd_300WM_EPR_G22): CUP_5Rnd_762x67_G22 {
    MACRO_SCOPE;
    ammo = QCLASS(300WM_EPR);
    displayName = ".300WM 5Rnd G22 [T] (EPR)";
    displayNameShort = "EPR Tracer";
    descriptionShort = ".300WM EPR Tracer";
    tracersEvery = 1;
    mass = 3.5;
};
class CLASS(5Rnd_300WM_AP_G22): CLASS(5Rnd_300WM_EPR_G22) {
    ammo = QCLASS(300WM_AP);
    displayName = ".300WM 5Rnd G22 [T] (AP)";
    displayNameShort = "AP Tracer";
    descriptionShort = ".300WM AP Tracer";
};
