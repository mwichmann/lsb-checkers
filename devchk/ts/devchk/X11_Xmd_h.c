/*
 * Test of X11/Xmd.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/Xmd.h\n");
#endif

printf("Checking data structures in X11/Xmd.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for B16 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for B32 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for NEXTPTR(p,t) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _SIZEOF(x) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SIZEOF(x) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for cvtINT8toInt(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for cvtINT16toInt(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for cvtINT32toInt(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for cvtINT8toShort(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for cvtINT16toShort(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for cvtINT32toShort(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for cvtINT8toLong(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for cvtINT16toLong(val) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for cvtINT32toLong(val) */
#endif

#if 1
CheckTypeSize(CARD16,0, 8957, 1, 1.0, NULL, 5, NULL)
#endif

#if 1
CheckTypeSize(CARD8,0, 8958, 1, 1.0, NULL, 3, NULL)
#endif

#if 1
CheckTypeSize(BOOL,0, 8959, 1, 1.0, NULL, 8958, NULL)
#endif

#if defined __s390x__
CheckTypeSize(CARD32,0, 35866, 12, 1.0, NULL, 7, NULL)
#elif defined __x86_64__
CheckTypeSize(CARD32,0, 35866, 11, 1.0, NULL, 7, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(CARD32,0, 35866, 10, 1.0, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(CARD32,0, 35866, 9, 1.0, NULL, 7, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(CARD32,0, 35866, 6, 1.0, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(CARD32,0, 35866, 3, 1.0, NULL, 7, NULL)
#elif defined __i386__
CheckTypeSize(CARD32,0, 35866, 2, 1.0, NULL, 9, NULL)
#endif

#if defined __s390x__
CheckTypeSize(CARD64,0, 35867, 12, 1.0, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(CARD64,0, 35867, 11, 1.0, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(CARD64,0, 35867, 9, 1.0, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(CARD64,0, 35867, 3, 1.0, NULL, 9, NULL)
#endif

#if 1
CheckTypeSize(BYTE,0, 35868, 1, 1.0, NULL, 3, NULL)
#endif

#if 1
CheckTypeSize(BITS32,0, 35870, 1, 1.0, NULL, 35866, NULL)
#endif

#if 1
CheckTypeSize(BITS16,0, 35871, 1, 1.0, NULL, 8957, NULL)
#endif

#if defined __s390x__
CheckTypeSize(INT64,0, 36116, 12, 1.0, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(INT64,0, 36116, 11, 1.0, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(INT64,0, 36116, 9, 1.0, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(INT64,0, 36116, 3, 1.0, NULL, 9, NULL)
#endif

#if 1
CheckTypeSize(INT32,0, 36117, 1, 1.0, NULL, 6, NULL)
#endif

#if 1
CheckTypeSize(INT16,0, 36118, 1, 1.0, NULL, 11264, NULL)
#endif

#if 1
CheckTypeSize(INT8,0, 36119, 1, 1.0, NULL, 10505, NULL)
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
