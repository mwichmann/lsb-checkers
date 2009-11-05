#ifndef LSBCC_MODE
#ifdef __USE_FORTIFY_LEVEL
#undef __USE_FORTIFY_LEVEL
#endif
#define __USE_FORTIFY_LEVEL 2
#endif
#ifndef LSBCC_MODE
extern double __strtod_internal(const char *, char **, int);
extern float __strtof_internal(const char *, char **, int);
extern long int __strtol_internal(const char *, char **, int, int);
extern long double __strtold_internal(const char *, char **, int);
extern long long int __strtoll_internal(const char *, char **, int, int);
extern unsigned long int __strtoul_internal(const char *, char **, int, int);
extern unsigned long long int __strtoull_internal(const char *, char **, int, int);
#endif
#include <wchar.h>
