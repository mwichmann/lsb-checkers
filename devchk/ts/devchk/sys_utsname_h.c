/*
 * Test of sys/utsname.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
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

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in sys/utsname.h\n");
#endif

printf("Checking data structures in sys/utsname.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef SYS_NMLN
	CompareConstant(SYS_NMLN,65,1728,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: SYS_NMLN\n");
cnt++;
#endif

#endif

#if defined __i386__
#elif defined __ia64__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __s390__ && !defined __s390x__
#elif defined __powerpc64__
#elif defined __s390x__
#elif defined __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0, NULL);\n",architecture,7013,0);
Msg("Find size of utsname (7013)\n");
#endif

extern int uname_db(struct utsname *);
CheckInterfacedef(uname,uname_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sys/utsname.h\n\n",pcnt,cnt);
return cnt;
#endif

}
