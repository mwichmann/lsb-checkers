/*
 * Test of signal.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "signal.h"



int signal_h()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(__sighandler_t,4,6966)
#elif __ia64__
CheckTypeSize(__sighandler_t,8,6966)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6966,0);
#endif
printf("%d tests in signal.h\n",cnt);
return cnt;
}
