/*
 * Test of signal.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "signal.h"



#ifdef TET_TEST
void signal_h()
{
#else
int signal_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in signal.h\n");
#endif

#ifdef __i386__
CheckTypeSize(__sighandler_t,4)
#elif __ia64__
CheckTypeSize(__sighandler_t,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6966,0);
#endif

#ifdef __i386__
CheckTypeSize(union sigval,4)
CheckOffset(union sigval,sival_int,0)
CheckOffset(union sigval,sival_ptr,0)
#elif __ia64__
CheckTypeSize(union sigval,0)
CheckOffset(union sigval,sival_int,0)
CheckOffset(union sigval,sival_ptr,0)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9319,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in signal.h\n",cnt);
return cnt;
#endif

}
