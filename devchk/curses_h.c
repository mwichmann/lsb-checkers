/*
 * Test of curses.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "curses.h"



int curses_h()
{
int cnt=0;
CheckTypeSize(bool,0)
CheckTypeSize(struct _win_st,0)
CheckOffset(struct _win_st,_cury,0)
CheckOffset(struct _win_st,_curx,0)
CheckOffset(struct _win_st,_maxy,0)
CheckOffset(struct _win_st,_maxx,0)
CheckOffset(struct _win_st,_begy,0)
CheckOffset(struct _win_st,_begx,0)
CheckOffset(struct _win_st,_flags,0)
CheckOffset(struct _win_st,_attrs,0)
CheckOffset(struct _win_st,_bkgd,0)
CheckOffset(struct _win_st,_notimeout,0)
CheckOffset(struct _win_st,_clear,0)
CheckOffset(struct _win_st,_leaveok,0)
CheckOffset(struct _win_st,_scroll,0)
CheckOffset(struct _win_st,_idlok,0)
CheckOffset(struct _win_st,_idcok,0)
CheckOffset(struct _win_st,_immed,0)
CheckOffset(struct _win_st,_sync,0)
CheckOffset(struct _win_st,_use_keypad,0)
CheckOffset(struct _win_st,_delay,0)
CheckOffset(struct _win_st,_line,0)
CheckOffset(struct _win_st,_regtop,0)
CheckOffset(struct _win_st,_regbottom,0)
CheckOffset(struct _win_st,_parx,0)
CheckOffset(struct _win_st,_pary,0)
CheckOffset(struct _win_st,_parent,0)
CheckTypeSize(WINDOW,0)
CheckTypeSize(attr_t,0)
CheckTypeSize(struct ldat,0)
CheckOffset(struct ldat,text,0)
CheckOffset(struct ldat,firstchar,0)
CheckOffset(struct ldat,lastchar,0)
CheckOffset(struct ldat,oldindex,0)
CheckTypeSize(chtype,0)
CheckTypeSize(struct pdat,0)
CheckOffset(struct pdat,_pad_y,0)
CheckOffset(struct pdat,_pad_x,0)
CheckOffset(struct pdat,_pad_top,0)
CheckOffset(struct pdat,_pad_left,0)
CheckOffset(struct pdat,_pad_bottom,0)
CheckOffset(struct pdat,_pad_right,0)
CheckTypeSize(mmask_t,0)
CheckTypeSize(MEVENT,0)
printf("%d tests in curses.h\n",cnt);
return cnt;
}
