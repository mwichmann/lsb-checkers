/*
 * Test of setjmp.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include <signal.h>
#include "setjmp.h"



#ifdef TET_TEST
void setjmp_h()
{
#else
int setjmp_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in setjmp.h\n");
#endif

#ifdef __i386__
CheckTypeSize(jmp_buf,156)
#elif __ia64__
CheckTypeSize(jmp_buf,704)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6962,0);
#endif

#ifdef __i386__
CheckTypeSize(sigjmp_buf,156)
#elif __ia64__
CheckTypeSize(sigjmp_buf,704)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6963,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in setjmp.h\n",cnt);
return cnt;
#endif

}
