// Included in CfgMagazines
class HandGrenade;
class CLASS(RGD5): HandGrenade {
    author = "Aegis Team, Mike";
    displayName = "RGD-5 Grenade";
    picture = QPATHTOF(ui\icon_grenade_rgd5_ca.paa);
    model = QPATHTOF(data\grenades\Handgrenade_rgd5.p3d);
    mass = 12;
    ammo = QCLASS(RGD5_Ammo);
    displayNameShort = "RGD-5 Grenade";
};

class CLASS(RGO): CLASS(RGD5) {
    picture = QPATHTOF(ui\icon_grenade_rgo_ca.paa);
    model = QPATHTOF(data\grenades\Handgrenade_rgo.p3d);
    ammo = QCLASS(RGO_Ammo);
    mass = 8;
    displayName = "RGO Impact";
    displayNameShort = "RGO Impact";
};
