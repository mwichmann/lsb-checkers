/*
 * Test of X11/Xft/Xft.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
struct _XftFontInfo {};
struct _XftFtFile {};
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
	CompareConstant(XFT_MAJOR,2,10666,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XFT_MAJOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XFT_MINOR
	CompareConstant(XFT_MINOR,1,10667,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XFT_MINOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XFT_NMISSING
	CompareConstant(XFT_NMISSING,256,10668,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XFT_NMISSING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XFT_REVISION
	CompareConstant(XFT_REVISION,8,10669,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XFT_REVISION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XFT_H_ */
#endif

#if defined __i386__
CheckTypeSize(struct _XftColor,12, 12556, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XftColor,color,8,2,63992)
CheckOffset(struct _XftColor,color,4,2,63992)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XftColor,0, 12556, 10, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XftColor on S390\n");
CheckOffset(struct _XftColor,pixel,0,10,63991)
CheckOffset(struct _XftColor,color,0,10,63992)
#elif defined __x86_64__
CheckTypeSize(struct _XftColor,0, 12556, 11, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XftColor on x86-64\n");
CheckOffset(struct _XftColor,pixel,0,11,63991)
CheckOffset(struct _XftColor,color,0,11,63992)
#elif defined __s390x__
CheckTypeSize(struct _XftColor,0, 12556, 12, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XftColor on S390X\n");
CheckOffset(struct _XftColor,pixel,0,12,63991)
CheckOffset(struct _XftColor,color,0,12,63992)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XftColor,0, 12556, 6, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XftColor on PPC32\n");
CheckOffset(struct _XftColor,pixel,0,6,63991)
CheckOffset(struct _XftColor,color,0,6,63992)
#elif defined __powerpc64__
CheckTypeSize(struct _XftColor,0, 12556, 9, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XftColor on PPC64\n");
CheckOffset(struct _XftColor,pixel,0,9,63991)
CheckOffset(struct _XftColor,color,0,9,63992)
#else
Msg("Find size of _XftColor (12556)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,12556,0);
#endif

#if defined __i386__
CheckTypeSize(XftColor,12, 12557, 2, 1.2, NULL, 12556, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XftColor,12, 12557, 6, 1.2, NULL, 12556, NULL)
#elif defined __x86_64__
CheckTypeSize(XftColor,16, 12557, 11, 1.2, NULL, 12556, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XftColor,12, 12557, 10, 1.2, NULL, 12556, NULL)
#elif defined __s390x__
CheckTypeSize(XftColor,16, 12557, 12, 1.2, NULL, 12556, NULL)
#elif defined __ia64__
CheckTypeSize(XftColor,16, 12557, 3, 1.2, NULL, 12556, NULL)
#elif defined __powerpc64__
CheckTypeSize(XftColor,16, 12557, 9, 1.2, NULL, 12556, NULL)
#else
Msg("Find size of XftColor (12557)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,12556,NULL);\n",architecture,12557,0);
#endif

#if defined __i386__
CheckTypeSize(struct _XftFont,24, 12572, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XftFont,descent,4,2,63994)
CheckOffset(struct _XftFont,descent,4,2,63994)
CheckMemberSize(struct _XftFont,height,4,2,63995)
CheckOffset(struct _XftFont,height,8,2,63995)
CheckMemberSize(struct _XftFont,max_advance_width,4,2,63996)
CheckOffset(struct _XftFont,max_advance_width,12,2,63996)
CheckMemberSize(struct _XftFont,charset,4,2,63997)
CheckOffset(struct _XftFont,charset,16,2,63997)
CheckMemberSize(struct _XftFont,pattern,4,2,63998)
CheckOffset(struct _XftFont,pattern,20,2,63998)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XftFont,0, 12572, 10, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XftFont on S390\n");
CheckOffset(struct _XftFont,ascent,0,10,63993)
CheckOffset(struct _XftFont,descent,0,10,63994)
CheckOffset(struct _XftFont,height,0,10,63995)
CheckOffset(struct _XftFont,max_advance_width,0,10,63996)
CheckOffset(struct _XftFont,charset,0,10,63997)
CheckOffset(struct _XftFont,pattern,0,10,63998)
#elif defined __x86_64__
CheckTypeSize(struct _XftFont,0, 12572, 11, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XftFont on x86-64\n");
CheckOffset(struct _XftFont,ascent,0,11,63993)
CheckOffset(struct _XftFont,descent,0,11,63994)
CheckOffset(struct _XftFont,height,0,11,63995)
CheckOffset(struct _XftFont,max_advance_width,0,11,63996)
CheckOffset(struct _XftFont,charset,0,11,63997)
CheckOffset(struct _XftFont,pattern,0,11,63998)
#elif defined __s390x__
CheckTypeSize(struct _XftFont,0, 12572, 12, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XftFont on S390X\n");
CheckOffset(struct _XftFont,ascent,0,12,63993)
CheckOffset(struct _XftFont,descent,0,12,63994)
CheckOffset(struct _XftFont,height,0,12,63995)
CheckOffset(struct _XftFont,max_advance_width,0,12,63996)
CheckOffset(struct _XftFont,charset,0,12,63997)
CheckOffset(struct _XftFont,pattern,0,12,63998)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XftFont,0, 12572, 6, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XftFont on PPC32\n");
CheckOffset(struct _XftFont,ascent,0,6,63993)
CheckOffset(struct _XftFont,descent,0,6,63994)
CheckOffset(struct _XftFont,height,0,6,63995)
CheckOffset(struct _XftFont,max_advance_width,0,6,63996)
CheckOffset(struct _XftFont,charset,0,6,63997)
CheckOffset(struct _XftFont,pattern,0,6,63998)
#elif defined __powerpc64__
CheckTypeSize(struct _XftFont,0, 12572, 9, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XftFont on PPC64\n");
CheckOffset(struct _XftFont,ascent,0,9,63993)
CheckOffset(struct _XftFont,descent,0,9,63994)
CheckOffset(struct _XftFont,height,0,9,63995)
CheckOffset(struct _XftFont,max_advance_width,0,9,63996)
CheckOffset(struct _XftFont,charset,0,9,63997)
CheckOffset(struct _XftFont,pattern,0,9,63998)
#else
Msg("Find size of _XftFont (12572)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,12572,0);
#endif

#if defined __i386__
CheckTypeSize(XftFont,24, 12573, 2, 1.2, NULL, 12572, NULL)
#elif defined __x86_64__
CheckTypeSize(XftFont,32, 12573, 11, 1.2, NULL, 12572, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XftFont,24, 12573, 10, 1.2, NULL, 12572, NULL)
#elif defined __s390x__
CheckTypeSize(XftFont,32, 12573, 12, 1.2, NULL, 12572, NULL)
#elif defined __ia64__
CheckTypeSize(XftFont,32, 12573, 3, 1.2, NULL, 12572, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XftFont,24, 12573, 6, 1.2, NULL, 12572, NULL)
#elif defined __powerpc64__
CheckTypeSize(XftFont,32, 12573, 9, 1.2, NULL, 12572, NULL)
#else
Msg("Find size of XftFont (12573)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,12572,NULL);\n",architecture,12573,0);
#endif

#if defined __i386__
CheckTypeSize(struct _XftGlyphSpec,8, 12575, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XftGlyphSpec,x,2,2,64000)
CheckOffset(struct _XftGlyphSpec,x,4,2,64000)
CheckMemberSize(struct _XftGlyphSpec,y,2,2,64001)
CheckOffset(struct _XftGlyphSpec,y,6,2,64001)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XftGlyphSpec,0, 12575, 10, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XftGlyphSpec on S390\n");
CheckOffset(struct _XftGlyphSpec,glyph,0,10,63999)
CheckOffset(struct _XftGlyphSpec,x,0,10,64000)
CheckOffset(struct _XftGlyphSpec,y,0,10,64001)
#elif defined __x86_64__
CheckTypeSize(struct _XftGlyphSpec,0, 12575, 11, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XftGlyphSpec on x86-64\n");
CheckOffset(struct _XftGlyphSpec,glyph,0,11,63999)
CheckOffset(struct _XftGlyphSpec,x,0,11,64000)
CheckOffset(struct _XftGlyphSpec,y,0,11,64001)
#elif defined __s390x__
CheckTypeSize(struct _XftGlyphSpec,0, 12575, 12, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XftGlyphSpec on S390X\n");
CheckOffset(struct _XftGlyphSpec,glyph,0,12,63999)
CheckOffset(struct _XftGlyphSpec,x,0,12,64000)
CheckOffset(struct _XftGlyphSpec,y,0,12,64001)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XftGlyphSpec,0, 12575, 6, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XftGlyphSpec on PPC32\n");
CheckOffset(struct _XftGlyphSpec,glyph,0,6,63999)
CheckOffset(struct _XftGlyphSpec,x,0,6,64000)
CheckOffset(struct _XftGlyphSpec,y,0,6,64001)
#elif defined __powerpc64__
CheckTypeSize(struct _XftGlyphSpec,0, 12575, 9, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XftGlyphSpec on PPC64\n");
CheckOffset(struct _XftGlyphSpec,glyph,0,9,63999)
CheckOffset(struct _XftGlyphSpec,x,0,9,64000)
CheckOffset(struct _XftGlyphSpec,y,0,9,64001)
#else
Msg("Find size of _XftGlyphSpec (12575)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,12575,0);
#endif

#if defined __i386__
CheckTypeSize(XftGlyphSpec,8, 12576, 2, 1.2, NULL, 12575, NULL)
#elif defined __x86_64__
CheckTypeSize(XftGlyphSpec,8, 12576, 11, 1.2, NULL, 12575, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XftGlyphSpec,8, 12576, 10, 1.2, NULL, 12575, NULL)
#elif defined __s390x__
CheckTypeSize(XftGlyphSpec,8, 12576, 12, 1.2, NULL, 12575, NULL)
#elif defined __ia64__
CheckTypeSize(XftGlyphSpec,8, 12576, 3, 1.2, NULL, 12575, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XftGlyphSpec,8, 12576, 6, 1.2, NULL, 12575, NULL)
#elif defined __powerpc64__
CheckTypeSize(XftGlyphSpec,8, 12576, 9, 1.2, NULL, 12575, NULL)
#else
Msg("Find size of XftGlyphSpec (12576)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,12575,NULL);\n",architecture,12576,0);
#endif

#if 1
CheckTypeSize(struct _XftCharSpec,8, 16994, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XftCharSpec on All\n");
CheckOffset(struct _XftCharSpec,ucs4,0,1,54360)
CheckOffset(struct _XftCharSpec,x,0,1,54361)
CheckOffset(struct _XftCharSpec,y,0,1,54362)
#endif

#if defined __x86_64__
CheckTypeSize(XftCharSpec,8, 16995, 11, 1.2, NULL, 16994, NULL)
#elif defined __i386__
CheckTypeSize(XftCharSpec,8, 16995, 2, 1.2, NULL, 16994, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XftCharSpec,8, 16995, 10, 1.2, NULL, 16994, NULL)
#elif defined __s390x__
CheckTypeSize(XftCharSpec,8, 16995, 12, 1.2, NULL, 16994, NULL)
#elif defined __ia64__
CheckTypeSize(XftCharSpec,8, 16995, 3, 1.2, NULL, 16994, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XftCharSpec,8, 16995, 6, 1.2, NULL, 16994, NULL)
#elif defined __powerpc64__
CheckTypeSize(XftCharSpec,8, 16995, 9, 1.2, NULL, 16994, NULL)
#else
Msg("Find size of XftCharSpec (16995)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,16994,NULL);\n",architecture,16995,0);
#endif

#if 1
CheckTypeSize(struct _XftFontInfo,0, 17001, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XftFontInfo on All\n");
#endif

#if 1
CheckTypeSize(struct _XftFtFile,0, 17002, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XftFtFile on All\n");
#endif

#if 1
CheckTypeSize(struct _XftCharFontSpec,12, 17008, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XftCharFontSpec on All\n");
CheckOffset(struct _XftCharFontSpec,font,0,1,54386)
CheckOffset(struct _XftCharFontSpec,ucs4,0,1,54387)
CheckOffset(struct _XftCharFontSpec,x,0,1,54388)
CheckOffset(struct _XftCharFontSpec,y,0,1,54389)
#endif

#if defined __x86_64__
CheckTypeSize(XftCharFontSpec,16, 17009, 11, 1.2, NULL, 17008, NULL)
#elif defined __i386__
CheckTypeSize(XftCharFontSpec,12, 17009, 2, 1.2, NULL, 17008, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XftCharFontSpec,12, 17009, 10, 1.2, NULL, 17008, NULL)
#elif defined __s390x__
CheckTypeSize(XftCharFontSpec,16, 17009, 12, 1.2, NULL, 17008, NULL)
#elif defined __ia64__
CheckTypeSize(XftCharFontSpec,16, 17009, 3, 1.2, NULL, 17008, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XftCharFontSpec,12, 17009, 6, 1.2, NULL, 17008, NULL)
#elif defined __powerpc64__
CheckTypeSize(XftCharFontSpec,16, 17009, 9, 1.2, NULL, 17008, NULL)
#else
Msg("Find size of XftCharFontSpec (17009)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,17008,NULL);\n",architecture,17009,0);
#endif

#if 1
CheckTypeSize(struct _XftGlyphFontSpec,12, 17016, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XftGlyphFontSpec on All\n");
CheckOffset(struct _XftGlyphFontSpec,font,0,1,54390)
CheckOffset(struct _XftGlyphFontSpec,glyph,0,1,54391)
CheckOffset(struct _XftGlyphFontSpec,x,0,1,54392)
CheckOffset(struct _XftGlyphFontSpec,y,0,1,54393)
#endif

#if defined __x86_64__
CheckTypeSize(XftGlyphFontSpec,16, 17017, 11, 1.2, NULL, 17016, NULL)
#elif defined __i386__
CheckTypeSize(XftGlyphFontSpec,12, 17017, 2, 1.2, NULL, 17016, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XftGlyphFontSpec,12, 17017, 10, 1.2, NULL, 17016, NULL)
#elif defined __s390x__
CheckTypeSize(XftGlyphFontSpec,16, 17017, 12, 1.2, NULL, 17016, NULL)
#elif defined __ia64__
CheckTypeSize(XftGlyphFontSpec,16, 17017, 3, 1.2, NULL, 17016, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XftGlyphFontSpec,12, 17017, 6, 1.2, NULL, 17016, NULL)
#elif defined __powerpc64__
CheckTypeSize(XftGlyphFontSpec,16, 17017, 9, 1.2, NULL, 17016, NULL)
#else
Msg("Find size of XftGlyphFontSpec (17017)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,17016, NULL);\n",architecture,17017,0);
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
