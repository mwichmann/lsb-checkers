/*
 * Test of X11/extensions/XEVI.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>

#include "X11/extensions/XEVI.h"



#ifdef TET_TEST
void X11_extensions_XEVI_h()
{
#else
int X11_extensions_XEVI_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/XEVI.h\n");
#endif

printf("Checking data structures in X11/extensions/XEVI.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef X_EVIQueryVersion
	CompareConstant(X_EVIQueryVersion,0,16859,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: X_EVIQueryVersion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_EVIGetVisualInfo
	CompareConstant(X_EVIGetVisualInfo,1,16860,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: X_EVIGetVisualInfo\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XEVI_TRANSPARENCY_NONE
	CompareConstant(XEVI_TRANSPARENCY_NONE,0,5311,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XEVI_TRANSPARENCY_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XEVI_TRANSPARENCY_PIXEL
	CompareConstant(XEVI_TRANSPARENCY_PIXEL,1,5312,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XEVI_TRANSPARENCY_PIXEL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XEVI_TRANSPARENCY_MASK
	CompareConstant(XEVI_TRANSPARENCY_MASK,2,5313,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XEVI_TRANSPARENCY_MASK\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckTypeSize(ExtendedVisualInfo,48, 11068, 12, 1.3, NULL, 11067, NULL)
#elif defined __x86_64__
CheckTypeSize(ExtendedVisualInfo,48, 11068, 11, 2.0, NULL, 11067, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ExtendedVisualInfo,36, 11068, 10, 1.3, NULL, 11067, NULL)
#elif defined __powerpc64__
CheckTypeSize(ExtendedVisualInfo,48, 11068, 9, 2.0, NULL, 11067, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ExtendedVisualInfo,36, 11068, 6, 1.2, NULL, 11067, NULL)
#elif defined __ia64__
CheckTypeSize(ExtendedVisualInfo,48, 11068, 3, 1.3, NULL, 11067, NULL)
#elif defined __i386__
CheckTypeSize(ExtendedVisualInfo,36, 11068, 2, 1.2, NULL, 11067, NULL)
#else
Msg("Find size of ExtendedVisualInfo (11068)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11067, NULL);\n",architecture,11068,0);
#endif

extern int XeviGetVisualInfo_db(Display *, VisualID *, int, ExtendedVisualInfo * *, int *);
CheckInterfacedef(XeviGetVisualInfo,XeviGetVisualInfo_db);
extern int XeviQueryExtension_db(Display *);
CheckInterfacedef(XeviQueryExtension,XeviQueryExtension_db);
extern int XeviQueryVersion_db(Display *, int *, int *);
CheckInterfacedef(XeviQueryVersion,XeviQueryVersion_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/extensions/XEVI.h\n\n",pcnt,cnt);
return cnt;
#endif

}
