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
CheckTypeSize(mmask_t,0)
CheckTypeSize(attr_t,0)
CheckTypeSize(bool,0)
CheckTypeSize(chtype,0)
printf("%d tests in curses.h\n",cnt);
return cnt;
}
