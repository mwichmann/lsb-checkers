/*
 * Test of X11/Xcms.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#include "X11/Xcms.h"



#ifdef TET_TEST
void X11_Xcms_h()
{
#else
int X11_Xcms_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in X11/Xcms.h\n");
#endif

#ifdef __i386__
CheckTypeSize(XcmsColorFormat,4)
#elif __ia64__
CheckTypeSize(XcmsColorFormat,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8320,0);
#endif

#ifdef __i386__
CheckTypeSize(XcmsFloat,8)
#elif __ia64__
CheckTypeSize(XcmsFloat,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8321,0);
#endif

#ifdef __i386__
CheckTypeSize(XcmsCompressionProc,4)
#elif __ia64__
CheckTypeSize(XcmsCompressionProc,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8856,0);
#endif

#ifdef __i386__
CheckTypeSize(XcmsWhiteAdjustProc,4)
#elif __ia64__
CheckTypeSize(XcmsWhiteAdjustProc,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8858,0);
#endif

#ifdef __i386__
CheckTypeSize(XcmsCCC,4)
#elif __ia64__
CheckTypeSize(XcmsCCC,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8853,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in X11/Xcms.h\n",cnt);
return cnt;
#endif

}
