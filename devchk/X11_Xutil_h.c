/*
 * Test of X11/Xutil.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "X11/Xutil.h"



int X11_Xutil_h()
{
int cnt=0;
CheckTypeSize(XClassHint,8)
CheckTypeSize(XIconSize,24)
CheckTypeSize(XICCEncodingStyle,4)
CheckTypeSize(XTextProperty,16)
CheckTypeSize(XWMHints,36)
CheckTypeSize(XSizeHints,72)
CheckTypeSize(XComposeStatus,8)
CheckTypeSize(Region,4)
CheckTypeSize(XVisualInfo,40)
CheckTypeSize(XStandardColormap,40)
CheckTypeSize(XContext,4)
printf("%d tests in X11/Xutil.h\n",cnt);
return cnt;
}
