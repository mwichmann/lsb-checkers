/*
 * Test of curses.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "curses.h"



int curses_h()
{
int cnt=0;
CheckTypeSize(mmask_t,4)
CheckTypeSize(chtype,4)
CheckTypeSize(bool,1)
CheckTypeSize(attr_t,4)
CheckTypeSize(WINDOW,76)
CheckTypeSize(MEVENT,20)
printf("%d tests in curses.h\n",cnt);
return cnt;
}
