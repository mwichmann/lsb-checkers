/*
 * Test of sys/utsname.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "sys/utsname.h"



#ifdef TET_TEST
void sys_utsname_h()
{
#else
int sys_utsname_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/utsname.h\n");
#endif

#ifdef __i386__
CheckTypeSize(struct utsname,390, 7013, 2)
#elif __ia64__
CheckTypeSize(struct utsname,390, 7013, 3)
#elif __powerpc__
CheckTypeSize(struct utsname,390, 7013, 6)
#elif __s390__
CheckTypeSize(struct utsname,390, 7013, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,7013,0);
Msg("Find size of utsname (7013)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/utsname.h\n",cnt);
return cnt;
#endif

}
