/*
 * Test of X11/Xlib.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include <X11/Xdefs.h>
#include <X11/Xlibint.h>
#include <X11/Xutil.h>
#include "X11/Xlib.h"



int X11_Xlib_h()
{
int cnt=0;
CheckTypeSize(XVaNestedList,4)
CheckTypeSize(XIDProc,4)
CheckTypeSize(XIC,4)
CheckTypeSize(XIM,4)
CheckTypeSize(XFontSet,4)
CheckTypeSize(XOC,4)
CheckTypeSize(XOM,4)
CheckTypeSize(XEDataObject,4)
CheckTypeSize(GC,4)
CheckTypeSize(XPointer,4)
CheckTypeSize(XErrorHandler,4)
CheckTypeSize(XIOErrorHandler,4)
CheckTypeSize(XConnectionWatchProc,4)
printf("%d tests in X11/Xlib.h\n",cnt);
return cnt;
}
