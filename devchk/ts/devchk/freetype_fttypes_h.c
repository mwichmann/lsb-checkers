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
CheckTypeSize(struct FT_ListRec_,8, 16720, 1, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_ListRec_ on All\n");
CheckOffset(struct FT_ListRec_,head,0,1,53939)
CheckOffset(struct FT_ListRec_,tail,0,1,53940)
#endif

#if 1
CheckTypeSize(struct FT_ListNodeRec_,12, 16721, 1, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_ListNodeRec_ on All\n");
CheckOffset(struct FT_ListNodeRec_,prev,0,1,53936)
CheckOffset(struct FT_ListNodeRec_,next,0,1,53937)
CheckOffset(struct FT_ListNodeRec_,data,0,1,53938)
#endif

#if 1
CheckTypeSize(FT_ListNode,0, 16723, 1, 3.2, NULL, 16722, NULL)
#endif

#if 1
CheckTypeSize(FT_List,0, 16725, 1, 3.2, NULL, 16724, NULL)
#endif

#if 1
CheckTypeSize(FT_Error,0, 16737, 1, 3.2, NULL, 6, NULL)
#endif

#if 1
CheckTypeSize(struct FT_Generic_,8, 16748, 1, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_Generic_ on All\n");
CheckOffset(struct FT_Generic_,data,0,1,53967)
CheckOffset(struct FT_Generic_,finalizer,0,1,53968)
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
CheckTypeSize(FT_ListRec,0, 16775, 1, 3.2, NULL, 16720, NULL)
#endif

#if 1
CheckTypeSize(FT_UShort,0, 16789, 1, 3.2, NULL, 11209, NULL)
#endif

#if 1
CheckTypeSize(struct FT_Matrix_,16, 16790, 1, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_Matrix_ on All\n");
CheckOffset(struct FT_Matrix_,xx,0,1,54028)
CheckOffset(struct FT_Matrix_,xy,0,1,54029)
CheckOffset(struct FT_Matrix_,yx,0,1,54030)
CheckOffset(struct FT_Matrix_,yy,0,1,54031)
#endif

#if 1
CheckTypeSize(FT_Matrix,0, 16791, 1, 3.2, NULL, 16790, NULL)
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

#if 1
CheckTypeSize(FT_ListNodeRec,0, 22171, 1, 3.2, NULL, 16721, NULL)
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
