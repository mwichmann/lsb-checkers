/*
 * Test of X11/Xutil.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "X11/Xutil.h"



int X11_Xutil_h()
{
int cnt=0;
CheckTypeSize(XClassHint,0)
CheckTypeSize(XIconSize,0)
CheckTypeSize(XICCEncodingStyle,0)
CheckTypeSize(XTextProperty,0)
CheckTypeSize(XWMHints,0)
CheckTypeSize(XSizeHints,0)
CheckTypeSize(struct _XComposeStatus,0)
CheckOffset(struct _XComposeStatus,compose_ptr,0)
CheckOffset(struct _XComposeStatus,chars_matched,0)
CheckTypeSize(XComposeStatus,0)
CheckTypeSize(Region,0)
CheckTypeSize(XVisualInfo,0)
CheckTypeSize(XStandardColormap,0)
CheckTypeSize(XContext,0)
printf("%d tests in X11/Xutil.h\n",cnt);
return cnt;
}
