/*
 * Test of setjmp.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "setjmp.h"



int setjmp_h()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(jmp_buf,156,6962)
#elif __ia64__
CheckTypeSize(jmp_buf,704,6962)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6962,0);
#endif
#ifdef __i386__
CheckTypeSize(sigjmp_buf,156,6963)
#elif __ia64__
CheckTypeSize(sigjmp_buf,704,6963)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6963,0);
#endif
printf("%d tests in setjmp.h\n",cnt);
return cnt;
}
