// Western Sahara - AA40
class CLASS(8Rnd_AA40_000): 8Rnd_12Gauge_AA40_Pellets_lxWS {
    ammo = QCLASS(P_12G_000);
    displayName = "8Rnd AA40 (Magnum)";
    displayNameShort = "#00 Magnum";
    descriptionShort = "#00 Magnum Shells";
    mass = 6.5;
};
class CLASS(8Rnd_AA40_AP20): CLASS(8Rnd_AA40_000){
    ammo = QCLASS(S_12G_AP20);
    displayName = "8Rnd AA40 (Slug)";
    displayNameShort = "AP-20";
    descriptionShort = "AP-20 Slug";
};
class CLASS(8Rnd_AA40_Smoke): CLASS(8Rnd_AA40_AP20) {
    ammo = "B_12gauge_Smoke_Cartridge_lxWS";
    displayName = "8Rnd AA40 (Smoke)";
    displayNameShort = "Smoke Screen";
    descriptionShort = "Smoke Shell";
};
class CLASS(20Rnd_AA40_000): 20Rnd_12Gauge_AA40_Pellets_lxWS {
    ammo = QCLASS(P_12G_000);
    displayName = "20Rnd AA40 (Magnum)";
    displayNameShort = "#00 Magnum";
    descriptionShort = "#00 Magnum Shells";
    mass = 12;
};
class CLASS(20Rnd_AA40_AP20): CLASS(20Rnd_AA40_000) {
    ammo = QCLASS(S_12G_AP20);
    displayName = "20Rnd AA40 (Slug)";
    displayNameShort = "AP-20";
    descriptionShort = "AP-20 Slug";
};
class CLASS(20Rnd_AA40_Smoke): CLASS(20Rnd_AA40_AP20) {
    ammo = "B_12gauge_Smoke_Cartridge_lxWS";
    displayName = "20Rnd AA40 (Smoke)";
    displayNameShort = "Smoke Screen";
    descriptionShort = "Smoke Shell";
};
