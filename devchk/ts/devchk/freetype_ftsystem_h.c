/*
 * Test of freetype/ftsystem.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "freetype/ftsystem.h"



#ifdef TET_TEST
void freetype_ftsystem_h()
{
#else
int freetype_ftsystem_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/ftsystem.h\n");
#endif

printf("Checking data structures in freetype/ftsystem.h\n");
#if defined __ia64__
CheckTypeSize(struct FT_MemoryRec_,32, 16726, 3, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_MemoryRec_ on IA64\n");
CheckOffset(struct FT_MemoryRec_,user,0,3,53941)
CheckOffset(struct FT_MemoryRec_,alloc,0,3,53944)
CheckOffset(struct FT_MemoryRec_,free,0,3,53947)
CheckOffset(struct FT_MemoryRec_,realloc,0,3,53952)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct FT_MemoryRec_,16, 16726, 6, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_MemoryRec_ on PPC32\n");
CheckOffset(struct FT_MemoryRec_,user,0,6,53941)
CheckOffset(struct FT_MemoryRec_,alloc,0,6,53944)
CheckOffset(struct FT_MemoryRec_,free,0,6,53947)
CheckOffset(struct FT_MemoryRec_,realloc,0,6,53952)
#elif defined __powerpc64__
CheckTypeSize(struct FT_MemoryRec_,32, 16726, 9, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_MemoryRec_ on PPC64\n");
CheckOffset(struct FT_MemoryRec_,user,0,9,53941)
CheckOffset(struct FT_MemoryRec_,alloc,0,9,53944)
CheckOffset(struct FT_MemoryRec_,free,0,9,53947)
CheckOffset(struct FT_MemoryRec_,realloc,0,9,53952)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct FT_MemoryRec_,16, 16726, 10, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_MemoryRec_ on S390\n");
CheckOffset(struct FT_MemoryRec_,user,0,10,53941)
CheckOffset(struct FT_MemoryRec_,alloc,0,10,53944)
CheckOffset(struct FT_MemoryRec_,free,0,10,53947)
CheckOffset(struct FT_MemoryRec_,realloc,0,10,53952)
#elif defined __x86_64__
CheckTypeSize(struct FT_MemoryRec_,32, 16726, 11, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_MemoryRec_ on x86-64\n");
CheckOffset(struct FT_MemoryRec_,user,0,11,53941)
CheckOffset(struct FT_MemoryRec_,alloc,0,11,53944)
CheckOffset(struct FT_MemoryRec_,free,0,11,53947)
CheckOffset(struct FT_MemoryRec_,realloc,0,11,53952)
#elif defined __s390x__
CheckTypeSize(struct FT_MemoryRec_,32, 16726, 12, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_MemoryRec_ on S390X\n");
CheckOffset(struct FT_MemoryRec_,user,0,12,53941)
CheckOffset(struct FT_MemoryRec_,alloc,0,12,53944)
CheckOffset(struct FT_MemoryRec_,free,0,12,53947)
CheckOffset(struct FT_MemoryRec_,realloc,0,12,53952)
#elif defined __i386__
CheckTypeSize(struct FT_MemoryRec_,12, 16726, 2, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_MemoryRec_ on IA32\n");
CheckOffset(struct FT_MemoryRec_,user,0,2,53941)
CheckOffset(struct FT_MemoryRec_,alloc,0,2,53944)
CheckOffset(struct FT_MemoryRec_,free,0,2,53947)
CheckOffset(struct FT_MemoryRec_,realloc,0,2,53952)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,16726,0);
Msg("Find size of FT_MemoryRec_ (16726)\n");
#endif

#if 1
CheckTypeSize(FT_Memory,0, 16728, 1, 3.2, NULL, 16727, NULL)
#endif

#if 1
CheckTypeSize(FT_Alloc_Func,0, 16730, 1, 3.2, NULL, 16729, NULL)
#endif

#if 1
CheckTypeSize(FT_Free_Func,0, 16732, 1, 3.2, NULL, 16731, NULL)
#endif

#if 1
CheckTypeSize(FT_Realloc_Func,0, 16734, 1, 3.2, NULL, 16733, NULL)
#endif

#if defined __ia64__
CheckTypeSize(struct FT_StreamRec_,0, 16903, 3, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_StreamRec_ on IA64\n");
CheckOffset(struct FT_StreamRec_,base,0,3,54219)
CheckOffset(struct FT_StreamRec_,size,0,3,54220)
CheckOffset(struct FT_StreamRec_,pos,0,3,54221)
CheckOffset(struct FT_StreamRec_,descriptor,0,3,54224)
CheckOffset(struct FT_StreamRec_,pathname,0,3,54225)
CheckOffset(struct FT_StreamRec_,read,0,3,54230)
CheckOffset(struct FT_StreamRec_,close,0,3,54232)
CheckOffset(struct FT_StreamRec_,memory,0,3,54233)
CheckOffset(struct FT_StreamRec_,cursor,0,3,54234)
CheckOffset(struct FT_StreamRec_,limit,0,3,54235)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct FT_StreamRec_,0, 16903, 6, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_StreamRec_ on PPC32\n");
CheckOffset(struct FT_StreamRec_,base,0,6,54219)
CheckOffset(struct FT_StreamRec_,size,0,6,54220)
CheckOffset(struct FT_StreamRec_,pos,0,6,54221)
CheckOffset(struct FT_StreamRec_,descriptor,0,6,54224)
CheckOffset(struct FT_StreamRec_,pathname,0,6,54225)
CheckOffset(struct FT_StreamRec_,read,0,6,54230)
CheckOffset(struct FT_StreamRec_,close,0,6,54232)
CheckOffset(struct FT_StreamRec_,memory,0,6,54233)
CheckOffset(struct FT_StreamRec_,cursor,0,6,54234)
CheckOffset(struct FT_StreamRec_,limit,0,6,54235)
#elif defined __powerpc64__
CheckTypeSize(struct FT_StreamRec_,0, 16903, 9, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_StreamRec_ on PPC64\n");
CheckOffset(struct FT_StreamRec_,base,0,9,54219)
CheckOffset(struct FT_StreamRec_,size,0,9,54220)
CheckOffset(struct FT_StreamRec_,pos,0,9,54221)
CheckOffset(struct FT_StreamRec_,descriptor,0,9,54224)
CheckOffset(struct FT_StreamRec_,pathname,0,9,54225)
CheckOffset(struct FT_StreamRec_,read,0,9,54230)
CheckOffset(struct FT_StreamRec_,close,0,9,54232)
CheckOffset(struct FT_StreamRec_,memory,0,9,54233)
CheckOffset(struct FT_StreamRec_,cursor,0,9,54234)
CheckOffset(struct FT_StreamRec_,limit,0,9,54235)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct FT_StreamRec_,0, 16903, 10, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_StreamRec_ on S390\n");
CheckOffset(struct FT_StreamRec_,base,0,10,54219)
CheckOffset(struct FT_StreamRec_,size,0,10,54220)
CheckOffset(struct FT_StreamRec_,pos,0,10,54221)
CheckOffset(struct FT_StreamRec_,descriptor,0,10,54224)
CheckOffset(struct FT_StreamRec_,pathname,0,10,54225)
CheckOffset(struct FT_StreamRec_,read,0,10,54230)
CheckOffset(struct FT_StreamRec_,close,0,10,54232)
CheckOffset(struct FT_StreamRec_,memory,0,10,54233)
CheckOffset(struct FT_StreamRec_,cursor,0,10,54234)
CheckOffset(struct FT_StreamRec_,limit,0,10,54235)
#elif defined __x86_64__
CheckTypeSize(struct FT_StreamRec_,0, 16903, 11, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_StreamRec_ on x86-64\n");
CheckOffset(struct FT_StreamRec_,base,0,11,54219)
CheckOffset(struct FT_StreamRec_,size,0,11,54220)
CheckOffset(struct FT_StreamRec_,pos,0,11,54221)
CheckOffset(struct FT_StreamRec_,descriptor,0,11,54224)
CheckOffset(struct FT_StreamRec_,pathname,0,11,54225)
CheckOffset(struct FT_StreamRec_,read,0,11,54230)
CheckOffset(struct FT_StreamRec_,close,0,11,54232)
CheckOffset(struct FT_StreamRec_,memory,0,11,54233)
CheckOffset(struct FT_StreamRec_,cursor,0,11,54234)
CheckOffset(struct FT_StreamRec_,limit,0,11,54235)
#elif defined __s390x__
CheckTypeSize(struct FT_StreamRec_,0, 16903, 12, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_StreamRec_ on S390X\n");
CheckOffset(struct FT_StreamRec_,base,0,12,54219)
CheckOffset(struct FT_StreamRec_,size,0,12,54220)
CheckOffset(struct FT_StreamRec_,pos,0,12,54221)
CheckOffset(struct FT_StreamRec_,descriptor,0,12,54224)
CheckOffset(struct FT_StreamRec_,pathname,0,12,54225)
CheckOffset(struct FT_StreamRec_,read,0,12,54230)
CheckOffset(struct FT_StreamRec_,close,0,12,54232)
CheckOffset(struct FT_StreamRec_,memory,0,12,54233)
CheckOffset(struct FT_StreamRec_,cursor,0,12,54234)
CheckOffset(struct FT_StreamRec_,limit,0,12,54235)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,16903,0);
Msg("Find size of FT_StreamRec_ (16903)\n");
#endif

#if 1
CheckTypeSize(union FT_StreamDesc_,4, 16904, 1, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_StreamDesc_ on All\n");
CheckOffset(union FT_StreamDesc_,value,0,1,54222)
CheckOffset(union FT_StreamDesc_,pointer,0,1,54223)
#endif

#if 1
CheckTypeSize(FT_StreamDesc,0, 16905, 1, 3.2, NULL, 16904, NULL)
#endif

#if 1
CheckTypeSize(FT_Stream,0, 16907, 1, 3.2, NULL, 16906, NULL)
#endif

#if 1
CheckTypeSize(FT_Stream_IoFunc,0, 16909, 1, 3.2, NULL, 16908, NULL)
#endif

#if 1
CheckTypeSize(FT_Stream_CloseFunc,0, 16911, 1, 3.2, NULL, 16910, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/ftsystem.h\n\n",pcnt,cnt);
return cnt;
#endif

}
