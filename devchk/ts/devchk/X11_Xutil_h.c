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
CheckTypeSize(Region,4, 8314, 2)
#elif __ia64__
CheckTypeSize(Region,8, 8314, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8314,0);
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
