/*
 * Test of curses.h
 */
#include "hdrchk.h"
#include "sys/types.h"
struct screen {
	};
#include "curses.h"



int curses_h()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(chtype,4,6857)
#elif __ia64__
CheckTypeSize(chtype,8,6857)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6857,0);
#endif
#ifdef __i386__
CheckTypeSize(bool,1,6858)
#elif __ia64__
CheckTypeSize(bool,4,6858)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6858,0);
#endif
#ifdef __i386__
CheckTypeSize(attr_t,4,6862)
#elif __ia64__
CheckTypeSize(attr_t,8,6862)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6862,0);
#endif
printf("%d tests in curses.h\n",cnt);
return cnt;
}
