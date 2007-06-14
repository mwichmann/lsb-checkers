/*
 * Test of sys/ioctl.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
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

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in sys/ioctl.h\n");
#endif

printf("Checking data structures in sys/ioctl.h\n");
#if __powerpc64__
#ifdef TIOCGWINSZ
	CompareConstant(TIOCGWINSZ,0x40087468,4611,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: TIOCGWINSZ\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef TIOCGWINSZ
	CompareConstant(TIOCGWINSZ,0x40087468,4611,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: TIOCGWINSZ\n");
cnt++;
#endif

#elif __ia64__
#ifdef TIOCGWINSZ
	CompareConstant(TIOCGWINSZ,0x5413,4611,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: TIOCGWINSZ\n");
cnt++;
#endif

#elif __i386__
#ifdef TIOCGWINSZ
	CompareConstant(TIOCGWINSZ,0x5413,4611,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: TIOCGWINSZ\n");
cnt++;
#endif

#elif __s390x__
#ifdef TIOCGWINSZ
	CompareConstant(TIOCGWINSZ,0x5413,4611,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: TIOCGWINSZ\n");
cnt++;
#endif

#elif __x86_64__
#ifdef TIOCGWINSZ
	CompareConstant(TIOCGWINSZ,0x5413,4611,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: TIOCGWINSZ\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef TIOCGWINSZ
	CompareConstant(TIOCGWINSZ,0x5413,4611,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: TIOCGWINSZ\n");
cnt++;
#endif

#else
Msg( "No definition for TIOCGWINSZ (4611, int) in db\n");
#ifdef TIOCGWINSZ
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,4611,%d,'""3.0""',NULL);\n", architecture, TIOCGWINSZ);
#endif
#endif
#if __powerpc64__
#ifdef FIONREAD
	CompareConstant(FIONREAD,1074030207,4619,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: FIONREAD\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef FIONREAD
	CompareConstant(FIONREAD,1074030207,4619,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: FIONREAD\n");
cnt++;
#endif

#elif __ia64__
#ifdef FIONREAD
	CompareConstant(FIONREAD,0x541B,4619,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: FIONREAD\n");
cnt++;
#endif

#elif __i386__
#ifdef FIONREAD
	CompareConstant(FIONREAD,0x541B,4619,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: FIONREAD\n");
cnt++;
#endif

#elif __s390x__
#ifdef FIONREAD
	CompareConstant(FIONREAD,21531,4619,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: FIONREAD\n");
cnt++;
#endif

#elif __x86_64__
#ifdef FIONREAD
	CompareConstant(FIONREAD,0x541B,4619,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: FIONREAD\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef FIONREAD
	CompareConstant(FIONREAD,0x541B,4619,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: FIONREAD\n");
cnt++;
#endif

#else
Msg( "No definition for FIONREAD (4619, int) in db\n");
#ifdef FIONREAD
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,4619,%d,'""1.3""',NULL);\n", architecture, FIONREAD);
#endif
#endif
#if __powerpc64__
#ifdef TIOCNOTTY
	CompareConstant(TIOCNOTTY,21538,4627,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: TIOCNOTTY\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef TIOCNOTTY
	CompareConstant(TIOCNOTTY,0x5422,4627,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: TIOCNOTTY\n");
cnt++;
#endif

#elif __ia64__
#ifdef TIOCNOTTY
	CompareConstant(TIOCNOTTY,0x5422,4627,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: TIOCNOTTY\n");
cnt++;
#endif

#elif __i386__
#ifdef TIOCNOTTY
	CompareConstant(TIOCNOTTY,0x5422,4627,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: TIOCNOTTY\n");
cnt++;
#endif

#elif __s390x__
#ifdef TIOCNOTTY
	CompareConstant(TIOCNOTTY,21538,4627,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: TIOCNOTTY\n");
cnt++;
#endif

#elif __x86_64__
#ifdef TIOCNOTTY
	CompareConstant(TIOCNOTTY,21538,4627,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: TIOCNOTTY\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef TIOCNOTTY
	CompareConstant(TIOCNOTTY,21538,4627,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: TIOCNOTTY\n");
cnt++;
#endif

#else
Msg( "No definition for TIOCNOTTY (4627, int) in db\n");
#ifdef TIOCNOTTY
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,4627,%d,'""1.3""',NULL);\n", architecture, TIOCNOTTY);
#endif
#endif
#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __s390__ && !__s390x__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0, NULL);\n",architecture,10301,0);
Msg("Find size of winsize (10301)\n");
#endif

extern int ioctl_db(int, unsigned long int, ...);
CheckInterfacedef(ioctl,ioctl_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sys/ioctl.h\n\n",pcnt,cnt);
return cnt;
#endif

}
