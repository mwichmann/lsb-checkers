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
#ifdef __i386__
CheckTypeSize(XPointer,4,6608)
#elif __ia64__
CheckTypeSize(XPointer,8,6608)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6608,0);
#endif
#ifdef __i386__
CheckTypeSize(GC,4,6617)
#elif __ia64__
CheckTypeSize(GC,8,6617)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6617,0);
#endif
#ifdef __i386__
CheckTypeSize(XEDataObject,4,6745)
#elif __ia64__
CheckTypeSize(XEDataObject,8,6745)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6745,0);
#endif
#ifdef __i386__
CheckTypeSize(XOM,4,6748)
#elif __ia64__
CheckTypeSize(XOM,8,6748)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6748,0);
#endif
#ifdef __i386__
CheckTypeSize(XOC,4,6749)
#elif __ia64__
CheckTypeSize(XOC,8,6749)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6749,0);
#endif
#ifdef __i386__
CheckTypeSize(XFontSet,4,6750)
#elif __ia64__
CheckTypeSize(XFontSet,8,6750)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6750,0);
#endif
#ifdef __i386__
CheckTypeSize(XIM,4,6763)
#elif __ia64__
CheckTypeSize(XIM,8,6763)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6763,0);
#endif
#ifdef __i386__
CheckTypeSize(XIC,4,6764)
#elif __ia64__
CheckTypeSize(XIC,8,6764)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6764,0);
#endif
#ifdef __i386__
CheckTypeSize(XIDProc,4,6767)
#elif __ia64__
CheckTypeSize(XIDProc,8,6767)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6767,0);
#endif
#ifdef __i386__
CheckTypeSize(XVaNestedList,4,6771)
#elif __ia64__
CheckTypeSize(XVaNestedList,8,6771)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6771,0);
#endif
#ifdef __i386__
CheckTypeSize(XErrorHandler,4,6813)
#elif __ia64__
CheckTypeSize(XErrorHandler,8,6813)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6813,0);
#endif
#ifdef __i386__
CheckTypeSize(XIOErrorHandler,4,6814)
#elif __ia64__
CheckTypeSize(XIOErrorHandler,8,6814)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6814,0);
#endif
#ifdef __i386__
CheckTypeSize(XConnectionWatchProc,4,6815)
#elif __ia64__
CheckTypeSize(XConnectionWatchProc,8,6815)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6815,0);
#endif
printf("%d tests in X11/Xlib.h\n",cnt);
return cnt;
}
