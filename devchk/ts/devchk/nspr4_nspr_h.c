/*
 * Test of nspr4/nspr.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nspr4/nspr.h"



#ifdef TET_TEST
void nspr4_nspr_h()
{
#else
int nspr4_nspr_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nspr4/nspr.h\n");
#endif

printf("Checking data structures in nspr4/nspr.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for nspr4/nspr.h depends on nspr4/prclist.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for nspr4/nspr.h depends on nspr4/prerror.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for nspr4/nspr.h depends on nspr4/prinit.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for nspr4/nspr.h depends on nspr4/prinrval.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for nspr4/nspr.h depends on nspr4/prio.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for nspr4/nspr.h depends on nspr4/prlock.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for nspr4/nspr.h depends on nspr4/prmon.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for nspr4/nspr.h depends on nspr4/prnetdb.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for nspr4/nspr.h depends on nspr4/prthread.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for nspr4/nspr.h depends on nspr4/prtime.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for nspr4/nspr.h depends on nspr4/prtypes.h */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nspr4/nspr.h\n\n",pcnt,cnt);
return cnt;
#endif

}
