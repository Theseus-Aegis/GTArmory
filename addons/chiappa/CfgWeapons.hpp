class CfgWeapons {
    class Pistol_Base_F;
    class hgun_Pistol_heavy_02_F: Pistol_Base_F {
        class Single: Mode_SemiAuto {
            reloadTime = 0;
        };
    };

    class CLASS(Rhino_357): hgun_Pistol_heavy_02_F {
        author = ECSTRING(main,Author);
        displayName = "Chiappa Rhino 60DS (.357)";
        baseWeapon = QCLASS(Rhino_357);
        magazines[] = {QCLASS(6Rnd_357)};
        magazineWell[] = {QCLASS(Cylinder_357)};
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\357_magnum_co.paa),
            "\A3\Weapons_F_EPA\Pistols\Pistol_Heavy_02\data\Pistol_Heavy_02_mag_co"
        };
    };

    class CLASS(Rhino_44): hgun_Pistol_heavy_02_F {
        author = ECSTRING(main,Author);
        displayName = "Chiappa Rhino 60DS (.44)";
        baseWeapon = QCLASS(Rhino_44);
        magazines[] = {QCLASS(6Rnd_44)};
        magazineWell[] = {QCLASS(Cylinder_44)};
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\44_magnum_co.paa),
            "\A3\Weapons_F_EPA\Pistols\Pistol_Heavy_02\data\Pistol_Heavy_02_mag_co"
        };
    };
};
