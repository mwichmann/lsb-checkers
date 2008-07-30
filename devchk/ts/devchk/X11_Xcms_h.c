/*
 * Test of X11/Xcms.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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
#if _LSB_DEFAULT_ARCH
#ifdef XcmsFailure
	CompareConstant(XcmsFailure,0,2421,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XcmsFailure\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XcmsSuccess
	CompareConstant(XcmsSuccess,1,2422,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XcmsSuccess\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XcmsSuccessWithCompression
	CompareConstant(XcmsSuccessWithCompression,2,2423,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XcmsSuccessWithCompression\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XcmsUndefinedFormat
	CompareConstant(XcmsUndefinedFormat,(XcmsColorFormat)0x00000000,2424,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XcmsUndefinedFormat\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XcmsCIEXYZFormat
	CompareConstant(XcmsCIEXYZFormat,(XcmsColorFormat)0x00000001,2425,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XcmsCIEXYZFormat\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XcmsCIEuvYFormat
	CompareConstant(XcmsCIEuvYFormat,(XcmsColorFormat)0x00000002,2426,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XcmsCIEuvYFormat\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XcmsCIExyYFormat
	CompareConstant(XcmsCIExyYFormat,(XcmsColorFormat)0x00000003,2427,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XcmsCIExyYFormat\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XcmsCIELabFormat
	CompareConstant(XcmsCIELabFormat,(XcmsColorFormat)0x00000004,2428,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XcmsCIELabFormat\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XcmsCIELuvFormat
	CompareConstant(XcmsCIELuvFormat,(XcmsColorFormat)0x00000005,2429,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XcmsCIELuvFormat\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XcmsTekHVCFormat
	CompareConstant(XcmsTekHVCFormat,(XcmsColorFormat)0x00000006,2430,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XcmsTekHVCFormat\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XcmsRGBFormat
	CompareConstant(XcmsRGBFormat,(XcmsColorFormat)0x80000000,2431,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XcmsRGBFormat\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XcmsRGBiFormat
	CompareConstant(XcmsRGBiFormat,(XcmsColorFormat)0x80000001,2432,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XcmsRGBiFormat\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XcmsInitNone
	CompareConstant(XcmsInitNone,0x00,2433,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XcmsInitNone\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XcmsInitSuccess
	CompareConstant(XcmsInitSuccess,0x01,2434,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XcmsInitSuccess\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XcmsInitFailure
	CompareConstant(XcmsInitFailure,0xff,2435,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XcmsInitFailure\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for DisplayOfCCC(ccc) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ScreenNumberOfCCC(ccc) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for VisualOfCCC(ccc) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ClientWhitePointOfCCC(ccc) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ScreenWhitePointOfCCC(ccc) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FunctionSetOfCCC(ccc) */
#endif

#if defined __s390x__
CheckTypeSize(struct _XcmsFunctionSet,24, 8363, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XcmsFunctionSet,screenInitProc,8,12,32737)
CheckOffset(struct _XcmsFunctionSet,screenInitProc,8,12,32737)
CheckMemberSize(struct _XcmsFunctionSet,screenFreeProc,8,12,32738)
CheckOffset(struct _XcmsFunctionSet,screenFreeProc,16,12,32738)
#elif defined __x86_64__
CheckTypeSize(struct _XcmsFunctionSet,24, 8363, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XcmsFunctionSet,screenInitProc,8,11,32737)
CheckOffset(struct _XcmsFunctionSet,screenInitProc,8,11,32737)
CheckMemberSize(struct _XcmsFunctionSet,screenFreeProc,8,11,32738)
CheckOffset(struct _XcmsFunctionSet,screenFreeProc,16,11,32738)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XcmsFunctionSet,12, 8363, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XcmsFunctionSet,screenInitProc,4,10,32737)
CheckOffset(struct _XcmsFunctionSet,screenInitProc,4,10,32737)
CheckMemberSize(struct _XcmsFunctionSet,screenFreeProc,4,10,32738)
CheckOffset(struct _XcmsFunctionSet,screenFreeProc,8,10,32738)
#elif defined __powerpc64__
CheckTypeSize(struct _XcmsFunctionSet,24, 8363, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XcmsFunctionSet,screenInitProc,8,9,32737)
CheckOffset(struct _XcmsFunctionSet,screenInitProc,8,9,32737)
CheckMemberSize(struct _XcmsFunctionSet,screenFreeProc,8,9,32738)
CheckOffset(struct _XcmsFunctionSet,screenFreeProc,16,9,32738)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XcmsFunctionSet,12, 8363, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XcmsFunctionSet,screenInitProc,4,6,32737)
CheckOffset(struct _XcmsFunctionSet,screenInitProc,4,6,32737)
CheckMemberSize(struct _XcmsFunctionSet,screenFreeProc,4,6,32738)
CheckOffset(struct _XcmsFunctionSet,screenFreeProc,8,6,32738)
#elif defined __ia64__
CheckTypeSize(struct _XcmsFunctionSet,24, 8363, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XcmsFunctionSet,screenInitProc,8,3,32737)
CheckOffset(struct _XcmsFunctionSet,screenInitProc,8,3,32737)
CheckMemberSize(struct _XcmsFunctionSet,screenFreeProc,8,3,32738)
CheckOffset(struct _XcmsFunctionSet,screenFreeProc,16,3,32738)
#elif defined __i386__
CheckTypeSize(struct _XcmsFunctionSet,12, 8363, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XcmsFunctionSet,screenInitProc,4,2,32737)
CheckOffset(struct _XcmsFunctionSet,screenInitProc,4,2,32737)
CheckMemberSize(struct _XcmsFunctionSet,screenFreeProc,4,2,32738)
CheckOffset(struct _XcmsFunctionSet,screenFreeProc,8,2,32738)
#else
Msg("Find size of _XcmsFunctionSet (8363)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,8363,0);
#endif

#if defined __s390x__
CheckTypeSize(XcmsFunctionSet,24, 8364, 12, 1.3, NULL, 8363, NULL)
#elif defined __x86_64__
CheckTypeSize(XcmsFunctionSet,24, 8364, 11, 2.0, NULL, 8363, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XcmsFunctionSet,12, 8364, 10, 1.3, NULL, 8363, NULL)
#elif defined __powerpc64__
CheckTypeSize(XcmsFunctionSet,24, 8364, 9, 2.0, NULL, 8363, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XcmsFunctionSet,12, 8364, 6, 1.2, NULL, 8363, NULL)
#elif defined __ia64__
CheckTypeSize(XcmsFunctionSet,24, 8364, 3, 1.3, NULL, 8363, NULL)
#elif defined __i386__
CheckTypeSize(XcmsFunctionSet,12, 8364, 2, 1.2, NULL, 8363, NULL)
#else
Msg("Find size of XcmsFunctionSet (8364)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8363,NULL);\n",architecture,8364,0);
#endif

#if defined __s390x__
CheckTypeSize(XcmsColorFormat,8, 8320, 12, 1.3, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(XcmsColorFormat,8, 8320, 11, 2.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XcmsColorFormat,4, 8320, 10, 1.3, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(XcmsColorFormat,8, 8320, 9, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XcmsColorFormat,4, 8320, 6, 1.2, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(XcmsColorFormat,8, 8320, 3, 1.3, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(XcmsColorFormat,4, 8320, 2, 1.2, NULL, 9, NULL)
#else
Msg("Find size of XcmsColorFormat (8320)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9,NULL);\n",architecture,8320,0);
#endif

#if defined __s390x__
CheckTypeSize(XcmsFloat,8, 8321, 12, 1.3, NULL, 13, NULL)
#elif defined __x86_64__
CheckTypeSize(XcmsFloat,8, 8321, 11, 2.0, NULL, 13, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XcmsFloat,8, 8321, 10, 1.3, NULL, 13, NULL)
#elif defined __powerpc64__
CheckTypeSize(XcmsFloat,8, 8321, 9, 2.0, NULL, 13, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XcmsFloat,8, 8321, 6, 1.2, NULL, 13, NULL)
#elif defined __ia64__
CheckTypeSize(XcmsFloat,8, 8321, 3, 1.3, NULL, 13, NULL)
#elif defined __i386__
CheckTypeSize(XcmsFloat,8, 8321, 2, 1.2, NULL, 13, NULL)
#else
Msg("Find size of XcmsFloat (8321)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,13,NULL);\n",architecture,8321,0);
#endif

#if defined __s390x__
CheckTypeSize(XcmsRGB,6, 8323, 12, 1.3, NULL, 8322, NULL)
#elif defined __x86_64__
CheckTypeSize(XcmsRGB,6, 8323, 11, 2.0, NULL, 8322, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XcmsRGB,6, 8323, 10, 1.3, NULL, 8322, NULL)
#elif defined __powerpc64__
CheckTypeSize(XcmsRGB,6, 8323, 9, 2.0, NULL, 8322, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XcmsRGB,6, 8323, 6, 1.2, NULL, 8322, NULL)
#elif defined __ia64__
CheckTypeSize(XcmsRGB,6, 8323, 3, 1.3, NULL, 8322, NULL)
#elif defined __i386__
CheckTypeSize(XcmsRGB,6, 8323, 2, 1.2, NULL, 8322, NULL)
#else
Msg("Find size of XcmsRGB (8323)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8322,NULL);\n",architecture,8323,0);
#endif

#if defined __s390x__
CheckTypeSize(XcmsRGBi,24, 8325, 12, 1.3, NULL, 8324, NULL)
#elif defined __x86_64__
CheckTypeSize(XcmsRGBi,24, 8325, 11, 2.0, NULL, 8324, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XcmsRGBi,24, 8325, 10, 1.3, NULL, 8324, NULL)
#elif defined __powerpc64__
CheckTypeSize(XcmsRGBi,24, 8325, 9, 2.0, NULL, 8324, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XcmsRGBi,24, 8325, 6, 1.2, NULL, 8324, NULL)
#elif defined __ia64__
CheckTypeSize(XcmsRGBi,24, 8325, 3, 1.3, NULL, 8324, NULL)
#elif defined __i386__
CheckTypeSize(XcmsRGBi,24, 8325, 2, 1.2, NULL, 8324, NULL)
#else
Msg("Find size of XcmsRGBi (8325)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8324,NULL);\n",architecture,8325,0);
#endif

#if defined __s390x__
CheckTypeSize(XcmsCIEXYZ,24, 8327, 12, 1.3, NULL, 8326, NULL)
#elif defined __x86_64__
CheckTypeSize(XcmsCIEXYZ,24, 8327, 11, 2.0, NULL, 8326, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XcmsCIEXYZ,24, 8327, 10, 1.3, NULL, 8326, NULL)
#elif defined __powerpc64__
CheckTypeSize(XcmsCIEXYZ,24, 8327, 9, 2.0, NULL, 8326, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XcmsCIEXYZ,24, 8327, 6, 1.2, NULL, 8326, NULL)
#elif defined __ia64__
CheckTypeSize(XcmsCIEXYZ,24, 8327, 3, 1.3, NULL, 8326, NULL)
#elif defined __i386__
CheckTypeSize(XcmsCIEXYZ,24, 8327, 2, 1.2, NULL, 8326, NULL)
#else
Msg("Find size of XcmsCIEXYZ (8327)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8326,NULL);\n",architecture,8327,0);
#endif

#if defined __s390x__
CheckTypeSize(XcmsCIEuvY,24, 8329, 12, 1.3, NULL, 8328, NULL)
#elif defined __x86_64__
CheckTypeSize(XcmsCIEuvY,24, 8329, 11, 2.0, NULL, 8328, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XcmsCIEuvY,24, 8329, 10, 1.3, NULL, 8328, NULL)
#elif defined __powerpc64__
CheckTypeSize(XcmsCIEuvY,24, 8329, 9, 2.0, NULL, 8328, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XcmsCIEuvY,24, 8329, 6, 1.2, NULL, 8328, NULL)
#elif defined __ia64__
CheckTypeSize(XcmsCIEuvY,24, 8329, 3, 1.3, NULL, 8328, NULL)
#elif defined __i386__
CheckTypeSize(XcmsCIEuvY,24, 8329, 2, 1.2, NULL, 8328, NULL)
#else
Msg("Find size of XcmsCIEuvY (8329)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8328,NULL);\n",architecture,8329,0);
#endif

#if defined __s390x__
CheckTypeSize(XcmsCIExyY,24, 8331, 12, 1.3, NULL, 8330, NULL)
#elif defined __x86_64__
CheckTypeSize(XcmsCIExyY,24, 8331, 11, 2.0, NULL, 8330, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XcmsCIExyY,24, 8331, 10, 1.3, NULL, 8330, NULL)
#elif defined __powerpc64__
CheckTypeSize(XcmsCIExyY,24, 8331, 9, 2.0, NULL, 8330, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XcmsCIExyY,24, 8331, 6, 1.2, NULL, 8330, NULL)
#elif defined __ia64__
CheckTypeSize(XcmsCIExyY,24, 8331, 3, 1.3, NULL, 8330, NULL)
#elif defined __i386__
CheckTypeSize(XcmsCIExyY,24, 8331, 2, 1.2, NULL, 8330, NULL)
#else
Msg("Find size of XcmsCIExyY (8331)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8330,NULL);\n",architecture,8331,0);
#endif

#if defined __s390x__
CheckTypeSize(XcmsCIELab,24, 8333, 12, 1.3, NULL, 8332, NULL)
#elif defined __x86_64__
CheckTypeSize(XcmsCIELab,24, 8333, 11, 2.0, NULL, 8332, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XcmsCIELab,24, 8333, 10, 1.3, NULL, 8332, NULL)
#elif defined __powerpc64__
CheckTypeSize(XcmsCIELab,24, 8333, 9, 2.0, NULL, 8332, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XcmsCIELab,24, 8333, 6, 1.2, NULL, 8332, NULL)
#elif defined __ia64__
CheckTypeSize(XcmsCIELab,24, 8333, 3, 1.3, NULL, 8332, NULL)
#elif defined __i386__
CheckTypeSize(XcmsCIELab,24, 8333, 2, 1.2, NULL, 8332, NULL)
#else
Msg("Find size of XcmsCIELab (8333)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8332,NULL);\n",architecture,8333,0);
#endif

#if defined __s390x__
CheckTypeSize(XcmsCIELuv,24, 8335, 12, 1.3, NULL, 8334, NULL)
#elif defined __x86_64__
CheckTypeSize(XcmsCIELuv,24, 8335, 11, 2.0, NULL, 8334, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XcmsCIELuv,24, 8335, 10, 1.3, NULL, 8334, NULL)
#elif defined __powerpc64__
CheckTypeSize(XcmsCIELuv,24, 8335, 9, 2.0, NULL, 8334, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XcmsCIELuv,24, 8335, 6, 1.2, NULL, 8334, NULL)
#elif defined __ia64__
CheckTypeSize(XcmsCIELuv,24, 8335, 3, 1.3, NULL, 8334, NULL)
#elif defined __i386__
CheckTypeSize(XcmsCIELuv,24, 8335, 2, 1.2, NULL, 8334, NULL)
#else
Msg("Find size of XcmsCIELuv (8335)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8334,NULL);\n",architecture,8335,0);
#endif

#if defined __s390x__
CheckTypeSize(XcmsTekHVC,24, 8337, 12, 1.3, NULL, 8336, NULL)
#elif defined __x86_64__
CheckTypeSize(XcmsTekHVC,24, 8337, 11, 2.0, NULL, 8336, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XcmsTekHVC,24, 8337, 10, 1.3, NULL, 8336, NULL)
#elif defined __powerpc64__
CheckTypeSize(XcmsTekHVC,24, 8337, 9, 2.0, NULL, 8336, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XcmsTekHVC,24, 8337, 6, 1.2, NULL, 8336, NULL)
#elif defined __ia64__
CheckTypeSize(XcmsTekHVC,24, 8337, 3, 1.3, NULL, 8336, NULL)
#elif defined __i386__
CheckTypeSize(XcmsTekHVC,24, 8337, 2, 1.2, NULL, 8336, NULL)
#else
Msg("Find size of XcmsTekHVC (8337)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8336,NULL);\n",architecture,8337,0);
#endif

#if defined __s390x__
CheckTypeSize(XcmsPad,32, 8339, 12, 1.3, NULL, 8338, NULL)
#elif defined __x86_64__
CheckTypeSize(XcmsPad,32, 8339, 11, 2.0, NULL, 8338, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XcmsPad,32, 8339, 10, 1.3, NULL, 8338, NULL)
#elif defined __powerpc64__
CheckTypeSize(XcmsPad,32, 8339, 9, 2.0, NULL, 8338, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XcmsPad,32, 8339, 6, 1.2, NULL, 8338, NULL)
#elif defined __ia64__
CheckTypeSize(XcmsPad,32, 8339, 3, 1.3, NULL, 8338, NULL)
#elif defined __i386__
CheckTypeSize(XcmsPad,32, 8339, 2, 1.2, NULL, 8338, NULL)
#else
Msg("Find size of XcmsPad (8339)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8338,NULL);\n",architecture,8339,0);
#endif

#if defined __s390x__
CheckTypeSize(XcmsColor,48, 8342, 12, 1.3, NULL, 8341, NULL)
#elif defined __x86_64__
CheckTypeSize(XcmsColor,48, 8342, 11, 2.0, NULL, 8341, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XcmsColor,40, 8342, 10, 1.3, NULL, 8341, NULL)
#elif defined __powerpc64__
CheckTypeSize(XcmsColor,48, 8342, 9, 2.0, NULL, 8341, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XcmsColor,40, 8342, 6, 1.2, NULL, 8341, NULL)
#elif defined __ia64__
CheckTypeSize(XcmsColor,48, 8342, 3, 1.3, NULL, 8341, NULL)
#elif defined __i386__
CheckTypeSize(XcmsColor,40, 8342, 2, 1.2, NULL, 8341, NULL)
#else
Msg("Find size of XcmsColor (8342)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8341,NULL);\n",architecture,8342,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XcmsPerScrnInfo,72, 8343, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XcmsPerScrnInfo,pad,3,12,32720)
CheckOffset(struct _XcmsPerScrnInfo,pad,65,12,32720)
#elif defined __x86_64__
CheckTypeSize(struct _XcmsPerScrnInfo,72, 8343, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XcmsPerScrnInfo,pad,3,11,32720)
CheckOffset(struct _XcmsPerScrnInfo,pad,65,11,32720)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XcmsPerScrnInfo,56, 8343, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XcmsPerScrnInfo,pad,3,10,32720)
CheckOffset(struct _XcmsPerScrnInfo,pad,49,10,32720)
#elif defined __powerpc64__
CheckTypeSize(struct _XcmsPerScrnInfo,72, 8343, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XcmsPerScrnInfo,pad,3,9,32720)
CheckOffset(struct _XcmsPerScrnInfo,pad,65,9,32720)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XcmsPerScrnInfo,56, 8343, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XcmsPerScrnInfo,pad,3,6,32720)
CheckOffset(struct _XcmsPerScrnInfo,pad,49,6,32720)
#elif defined __ia64__
CheckTypeSize(struct _XcmsPerScrnInfo,72, 8343, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XcmsPerScrnInfo,pad,3,3,32720)
CheckOffset(struct _XcmsPerScrnInfo,pad,65,3,32720)
#elif defined __i386__
CheckTypeSize(struct _XcmsPerScrnInfo,52, 8343, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XcmsPerScrnInfo,pad,3,2,32720)
CheckOffset(struct _XcmsPerScrnInfo,pad,49,2,32720)
#else
Msg("Find size of _XcmsPerScrnInfo (8343)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,8343,0);
#endif

#if defined __s390x__
CheckTypeSize(XcmsPerScrnInfo,72, 8344, 12, 1.3, NULL, 8343, NULL)
#elif defined __x86_64__
CheckTypeSize(XcmsPerScrnInfo,72, 8344, 11, 2.0, NULL, 8343, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XcmsPerScrnInfo,56, 8344, 10, 1.3, NULL, 8343, NULL)
#elif defined __powerpc64__
CheckTypeSize(XcmsPerScrnInfo,72, 8344, 9, 2.0, NULL, 8343, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XcmsPerScrnInfo,56, 8344, 6, 1.2, NULL, 8343, NULL)
#elif defined __ia64__
CheckTypeSize(XcmsPerScrnInfo,72, 8344, 3, 1.3, NULL, 8343, NULL)
#elif defined __i386__
CheckTypeSize(XcmsPerScrnInfo,52, 8344, 2, 1.2, NULL, 8343, NULL)
#else
Msg("Find size of XcmsPerScrnInfo (8344)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8343,NULL);\n",architecture,8344,0);
#endif

#if defined __s390x__
CheckTypeSize(XcmsCompressionProc,8, 8856, 12, 1.3, NULL, 8854, NULL)
#elif defined __x86_64__
CheckTypeSize(XcmsCompressionProc,8, 8856, 11, 2.0, NULL, 8854, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XcmsCompressionProc,4, 8856, 10, 1.3, NULL, 8854, NULL)
#elif defined __powerpc64__
CheckTypeSize(XcmsCompressionProc,8, 8856, 9, 2.0, NULL, 8854, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XcmsCompressionProc,4, 8856, 6, 1.2, NULL, 8854, NULL)
#elif defined __ia64__
CheckTypeSize(XcmsCompressionProc,8, 8856, 3, 1.3, NULL, 8854, NULL)
#elif defined __i386__
CheckTypeSize(XcmsCompressionProc,4, 8856, 2, 1.2, NULL, 8854, NULL)
#else
Msg("Find size of XcmsCompressionProc (8856)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8854,NULL);\n",architecture,8856,0);
#endif

#if defined __s390x__
CheckTypeSize(XcmsWhiteAdjustProc,8, 8858, 12, 1.3, NULL, 8857, NULL)
#elif defined __x86_64__
CheckTypeSize(XcmsWhiteAdjustProc,8, 8858, 11, 2.0, NULL, 8857, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XcmsWhiteAdjustProc,4, 8858, 10, 1.3, NULL, 8857, NULL)
#elif defined __powerpc64__
CheckTypeSize(XcmsWhiteAdjustProc,8, 8858, 9, 2.0, NULL, 8857, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XcmsWhiteAdjustProc,4, 8858, 6, 1.2, NULL, 8857, NULL)
#elif defined __ia64__
CheckTypeSize(XcmsWhiteAdjustProc,8, 8858, 3, 1.3, NULL, 8857, NULL)
#elif defined __i386__
CheckTypeSize(XcmsWhiteAdjustProc,4, 8858, 2, 1.2, NULL, 8857, NULL)
#else
Msg("Find size of XcmsWhiteAdjustProc (8858)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8857,NULL);\n",architecture,8858,0);
#endif

#if defined __s390x__
CheckTypeSize(XcmsScreenInitProc,8, 8861, 12, 1.3, NULL, 8860, NULL)
#elif defined __x86_64__
CheckTypeSize(XcmsScreenInitProc,8, 8861, 11, 2.0, NULL, 8860, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XcmsScreenInitProc,4, 8861, 10, 1.3, NULL, 8860, NULL)
#elif defined __powerpc64__
CheckTypeSize(XcmsScreenInitProc,8, 8861, 9, 2.0, NULL, 8860, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XcmsScreenInitProc,4, 8861, 6, 1.2, NULL, 8860, NULL)
#elif defined __ia64__
CheckTypeSize(XcmsScreenInitProc,8, 8861, 3, 1.3, NULL, 8860, NULL)
#elif defined __i386__
CheckTypeSize(XcmsScreenInitProc,4, 8861, 2, 1.2, NULL, 8860, NULL)
#else
Msg("Find size of XcmsScreenInitProc (8861)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8860,NULL);\n",architecture,8861,0);
#endif

#if defined __s390x__
CheckTypeSize(XcmsScreenFreeProc,8, 8863, 12, 1.3, NULL, 8862, NULL)
#elif defined __x86_64__
CheckTypeSize(XcmsScreenFreeProc,8, 8863, 11, 2.0, NULL, 8862, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XcmsScreenFreeProc,4, 8863, 10, 1.3, NULL, 8862, NULL)
#elif defined __powerpc64__
CheckTypeSize(XcmsScreenFreeProc,8, 8863, 9, 2.0, NULL, 8862, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XcmsScreenFreeProc,4, 8863, 6, 1.2, NULL, 8862, NULL)
#elif defined __ia64__
CheckTypeSize(XcmsScreenFreeProc,8, 8863, 3, 1.3, NULL, 8862, NULL)
#elif defined __i386__
CheckTypeSize(XcmsScreenFreeProc,4, 8863, 2, 1.2, NULL, 8862, NULL)
#else
Msg("Find size of XcmsScreenFreeProc (8863)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8862,NULL);\n",architecture,8863,0);
#endif

#if defined __s390x__
CheckTypeSize(XcmsConversionProc,8, 8865, 12, 1.3, NULL, 1008218, NULL)
#elif defined __x86_64__
CheckTypeSize(XcmsConversionProc,8, 8865, 11, 2.0, NULL, 1008218, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XcmsConversionProc,4, 8865, 10, 1.3, NULL, 1008218, NULL)
#elif defined __powerpc64__
CheckTypeSize(XcmsConversionProc,8, 8865, 9, 2.0, NULL, 1008218, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XcmsConversionProc,4, 8865, 6, 1.2, NULL, 1008218, NULL)
#elif defined __ia64__
CheckTypeSize(XcmsConversionProc,8, 8865, 3, 1.3, NULL, 1008218, NULL)
#elif defined __i386__
CheckTypeSize(XcmsConversionProc,4, 8865, 2, 1.2, NULL, 1008218, NULL)
#else
Msg("Find size of XcmsConversionProc (8865)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,1008218,NULL);\n",architecture,8865,0);
#endif

#if defined __s390x__
CheckTypeSize(XcmsParseStringProc,8, 8869, 12, 1.3, NULL, 8868, NULL)
#elif defined __x86_64__
CheckTypeSize(XcmsParseStringProc,8, 8869, 11, 2.0, NULL, 8868, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XcmsParseStringProc,4, 8869, 10, 1.3, NULL, 8868, NULL)
#elif defined __powerpc64__
CheckTypeSize(XcmsParseStringProc,8, 8869, 9, 2.0, NULL, 8868, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XcmsParseStringProc,4, 8869, 6, 1.2, NULL, 8868, NULL)
#elif defined __ia64__
CheckTypeSize(XcmsParseStringProc,8, 8869, 3, 1.3, NULL, 8868, NULL)
#elif defined __i386__
CheckTypeSize(XcmsParseStringProc,4, 8869, 2, 1.2, NULL, 8868, NULL)
#else
Msg("Find size of XcmsParseStringProc (8869)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8868,NULL);\n",architecture,8869,0);
#endif

#if 1
CheckTypeSize(XcmsDIConversionProc,0, 1008218, 1, 1.2, NULL, 1008217, NULL)
#endif

#if 1
CheckTypeSize(XcmsDDConversionProc,0, 1008220, 1, 1.2, NULL, 1008219, NULL)
#endif

#if defined __s390x__
CheckTypeSize(struct _XcmsCCC,112, 8345, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XcmsCCC,screenNumber,4,12,32722)
CheckOffset(struct _XcmsCCC,screenNumber,8,12,32722)
CheckMemberSize(struct _XcmsCCC,visual,8,12,32723)
CheckOffset(struct _XcmsCCC,visual,16,12,32723)
CheckMemberSize(struct _XcmsCCC,clientWhitePt,48,12,32724)
CheckOffset(struct _XcmsCCC,clientWhitePt,24,12,32724)
CheckMemberSize(struct _XcmsCCC,gamutCompProc,8,12,32725)
CheckOffset(struct _XcmsCCC,gamutCompProc,72,12,32725)
CheckMemberSize(struct _XcmsCCC,gamutCompClientData,8,12,32726)
CheckOffset(struct _XcmsCCC,gamutCompClientData,80,12,32726)
CheckMemberSize(struct _XcmsCCC,whitePtAdjProc,8,12,32727)
CheckOffset(struct _XcmsCCC,whitePtAdjProc,88,12,32727)
CheckMemberSize(struct _XcmsCCC,whitePtAdjClientData,8,12,32728)
CheckOffset(struct _XcmsCCC,whitePtAdjClientData,96,12,32728)
CheckMemberSize(struct _XcmsCCC,pPerScrnInfo,8,12,32729)
CheckOffset(struct _XcmsCCC,pPerScrnInfo,104,12,32729)
#elif defined __x86_64__
CheckTypeSize(struct _XcmsCCC,112, 8345, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XcmsCCC,screenNumber,4,11,32722)
CheckOffset(struct _XcmsCCC,screenNumber,8,11,32722)
CheckMemberSize(struct _XcmsCCC,visual,8,11,32723)
CheckOffset(struct _XcmsCCC,visual,16,11,32723)
CheckMemberSize(struct _XcmsCCC,clientWhitePt,48,11,32724)
CheckOffset(struct _XcmsCCC,clientWhitePt,24,11,32724)
CheckMemberSize(struct _XcmsCCC,gamutCompProc,8,11,32725)
CheckOffset(struct _XcmsCCC,gamutCompProc,72,11,32725)
CheckMemberSize(struct _XcmsCCC,gamutCompClientData,8,11,32726)
CheckOffset(struct _XcmsCCC,gamutCompClientData,80,11,32726)
CheckMemberSize(struct _XcmsCCC,whitePtAdjProc,8,11,32727)
CheckOffset(struct _XcmsCCC,whitePtAdjProc,88,11,32727)
CheckMemberSize(struct _XcmsCCC,whitePtAdjClientData,8,11,32728)
CheckOffset(struct _XcmsCCC,whitePtAdjClientData,96,11,32728)
CheckMemberSize(struct _XcmsCCC,pPerScrnInfo,8,11,32729)
CheckOffset(struct _XcmsCCC,pPerScrnInfo,104,11,32729)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XcmsCCC,80, 8345, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XcmsCCC,screenNumber,4,10,32722)
CheckOffset(struct _XcmsCCC,screenNumber,4,10,32722)
CheckMemberSize(struct _XcmsCCC,visual,4,10,32723)
CheckOffset(struct _XcmsCCC,visual,8,10,32723)
CheckMemberSize(struct _XcmsCCC,clientWhitePt,40,10,32724)
CheckOffset(struct _XcmsCCC,clientWhitePt,16,10,32724)
CheckMemberSize(struct _XcmsCCC,gamutCompProc,4,10,32725)
CheckOffset(struct _XcmsCCC,gamutCompProc,56,10,32725)
CheckMemberSize(struct _XcmsCCC,gamutCompClientData,4,10,32726)
CheckOffset(struct _XcmsCCC,gamutCompClientData,60,10,32726)
CheckMemberSize(struct _XcmsCCC,whitePtAdjProc,4,10,32727)
CheckOffset(struct _XcmsCCC,whitePtAdjProc,64,10,32727)
CheckMemberSize(struct _XcmsCCC,whitePtAdjClientData,4,10,32728)
CheckOffset(struct _XcmsCCC,whitePtAdjClientData,68,10,32728)
CheckMemberSize(struct _XcmsCCC,pPerScrnInfo,4,10,32729)
CheckOffset(struct _XcmsCCC,pPerScrnInfo,72,10,32729)
#elif defined __powerpc64__
CheckTypeSize(struct _XcmsCCC,112, 8345, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XcmsCCC,screenNumber,4,9,32722)
CheckOffset(struct _XcmsCCC,screenNumber,8,9,32722)
CheckMemberSize(struct _XcmsCCC,visual,8,9,32723)
CheckOffset(struct _XcmsCCC,visual,16,9,32723)
CheckMemberSize(struct _XcmsCCC,clientWhitePt,48,9,32724)
CheckOffset(struct _XcmsCCC,clientWhitePt,24,9,32724)
CheckMemberSize(struct _XcmsCCC,gamutCompProc,8,9,32725)
CheckOffset(struct _XcmsCCC,gamutCompProc,72,9,32725)
CheckMemberSize(struct _XcmsCCC,gamutCompClientData,8,9,32726)
CheckOffset(struct _XcmsCCC,gamutCompClientData,80,9,32726)
CheckMemberSize(struct _XcmsCCC,whitePtAdjProc,8,9,32727)
CheckOffset(struct _XcmsCCC,whitePtAdjProc,88,9,32727)
CheckMemberSize(struct _XcmsCCC,whitePtAdjClientData,8,9,32728)
CheckOffset(struct _XcmsCCC,whitePtAdjClientData,96,9,32728)
CheckMemberSize(struct _XcmsCCC,pPerScrnInfo,8,9,32729)
CheckOffset(struct _XcmsCCC,pPerScrnInfo,104,9,32729)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XcmsCCC,80, 8345, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XcmsCCC,screenNumber,4,6,32722)
CheckOffset(struct _XcmsCCC,screenNumber,4,6,32722)
CheckMemberSize(struct _XcmsCCC,visual,4,6,32723)
CheckOffset(struct _XcmsCCC,visual,8,6,32723)
CheckMemberSize(struct _XcmsCCC,clientWhitePt,40,6,32724)
CheckOffset(struct _XcmsCCC,clientWhitePt,16,6,32724)
CheckMemberSize(struct _XcmsCCC,gamutCompProc,4,6,32725)
CheckOffset(struct _XcmsCCC,gamutCompProc,56,6,32725)
CheckMemberSize(struct _XcmsCCC,gamutCompClientData,4,6,32726)
CheckOffset(struct _XcmsCCC,gamutCompClientData,60,6,32726)
CheckMemberSize(struct _XcmsCCC,whitePtAdjProc,4,6,32727)
CheckOffset(struct _XcmsCCC,whitePtAdjProc,64,6,32727)
CheckMemberSize(struct _XcmsCCC,whitePtAdjClientData,4,6,32728)
CheckOffset(struct _XcmsCCC,whitePtAdjClientData,68,6,32728)
CheckMemberSize(struct _XcmsCCC,pPerScrnInfo,4,6,32729)
CheckOffset(struct _XcmsCCC,pPerScrnInfo,72,6,32729)
#elif defined __ia64__
CheckTypeSize(struct _XcmsCCC,112, 8345, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XcmsCCC,screenNumber,4,3,32722)
CheckOffset(struct _XcmsCCC,screenNumber,8,3,32722)
CheckMemberSize(struct _XcmsCCC,visual,8,3,32723)
CheckOffset(struct _XcmsCCC,visual,16,3,32723)
CheckMemberSize(struct _XcmsCCC,clientWhitePt,48,3,32724)
CheckOffset(struct _XcmsCCC,clientWhitePt,24,3,32724)
CheckMemberSize(struct _XcmsCCC,gamutCompProc,8,3,32725)
CheckOffset(struct _XcmsCCC,gamutCompProc,72,3,32725)
CheckMemberSize(struct _XcmsCCC,gamutCompClientData,8,3,32726)
CheckOffset(struct _XcmsCCC,gamutCompClientData,80,3,32726)
CheckMemberSize(struct _XcmsCCC,whitePtAdjProc,8,3,32727)
CheckOffset(struct _XcmsCCC,whitePtAdjProc,88,3,32727)
CheckMemberSize(struct _XcmsCCC,whitePtAdjClientData,8,3,32728)
CheckOffset(struct _XcmsCCC,whitePtAdjClientData,96,3,32728)
CheckMemberSize(struct _XcmsCCC,pPerScrnInfo,8,3,32729)
CheckOffset(struct _XcmsCCC,pPerScrnInfo,104,3,32729)
#elif defined __i386__
CheckTypeSize(struct _XcmsCCC,72, 8345, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XcmsCCC,screenNumber,4,2,32722)
CheckOffset(struct _XcmsCCC,screenNumber,4,2,32722)
CheckMemberSize(struct _XcmsCCC,visual,4,2,32723)
CheckOffset(struct _XcmsCCC,visual,8,2,32723)
CheckMemberSize(struct _XcmsCCC,clientWhitePt,40,2,32724)
CheckOffset(struct _XcmsCCC,clientWhitePt,12,2,32724)
CheckMemberSize(struct _XcmsCCC,gamutCompProc,4,2,32725)
CheckOffset(struct _XcmsCCC,gamutCompProc,52,2,32725)
CheckMemberSize(struct _XcmsCCC,gamutCompClientData,4,2,32726)
CheckOffset(struct _XcmsCCC,gamutCompClientData,56,2,32726)
CheckMemberSize(struct _XcmsCCC,whitePtAdjProc,4,2,32727)
CheckOffset(struct _XcmsCCC,whitePtAdjProc,60,2,32727)
CheckMemberSize(struct _XcmsCCC,whitePtAdjClientData,4,2,32728)
CheckOffset(struct _XcmsCCC,whitePtAdjClientData,64,2,32728)
CheckMemberSize(struct _XcmsCCC,pPerScrnInfo,4,2,32729)
CheckOffset(struct _XcmsCCC,pPerScrnInfo,68,2,32729)
#else
Msg("Find size of _XcmsCCC (8345)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,8345,0);
#endif

#if defined __s390x__
CheckTypeSize(XcmsCCCRec,112, 8351, 12, 1.3, NULL, 8345, NULL)
#elif defined __x86_64__
CheckTypeSize(XcmsCCCRec,112, 8351, 11, 2.0, NULL, 8345, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XcmsCCCRec,80, 8351, 10, 1.3, NULL, 8345, NULL)
#elif defined __powerpc64__
CheckTypeSize(XcmsCCCRec,112, 8351, 9, 2.0, NULL, 8345, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XcmsCCCRec,80, 8351, 6, 1.2, NULL, 8345, NULL)
#elif defined __ia64__
CheckTypeSize(XcmsCCCRec,112, 8351, 3, 1.3, NULL, 8345, NULL)
#elif defined __i386__
CheckTypeSize(XcmsCCCRec,72, 8351, 2, 1.2, NULL, 8345, NULL)
#else
Msg("Find size of XcmsCCCRec (8351)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8345,NULL);\n",architecture,8351,0);
#endif

#if defined __s390x__
CheckTypeSize(XcmsCCC,8, 8853, 12, 1.3, NULL, 8852, NULL)
#elif defined __x86_64__
CheckTypeSize(XcmsCCC,8, 8853, 11, 2.0, NULL, 8852, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XcmsCCC,4, 8853, 10, 1.3, NULL, 8852, NULL)
#elif defined __powerpc64__
CheckTypeSize(XcmsCCC,8, 8853, 9, 2.0, NULL, 8852, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XcmsCCC,4, 8853, 6, 1.2, NULL, 8852, NULL)
#elif defined __ia64__
CheckTypeSize(XcmsCCC,8, 8853, 3, 1.3, NULL, 8852, NULL)
#elif defined __i386__
CheckTypeSize(XcmsCCC,4, 8853, 2, 1.2, NULL, 8852, NULL)
#else
Msg("Find size of XcmsCCC (8853)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8852,NULL);\n",architecture,8853,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XcmsColorSpace,48, 8361, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XcmsColorSpace,id,8,12,32731)
CheckOffset(struct _XcmsColorSpace,id,8,12,32731)
CheckMemberSize(struct _XcmsColorSpace,parseString,8,12,32732)
CheckOffset(struct _XcmsColorSpace,parseString,16,12,32732)
CheckMemberSize(struct _XcmsColorSpace,to_CIEXYZ,8,12,32733)
CheckOffset(struct _XcmsColorSpace,to_CIEXYZ,24,12,32733)
CheckMemberSize(struct _XcmsColorSpace,from_CIEXYZ,8,12,32734)
CheckOffset(struct _XcmsColorSpace,from_CIEXYZ,32,12,32734)
CheckMemberSize(struct _XcmsColorSpace,inverse_flag,4,12,32735)
CheckOffset(struct _XcmsColorSpace,inverse_flag,40,12,32735)
#elif defined __x86_64__
CheckTypeSize(struct _XcmsColorSpace,48, 8361, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XcmsColorSpace,id,8,11,32731)
CheckOffset(struct _XcmsColorSpace,id,8,11,32731)
CheckMemberSize(struct _XcmsColorSpace,parseString,8,11,32732)
CheckOffset(struct _XcmsColorSpace,parseString,16,11,32732)
CheckMemberSize(struct _XcmsColorSpace,to_CIEXYZ,8,11,32733)
CheckOffset(struct _XcmsColorSpace,to_CIEXYZ,24,11,32733)
CheckMemberSize(struct _XcmsColorSpace,from_CIEXYZ,8,11,32734)
CheckOffset(struct _XcmsColorSpace,from_CIEXYZ,32,11,32734)
CheckMemberSize(struct _XcmsColorSpace,inverse_flag,4,11,32735)
CheckOffset(struct _XcmsColorSpace,inverse_flag,40,11,32735)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XcmsColorSpace,24, 8361, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XcmsColorSpace,id,4,10,32731)
CheckOffset(struct _XcmsColorSpace,id,4,10,32731)
CheckMemberSize(struct _XcmsColorSpace,parseString,4,10,32732)
CheckOffset(struct _XcmsColorSpace,parseString,8,10,32732)
CheckMemberSize(struct _XcmsColorSpace,to_CIEXYZ,4,10,32733)
CheckOffset(struct _XcmsColorSpace,to_CIEXYZ,12,10,32733)
CheckMemberSize(struct _XcmsColorSpace,from_CIEXYZ,4,10,32734)
CheckOffset(struct _XcmsColorSpace,from_CIEXYZ,16,10,32734)
CheckMemberSize(struct _XcmsColorSpace,inverse_flag,4,10,32735)
CheckOffset(struct _XcmsColorSpace,inverse_flag,20,10,32735)
#elif defined __powerpc64__
CheckTypeSize(struct _XcmsColorSpace,48, 8361, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XcmsColorSpace,id,8,9,32731)
CheckOffset(struct _XcmsColorSpace,id,8,9,32731)
CheckMemberSize(struct _XcmsColorSpace,parseString,8,9,32732)
CheckOffset(struct _XcmsColorSpace,parseString,16,9,32732)
CheckMemberSize(struct _XcmsColorSpace,to_CIEXYZ,8,9,32733)
CheckOffset(struct _XcmsColorSpace,to_CIEXYZ,24,9,32733)
CheckMemberSize(struct _XcmsColorSpace,from_CIEXYZ,8,9,32734)
CheckOffset(struct _XcmsColorSpace,from_CIEXYZ,32,9,32734)
CheckMemberSize(struct _XcmsColorSpace,inverse_flag,4,9,32735)
CheckOffset(struct _XcmsColorSpace,inverse_flag,40,9,32735)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XcmsColorSpace,24, 8361, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XcmsColorSpace,id,4,6,32731)
CheckOffset(struct _XcmsColorSpace,id,4,6,32731)
CheckMemberSize(struct _XcmsColorSpace,parseString,4,6,32732)
CheckOffset(struct _XcmsColorSpace,parseString,8,6,32732)
CheckMemberSize(struct _XcmsColorSpace,to_CIEXYZ,4,6,32733)
CheckOffset(struct _XcmsColorSpace,to_CIEXYZ,12,6,32733)
CheckMemberSize(struct _XcmsColorSpace,from_CIEXYZ,4,6,32734)
CheckOffset(struct _XcmsColorSpace,from_CIEXYZ,16,6,32734)
CheckMemberSize(struct _XcmsColorSpace,inverse_flag,4,6,32735)
CheckOffset(struct _XcmsColorSpace,inverse_flag,20,6,32735)
#elif defined __ia64__
CheckTypeSize(struct _XcmsColorSpace,48, 8361, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XcmsColorSpace,id,8,3,32731)
CheckOffset(struct _XcmsColorSpace,id,8,3,32731)
CheckMemberSize(struct _XcmsColorSpace,parseString,8,3,32732)
CheckOffset(struct _XcmsColorSpace,parseString,16,3,32732)
CheckMemberSize(struct _XcmsColorSpace,to_CIEXYZ,8,3,32733)
CheckOffset(struct _XcmsColorSpace,to_CIEXYZ,24,3,32733)
CheckMemberSize(struct _XcmsColorSpace,from_CIEXYZ,8,3,32734)
CheckOffset(struct _XcmsColorSpace,from_CIEXYZ,32,3,32734)
CheckMemberSize(struct _XcmsColorSpace,inverse_flag,4,3,32735)
CheckOffset(struct _XcmsColorSpace,inverse_flag,40,3,32735)
#elif defined __i386__
CheckTypeSize(struct _XcmsColorSpace,24, 8361, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XcmsColorSpace,id,4,2,32731)
CheckOffset(struct _XcmsColorSpace,id,4,2,32731)
CheckMemberSize(struct _XcmsColorSpace,parseString,4,2,32732)
CheckOffset(struct _XcmsColorSpace,parseString,8,2,32732)
CheckMemberSize(struct _XcmsColorSpace,to_CIEXYZ,4,2,32733)
CheckOffset(struct _XcmsColorSpace,to_CIEXYZ,12,2,32733)
CheckMemberSize(struct _XcmsColorSpace,from_CIEXYZ,4,2,32734)
CheckOffset(struct _XcmsColorSpace,from_CIEXYZ,16,2,32734)
CheckMemberSize(struct _XcmsColorSpace,inverse_flag,4,2,32735)
CheckOffset(struct _XcmsColorSpace,inverse_flag,20,2,32735)
#else
Msg("Find size of _XcmsColorSpace (8361)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,8361,0);
#endif

#if defined __s390x__
CheckTypeSize(XcmsColorSpace,48, 8362, 12, 1.3, NULL, 8361, NULL)
#elif defined __x86_64__
CheckTypeSize(XcmsColorSpace,48, 8362, 11, 2.0, NULL, 8361, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XcmsColorSpace,24, 8362, 10, 1.3, NULL, 8361, NULL)
#elif defined __powerpc64__
CheckTypeSize(XcmsColorSpace,48, 8362, 9, 2.0, NULL, 8361, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XcmsColorSpace,24, 8362, 6, 1.2, NULL, 8361, NULL)
#elif defined __ia64__
CheckTypeSize(XcmsColorSpace,48, 8362, 3, 1.3, NULL, 8361, NULL)
#elif defined __i386__
CheckTypeSize(XcmsColorSpace,24, 8362, 2, 1.2, NULL, 8361, NULL)
#else
Msg("Find size of XcmsColorSpace (8362)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8361,NULL);\n",architecture,8362,0);
#endif

#if defined __s390x__
CheckTypeSize(XcmsFuncListPtr,8, 8867, 12, 1.3, NULL, 8866, NULL)
#elif defined __x86_64__
CheckTypeSize(XcmsFuncListPtr,8, 8867, 11, 2.0, NULL, 8866, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XcmsFuncListPtr,4, 8867, 10, 1.3, NULL, 8866, NULL)
#elif defined __powerpc64__
CheckTypeSize(XcmsFuncListPtr,8, 8867, 9, 2.0, NULL, 8866, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XcmsFuncListPtr,4, 8867, 6, 1.2, NULL, 8866, NULL)
#elif defined __ia64__
CheckTypeSize(XcmsFuncListPtr,8, 8867, 3, 1.3, NULL, 8866, NULL)
#elif defined __i386__
CheckTypeSize(XcmsFuncListPtr,4, 8867, 2, 1.2, NULL, 8866, NULL)
#else
Msg("Find size of XcmsFuncListPtr (8867)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8866, NULL);\n",architecture,8867,0);
#endif

#if defined __s390x__
/* S390X */
typedef int (*XcmsCompressionProc_db)(XcmsCCC, XcmsColor *, unsigned int, unsigned int, int *);
CheckFunctionTypedef(XcmsCompressionProc,XcmsCompressionProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*XcmsCompressionProc_db)(XcmsCCC, XcmsColor *, unsigned int, unsigned int, int *);
CheckFunctionTypedef(XcmsCompressionProc,XcmsCompressionProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*XcmsCompressionProc_db)(XcmsCCC, XcmsColor *, unsigned int, unsigned int, int *);
CheckFunctionTypedef(XcmsCompressionProc,XcmsCompressionProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*XcmsCompressionProc_db)(XcmsCCC, XcmsColor *, unsigned int, unsigned int, int *);
CheckFunctionTypedef(XcmsCompressionProc,XcmsCompressionProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*XcmsCompressionProc_db)(XcmsCCC, XcmsColor *, unsigned int, unsigned int, int *);
CheckFunctionTypedef(XcmsCompressionProc,XcmsCompressionProc_db);
#elif defined __ia64__
/* IA64 */
typedef int (*XcmsCompressionProc_db)(XcmsCCC, XcmsColor *, unsigned int, unsigned int, int *);
CheckFunctionTypedef(XcmsCompressionProc,XcmsCompressionProc_db);
#elif defined __i386__
/* IA32 */
typedef int (*XcmsCompressionProc_db)(XcmsCCC, XcmsColor *, unsigned int, unsigned int, int *);
CheckFunctionTypedef(XcmsCompressionProc,XcmsCompressionProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef int (*XcmsWhiteAdjustProc_db)(XcmsCCC, XcmsColor *, XcmsColor *, XcmsColorFormat, XcmsColor *, unsigned int, int *);
CheckFunctionTypedef(XcmsWhiteAdjustProc,XcmsWhiteAdjustProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*XcmsWhiteAdjustProc_db)(XcmsCCC, XcmsColor *, XcmsColor *, XcmsColorFormat, XcmsColor *, unsigned int, int *);
CheckFunctionTypedef(XcmsWhiteAdjustProc,XcmsWhiteAdjustProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*XcmsWhiteAdjustProc_db)(XcmsCCC, XcmsColor *, XcmsColor *, XcmsColorFormat, XcmsColor *, unsigned int, int *);
CheckFunctionTypedef(XcmsWhiteAdjustProc,XcmsWhiteAdjustProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*XcmsWhiteAdjustProc_db)(XcmsCCC, XcmsColor *, XcmsColor *, XcmsColorFormat, XcmsColor *, unsigned int, int *);
CheckFunctionTypedef(XcmsWhiteAdjustProc,XcmsWhiteAdjustProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*XcmsWhiteAdjustProc_db)(XcmsCCC, XcmsColor *, XcmsColor *, XcmsColorFormat, XcmsColor *, unsigned int, int *);
CheckFunctionTypedef(XcmsWhiteAdjustProc,XcmsWhiteAdjustProc_db);
#elif defined __ia64__
/* IA64 */
typedef int (*XcmsWhiteAdjustProc_db)(XcmsCCC, XcmsColor *, XcmsColor *, XcmsColorFormat, XcmsColor *, unsigned int, int *);
CheckFunctionTypedef(XcmsWhiteAdjustProc,XcmsWhiteAdjustProc_db);
#elif defined __i386__
/* IA32 */
typedef int (*XcmsWhiteAdjustProc_db)(XcmsCCC, XcmsColor *, XcmsColor *, XcmsColorFormat, XcmsColor *, unsigned int, int *);
CheckFunctionTypedef(XcmsWhiteAdjustProc,XcmsWhiteAdjustProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef int (*XcmsScreenInitProc_db)(Display *, int, XcmsPerScrnInfo *);
CheckFunctionTypedef(XcmsScreenInitProc,XcmsScreenInitProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*XcmsScreenInitProc_db)(Display *, int, XcmsPerScrnInfo *);
CheckFunctionTypedef(XcmsScreenInitProc,XcmsScreenInitProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*XcmsScreenInitProc_db)(Display *, int, XcmsPerScrnInfo *);
CheckFunctionTypedef(XcmsScreenInitProc,XcmsScreenInitProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*XcmsScreenInitProc_db)(Display *, int, XcmsPerScrnInfo *);
CheckFunctionTypedef(XcmsScreenInitProc,XcmsScreenInitProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*XcmsScreenInitProc_db)(Display *, int, XcmsPerScrnInfo *);
CheckFunctionTypedef(XcmsScreenInitProc,XcmsScreenInitProc_db);
#elif defined __ia64__
/* IA64 */
typedef int (*XcmsScreenInitProc_db)(Display *, int, XcmsPerScrnInfo *);
CheckFunctionTypedef(XcmsScreenInitProc,XcmsScreenInitProc_db);
#elif defined __i386__
/* IA32 */
typedef int (*XcmsScreenInitProc_db)(Display *, int, XcmsPerScrnInfo *);
CheckFunctionTypedef(XcmsScreenInitProc,XcmsScreenInitProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*XcmsScreenFreeProc_db)(XPointer);
CheckFunctionTypedef(XcmsScreenFreeProc,XcmsScreenFreeProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*XcmsScreenFreeProc_db)(XPointer);
CheckFunctionTypedef(XcmsScreenFreeProc,XcmsScreenFreeProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*XcmsScreenFreeProc_db)(XPointer);
CheckFunctionTypedef(XcmsScreenFreeProc,XcmsScreenFreeProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*XcmsScreenFreeProc_db)(XPointer);
CheckFunctionTypedef(XcmsScreenFreeProc,XcmsScreenFreeProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*XcmsScreenFreeProc_db)(XPointer);
CheckFunctionTypedef(XcmsScreenFreeProc,XcmsScreenFreeProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*XcmsScreenFreeProc_db)(XPointer);
CheckFunctionTypedef(XcmsScreenFreeProc,XcmsScreenFreeProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*XcmsScreenFreeProc_db)(XPointer);
CheckFunctionTypedef(XcmsScreenFreeProc,XcmsScreenFreeProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef int (*XcmsParseStringProc_db)(char *, XcmsColor *);
CheckFunctionTypedef(XcmsParseStringProc,XcmsParseStringProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*XcmsParseStringProc_db)(char *, XcmsColor *);
CheckFunctionTypedef(XcmsParseStringProc,XcmsParseStringProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*XcmsParseStringProc_db)(char *, XcmsColor *);
CheckFunctionTypedef(XcmsParseStringProc,XcmsParseStringProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*XcmsParseStringProc_db)(char *, XcmsColor *);
CheckFunctionTypedef(XcmsParseStringProc,XcmsParseStringProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*XcmsParseStringProc_db)(char *, XcmsColor *);
CheckFunctionTypedef(XcmsParseStringProc,XcmsParseStringProc_db);
#elif defined __ia64__
/* IA64 */
typedef int (*XcmsParseStringProc_db)(char *, XcmsColor *);
CheckFunctionTypedef(XcmsParseStringProc,XcmsParseStringProc_db);
#elif defined __i386__
/* IA32 */
typedef int (*XcmsParseStringProc_db)(char *, XcmsColor *);
CheckFunctionTypedef(XcmsParseStringProc,XcmsParseStringProc_db);
#endif

#if 1
/* All */
typedef int (*XcmsDIConversionProc_db)(XcmsCCC, XcmsColor *, XcmsColor *, unsigned int);
CheckFunctionTypedef(XcmsDIConversionProc,XcmsDIConversionProc_db);
#endif

#if 1
/* All */
typedef int (*XcmsDDConversionProc_db)(XcmsCCC, XcmsColor *, unsigned int, int *);
CheckFunctionTypedef(XcmsDDConversionProc,XcmsDDConversionProc_db);
#endif

extern int XcmsAddColorSpace_db(XcmsColorSpace *);
CheckInterfacedef(XcmsAddColorSpace,XcmsAddColorSpace_db);
extern int XcmsAddFunctionSet_db(XcmsFunctionSet *);
CheckInterfacedef(XcmsAddFunctionSet,XcmsAddFunctionSet_db);
extern int XcmsAllocColor_db(Display *, Colormap, XcmsColor *, XcmsColorFormat);
CheckInterfacedef(XcmsAllocColor,XcmsAllocColor_db);
extern int XcmsAllocNamedColor_db(Display *, Colormap, const char *, XcmsColor *, XcmsColor *, XcmsColorFormat);
CheckInterfacedef(XcmsAllocNamedColor,XcmsAllocNamedColor_db);
extern XcmsCCC XcmsCCCOfColormap_db(Display *, Colormap);
CheckInterfacedef(XcmsCCCOfColormap,XcmsCCCOfColormap_db);
extern int XcmsCIELabClipL_db(XcmsCCC, XcmsColor *, unsigned int, unsigned int, int *);
CheckInterfacedef(XcmsCIELabClipL,XcmsCIELabClipL_db);
extern int XcmsCIELabClipLab_db(XcmsCCC, XcmsColor *, unsigned int, unsigned int, int *);
CheckInterfacedef(XcmsCIELabClipLab,XcmsCIELabClipLab_db);
extern int XcmsCIELabClipab_db(XcmsCCC, XcmsColor *, unsigned int, unsigned int, int *);
CheckInterfacedef(XcmsCIELabClipab,XcmsCIELabClipab_db);
extern int XcmsCIELabQueryMaxC_db(XcmsCCC, XcmsFloat, XcmsFloat, XcmsColor *);
CheckInterfacedef(XcmsCIELabQueryMaxC,XcmsCIELabQueryMaxC_db);
extern int XcmsCIELabQueryMaxL_db(XcmsCCC, XcmsFloat, XcmsFloat, XcmsColor *);
CheckInterfacedef(XcmsCIELabQueryMaxL,XcmsCIELabQueryMaxL_db);
extern int XcmsCIELabQueryMaxLC_db(XcmsCCC, XcmsFloat, XcmsColor *);
CheckInterfacedef(XcmsCIELabQueryMaxLC,XcmsCIELabQueryMaxLC_db);
extern int XcmsCIELabQueryMinL_db(XcmsCCC, XcmsFloat, XcmsFloat, XcmsColor *);
CheckInterfacedef(XcmsCIELabQueryMinL,XcmsCIELabQueryMinL_db);
extern int XcmsCIELabToCIEXYZ_db(XcmsCCC, XcmsColor *, XcmsColor *, unsigned int);
CheckInterfacedef(XcmsCIELabToCIEXYZ,XcmsCIELabToCIEXYZ_db);
extern int XcmsCIELabWhiteShiftColors_db(XcmsCCC, XcmsColor *, XcmsColor *, XcmsColorFormat, XcmsColor *, unsigned int, int *);
CheckInterfacedef(XcmsCIELabWhiteShiftColors,XcmsCIELabWhiteShiftColors_db);
extern int XcmsCIELuvClipL_db(XcmsCCC, XcmsColor *, unsigned int, unsigned int, int *);
CheckInterfacedef(XcmsCIELuvClipL,XcmsCIELuvClipL_db);
extern int XcmsCIELuvClipLuv_db(XcmsCCC, XcmsColor *, unsigned int, unsigned int, int *);
CheckInterfacedef(XcmsCIELuvClipLuv,XcmsCIELuvClipLuv_db);
extern int XcmsCIELuvClipuv_db(XcmsCCC, XcmsColor *, unsigned int, unsigned int, int *);
CheckInterfacedef(XcmsCIELuvClipuv,XcmsCIELuvClipuv_db);
extern int XcmsCIELuvQueryMaxC_db(XcmsCCC, XcmsFloat, XcmsFloat, XcmsColor *);
CheckInterfacedef(XcmsCIELuvQueryMaxC,XcmsCIELuvQueryMaxC_db);
extern int XcmsCIELuvQueryMaxL_db(XcmsCCC, XcmsFloat, XcmsFloat, XcmsColor *);
CheckInterfacedef(XcmsCIELuvQueryMaxL,XcmsCIELuvQueryMaxL_db);
extern int XcmsCIELuvQueryMaxLC_db(XcmsCCC, XcmsFloat, XcmsColor *);
CheckInterfacedef(XcmsCIELuvQueryMaxLC,XcmsCIELuvQueryMaxLC_db);
extern int XcmsCIELuvQueryMinL_db(XcmsCCC, XcmsFloat, XcmsFloat, XcmsColor *);
CheckInterfacedef(XcmsCIELuvQueryMinL,XcmsCIELuvQueryMinL_db);
extern int XcmsCIELuvToCIEuvY_db(XcmsCCC, XcmsColor *, XcmsColor *, unsigned int);
CheckInterfacedef(XcmsCIELuvToCIEuvY,XcmsCIELuvToCIEuvY_db);
extern int XcmsCIELuvWhiteShiftColors_db(XcmsCCC, XcmsColor *, XcmsColor *, XcmsColorFormat, XcmsColor *, unsigned int, int *);
CheckInterfacedef(XcmsCIELuvWhiteShiftColors,XcmsCIELuvWhiteShiftColors_db);
extern int XcmsCIEXYZToCIELab_db(XcmsCCC, XcmsColor *, XcmsColor *, unsigned int);
CheckInterfacedef(XcmsCIEXYZToCIELab,XcmsCIEXYZToCIELab_db);
extern int XcmsCIEXYZToCIEuvY_db(XcmsCCC, XcmsColor *, XcmsColor *, unsigned int);
CheckInterfacedef(XcmsCIEXYZToCIEuvY,XcmsCIEXYZToCIEuvY_db);
extern int XcmsCIEXYZToCIExyY_db(XcmsCCC, XcmsColor *, XcmsColor *, unsigned int);
CheckInterfacedef(XcmsCIEXYZToCIExyY,XcmsCIEXYZToCIExyY_db);
extern int XcmsCIEXYZToRGBi_db(XcmsCCC, XcmsColor *, unsigned int, int *);
CheckInterfacedef(XcmsCIEXYZToRGBi,XcmsCIEXYZToRGBi_db);
extern int XcmsCIEuvYToCIELuv_db(XcmsCCC, XcmsColor *, XcmsColor *, unsigned int);
CheckInterfacedef(XcmsCIEuvYToCIELuv,XcmsCIEuvYToCIELuv_db);
extern int XcmsCIEuvYToCIEXYZ_db(XcmsCCC, XcmsColor *, XcmsColor *, unsigned int);
CheckInterfacedef(XcmsCIEuvYToCIEXYZ,XcmsCIEuvYToCIEXYZ_db);
extern int XcmsCIEuvYToTekHVC_db(XcmsCCC, XcmsColor *, XcmsColor *, unsigned int);
CheckInterfacedef(XcmsCIEuvYToTekHVC,XcmsCIEuvYToTekHVC_db);
extern int XcmsCIExyYToCIEXYZ_db(XcmsCCC, XcmsColor *, XcmsColor *, unsigned int);
CheckInterfacedef(XcmsCIExyYToCIEXYZ,XcmsCIExyYToCIEXYZ_db);
extern XcmsColor * XcmsClientWhitePointOfCCC_db(XcmsCCC);
CheckInterfacedef(XcmsClientWhitePointOfCCC,XcmsClientWhitePointOfCCC_db);
extern int XcmsConvertColors_db(XcmsCCC, XcmsColor *, unsigned int, XcmsColorFormat, int *);
CheckInterfacedef(XcmsConvertColors,XcmsConvertColors_db);
extern XcmsCCC XcmsCreateCCC_db(Display *, int, Visual *, XcmsColor *, XcmsCompressionProc, XPointer, XcmsWhiteAdjustProc, XPointer);
CheckInterfacedef(XcmsCreateCCC,XcmsCreateCCC_db);
extern XcmsCCC XcmsDefaultCCC_db(Display *, int);
CheckInterfacedef(XcmsDefaultCCC,XcmsDefaultCCC_db);
extern Display * XcmsDisplayOfCCC_db(XcmsCCC);
CheckInterfacedef(XcmsDisplayOfCCC,XcmsDisplayOfCCC_db);
extern XcmsColorFormat XcmsFormatOfPrefix_db(char *);
CheckInterfacedef(XcmsFormatOfPrefix,XcmsFormatOfPrefix_db);
extern void XcmsFreeCCC_db(XcmsCCC);
CheckInterfacedef(XcmsFreeCCC,XcmsFreeCCC_db);
extern int XcmsLookupColor_db(Display *, Colormap, const char *, XcmsColor *, XcmsColor *, XcmsColorFormat);
CheckInterfacedef(XcmsLookupColor,XcmsLookupColor_db);
extern char * XcmsPrefixOfFormat_db(XcmsColorFormat);
CheckInterfacedef(XcmsPrefixOfFormat,XcmsPrefixOfFormat_db);
extern int XcmsQueryBlack_db(XcmsCCC, XcmsColorFormat, XcmsColor *);
CheckInterfacedef(XcmsQueryBlack,XcmsQueryBlack_db);
extern int XcmsQueryBlue_db(XcmsCCC, XcmsColorFormat, XcmsColor *);
CheckInterfacedef(XcmsQueryBlue,XcmsQueryBlue_db);
extern int XcmsQueryColor_db(Display *, Colormap, XcmsColor *, XcmsColorFormat);
CheckInterfacedef(XcmsQueryColor,XcmsQueryColor_db);
extern int XcmsQueryColors_db(Display *, Colormap, XcmsColor *, unsigned int, XcmsColorFormat);
CheckInterfacedef(XcmsQueryColors,XcmsQueryColors_db);
extern int XcmsQueryGreen_db(XcmsCCC, XcmsColorFormat, XcmsColor *);
CheckInterfacedef(XcmsQueryGreen,XcmsQueryGreen_db);
extern int XcmsQueryRed_db(XcmsCCC, XcmsColorFormat, XcmsColor *);
CheckInterfacedef(XcmsQueryRed,XcmsQueryRed_db);
extern int XcmsQueryWhite_db(XcmsCCC, XcmsColorFormat, XcmsColor *);
CheckInterfacedef(XcmsQueryWhite,XcmsQueryWhite_db);
extern int XcmsRGBToRGBi_db(XcmsCCC, XcmsColor *, unsigned int, int *);
CheckInterfacedef(XcmsRGBToRGBi,XcmsRGBToRGBi_db);
extern int XcmsRGBiToCIEXYZ_db(XcmsCCC, XcmsColor *, unsigned int, int *);
CheckInterfacedef(XcmsRGBiToCIEXYZ,XcmsRGBiToCIEXYZ_db);
extern int XcmsRGBiToRGB_db(XcmsCCC, XcmsColor *, unsigned int, int *);
CheckInterfacedef(XcmsRGBiToRGB,XcmsRGBiToRGB_db);
extern int XcmsScreenNumberOfCCC_db(XcmsCCC);
CheckInterfacedef(XcmsScreenNumberOfCCC,XcmsScreenNumberOfCCC_db);
extern XcmsColor * XcmsScreenWhitePointOfCCC_db(XcmsCCC);
CheckInterfacedef(XcmsScreenWhitePointOfCCC,XcmsScreenWhitePointOfCCC_db);
extern XcmsCCC XcmsSetCCCOfColormap_db(Display *, Colormap, XcmsCCC);
CheckInterfacedef(XcmsSetCCCOfColormap,XcmsSetCCCOfColormap_db);
extern XcmsCompressionProc XcmsSetCompressionProc_db(XcmsCCC, XcmsCompressionProc, XPointer);
CheckInterfacedef(XcmsSetCompressionProc,XcmsSetCompressionProc_db);
extern XcmsWhiteAdjustProc XcmsSetWhiteAdjustProc_db(XcmsCCC, XcmsWhiteAdjustProc, XPointer);
CheckInterfacedef(XcmsSetWhiteAdjustProc,XcmsSetWhiteAdjustProc_db);
extern int XcmsSetWhitePoint_db(XcmsCCC, XcmsColor *);
CheckInterfacedef(XcmsSetWhitePoint,XcmsSetWhitePoint_db);
extern int XcmsStoreColor_db(Display *, Colormap, XcmsColor *);
CheckInterfacedef(XcmsStoreColor,XcmsStoreColor_db);
extern int XcmsStoreColors_db(Display *, Colormap, XcmsColor *, unsigned int, int *);
CheckInterfacedef(XcmsStoreColors,XcmsStoreColors_db);
extern int XcmsTekHVCClipC_db(XcmsCCC, XcmsColor *, unsigned int, unsigned int, int *);
CheckInterfacedef(XcmsTekHVCClipC,XcmsTekHVCClipC_db);
extern int XcmsTekHVCClipV_db(XcmsCCC, XcmsColor *, unsigned int, unsigned int, int *);
CheckInterfacedef(XcmsTekHVCClipV,XcmsTekHVCClipV_db);
extern int XcmsTekHVCClipVC_db(XcmsCCC, XcmsColor *, unsigned int, unsigned int, int *);
CheckInterfacedef(XcmsTekHVCClipVC,XcmsTekHVCClipVC_db);
extern int XcmsTekHVCQueryMaxC_db(XcmsCCC, XcmsFloat, XcmsFloat, XcmsColor *);
CheckInterfacedef(XcmsTekHVCQueryMaxC,XcmsTekHVCQueryMaxC_db);
extern int XcmsTekHVCQueryMaxV_db(XcmsCCC, XcmsFloat, XcmsFloat, XcmsColor *);
CheckInterfacedef(XcmsTekHVCQueryMaxV,XcmsTekHVCQueryMaxV_db);
extern int XcmsTekHVCQueryMaxVC_db(XcmsCCC, XcmsFloat, XcmsColor *);
CheckInterfacedef(XcmsTekHVCQueryMaxVC,XcmsTekHVCQueryMaxVC_db);
extern int XcmsTekHVCQueryMaxVSamples_db(XcmsCCC, XcmsFloat, XcmsColor *, unsigned int);
CheckInterfacedef(XcmsTekHVCQueryMaxVSamples,XcmsTekHVCQueryMaxVSamples_db);
extern int XcmsTekHVCQueryMinV_db(XcmsCCC, XcmsFloat, XcmsFloat, XcmsColor *);
CheckInterfacedef(XcmsTekHVCQueryMinV,XcmsTekHVCQueryMinV_db);
extern int XcmsTekHVCToCIEuvY_db(XcmsCCC, XcmsColor *, XcmsColor *, unsigned int);
CheckInterfacedef(XcmsTekHVCToCIEuvY,XcmsTekHVCToCIEuvY_db);
extern int XcmsTekHVCWhiteShiftColors_db(XcmsCCC, XcmsColor *, XcmsColor *, XcmsColorFormat, XcmsColor *, unsigned int, int *);
CheckInterfacedef(XcmsTekHVCWhiteShiftColors,XcmsTekHVCWhiteShiftColors_db);
extern Visual * XcmsVisualOfCCC_db(XcmsCCC);
CheckInterfacedef(XcmsVisualOfCCC,XcmsVisualOfCCC_db);
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
