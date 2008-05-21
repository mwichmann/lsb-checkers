/*
 * Test of stdlib.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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
Msg("Find size of __compar_fn_t (9231)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9079,NULL);\n",architecture,9231,0);
#endif

#if defined __i386__
CheckTypeSize(struct random_data,28, 10483, 2, 1.3, NULL, 0, NULL)
CheckMemberSize(struct random_data,fptr,4,2,40027)
CheckOffset(struct random_data,fptr,0,2,40027)
CheckMemberSize(struct random_data,rptr,4,2,40028)
CheckOffset(struct random_data,rptr,4,2,40028)
CheckMemberSize(struct random_data,state,4,2,40029)
CheckOffset(struct random_data,state,8,2,40029)
CheckMemberSize(struct random_data,rand_type,4,2,40030)
CheckOffset(struct random_data,rand_type,12,2,40030)
CheckMemberSize(struct random_data,rand_deg,4,2,40031)
CheckOffset(struct random_data,rand_deg,16,2,40031)
CheckMemberSize(struct random_data,rand_sep,4,2,40032)
CheckOffset(struct random_data,rand_sep,20,2,40032)
CheckMemberSize(struct random_data,end_ptr,4,2,40033)
CheckOffset(struct random_data,end_ptr,24,2,40033)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct random_data,28, 10483, 6, 1.3, NULL, 0, NULL)
CheckMemberSize(struct random_data,rptr,4,6,40028)
CheckOffset(struct random_data,rptr,4,6,40028)
CheckMemberSize(struct random_data,state,4,6,40029)
CheckOffset(struct random_data,state,8,6,40029)
CheckMemberSize(struct random_data,rand_type,4,6,40030)
CheckOffset(struct random_data,rand_type,12,6,40030)
CheckMemberSize(struct random_data,rand_deg,4,6,40031)
CheckOffset(struct random_data,rand_deg,16,6,40031)
CheckMemberSize(struct random_data,rand_sep,4,6,40032)
CheckOffset(struct random_data,rand_sep,20,6,40032)
CheckMemberSize(struct random_data,end_ptr,4,6,40033)
CheckOffset(struct random_data,end_ptr,24,6,40033)
#elif defined __ia64__
CheckTypeSize(struct random_data,48, 10483, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct random_data,rptr,8,3,40028)
CheckOffset(struct random_data,rptr,8,3,40028)
CheckMemberSize(struct random_data,state,8,3,40029)
CheckOffset(struct random_data,state,16,3,40029)
CheckMemberSize(struct random_data,rand_type,4,3,40030)
CheckOffset(struct random_data,rand_type,24,3,40030)
CheckMemberSize(struct random_data,rand_deg,4,3,40031)
CheckOffset(struct random_data,rand_deg,28,3,40031)
CheckMemberSize(struct random_data,rand_sep,4,3,40032)
CheckOffset(struct random_data,rand_sep,32,3,40032)
CheckMemberSize(struct random_data,end_ptr,8,3,40033)
CheckOffset(struct random_data,end_ptr,40,3,40033)
#elif defined __s390x__
CheckTypeSize(struct random_data,48, 10483, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct random_data,rptr,8,12,40028)
CheckOffset(struct random_data,rptr,8,12,40028)
CheckMemberSize(struct random_data,state,8,12,40029)
CheckOffset(struct random_data,state,16,12,40029)
CheckMemberSize(struct random_data,rand_type,4,12,40030)
CheckOffset(struct random_data,rand_type,24,12,40030)
CheckMemberSize(struct random_data,rand_deg,4,12,40031)
CheckOffset(struct random_data,rand_deg,28,12,40031)
CheckMemberSize(struct random_data,rand_sep,4,12,40032)
CheckOffset(struct random_data,rand_sep,32,12,40032)
CheckMemberSize(struct random_data,end_ptr,8,12,40033)
CheckOffset(struct random_data,end_ptr,40,12,40033)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct random_data,28, 10483, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct random_data,rptr,4,10,40028)
CheckOffset(struct random_data,rptr,4,10,40028)
CheckMemberSize(struct random_data,state,4,10,40029)
CheckOffset(struct random_data,state,8,10,40029)
CheckMemberSize(struct random_data,rand_type,4,10,40030)
CheckOffset(struct random_data,rand_type,12,10,40030)
CheckMemberSize(struct random_data,rand_deg,4,10,40031)
CheckOffset(struct random_data,rand_deg,16,10,40031)
CheckMemberSize(struct random_data,rand_sep,4,10,40032)
CheckOffset(struct random_data,rand_sep,20,10,40032)
CheckMemberSize(struct random_data,end_ptr,4,10,40033)
CheckOffset(struct random_data,end_ptr,24,10,40033)
#elif defined __x86_64__
CheckTypeSize(struct random_data,48, 10483, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct random_data,rptr,8,11,40028)
CheckOffset(struct random_data,rptr,8,11,40028)
CheckMemberSize(struct random_data,state,8,11,40029)
CheckOffset(struct random_data,state,16,11,40029)
CheckMemberSize(struct random_data,rand_type,4,11,40030)
CheckOffset(struct random_data,rand_type,24,11,40030)
CheckMemberSize(struct random_data,rand_deg,4,11,40031)
CheckOffset(struct random_data,rand_deg,28,11,40031)
CheckMemberSize(struct random_data,rand_sep,4,11,40032)
CheckOffset(struct random_data,rand_sep,32,11,40032)
CheckMemberSize(struct random_data,end_ptr,8,11,40033)
CheckOffset(struct random_data,end_ptr,40,11,40033)
#elif defined __powerpc64__
CheckTypeSize(struct random_data,48, 10483, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct random_data,rptr,8,9,40028)
CheckOffset(struct random_data,rptr,8,9,40028)
CheckMemberSize(struct random_data,state,8,9,40029)
CheckOffset(struct random_data,state,16,9,40029)
CheckMemberSize(struct random_data,rand_type,4,9,40030)
CheckOffset(struct random_data,rand_type,24,9,40030)
CheckMemberSize(struct random_data,rand_deg,4,9,40031)
CheckOffset(struct random_data,rand_deg,28,9,40031)
CheckMemberSize(struct random_data,rand_sep,4,9,40032)
CheckOffset(struct random_data,rand_sep,32,9,40032)
CheckMemberSize(struct random_data,end_ptr,8,9,40033)
CheckOffset(struct random_data,end_ptr,40,9,40033)
#else
Msg("Find size of random_data (10483)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,10483,0);
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
Msg("Find size of div_t (6973)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,6972,NULL);\n",architecture,6973,0);
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
Msg("Find size of ldiv_t (6975)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,6974,NULL);\n",architecture,6975,0);
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
Msg("Find size of lldiv_t (6897)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,6976, NULL);\n",architecture,6897,0);
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
extern char * __realpath_chk_db(const char *, char *, size_t);
CheckInterfacedef(__realpath_chk,__realpath_chk_db);
extern int __wctomb_chk_db(char *, wchar_t, size_t);
CheckInterfacedef(__wctomb_chk,__wctomb_chk_db);
extern char * mkdtemp_db(char *);
CheckInterfacedef(mkdtemp,mkdtemp_db);
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
