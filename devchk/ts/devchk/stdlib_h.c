/*
 * Test of stdlib.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <wchar.h>
#include "stdlib.h"



#ifdef TET_TEST
void stdlib_h()
{
#else
int stdlib_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in stdlib.h\n");
#endif

printf("Checking data structures in stdlib.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef RAND_MAX
	CompareConstant(RAND_MAX,2147483647,1647,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: RAND_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EXIT_FAILURE
	CompareConstant(EXIT_FAILURE,1,1648,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: EXIT_FAILURE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EXIT_SUCCESS
	CompareConstant(EXIT_SUCCESS,0,1649,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: EXIT_SUCCESS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MB_CUR_MAX
	CompareConstant(MB_CUR_MAX,(__ctype_get_mb_cur_max()),1650,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: MB_CUR_MAX\n");
cnt++;
#endif

#endif

#if defined __i386__
CheckTypeSize(__compar_fn_t,4, 9231, 2, 1.0, NULL, 9079, NULL)
#elif defined __ia64__
CheckTypeSize(__compar_fn_t,8, 9231, 3, 1.3, NULL, 9079, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(__compar_fn_t,4, 9231, 6, 1.2, NULL, 9079, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(__compar_fn_t,4, 9231, 10, 1.3, NULL, 9079, NULL)
#elif defined __powerpc64__
CheckTypeSize(__compar_fn_t,8, 9231, 9, 2.0, NULL, 9079, NULL)
#elif defined __s390x__
CheckTypeSize(__compar_fn_t,8, 9231, 12, 1.3, NULL, 9079, NULL)
#elif defined __x86_64__
CheckTypeSize(__compar_fn_t,8, 9231, 11, 2.0, NULL, 9079, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9079,NULL);\n",architecture,9231,0);
Msg("Find size of __compar_fn_t (9231)\n");
#endif

#if defined __i386__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __ia64__
#elif defined __s390x__
#elif defined __s390__ && !defined __s390x__
#elif defined __x86_64__
#elif defined __powerpc64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,10483,0);
Msg("Find size of random_data (10483)\n");
#endif

#if defined __i386__
CheckTypeSize(div_t,8, 6973, 2, 1.0, NULL, 6972, NULL)
#elif defined __ia64__
CheckTypeSize(div_t,8, 6973, 3, 1.3, NULL, 6972, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(div_t,8, 6973, 6, 1.2, NULL, 6972, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(div_t,8, 6973, 10, 1.3, NULL, 6972, NULL)
#elif defined __powerpc64__
CheckTypeSize(div_t,8, 6973, 9, 2.0, NULL, 6972, NULL)
#elif defined __s390x__
CheckTypeSize(div_t,8, 6973, 12, 1.3, NULL, 6972, NULL)
#elif defined __x86_64__
CheckTypeSize(div_t,8, 6973, 11, 2.0, NULL, 6972, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,6972,NULL);\n",architecture,6973,0);
Msg("Find size of div_t (6973)\n");
#endif

#if defined __i386__
CheckTypeSize(ldiv_t,8, 6975, 2, 1.0, NULL, 6974, NULL)
#elif defined __ia64__
CheckTypeSize(ldiv_t,16, 6975, 3, 1.3, NULL, 6974, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ldiv_t,8, 6975, 6, 1.2, NULL, 6974, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ldiv_t,8, 6975, 10, 1.3, NULL, 6974, NULL)
#elif defined __powerpc64__
CheckTypeSize(ldiv_t,16, 6975, 9, 2.0, NULL, 6974, NULL)
#elif defined __s390x__
CheckTypeSize(ldiv_t,16, 6975, 12, 1.3, NULL, 6974, NULL)
#elif defined __x86_64__
CheckTypeSize(ldiv_t,16, 6975, 11, 2.0, NULL, 6974, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,6974,NULL);\n",architecture,6975,0);
Msg("Find size of ldiv_t (6975)\n");
#endif

#if defined __i386__
CheckTypeSize(lldiv_t,16, 6897, 2, 1.2, NULL, 6976, NULL)
#elif defined __ia64__
CheckTypeSize(lldiv_t,16, 6897, 3, 1.3, NULL, 6976, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(lldiv_t,16, 6897, 6, 1.2, NULL, 6976, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(lldiv_t,16, 6897, 10, 1.3, NULL, 6976, NULL)
#elif defined __powerpc64__
CheckTypeSize(lldiv_t,16, 6897, 9, 2.0, NULL, 6976, NULL)
#elif defined __s390x__
CheckTypeSize(lldiv_t,16, 6897, 12, 1.3, NULL, 6976, NULL)
#elif defined __x86_64__
CheckTypeSize(lldiv_t,16, 6897, 11, 2.0, NULL, 6976, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,6976, NULL);\n",architecture,6897,0);
Msg("Find size of lldiv_t (6897)\n");
#endif

extern double __strtod_internal_db(const char *, char * *, int);
CheckInterfacedef(__strtod_internal,__strtod_internal_db);
extern float __strtof_internal_db(const char *, char * *, int);
CheckInterfacedef(__strtof_internal,__strtof_internal_db);
extern long int __strtol_internal_db(const char *, char * *, int, int);
CheckInterfacedef(__strtol_internal,__strtol_internal_db);
extern long double __strtold_internal_db(const char *, char * *, int);
CheckInterfacedef(__strtold_internal,__strtold_internal_db);
extern long long int __strtoll_internal_db(const char *, char * *, int, int);
CheckInterfacedef(__strtoll_internal,__strtoll_internal_db);
extern unsigned long int __strtoul_internal_db(const char *, char * *, int, int);
CheckInterfacedef(__strtoul_internal,__strtoul_internal_db);
extern unsigned long long int __strtoull_internal_db(const char *, char * *, int, int);
CheckInterfacedef(__strtoull_internal,__strtoull_internal_db);
extern long int a64l_db(const char *);
CheckInterfacedef(a64l,a64l_db);
extern void abort_db(void);
CheckInterfacedef(abort,abort_db);
extern int abs_db(int);
CheckInterfacedef(abs,abs_db);
extern int atexit_db(void(*atexit_func)(void)
);
CheckInterfacedef(atexit,atexit_db);
extern double atof_db(const char *);
CheckInterfacedef(atof,atof_db);
extern int atoi_db(const char *);
CheckInterfacedef(atoi,atoi_db);
extern long int atol_db(const char *);
CheckInterfacedef(atol,atol_db);
extern long long int atoll_db(const char *);
CheckInterfacedef(atoll,atoll_db);
extern void * bsearch_db(const void *, const void *, size_t, size_t, __compar_fn_t);
CheckInterfacedef(bsearch,bsearch_db);
extern div_t div_db(int, int);
CheckInterfacedef(div,div_db);
extern double drand48_db(void);
CheckInterfacedef(drand48,drand48_db);
extern char * ecvt_db(double, int, int *, int *);
CheckInterfacedef(ecvt,ecvt_db);
extern double erand48_db(unsigned short[3]);
CheckInterfacedef(erand48,erand48_db);
extern void exit_db(int);
CheckInterfacedef(exit,exit_db);
extern char * fcvt_db(double, int, int *, int *);
CheckInterfacedef(fcvt,fcvt_db);
extern char * gcvt_db(double, int, char *);
CheckInterfacedef(gcvt,gcvt_db);
extern char * getenv_db(const char *);
CheckInterfacedef(getenv,getenv_db);
extern int getsubopt_db(char * *, char *const  *, char * *);
CheckInterfacedef(getsubopt,getsubopt_db);
extern int grantpt_db(int);
CheckInterfacedef(grantpt,grantpt_db);
extern long int jrand48_db(unsigned short[3]);
CheckInterfacedef(jrand48,jrand48_db);
extern char * l64a_db(long int);
CheckInterfacedef(l64a,l64a_db);
extern long int labs_db(long int);
CheckInterfacedef(labs,labs_db);
extern void lcong48_db(unsigned short[7]);
CheckInterfacedef(lcong48,lcong48_db);
extern ldiv_t ldiv_db(long int, long int);
CheckInterfacedef(ldiv,ldiv_db);
extern long long int llabs_db(long long int);
CheckInterfacedef(llabs,llabs_db);
extern lldiv_t lldiv_db(long long int, long long int);
CheckInterfacedef(lldiv,lldiv_db);
extern long int lrand48_db(void);
CheckInterfacedef(lrand48,lrand48_db);
extern int mblen_db(const char *, size_t);
CheckInterfacedef(mblen,mblen_db);
extern size_t mbstowcs_db(wchar_t *, const char *, size_t);
CheckInterfacedef(mbstowcs,mbstowcs_db);
extern int mbtowc_db(wchar_t *, const char *, size_t);
CheckInterfacedef(mbtowc,mbtowc_db);
extern char * mktemp_db(char *);
CheckInterfacedef(mktemp,mktemp_db);
extern long int mrand48_db(void);
CheckInterfacedef(mrand48,mrand48_db);
extern long int nrand48_db(unsigned short[3]);
CheckInterfacedef(nrand48,nrand48_db);
extern char * ptsname_db(int);
CheckInterfacedef(ptsname,ptsname_db);
extern int putenv_db(char *);
CheckInterfacedef(putenv,putenv_db);
extern void qsort_db(void *, size_t, size_t, const __compar_fn_t);
CheckInterfacedef(qsort,qsort_db);
extern int rand_db(void);
CheckInterfacedef(rand,rand_db);
extern int rand_r_db(unsigned int *);
CheckInterfacedef(rand_r,rand_r_db);
extern unsigned short * seed48_db(unsigned short[]);
CheckInterfacedef(seed48,seed48_db);
extern void srand48_db(long int);
CheckInterfacedef(srand48,srand48_db);
extern int unlockpt_db(int);
CheckInterfacedef(unlockpt,unlockpt_db);
extern size_t wcstombs_db(char *, const wchar_t *, size_t);
CheckInterfacedef(wcstombs,wcstombs_db);
extern int wctomb_db(char *, wchar_t);
CheckInterfacedef(wctomb,wctomb_db);
extern int system_db(const char *);
CheckInterfacedef(system,system_db);
extern void * calloc_db(size_t, size_t);
CheckInterfacedef(calloc,calloc_db);
extern void free_db(void *);
CheckInterfacedef(free,free_db);
extern char * initstate_db(unsigned int, char *, size_t);
CheckInterfacedef(initstate,initstate_db);
extern void * malloc_db(size_t);
CheckInterfacedef(malloc,malloc_db);
extern long int random_db(void);
CheckInterfacedef(random,random_db);
extern void * realloc_db(void *, size_t);
CheckInterfacedef(realloc,realloc_db);
extern char * setstate_db(char *);
CheckInterfacedef(setstate,setstate_db);
extern void srand_db(unsigned int);
CheckInterfacedef(srand,srand_db);
extern void srandom_db(unsigned int);
CheckInterfacedef(srandom,srandom_db);
extern double strtod_db(const char *, char * *);
CheckInterfacedef(strtod,strtod_db);
extern float strtof_db(const char *, char * *);
CheckInterfacedef(strtof,strtof_db);
extern long int strtol_db(const char *, char * *, int);
CheckInterfacedef(strtol,strtol_db);
extern long double strtold_db(const char *, char * *);
CheckInterfacedef(strtold,strtold_db);
extern long long int strtoll_db(const char *, char * *, int);
CheckInterfacedef(strtoll,strtoll_db);
extern long long int strtoq_db(const char *, char * *, int);
CheckInterfacedef(strtoq,strtoq_db);
extern unsigned long int strtoul_db(const char *, char * *, int);
CheckInterfacedef(strtoul,strtoul_db);
extern unsigned long long int strtoull_db(const char *, char * *, int);
CheckInterfacedef(strtoull,strtoull_db);
extern unsigned long long int strtouq_db(const char *, char * *, int);
CheckInterfacedef(strtouq,strtouq_db);
extern void _Exit_db(int);
CheckInterfacedef(_Exit,_Exit_db);
extern size_t __ctype_get_mb_cur_max_db(void);
CheckInterfacedef(__ctype_get_mb_cur_max,__ctype_get_mb_cur_max_db);
extern char * realpath_db(const char *, char *);
CheckInterfacedef(realpath,realpath_db);
extern int setenv_db(const char *, const char *, int);
CheckInterfacedef(setenv,setenv_db);
extern int unsetenv_db(const char *);
CheckInterfacedef(unsetenv,unsetenv_db);
extern int getloadavg_db(double[], int);
CheckInterfacedef(getloadavg,getloadavg_db);
extern int mkstemp64_db(char *);
CheckInterfacedef(mkstemp64,mkstemp64_db);
extern int posix_memalign_db(void * *, size_t, size_t);
CheckInterfacedef(posix_memalign,posix_memalign_db);
extern int posix_openpt_db(int);
CheckInterfacedef(posix_openpt,posix_openpt_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in stdlib.h\n\n",pcnt,cnt);
return cnt;
#endif

}
