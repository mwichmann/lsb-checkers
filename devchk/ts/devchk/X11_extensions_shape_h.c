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
#if 1
CheckTypeSize(XShapeEvent,0, 9387, 1, 1.2, NULL, 9386, NULL)
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
