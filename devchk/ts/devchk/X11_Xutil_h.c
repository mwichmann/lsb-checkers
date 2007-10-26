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
Msg("Find size of XComposeStatus (8313)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8312,NULL);\n",architecture,8313,0);
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
Msg("Find size of Region (8314)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,7850,NULL);\n",architecture,8314,0);
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
Msg("Find size of XContext (8319)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,6,NULL);\n",architecture,8319,0);
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
