/*
 * Test of X11/Xutil.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include <X11/Xlib.h>

#include "X11/Xutil.h"



int X11_Xutil_h()
{
int cnt=0;
CheckTypeSize(XICCEncodingStyle,4,)
CheckTypeSize(Region,4,)
CheckTypeSize(XContext,4,)
printf("%d tests in X11/Xutil.h\n",cnt);
return cnt;
}
