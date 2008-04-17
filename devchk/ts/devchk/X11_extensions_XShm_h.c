/*
 * Test of X11/extensions/XShm.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/Xdefs.h"
#include "X11/Xlib.h"
#include "X11/extensions/XShm.h"



#ifdef TET_TEST
void X11_extensions_XShm_h()
{
#else
int X11_extensions_XShm_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/XShm.h\n");
#endif

printf("Checking data structures in X11/extensions/XShm.h\n");
#if 1
CheckTypeSize(ShmSeg,0, 9388, 1, 1.2, NULL, 9, NULL)
#endif

#if 1
CheckTypeSize(XShmCompletionEvent,0, 9390, 1, 1.2, NULL, 9389, NULL)
#endif

#if 1
CheckTypeSize(XShmSegmentInfo,0, 9392, 1, 1.2, NULL, 9391, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/extensions/XShm.h\n\n",pcnt,cnt);
return cnt;
#endif

}
