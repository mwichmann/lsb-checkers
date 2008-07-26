/*
 * Test of X11/Xmd.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/Xmd.h"



#ifdef TET_TEST
void X11_Xmd_h()
{
#else
int X11_Xmd_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/Xmd.h\n");
#endif

printf("Checking data structures in X11/Xmd.h\n");
#if defined __powerpc64__
/* No test for B16 */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for B16 */
#elif defined __ia64__
/* No test for B16 */
#elif defined __i386__
/* No test for B16 */
#elif defined __s390x__
/* No test for B16 */
#elif defined __x86_64__
/* No test for B16 */
#elif defined __s390__ && !defined __s390x__
/* No test for B16 */
#else
Msg( "No definition for B16 (16192, Unknown) in db\n");
#ifdef B16
#endif
#endif
#if defined __powerpc64__
/* No test for B32 */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for B32 */
#elif defined __ia64__
/* No test for B32 */
#elif defined __i386__
/* No test for B32 */
#elif defined __s390x__
/* No test for B32 */
#elif defined __x86_64__
/* No test for B32 */
#elif defined __s390__ && !defined __s390x__
/* No test for B32 */
#else
Msg( "No definition for B32 (16193, Unknown) in db\n");
#ifdef B32
#endif
#endif
#if 1
CheckTypeSize(CARD16,0, 8957, 1, 1.0, NULL, 5, NULL)
#endif

#if 1
CheckTypeSize(BOOL,0, 8959, 1, 1.0, NULL, 1007957, NULL)
#endif

#if defined __s390x__
CheckTypeSize(CARD32,0, 1007954, 12, 1.0, NULL, 7, NULL)
#elif defined __x86_64__
CheckTypeSize(CARD32,0, 1007954, 11, 1.0, NULL, 7, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(CARD32,0, 1007954, 10, 1.0, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(CARD32,0, 1007954, 9, 1.0, NULL, 7, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(CARD32,0, 1007954, 6, 1.0, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(CARD32,0, 1007954, 3, 1.0, NULL, 7, NULL)
#elif defined __i386__
CheckTypeSize(CARD32,0, 1007954, 2, 1.0, NULL, 9, NULL)
#endif

#if defined __s390x__
CheckTypeSize(CARD64,0, 1007955, 12, 1.0, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(CARD64,0, 1007955, 11, 1.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(CARD64,0, 1007955, 10, 1.0, NULL, 11, NULL)
#elif defined __powerpc64__
CheckTypeSize(CARD64,0, 1007955, 9, 1.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(CARD64,0, 1007955, 6, 1.0, NULL, 11, NULL)
#elif defined __ia64__
CheckTypeSize(CARD64,0, 1007955, 3, 1.0, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(CARD64,0, 1007955, 2, 1.0, NULL, 11, NULL)
#endif

#if 1
CheckTypeSize(BYTE,0, 1007956, 1, 1.0, NULL, 3, NULL)
#endif

#if 1
CheckTypeSize(CARD8,0, 1007957, 1, 1.0, NULL, 3, NULL)
#endif

#if 1
CheckTypeSize(BITS32,0, 1007958, 1, 1.0, NULL, 1007954, NULL)
#endif

#if 1
CheckTypeSize(BITS16,0, 1007959, 1, 1.0, NULL, 8957, NULL)
#endif

#if 1
CheckTypeSize(INT64,0, 1008205, 1, 1.0, NULL, 8, NULL)
#endif

#if 1
CheckTypeSize(INT32,0, 1008206, 1, 1.0, NULL, 6, NULL)
#endif

#if 1
CheckTypeSize(INT16,0, 1008207, 1, 1.0, NULL, 11264, NULL)
#endif

#if 1
CheckTypeSize(INT8,0, 1008208, 1, 1.0, NULL, 10505, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/Xmd.h\n\n",pcnt,cnt);
return cnt;
#endif

}
