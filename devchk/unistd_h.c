/*
 * Test of unistd.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "unistd.h"



int unistd_h()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(ssize_t,4,6993)
#elif __ia64__
CheckTypeSize(ssize_t,8,6993)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6993,0);
#endif
printf("%d tests in unistd.h\n",cnt);
return cnt;
}
