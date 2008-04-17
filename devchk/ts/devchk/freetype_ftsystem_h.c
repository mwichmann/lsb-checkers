/*
 * Test of freetype/ftsystem.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <ft2build.h>
#include FT_FREETYPE_H

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
CheckMemberSize(struct FT_MemoryRec_,alloc,8,3,53944)
CheckOffset(struct FT_MemoryRec_,alloc,8,3,53944)
CheckMemberSize(struct FT_MemoryRec_,free,8,3,53947)
CheckOffset(struct FT_MemoryRec_,free,16,3,53947)
CheckMemberSize(struct FT_MemoryRec_,realloc,8,3,53952)
CheckOffset(struct FT_MemoryRec_,realloc,24,3,53952)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct FT_MemoryRec_,16, 16726, 6, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_MemoryRec_,alloc,4,6,53944)
CheckOffset(struct FT_MemoryRec_,alloc,4,6,53944)
CheckMemberSize(struct FT_MemoryRec_,free,4,6,53947)
CheckOffset(struct FT_MemoryRec_,free,8,6,53947)
CheckMemberSize(struct FT_MemoryRec_,realloc,4,6,53952)
CheckOffset(struct FT_MemoryRec_,realloc,12,6,53952)
#elif defined __powerpc64__
CheckTypeSize(struct FT_MemoryRec_,32, 16726, 9, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_MemoryRec_,alloc,8,9,53944)
CheckOffset(struct FT_MemoryRec_,alloc,8,9,53944)
CheckMemberSize(struct FT_MemoryRec_,free,8,9,53947)
CheckOffset(struct FT_MemoryRec_,free,16,9,53947)
CheckMemberSize(struct FT_MemoryRec_,realloc,8,9,53952)
CheckOffset(struct FT_MemoryRec_,realloc,24,9,53952)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct FT_MemoryRec_,16, 16726, 10, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_MemoryRec_,alloc,4,10,53944)
CheckOffset(struct FT_MemoryRec_,alloc,4,10,53944)
CheckMemberSize(struct FT_MemoryRec_,free,4,10,53947)
CheckOffset(struct FT_MemoryRec_,free,8,10,53947)
CheckMemberSize(struct FT_MemoryRec_,realloc,4,10,53952)
CheckOffset(struct FT_MemoryRec_,realloc,12,10,53952)
#elif defined __x86_64__
CheckTypeSize(struct FT_MemoryRec_,32, 16726, 11, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_MemoryRec_,alloc,8,11,53944)
CheckOffset(struct FT_MemoryRec_,alloc,8,11,53944)
CheckMemberSize(struct FT_MemoryRec_,free,8,11,53947)
CheckOffset(struct FT_MemoryRec_,free,16,11,53947)
CheckMemberSize(struct FT_MemoryRec_,realloc,8,11,53952)
CheckOffset(struct FT_MemoryRec_,realloc,24,11,53952)
#elif defined __s390x__
CheckTypeSize(struct FT_MemoryRec_,32, 16726, 12, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_MemoryRec_,alloc,8,12,53944)
CheckOffset(struct FT_MemoryRec_,alloc,8,12,53944)
CheckMemberSize(struct FT_MemoryRec_,free,8,12,53947)
CheckOffset(struct FT_MemoryRec_,free,16,12,53947)
CheckMemberSize(struct FT_MemoryRec_,realloc,8,12,53952)
CheckOffset(struct FT_MemoryRec_,realloc,24,12,53952)
#elif defined __i386__
CheckTypeSize(struct FT_MemoryRec_,16, 16726, 2, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_MemoryRec_,alloc,4,2,53944)
CheckOffset(struct FT_MemoryRec_,alloc,4,2,53944)
CheckMemberSize(struct FT_MemoryRec_,free,4,2,53947)
CheckOffset(struct FT_MemoryRec_,free,8,2,53947)
CheckMemberSize(struct FT_MemoryRec_,realloc,4,2,53952)
CheckOffset(struct FT_MemoryRec_,realloc,12,2,53952)
#else
Msg("Find size of FT_MemoryRec_ (16726)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,16726,0);
#endif

#if defined __x86_64__
CheckTypeSize(FT_Memory,8, 16728, 11, 3.2, NULL, 16727, NULL)
#elif defined __i386__
CheckTypeSize(FT_Memory,4, 16728, 2, 3.2, NULL, 16727, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Memory,4, 16728, 10, 3.2, NULL, 16727, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Memory,8, 16728, 12, 3.2, NULL, 16727, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Memory,8, 16728, 3, 3.2, NULL, 16727, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Memory,4, 16728, 6, 3.2, NULL, 16727, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Memory,8, 16728, 9, 3.2, NULL, 16727, NULL)
#else
Msg("Find size of FT_Memory (16728)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16727,NULL);\n",architecture,16728,0);
#endif

#if defined __x86_64__
CheckTypeSize(FT_Alloc_Func,8, 16730, 11, 3.2, NULL, 16729, NULL)
#elif defined __i386__
CheckTypeSize(FT_Alloc_Func,4, 16730, 2, 3.2, NULL, 16729, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Alloc_Func,4, 16730, 10, 3.2, NULL, 16729, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Alloc_Func,8, 16730, 12, 3.2, NULL, 16729, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Alloc_Func,8, 16730, 3, 3.2, NULL, 16729, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Alloc_Func,4, 16730, 6, 3.2, NULL, 16729, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Alloc_Func,8, 16730, 9, 3.2, NULL, 16729, NULL)
#else
Msg("Find size of FT_Alloc_Func (16730)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16729,NULL);\n",architecture,16730,0);
#endif

#if defined __x86_64__
CheckTypeSize(FT_Free_Func,8, 16732, 11, 3.2, NULL, 16731, NULL)
#elif defined __i386__
CheckTypeSize(FT_Free_Func,4, 16732, 2, 3.2, NULL, 16731, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Free_Func,4, 16732, 10, 3.2, NULL, 16731, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Free_Func,8, 16732, 12, 3.2, NULL, 16731, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Free_Func,8, 16732, 3, 3.2, NULL, 16731, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Free_Func,4, 16732, 6, 3.2, NULL, 16731, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Free_Func,8, 16732, 9, 3.2, NULL, 16731, NULL)
#else
Msg("Find size of FT_Free_Func (16732)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16731,NULL);\n",architecture,16732,0);
#endif

#if defined __x86_64__
CheckTypeSize(FT_Realloc_Func,8, 16734, 11, 3.2, NULL, 16733, NULL)
#elif defined __i386__
CheckTypeSize(FT_Realloc_Func,4, 16734, 2, 3.2, NULL, 16733, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Realloc_Func,4, 16734, 10, 3.2, NULL, 16733, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Realloc_Func,8, 16734, 12, 3.2, NULL, 16733, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Realloc_Func,8, 16734, 3, 3.2, NULL, 16733, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Realloc_Func,4, 16734, 6, 3.2, NULL, 16733, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Realloc_Func,8, 16734, 9, 3.2, NULL, 16733, NULL)
#else
Msg("Find size of FT_Realloc_Func (16734)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16733,NULL);\n",architecture,16734,0);
#endif

#if defined __x86_64__
CheckTypeSize(union FT_StreamDesc_,8, 16903, 11, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_StreamDesc_ on x86-64\n");
CheckOffset(union FT_StreamDesc_,value,0,11,54222)
CheckOffset(union FT_StreamDesc_,pointer,0,11,54223)
#elif defined __i386__
CheckTypeSize(union FT_StreamDesc_,4, 16903, 2, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_StreamDesc_ on IA32\n");
CheckOffset(union FT_StreamDesc_,value,0,2,54222)
CheckOffset(union FT_StreamDesc_,pointer,0,2,54223)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(union FT_StreamDesc_,4, 16903, 10, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_StreamDesc_ on S390\n");
CheckOffset(union FT_StreamDesc_,value,0,10,54222)
CheckOffset(union FT_StreamDesc_,pointer,0,10,54223)
#elif defined __s390x__
CheckTypeSize(union FT_StreamDesc_,8, 16903, 12, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_StreamDesc_ on S390X\n");
CheckOffset(union FT_StreamDesc_,value,0,12,54222)
CheckOffset(union FT_StreamDesc_,pointer,0,12,54223)
#elif defined __ia64__
CheckTypeSize(union FT_StreamDesc_,8, 16903, 3, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_StreamDesc_ on IA64\n");
CheckOffset(union FT_StreamDesc_,value,0,3,54222)
CheckOffset(union FT_StreamDesc_,pointer,0,3,54223)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(union FT_StreamDesc_,4, 16903, 6, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_StreamDesc_ on PPC32\n");
CheckOffset(union FT_StreamDesc_,value,0,6,54222)
CheckOffset(union FT_StreamDesc_,pointer,0,6,54223)
#elif defined __powerpc64__
CheckTypeSize(union FT_StreamDesc_,8, 16903, 9, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_StreamDesc_ on PPC64\n");
CheckOffset(union FT_StreamDesc_,value,0,9,54222)
CheckOffset(union FT_StreamDesc_,pointer,0,9,54223)
#else
Msg("Find size of FT_StreamDesc_ (16903)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,16903,0);
#endif

#if defined __ia64__
CheckTypeSize(struct FT_StreamRec_,80, 16904, 3, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_StreamRec_,size,8,3,54220)
CheckOffset(struct FT_StreamRec_,size,8,3,54220)
CheckMemberSize(struct FT_StreamRec_,pos,8,3,54221)
CheckOffset(struct FT_StreamRec_,pos,16,3,54221)
CheckMemberSize(struct FT_StreamRec_,descriptor,8,3,54224)
CheckOffset(struct FT_StreamRec_,descriptor,24,3,54224)
CheckMemberSize(struct FT_StreamRec_,pathname,8,3,54225)
CheckOffset(struct FT_StreamRec_,pathname,32,3,54225)
CheckMemberSize(struct FT_StreamRec_,read,8,3,54230)
CheckOffset(struct FT_StreamRec_,read,40,3,54230)
CheckMemberSize(struct FT_StreamRec_,close,8,3,54232)
CheckOffset(struct FT_StreamRec_,close,48,3,54232)
CheckMemberSize(struct FT_StreamRec_,memory,8,3,54233)
CheckOffset(struct FT_StreamRec_,memory,56,3,54233)
CheckMemberSize(struct FT_StreamRec_,cursor,8,3,54234)
CheckOffset(struct FT_StreamRec_,cursor,64,3,54234)
CheckMemberSize(struct FT_StreamRec_,limit,8,3,54235)
CheckOffset(struct FT_StreamRec_,limit,72,3,54235)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct FT_StreamRec_,40, 16904, 6, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_StreamRec_,size,4,6,54220)
CheckOffset(struct FT_StreamRec_,size,4,6,54220)
CheckMemberSize(struct FT_StreamRec_,pos,4,6,54221)
CheckOffset(struct FT_StreamRec_,pos,8,6,54221)
CheckMemberSize(struct FT_StreamRec_,descriptor,4,6,54224)
CheckOffset(struct FT_StreamRec_,descriptor,12,6,54224)
CheckMemberSize(struct FT_StreamRec_,pathname,4,6,54225)
CheckOffset(struct FT_StreamRec_,pathname,16,6,54225)
CheckMemberSize(struct FT_StreamRec_,read,4,6,54230)
CheckOffset(struct FT_StreamRec_,read,20,6,54230)
CheckMemberSize(struct FT_StreamRec_,close,4,6,54232)
CheckOffset(struct FT_StreamRec_,close,24,6,54232)
CheckMemberSize(struct FT_StreamRec_,memory,4,6,54233)
CheckOffset(struct FT_StreamRec_,memory,28,6,54233)
CheckMemberSize(struct FT_StreamRec_,cursor,4,6,54234)
CheckOffset(struct FT_StreamRec_,cursor,32,6,54234)
CheckMemberSize(struct FT_StreamRec_,limit,4,6,54235)
CheckOffset(struct FT_StreamRec_,limit,36,6,54235)
#elif defined __powerpc64__
CheckTypeSize(struct FT_StreamRec_,80, 16904, 9, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_StreamRec_,size,8,9,54220)
CheckOffset(struct FT_StreamRec_,size,8,9,54220)
CheckMemberSize(struct FT_StreamRec_,pos,8,9,54221)
CheckOffset(struct FT_StreamRec_,pos,16,9,54221)
CheckMemberSize(struct FT_StreamRec_,descriptor,8,9,54224)
CheckOffset(struct FT_StreamRec_,descriptor,24,9,54224)
CheckMemberSize(struct FT_StreamRec_,pathname,8,9,54225)
CheckOffset(struct FT_StreamRec_,pathname,32,9,54225)
CheckMemberSize(struct FT_StreamRec_,read,8,9,54230)
CheckOffset(struct FT_StreamRec_,read,40,9,54230)
CheckMemberSize(struct FT_StreamRec_,close,8,9,54232)
CheckOffset(struct FT_StreamRec_,close,48,9,54232)
CheckMemberSize(struct FT_StreamRec_,memory,8,9,54233)
CheckOffset(struct FT_StreamRec_,memory,56,9,54233)
CheckMemberSize(struct FT_StreamRec_,cursor,8,9,54234)
CheckOffset(struct FT_StreamRec_,cursor,64,9,54234)
CheckMemberSize(struct FT_StreamRec_,limit,8,9,54235)
CheckOffset(struct FT_StreamRec_,limit,72,9,54235)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct FT_StreamRec_,40, 16904, 10, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_StreamRec_,size,4,10,54220)
CheckOffset(struct FT_StreamRec_,size,4,10,54220)
CheckMemberSize(struct FT_StreamRec_,pos,4,10,54221)
CheckOffset(struct FT_StreamRec_,pos,8,10,54221)
CheckMemberSize(struct FT_StreamRec_,descriptor,4,10,54224)
CheckOffset(struct FT_StreamRec_,descriptor,12,10,54224)
CheckMemberSize(struct FT_StreamRec_,pathname,4,10,54225)
CheckOffset(struct FT_StreamRec_,pathname,16,10,54225)
CheckMemberSize(struct FT_StreamRec_,read,4,10,54230)
CheckOffset(struct FT_StreamRec_,read,20,10,54230)
CheckMemberSize(struct FT_StreamRec_,close,4,10,54232)
CheckOffset(struct FT_StreamRec_,close,24,10,54232)
CheckMemberSize(struct FT_StreamRec_,memory,4,10,54233)
CheckOffset(struct FT_StreamRec_,memory,28,10,54233)
CheckMemberSize(struct FT_StreamRec_,cursor,4,10,54234)
CheckOffset(struct FT_StreamRec_,cursor,32,10,54234)
CheckMemberSize(struct FT_StreamRec_,limit,4,10,54235)
CheckOffset(struct FT_StreamRec_,limit,36,10,54235)
#elif defined __x86_64__
CheckTypeSize(struct FT_StreamRec_,80, 16904, 11, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_StreamRec_,size,8,11,54220)
CheckOffset(struct FT_StreamRec_,size,8,11,54220)
CheckMemberSize(struct FT_StreamRec_,pos,8,11,54221)
CheckOffset(struct FT_StreamRec_,pos,16,11,54221)
CheckMemberSize(struct FT_StreamRec_,descriptor,8,11,54224)
CheckOffset(struct FT_StreamRec_,descriptor,24,11,54224)
CheckMemberSize(struct FT_StreamRec_,pathname,8,11,54225)
CheckOffset(struct FT_StreamRec_,pathname,32,11,54225)
CheckMemberSize(struct FT_StreamRec_,read,8,11,54230)
CheckOffset(struct FT_StreamRec_,read,40,11,54230)
CheckMemberSize(struct FT_StreamRec_,close,8,11,54232)
CheckOffset(struct FT_StreamRec_,close,48,11,54232)
CheckMemberSize(struct FT_StreamRec_,memory,8,11,54233)
CheckOffset(struct FT_StreamRec_,memory,56,11,54233)
CheckMemberSize(struct FT_StreamRec_,cursor,8,11,54234)
CheckOffset(struct FT_StreamRec_,cursor,64,11,54234)
CheckMemberSize(struct FT_StreamRec_,limit,8,11,54235)
CheckOffset(struct FT_StreamRec_,limit,72,11,54235)
#elif defined __s390x__
CheckTypeSize(struct FT_StreamRec_,80, 16904, 12, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_StreamRec_,size,8,12,54220)
CheckOffset(struct FT_StreamRec_,size,8,12,54220)
CheckMemberSize(struct FT_StreamRec_,pos,8,12,54221)
CheckOffset(struct FT_StreamRec_,pos,16,12,54221)
CheckMemberSize(struct FT_StreamRec_,descriptor,8,12,54224)
CheckOffset(struct FT_StreamRec_,descriptor,24,12,54224)
CheckMemberSize(struct FT_StreamRec_,pathname,8,12,54225)
CheckOffset(struct FT_StreamRec_,pathname,32,12,54225)
CheckMemberSize(struct FT_StreamRec_,read,8,12,54230)
CheckOffset(struct FT_StreamRec_,read,40,12,54230)
CheckMemberSize(struct FT_StreamRec_,close,8,12,54232)
CheckOffset(struct FT_StreamRec_,close,48,12,54232)
CheckMemberSize(struct FT_StreamRec_,memory,8,12,54233)
CheckOffset(struct FT_StreamRec_,memory,56,12,54233)
CheckMemberSize(struct FT_StreamRec_,cursor,8,12,54234)
CheckOffset(struct FT_StreamRec_,cursor,64,12,54234)
CheckMemberSize(struct FT_StreamRec_,limit,8,12,54235)
CheckOffset(struct FT_StreamRec_,limit,72,12,54235)
#elif defined __i386__
CheckTypeSize(struct FT_StreamRec_,40, 16904, 2, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_StreamRec_,size,4,2,54220)
CheckOffset(struct FT_StreamRec_,size,4,2,54220)
CheckMemberSize(struct FT_StreamRec_,pos,4,2,54221)
CheckOffset(struct FT_StreamRec_,pos,8,2,54221)
CheckMemberSize(struct FT_StreamRec_,descriptor,4,2,54224)
CheckOffset(struct FT_StreamRec_,descriptor,12,2,54224)
CheckMemberSize(struct FT_StreamRec_,pathname,4,2,54225)
CheckOffset(struct FT_StreamRec_,pathname,16,2,54225)
CheckMemberSize(struct FT_StreamRec_,read,4,2,54230)
CheckOffset(struct FT_StreamRec_,read,20,2,54230)
CheckMemberSize(struct FT_StreamRec_,close,4,2,54232)
CheckOffset(struct FT_StreamRec_,close,24,2,54232)
CheckMemberSize(struct FT_StreamRec_,memory,4,2,54233)
CheckOffset(struct FT_StreamRec_,memory,28,2,54233)
CheckMemberSize(struct FT_StreamRec_,cursor,4,2,54234)
CheckOffset(struct FT_StreamRec_,cursor,32,2,54234)
CheckMemberSize(struct FT_StreamRec_,limit,4,2,54235)
CheckOffset(struct FT_StreamRec_,limit,36,2,54235)
#else
Msg("Find size of FT_StreamRec_ (16904)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,16904,0);
#endif

#if defined __x86_64__
CheckTypeSize(FT_StreamDesc,8, 16905, 11, 3.2, NULL, 16903, NULL)
#elif defined __i386__
CheckTypeSize(FT_StreamDesc,4, 16905, 2, 3.2, NULL, 16903, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_StreamDesc,4, 16905, 10, 3.2, NULL, 16903, NULL)
#elif defined __s390x__
CheckTypeSize(FT_StreamDesc,8, 16905, 12, 3.2, NULL, 16903, NULL)
#elif defined __ia64__
CheckTypeSize(FT_StreamDesc,8, 16905, 3, 3.2, NULL, 16903, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_StreamDesc,4, 16905, 6, 3.2, NULL, 16903, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_StreamDesc,8, 16905, 9, 3.2, NULL, 16903, NULL)
#else
Msg("Find size of FT_StreamDesc (16905)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16903,NULL);\n",architecture,16905,0);
#endif

#if defined __x86_64__
CheckTypeSize(FT_Stream,8, 16907, 11, 3.2, NULL, 16906, NULL)
#elif defined __i386__
CheckTypeSize(FT_Stream,4, 16907, 2, 3.2, NULL, 16906, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Stream,4, 16907, 10, 3.2, NULL, 16906, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Stream,8, 16907, 12, 3.2, NULL, 16906, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Stream,8, 16907, 3, 3.2, NULL, 16906, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Stream,4, 16907, 6, 3.2, NULL, 16906, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Stream,8, 16907, 9, 3.2, NULL, 16906, NULL)
#else
Msg("Find size of FT_Stream (16907)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16906,NULL);\n",architecture,16907,0);
#endif

#if defined __x86_64__
CheckTypeSize(FT_Stream_IoFunc,8, 16909, 11, 3.2, NULL, 16908, NULL)
#elif defined __i386__
CheckTypeSize(FT_Stream_IoFunc,4, 16909, 2, 3.2, NULL, 16908, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Stream_IoFunc,4, 16909, 10, 3.2, NULL, 16908, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Stream_IoFunc,8, 16909, 12, 3.2, NULL, 16908, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Stream_IoFunc,8, 16909, 3, 3.2, NULL, 16908, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Stream_IoFunc,4, 16909, 6, 3.2, NULL, 16908, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Stream_IoFunc,8, 16909, 9, 3.2, NULL, 16908, NULL)
#else
Msg("Find size of FT_Stream_IoFunc (16909)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16908,NULL);\n",architecture,16909,0);
#endif

#if defined __x86_64__
CheckTypeSize(FT_Stream_CloseFunc,8, 16911, 11, 3.2, NULL, 16910, NULL)
#elif defined __i386__
CheckTypeSize(FT_Stream_CloseFunc,4, 16911, 2, 3.2, NULL, 16910, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Stream_CloseFunc,4, 16911, 10, 3.2, NULL, 16910, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Stream_CloseFunc,8, 16911, 12, 3.2, NULL, 16910, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Stream_CloseFunc,8, 16911, 3, 3.2, NULL, 16910, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Stream_CloseFunc,4, 16911, 6, 3.2, NULL, 16910, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Stream_CloseFunc,8, 16911, 9, 3.2, NULL, 16910, NULL)
#else
Msg("Find size of FT_Stream_CloseFunc (16911)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16910, NULL);\n",architecture,16911,0);
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
