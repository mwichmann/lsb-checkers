/*
 * Test of curses.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include <stdio.h> 

struct screen {
	};
#include "curses.h"



int curses_h()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(chtype,4,8650)
#elif __ia64__
CheckTypeSize(chtype,8,8650)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8650,0);
#endif
#ifdef __i386__
CheckTypeSize(bool,1,8651)
#elif __ia64__
CheckTypeSize(bool,4,8651)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8651,0);
#endif
#ifdef __i386__
CheckTypeSize(attr_t,4,8656)
#elif __ia64__
CheckTypeSize(attr_t,8,8656)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8656,0);
#endif
printf("%d tests in curses.h\n",cnt);
return cnt;
}
