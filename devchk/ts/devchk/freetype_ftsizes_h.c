/*
 * Test of freetype/ftsizes.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "freetype/ftsizes.h"



#ifdef TET_TEST
void freetype_ftsizes_h()
{
#else
int freetype_ftsizes_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/ftsizes.h\n");
#endif

printf("Checking data structures in freetype/ftsizes.h\n");
#if 1
CheckTypeSize(FT_Size_Metrics,0, 16953, 1, 3.2, NULL, 16952, NULL)
#endif

#if 1
CheckTypeSize(FT_Size_Internal,0, 16956, 1, 3.2, NULL, 16955, NULL)
#endif

extern FT_Error FT_New_Size_db(FT_Face, FT_Size *);
CheckInterfacedef(FT_New_Size,FT_New_Size_db);
extern FT_Error FT_Activate_Size_db(FT_Size);
CheckInterfacedef(FT_Activate_Size,FT_Activate_Size_db);
extern FT_Error FT_Done_Size_db(FT_Size);
CheckInterfacedef(FT_Done_Size,FT_Done_Size_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/ftsizes.h\n\n",pcnt,cnt);
return cnt;
#endif

}
