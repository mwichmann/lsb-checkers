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
CheckTypeSize(XcmsFunctionSet,12, 8364, 2)
#elif __ia64__
CheckTypeSize(XcmsFunctionSet,24, 8364, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8364,0);
#endif

#ifdef __i386__
CheckTypeSize(XcmsColorFormat,4, 8320, 2)
#elif __ia64__
CheckTypeSize(XcmsColorFormat,8, 8320, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8320,0);
#endif

#ifdef __i386__
CheckTypeSize(XcmsFloat,8, 8321, 2)
#elif __ia64__
CheckTypeSize(XcmsFloat,8, 8321, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8321,0);
#endif

#ifdef __i386__
CheckTypeSize(XcmsRGB,6, 8323, 2)
#elif __ia64__
CheckTypeSize(XcmsRGB,6, 8323, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8323,0);
#endif

#ifdef __i386__
CheckTypeSize(XcmsRGBi,24, 8325, 2)
#elif __ia64__
CheckTypeSize(XcmsRGBi,24, 8325, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8325,0);
#endif

#ifdef __i386__
CheckTypeSize(XcmsCIEXYZ,24, 8327, 2)
#elif __ia64__
CheckTypeSize(XcmsCIEXYZ,24, 8327, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8327,0);
#endif

#ifdef __i386__
CheckTypeSize(XcmsCIEuvY,24, 8329, 2)
#elif __ia64__
CheckTypeSize(XcmsCIEuvY,24, 8329, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8329,0);
#endif

#ifdef __i386__
CheckTypeSize(XcmsCIExyY,24, 8331, 2)
#elif __ia64__
CheckTypeSize(XcmsCIExyY,24, 8331, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8331,0);
#endif

#ifdef __i386__
CheckTypeSize(XcmsCIELab,24, 8333, 2)
#elif __ia64__
CheckTypeSize(XcmsCIELab,24, 8333, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8333,0);
#endif

#ifdef __i386__
CheckTypeSize(XcmsCIELuv,24, 8335, 2)
#elif __ia64__
CheckTypeSize(XcmsCIELuv,24, 8335, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8335,0);
#endif

#ifdef __i386__
CheckTypeSize(XcmsTekHVC,24, 8337, 2)
#elif __ia64__
CheckTypeSize(XcmsTekHVC,24, 8337, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8337,0);
#endif

#ifdef __i386__
CheckTypeSize(XcmsPad,32, 8339, 2)
#elif __ia64__
CheckTypeSize(XcmsPad,32, 8339, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8339,0);
#endif

#ifdef __i386__
CheckTypeSize(XcmsColor,40, 8342, 2)
#elif __ia64__
CheckTypeSize(XcmsColor,48, 8342, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8342,0);
#endif

#ifdef __i386__
CheckTypeSize(XcmsPerScrnInfo,52, 8344, 2)
#elif __ia64__
CheckTypeSize(XcmsPerScrnInfo,72, 8344, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8344,0);
#endif

#ifdef __i386__
CheckTypeSize(XcmsCompressionProc,4, 8856, 2)
#elif __ia64__
CheckTypeSize(XcmsCompressionProc,8, 8856, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8856,0);
#endif

#ifdef __i386__
CheckTypeSize(XcmsWhiteAdjustProc,4, 8858, 2)
#elif __ia64__
CheckTypeSize(XcmsWhiteAdjustProc,8, 8858, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8858,0);
#endif

#ifdef __i386__
CheckTypeSize(XcmsScreenInitProc,4, 8861, 2)
#elif __ia64__
CheckTypeSize(XcmsScreenInitProc,8, 8861, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8861,0);
#endif

#ifdef __i386__
CheckTypeSize(XcmsScreenFreeProc,4, 8863, 2)
#elif __ia64__
CheckTypeSize(XcmsScreenFreeProc,8, 8863, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8863,0);
#endif

#ifdef __i386__
CheckTypeSize(XcmsConversionProc,4, 8865, 2)
#elif __ia64__
CheckTypeSize(XcmsConversionProc,8, 8865, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8865,0);
#endif

#ifdef __i386__
CheckTypeSize(XcmsParseStringProc,4, 8869, 2)
#elif __ia64__
CheckTypeSize(XcmsParseStringProc,8, 8869, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8869,0);
#endif

#ifdef __i386__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8852,0);
#endif

#ifdef __i386__
CheckTypeSize(XcmsCCC,4, 8853, 2)
#elif __ia64__
CheckTypeSize(XcmsCCC,8, 8853, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8853,0);
#endif

#ifdef __i386__
CheckTypeSize(XcmsColorSpace,24, 8362, 2)
#elif __ia64__
CheckTypeSize(XcmsColorSpace,48, 8362, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8362,0);
#endif

#ifdef __i386__
CheckTypeSize(XcmsFuncListPtr,4, 8867, 2)
#elif __ia64__
CheckTypeSize(XcmsFuncListPtr,8, 8867, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8867,0);
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
