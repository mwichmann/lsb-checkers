/*
 * Test of freetype/ftsnames.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <ft2build.h>
#include FT_FREETYPE_H

#include "freetype/ftsnames.h"



#ifdef TET_TEST
void freetype_ftsnames_h()
{
#else
int freetype_ftsnames_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/ftsnames.h\n");
#endif

printf("Checking data structures in freetype/ftsnames.h\n");
#if defined __x86_64__
CheckTypeSize(FT_SfntName,24, 16963, 11, 3.2, NULL, 16962, NULL)
#elif defined __i386__
CheckTypeSize(FT_SfntName,16, 16963, 2, 3.2, NULL, 16962, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_SfntName,16, 16963, 10, 3.2, NULL, 16962, NULL)
#elif defined __s390x__
CheckTypeSize(FT_SfntName,24, 16963, 12, 3.2, NULL, 16962, NULL)
#elif defined __ia64__
CheckTypeSize(FT_SfntName,24, 16963, 3, 3.2, NULL, 16962, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16962, NULL);\n",architecture,16963,0);
Msg("Find size of FT_SfntName (16963)\n");
#endif

extern FT_Error FT_Get_Sfnt_Name_db(FT_Face, FT_UInt, FT_SfntName *);
CheckInterfacedef(FT_Get_Sfnt_Name,FT_Get_Sfnt_Name_db);
extern FT_UInt FT_Get_Sfnt_Name_Count_db(FT_Face);
CheckInterfacedef(FT_Get_Sfnt_Name_Count,FT_Get_Sfnt_Name_Count_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/ftsnames.h\n\n",pcnt,cnt);
return cnt;
#endif

}
