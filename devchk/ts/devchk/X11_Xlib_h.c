/*
 * Test of X11/Xlib.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include <wchar.h>
#include <X11/X.h>
#include "X11/Xlib.h"



#ifdef TET_TEST
void X11_Xlib_h()
{
#else
int X11_Xlib_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in X11/Xlib.h\n");
#endif

#ifdef __i386__
CheckTypeSize(XColor,12, 8402, 2)
#elif __ia64__
CheckTypeSize(XColor,16, 8402, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8402,0);
#endif

#ifdef __i386__
CheckTypeSize(XVaNestedList,4, 8540, 2)
#elif __ia64__
CheckTypeSize(XVaNestedList,8, 8540, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8540,0);
#endif

#ifdef __i386__
CheckTypeSize(XErrorHandler,4, 8930, 2)
#elif __ia64__
CheckTypeSize(XErrorHandler,8, 8930, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8930,0);
#endif

#ifdef __i386__
CheckTypeSize(XIOErrorHandler,4, 8932, 2)
#elif __ia64__
CheckTypeSize(XIOErrorHandler,8, 8932, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8932,0);
#endif

#ifdef __i386__
CheckTypeSize(XConnectionWatchProc,4, 8956, 2)
#elif __ia64__
CheckTypeSize(XConnectionWatchProc,8, 8956, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8956,0);
#endif

#ifdef __i386__
CheckTypeSize(XExtData,16, 8368, 2)
#elif __ia64__
CheckTypeSize(XExtData,32, 8368, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8368,0);
#endif

#ifdef __i386__
CheckTypeSize(XExtCodes,16, 8370, 2)
#elif __ia64__
CheckTypeSize(XExtCodes,16, 8370, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8370,0);
#endif

#ifdef __i386__
CheckTypeSize(XPixmapFormatValues,12, 8372, 2)
#elif __ia64__
CheckTypeSize(XPixmapFormatValues,12, 8372, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8372,0);
#endif

#ifdef __i386__
CheckTypeSize(XGCValues,92, 8374, 2)
#elif __ia64__
CheckTypeSize(XGCValues,128, 8374, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8374,0);
#endif

#ifdef __i386__
CheckTypeSize(GC,4, 8375, 2)
#elif __ia64__
CheckTypeSize(GC,8, 8375, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8375,0);
#endif

#ifdef __i386__
CheckTypeSize(Visual,32, 8377, 2)
#elif __ia64__
CheckTypeSize(Visual,56, 8377, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8377,0);
#endif

#ifdef __i386__
CheckTypeSize(Screen,80, 8381, 2)
#elif __ia64__
CheckTypeSize(Screen,128, 8381, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8381,0);
#endif

#ifdef __i386__
CheckTypeSize(XSetWindowAttributes,60, 8385, 2)
#elif __ia64__
CheckTypeSize(XSetWindowAttributes,112, 8385, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8385,0);
#endif

#ifdef __i386__
CheckTypeSize(XWindowAttributes,92, 8387, 2)
#elif __ia64__
CheckTypeSize(XWindowAttributes,136, 8387, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8387,0);
#endif

#ifdef __i386__
CheckTypeSize(XHostAddress,12, 8389, 2)
#elif __ia64__
CheckTypeSize(XHostAddress,16, 8389, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8389,0);
#endif

#ifdef __i386__
CheckTypeSize(XImage,88, 8398, 2)
#elif __ia64__
CheckTypeSize(XImage,136, 8398, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8398,0);
#endif

#ifdef __i386__
CheckTypeSize(XWindowChanges,28, 8400, 2)
#elif __ia64__
CheckTypeSize(XWindowChanges,40, 8400, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8400,0);
#endif

#ifdef __i386__
CheckTypeSize(XSegment,8, 8404, 2)
#elif __ia64__
CheckTypeSize(XSegment,8, 8404, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8404,0);
#endif

#ifdef __i386__
CheckTypeSize(XPoint,4, 8406, 2)
#elif __ia64__
CheckTypeSize(XPoint,4, 8406, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8406,0);
#endif

#ifdef __i386__
CheckTypeSize(XRectangle,8, 8408, 2)
#elif __ia64__
CheckTypeSize(XRectangle,8, 8408, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8408,0);
#endif

#ifdef __i386__
CheckTypeSize(XArc,12, 8410, 2)
#elif __ia64__
CheckTypeSize(XArc,12, 8410, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8410,0);
#endif

#ifdef __i386__
CheckTypeSize(XKeyboardControl,32, 8412, 2)
#elif __ia64__
CheckTypeSize(XKeyboardControl,32, 8412, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8412,0);
#endif

#ifdef __i386__
CheckTypeSize(XKeyboardState,56, 8414, 2)
#elif __ia64__
CheckTypeSize(XKeyboardState,64, 8414, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8414,0);
#endif

#ifdef __i386__
CheckTypeSize(XTimeCoord,8, 8416, 2)
#elif __ia64__
CheckTypeSize(XTimeCoord,16, 8416, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8416,0);
#endif

#ifdef __i386__
CheckTypeSize(XModifierKeymap,8, 8418, 2)
#elif __ia64__
CheckTypeSize(XModifierKeymap,16, 8418, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8418,0);
#endif

#ifdef __i386__
CheckTypeSize(Display,176, 8419, 2)
#elif __ia64__
CheckTypeSize(Display,296, 8419, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8419,0);
#endif

#ifdef __i386__
CheckTypeSize(XKeyEvent,60, 8425, 2)
#elif __ia64__
CheckTypeSize(XKeyEvent,96, 8425, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8425,0);
#endif

#ifdef __i386__
CheckTypeSize(XKeyPressedEvent,60, 8426, 2)
#elif __ia64__
CheckTypeSize(XKeyPressedEvent,96, 8426, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8426,0);
#endif

#ifdef __i386__
CheckTypeSize(XSelectionRequestEvent,40, 8482, 2)
#elif __ia64__
CheckTypeSize(XSelectionRequestEvent,80, 8482, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8482,0);
#endif

#ifdef __i386__
CheckTypeSize(XMappingEvent,32, 8491, 2)
#elif __ia64__
CheckTypeSize(XMappingEvent,56, 8491, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8491,0);
#endif

#ifdef __i386__
CheckTypeSize(XEvent,96, 8497, 2)
#elif __ia64__
CheckTypeSize(XEvent,192, 8497, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8497,0);
#endif

#ifdef __i386__
CheckTypeSize(XCharStruct,12, 8499, 2)
#elif __ia64__
CheckTypeSize(XCharStruct,12, 8499, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8499,0);
#endif

#ifdef __i386__
CheckTypeSize(XFontStruct,80, 8503, 2)
#elif __ia64__
CheckTypeSize(XFontStruct,96, 8503, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8503,0);
#endif

#ifdef __i386__
CheckTypeSize(XFontSetExtents,16, 8513, 2)
#elif __ia64__
CheckTypeSize(XFontSetExtents,16, 8513, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8513,0);
#endif

#ifdef __i386__
CheckTypeSize(XTextItem,16, 8505, 2)
#elif __ia64__
CheckTypeSize(XTextItem,24, 8505, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8505,0);
#endif

#ifdef __i386__
CheckTypeSize(XChar2b,2, 8507, 2)
#elif __ia64__
CheckTypeSize(XChar2b,2, 8507, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8507,0);
#endif

#ifdef __i386__
CheckTypeSize(XTextItem16,16, 8509, 2)
#elif __ia64__
CheckTypeSize(XTextItem16,24, 8509, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8509,0);
#endif

#ifdef __i386__
CheckTypeSize(XEDataObject,4, 8511, 2)
#elif __ia64__
CheckTypeSize(XEDataObject,8, 8511, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8511,0);
#endif

#ifdef __i386__
CheckTypeSize(XOM,4, 8514, 2)
#elif __ia64__
CheckTypeSize(XOM,8, 8514, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8514,0);
#endif

#ifdef __i386__
CheckTypeSize(XOC,4, 8515, 2)
#elif __ia64__
CheckTypeSize(XOC,8, 8515, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8515,0);
#endif

#ifdef __i386__
CheckTypeSize(XFontSet,4, 8516, 2)
#elif __ia64__
CheckTypeSize(XFontSet,8, 8516, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8516,0);
#endif

#ifdef __i386__
CheckTypeSize(XmbTextItem,16, 8518, 2)
#elif __ia64__
CheckTypeSize(XmbTextItem,24, 8518, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8518,0);
#endif

#ifdef __i386__
CheckTypeSize(XwcTextItem,16, 8520, 2)
#elif __ia64__
CheckTypeSize(XwcTextItem,24, 8520, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8520,0);
#endif

#ifdef __i386__
CheckTypeSize(XIM,4, 8529, 2)
#elif __ia64__
CheckTypeSize(XIM,8, 8529, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8529,0);
#endif

#ifdef __i386__
CheckTypeSize(XIC,4, 8530, 2)
#elif __ia64__
CheckTypeSize(XIC,8, 8530, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8530,0);
#endif

#ifdef __i386__
CheckTypeSize(XIDProc,4, 8902, 2)
#elif __ia64__
CheckTypeSize(XIDProc,8, 8902, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8902,0);
#endif

#ifdef __i386__
CheckTypeSize(XPointer,4, 8365, 2)
#elif __ia64__
CheckTypeSize(XPointer,8, 8365, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8365,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in X11/Xlib.h\n",cnt);
return cnt;
#endif

}
