/*
 * Test of sys/msg.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "sys/msg.h"



#ifdef TET_TEST
void sys_msg_h()
{
#else
int sys_msg_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/msg.h\n");
#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef MSG_NOERROR
	CompareConstant(MSG_NOERROR,010000,3457,architecture)
#else
Msg( "Error: Constant not found: MSG_NOERROR\n");
cnt++;
#endif

#endif

#ifdef __i386__
CheckTypeSize(msgqnum_t,4, 10213, 2)
#endif

#ifdef __i386__
CheckTypeSize(msglen_t,4, 10214, 2)
#elif __powerpc__
CheckTypeSize(msglen_t,4, 10214, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10214,0);
Msg("Find size of msglen_t (10214)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct msqid_ds,88, 9117, 2)
#elif __ia64__
CheckTypeSize(struct msqid_ds,120, 9117, 3)
#elif __powerpc__
CheckTypeSize(struct msqid_ds,104, 9117, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9117,0);
Msg("Find size of msqid_ds (9117)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/msg.h\n",cnt);
return cnt;
#endif

}
