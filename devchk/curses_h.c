/*
 * Test of curses.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "curses.h"



int curses_h()
{
int cnt=0;
CheckTypeSize(chtype,0)
CheckTypeSize(bool,0)
CheckTypeSize(struct _win_st,0)
CheckTypeSize(WINDOW,0)
CheckTypeSize(attr_t,0)
CheckTypeSize(chtype *,0)
CheckTypeSize(struct ldat,0)
CheckTypeSize(struct ldat *,0)
CheckTypeSize(WINDOW *,0)
CheckTypeSize(const chtype,0)
CheckTypeSize(const chtype *,0)
CheckTypeSize(attr_t *,0)
CheckTypeSize(short *,0)
CheckTypeSize(const WINDOW,0)
CheckTypeSize(const WINDOW *,0)
CheckTypeSize(SCREEN *,0)
CheckTypeSize(const attr_t,0)
CheckTypeSize(int (*),0)
CheckTypeSize(va_list,0)
CheckTypeSize(const chtype *const,0)
CheckTypeSize(const char *const,0)
CheckTypeSize(mmask_t,0)
CheckTypeSize(MEVENT,0)
CheckTypeSize(MEVENT *,0)
CheckTypeSize(mmask_t *,0)
CheckTypeSize(const MEVENT,0)
CheckTypeSize(const MEVENT *,0)
CheckTypeSize(const unsigned int,0)
printf("%d tests in curses.h\n",cnt);
return cnt;
}
