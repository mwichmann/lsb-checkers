/*
 * Test of sys/wait.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/wait.h"



int sys_wait_h()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(idtype_t,4,9185)
#elif __ia64__
CheckTypeSize(idtype_t,4,9185)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9185,0);
#endif
printf("%d tests in sys/wait.h\n",cnt);
return cnt;
}
