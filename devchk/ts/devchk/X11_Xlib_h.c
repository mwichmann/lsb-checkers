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
CheckTypeSize(XVaNestedList,4, 8540, 2)
#elif __ia64__
CheckTypeSize(XVaNestedList,8, 8540, 3)
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
CheckTypeSize(GC,4, 8375, 2)
#elif __ia64__
CheckTypeSize(GC,8, 8375, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8375,0);
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
