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
CheckTypeSize(ssize_t,4,9029)
#elif __ia64__
CheckTypeSize(ssize_t,8,9029)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9029,0);
#endif
printf("%d tests in unistd.h\n",cnt);
return cnt;
}
