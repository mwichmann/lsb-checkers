/*
 * Test of search.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "search.h"



int search_h()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(ACTION,4,6951)
#elif __ia64__
CheckTypeSize(ACTION,4,6951)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6951,0);
#endif
#ifdef __i386__
CheckTypeSize(ENTRY,8,6953)
#elif __ia64__
CheckTypeSize(ENTRY,16,6953)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6953,0);
#endif
#ifdef __i386__
CheckTypeSize(__action_fn_t,4,6956)
#elif __ia64__
CheckTypeSize(__action_fn_t,8,6956)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6956,0);
#endif
printf("%d tests in search.h\n",cnt);
return cnt;
}
