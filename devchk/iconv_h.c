/*
 * Test of iconv.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "iconv.h"



int iconv_h()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(iconv_t,4,6895)
#elif __ia64__
CheckTypeSize(iconv_t,8,6895)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6895,0);
#endif
printf("%d tests in iconv.h\n",cnt);
return cnt;
}
