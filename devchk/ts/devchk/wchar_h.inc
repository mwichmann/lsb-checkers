/*
 * some hacks below for native headers, must define before including wchar.h
 * these might change again in glibc at some future point
 */
#ifndef LSBCC_MODE
#ifdef __USE_FORTIFY_LEVEL
#undef __USE_FORTIFY_LEVEL
#endif
#define __USE_FORTIFY_LEVEL 2
#endif
#include <stdarg.h>
#ifndef LSBCC_MODE
#define __OPTIMIZE__ 1
#endif
#ifndef LSBCC_MODE
extern double __wcstod_internal(const wchar_t *, wchar_t * *, int);
extern float __wcstof_internal(const wchar_t *, wchar_t * *, int);
extern long int __wcstol_internal(const wchar_t *, wchar_t * *, int, int);
extern long double __wcstold_internal(const wchar_t *, wchar_t * *, int);
extern unsigned long int __wcstoul_internal(const wchar_t *, wchar_t * *, int, int);
#endif
