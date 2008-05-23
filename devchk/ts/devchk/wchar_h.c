/*
 * Test of wchar.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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
#include "wchar.h"



#ifdef TET_TEST
void wchar_h()
{
#else
int wchar_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in wchar.h\n");
#endif

printf("Checking data structures in wchar.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef WCHAR_MIN
	CompareConstant(WCHAR_MIN,0x80000000,1953,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: WCHAR_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WCHAR_MAX
	CompareConstant(WCHAR_MAX,0x7FFFFFFF,1954,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: WCHAR_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WEOF
	CompareConstant(WEOF,(0xffffffffu),1955,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: WEOF\n");
cnt++;
#endif

#endif

extern double __wcstod_internal_db(const wchar_t *, wchar_t * *, int);
CheckInterfacedef(__wcstod_internal,__wcstod_internal_db);
extern float __wcstof_internal_db(const wchar_t *, wchar_t * *, int);
CheckInterfacedef(__wcstof_internal,__wcstof_internal_db);
extern long int __wcstol_internal_db(const wchar_t *, wchar_t * *, int, int);
CheckInterfacedef(__wcstol_internal,__wcstol_internal_db);
extern long double __wcstold_internal_db(const wchar_t *, wchar_t * *, int);
CheckInterfacedef(__wcstold_internal,__wcstold_internal_db);
extern unsigned long int __wcstoul_internal_db(const wchar_t *, wchar_t * *, int, int);
CheckInterfacedef(__wcstoul_internal,__wcstoul_internal_db);
extern wchar_t * wcscat_db(wchar_t *, const wchar_t *);
CheckInterfacedef(wcscat,wcscat_db);
extern wchar_t * wcschr_db(const wchar_t *, wchar_t);
CheckInterfacedef(wcschr,wcschr_db);
extern int wcscmp_db(const wchar_t *, const wchar_t *);
CheckInterfacedef(wcscmp,wcscmp_db);
extern int wcscoll_db(const wchar_t *, const wchar_t *);
CheckInterfacedef(wcscoll,wcscoll_db);
extern wchar_t * wcscpy_db(wchar_t *, const wchar_t *);
CheckInterfacedef(wcscpy,wcscpy_db);
extern size_t wcscspn_db(const wchar_t *, const wchar_t *);
CheckInterfacedef(wcscspn,wcscspn_db);
extern wchar_t * wcsdup_db(const wchar_t *);
CheckInterfacedef(wcsdup,wcsdup_db);
extern wchar_t * wcsncat_db(wchar_t *, const wchar_t *, size_t);
CheckInterfacedef(wcsncat,wcsncat_db);
extern int wcsncmp_db(const wchar_t *, const wchar_t *, size_t);
CheckInterfacedef(wcsncmp,wcsncmp_db);
extern wchar_t * wcsncpy_db(wchar_t *, const wchar_t *, size_t);
CheckInterfacedef(wcsncpy,wcsncpy_db);
extern wchar_t * wcspbrk_db(const wchar_t *, const wchar_t *);
CheckInterfacedef(wcspbrk,wcspbrk_db);
extern wchar_t * wcsrchr_db(const wchar_t *, wchar_t);
CheckInterfacedef(wcsrchr,wcsrchr_db);
extern size_t wcsspn_db(const wchar_t *, const wchar_t *);
CheckInterfacedef(wcsspn,wcsspn_db);
extern wchar_t * wcsstr_db(const wchar_t *, const wchar_t *);
CheckInterfacedef(wcsstr,wcsstr_db);
extern wchar_t * wcstok_db(wchar_t *, const wchar_t *, wchar_t * *);
CheckInterfacedef(wcstok,wcstok_db);
extern int wcswidth_db(const wchar_t *, size_t);
CheckInterfacedef(wcswidth,wcswidth_db);
extern size_t wcsxfrm_db(wchar_t *, const wchar_t *, size_t);
CheckInterfacedef(wcsxfrm,wcsxfrm_db);
extern int wctob_db(wint_t);
CheckInterfacedef(wctob,wctob_db);
extern int wcwidth_db(wchar_t);
CheckInterfacedef(wcwidth,wcwidth_db);
extern wchar_t * wmemchr_db(const wchar_t *, wchar_t, size_t);
CheckInterfacedef(wmemchr,wmemchr_db);
extern int wmemcmp_db(const wchar_t *, const wchar_t *, size_t);
CheckInterfacedef(wmemcmp,wmemcmp_db);
extern wchar_t * wmemcpy_db(wchar_t *, const wchar_t *, size_t);
CheckInterfacedef(wmemcpy,wmemcpy_db);
extern wchar_t * wmemmove_db(wchar_t *, const wchar_t *, size_t);
CheckInterfacedef(wmemmove,wmemmove_db);
extern wchar_t * wmemset_db(wchar_t *, wchar_t, size_t);
CheckInterfacedef(wmemset,wmemset_db);
extern size_t mbrlen_db(const char *, size_t, mbstate_t *);
CheckInterfacedef(mbrlen,mbrlen_db);
extern size_t mbrtowc_db(wchar_t *, const char *, size_t, mbstate_t *);
CheckInterfacedef(mbrtowc,mbrtowc_db);
extern int mbsinit_db(const mbstate_t *);
CheckInterfacedef(mbsinit,mbsinit_db);
extern size_t mbsnrtowcs_db(wchar_t *, const char * *, size_t, size_t, mbstate_t *);
CheckInterfacedef(mbsnrtowcs,mbsnrtowcs_db);
extern size_t mbsrtowcs_db(wchar_t *, const char * *, size_t, mbstate_t *);
CheckInterfacedef(mbsrtowcs,mbsrtowcs_db);
extern wchar_t * wcpcpy_db(wchar_t *, const wchar_t *);
CheckInterfacedef(wcpcpy,wcpcpy_db);
extern wchar_t * wcpncpy_db(wchar_t *, const wchar_t *, size_t);
CheckInterfacedef(wcpncpy,wcpncpy_db);
extern size_t wcrtomb_db(char *, wchar_t, mbstate_t *);
CheckInterfacedef(wcrtomb,wcrtomb_db);
extern size_t wcslen_db(const wchar_t *);
CheckInterfacedef(wcslen,wcslen_db);
extern size_t wcsnrtombs_db(char *, const wchar_t * *, size_t, size_t, mbstate_t *);
CheckInterfacedef(wcsnrtombs,wcsnrtombs_db);
extern size_t wcsrtombs_db(char *, const wchar_t * *, size_t, mbstate_t *);
CheckInterfacedef(wcsrtombs,wcsrtombs_db);
extern double wcstod_db(const wchar_t *, wchar_t * *);
CheckInterfacedef(wcstod,wcstod_db);
extern float wcstof_db(const wchar_t *, wchar_t * *);
CheckInterfacedef(wcstof,wcstof_db);
extern long int wcstol_db(const wchar_t *, wchar_t * *, int);
CheckInterfacedef(wcstol,wcstol_db);
extern long double wcstold_db(const wchar_t *, wchar_t * *);
CheckInterfacedef(wcstold,wcstold_db);
extern long long int wcstoq_db(const wchar_t *, wchar_t * *, int);
CheckInterfacedef(wcstoq,wcstoq_db);
extern unsigned long int wcstoul_db(const wchar_t *, wchar_t * *, int);
CheckInterfacedef(wcstoul,wcstoul_db);
extern unsigned long long int wcstouq_db(const wchar_t *, wchar_t * *, int);
CheckInterfacedef(wcstouq,wcstouq_db);
extern wchar_t * wcswcs_db(const wchar_t *, const wchar_t *);
CheckInterfacedef(wcswcs,wcswcs_db);
extern int wcscasecmp_db(const wchar_t *, const wchar_t *);
CheckInterfacedef(wcscasecmp,wcscasecmp_db);
extern int wcsncasecmp_db(const wchar_t *, const wchar_t *, size_t);
CheckInterfacedef(wcsncasecmp,wcsncasecmp_db);
extern size_t wcsnlen_db(const wchar_t *, size_t);
CheckInterfacedef(wcsnlen,wcsnlen_db);
extern long long int wcstoll_db(const wchar_t *, wchar_t * *, int);
CheckInterfacedef(wcstoll,wcstoll_db);
extern unsigned long long int wcstoull_db(const wchar_t *, wchar_t * *, int);
CheckInterfacedef(wcstoull,wcstoull_db);
extern wint_t btowc_db(int);
CheckInterfacedef(btowc,btowc_db);
extern wint_t fgetwc_db(FILE *);
CheckInterfacedef(fgetwc,fgetwc_db);
extern wint_t fgetwc_unlocked_db(FILE *);
CheckInterfacedef(fgetwc_unlocked,fgetwc_unlocked_db);
extern wchar_t * fgetws_db(wchar_t *, int, FILE *);
CheckInterfacedef(fgetws,fgetws_db);
extern wint_t fputwc_db(wchar_t, FILE *);
CheckInterfacedef(fputwc,fputwc_db);
extern int fputws_db(const wchar_t *, FILE *);
CheckInterfacedef(fputws,fputws_db);
extern int fwide_db(FILE *, int);
CheckInterfacedef(fwide,fwide_db);
extern int fwprintf_db(FILE *, const wchar_t *, ...);
CheckInterfacedef(fwprintf,fwprintf_db);
extern int fwscanf_db(FILE *, const wchar_t *, ...);
CheckInterfacedef(fwscanf,fwscanf_db);
extern wint_t getwc_db(FILE *);
CheckInterfacedef(getwc,getwc_db);
extern wint_t getwchar_db(void);
CheckInterfacedef(getwchar,getwchar_db);
extern wint_t putwc_db(wchar_t, FILE *);
CheckInterfacedef(putwc,putwc_db);
extern wint_t putwchar_db(wchar_t);
CheckInterfacedef(putwchar,putwchar_db);
extern int swprintf_db(wchar_t *, size_t, const wchar_t *, ...);
CheckInterfacedef(swprintf,swprintf_db);
extern int swscanf_db(const wchar_t *, const wchar_t *, ...);
CheckInterfacedef(swscanf,swscanf_db);
extern wint_t ungetwc_db(wint_t, FILE *);
CheckInterfacedef(ungetwc,ungetwc_db);
extern int vfwprintf_db(FILE *, const wchar_t *, va_list);
CheckInterfacedef(vfwprintf,vfwprintf_db);
extern int vfwscanf_db(FILE *, const wchar_t *, va_list);
CheckInterfacedef(vfwscanf,vfwscanf_db);
extern int vswprintf_db(wchar_t *, size_t, const wchar_t *, va_list);
CheckInterfacedef(vswprintf,vswprintf_db);
extern int vswscanf_db(const wchar_t *, const wchar_t *, va_list);
CheckInterfacedef(vswscanf,vswscanf_db);
extern int vwprintf_db(const wchar_t *, va_list);
CheckInterfacedef(vwprintf,vwprintf_db);
extern int vwscanf_db(const wchar_t *, va_list);
CheckInterfacedef(vwscanf,vwscanf_db);
extern size_t wcsftime_db(wchar_t *, size_t, const wchar_t *, const struct tm *);
CheckInterfacedef(wcsftime,wcsftime_db);
extern int wprintf_db(const wchar_t *, ...);
CheckInterfacedef(wprintf,wprintf_db);
extern int wscanf_db(const wchar_t *, ...);
CheckInterfacedef(wscanf,wscanf_db);
extern int __fwprintf_chk_db(FILE *, int, const wchar_t *, ...);
CheckInterfacedef(__fwprintf_chk,__fwprintf_chk_db);
extern int __swprintf_chk_db(wchar_t *, size_t, int, size_t, const wchar_t *, ...);
CheckInterfacedef(__swprintf_chk,__swprintf_chk_db);
extern wchar_t * __wcscat_chk_db(wchar_t *, const wchar_t *, size_t);
CheckInterfacedef(__wcscat_chk,__wcscat_chk_db);
extern wchar_t * __wcscpy_chk_db(wchar_t *, const wchar_t *, size_t);
CheckInterfacedef(__wcscpy_chk,__wcscpy_chk_db);
extern wchar_t * __wcsncpy_chk_db(wchar_t *, const wchar_t *, size_t, size_t);
CheckInterfacedef(__wcsncpy_chk,__wcsncpy_chk_db);
extern wchar_t * __wmemmove_chk_db(wchar_t *, const wchar_t *, size_t, size_t);
CheckInterfacedef(__wmemmove_chk,__wmemmove_chk_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in wchar.h\n\n",pcnt,cnt);
return cnt;
#endif

}
