/*
 * Test of freetype/ftbbox.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "freetype/ftbbox.h"



#ifdef TET_TEST
void freetype_ftbbox_h()
{
#else
int freetype_ftbbox_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/ftbbox.h\n");
#endif

printf("Checking data structures in freetype/ftbbox.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for freetype/ftbbox.h */
#endif

extern FT_Error FT_Outline_Get_BBox_db(FT_Outline *, FT_BBox *);
CheckInterfacedef(FT_Outline_Get_BBox,FT_Outline_Get_BBox_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/ftbbox.h\n\n",pcnt,cnt);
return cnt;
#endif

}
