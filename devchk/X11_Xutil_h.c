/*
 * Test of X11/Xutil.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "X11/Xutil.h"



int X11_Xutil_h()
{
int cnt=0;
CheckTypeSize(XICCEncodingStyle,0)
CheckTypeSize(Region,0)
CheckTypeSize(XContext,0)
printf("%d tests in X11/Xutil.h\n",cnt);
return cnt;
}
