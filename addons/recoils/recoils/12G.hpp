// 12G

// Long barreled Semi-Auto shotgun
class CLASS(12G_LongBarrel): CLASS(Recoil_Default) {
    muzzleOuter[] = {0.3, 1, 0.5, 0.5};
    permanent = 0.5;
};

// Long barreled Foregrip Semi-Auto shotgun
class CLASS(12G_Foregrip_LongBarrel): CLASS(12G_LongBarrel) {
    muzzleOuter[] = {0.27, 0.9, 0.48, 0.48};
    permanent = 0.28;
};

// Short barreled Semi-Auto shotgun
class CLASS(12G_ShortBarrel): CLASS(12G_LongBarrel) {
    muzzleOuter[] = {0.35, 1.1, 0.6, 0.6};
    permanent = 0.55;
};

// Short barreled Foregrip Semi-Auto shotgun
class CLASS(12G_Foregrip_ShortBarrel): CLASS(12G_ShortBarrel) {
    muzzleOuter[] = {0.33, 1, 0.57, 0.57};
    permanent = 0.5;
};
