/*
 * Test of X11/X.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "X11/X.h"



int X11_X_h()
{
int cnt=0;
CheckTypeSize(KeyCode,0)
CheckTypeSize(VisualID,0)
CheckTypeSize(Time,0)
CheckTypeSize(Font,0)
CheckTypeSize(Window,0)
CheckTypeSize(Atom,0)
CheckTypeSize(Mask,0)
CheckTypeSize(Pixmap,0)
CheckTypeSize(XID,0)
printf("%d tests in X11/X.h\n",cnt);
return cnt;
}
