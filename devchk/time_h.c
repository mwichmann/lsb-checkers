/*
 * Test of time.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "time.h"



int time_h()
{
int cnt=0;
#ifdef 
CheckTypeSize(__ssize_t,,8970)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8970,0);
#endif
#ifdef 
CheckTypeSize(__off_t,,8971)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8971,0);
#endif
#ifdef 
CheckTypeSize(__off64_t,,8972)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8972,0);
#endif
#ifdef 
CheckTypeSize(__pid_t,,9078)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9078,0);
#endif
#ifdef __i386__
CheckTypeSize(clock_t,4,9164)
#elif __ia64__
CheckTypeSize(clock_t,8,9164)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9164,0);
#endif
#ifdef __i386__
CheckTypeSize(time_t,4,9191)
#elif __ia64__
CheckTypeSize(time_t,8,9191)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9191,0);
#endif
printf("%d tests in time.h\n",cnt);
return cnt;
}
