/*
 * Test of X11/Xutil.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>

#include "X11/Xutil.h"



#ifdef TET_TEST
void X11_Xutil_h()
{
#else
int X11_Xutil_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in X11/Xutil.h\n");
#endif

#ifdef __i386__
CheckTypeSize(XSizeHints,72, 8301, 2)
#elif __ia64__
CheckTypeSize(XSizeHints,80, 8301, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8301,0);
#endif

#ifdef __i386__
CheckTypeSize(XWMHints,36, 8303, 2)
#elif __ia64__
CheckTypeSize(XWMHints,56, 8303, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8303,0);
#endif

#ifdef __i386__
CheckTypeSize(XTextProperty,16, 8305, 2)
#elif __ia64__
CheckTypeSize(XTextProperty,32, 8305, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8305,0);
#endif

#ifdef __i386__
CheckTypeSize(XIconSize,24, 8309, 2)
#elif __ia64__
CheckTypeSize(XIconSize,24, 8309, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8309,0);
#endif

#ifdef __i386__
CheckTypeSize(XClassHint,8, 8311, 2)
#elif __ia64__
CheckTypeSize(XClassHint,16, 8311, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8311,0);
#endif

#ifdef __i386__
CheckTypeSize(XComposeStatus,8, 8313, 2)
#elif __ia64__
CheckTypeSize(XComposeStatus,16, 8313, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8313,0);
#endif

#ifdef __i386__
CheckTypeSize(Region,4, 8314, 2)
#elif __ia64__
CheckTypeSize(Region,8, 8314, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8314,0);
#endif

#ifdef __i386__
CheckTypeSize(XVisualInfo,40, 8316, 2)
#elif __ia64__
CheckTypeSize(XVisualInfo,64, 8316, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8316,0);
#endif

#ifdef __i386__
CheckTypeSize(XStandardColormap,40, 8318, 2)
#elif __ia64__
CheckTypeSize(XStandardColormap,80, 8318, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8318,0);
#endif

#ifdef __i386__
CheckTypeSize(XContext,4, 8319, 2)
#elif __ia64__
CheckTypeSize(XContext,4, 8319, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8319,0);
#endif

#ifdef __i386__
CheckTypeSize(XICCEncodingStyle,4, 8832, 2)
#elif __ia64__
CheckTypeSize(XICCEncodingStyle,4, 8832, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8832,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in X11/Xutil.h\n",cnt);
return cnt;
#endif

}
