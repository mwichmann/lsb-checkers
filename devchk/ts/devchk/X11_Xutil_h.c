/*
 * Test of X11/Xutil.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>

#include "X11/Xutil.h"



#ifdef TET_TEST
void X11_Xutil_h()
{
#else
int X11_Xutil_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/Xutil.h\n");
#endif

printf("Checking data structures in X11/Xutil.h\n");
#if __i386__
CheckTypeSize(XSizeHints,72, 8301, 2);
#elif __ia64__
CheckTypeSize(XSizeHints,80, 8301, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSizeHints,72, 8301, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XSizeHints,72, 8301, 10);
#elif __powerpc64__
CheckTypeSize(XSizeHints,80, 8301, 9);
#elif __s390x__
CheckTypeSize(XSizeHints,80, 8301, 12);
#elif __x86_64__
CheckTypeSize(XSizeHints,80, 8301, 11);
#elif 1
CheckTypeSize(XSizeHints,0, 8301, 1);
#endif

#if __i386__
CheckTypeSize(XWMHints,36, 8303, 2);
#elif __ia64__
CheckTypeSize(XWMHints,56, 8303, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XWMHints,36, 8303, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XWMHints,36, 8303, 10);
#elif __powerpc64__
CheckTypeSize(XWMHints,56, 8303, 9);
#elif __s390x__
CheckTypeSize(XWMHints,56, 8303, 12);
#elif __x86_64__
CheckTypeSize(XWMHints,56, 8303, 11);
#elif 1
CheckTypeSize(XWMHints,0, 8303, 1);
#endif

#if __i386__
CheckTypeSize(XTextProperty,16, 8305, 2);
#elif __ia64__
CheckTypeSize(XTextProperty,32, 8305, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XTextProperty,16, 8305, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XTextProperty,16, 8305, 10);
#elif __powerpc64__
CheckTypeSize(XTextProperty,32, 8305, 9);
#elif __s390x__
CheckTypeSize(XTextProperty,32, 8305, 12);
#elif __x86_64__
CheckTypeSize(XTextProperty,32, 8305, 11);
#elif 1
CheckTypeSize(XTextProperty,0, 8305, 1);
#endif

#if __i386__
CheckTypeSize(XIconSize,24, 8309, 2);
#elif __ia64__
CheckTypeSize(XIconSize,24, 8309, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XIconSize,24, 8309, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XIconSize,24, 8309, 10);
#elif __powerpc64__
CheckTypeSize(XIconSize,24, 8309, 9);
#elif __s390x__
CheckTypeSize(XIconSize,24, 8309, 12);
#elif __x86_64__
CheckTypeSize(XIconSize,24, 8309, 11);
#elif 1
CheckTypeSize(XIconSize,0, 8309, 1);
#endif

#if __i386__
CheckTypeSize(XClassHint,8, 8311, 2);
#elif __ia64__
CheckTypeSize(XClassHint,16, 8311, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XClassHint,8, 8311, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XClassHint,8, 8311, 10);
#elif __powerpc64__
CheckTypeSize(XClassHint,16, 8311, 9);
#elif __s390x__
CheckTypeSize(XClassHint,16, 8311, 12);
#elif __x86_64__
CheckTypeSize(XClassHint,16, 8311, 11);
#elif 1
CheckTypeSize(XClassHint,0, 8311, 1);
#endif

#if __i386__
CheckTypeSize(XComposeStatus,8, 8313, 2);
#elif __ia64__
CheckTypeSize(XComposeStatus,16, 8313, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XComposeStatus,8, 8313, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XComposeStatus,8, 8313, 10);
#elif __powerpc64__
CheckTypeSize(XComposeStatus,16, 8313, 9);
#elif __s390x__
CheckTypeSize(XComposeStatus,16, 8313, 12);
#elif __x86_64__
CheckTypeSize(XComposeStatus,16, 8313, 11);
#elif 1
CheckTypeSize(XComposeStatus,0, 8313, 1);
#endif

#if __i386__
CheckTypeSize(Region,4, 8314, 2);
#elif __ia64__
CheckTypeSize(Region,8, 8314, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(Region,4, 8314, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(Region,4, 8314, 10);
#elif __powerpc64__
CheckTypeSize(Region,8, 8314, 9);
#elif __s390x__
CheckTypeSize(Region,8, 8314, 12);
#elif __x86_64__
CheckTypeSize(Region,8, 8314, 11);
#elif 1
CheckTypeSize(Region,0, 8314, 1);
#endif

#if __i386__
CheckTypeSize(XVisualInfo,40, 8316, 2);
#elif __ia64__
CheckTypeSize(XVisualInfo,64, 8316, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XVisualInfo,40, 8316, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XVisualInfo,40, 8316, 10);
#elif __powerpc64__
CheckTypeSize(XVisualInfo,64, 8316, 9);
#elif __s390x__
CheckTypeSize(XVisualInfo,64, 8316, 12);
#elif __x86_64__
CheckTypeSize(XVisualInfo,64, 8316, 11);
#elif 1
CheckTypeSize(XVisualInfo,0, 8316, 1);
#endif

#if __i386__
CheckTypeSize(XStandardColormap,40, 8318, 2);
#elif __ia64__
CheckTypeSize(XStandardColormap,80, 8318, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XStandardColormap,40, 8318, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XStandardColormap,40, 8318, 10);
#elif __powerpc64__
CheckTypeSize(XStandardColormap,80, 8318, 9);
#elif __s390x__
CheckTypeSize(XStandardColormap,80, 8318, 12);
#elif __x86_64__
CheckTypeSize(XStandardColormap,80, 8318, 11);
#elif 1
CheckTypeSize(XStandardColormap,0, 8318, 1);
#endif

#if __i386__
CheckTypeSize(XContext,4, 8319, 2);
#elif __ia64__
CheckTypeSize(XContext,4, 8319, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XContext,4, 8319, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XContext,4, 8319, 10);
#elif __powerpc64__
CheckTypeSize(XContext,4, 8319, 9);
#elif __s390x__
CheckTypeSize(XContext,4, 8319, 12);
#elif __x86_64__
CheckTypeSize(XContext,4, 8319, 11);
#elif 1
CheckTypeSize(XContext,0, 8319, 1);
#endif

#if __i386__
CheckTypeSize(XICCEncodingStyle,4, 8832, 2);
#elif __ia64__
CheckTypeSize(XICCEncodingStyle,4, 8832, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XICCEncodingStyle,4, 8832, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XICCEncodingStyle,4, 8832, 10);
#elif __powerpc64__
CheckTypeSize(XICCEncodingStyle,4, 8832, 9);
#elif __s390x__
CheckTypeSize(XICCEncodingStyle,4, 8832, 12);
#elif __x86_64__
CheckTypeSize(XICCEncodingStyle,4, 8832, 11);
#elif 1
CheckTypeSize(XICCEncodingStyle,0, 8832, 1);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/Xutil.h\n\n",pcnt,cnt);
return cnt;
#endif

}
