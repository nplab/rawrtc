// Module level overwrites global level if present
#ifdef RAWRTC_DEBUG_MODULE_LEVEL
    #define DEBUG_LEVEL RAWRTC_DEBUG_MODULE_LEVEL
#else
    #define DEBUG_LEVEL RAWRTC_DEBUG_LEVEL
#endif

#include <re_dbg.h>

// Undef for next module
#undef RAWRTC_DEBUG_MODULE_LEVEL
