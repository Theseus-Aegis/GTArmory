// Internal
#define DOUBLES(var1,var2) var1##_##var2
#define TRIPLES(var1,var2,var3) var1##_##var2##_##var3
#define ADDON DOUBLES(PREFIX,COMPONENT)

// Main
#define QUOTE(var1) #var1
#define VERSION_CONFIG version = MAJOR.MINOR; versionStr = QUOTE(MAJOR.MINOR.PATCH.BUILD); versionAr[] = {MAJOR,MINOR,PATCH,BUILD}

// Class
#define CLASS(var1) DOUBLES(PREFIX,var1)
#define QCLASS(var1) QUOTE(DOUBLES(PREFIX,var1))

// Stringtable
#define CSTRING(var1) QUOTE(TRIPLES($STR,ADDON,var1))
#define ECSTRING(var1,var2) QUOTE(TRIPLES($STR,DOUBLES(PREFIX,var1),var2))

// Path
#define PATHTOF_SYS(var1,var2,var3) \MAINPREFIX\##var1\SUBPREFIX\##var2\##var3
#define PATHTOF(var1) PATHTOF_SYS(PREFIX,COMPONENT,var1)
#define QPATHTOF(var1) QUOTE(PATHTOF(var1))


#define MACRO_ADDWEAPON(WEAPON,COUNT) class _xx_##WEAPON { \
    weapon = #WEAPON; \
    count = COUNT; \
}

#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
}

#define MACRO_ADDMAGAZINE(MAGAZINE,COUNT) class _xx_##MAGAZINE { \
    magazine = #MAGAZINE; \
    count = COUNT; \
}

#define MACRO_ADDBACKPACK(BACKPACK,COUNT) class _xx_##BACKPACK { \
    backpack = #BACKPACK; \
    count = COUNT; \
}
