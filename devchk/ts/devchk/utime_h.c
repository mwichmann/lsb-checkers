/*
 * Test of utime.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "utime.h"



#ifdef TET_TEST
void utime_h()
{
#else
int utime_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in utime.h\n");
#endif

printf("Checking data structures in utime.h\n");
#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __s390__ && !__s390x__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,7023,0);
Msg("Find size of utimbuf (7023)\n");
#endif

extern int utime_db(const char *, const struct utimbuf *);
CheckInterfacedef(utime,utime_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in utime.h\n\n",pcnt,cnt);
return cnt;
#endif

}
