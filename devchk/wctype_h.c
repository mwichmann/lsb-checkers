/*
 * Test of wctype.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include <wchar.h>
#include "wctype.h"



int wctype_h()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(wctype_t,4,7024)
#elif __ia64__
CheckTypeSize(wctype_t,8,7024)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,7024,0);
#endif
#ifdef __i386__
CheckTypeSize(wctrans_t,4,9199)
#elif __ia64__
CheckTypeSize(wctrans_t,8,9199)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9199,0);
#endif
printf("%d tests in wctype.h\n",cnt);
return cnt;
}
