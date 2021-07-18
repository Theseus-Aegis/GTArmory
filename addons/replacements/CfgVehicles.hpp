class CfgVehicles {
    class Item_FirstAidKit;
    class CLASS(Item_IFAK): Item_FirstAidKit {
        author = ECSTRING(main,Author);
        displayName = CSTRING(IFAK_Name);
        class TransportItems {
            MACRO_ADDITEM(CLASS(IFAK), 1);
        };
    };
};
