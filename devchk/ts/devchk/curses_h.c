/*
 * Test of curses.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include <stdio.h> 

struct screen {
	};
#include "curses.h"



#ifdef TET_TEST
void curses_h()
{
#else
int curses_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in curses.h\n");
#endif

#ifdef __i386__
CheckTypeSize(chtype,4)
#elif __ia64__
CheckTypeSize(chtype,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8650,0);
#endif

#ifdef __i386__
CheckTypeSize(bool,1)
#elif __ia64__
CheckTypeSize(bool,4)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8651,0);
#endif

#ifdef __i386__
CheckTypeSize(attr_t,4)
#elif __ia64__
CheckTypeSize(attr_t,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8656,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in curses.h\n",cnt);
return cnt;
#endif

}
