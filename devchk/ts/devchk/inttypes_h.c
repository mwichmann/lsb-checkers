/*
 * Test of inttypes.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <wchar.h>
#include <stdlib.h>
#include "inttypes.h"



#ifdef TET_TEST
void inttypes_h()
{
#else
int inttypes_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in inttypes.h\n");
#endif

printf("Checking data structures in inttypes.h\n");
#if defined __i386__
CheckTypeSize(imaxdiv_t,16, 6898, 2, 1.0, NULL, 6897, NULL)
#elif defined __ia64__
CheckTypeSize(imaxdiv_t,16, 6898, 3, 1.3, NULL, 6897, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(imaxdiv_t,16, 6898, 6, 1.2, NULL, 6897, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(imaxdiv_t,16, 6898, 10, 1.3, NULL, 6897, NULL)
#elif defined __powerpc64__
CheckTypeSize(imaxdiv_t,16, 6898, 9, 2.0, NULL, 6897, NULL)
#elif defined __s390x__
CheckTypeSize(imaxdiv_t,16, 6898, 12, 1.3, NULL, 6897, NULL)
#elif defined __x86_64__
CheckTypeSize(imaxdiv_t,16, 6898, 11, 2.0, NULL, 6897, NULL)
#else
Msg("Find size of imaxdiv_t (6898)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,6897, NULL);\n",architecture,6898,0);
#endif

extern intmax_t strtoimax_db(const char *, char * *, int);
CheckInterfacedef(strtoimax,strtoimax_db);
extern uintmax_t strtoumax_db(const char *, char * *, int);
CheckInterfacedef(strtoumax,strtoumax_db);
extern intmax_t wcstoimax_db(const wchar_t *, wchar_t * *, int);
CheckInterfacedef(wcstoimax,wcstoimax_db);
extern uintmax_t wcstoumax_db(const wchar_t *, wchar_t * *, int);
CheckInterfacedef(wcstoumax,wcstoumax_db);
extern intmax_t imaxabs_db(intmax_t);
CheckInterfacedef(imaxabs,imaxabs_db);
extern imaxdiv_t imaxdiv_db(intmax_t, intmax_t);
CheckInterfacedef(imaxdiv,imaxdiv_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in inttypes.h\n\n",pcnt,cnt);
return cnt;
#endif

}
