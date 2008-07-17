/*
 * Test of nspr4/prtypes.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nspr4/prtypes.h"



#ifdef TET_TEST
void nspr4_prtypes_h()
{
#else
int nspr4_prtypes_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nspr4/prtypes.h\n");
#endif

printf("Checking data structures in nspr4/prtypes.h\n");
#if 1
CheckTypeSize(PRInt32,0, 1000298, 1, 4.0, NULL, 6, NULL)
#endif

#if 1
CheckTypeSize(PRUword,0, 1000338, 1, 4.0, NULL, 9, NULL)
#endif

#if 1
CheckTypeSize(PRIntn,0, 1000699, 1, 4.0, NULL, 6, NULL)
#endif

#if 1
CheckTypeSize(PRUint64,0, 1001523, 1, 4.0, NULL, 9, NULL)
#endif

#if 1
CheckTypeSize(PRUint8,0, 1001694, 1, 4.0, NULL, 3, NULL)
#endif

#if 1
CheckTypeSize(PRInt16,0, 1002148, 1, 4.0, NULL, 11264, NULL)
#endif

#if 1
CheckTypeSize(PRInt64,0, 1002180, 1, 4.0, NULL, 8, NULL)
#endif

#if 1
CheckTypeSize(PRBool,0, 1002551, 1, 4.0, NULL, 1000699, NULL)
#endif

#if 1
CheckTypeSize(PRUint16,0, 1002617, 1, 4.0, NULL, 5, NULL)
#endif

#if 1
CheckTypeSize(PRUint32,0, 1002647, 1, 4.0, NULL, 7, NULL)
#endif

#if 1
CheckTypeSize(PRSize,0, 1002905, 1, 4.0, NULL, 8969, NULL)
#endif

#if 1
CheckTypeSize(PRUintn,0, 1003369, 1, 4.0, NULL, 7, NULL)
#endif

#if 1
CheckTypeSize(PROffset64,0, 1003456, 1, 4.0, NULL, 1002180, NULL)
#endif

#if 1
CheckTypeSize(PROffset32,0, 1004266, 1, 4.0, NULL, 1000298, NULL)
#endif

#if 1
CheckTypeSize(PRStatus,0, 1005097, 1, 4.0, NULL, 1005535, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nspr4/prtypes.h\n\n",pcnt,cnt);
return cnt;
#endif

}
