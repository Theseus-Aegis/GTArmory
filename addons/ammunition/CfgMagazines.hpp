class CfgMagazines {
    class CA_Magazine;

    CLASS(8Rnd_P_000): CA_Magazine {
        author = $STR_TACGT_Ammo_Author;
        scope = 2;
        displayName = $STR_TACGT_8Rnd_P_000_Display;
        displayNameShort = $STR_TACGT_8Rnd_P_000_Display_Short;
        ammo = QCLASS(P_12G_000);
        count = 8;
        initSpeed = 385;
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_12gauge_ca.paa";
        descriptionShort = $STR_TACGT_8Rnd_P_000_Description;
        mass = 6;
        reloadaction = "CUP_GestureReloadM1014_8Rnd";
    };

    CLASS(8Rnd_S_AP20): CA_Magazine {
        author = $STR_TACGT_ammo_Author;
        scope = 2;
        displayName = $STR_TACGT_8Rnd_S_AP20_Display;
        displayNameShort = $STR_TACGT_8Rnd_S_AP20_Display_Short;
        ammo = QCLASS(S_12G_AP20);
        count = 8;
        initSpeed = 510;
        picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_2rnd_12gauge_slugs_CA.paa";
        descriptionShort = $STR_TACGT_8Rnd_S_AP20_Description;
        mass = 6;
        reloadaction = "CUP_GestureReloadM1014_8Rnd";
    };

    CLASS(6Rnd_P_000): tacgt_8Rnd_P_000 {
        displayName = $STR_TACGT_6Rnd_P_000_Display;
        count = 6;
    };

    CLASS(6Rnd_S_AP20): tacgt_8Rnd_S_AP20 {
        displayName = $STR_TACGT_6Rnd_S_AP20_Display;
        count = 6;
    };
};
