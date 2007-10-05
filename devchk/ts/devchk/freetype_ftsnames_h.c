/*
 * Test of freetype/ftsnames.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
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
#if 1
CheckTypeSize(FT_SfntName,0, 16963, 1, 3.2, NULL, 16962, NULL)
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
