#ifndef DEBUG_H
#define DEBUG_H
#if defined(DEBUG_BUILD) && !defined(WASI_BUILD)

#include <stdio.h>

// Print debug messages
#define debug_printf(...) printf("DEBUG: %s:%d:%s(): ", __FILE__, __LINE__, __func__);\
                          printf(__VA_ARGS__);

#else // DEBUG_BUILD

#define debug_printf(...)

#endif // DEBUG_BUILD
#endif // DEBUG_H
