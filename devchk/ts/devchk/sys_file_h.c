/*
 * Test of sys/file.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "sys/file.h"



#ifdef TET_TEST
void sys_file_h()
{
#else
int sys_file_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/file.h\n");
#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef LOCK_SH
	CompareConstant(LOCK_SH,1,1203,architecture)
#else
Msg( "Error: Constant not found: LOCK_SH\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef LOCK_UN
	CompareConstant(LOCK_UN,8,1206,architecture)
#else
Msg( "Error: Constant not found: LOCK_UN\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef LOCK_EX
	CompareConstant(LOCK_EX,2,1204,architecture)
#else
Msg( "Error: Constant not found: LOCK_EX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef LOCK_NB
	CompareConstant(LOCK_NB,4,1205,architecture)
#else
Msg( "Error: Constant not found: LOCK_NB\n");
cnt++;
#endif

#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/file.h\n",cnt);
return cnt;
#endif

}
