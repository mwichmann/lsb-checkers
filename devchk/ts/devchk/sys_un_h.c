/*
 * Test of sys/un.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "sys/un.h"



#ifdef TET_TEST
void sys_un_h()
{
#else
int sys_un_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in sys/un.h\n");
#endif

printf("Checking data structures in sys/un.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef UNIX_PATH_MAX
	CompareConstant(UNIX_PATH_MAX,108,4992,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: UNIX_PATH_MAX\n");
cnt++;
#endif

#endif

#if __i386__
#elif __ia64__
#elif __s390__ && !__s390x__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0, NULL);\n",architecture,9152,0);
Msg("Find size of sockaddr_un (9152)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sys/un.h\n\n",pcnt,cnt);
return cnt;
#endif

}
