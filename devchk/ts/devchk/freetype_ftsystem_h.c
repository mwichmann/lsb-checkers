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
CheckTypeSize(struct FT_MemoryRec_,0, 16726, 3, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_MemoryRec_ on IA64\n");
CheckOffset(struct FT_MemoryRec_,user,0,3,53941)
CheckOffset(struct FT_MemoryRec_,alloc,0,3,53944)
CheckOffset(struct FT_MemoryRec_,free,0,3,53947)
CheckOffset(struct FT_MemoryRec_,realloc,0,3,53952)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct FT_MemoryRec_,0, 16726, 6, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_MemoryRec_ on PPC32\n");
CheckOffset(struct FT_MemoryRec_,user,0,6,53941)
CheckOffset(struct FT_MemoryRec_,alloc,0,6,53944)
CheckOffset(struct FT_MemoryRec_,free,0,6,53947)
CheckOffset(struct FT_MemoryRec_,realloc,0,6,53952)
#elif defined __powerpc64__
CheckTypeSize(struct FT_MemoryRec_,0, 16726, 9, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_MemoryRec_ on PPC64\n");
CheckOffset(struct FT_MemoryRec_,user,0,9,53941)
CheckOffset(struct FT_MemoryRec_,alloc,0,9,53944)
CheckOffset(struct FT_MemoryRec_,free,0,9,53947)
CheckOffset(struct FT_MemoryRec_,realloc,0,9,53952)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct FT_MemoryRec_,0, 16726, 10, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_MemoryRec_ on S390\n");
CheckOffset(struct FT_MemoryRec_,user,0,10,53941)
CheckOffset(struct FT_MemoryRec_,alloc,0,10,53944)
CheckOffset(struct FT_MemoryRec_,free,0,10,53947)
CheckOffset(struct FT_MemoryRec_,realloc,0,10,53952)
#elif defined __x86_64__
CheckTypeSize(struct FT_MemoryRec_,0, 16726, 11, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_MemoryRec_ on x86-64\n");
CheckOffset(struct FT_MemoryRec_,user,0,11,53941)
CheckOffset(struct FT_MemoryRec_,alloc,0,11,53944)
CheckOffset(struct FT_MemoryRec_,free,0,11,53947)
CheckOffset(struct FT_MemoryRec_,realloc,0,11,53952)
#elif defined __s390x__
CheckTypeSize(struct FT_MemoryRec_,0, 16726, 12, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_MemoryRec_ on S390X\n");
CheckOffset(struct FT_MemoryRec_,user,0,12,53941)
CheckOffset(struct FT_MemoryRec_,alloc,0,12,53944)
CheckOffset(struct FT_MemoryRec_,free,0,12,53947)
CheckOffset(struct FT_MemoryRec_,realloc,0,12,53952)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0, NULL);\n",architecture,16726,0);
Msg("Find size of FT_MemoryRec_ (16726)\n");
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
