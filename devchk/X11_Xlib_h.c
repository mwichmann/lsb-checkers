/*
 * Test of X11/Xlib.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include <wchar.h>
#include <X11/X.h>
#include "X11/Xlib.h"



int X11_Xlib_h()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(XVaNestedList,4,8540)
#elif __ia64__
CheckTypeSize(XVaNestedList,8,8540)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8540,0);
#endif
#ifdef __i386__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8919,0);
#endif
#ifdef __i386__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8920,0);
#endif
#ifdef __i386__
CheckTypeSize(XErrorHandler,4,8930)
#elif __ia64__
CheckTypeSize(XErrorHandler,8,8930)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8930,0);
#endif
#ifdef __i386__
CheckTypeSize(XIOErrorHandler,4,8932)
#elif __ia64__
CheckTypeSize(XIOErrorHandler,8,8932)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8932,0);
#endif
#ifdef __i386__
CheckTypeSize(XConnectionWatchProc,4,8956)
#elif __ia64__
CheckTypeSize(XConnectionWatchProc,8,8956)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8956,0);
#endif
#ifdef __i386__
CheckTypeSize(GC,4,8375)
#elif __ia64__
CheckTypeSize(GC,8,8375)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8375,0);
#endif
#ifdef __i386__
CheckTypeSize(XEDataObject,4,8511)
#elif __ia64__
CheckTypeSize(XEDataObject,8,8511)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8511,0);
#endif
#ifdef __i386__
CheckTypeSize(XOM,4,8514)
#elif __ia64__
CheckTypeSize(XOM,8,8514)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8514,0);
#endif
#ifdef __i386__
CheckTypeSize(XOC,4,8515)
#elif __ia64__
CheckTypeSize(XOC,8,8515)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8515,0);
#endif
#ifdef __i386__
CheckTypeSize(XFontSet,4,8516)
#elif __ia64__
CheckTypeSize(XFontSet,8,8516)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8516,0);
#endif
#ifdef __i386__
CheckTypeSize(XIM,4,8529)
#elif __ia64__
CheckTypeSize(XIM,8,8529)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8529,0);
#endif
#ifdef __i386__
CheckTypeSize(XIC,4,8530)
#elif __ia64__
CheckTypeSize(XIC,8,8530)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8530,0);
#endif
#ifdef __i386__
CheckTypeSize(XIDProc,4,8902)
#elif __ia64__
CheckTypeSize(XIDProc,8,8902)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8902,0);
#endif
#ifdef __i386__
CheckTypeSize(XPointer,4,8365)
#elif __ia64__
CheckTypeSize(XPointer,8,8365)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8365,0);
#endif
printf("%d tests in X11/Xlib.h\n",cnt);
return cnt;
}
