/*
 * Test of sys/ioctl.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "sys/ioctl.h"



#ifdef TET_TEST
void sys_ioctl_h()
{
#else
int sys_ioctl_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/ioctl.h\n");
#endif

#if __powerpc__ && !__powerpc64__
#ifdef FIONREAD
	CompareConstant(FIONREAD,1074030207,4619,architecture)
#else
Msg( "Error: Constant not found: FIONREAD\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef FIONREAD
	CompareConstant(FIONREAD,0x541B,4619,architecture)
#else
Msg( "Error: Constant not found: FIONREAD\n");
cnt++;
#endif

#endif

#if __powerpc__ && !__powerpc64__
#ifdef TIOCNOTTY
	CompareConstant(TIOCNOTTY,0x5422,4627,architecture)
#else
Msg( "Error: Constant not found: TIOCNOTTY\n");
cnt++;
#endif

#elif __ia64__
#ifdef TIOCNOTTY
	CompareConstant(TIOCNOTTY,0x5422,4627,architecture)
#else
Msg( "Error: Constant not found: TIOCNOTTY\n");
cnt++;
#endif

#elif __i386__
#ifdef TIOCNOTTY
	CompareConstant(TIOCNOTTY,0x5422,4627,architecture)
#else
Msg( "Error: Constant not found: TIOCNOTTY\n");
cnt++;
#endif

#elif __s390__
#ifdef TIOCNOTTY
	CompareConstant(TIOCNOTTY,21538,4627,architecture)
#else
Msg( "Error: Constant not found: TIOCNOTTY\n");
cnt++;
#endif

#else
Msg( "No definition for TIOCNOTTY (4627, int) in db\n");
#ifdef TIOCNOTTY
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,4627,%d);\n", architecture, TIOCNOTTY);
#endif
#endif
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/ioctl.h\n",cnt);
return cnt;
#endif

}
