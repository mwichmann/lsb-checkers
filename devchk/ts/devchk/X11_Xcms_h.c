/*
 * Test of X11/Xcms.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
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
#elif __powerpc__
CheckTypeSize(XcmsFunctionSet,12, 8364, 6)
#elif __s390__
CheckTypeSize(XcmsFunctionSet,0, 8364, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8364,0);
Msg("Find size of XcmsFunctionSet (8364)\n");
#endif

#ifdef __i386__
CheckTypeSize(XcmsColorFormat,4, 8320, 2)
#elif __ia64__
CheckTypeSize(XcmsColorFormat,8, 8320, 3)
#elif __powerpc__
CheckTypeSize(XcmsColorFormat,4, 8320, 6)
#elif __s390__
CheckTypeSize(XcmsColorFormat,0, 8320, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8320,0);
Msg("Find size of XcmsColorFormat (8320)\n");
#endif

#ifdef __i386__
CheckTypeSize(XcmsFloat,8, 8321, 2)
#elif __ia64__
CheckTypeSize(XcmsFloat,8, 8321, 3)
#elif __powerpc__
CheckTypeSize(XcmsFloat,8, 8321, 6)
#elif __s390__
CheckTypeSize(XcmsFloat,0, 8321, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8321,0);
Msg("Find size of XcmsFloat (8321)\n");
#endif

#ifdef __i386__
CheckTypeSize(XcmsRGB,6, 8323, 2)
#elif __ia64__
CheckTypeSize(XcmsRGB,6, 8323, 3)
#elif __powerpc__
CheckTypeSize(XcmsRGB,6, 8323, 6)
#elif __s390__
CheckTypeSize(XcmsRGB,0, 8323, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8323,0);
Msg("Find size of XcmsRGB (8323)\n");
#endif

#ifdef __i386__
CheckTypeSize(XcmsRGBi,24, 8325, 2)
#elif __ia64__
CheckTypeSize(XcmsRGBi,24, 8325, 3)
#elif __powerpc__
CheckTypeSize(XcmsRGBi,24, 8325, 6)
#elif __s390__
CheckTypeSize(XcmsRGBi,0, 8325, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8325,0);
Msg("Find size of XcmsRGBi (8325)\n");
#endif

#ifdef __i386__
CheckTypeSize(XcmsCIEXYZ,24, 8327, 2)
#elif __ia64__
CheckTypeSize(XcmsCIEXYZ,24, 8327, 3)
#elif __powerpc__
CheckTypeSize(XcmsCIEXYZ,24, 8327, 6)
#elif __s390__
CheckTypeSize(XcmsCIEXYZ,0, 8327, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8327,0);
Msg("Find size of XcmsCIEXYZ (8327)\n");
#endif

#ifdef __i386__
CheckTypeSize(XcmsCIEuvY,24, 8329, 2)
#elif __ia64__
CheckTypeSize(XcmsCIEuvY,24, 8329, 3)
#elif __powerpc__
CheckTypeSize(XcmsCIEuvY,24, 8329, 6)
#elif __s390__
CheckTypeSize(XcmsCIEuvY,0, 8329, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8329,0);
Msg("Find size of XcmsCIEuvY (8329)\n");
#endif

#ifdef __i386__
CheckTypeSize(XcmsCIExyY,24, 8331, 2)
#elif __ia64__
CheckTypeSize(XcmsCIExyY,24, 8331, 3)
#elif __powerpc__
CheckTypeSize(XcmsCIExyY,24, 8331, 6)
#elif __s390__
CheckTypeSize(XcmsCIExyY,0, 8331, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8331,0);
Msg("Find size of XcmsCIExyY (8331)\n");
#endif

#ifdef __i386__
CheckTypeSize(XcmsCIELab,24, 8333, 2)
#elif __ia64__
CheckTypeSize(XcmsCIELab,24, 8333, 3)
#elif __powerpc__
CheckTypeSize(XcmsCIELab,24, 8333, 6)
#elif __s390__
CheckTypeSize(XcmsCIELab,0, 8333, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8333,0);
Msg("Find size of XcmsCIELab (8333)\n");
#endif

#ifdef __i386__
CheckTypeSize(XcmsCIELuv,24, 8335, 2)
#elif __ia64__
CheckTypeSize(XcmsCIELuv,24, 8335, 3)
#elif __powerpc__
CheckTypeSize(XcmsCIELuv,24, 8335, 6)
#elif __s390__
CheckTypeSize(XcmsCIELuv,0, 8335, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8335,0);
Msg("Find size of XcmsCIELuv (8335)\n");
#endif

#ifdef __i386__
CheckTypeSize(XcmsTekHVC,24, 8337, 2)
#elif __ia64__
CheckTypeSize(XcmsTekHVC,24, 8337, 3)
#elif __powerpc__
CheckTypeSize(XcmsTekHVC,24, 8337, 6)
#elif __s390__
CheckTypeSize(XcmsTekHVC,0, 8337, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8337,0);
Msg("Find size of XcmsTekHVC (8337)\n");
#endif

#ifdef __i386__
CheckTypeSize(XcmsPad,32, 8339, 2)
#elif __ia64__
CheckTypeSize(XcmsPad,32, 8339, 3)
#elif __powerpc__
CheckTypeSize(XcmsPad,32, 8339, 6)
#elif __s390__
CheckTypeSize(XcmsPad,0, 8339, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8339,0);
Msg("Find size of XcmsPad (8339)\n");
#endif

#ifdef __i386__
CheckTypeSize(XcmsColor,40, 8342, 2)
#elif __ia64__
CheckTypeSize(XcmsColor,48, 8342, 3)
#elif __powerpc__
CheckTypeSize(XcmsColor,40, 8342, 6)
#elif __s390__
CheckTypeSize(XcmsColor,0, 8342, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8342,0);
Msg("Find size of XcmsColor (8342)\n");
#endif

#ifdef __i386__
CheckTypeSize(XcmsPerScrnInfo,52, 8344, 2)
#elif __ia64__
CheckTypeSize(XcmsPerScrnInfo,72, 8344, 3)
#elif __powerpc__
CheckTypeSize(XcmsPerScrnInfo,56, 8344, 6)
#elif __s390__
CheckTypeSize(XcmsPerScrnInfo,0, 8344, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8344,0);
Msg("Find size of XcmsPerScrnInfo (8344)\n");
#endif

#ifdef __i386__
CheckTypeSize(XcmsCompressionProc,4, 8856, 2)
#elif __ia64__
CheckTypeSize(XcmsCompressionProc,8, 8856, 3)
#elif __powerpc__
CheckTypeSize(XcmsCompressionProc,4, 8856, 6)
#elif __s390__
CheckTypeSize(XcmsCompressionProc,0, 8856, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8856,0);
Msg("Find size of XcmsCompressionProc (8856)\n");
#endif

#ifdef __i386__
CheckTypeSize(XcmsWhiteAdjustProc,4, 8858, 2)
#elif __ia64__
CheckTypeSize(XcmsWhiteAdjustProc,8, 8858, 3)
#elif __powerpc__
CheckTypeSize(XcmsWhiteAdjustProc,4, 8858, 6)
#elif __s390__
CheckTypeSize(XcmsWhiteAdjustProc,0, 8858, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8858,0);
Msg("Find size of XcmsWhiteAdjustProc (8858)\n");
#endif

#ifdef __i386__
CheckTypeSize(XcmsScreenInitProc,4, 8861, 2)
#elif __ia64__
CheckTypeSize(XcmsScreenInitProc,8, 8861, 3)
#elif __powerpc__
CheckTypeSize(XcmsScreenInitProc,4, 8861, 6)
#elif __s390__
CheckTypeSize(XcmsScreenInitProc,0, 8861, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8861,0);
Msg("Find size of XcmsScreenInitProc (8861)\n");
#endif

#ifdef __i386__
CheckTypeSize(XcmsScreenFreeProc,4, 8863, 2)
#elif __ia64__
CheckTypeSize(XcmsScreenFreeProc,8, 8863, 3)
#elif __powerpc__
CheckTypeSize(XcmsScreenFreeProc,4, 8863, 6)
#elif __s390__
CheckTypeSize(XcmsScreenFreeProc,0, 8863, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8863,0);
Msg("Find size of XcmsScreenFreeProc (8863)\n");
#endif

#ifdef __i386__
CheckTypeSize(XcmsConversionProc,4, 8865, 2)
#elif __ia64__
CheckTypeSize(XcmsConversionProc,8, 8865, 3)
#elif __powerpc__
CheckTypeSize(XcmsConversionProc,4, 8865, 6)
#elif __s390__
CheckTypeSize(XcmsConversionProc,0, 8865, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8865,0);
Msg("Find size of XcmsConversionProc (8865)\n");
#endif

#ifdef __i386__
CheckTypeSize(XcmsParseStringProc,4, 8869, 2)
#elif __ia64__
CheckTypeSize(XcmsParseStringProc,8, 8869, 3)
#elif __powerpc__
CheckTypeSize(XcmsParseStringProc,4, 8869, 6)
#elif __s390__
CheckTypeSize(XcmsParseStringProc,0, 8869, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8869,0);
Msg("Find size of XcmsParseStringProc (8869)\n");
#endif

#ifdef __i386__
#elif __ia64__
#elif __powerpc__
#elif __s390__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8852,0);
Msg("Find size of _XcmsCCC * (8852)\n");
#endif

#ifdef __i386__
CheckTypeSize(XcmsCCC,4, 8853, 2)
#elif __ia64__
CheckTypeSize(XcmsCCC,8, 8853, 3)
#elif __powerpc__
CheckTypeSize(XcmsCCC,4, 8853, 6)
#elif __s390__
CheckTypeSize(XcmsCCC,0, 8853, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8853,0);
Msg("Find size of XcmsCCC (8853)\n");
#endif

#ifdef __i386__
CheckTypeSize(XcmsColorSpace,24, 8362, 2)
#elif __ia64__
CheckTypeSize(XcmsColorSpace,48, 8362, 3)
#elif __powerpc__
CheckTypeSize(XcmsColorSpace,24, 8362, 6)
#elif __s390__
CheckTypeSize(XcmsColorSpace,0, 8362, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8362,0);
Msg("Find size of XcmsColorSpace (8362)\n");
#endif

#ifdef __i386__
CheckTypeSize(XcmsFuncListPtr,4, 8867, 2)
#elif __ia64__
CheckTypeSize(XcmsFuncListPtr,8, 8867, 3)
#elif __powerpc__
CheckTypeSize(XcmsFuncListPtr,4, 8867, 6)
#elif __s390__
CheckTypeSize(XcmsFuncListPtr,0, 8867, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8867,0);
Msg("Find size of XcmsFuncListPtr (8867)\n");
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
