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
CheckTypeSize(XConnectionWatchProc,4)
CheckTypeSize(XIOErrorHandler,4)
CheckTypeSize(XErrorHandler,4)
CheckTypeSize(XVaNestedList,4)
CheckTypeSize(XIDProc,4)
CheckTypeSize(XIM,4)
CheckTypeSize(XIC,4)
CheckTypeSize(XwcTextItem,16)
CheckTypeSize(XmbTextItem,16)
CheckTypeSize(XFontSet,4)
CheckTypeSize(XOM,4)
CheckTypeSize(XOC,4)
CheckTypeSize(XFontSetExtents,16)
CheckTypeSize(XEDataObject,4)
CheckTypeSize(XTextItem16,16)
CheckTypeSize(XChar2b,2)
CheckTypeSize(XTextItem,16)
CheckTypeSize(XFontStruct,80)
CheckTypeSize(XCharStruct,12)
CheckTypeSize(XEvent,96)
CheckTypeSize(XMappingEvent,32)
CheckTypeSize(XKeyPressedEvent,60)
CheckTypeSize(XKeyEvent,60)
CheckTypeSize(Display,1336)
CheckTypeSize(XModifierKeymap,8)
CheckTypeSize(XTimeCoord,8)
CheckTypeSize(XKeyboardState,56)
CheckTypeSize(XKeyboardControl,32)
CheckTypeSize(XArc,12)
CheckTypeSize(XRectangle,8)
CheckTypeSize(XPoint,4)
CheckTypeSize(XSegment,8)
CheckTypeSize(XColor,12)
CheckTypeSize(XWindowChanges,28)
CheckTypeSize(XImage,88)
CheckTypeSize(XHostAddress,12)
CheckTypeSize(XWindowAttributes,92)
CheckTypeSize(XSetWindowAttributes,60)
CheckTypeSize(Screen,80)
CheckTypeSize(Visual,32)
CheckTypeSize(GC,4)
CheckTypeSize(XGCValues,92)
CheckTypeSize(XPixmapFormatValues,12)
CheckTypeSize(XExtCodes,16)
CheckTypeSize(XExtData,16)
CheckTypeSize(XPointer,4)
printf("%d tests in X11/Xlib.h\n",cnt);
return cnt;
}
