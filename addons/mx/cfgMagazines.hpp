class CfgMagazines {
    class 30Rnd_65x39_caseless_mag;
    
    class CLASS(30Rnd_68x43_MX_Sand): 30Rnd_65x39_caseless_mag {
        author = "TyroneMF";
        scope = 2;
        lastRoundsTracer = 4;
        displayName = CSTRING(30Rnd_68x43_MX_Sand_Display);
        displayNameShort = CSTRING(30Rnd_68x43_MX_Short_Display);
        mass = 12;
        ammo = QCLASS(68x43_SPC);
    };
    class CLASS(30Rnd_68x43_MX_Black): CLASS(30Rnd_68x43_MX_Sand) {
        displayName = CSTRING(30Rnd_68x43_MX_Black_Display);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\MX_68x43_Black_co.paa)};
    };
};
