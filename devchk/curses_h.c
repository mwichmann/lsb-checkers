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
CheckTypeSize(attr_t,4,)
CheckTypeSize(bool,1,)
CheckTypeSize(chtype,4,)
printf("%d tests in curses.h\n",cnt);
return cnt;
}
