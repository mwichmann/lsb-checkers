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
#if defined __i386__
CheckTypeSize(XSizeHints,72, 8301, 2, 1.2, NULL, 8300, NULL)
#elif defined __ia64__
CheckTypeSize(XSizeHints,80, 8301, 3, 1.3, NULL, 8300, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XSizeHints,72, 8301, 6, 1.2, NULL, 8300, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XSizeHints,72, 8301, 10, 1.3, NULL, 8300, NULL)
#elif defined __powerpc64__
CheckTypeSize(XSizeHints,80, 8301, 9, 2.0, NULL, 8300, NULL)
#elif defined __s390x__
CheckTypeSize(XSizeHints,80, 8301, 12, 1.3, NULL, 8300, NULL)
#elif defined __x86_64__
CheckTypeSize(XSizeHints,80, 8301, 11, 2.0, NULL, 8300, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8300,NULL);\n",architecture,8301,0);
Msg("Find size of XSizeHints (8301)\n");
#endif

#if defined __i386__
CheckTypeSize(XWMHints,36, 8303, 2, 1.2, NULL, 8302, NULL)
#elif defined __ia64__
CheckTypeSize(XWMHints,56, 8303, 3, 1.3, NULL, 8302, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XWMHints,36, 8303, 6, 1.2, NULL, 8302, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XWMHints,36, 8303, 10, 1.3, NULL, 8302, NULL)
#elif defined __powerpc64__
CheckTypeSize(XWMHints,56, 8303, 9, 2.0, NULL, 8302, NULL)
#elif defined __s390x__
CheckTypeSize(XWMHints,56, 8303, 12, 1.3, NULL, 8302, NULL)
#elif defined __x86_64__
CheckTypeSize(XWMHints,56, 8303, 11, 2.0, NULL, 8302, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8302,NULL);\n",architecture,8303,0);
Msg("Find size of XWMHints (8303)\n");
#endif

#if defined __i386__
CheckTypeSize(XTextProperty,16, 8305, 2, 1.2, NULL, 8304, NULL)
#elif defined __ia64__
CheckTypeSize(XTextProperty,32, 8305, 3, 1.3, NULL, 8304, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XTextProperty,16, 8305, 6, 1.2, NULL, 8304, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XTextProperty,16, 8305, 10, 1.3, NULL, 8304, NULL)
#elif defined __powerpc64__
CheckTypeSize(XTextProperty,32, 8305, 9, 2.0, NULL, 8304, NULL)
#elif defined __s390x__
CheckTypeSize(XTextProperty,32, 8305, 12, 1.3, NULL, 8304, NULL)
#elif defined __x86_64__
CheckTypeSize(XTextProperty,32, 8305, 11, 2.0, NULL, 8304, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8304,NULL);\n",architecture,8305,0);
Msg("Find size of XTextProperty (8305)\n");
#endif

#if defined __i386__
CheckTypeSize(XIconSize,24, 8309, 2, 1.2, NULL, 8308, NULL)
#elif defined __ia64__
CheckTypeSize(XIconSize,24, 8309, 3, 1.3, NULL, 8308, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XIconSize,24, 8309, 6, 1.2, NULL, 8308, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XIconSize,24, 8309, 10, 1.3, NULL, 8308, NULL)
#elif defined __powerpc64__
CheckTypeSize(XIconSize,24, 8309, 9, 2.0, NULL, 8308, NULL)
#elif defined __s390x__
CheckTypeSize(XIconSize,24, 8309, 12, 1.3, NULL, 8308, NULL)
#elif defined __x86_64__
CheckTypeSize(XIconSize,24, 8309, 11, 2.0, NULL, 8308, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8308,NULL);\n",architecture,8309,0);
Msg("Find size of XIconSize (8309)\n");
#endif

#if defined __i386__
CheckTypeSize(XClassHint,8, 8311, 2, 1.2, NULL, 8310, NULL)
#elif defined __ia64__
CheckTypeSize(XClassHint,16, 8311, 3, 1.3, NULL, 8310, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XClassHint,8, 8311, 6, 1.2, NULL, 8310, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XClassHint,8, 8311, 10, 1.3, NULL, 8310, NULL)
#elif defined __powerpc64__
CheckTypeSize(XClassHint,16, 8311, 9, 2.0, NULL, 8310, NULL)
#elif defined __s390x__
CheckTypeSize(XClassHint,16, 8311, 12, 1.3, NULL, 8310, NULL)
#elif defined __x86_64__
CheckTypeSize(XClassHint,16, 8311, 11, 2.0, NULL, 8310, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8310,NULL);\n",architecture,8311,0);
Msg("Find size of XClassHint (8311)\n");
#endif

#if defined __i386__
CheckTypeSize(XComposeStatus,8, 8313, 2, 1.2, NULL, 8312, NULL)
#elif defined __ia64__
CheckTypeSize(XComposeStatus,16, 8313, 3, 1.3, NULL, 8312, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XComposeStatus,8, 8313, 6, 1.2, NULL, 8312, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XComposeStatus,8, 8313, 10, 1.3, NULL, 8312, NULL)
#elif defined __powerpc64__
CheckTypeSize(XComposeStatus,16, 8313, 9, 2.0, NULL, 8312, NULL)
#elif defined __s390x__
CheckTypeSize(XComposeStatus,16, 8313, 12, 1.3, NULL, 8312, NULL)
#elif defined __x86_64__
CheckTypeSize(XComposeStatus,16, 8313, 11, 2.0, NULL, 8312, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8312,NULL);\n",architecture,8313,0);
Msg("Find size of XComposeStatus (8313)\n");
#endif

#if defined __i386__
CheckTypeSize(Region,4, 8314, 2, 1.0, NULL, 7850, NULL)
#elif defined __ia64__
CheckTypeSize(Region,8, 8314, 3, 1.3, NULL, 7850, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Region,4, 8314, 6, 1.2, NULL, 7850, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Region,4, 8314, 10, 1.3, NULL, 7850, NULL)
#elif defined __powerpc64__
CheckTypeSize(Region,8, 8314, 9, 2.0, NULL, 7850, NULL)
#elif defined __s390x__
CheckTypeSize(Region,8, 8314, 12, 1.3, NULL, 7850, NULL)
#elif defined __x86_64__
CheckTypeSize(Region,8, 8314, 11, 2.0, NULL, 7850, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,7850,NULL);\n",architecture,8314,0);
Msg("Find size of Region (8314)\n");
#endif

#if defined __i386__
CheckTypeSize(XVisualInfo,40, 8316, 2, 1.2, NULL, 8315, NULL)
#elif defined __ia64__
CheckTypeSize(XVisualInfo,64, 8316, 3, 1.3, NULL, 8315, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XVisualInfo,40, 8316, 6, 1.2, NULL, 8315, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XVisualInfo,40, 8316, 10, 1.3, NULL, 8315, NULL)
#elif defined __powerpc64__
CheckTypeSize(XVisualInfo,64, 8316, 9, 2.0, NULL, 8315, NULL)
#elif defined __s390x__
CheckTypeSize(XVisualInfo,64, 8316, 12, 1.3, NULL, 8315, NULL)
#elif defined __x86_64__
CheckTypeSize(XVisualInfo,64, 8316, 11, 2.0, NULL, 8315, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8315,NULL);\n",architecture,8316,0);
Msg("Find size of XVisualInfo (8316)\n");
#endif

#if defined __i386__
CheckTypeSize(XStandardColormap,40, 8318, 2, 1.2, NULL, 8317, NULL)
#elif defined __ia64__
CheckTypeSize(XStandardColormap,80, 8318, 3, 1.3, NULL, 8317, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XStandardColormap,40, 8318, 6, 1.2, NULL, 8317, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XStandardColormap,40, 8318, 10, 1.3, NULL, 8317, NULL)
#elif defined __powerpc64__
CheckTypeSize(XStandardColormap,80, 8318, 9, 2.0, NULL, 8317, NULL)
#elif defined __s390x__
CheckTypeSize(XStandardColormap,80, 8318, 12, 1.3, NULL, 8317, NULL)
#elif defined __x86_64__
CheckTypeSize(XStandardColormap,80, 8318, 11, 2.0, NULL, 8317, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8317,NULL);\n",architecture,8318,0);
Msg("Find size of XStandardColormap (8318)\n");
#endif

#if defined __i386__
CheckTypeSize(XContext,4, 8319, 2, 1.0, NULL, 6, NULL)
#elif defined __ia64__
CheckTypeSize(XContext,4, 8319, 3, 1.3, NULL, 6, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XContext,4, 8319, 6, 1.2, NULL, 6, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XContext,4, 8319, 10, 1.3, NULL, 6, NULL)
#elif defined __powerpc64__
CheckTypeSize(XContext,4, 8319, 9, 2.0, NULL, 6, NULL)
#elif defined __s390x__
CheckTypeSize(XContext,4, 8319, 12, 1.3, NULL, 6, NULL)
#elif defined __x86_64__
CheckTypeSize(XContext,4, 8319, 11, 2.0, NULL, 6, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,6,NULL);\n",architecture,8319,0);
Msg("Find size of XContext (8319)\n");
#endif

#if defined __i386__
CheckTypeSize(XICCEncodingStyle,4, 8832, 2, 1.0, NULL, 8831, NULL)
#elif defined __ia64__
CheckTypeSize(XICCEncodingStyle,4, 8832, 3, 1.3, NULL, 8831, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XICCEncodingStyle,4, 8832, 6, 1.2, NULL, 8831, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XICCEncodingStyle,4, 8832, 10, 1.3, NULL, 8831, NULL)
#elif defined __powerpc64__
CheckTypeSize(XICCEncodingStyle,4, 8832, 9, 2.0, NULL, 8831, NULL)
#elif defined __s390x__
CheckTypeSize(XICCEncodingStyle,4, 8832, 12, 1.3, NULL, 8831, NULL)
#elif defined __x86_64__
CheckTypeSize(XICCEncodingStyle,4, 8832, 11, 2.0, NULL, 8831, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8831, NULL);\n",architecture,8832,0);
Msg("Find size of XICCEncodingStyle (8832)\n");
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
