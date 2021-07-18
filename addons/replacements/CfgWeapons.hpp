class CfgWeapons {
    class FirstAidKit;
    class CLASS(IFAK): FirstAidKit {
        author = ECSTRING(main,Author);
        //picture = QPATHTOF(ui\);
        displayName = CSTRING(IFAK_Name);
        descriptionShort = "";
    };
};
