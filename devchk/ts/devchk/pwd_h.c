/*
 * Test of pwd.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "pwd.h"



#ifdef TET_TEST
void pwd_h()
{
#else
int pwd_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in pwd.h\n");
#endif

#ifdef __i386__
CheckTypeSize(struct passwd,28, 6938, 2)
#elif __ia64__
CheckTypeSize(struct passwd,48, 6938, 3)
#elif __powerpc__
CheckTypeSize(struct passwd,28, 6938, 6)
#elif __s390__
CheckTypeSize(struct passwd,28, 6938, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6938,0);
Msg("Find size of passwd (6938)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in pwd.h\n",cnt);
return cnt;
#endif

}
