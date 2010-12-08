#ifndef LSBCC_MODE
#include <png.h>
#if (PNG_LIBPNG_VER_MAJOR != 1) || (PNG_LIBPNG_VER_MINOR != 2) || (PNG_LIBPNG_VER_RELEASE != 8)
    typedef void * version_1_2_8;
#endif
#if (PNG_LIBPNG_VER_MAJOR == 1) && (PNG_LIBPNG_VER_MINOR == 2) && (PNG_LIBPNG_VER_RELEASE >= 43)
#define irowbytes user_chunk_cache_max
#endif
#endif

