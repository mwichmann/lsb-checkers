/*
 * Test of regex.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "regex.h"



int regex_h()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(regmatch_t,8,6949)
#elif __ia64__
CheckTypeSize(regmatch_t,8,6949)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6949,0);
#endif
printf("%d tests in regex.h\n",cnt);
return cnt;
}
