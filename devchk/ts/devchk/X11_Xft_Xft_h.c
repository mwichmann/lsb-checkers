/*
 * Test of X11/Xft/Xft.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

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
#ifndef _XFT_H_
Msg( "Error: Constant not found: _XFT_H_\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for X11/Xft/Xft.h depends on X11/Xft/XftCompat.h */
#endif

#if defined __s390x__
CheckTypeSize(struct _XftColor,16, 12556, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XftColor,color,8,12,63992)
CheckOffset(struct _XftColor,color,8,12,63992)
#elif defined __x86_64__
CheckTypeSize(struct _XftColor,16, 12556, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XftColor,color,8,11,63992)
CheckOffset(struct _XftColor,color,8,11,63992)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XftColor,12, 12556, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XftColor,color,8,10,63992)
CheckOffset(struct _XftColor,color,4,10,63992)
#elif defined __powerpc64__
CheckTypeSize(struct _XftColor,16, 12556, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XftColor,color,8,9,63992)
CheckOffset(struct _XftColor,color,8,9,63992)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XftColor,12, 12556, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XftColor,color,8,6,63992)
CheckOffset(struct _XftColor,color,4,6,63992)
#elif defined __ia64__
CheckTypeSize(struct _XftColor,16, 12556, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XftColor,color,8,3,63992)
CheckOffset(struct _XftColor,color,8,3,63992)
#elif defined __i386__
CheckTypeSize(struct _XftColor,12, 12556, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XftColor,color,8,2,63992)
CheckOffset(struct _XftColor,color,4,2,63992)
#else
Msg("Find size of _XftColor (12556)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,12556,0);
#endif

#if defined __s390x__
CheckTypeSize(XftColor,16, 12557, 12, 1.3, NULL, 12556, NULL)
#elif defined __x86_64__
CheckTypeSize(XftColor,16, 12557, 11, 2.0, NULL, 12556, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XftColor,12, 12557, 10, 1.3, NULL, 12556, NULL)
#elif defined __powerpc64__
CheckTypeSize(XftColor,16, 12557, 9, 2.0, NULL, 12556, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XftColor,12, 12557, 6, 1.2, NULL, 12556, NULL)
#elif defined __ia64__
CheckTypeSize(XftColor,16, 12557, 3, 1.3, NULL, 12556, NULL)
#elif defined __i386__
CheckTypeSize(XftColor,12, 12557, 2, 1.2, NULL, 12556, NULL)
#else
Msg("Find size of XftColor (12557)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,12556,NULL);\n",architecture,12557,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XftFont,32, 12572, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XftFont,descent,4,12,63994)
CheckOffset(struct _XftFont,descent,4,12,63994)
CheckMemberSize(struct _XftFont,height,4,12,63995)
CheckOffset(struct _XftFont,height,8,12,63995)
CheckMemberSize(struct _XftFont,max_advance_width,4,12,63996)
CheckOffset(struct _XftFont,max_advance_width,12,12,63996)
CheckMemberSize(struct _XftFont,charset,8,12,63997)
CheckOffset(struct _XftFont,charset,16,12,63997)
CheckMemberSize(struct _XftFont,pattern,8,12,63998)
CheckOffset(struct _XftFont,pattern,24,12,63998)
#elif defined __x86_64__
CheckTypeSize(struct _XftFont,32, 12572, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XftFont,descent,4,11,63994)
CheckOffset(struct _XftFont,descent,4,11,63994)
CheckMemberSize(struct _XftFont,height,4,11,63995)
CheckOffset(struct _XftFont,height,8,11,63995)
CheckMemberSize(struct _XftFont,max_advance_width,4,11,63996)
CheckOffset(struct _XftFont,max_advance_width,12,11,63996)
CheckMemberSize(struct _XftFont,charset,8,11,63997)
CheckOffset(struct _XftFont,charset,16,11,63997)
CheckMemberSize(struct _XftFont,pattern,8,11,63998)
CheckOffset(struct _XftFont,pattern,24,11,63998)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XftFont,24, 12572, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XftFont,descent,4,10,63994)
CheckOffset(struct _XftFont,descent,4,10,63994)
CheckMemberSize(struct _XftFont,height,4,10,63995)
CheckOffset(struct _XftFont,height,8,10,63995)
CheckMemberSize(struct _XftFont,max_advance_width,4,10,63996)
CheckOffset(struct _XftFont,max_advance_width,12,10,63996)
CheckMemberSize(struct _XftFont,charset,4,10,63997)
CheckOffset(struct _XftFont,charset,16,10,63997)
CheckMemberSize(struct _XftFont,pattern,4,10,63998)
CheckOffset(struct _XftFont,pattern,20,10,63998)
#elif defined __powerpc64__
CheckTypeSize(struct _XftFont,32, 12572, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XftFont,descent,4,9,63994)
CheckOffset(struct _XftFont,descent,4,9,63994)
CheckMemberSize(struct _XftFont,height,4,9,63995)
CheckOffset(struct _XftFont,height,8,9,63995)
CheckMemberSize(struct _XftFont,max_advance_width,4,9,63996)
CheckOffset(struct _XftFont,max_advance_width,12,9,63996)
CheckMemberSize(struct _XftFont,charset,8,9,63997)
CheckOffset(struct _XftFont,charset,16,9,63997)
CheckMemberSize(struct _XftFont,pattern,8,9,63998)
CheckOffset(struct _XftFont,pattern,24,9,63998)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XftFont,24, 12572, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XftFont,descent,4,6,63994)
CheckOffset(struct _XftFont,descent,4,6,63994)
CheckMemberSize(struct _XftFont,height,4,6,63995)
CheckOffset(struct _XftFont,height,8,6,63995)
CheckMemberSize(struct _XftFont,max_advance_width,4,6,63996)
CheckOffset(struct _XftFont,max_advance_width,12,6,63996)
CheckMemberSize(struct _XftFont,charset,4,6,63997)
CheckOffset(struct _XftFont,charset,16,6,63997)
CheckMemberSize(struct _XftFont,pattern,4,6,63998)
CheckOffset(struct _XftFont,pattern,20,6,63998)
#elif defined __ia64__
CheckTypeSize(struct _XftFont,32, 12572, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XftFont,descent,4,3,63994)
CheckOffset(struct _XftFont,descent,4,3,63994)
CheckMemberSize(struct _XftFont,height,4,3,63995)
CheckOffset(struct _XftFont,height,8,3,63995)
CheckMemberSize(struct _XftFont,max_advance_width,4,3,63996)
CheckOffset(struct _XftFont,max_advance_width,12,3,63996)
CheckMemberSize(struct _XftFont,charset,8,3,63997)
CheckOffset(struct _XftFont,charset,16,3,63997)
CheckMemberSize(struct _XftFont,pattern,8,3,63998)
CheckOffset(struct _XftFont,pattern,24,3,63998)
#elif defined __i386__
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
#else
Msg("Find size of _XftFont (12572)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,12572,0);
#endif

#if defined __s390x__
CheckTypeSize(XftFont,32, 12573, 12, 1.3, NULL, 12572, NULL)
#elif defined __x86_64__
CheckTypeSize(XftFont,32, 12573, 11, 2.0, NULL, 12572, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XftFont,24, 12573, 10, 1.3, NULL, 12572, NULL)
#elif defined __powerpc64__
CheckTypeSize(XftFont,32, 12573, 9, 2.0, NULL, 12572, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XftFont,24, 12573, 6, 1.2, NULL, 12572, NULL)
#elif defined __ia64__
CheckTypeSize(XftFont,32, 12573, 3, 1.3, NULL, 12572, NULL)
#elif defined __i386__
CheckTypeSize(XftFont,24, 12573, 2, 1.2, NULL, 12572, NULL)
#else
Msg("Find size of XftFont (12573)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,12572,NULL);\n",architecture,12573,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XftGlyphSpec,8, 12575, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XftGlyphSpec,x,2,12,64000)
CheckOffset(struct _XftGlyphSpec,x,4,12,64000)
CheckMemberSize(struct _XftGlyphSpec,y,2,12,64001)
CheckOffset(struct _XftGlyphSpec,y,6,12,64001)
#elif defined __x86_64__
CheckTypeSize(struct _XftGlyphSpec,8, 12575, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XftGlyphSpec,x,2,11,64000)
CheckOffset(struct _XftGlyphSpec,x,4,11,64000)
CheckMemberSize(struct _XftGlyphSpec,y,2,11,64001)
CheckOffset(struct _XftGlyphSpec,y,6,11,64001)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XftGlyphSpec,8, 12575, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XftGlyphSpec,x,2,10,64000)
CheckOffset(struct _XftGlyphSpec,x,4,10,64000)
CheckMemberSize(struct _XftGlyphSpec,y,2,10,64001)
CheckOffset(struct _XftGlyphSpec,y,6,10,64001)
#elif defined __powerpc64__
CheckTypeSize(struct _XftGlyphSpec,8, 12575, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XftGlyphSpec,x,2,9,64000)
CheckOffset(struct _XftGlyphSpec,x,4,9,64000)
CheckMemberSize(struct _XftGlyphSpec,y,2,9,64001)
CheckOffset(struct _XftGlyphSpec,y,6,9,64001)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XftGlyphSpec,8, 12575, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XftGlyphSpec,x,2,6,64000)
CheckOffset(struct _XftGlyphSpec,x,4,6,64000)
CheckMemberSize(struct _XftGlyphSpec,y,2,6,64001)
CheckOffset(struct _XftGlyphSpec,y,6,6,64001)
#elif defined __ia64__
CheckTypeSize(struct _XftGlyphSpec,8, 12575, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XftGlyphSpec,x,2,3,64000)
CheckOffset(struct _XftGlyphSpec,x,4,3,64000)
CheckMemberSize(struct _XftGlyphSpec,y,2,3,64001)
CheckOffset(struct _XftGlyphSpec,y,6,3,64001)
#elif defined __i386__
CheckTypeSize(struct _XftGlyphSpec,8, 12575, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XftGlyphSpec,x,2,2,64000)
CheckOffset(struct _XftGlyphSpec,x,4,2,64000)
CheckMemberSize(struct _XftGlyphSpec,y,2,2,64001)
CheckOffset(struct _XftGlyphSpec,y,6,2,64001)
#else
Msg("Find size of _XftGlyphSpec (12575)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,12575,0);
#endif

#if defined __s390x__
CheckTypeSize(XftGlyphSpec,8, 12576, 12, 1.3, NULL, 12575, NULL)
#elif defined __x86_64__
CheckTypeSize(XftGlyphSpec,8, 12576, 11, 2.0, NULL, 12575, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XftGlyphSpec,8, 12576, 10, 1.3, NULL, 12575, NULL)
#elif defined __powerpc64__
CheckTypeSize(XftGlyphSpec,8, 12576, 9, 2.0, NULL, 12575, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XftGlyphSpec,8, 12576, 6, 1.2, NULL, 12575, NULL)
#elif defined __ia64__
CheckTypeSize(XftGlyphSpec,8, 12576, 3, 1.3, NULL, 12575, NULL)
#elif defined __i386__
CheckTypeSize(XftGlyphSpec,8, 12576, 2, 1.2, NULL, 12575, NULL)
#else
Msg("Find size of XftGlyphSpec (12576)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,12575,NULL);\n",architecture,12576,0);
#endif

#if 1
CheckTypeSize(struct _XftCharSpec,8, 16994, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XftCharSpec,x,2,1,54361)
CheckOffset(struct _XftCharSpec,x,4,1,54361)
CheckMemberSize(struct _XftCharSpec,y,2,1,54362)
CheckOffset(struct _XftCharSpec,y,6,1,54362)
#endif

#if defined __s390x__
CheckTypeSize(XftCharSpec,8, 16995, 12, 1.3, NULL, 16994, NULL)
#elif defined __x86_64__
CheckTypeSize(XftCharSpec,8, 16995, 11, 2.0, NULL, 16994, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XftCharSpec,8, 16995, 10, 1.3, NULL, 16994, NULL)
#elif defined __powerpc64__
CheckTypeSize(XftCharSpec,8, 16995, 9, 2.0, NULL, 16994, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XftCharSpec,8, 16995, 6, 1.2, NULL, 16994, NULL)
#elif defined __ia64__
CheckTypeSize(XftCharSpec,8, 16995, 3, 1.3, NULL, 16994, NULL)
#elif defined __i386__
CheckTypeSize(XftCharSpec,8, 16995, 2, 1.2, NULL, 16994, NULL)
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

#if defined __s390x__
CheckTypeSize(struct _XftCharFontSpec,16, 17008, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XftCharFontSpec,ucs4,4,12,54387)
CheckOffset(struct _XftCharFontSpec,ucs4,8,12,54387)
CheckMemberSize(struct _XftCharFontSpec,x,2,12,54388)
CheckOffset(struct _XftCharFontSpec,x,12,12,54388)
CheckMemberSize(struct _XftCharFontSpec,y,2,12,54389)
CheckOffset(struct _XftCharFontSpec,y,14,12,54389)
#elif defined __x86_64__
CheckTypeSize(struct _XftCharFontSpec,16, 17008, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XftCharFontSpec,ucs4,4,11,54387)
CheckOffset(struct _XftCharFontSpec,ucs4,8,11,54387)
CheckMemberSize(struct _XftCharFontSpec,x,2,11,54388)
CheckOffset(struct _XftCharFontSpec,x,12,11,54388)
CheckMemberSize(struct _XftCharFontSpec,y,2,11,54389)
CheckOffset(struct _XftCharFontSpec,y,14,11,54389)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XftCharFontSpec,12, 17008, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XftCharFontSpec,ucs4,4,10,54387)
CheckOffset(struct _XftCharFontSpec,ucs4,4,10,54387)
CheckMemberSize(struct _XftCharFontSpec,x,2,10,54388)
CheckOffset(struct _XftCharFontSpec,x,8,10,54388)
CheckMemberSize(struct _XftCharFontSpec,y,2,10,54389)
CheckOffset(struct _XftCharFontSpec,y,10,10,54389)
#elif defined __powerpc64__
CheckTypeSize(struct _XftCharFontSpec,16, 17008, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XftCharFontSpec,ucs4,4,9,54387)
CheckOffset(struct _XftCharFontSpec,ucs4,8,9,54387)
CheckMemberSize(struct _XftCharFontSpec,x,2,9,54388)
CheckOffset(struct _XftCharFontSpec,x,12,9,54388)
CheckMemberSize(struct _XftCharFontSpec,y,2,9,54389)
CheckOffset(struct _XftCharFontSpec,y,14,9,54389)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XftCharFontSpec,12, 17008, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XftCharFontSpec,ucs4,4,6,54387)
CheckOffset(struct _XftCharFontSpec,ucs4,4,6,54387)
CheckMemberSize(struct _XftCharFontSpec,x,2,6,54388)
CheckOffset(struct _XftCharFontSpec,x,8,6,54388)
CheckMemberSize(struct _XftCharFontSpec,y,2,6,54389)
CheckOffset(struct _XftCharFontSpec,y,10,6,54389)
#elif defined __ia64__
CheckTypeSize(struct _XftCharFontSpec,16, 17008, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XftCharFontSpec,ucs4,4,3,54387)
CheckOffset(struct _XftCharFontSpec,ucs4,8,3,54387)
CheckMemberSize(struct _XftCharFontSpec,x,2,3,54388)
CheckOffset(struct _XftCharFontSpec,x,12,3,54388)
CheckMemberSize(struct _XftCharFontSpec,y,2,3,54389)
CheckOffset(struct _XftCharFontSpec,y,14,3,54389)
#elif defined __i386__
CheckTypeSize(struct _XftCharFontSpec,12, 17008, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XftCharFontSpec,ucs4,4,2,54387)
CheckOffset(struct _XftCharFontSpec,ucs4,4,2,54387)
CheckMemberSize(struct _XftCharFontSpec,x,2,2,54388)
CheckOffset(struct _XftCharFontSpec,x,8,2,54388)
CheckMemberSize(struct _XftCharFontSpec,y,2,2,54389)
CheckOffset(struct _XftCharFontSpec,y,10,2,54389)
#else
Msg("Find size of _XftCharFontSpec (17008)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,17008,0);
#endif

#if defined __s390x__
CheckTypeSize(XftCharFontSpec,16, 17009, 12, 1.3, NULL, 17008, NULL)
#elif defined __x86_64__
CheckTypeSize(XftCharFontSpec,16, 17009, 11, 2.0, NULL, 17008, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XftCharFontSpec,12, 17009, 10, 1.3, NULL, 17008, NULL)
#elif defined __powerpc64__
CheckTypeSize(XftCharFontSpec,16, 17009, 9, 2.0, NULL, 17008, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XftCharFontSpec,12, 17009, 6, 1.2, NULL, 17008, NULL)
#elif defined __ia64__
CheckTypeSize(XftCharFontSpec,16, 17009, 3, 1.3, NULL, 17008, NULL)
#elif defined __i386__
CheckTypeSize(XftCharFontSpec,12, 17009, 2, 1.2, NULL, 17008, NULL)
#else
Msg("Find size of XftCharFontSpec (17009)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,17008,NULL);\n",architecture,17009,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XftGlyphFontSpec,16, 17016, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XftGlyphFontSpec,glyph,4,12,54391)
CheckOffset(struct _XftGlyphFontSpec,glyph,8,12,54391)
CheckMemberSize(struct _XftGlyphFontSpec,x,2,12,54392)
CheckOffset(struct _XftGlyphFontSpec,x,12,12,54392)
CheckMemberSize(struct _XftGlyphFontSpec,y,2,12,54393)
CheckOffset(struct _XftGlyphFontSpec,y,14,12,54393)
#elif defined __x86_64__
CheckTypeSize(struct _XftGlyphFontSpec,16, 17016, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XftGlyphFontSpec,glyph,4,11,54391)
CheckOffset(struct _XftGlyphFontSpec,glyph,8,11,54391)
CheckMemberSize(struct _XftGlyphFontSpec,x,2,11,54392)
CheckOffset(struct _XftGlyphFontSpec,x,12,11,54392)
CheckMemberSize(struct _XftGlyphFontSpec,y,2,11,54393)
CheckOffset(struct _XftGlyphFontSpec,y,14,11,54393)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XftGlyphFontSpec,12, 17016, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XftGlyphFontSpec,glyph,4,10,54391)
CheckOffset(struct _XftGlyphFontSpec,glyph,4,10,54391)
CheckMemberSize(struct _XftGlyphFontSpec,x,2,10,54392)
CheckOffset(struct _XftGlyphFontSpec,x,8,10,54392)
CheckMemberSize(struct _XftGlyphFontSpec,y,2,10,54393)
CheckOffset(struct _XftGlyphFontSpec,y,10,10,54393)
#elif defined __powerpc64__
CheckTypeSize(struct _XftGlyphFontSpec,16, 17016, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XftGlyphFontSpec,glyph,4,9,54391)
CheckOffset(struct _XftGlyphFontSpec,glyph,8,9,54391)
CheckMemberSize(struct _XftGlyphFontSpec,x,2,9,54392)
CheckOffset(struct _XftGlyphFontSpec,x,12,9,54392)
CheckMemberSize(struct _XftGlyphFontSpec,y,2,9,54393)
CheckOffset(struct _XftGlyphFontSpec,y,14,9,54393)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XftGlyphFontSpec,12, 17016, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XftGlyphFontSpec,glyph,4,6,54391)
CheckOffset(struct _XftGlyphFontSpec,glyph,4,6,54391)
CheckMemberSize(struct _XftGlyphFontSpec,x,2,6,54392)
CheckOffset(struct _XftGlyphFontSpec,x,8,6,54392)
CheckMemberSize(struct _XftGlyphFontSpec,y,2,6,54393)
CheckOffset(struct _XftGlyphFontSpec,y,10,6,54393)
#elif defined __ia64__
CheckTypeSize(struct _XftGlyphFontSpec,16, 17016, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XftGlyphFontSpec,glyph,4,3,54391)
CheckOffset(struct _XftGlyphFontSpec,glyph,8,3,54391)
CheckMemberSize(struct _XftGlyphFontSpec,x,2,3,54392)
CheckOffset(struct _XftGlyphFontSpec,x,12,3,54392)
CheckMemberSize(struct _XftGlyphFontSpec,y,2,3,54393)
CheckOffset(struct _XftGlyphFontSpec,y,14,3,54393)
#elif defined __i386__
CheckTypeSize(struct _XftGlyphFontSpec,12, 17016, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XftGlyphFontSpec,glyph,4,2,54391)
CheckOffset(struct _XftGlyphFontSpec,glyph,4,2,54391)
CheckMemberSize(struct _XftGlyphFontSpec,x,2,2,54392)
CheckOffset(struct _XftGlyphFontSpec,x,8,2,54392)
CheckMemberSize(struct _XftGlyphFontSpec,y,2,2,54393)
CheckOffset(struct _XftGlyphFontSpec,y,10,2,54393)
#else
Msg("Find size of _XftGlyphFontSpec (17016)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,17016,0);
#endif

#if defined __s390x__
CheckTypeSize(XftGlyphFontSpec,16, 17017, 12, 1.3, NULL, 17016, NULL)
#elif defined __x86_64__
CheckTypeSize(XftGlyphFontSpec,16, 17017, 11, 2.0, NULL, 17016, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XftGlyphFontSpec,12, 17017, 10, 1.3, NULL, 17016, NULL)
#elif defined __powerpc64__
CheckTypeSize(XftGlyphFontSpec,16, 17017, 9, 2.0, NULL, 17016, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XftGlyphFontSpec,12, 17017, 6, 1.2, NULL, 17016, NULL)
#elif defined __ia64__
CheckTypeSize(XftGlyphFontSpec,16, 17017, 3, 1.3, NULL, 17016, NULL)
#elif defined __i386__
CheckTypeSize(XftGlyphFontSpec,12, 17017, 2, 1.2, NULL, 17016, NULL)
#else
Msg("Find size of XftGlyphFontSpec (17017)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,17016, NULL);\n",architecture,17017,0);
#endif

extern void XftTextRender32BE_db(Display *, int, Picture, XftFont *, Picture, int, int, int, int, const FcChar8 *, int);
CheckInterfacedef(XftTextRender32BE,XftTextRender32BE_db);
extern int XftInit_db(const char *);
CheckInterfacedef(XftInit,XftInit_db);
extern void XftTextRender16BE_db(Display *, int, Picture, XftFont *, Picture, int, int, int, int, const FcChar8 *, int);
CheckInterfacedef(XftTextRender16BE,XftTextRender16BE_db);
extern void XftDrawCharSpec_db(XftDraw *, const XftColor *, XftFont *, const XftCharSpec *, int);
CheckInterfacedef(XftDrawCharSpec,XftDrawCharSpec_db);
extern void XftTextExtentsUtf16_db(Display *, XftFont *, const FcChar8 *, FcEndian, int, XGlyphInfo *);
CheckInterfacedef(XftTextExtentsUtf16,XftTextExtentsUtf16_db);
extern void XftGlyphSpecRender_db(Display *, int, Picture, XftFont *, Picture, int, int, const XftGlyphSpec *, int);
CheckInterfacedef(XftGlyphSpecRender,XftGlyphSpecRender_db);
extern FT_Face XftLockFace_db(XftFont *);
CheckInterfacedef(XftLockFace,XftLockFace_db);
extern void XftFontInfoDestroy_db(Display *, XftFontInfo *);
CheckInterfacedef(XftFontInfoDestroy,XftFontInfoDestroy_db);
extern void XftTextExtents8_db(Display *, XftFont *, const FcChar8 *, int, XGlyphInfo *);
CheckInterfacedef(XftTextExtents8,XftTextExtents8_db);
extern void XftDrawSetSubwindowMode_db(XftDraw *, int);
CheckInterfacedef(XftDrawSetSubwindowMode,XftDrawSetSubwindowMode_db);
extern int XftColorAllocValue_db(Display *, Visual *, Colormap, const XRenderColor *, XftColor *);
CheckInterfacedef(XftColorAllocValue,XftColorAllocValue_db);
extern XftFont * XftFontCopy_db(Display *, XftFont *);
CheckInterfacedef(XftFontCopy,XftFontCopy_db);
extern void XftDrawCharFontSpec_db(XftDraw *, const XftColor *, const XftCharFontSpec *, int);
CheckInterfacedef(XftDrawCharFontSpec,XftDrawCharFontSpec_db);
extern void XftGlyphExtents_db(Display *, XftFont *, const FT_UInt *, int, XGlyphInfo *);
CheckInterfacedef(XftGlyphExtents,XftGlyphExtents_db);
extern Picture XftDrawSrcPicture_db(XftDraw *, const XftColor *);
CheckInterfacedef(XftDrawSrcPicture,XftDrawSrcPicture_db);
extern void XftTextRender16_db(Display *, int, Picture, XftFont *, Picture, int, int, int, int, const FcChar16 *, int);
CheckInterfacedef(XftTextRender16,XftTextRender16_db);
extern void XftTextRender32LE_db(Display *, int, Picture, XftFont *, Picture, int, int, int, int, const FcChar8 *, int);
CheckInterfacedef(XftTextRender32LE,XftTextRender32LE_db);
extern FcBool XftCharExists_db(Display *, XftFont *, FcChar32);
CheckInterfacedef(XftCharExists,XftCharExists_db);
extern void XftFontClose_db(Display *, XftFont *);
CheckInterfacedef(XftFontClose,XftFontClose_db);
extern void XftDrawGlyphs_db(XftDraw *, const XftColor *, XftFont *, int, int, const FT_UInt *, int);
CheckInterfacedef(XftDrawGlyphs,XftDrawGlyphs_db);
extern void XftDrawString8_db(XftDraw *, const XftColor *, XftFont *, int, int, const FcChar8 *, int);
CheckInterfacedef(XftDrawString8,XftDrawString8_db);
extern FcPattern * XftXlfdParse_db(const char *, FcBool, FcBool);
CheckInterfacedef(XftXlfdParse,XftXlfdParse_db);
extern void XftTextRender16LE_db(Display *, int, Picture, XftFont *, Picture, int, int, int, int, const FcChar8 *, int);
CheckInterfacedef(XftTextRender16LE,XftTextRender16LE_db);
extern int XftColorAllocName_db(Display *, const Visual *, Colormap, const char *, XftColor *);
CheckInterfacedef(XftColorAllocName,XftColorAllocName_db);
extern XftFont * XftFontOpen_db(Display *, int, ...);
CheckInterfacedef(XftFontOpen,XftFontOpen_db);
extern void XftFontUnloadGlyphs_db(Display *, XftFont *, const FT_UInt *, int);
CheckInterfacedef(XftFontUnloadGlyphs,XftFontUnloadGlyphs_db);
extern XftDraw * XftDrawCreateBitmap_db(Display *, Pixmap);
CheckInterfacedef(XftDrawCreateBitmap,XftDrawCreateBitmap_db);
extern XftDraw * XftDrawCreateAlpha_db(Display *, Pixmap, int);
CheckInterfacedef(XftDrawCreateAlpha,XftDrawCreateAlpha_db);
extern Colormap XftDrawColormap_db(XftDraw *);
CheckInterfacedef(XftDrawColormap,XftDrawColormap_db);
extern void XftDrawGlyphFontSpec_db(XftDraw *, const XftColor *, const XftGlyphFontSpec *, int);
CheckInterfacedef(XftDrawGlyphFontSpec,XftDrawGlyphFontSpec_db);
extern void XftDrawGlyphSpec_db(XftDraw *, const XftColor *, XftFont *, const XftGlyphSpec *, int);
CheckInterfacedef(XftDrawGlyphSpec,XftDrawGlyphSpec_db);
extern void XftTextRenderUtf16_db(Display *, int, Picture, XftFont *, Picture, int, int, int, int, const FcChar8 *, FcEndian, int);
CheckInterfacedef(XftTextRenderUtf16,XftTextRenderUtf16_db);
extern int XftDrawSetClipRectangles_db(XftDraw *, int, int, const XRectangle *, int);
CheckInterfacedef(XftDrawSetClipRectangles,XftDrawSetClipRectangles_db);
extern void XftDrawDestroy_db(XftDraw *);
CheckInterfacedef(XftDrawDestroy,XftDrawDestroy_db);
extern int XftDefaultHasRender_db(Display *);
CheckInterfacedef(XftDefaultHasRender,XftDefaultHasRender_db);
extern XftFontInfo * XftFontInfoCreate_db(Display *, const FcPattern *);
CheckInterfacedef(XftFontInfoCreate,XftFontInfoCreate_db);
extern void XftCharFontSpecRender_db(Display *, int, Picture, Picture, int, int, const XftCharFontSpec *, int);
CheckInterfacedef(XftCharFontSpecRender,XftCharFontSpecRender_db);
extern int XftGetVersion_db(void);
CheckInterfacedef(XftGetVersion,XftGetVersion_db);
extern Drawable XftDrawDrawable_db(XftDraw *);
CheckInterfacedef(XftDrawDrawable,XftDrawDrawable_db);
extern void XftUnlockFace_db(XftFont *);
CheckInterfacedef(XftUnlockFace,XftUnlockFace_db);
extern void XftGlyphFontSpecRender_db(Display *, int, Picture, Picture, int, int, const XftGlyphFontSpec *, int);
CheckInterfacedef(XftGlyphFontSpecRender,XftGlyphFontSpecRender_db);
extern void XftColorFree_db(Display *, Visual *, Colormap, XftColor *);
CheckInterfacedef(XftColorFree,XftColorFree_db);
extern FcBool XftFontInfoEqual_db(const XftFontInfo *, const XftFontInfo *);
CheckInterfacedef(XftFontInfoEqual,XftFontInfoEqual_db);
extern void XftDrawRect_db(XftDraw *, const XftColor *, int, int, unsigned int, unsigned int);
CheckInterfacedef(XftDrawRect,XftDrawRect_db);
extern XftFont * XftFontOpenPattern_db(Display *, FcPattern *);
CheckInterfacedef(XftFontOpenPattern,XftFontOpenPattern_db);
extern FcPattern * XftNameParse_db(const char *);
CheckInterfacedef(XftNameParse,XftNameParse_db);
extern Display * XftDrawDisplay_db(XftDraw *);
CheckInterfacedef(XftDrawDisplay,XftDrawDisplay_db);
extern FcBool XftFontCheckGlyph_db(Display *, XftFont *, FcBool, FT_UInt, FT_UInt *, int *);
CheckInterfacedef(XftFontCheckGlyph,XftFontCheckGlyph_db);
extern FcFontSet * XftListFonts_db(Display *, int, ...);
CheckInterfacedef(XftListFonts,XftListFonts_db);
extern void XftDefaultSubstitute_db(Display *, int, FcPattern *);
CheckInterfacedef(XftDefaultSubstitute,XftDefaultSubstitute_db);
extern Visual * XftDrawVisual_db(XftDraw *);
CheckInterfacedef(XftDrawVisual,XftDrawVisual_db);
extern void XftFontLoadGlyphs_db(Display *, XftFont *, FcBool, const FT_UInt *, int);
CheckInterfacedef(XftFontLoadGlyphs,XftFontLoadGlyphs_db);
extern XftFont * XftFontOpenXlfd_db(Display *, int, const char *);
CheckInterfacedef(XftFontOpenXlfd,XftFontOpenXlfd_db);
extern XftDraw * XftDrawCreate_db(Display *, Drawable, Visual *, Colormap);
CheckInterfacedef(XftDrawCreate,XftDrawCreate_db);
extern void XftTextExtentsUtf8_db(Display *, XftFont *, const FcChar8 *, int, XGlyphInfo *);
CheckInterfacedef(XftTextExtentsUtf8,XftTextExtentsUtf8_db);
extern void XftTextExtents32_db(Display *, XftFont *, const FcChar32 *, int, XGlyphInfo *);
CheckInterfacedef(XftTextExtents32,XftTextExtents32_db);
extern void XftTextRenderUtf8_db(Display *, int, Picture, XftFont *, Picture, int, int, int, int, const FcChar8 *, int);
CheckInterfacedef(XftTextRenderUtf8,XftTextRenderUtf8_db);
extern FT_UInt XftCharIndex_db(Display *, XftFont *, FcChar32);
CheckInterfacedef(XftCharIndex,XftCharIndex_db);
extern void XftTextRender32_db(Display *, int, Picture, XftFont *, Picture, int, int, int, int, const FcChar32 *, int);
CheckInterfacedef(XftTextRender32,XftTextRender32_db);
extern void XftGlyphRender_db(Display *, int, Picture, XftFont *, Picture, int, int, int, int, const FT_UInt *, int);
CheckInterfacedef(XftGlyphRender,XftGlyphRender_db);
extern Picture XftDrawPicture_db(XftDraw *);
CheckInterfacedef(XftDrawPicture,XftDrawPicture_db);
extern void XftDrawStringUtf8_db(XftDraw *, const XftColor *, XftFont *, int, int, const FcChar8 *, int);
CheckInterfacedef(XftDrawStringUtf8,XftDrawStringUtf8_db);
extern int XftDefaultSet_db(Display *, FcPattern *);
CheckInterfacedef(XftDefaultSet,XftDefaultSet_db);
extern void XftDrawStringUtf16_db(XftDraw *, const XftColor *, XftFont *, int, int, const FcChar8 *, FcEndian, int);
CheckInterfacedef(XftDrawStringUtf16,XftDrawStringUtf16_db);
extern int XftDrawSetClip_db(XftDraw *, Region);
CheckInterfacedef(XftDrawSetClip,XftDrawSetClip_db);
extern void XftDrawString32_db(XftDraw *, const XftColor *, XftFont *, int, int, const FcChar32 *, int);
CheckInterfacedef(XftDrawString32,XftDrawString32_db);
extern FcChar32 XftFontInfoHash_db(const XftFontInfo *);
CheckInterfacedef(XftFontInfoHash,XftFontInfoHash_db);
extern XftFont * XftFontOpenInfo_db(Display *, FcPattern *, XftFontInfo *);
CheckInterfacedef(XftFontOpenInfo,XftFontOpenInfo_db);
extern void XftDrawChange_db(XftDraw *, Drawable);
CheckInterfacedef(XftDrawChange,XftDrawChange_db);
extern void XftCharSpecRender_db(Display *, int, Picture, XftFont *, Picture, int, int, const XftCharSpec *, int);
CheckInterfacedef(XftCharSpecRender,XftCharSpecRender_db);
extern void XftTextRender8_db(Display *, int, Picture, XftFont *, Picture, int, int, int, int, const FcChar8 *, int);
CheckInterfacedef(XftTextRender8,XftTextRender8_db);
extern void XftTextExtents16_db(Display *, XftFont *, const FcChar16 *, int, XGlyphInfo *);
CheckInterfacedef(XftTextExtents16,XftTextExtents16_db);
extern XftFont * XftFontOpenName_db(Display *, int, const char *);
CheckInterfacedef(XftFontOpenName,XftFontOpenName_db);
extern FcPattern * XftFontMatch_db(Display *, int, const FcPattern *, FcResult *);
CheckInterfacedef(XftFontMatch,XftFontMatch_db);
extern FcBool XftInitFtLibrary_db(void);
CheckInterfacedef(XftInitFtLibrary,XftInitFtLibrary_db);
extern void XftDrawString16_db(XftDraw *, const XftColor *, XftFont *, int, int, const FcChar16 *, int);
CheckInterfacedef(XftDrawString16,XftDrawString16_db);
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
