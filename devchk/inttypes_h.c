/*
 * Test of inttypes.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include <wchar.h>
#include <stdlib.h>
#include "inttypes.h"



int inttypes_h()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(imaxdiv_t,16,6898)
#elif __ia64__
CheckTypeSize(imaxdiv_t,16,6898)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6898,0);
#endif
#ifdef __i386__
CheckTypeSize(intmax_t,8,9016)
#elif __ia64__
CheckTypeSize(intmax_t,0,9016)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9016,0);
#endif
#ifdef __i386__
CheckTypeSize(uintmax_t,8,9017)
#elif __ia64__
CheckTypeSize(uintmax_t,0,9017)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9017,0);
#endif
printf("%d tests in inttypes.h\n",cnt);
return cnt;
}
