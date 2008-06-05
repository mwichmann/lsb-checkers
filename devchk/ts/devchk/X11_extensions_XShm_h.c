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
#if defined __s390x__
CheckTypeSize(ShmSeg,8, 9388, 12, 1.3, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(ShmSeg,8, 9388, 11, 2.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ShmSeg,4, 9388, 10, 1.3, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(ShmSeg,8, 9388, 9, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ShmSeg,4, 9388, 6, 1.2, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(ShmSeg,8, 9388, 3, 1.3, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(ShmSeg,4, 9388, 2, 1.2, NULL, 9, NULL)
#else
Msg("Find size of ShmSeg (9388)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9,NULL);\n",architecture,9388,0);
#endif

#if defined __s390x__
CheckTypeSize(XShmCompletionEvent,64, 9390, 12, 1.3, NULL, 9389, NULL)
#elif defined __x86_64__
CheckTypeSize(XShmCompletionEvent,64, 9390, 11, 2.0, NULL, 9389, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XShmCompletionEvent,36, 9390, 10, 1.3, NULL, 9389, NULL)
#elif defined __powerpc64__
CheckTypeSize(XShmCompletionEvent,64, 9390, 9, 2.0, NULL, 9389, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XShmCompletionEvent,36, 9390, 6, 1.2, NULL, 9389, NULL)
#elif defined __ia64__
CheckTypeSize(XShmCompletionEvent,64, 9390, 3, 1.3, NULL, 9389, NULL)
#elif defined __i386__
CheckTypeSize(XShmCompletionEvent,36, 9390, 2, 1.2, NULL, 9389, NULL)
#else
Msg("Find size of XShmCompletionEvent (9390)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9389,NULL);\n",architecture,9390,0);
#endif

#if defined __s390x__
CheckTypeSize(XShmSegmentInfo,32, 9392, 12, 1.3, NULL, 9391, NULL)
#elif defined __x86_64__
CheckTypeSize(XShmSegmentInfo,32, 9392, 11, 2.0, NULL, 9391, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XShmSegmentInfo,16, 9392, 10, 1.3, NULL, 9391, NULL)
#elif defined __powerpc64__
CheckTypeSize(XShmSegmentInfo,32, 9392, 9, 2.0, NULL, 9391, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XShmSegmentInfo,16, 9392, 6, 1.2, NULL, 9391, NULL)
#elif defined __ia64__
CheckTypeSize(XShmSegmentInfo,32, 9392, 3, 1.3, NULL, 9391, NULL)
#elif defined __i386__
CheckTypeSize(XShmSegmentInfo,16, 9392, 2, 1.2, NULL, 9391, NULL)
#else
Msg("Find size of XShmSegmentInfo (9392)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9391, NULL);\n",architecture,9392,0);
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
