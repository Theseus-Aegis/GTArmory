class CfgWeapons {
    class arifle_MX_F;
    class arifle_MX_Black_F;

    class CLASS(MX_68x43_Sand): arifle_MX_F {
        author = "TyroneMF";
        scope = 2;
        scopeArsenal = 2;
        baseWeapon = QCLASS(MX_68x43_Sand);
        displayName = CSTRING(MX_68x43_Sand_Display);
        magazines[] = {QCLASS(30Rnd_68x43_MX_Sand)};
        magazineWell[] = {QCLASS(68x43_MX)};
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\MX_68x43_Sand_co.paa),
            QPATHTOF(data\MX_68x43_Sand_Short_co.paa)
        };
    };

    class CLASS(MX_68x43_Black): arifle_MX_Black_F {
        author = "TyroneMF";
        scope = 2;
        scopeArsenal = 2;
        baseWeapon = QCLASS(MX_68x43_Black);
        displayName = CSTRING(MX_68x43_Black_Display);
        magazines[] = {QCLASS(30Rnd_68x43_MX_Black)};
        magazineWell[] = {QCLASS(68x43_MX)};
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\MX_68x43_Black_co.paa),
            QPATHTOF(data\MX_68x43_Black_Short_co.paa)
        };
    };
};
