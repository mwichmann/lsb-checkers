/*
 * Test of wchar.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "wchar.h"



int wchar_h()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(wchar_t,4,8848)
#elif __ia64__
CheckTypeSize(wchar_t,0,8848)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8848,0);
#endif
#ifdef __i386__
CheckTypeSize(wint_t,4,8980)
#elif __ia64__
CheckTypeSize(wint_t,0,8980)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8980,0);
#endif
printf("%d tests in wchar.h\n",cnt);
return cnt;
}
