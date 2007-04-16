/*
 * Test of X11/extensions/XEVI.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
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
#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/XEVI.h\n");
#endif

printf("Checking data structures in X11/extensions/XEVI.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef XEVI_TRANSPARENCY_NONE
	CompareConstant(XEVI_TRANSPARENCY_NONE,0,5311,architecture)
#else
Msg( "Error: Constant not found: XEVI_TRANSPARENCY_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XEVI_TRANSPARENCY_PIXEL
	CompareConstant(XEVI_TRANSPARENCY_PIXEL,1,5312,architecture)
#else
Msg( "Error: Constant not found: XEVI_TRANSPARENCY_PIXEL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XEVI_TRANSPARENCY_MASK
	CompareConstant(XEVI_TRANSPARENCY_MASK,2,5313,architecture)
#else
Msg( "Error: Constant not found: XEVI_TRANSPARENCY_MASK\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(ExtendedVisualInfo,36, 11068, 2);
#elif __ia64__
CheckTypeSize(ExtendedVisualInfo,48, 11068, 3);
#elif __powerpc64__
CheckTypeSize(ExtendedVisualInfo,48, 11068, 9);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(ExtendedVisualInfo,36, 11068, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(ExtendedVisualInfo,36, 11068, 10);
#elif __x86_64__
CheckTypeSize(ExtendedVisualInfo,48, 11068, 11);
#elif __s390x__
CheckTypeSize(ExtendedVisualInfo,48, 11068, 12);
#elif 1
CheckTypeSize(ExtendedVisualInfo,0, 11068, 1);
#endif

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
