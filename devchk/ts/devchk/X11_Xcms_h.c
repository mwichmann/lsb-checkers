/*
 * Test of X11/Xcms.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
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

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/Xcms.h\n");
#endif

printf("Checking data structures in X11/Xcms.h\n");
#if __i386__
CheckTypeSize(XcmsFunctionSet,12, 8364, 2);
#elif __ia64__
CheckTypeSize(XcmsFunctionSet,24, 8364, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XcmsFunctionSet,12, 8364, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XcmsFunctionSet,12, 8364, 10);
#elif __powerpc64__
CheckTypeSize(XcmsFunctionSet,24, 8364, 9);
#elif __s390x__
CheckTypeSize(XcmsFunctionSet,24, 8364, 12);
#elif __x86_64__
CheckTypeSize(XcmsFunctionSet,24, 8364, 11);
#elif 1
CheckTypeSize(XcmsFunctionSet,0, 8364, 1);
#endif

#if __i386__
CheckTypeSize(XcmsColorFormat,4, 8320, 2);
#elif __ia64__
CheckTypeSize(XcmsColorFormat,8, 8320, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XcmsColorFormat,4, 8320, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XcmsColorFormat,4, 8320, 10);
#elif __powerpc64__
CheckTypeSize(XcmsColorFormat,8, 8320, 9);
#elif __s390x__
CheckTypeSize(XcmsColorFormat,8, 8320, 12);
#elif __x86_64__
CheckTypeSize(XcmsColorFormat,8, 8320, 11);
#elif 1
CheckTypeSize(XcmsColorFormat,0, 8320, 1);
#endif

#if __i386__
CheckTypeSize(XcmsFloat,8, 8321, 2);
#elif __ia64__
CheckTypeSize(XcmsFloat,8, 8321, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XcmsFloat,8, 8321, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XcmsFloat,8, 8321, 10);
#elif __powerpc64__
CheckTypeSize(XcmsFloat,8, 8321, 9);
#elif __s390x__
CheckTypeSize(XcmsFloat,8, 8321, 12);
#elif __x86_64__
CheckTypeSize(XcmsFloat,8, 8321, 11);
#elif 1
CheckTypeSize(XcmsFloat,0, 8321, 1);
#endif

#if __i386__
CheckTypeSize(XcmsRGB,6, 8323, 2);
#elif __ia64__
CheckTypeSize(XcmsRGB,6, 8323, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XcmsRGB,6, 8323, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XcmsRGB,6, 8323, 10);
#elif __powerpc64__
CheckTypeSize(XcmsRGB,6, 8323, 9);
#elif __s390x__
CheckTypeSize(XcmsRGB,6, 8323, 12);
#elif __x86_64__
CheckTypeSize(XcmsRGB,6, 8323, 11);
#elif 1
CheckTypeSize(XcmsRGB,0, 8323, 1);
#endif

#if __i386__
CheckTypeSize(XcmsRGBi,24, 8325, 2);
#elif __ia64__
CheckTypeSize(XcmsRGBi,24, 8325, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XcmsRGBi,24, 8325, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XcmsRGBi,24, 8325, 10);
#elif __powerpc64__
CheckTypeSize(XcmsRGBi,24, 8325, 9);
#elif __s390x__
CheckTypeSize(XcmsRGBi,24, 8325, 12);
#elif __x86_64__
CheckTypeSize(XcmsRGBi,24, 8325, 11);
#elif 1
CheckTypeSize(XcmsRGBi,0, 8325, 1);
#endif

#if __i386__
CheckTypeSize(XcmsCIEXYZ,24, 8327, 2);
#elif __ia64__
CheckTypeSize(XcmsCIEXYZ,24, 8327, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XcmsCIEXYZ,24, 8327, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XcmsCIEXYZ,24, 8327, 10);
#elif __powerpc64__
CheckTypeSize(XcmsCIEXYZ,24, 8327, 9);
#elif __s390x__
CheckTypeSize(XcmsCIEXYZ,24, 8327, 12);
#elif __x86_64__
CheckTypeSize(XcmsCIEXYZ,24, 8327, 11);
#elif 1
CheckTypeSize(XcmsCIEXYZ,0, 8327, 1);
#endif

#if __i386__
CheckTypeSize(XcmsCIEuvY,24, 8329, 2);
#elif __ia64__
CheckTypeSize(XcmsCIEuvY,24, 8329, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XcmsCIEuvY,24, 8329, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XcmsCIEuvY,24, 8329, 10);
#elif __powerpc64__
CheckTypeSize(XcmsCIEuvY,24, 8329, 9);
#elif __s390x__
CheckTypeSize(XcmsCIEuvY,24, 8329, 12);
#elif __x86_64__
CheckTypeSize(XcmsCIEuvY,24, 8329, 11);
#elif 1
CheckTypeSize(XcmsCIEuvY,0, 8329, 1);
#endif

#if __i386__
CheckTypeSize(XcmsCIExyY,24, 8331, 2);
#elif __ia64__
CheckTypeSize(XcmsCIExyY,24, 8331, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XcmsCIExyY,24, 8331, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XcmsCIExyY,24, 8331, 10);
#elif __powerpc64__
CheckTypeSize(XcmsCIExyY,24, 8331, 9);
#elif __s390x__
CheckTypeSize(XcmsCIExyY,24, 8331, 12);
#elif __x86_64__
CheckTypeSize(XcmsCIExyY,24, 8331, 11);
#elif 1
CheckTypeSize(XcmsCIExyY,0, 8331, 1);
#endif

#if __i386__
CheckTypeSize(XcmsCIELab,24, 8333, 2);
#elif __ia64__
CheckTypeSize(XcmsCIELab,24, 8333, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XcmsCIELab,24, 8333, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XcmsCIELab,24, 8333, 10);
#elif __powerpc64__
CheckTypeSize(XcmsCIELab,24, 8333, 9);
#elif __s390x__
CheckTypeSize(XcmsCIELab,24, 8333, 12);
#elif __x86_64__
CheckTypeSize(XcmsCIELab,24, 8333, 11);
#elif 1
CheckTypeSize(XcmsCIELab,0, 8333, 1);
#endif

#if __i386__
CheckTypeSize(XcmsCIELuv,24, 8335, 2);
#elif __ia64__
CheckTypeSize(XcmsCIELuv,24, 8335, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XcmsCIELuv,24, 8335, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XcmsCIELuv,24, 8335, 10);
#elif __powerpc64__
CheckTypeSize(XcmsCIELuv,24, 8335, 9);
#elif __s390x__
CheckTypeSize(XcmsCIELuv,24, 8335, 12);
#elif __x86_64__
CheckTypeSize(XcmsCIELuv,24, 8335, 11);
#elif 1
CheckTypeSize(XcmsCIELuv,0, 8335, 1);
#endif

#if __i386__
CheckTypeSize(XcmsTekHVC,24, 8337, 2);
#elif __ia64__
CheckTypeSize(XcmsTekHVC,24, 8337, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XcmsTekHVC,24, 8337, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XcmsTekHVC,24, 8337, 10);
#elif __powerpc64__
CheckTypeSize(XcmsTekHVC,24, 8337, 9);
#elif __s390x__
CheckTypeSize(XcmsTekHVC,24, 8337, 12);
#elif __x86_64__
CheckTypeSize(XcmsTekHVC,24, 8337, 11);
#elif 1
CheckTypeSize(XcmsTekHVC,0, 8337, 1);
#endif

#if __i386__
CheckTypeSize(XcmsPad,32, 8339, 2);
#elif __ia64__
CheckTypeSize(XcmsPad,32, 8339, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XcmsPad,32, 8339, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XcmsPad,32, 8339, 10);
#elif __powerpc64__
CheckTypeSize(XcmsPad,32, 8339, 9);
#elif __s390x__
CheckTypeSize(XcmsPad,32, 8339, 12);
#elif __x86_64__
CheckTypeSize(XcmsPad,32, 8339, 11);
#elif 1
CheckTypeSize(XcmsPad,0, 8339, 1);
#endif

#if __i386__
CheckTypeSize(XcmsColor,40, 8342, 2);
#elif __ia64__
CheckTypeSize(XcmsColor,48, 8342, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XcmsColor,40, 8342, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XcmsColor,40, 8342, 10);
#elif __powerpc64__
CheckTypeSize(XcmsColor,48, 8342, 9);
#elif __s390x__
CheckTypeSize(XcmsColor,48, 8342, 12);
#elif __x86_64__
CheckTypeSize(XcmsColor,48, 8342, 11);
#elif 1
CheckTypeSize(XcmsColor,0, 8342, 1);
#endif

#if __i386__
CheckTypeSize(XcmsPerScrnInfo,52, 8344, 2);
#elif __ia64__
CheckTypeSize(XcmsPerScrnInfo,72, 8344, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XcmsPerScrnInfo,56, 8344, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XcmsPerScrnInfo,56, 8344, 10);
#elif __powerpc64__
CheckTypeSize(XcmsPerScrnInfo,72, 8344, 9);
#elif __s390x__
CheckTypeSize(XcmsPerScrnInfo,72, 8344, 12);
#elif __x86_64__
CheckTypeSize(XcmsPerScrnInfo,72, 8344, 11);
#elif 1
CheckTypeSize(XcmsPerScrnInfo,0, 8344, 1);
#endif

#if __i386__
CheckTypeSize(XcmsCompressionProc,4, 8856, 2);
#elif __ia64__
CheckTypeSize(XcmsCompressionProc,8, 8856, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XcmsCompressionProc,4, 8856, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XcmsCompressionProc,4, 8856, 10);
#elif __powerpc64__
CheckTypeSize(XcmsCompressionProc,8, 8856, 9);
#elif __s390x__
CheckTypeSize(XcmsCompressionProc,8, 8856, 12);
#elif __x86_64__
CheckTypeSize(XcmsCompressionProc,8, 8856, 11);
#elif 1
CheckTypeSize(XcmsCompressionProc,0, 8856, 1);
#endif

#if __i386__
CheckTypeSize(XcmsWhiteAdjustProc,4, 8858, 2);
#elif __ia64__
CheckTypeSize(XcmsWhiteAdjustProc,8, 8858, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XcmsWhiteAdjustProc,4, 8858, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XcmsWhiteAdjustProc,4, 8858, 10);
#elif __powerpc64__
CheckTypeSize(XcmsWhiteAdjustProc,8, 8858, 9);
#elif __s390x__
CheckTypeSize(XcmsWhiteAdjustProc,8, 8858, 12);
#elif __x86_64__
CheckTypeSize(XcmsWhiteAdjustProc,8, 8858, 11);
#elif 1
CheckTypeSize(XcmsWhiteAdjustProc,0, 8858, 1);
#endif

#if __i386__
CheckTypeSize(XcmsScreenInitProc,4, 8861, 2);
#elif __ia64__
CheckTypeSize(XcmsScreenInitProc,8, 8861, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XcmsScreenInitProc,4, 8861, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XcmsScreenInitProc,4, 8861, 10);
#elif __powerpc64__
CheckTypeSize(XcmsScreenInitProc,8, 8861, 9);
#elif __s390x__
CheckTypeSize(XcmsScreenInitProc,8, 8861, 12);
#elif __x86_64__
CheckTypeSize(XcmsScreenInitProc,8, 8861, 11);
#elif 1
CheckTypeSize(XcmsScreenInitProc,0, 8861, 1);
#endif

#if __i386__
CheckTypeSize(XcmsScreenFreeProc,4, 8863, 2);
#elif __ia64__
CheckTypeSize(XcmsScreenFreeProc,8, 8863, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XcmsScreenFreeProc,4, 8863, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XcmsScreenFreeProc,4, 8863, 10);
#elif __powerpc64__
CheckTypeSize(XcmsScreenFreeProc,8, 8863, 9);
#elif __s390x__
CheckTypeSize(XcmsScreenFreeProc,8, 8863, 12);
#elif __x86_64__
CheckTypeSize(XcmsScreenFreeProc,8, 8863, 11);
#elif 1
CheckTypeSize(XcmsScreenFreeProc,0, 8863, 1);
#endif

#if __i386__
CheckTypeSize(XcmsConversionProc,4, 8865, 2);
#elif __ia64__
CheckTypeSize(XcmsConversionProc,8, 8865, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XcmsConversionProc,4, 8865, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XcmsConversionProc,4, 8865, 10);
#elif __powerpc64__
CheckTypeSize(XcmsConversionProc,8, 8865, 9);
#elif __s390x__
CheckTypeSize(XcmsConversionProc,8, 8865, 12);
#elif __x86_64__
CheckTypeSize(XcmsConversionProc,8, 8865, 11);
#elif 1
CheckTypeSize(XcmsConversionProc,0, 8865, 1);
#endif

#if __i386__
CheckTypeSize(XcmsParseStringProc,4, 8869, 2);
#elif __ia64__
CheckTypeSize(XcmsParseStringProc,8, 8869, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XcmsParseStringProc,4, 8869, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XcmsParseStringProc,4, 8869, 10);
#elif __powerpc64__
CheckTypeSize(XcmsParseStringProc,8, 8869, 9);
#elif __s390x__
CheckTypeSize(XcmsParseStringProc,8, 8869, 12);
#elif __x86_64__
CheckTypeSize(XcmsParseStringProc,8, 8869, 11);
#elif 1
CheckTypeSize(XcmsParseStringProc,0, 8869, 1);
#endif

#if __i386__
CheckTypeSize(struct _XcmsCCC *,4, 8852, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _XcmsCCC *,4, 8852, 6);
#elif __x86_64__
CheckTypeSize(struct _XcmsCCC *,8, 8852, 11);
#elif __powerpc64__
CheckTypeSize(struct _XcmsCCC *,8, 8852, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct _XcmsCCC *,4, 8852, 10);
#elif __s390x__
CheckTypeSize(struct _XcmsCCC *,8, 8852, 12);
#elif __ia64__
CheckTypeSize(struct _XcmsCCC *,8, 8852, 3);
#elif 1
CheckTypeSize(struct _XcmsCCC *,0, 8852, 1);
#endif

#if __i386__
CheckTypeSize(XcmsCCC,4, 8853, 2);
#elif __ia64__
CheckTypeSize(XcmsCCC,8, 8853, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XcmsCCC,4, 8853, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XcmsCCC,4, 8853, 10);
#elif __powerpc64__
CheckTypeSize(XcmsCCC,8, 8853, 9);
#elif __s390x__
CheckTypeSize(XcmsCCC,8, 8853, 12);
#elif __x86_64__
CheckTypeSize(XcmsCCC,8, 8853, 11);
#elif 1
CheckTypeSize(XcmsCCC,0, 8853, 1);
#endif

#if __i386__
CheckTypeSize(XcmsColorSpace,24, 8362, 2);
#elif __ia64__
CheckTypeSize(XcmsColorSpace,48, 8362, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XcmsColorSpace,24, 8362, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XcmsColorSpace,24, 8362, 10);
#elif __powerpc64__
CheckTypeSize(XcmsColorSpace,48, 8362, 9);
#elif __s390x__
CheckTypeSize(XcmsColorSpace,48, 8362, 12);
#elif __x86_64__
CheckTypeSize(XcmsColorSpace,48, 8362, 11);
#elif 1
CheckTypeSize(XcmsColorSpace,0, 8362, 1);
#endif

#if __i386__
CheckTypeSize(XcmsFuncListPtr,4, 8867, 2);
#elif __ia64__
CheckTypeSize(XcmsFuncListPtr,8, 8867, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XcmsFuncListPtr,4, 8867, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XcmsFuncListPtr,4, 8867, 10);
#elif __powerpc64__
CheckTypeSize(XcmsFuncListPtr,8, 8867, 9);
#elif __s390x__
CheckTypeSize(XcmsFuncListPtr,8, 8867, 12);
#elif __x86_64__
CheckTypeSize(XcmsFuncListPtr,8, 8867, 11);
#elif 1
CheckTypeSize(XcmsFuncListPtr,0, 8867, 1);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/Xcms.h\n\n",pcnt,cnt);
return cnt;
#endif

}
