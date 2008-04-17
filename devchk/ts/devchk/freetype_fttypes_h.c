/*
 * Test of freetype/fttypes.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <ft2build.h>
#include FT_FREETYPE_H

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

#if 1
CheckTypeSize(FT_UInt,4, 11171, 1, 3.2, NULL, 7, NULL)
#endif

#if defined __i386__
CheckTypeSize(struct FT_ListRec_,8, 16720, 2, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_ListRec_,tail,4,2,53940)
CheckOffset(struct FT_ListRec_,tail,4,2,53940)
#elif defined __x86_64__
CheckTypeSize(struct FT_ListRec_,16, 16720, 11, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_ListRec_,tail,8,11,53940)
CheckOffset(struct FT_ListRec_,tail,8,11,53940)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct FT_ListRec_,8, 16720, 10, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_ListRec_,tail,4,10,53940)
CheckOffset(struct FT_ListRec_,tail,4,10,53940)
#elif defined __s390x__
CheckTypeSize(struct FT_ListRec_,16, 16720, 12, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_ListRec_,tail,8,12,53940)
CheckOffset(struct FT_ListRec_,tail,8,12,53940)
#elif defined __ia64__
CheckTypeSize(struct FT_ListRec_,16, 16720, 3, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_ListRec_,tail,8,3,53940)
CheckOffset(struct FT_ListRec_,tail,8,3,53940)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct FT_ListRec_,8, 16720, 6, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_ListRec_,tail,4,6,53940)
CheckOffset(struct FT_ListRec_,tail,4,6,53940)
#elif defined __powerpc64__
CheckTypeSize(struct FT_ListRec_,16, 16720, 9, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_ListRec_,tail,8,9,53940)
CheckOffset(struct FT_ListRec_,tail,8,9,53940)
#else
Msg("Find size of FT_ListRec_ (16720)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,16720,0);
#endif

#if defined __i386__
CheckTypeSize(struct FT_ListNodeRec_,12, 16721, 2, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_ListNodeRec_,next,4,2,53937)
CheckOffset(struct FT_ListNodeRec_,next,4,2,53937)
CheckMemberSize(struct FT_ListNodeRec_,data,4,2,53938)
CheckOffset(struct FT_ListNodeRec_,data,8,2,53938)
#elif defined __x86_64__
CheckTypeSize(struct FT_ListNodeRec_,24, 16721, 11, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_ListNodeRec_,next,8,11,53937)
CheckOffset(struct FT_ListNodeRec_,next,8,11,53937)
CheckMemberSize(struct FT_ListNodeRec_,data,8,11,53938)
CheckOffset(struct FT_ListNodeRec_,data,16,11,53938)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct FT_ListNodeRec_,12, 16721, 10, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_ListNodeRec_,next,4,10,53937)
CheckOffset(struct FT_ListNodeRec_,next,4,10,53937)
CheckMemberSize(struct FT_ListNodeRec_,data,4,10,53938)
CheckOffset(struct FT_ListNodeRec_,data,8,10,53938)
#elif defined __s390x__
CheckTypeSize(struct FT_ListNodeRec_,24, 16721, 12, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_ListNodeRec_,next,8,12,53937)
CheckOffset(struct FT_ListNodeRec_,next,8,12,53937)
CheckMemberSize(struct FT_ListNodeRec_,data,8,12,53938)
CheckOffset(struct FT_ListNodeRec_,data,16,12,53938)
#elif defined __ia64__
CheckTypeSize(struct FT_ListNodeRec_,24, 16721, 3, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_ListNodeRec_,next,8,3,53937)
CheckOffset(struct FT_ListNodeRec_,next,8,3,53937)
CheckMemberSize(struct FT_ListNodeRec_,data,8,3,53938)
CheckOffset(struct FT_ListNodeRec_,data,16,3,53938)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct FT_ListNodeRec_,12, 16721, 6, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_ListNodeRec_,next,4,6,53937)
CheckOffset(struct FT_ListNodeRec_,next,4,6,53937)
CheckMemberSize(struct FT_ListNodeRec_,data,4,6,53938)
CheckOffset(struct FT_ListNodeRec_,data,8,6,53938)
#elif defined __powerpc64__
CheckTypeSize(struct FT_ListNodeRec_,24, 16721, 9, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_ListNodeRec_,next,8,9,53937)
CheckOffset(struct FT_ListNodeRec_,next,8,9,53937)
CheckMemberSize(struct FT_ListNodeRec_,data,8,9,53938)
CheckOffset(struct FT_ListNodeRec_,data,16,9,53938)
#else
Msg("Find size of FT_ListNodeRec_ (16721)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,16721,0);
#endif

#if defined __i386__
CheckTypeSize(FT_ListNode,4, 16723, 2, 3.2, NULL, 16722, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_ListNode,8, 16723, 11, 3.2, NULL, 16722, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_ListNode,4, 16723, 10, 3.2, NULL, 16722, NULL)
#elif defined __s390x__
CheckTypeSize(FT_ListNode,8, 16723, 12, 3.2, NULL, 16722, NULL)
#elif defined __ia64__
CheckTypeSize(FT_ListNode,8, 16723, 3, 3.2, NULL, 16722, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_ListNode,4, 16723, 6, 3.2, NULL, 16722, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_ListNode,8, 16723, 9, 3.2, NULL, 16722, NULL)
#else
Msg("Find size of FT_ListNode (16723)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16722,NULL);\n",architecture,16723,0);
#endif

#if defined __i386__
CheckTypeSize(FT_List,4, 16725, 2, 3.2, NULL, 16724, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_List,8, 16725, 11, 3.2, NULL, 16724, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_List,4, 16725, 10, 3.2, NULL, 16724, NULL)
#elif defined __s390x__
CheckTypeSize(FT_List,8, 16725, 12, 3.2, NULL, 16724, NULL)
#elif defined __ia64__
CheckTypeSize(FT_List,8, 16725, 3, 3.2, NULL, 16724, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_List,4, 16725, 6, 3.2, NULL, 16724, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_List,8, 16725, 9, 3.2, NULL, 16724, NULL)
#else
Msg("Find size of FT_List (16725)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16724,NULL);\n",architecture,16725,0);
#endif

#if 1
CheckTypeSize(FT_Error,4, 16737, 1, 3.2, NULL, 6, NULL)
#endif

#if defined __i386__
CheckTypeSize(struct FT_Generic_,8, 16748, 2, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Generic_,finalizer,4,2,53968)
CheckOffset(struct FT_Generic_,finalizer,4,2,53968)
#elif defined __x86_64__
CheckTypeSize(struct FT_Generic_,16, 16748, 11, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Generic_,finalizer,8,11,53968)
CheckOffset(struct FT_Generic_,finalizer,8,11,53968)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct FT_Generic_,8, 16748, 10, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Generic_,finalizer,4,10,53968)
CheckOffset(struct FT_Generic_,finalizer,4,10,53968)
#elif defined __s390x__
CheckTypeSize(struct FT_Generic_,16, 16748, 12, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Generic_,finalizer,8,12,53968)
CheckOffset(struct FT_Generic_,finalizer,8,12,53968)
#elif defined __ia64__
CheckTypeSize(struct FT_Generic_,16, 16748, 3, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Generic_,finalizer,8,3,53968)
CheckOffset(struct FT_Generic_,finalizer,8,3,53968)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct FT_Generic_,8, 16748, 6, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Generic_,finalizer,4,6,53968)
CheckOffset(struct FT_Generic_,finalizer,4,6,53968)
#elif defined __powerpc64__
CheckTypeSize(struct FT_Generic_,16, 16748, 9, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Generic_,finalizer,8,9,53968)
CheckOffset(struct FT_Generic_,finalizer,8,9,53968)
#else
Msg("Find size of FT_Generic_ (16748)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,16748,0);
#endif

#if defined __i386__
CheckTypeSize(FT_Generic_Finalizer,4, 16749, 2, 3.2, NULL, 6988, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Generic_Finalizer,8, 16749, 11, 3.2, NULL, 6988, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Generic_Finalizer,4, 16749, 10, 3.2, NULL, 6988, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Generic_Finalizer,8, 16749, 12, 3.2, NULL, 6988, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Generic_Finalizer,8, 16749, 3, 3.2, NULL, 6988, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Generic_Finalizer,4, 16749, 6, 3.2, NULL, 6988, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Generic_Finalizer,8, 16749, 9, 3.2, NULL, 6988, NULL)
#else
Msg("Find size of FT_Generic_Finalizer (16749)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,6988,NULL);\n",architecture,16749,0);
#endif

#if defined __i386__
CheckTypeSize(FT_Generic,8, 16750, 2, 3.2, NULL, 16748, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Generic,16, 16750, 11, 3.2, NULL, 16748, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Generic,8, 16750, 10, 3.2, NULL, 16748, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Generic,16, 16750, 12, 3.2, NULL, 16748, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Generic,16, 16750, 3, 3.2, NULL, 16748, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Generic,8, 16750, 6, 3.2, NULL, 16748, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Generic,16, 16750, 9, 3.2, NULL, 16748, NULL)
#else
Msg("Find size of FT_Generic (16750)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16748,NULL);\n",architecture,16750,0);
#endif

#if 1
CheckTypeSize(FT_Int,4, 16751, 1, 3.2, NULL, 6, NULL)
#endif

#if defined __x86_64__
CheckTypeSize(FT_ULong,8, 16754, 11, 3.2, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(FT_ULong,4, 16754, 2, 3.2, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_ULong,4, 16754, 10, 3.2, NULL, 11186, NULL)
#elif defined __s390x__
CheckTypeSize(FT_ULong,8, 16754, 12, 3.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(FT_ULong,8, 16754, 3, 3.2, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_ULong,4, 16754, 6, 3.2, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_ULong,8, 16754, 9, 3.2, NULL, 11186, NULL)
#else
Msg("Find size of FT_ULong (16754)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,11186,NULL);\n",architecture,16754,0);
#endif

#if defined __x86_64__
CheckTypeSize(FT_Long,8, 16755, 11, 3.2, NULL, 8, NULL)
#elif defined __i386__
CheckTypeSize(FT_Long,4, 16755, 2, 3.2, NULL, 8, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Long,4, 16755, 10, 3.2, NULL, 8, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Long,8, 16755, 12, 3.2, NULL, 8, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Long,8, 16755, 3, 3.2, NULL, 8, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Long,4, 16755, 6, 3.2, NULL, 8, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Long,8, 16755, 9, 3.2, NULL, 8, NULL)
#else
Msg("Find size of FT_Long (16755)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,8,NULL);\n",architecture,16755,0);
#endif

#if 1
CheckTypeSize(FT_String,1, 16756, 1, 3.2, NULL, 2, NULL)
#endif

#if defined __x86_64__
CheckTypeSize(FT_Fixed,8, 16759, 11, 3.2, NULL, 8, NULL)
#elif defined __i386__
CheckTypeSize(FT_Fixed,4, 16759, 2, 3.2, NULL, 8, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Fixed,4, 16759, 10, 3.2, NULL, 8, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Fixed,8, 16759, 12, 3.2, NULL, 8, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Fixed,8, 16759, 3, 3.2, NULL, 8, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Fixed,4, 16759, 6, 3.2, NULL, 8, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Fixed,8, 16759, 9, 3.2, NULL, 8, NULL)
#else
Msg("Find size of FT_Fixed (16759)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,8,NULL);\n",architecture,16759,0);
#endif

#if defined __x86_64__
CheckTypeSize(FT_Pointer,8, 16766, 11, 3.2, NULL, 40, NULL)
#elif defined __i386__
CheckTypeSize(FT_Pointer,4, 16766, 2, 3.2, NULL, 40, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Pointer,4, 16766, 10, 3.2, NULL, 40, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Pointer,8, 16766, 12, 3.2, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Pointer,8, 16766, 3, 3.2, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Pointer,4, 16766, 6, 3.2, NULL, 40, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Pointer,8, 16766, 9, 3.2, NULL, 40, NULL)
#else
Msg("Find size of FT_Pointer (16766)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,40,NULL);\n",architecture,16766,0);
#endif

#if defined __x86_64__
CheckTypeSize(FT_ListRec,16, 16775, 11, 3.2, NULL, 16720, NULL)
#elif defined __i386__
CheckTypeSize(FT_ListRec,8, 16775, 2, 3.2, NULL, 16720, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_ListRec,8, 16775, 10, 3.2, NULL, 16720, NULL)
#elif defined __s390x__
CheckTypeSize(FT_ListRec,16, 16775, 12, 3.2, NULL, 16720, NULL)
#elif defined __ia64__
CheckTypeSize(FT_ListRec,16, 16775, 3, 3.2, NULL, 16720, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_ListRec,8, 16775, 6, 3.2, NULL, 16720, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_ListRec,16, 16775, 9, 3.2, NULL, 16720, NULL)
#else
Msg("Find size of FT_ListRec (16775)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16720,NULL);\n",architecture,16775,0);
#endif

#if 1
CheckTypeSize(FT_UShort,2, 16789, 1, 3.2, NULL, 11209, NULL)
#endif

#if defined __x86_64__
CheckTypeSize(struct FT_Matrix_,32, 16790, 11, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Matrix_,xy,8,11,54029)
CheckOffset(struct FT_Matrix_,xy,8,11,54029)
CheckMemberSize(struct FT_Matrix_,yx,8,11,54030)
CheckOffset(struct FT_Matrix_,yx,16,11,54030)
CheckMemberSize(struct FT_Matrix_,yy,8,11,54031)
CheckOffset(struct FT_Matrix_,yy,24,11,54031)
#elif defined __i386__
CheckTypeSize(struct FT_Matrix_,16, 16790, 2, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Matrix_,xy,4,2,54029)
CheckOffset(struct FT_Matrix_,xy,4,2,54029)
CheckMemberSize(struct FT_Matrix_,yx,4,2,54030)
CheckOffset(struct FT_Matrix_,yx,8,2,54030)
CheckMemberSize(struct FT_Matrix_,yy,4,2,54031)
CheckOffset(struct FT_Matrix_,yy,12,2,54031)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct FT_Matrix_,16, 16790, 10, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Matrix_,xy,4,10,54029)
CheckOffset(struct FT_Matrix_,xy,4,10,54029)
CheckMemberSize(struct FT_Matrix_,yx,4,10,54030)
CheckOffset(struct FT_Matrix_,yx,8,10,54030)
CheckMemberSize(struct FT_Matrix_,yy,4,10,54031)
CheckOffset(struct FT_Matrix_,yy,12,10,54031)
#elif defined __s390x__
CheckTypeSize(struct FT_Matrix_,32, 16790, 12, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Matrix_,xy,8,12,54029)
CheckOffset(struct FT_Matrix_,xy,8,12,54029)
CheckMemberSize(struct FT_Matrix_,yx,8,12,54030)
CheckOffset(struct FT_Matrix_,yx,16,12,54030)
CheckMemberSize(struct FT_Matrix_,yy,8,12,54031)
CheckOffset(struct FT_Matrix_,yy,24,12,54031)
#elif defined __ia64__
CheckTypeSize(struct FT_Matrix_,32, 16790, 3, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Matrix_,xy,8,3,54029)
CheckOffset(struct FT_Matrix_,xy,8,3,54029)
CheckMemberSize(struct FT_Matrix_,yx,8,3,54030)
CheckOffset(struct FT_Matrix_,yx,16,3,54030)
CheckMemberSize(struct FT_Matrix_,yy,8,3,54031)
CheckOffset(struct FT_Matrix_,yy,24,3,54031)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct FT_Matrix_,16, 16790, 6, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Matrix_,xy,4,6,54029)
CheckOffset(struct FT_Matrix_,xy,4,6,54029)
CheckMemberSize(struct FT_Matrix_,yx,4,6,54030)
CheckOffset(struct FT_Matrix_,yx,8,6,54030)
CheckMemberSize(struct FT_Matrix_,yy,4,6,54031)
CheckOffset(struct FT_Matrix_,yy,12,6,54031)
#elif defined __powerpc64__
CheckTypeSize(struct FT_Matrix_,32, 16790, 9, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Matrix_,xy,8,9,54029)
CheckOffset(struct FT_Matrix_,xy,8,9,54029)
CheckMemberSize(struct FT_Matrix_,yx,8,9,54030)
CheckOffset(struct FT_Matrix_,yx,16,9,54030)
CheckMemberSize(struct FT_Matrix_,yy,8,9,54031)
CheckOffset(struct FT_Matrix_,yy,24,9,54031)
#else
Msg("Find size of FT_Matrix_ (16790)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,16790,0);
#endif

#if defined __x86_64__
CheckTypeSize(FT_Matrix,32, 16791, 11, 3.2, NULL, 16790, NULL)
#elif defined __i386__
CheckTypeSize(FT_Matrix,16, 16791, 2, 3.2, NULL, 16790, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Matrix,16, 16791, 10, 3.2, NULL, 16790, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Matrix,32, 16791, 12, 3.2, NULL, 16790, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Matrix,32, 16791, 3, 3.2, NULL, 16790, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Matrix,16, 16791, 6, 3.2, NULL, 16790, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Matrix,32, 16791, 9, 3.2, NULL, 16790, NULL)
#else
Msg("Find size of FT_Matrix (16791)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16790,NULL);\n",architecture,16791,0);
#endif

#if 1
CheckTypeSize(FT_Bool,1, 16796, 1, 3.2, NULL, 3, NULL)
#endif

#if 1
CheckTypeSize(FT_Byte,1, 16866, 1, 3.2, NULL, 3, NULL)
#endif

#if 1
CheckTypeSize(FT_Int32,4, 16894, 1, 3.2, NULL, 6, NULL)
#endif

#if 1
CheckTypeSize(FT_UInt32,4, 16930, 1, 3.2, NULL, 7, NULL)
#endif

#if defined __x86_64__
CheckTypeSize(FT_Bytes,8, 16978, 11, 3.2, NULL, 16896, NULL)
#elif defined __i386__
CheckTypeSize(FT_Bytes,4, 16978, 2, 3.2, NULL, 16896, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Bytes,4, 16978, 10, 3.2, NULL, 16896, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Bytes,8, 16978, 12, 3.2, NULL, 16896, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Bytes,8, 16978, 3, 3.2, NULL, 16896, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Bytes,4, 16978, 6, 3.2, NULL, 16896, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Bytes,8, 16978, 9, 3.2, NULL, 16896, NULL)
#else
Msg("Find size of FT_Bytes (16978)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16896,NULL);\n",architecture,16978,0);
#endif

#if 1
CheckTypeSize(FT_Short,2, 16981, 1, 3.2, NULL, 11264, NULL)
#endif

#if defined __x86_64__
CheckTypeSize(FT_ListNodeRec,24, 22171, 11, 3.2, NULL, 16721, NULL)
#elif defined __i386__
CheckTypeSize(FT_ListNodeRec,12, 22171, 2, 3.2, NULL, 16721, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_ListNodeRec,12, 22171, 10, 3.2, NULL, 16721, NULL)
#elif defined __s390x__
CheckTypeSize(FT_ListNodeRec,24, 22171, 12, 3.2, NULL, 16721, NULL)
#elif defined __ia64__
CheckTypeSize(FT_ListNodeRec,24, 22171, 3, 3.2, NULL, 16721, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_ListNodeRec,12, 22171, 6, 3.2, NULL, 16721, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_ListNodeRec,24, 22171, 9, 3.2, NULL, 16721, NULL)
#else
Msg("Find size of FT_ListNodeRec (22171)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16721, NULL);\n",architecture,22171,0);
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
