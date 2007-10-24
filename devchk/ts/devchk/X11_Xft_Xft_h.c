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

#if defined __i386__
CheckTypeSize(XftColor,12, 12557, 2, 3.2, NULL, 12556, NULL)
#elif defined __x86_64__
CheckTypeSize(XftColor,16, 12557, 11, 3.2, NULL, 12556, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XftColor,12, 12557, 10, 3.2, NULL, 12556, NULL)
#elif defined __s390x__
CheckTypeSize(XftColor,16, 12557, 12, 3.2, NULL, 12556, NULL)
#elif defined __ia64__
CheckTypeSize(XftColor,16, 12557, 3, 3.2, NULL, 12556, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XftColor,12, 12557, 6, 3.2, NULL, 12556, NULL)
#elif defined __powerpc64__
CheckTypeSize(XftColor,16, 12557, 9, 3.2, NULL, 12556, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,12556,NULL);\n",architecture,12557,0);
Msg("Find size of XftColor (12557)\n");
#endif

#if defined __i386__
CheckTypeSize(XftFont,24, 12573, 2, 3.2, NULL, 12572, NULL)
#elif defined __x86_64__
CheckTypeSize(XftFont,32, 12573, 11, 3.2, NULL, 12572, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XftFont,24, 12573, 10, 3.2, NULL, 12572, NULL)
#elif defined __s390x__
CheckTypeSize(XftFont,32, 12573, 12, 3.2, NULL, 12572, NULL)
#elif defined __ia64__
CheckTypeSize(XftFont,32, 12573, 3, 3.2, NULL, 12572, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XftFont,24, 12573, 6, 3.2, NULL, 12572, NULL)
#elif defined __powerpc64__
CheckTypeSize(XftFont,32, 12573, 9, 3.2, NULL, 12572, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,12572,NULL);\n",architecture,12573,0);
Msg("Find size of XftFont (12573)\n");
#endif

#if defined __i386__
CheckTypeSize(XftGlyphSpec,8, 12576, 2, 3.2, NULL, 12575, NULL)
#elif defined __x86_64__
CheckTypeSize(XftGlyphSpec,8, 12576, 11, 3.2, NULL, 12575, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XftGlyphSpec,8, 12576, 10, 3.2, NULL, 12575, NULL)
#elif defined __s390x__
CheckTypeSize(XftGlyphSpec,8, 12576, 12, 3.2, NULL, 12575, NULL)
#elif defined __ia64__
CheckTypeSize(XftGlyphSpec,8, 12576, 3, 3.2, NULL, 12575, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XftGlyphSpec,8, 12576, 6, 3.2, NULL, 12575, NULL)
#elif defined __powerpc64__
CheckTypeSize(XftGlyphSpec,8, 12576, 9, 3.2, NULL, 12575, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,12575,NULL);\n",architecture,12576,0);
Msg("Find size of XftGlyphSpec (12576)\n");
#endif

#if defined __x86_64__
CheckTypeSize(XftCharSpec,8, 16995, 11, 3.2, NULL, 16994, NULL)
#elif defined __i386__
CheckTypeSize(XftCharSpec,8, 16995, 2, 3.2, NULL, 16994, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XftCharSpec,8, 16995, 10, 3.2, NULL, 16994, NULL)
#elif defined __s390x__
CheckTypeSize(XftCharSpec,8, 16995, 12, 3.2, NULL, 16994, NULL)
#elif defined __ia64__
CheckTypeSize(XftCharSpec,8, 16995, 3, 3.2, NULL, 16994, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XftCharSpec,8, 16995, 6, 3.2, NULL, 16994, NULL)
#elif defined __powerpc64__
CheckTypeSize(XftCharSpec,8, 16995, 9, 3.2, NULL, 16994, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16994,NULL);\n",architecture,16995,0);
Msg("Find size of XftCharSpec (16995)\n");
#endif

#if defined __x86_64__
CheckTypeSize(XftCharFontSpec,16, 17009, 11, 3.2, NULL, 17008, NULL)
#elif defined __i386__
CheckTypeSize(XftCharFontSpec,12, 17009, 2, 3.2, NULL, 17008, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XftCharFontSpec,12, 17009, 10, 3.2, NULL, 17008, NULL)
#elif defined __s390x__
CheckTypeSize(XftCharFontSpec,16, 17009, 12, 3.2, NULL, 17008, NULL)
#elif defined __ia64__
CheckTypeSize(XftCharFontSpec,16, 17009, 3, 3.2, NULL, 17008, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XftCharFontSpec,12, 17009, 6, 3.2, NULL, 17008, NULL)
#elif defined __powerpc64__
CheckTypeSize(XftCharFontSpec,16, 17009, 9, 3.2, NULL, 17008, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,17008,NULL);\n",architecture,17009,0);
Msg("Find size of XftCharFontSpec (17009)\n");
#endif

#if defined __x86_64__
CheckTypeSize(XftGlyphFontSpec,16, 17017, 11, 3.2, NULL, 17016, NULL)
#elif defined __i386__
CheckTypeSize(XftGlyphFontSpec,12, 17017, 2, 3.2, NULL, 17016, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XftGlyphFontSpec,12, 17017, 10, 3.2, NULL, 17016, NULL)
#elif defined __s390x__
CheckTypeSize(XftGlyphFontSpec,16, 17017, 12, 3.2, NULL, 17016, NULL)
#elif defined __ia64__
CheckTypeSize(XftGlyphFontSpec,16, 17017, 3, 3.2, NULL, 17016, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XftGlyphFontSpec,12, 17017, 6, 3.2, NULL, 17016, NULL)
#elif defined __powerpc64__
CheckTypeSize(XftGlyphFontSpec,16, 17017, 9, 3.2, NULL, 17016, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,17016, NULL);\n",architecture,17017,0);
Msg("Find size of XftGlyphFontSpec (17017)\n");
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
