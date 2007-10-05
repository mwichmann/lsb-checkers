/*
 * Test of freetype/fttypes.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "freetype/fttypes.h"



#ifdef TET_TEST
void freetype_fttypes_h()
{
#else
int freetype_fttypes_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/fttypes.h\n");
#endif

printf("Checking data structures in freetype/fttypes.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for FT_BOOL(x) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERROR_BASE(x) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERROR_MODULE(x) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_IS_EMPTY(list) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_MAKE_TAG(_x1,_x2,_x3,_x4) */
#endif

#if defined __i386__
CheckTypeSize(FT_UInt,0, 11171, 2, 3.2, NULL, 7, NULL)
#elif defined __ia64__
CheckTypeSize(FT_UInt,0, 11171, 3, 3.2, NULL, 7, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_UInt,0, 11171, 6, 3.2, NULL, 7, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_UInt,0, 11171, 9, 3.2, NULL, 7, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_UInt,0, 11171, 10, 3.2, NULL, 7, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_UInt,0, 11171, 11, 3.2, NULL, 7, NULL)
#elif defined __s390x__
CheckTypeSize(FT_UInt,0, 11171, 12, 3.2, NULL, 7, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,7,NULL);\n",architecture,11171,0);
Msg("Find size of FT_UInt (11171)\n");
#endif

#if 1
CheckTypeSize(FT_Error,0, 16737, 1, 3.2, NULL, 6, NULL)
#endif

#if 1
CheckTypeSize(FT_Generic_Finalizer,0, 16749, 1, 3.2, NULL, 6988, NULL)
#endif

#if 1
CheckTypeSize(FT_Generic,0, 16750, 1, 3.2, NULL, 16748, NULL)
#endif

#if 1
CheckTypeSize(FT_Int,0, 16751, 1, 3.2, NULL, 6, NULL)
#endif

#if 1
CheckTypeSize(FT_ULong,0, 16754, 1, 3.2, NULL, 11186, NULL)
#endif

#if 1
CheckTypeSize(FT_Long,0, 16755, 1, 3.2, NULL, 8, NULL)
#endif

#if 1
CheckTypeSize(FT_String,0, 16756, 1, 3.2, NULL, 2, NULL)
#endif

#if 1
CheckTypeSize(FT_Fixed,0, 16759, 1, 3.2, NULL, 8, NULL)
#endif

#if 1
CheckTypeSize(FT_Pointer,0, 16766, 1, 3.2, NULL, 40, NULL)
#endif

#if 1
CheckTypeSize(FT_UShort,0, 16789, 1, 3.2, NULL, 11209, NULL)
#endif

#if 1
CheckTypeSize(FT_Bool,0, 16796, 1, 3.2, NULL, 3, NULL)
#endif

#if 1
CheckTypeSize(FT_Byte,0, 16866, 1, 3.2, NULL, 3, NULL)
#endif

#if 1
CheckTypeSize(FT_Bytes,0, 16978, 1, 3.2, NULL, 16896, NULL)
#endif

#if 1
CheckTypeSize(FT_Short,0, 16981, 1, 3.2, NULL, 11264, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/fttypes.h\n\n",pcnt,cnt);
return cnt;
#endif

}
