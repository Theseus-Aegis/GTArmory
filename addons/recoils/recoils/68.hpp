// 6.8 (Copy of 6.5 until someone can give me answers.)

// Long barreled variant of a 6.8 rifle (> 16")
class CLASS(68_LongBarrel): CLASS(65_LongBarrel) {};

// Medium barreled variant of a 6.8 rifle (14"-16")
class CLASS(68_MediumBarrel): CLASS(65_MediumBarrel) {};

// Short barreled variant of a 6.8 rifle (< 14")
class CLASS(68_ShortBarrel): CLASS(65_ShortBarrel) {};

// GL Variants
class CLASS(68_GL_Long): CLASS(65_GL_Long) {};
class CLASS(68_GL_Medium): CLASS(65_GL_Medium) {};
class CLASS(68_GL_Short): CLASS(65_GL_Short) {};

// Foregrip variants, inherits from GL
class CLASS(68_Foregrip_Long): CLASS(68_GL_Long) {};
class CLASS(68_Foregrip_Medium): CLASS(68_GL_Medium) {};
class CLASS(68_Foregrip_Short): CLASS(68_GL_Short) {};
