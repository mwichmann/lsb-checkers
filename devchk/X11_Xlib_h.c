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
CheckTypeSize(XVaNestedList,0)
CheckTypeSize(XIDProc,0)
CheckTypeSize(XIC,0)
CheckTypeSize(XIM,0)
CheckTypeSize(XFontSet,0)
CheckTypeSize(XOC,0)
CheckTypeSize(XOM,0)
CheckTypeSize(XEDataObject,0)
CheckTypeSize(GC,0)
CheckTypeSize(XPointer,0)
CheckTypeSize(XErrorHandler,0)
CheckTypeSize(XIOErrorHandler,0)
CheckTypeSize(XConnectionWatchProc,0)
printf("%d tests in X11/Xlib.h\n",cnt);
return cnt;
}
