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
#if __i386__
CheckTypeSize(imaxdiv_t,16, 6898, 2)
#elif __ia64__
CheckTypeSize(imaxdiv_t,16, 6898, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(imaxdiv_t,16, 6898, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(imaxdiv_t,16, 6898, 10)
#elif __powerpc64__
CheckTypeSize(imaxdiv_t,16, 6898, 9)
#elif __s390x__
CheckTypeSize(imaxdiv_t,16, 6898, 12)
#elif __x86_64__
CheckTypeSize(imaxdiv_t,16, 6898, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6898,0);
Msg("Find size of imaxdiv_t (6898)\n");
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
