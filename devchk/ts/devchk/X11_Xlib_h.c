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
CheckTypeSize(XVaNestedList,4)
#elif __ia64__
CheckTypeSize(XVaNestedList,8)
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
CheckTypeSize(XErrorHandler,4)
#elif __ia64__
CheckTypeSize(XErrorHandler,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8930,0);
#endif

#ifdef __i386__
CheckTypeSize(XIOErrorHandler,4)
#elif __ia64__
CheckTypeSize(XIOErrorHandler,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8932,0);
#endif

#ifdef __i386__
CheckTypeSize(XConnectionWatchProc,4)
#elif __ia64__
CheckTypeSize(XConnectionWatchProc,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8956,0);
#endif

#ifdef __i386__
CheckTypeSize(GC,4)
#elif __ia64__
CheckTypeSize(GC,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8375,0);
#endif

#ifdef __i386__
CheckTypeSize(XEDataObject,4)
#elif __ia64__
CheckTypeSize(XEDataObject,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8511,0);
#endif

#ifdef __i386__
CheckTypeSize(XOM,4)
#elif __ia64__
CheckTypeSize(XOM,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8514,0);
#endif

#ifdef __i386__
CheckTypeSize(XOC,4)
#elif __ia64__
CheckTypeSize(XOC,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8515,0);
#endif

#ifdef __i386__
CheckTypeSize(XFontSet,4)
#elif __ia64__
CheckTypeSize(XFontSet,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8516,0);
#endif

#ifdef __i386__
CheckTypeSize(XIM,4)
#elif __ia64__
CheckTypeSize(XIM,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8529,0);
#endif

#ifdef __i386__
CheckTypeSize(XIC,4)
#elif __ia64__
CheckTypeSize(XIC,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8530,0);
#endif

#ifdef __i386__
CheckTypeSize(XIDProc,4)
#elif __ia64__
CheckTypeSize(XIDProc,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8902,0);
#endif

#ifdef __i386__
CheckTypeSize(XPointer,4)
#elif __ia64__
CheckTypeSize(XPointer,8)
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
