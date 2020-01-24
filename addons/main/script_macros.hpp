#define VERSION_CONFIG version = MAJOR.MINOR; versionStr = QUOTE(MAJOR.MINOR.PATCHLVL.BUILD); versionAr[] = {MAJOR,MINOR,PATCHLVL,BUILD}

// Internal
#define DOUBLES(var1,var2) ##var1##_##var2
#define TRIPLES(var1,var2,var3) ##var1##_##var2##_##var3
#define ADDON DOUBLES(PREFIX,COMPONENT)

// class
#define CLASS(var1) class DOUBLES(PREFIX,var1)
#define QCLASS(var1) QUOTE(CLASS(var1))
