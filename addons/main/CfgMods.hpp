class CfgMods {
    class Mod_Base;
    class PREFIX: Mod_Base {
        author = CSTRING(Author);
        dir = "@gt_armory";
        name = CSTRING(Name);
        picture = QPATHTOF(ui\tacgt_logo_64.paa);
        logo = QPATHTOF(ui\tacgt_logo_64.paa);
        logoOver = QPATHTOF(ui\tacgt_logo_128.paa);
        logoSmall = QPATHTOF(ui\tacgt_logo_128.paa);
        hidePicture = "true";
        hideName = "true";
        actionName = "GitHub";
        action = "https://github.com/Theseus-Aegis/GTArmory";
        description = "Issue Tracker: https://github.com/Theseus-Aegis/GTArmory/issues";
    };
};
