#include "script_mod.hpp"
#include "\x\cba\addons\main\script_macros_common.hpp"

// Backwards compat
#define BWC_CLASS(var1,var2)        \
class var1 : var2 {                 \
    author = ECSTRING(cigs,author); \
    scope = 1;                      \
}

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(var1) TRIPLES(ADDON,fnc,var1) = compile preProcessFileLineNumbers 'PATHTO_SYS(PREFIX,COMPONENT_F,DOUBLES(functions\fnc,var1))'
    #undef PREPMAIN
    #define PREPMAIN(var1) TRIPLES(PREFIX,fnc,var1) = compile preProcessFileLineNumbers 'PATHTO_SYS(PREFIX,COMPONENT_F,DOUBLES(functions\fnc,var1))'
#else
    #undef PREP
    #define PREP(var1) ['PATHTO_SYS(PREFIX,COMPONENT_F,DOUBLES(functions\fnc,var1))', 'TRIPLES(ADDON,fnc,var1)'] call SLX_XEH_COMPILE_NEW
    #undef PREPMAIN
    #define PREPMAIN(var1) ['PATHTO_SYS(PREFIX,COMPONENT_F,DOUBLES(functions\fnc,var1))', 'TRIPLES(PREFIX,fnc,var1)'] call SLX_XEH_COMPILE_NEW
#endif
