/*
 * Test of nl_types.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "nl_types.h"



int nl_types_h()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(nl_catd,4,6923)
#elif __ia64__
CheckTypeSize(nl_catd,8,6923)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6923,0);
#endif
printf("%d tests in nl_types.h\n",cnt);
return cnt;
}
