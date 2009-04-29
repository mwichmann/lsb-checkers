/*
 * Test of nspr4/prtypes.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in nspr4/prtypes.h\n");
#endif

printf("Checking data structures in nspr4/prtypes.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef prtypes_h___
Msg( "Error: Constant not found: prtypes_h___\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(PRInt32,0, 32528, 1, 4.0, NULL, 6, NULL)
#endif

#if 1
CheckTypeSize(PRUword,0, 32548, 1, 4.0, NULL, 9, NULL)
#endif

#if 1
CheckTypeSize(PRIntn,0, 32681, 1, 4.0, NULL, 6, NULL)
#endif

#if 1
CheckTypeSize(PRUint64,0, 33019, 1, 4.0, NULL, 9, NULL)
#endif

#if 1
CheckTypeSize(PRUint8,0, 33104, 1, 4.0, NULL, 3, NULL)
#endif

#if 1
CheckTypeSize(PRInt16,0, 33300, 1, 4.0, NULL, 11264, NULL)
#endif

#if 1
CheckTypeSize(PRInt64,0, 33308, 1, 4.0, NULL, 8, NULL)
#endif

#if 1
CheckTypeSize(PRBool,0, 33449, 1, 4.0, NULL, 32681, NULL)
#endif

#if 1
CheckTypeSize(PRUint16,0, 33482, 1, 4.0, NULL, 5, NULL)
#endif

#if 1
CheckTypeSize(PRUint32,0, 33493, 1, 4.0, NULL, 7, NULL)
#endif

#if 1
CheckTypeSize(PRSize,0, 33607, 1, 4.0, NULL, 8969, NULL)
#endif

#if 1
CheckTypeSize(PRUintn,0, 33801, 1, 4.0, NULL, 7, NULL)
#endif

#if 1
CheckTypeSize(PROffset64,0, 33841, 1, 4.0, NULL, 33308, NULL)
#endif

#if 1
CheckTypeSize(PROffset32,0, 34193, 1, 4.0, NULL, 32528, NULL)
#endif

#if 1
CheckTypeSize(PRStatus,0, 34559, 1, 4.0, NULL, 34762, NULL)
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
