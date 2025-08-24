class CfgMods {
    class Mod_Base;
    class PREFIX: Mod_Base {
        author = CSTRING(Author);
        dir = "@synixe_armoury";
        name = CSTRING(Name);
        picture = QPATHTOF(ui\synixe_armoury_ca.paa);
        logo = QPATHTOF(ui\synixe_armoury_ca.paa);
        logoOver = QPATHTOF(ui\synixe_armoury_ca.paa);
        logoSmall = QPATHTOF(ui\synixe_armoury_ca.paa);
        hidePicture = "true";
        hideName = "true";
        actionName = "GitHub";
        action = "https://github.com/SynixeContractors/Armoury";
        description = "Issue Tracker: https://github.com/SynixeContractors/Armoury/issues";
    };
};
