/*
 * Test of X11/Xft/Xft.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "X11/Xft/Xft.h"



#ifdef TET_TEST
void X11_Xft_Xft_h()
{
#else
int X11_Xft_Xft_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/Xft/Xft.h\n");
#endif

printf("Checking data structures in X11/Xft/Xft.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for XFT_CORE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFT_MAX_GLYPH_MEMORY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFT_MAX_UNREF_FONTS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFT_RENDER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFT_VERSION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XftVersion */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFT_XLFD */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef XFT_MAJOR
	CompareConstant(XFT_MAJOR,2,10666,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: XFT_MAJOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XFT_MINOR
	CompareConstant(XFT_MINOR,1,10667,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: XFT_MINOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XFT_NMISSING
	CompareConstant(XFT_NMISSING,256,10668,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: XFT_NMISSING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XFT_REVISION
	CompareConstant(XFT_REVISION,12,10669,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: XFT_REVISION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XFT_H_ */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for X11/Xft/Xft.h */
#endif

#if defined __i386__
CheckTypeSize(XftDraw,0, 12554, 2, 3.2, NULL, 12553, NULL)
#elif 
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',NULL,,NULL);\n",architecture,12554,0);
Msg("Find size of XftDraw (12554)\n");
#elif defined __powerpc__ && !defined __powerpc64__
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',NULL,,NULL);\n",architecture,12554,0);
Msg("Find size of XftDraw (12554)\n");
#elif defined __powerpc64__
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',NULL,,NULL);\n",architecture,12554,0);
Msg("Find size of XftDraw (12554)\n");
#elif defined __s390__ && !defined __s390x__
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',NULL,,NULL);\n",architecture,12554,0);
Msg("Find size of XftDraw (12554)\n");
#elif defined __x86_64__
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',NULL,,NULL);\n",architecture,12554,0);
Msg("Find size of XftDraw (12554)\n");
#elif defined __s390x__
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',NULL,,NULL);\n",architecture,12554,0);
Msg("Find size of XftDraw (12554)\n");
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,12553,NULL);\n",architecture,12554,0);
Msg("Find size of XftDraw (12554)\n");
#endif

#if defined __i386__
CheckTypeSize(XftColor,0, 12557, 2, 3.2, NULL, 12556, NULL)
#elif 
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',NULL,,NULL);\n",architecture,12557,0);
Msg("Find size of XftColor (12557)\n");
#elif defined __powerpc__ && !defined __powerpc64__
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',NULL,,NULL);\n",architecture,12557,0);
Msg("Find size of XftColor (12557)\n");
#elif defined __powerpc64__
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',NULL,,NULL);\n",architecture,12557,0);
Msg("Find size of XftColor (12557)\n");
#elif defined __s390__ && !defined __s390x__
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',NULL,,NULL);\n",architecture,12557,0);
Msg("Find size of XftColor (12557)\n");
#elif defined __x86_64__
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',NULL,,NULL);\n",architecture,12557,0);
Msg("Find size of XftColor (12557)\n");
#elif defined __s390x__
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',NULL,,NULL);\n",architecture,12557,0);
Msg("Find size of XftColor (12557)\n");
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,12556,NULL);\n",architecture,12557,0);
Msg("Find size of XftColor (12557)\n");
#endif

#if defined __i386__
CheckTypeSize(XftFont,0, 12573, 2, 3.2, NULL, 12572, NULL)
#elif 
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',NULL,,NULL);\n",architecture,12573,0);
Msg("Find size of XftFont (12573)\n");
#elif defined __powerpc__ && !defined __powerpc64__
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',NULL,,NULL);\n",architecture,12573,0);
Msg("Find size of XftFont (12573)\n");
#elif defined __powerpc64__
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',NULL,,NULL);\n",architecture,12573,0);
Msg("Find size of XftFont (12573)\n");
#elif defined __s390__ && !defined __s390x__
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',NULL,,NULL);\n",architecture,12573,0);
Msg("Find size of XftFont (12573)\n");
#elif defined __x86_64__
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',NULL,,NULL);\n",architecture,12573,0);
Msg("Find size of XftFont (12573)\n");
#elif defined __s390x__
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',NULL,,NULL);\n",architecture,12573,0);
Msg("Find size of XftFont (12573)\n");
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,12572,NULL);\n",architecture,12573,0);
Msg("Find size of XftFont (12573)\n");
#endif

#if defined __i386__
CheckTypeSize(XftGlyphSpec,0, 12576, 2, 3.2, NULL, 12575, NULL)
#elif 
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',NULL,,NULL);\n",architecture,12576,0);
Msg("Find size of XftGlyphSpec (12576)\n");
#elif defined __powerpc__ && !defined __powerpc64__
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',NULL,,NULL);\n",architecture,12576,0);
Msg("Find size of XftGlyphSpec (12576)\n");
#elif defined __powerpc64__
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',NULL,,NULL);\n",architecture,12576,0);
Msg("Find size of XftGlyphSpec (12576)\n");
#elif defined __s390__ && !defined __s390x__
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',NULL,,NULL);\n",architecture,12576,0);
Msg("Find size of XftGlyphSpec (12576)\n");
#elif defined __x86_64__
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',NULL,,NULL);\n",architecture,12576,0);
Msg("Find size of XftGlyphSpec (12576)\n");
#elif defined __s390x__
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',NULL,,NULL);\n",architecture,12576,0);
Msg("Find size of XftGlyphSpec (12576)\n");
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,12575,NULL);\n",architecture,12576,0);
Msg("Find size of XftGlyphSpec (12576)\n");
#endif

#if defined __i386__
CheckTypeSize(FT_Int,0, 16751, 2, 3.2, NULL, 6, NULL)
#endif

#if defined __i386__
CheckTypeSize(FT_Matrix,0, 16791, 2, 3.2, NULL, 16790, NULL)
#endif

#if defined __i386__
CheckTypeSize(FT_F26Dot6,0, 16897, 2, 3.2, NULL, 8, NULL)
#endif

#if defined __i386__
CheckTypeSize(XftCharSpec,0, 16995, 2, 3.2, NULL, 16994, NULL)
#endif

#if defined __i386__
CheckTypeSize(XftFtFile,0, 17004, 2, 3.2, NULL, 17002, NULL)
#endif

#if defined __i386__
CheckTypeSize(XftFontInfo,0, 17006, 2, 3.2, NULL, 17001, NULL)
#endif

#if defined __i386__
CheckTypeSize(XftCharFontSpec,0, 17009, 2, 3.2, NULL, 17008, NULL)
#endif

#if defined __i386__
CheckTypeSize(XftGlyphFontSpec,0, 17017, 2, 3.2, NULL, 17016, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/Xft/Xft.h\n\n",pcnt,cnt);
return cnt;
#endif

}
