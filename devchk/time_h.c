/*
 * Test of time.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "time.h"



int time_h()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(clock_t,4,7016)
#elif __ia64__
CheckTypeSize(clock_t,8,7016)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,7016,0);
#endif
#ifdef __i386__
CheckTypeSize(time_t,4,7017)
#elif __ia64__
CheckTypeSize(time_t,8,7017)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,7017,0);
#endif
printf("%d tests in time.h\n",cnt);
return cnt;
}
