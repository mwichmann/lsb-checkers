/*
 * Test of sys/types.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/types.h"



int sys_types_h()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(int32_t,4,6997)
#elif __ia64__
CheckTypeSize(int32_t,4,6997)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6997,0);
#endif
#ifdef __i386__
CheckTypeSize(key_t,4,9116)
#elif __ia64__
CheckTypeSize(key_t,4,9116)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9116,0);
#endif
printf("%d tests in sys/types.h\n",cnt);
return cnt;
}
