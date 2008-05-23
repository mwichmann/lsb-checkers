#ifndef LSBCC_MODE
#ifdef __USE_FORTIFY_LEVEL
#undef __USE_FORTIFY_LEVEL
#endif
#define __USE_FORTIFY_LEVEL 2
#endif
#include <stdarg.h>
#ifndef LSBCC_MODE      /* XXX hand-edit */
/* for native headers, must define before including wchar.h */
#define __OPTIMIZE__ 1
#endif
