/*
 * Test of stdlib.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "stdlib.h"



int stdlib_h()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(lldiv_t,16,6897)
#elif __ia64__
CheckTypeSize(lldiv_t,16,6897)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6897,0);
#endif
#ifdef __i386__
CheckTypeSize(div_t,8,6973)
#elif __ia64__
CheckTypeSize(div_t,8,6973)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6973,0);
#endif
#ifdef __i386__
CheckTypeSize(ldiv_t,8,6975)
#elif __ia64__
CheckTypeSize(ldiv_t,16,6975)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6975,0);
#endif
#ifdef 
CheckTypeSize(__compar_fn_t,,9231)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9231,0);
#endif
printf("%d tests in stdlib.h\n",cnt);
return cnt;
}
