/*
 * Test of X11/extensions/shape.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/extensions/shape.h"



#ifdef TET_TEST
void X11_extensions_shape_h()
{
#else
int X11_extensions_shape_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/shape.h\n");
#endif

printf("Checking data structures in X11/extensions/shape.h\n");
#if defined __s390__ && !defined __s390x__
CheckTypeSize(XShapeEvent,48, 9387, 10, 1.3, NULL, 9386, NULL)
#elif defined __i386__
CheckTypeSize(XShapeEvent,48, 9387, 2, 1.2, NULL, 9386, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XShapeEvent,48, 9387, 6, 1.2, NULL, 9386, NULL)
#elif defined __x86_64__
CheckTypeSize(XShapeEvent,80, 9387, 11, 2.0, NULL, 9386, NULL)
#elif defined __s390x__
CheckTypeSize(XShapeEvent,80, 9387, 12, 1.3, NULL, 9386, NULL)
#elif defined __ia64__
CheckTypeSize(XShapeEvent,80, 9387, 3, 1.3, NULL, 9386, NULL)
#elif defined __powerpc64__
CheckTypeSize(XShapeEvent,80, 9387, 9, 2.0, NULL, 9386, NULL)
#else
Msg("Find size of XShapeEvent (9387)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9386, NULL);\n",architecture,9387,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/extensions/shape.h\n\n",pcnt,cnt);
return cnt;
#endif

}
