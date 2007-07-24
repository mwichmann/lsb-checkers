/*
 * Test of freetype/ftpfr.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "freetype/ftpfr.h"



#ifdef TET_TEST
void freetype_ftpfr_h()
{
#else
int freetype_ftpfr_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/ftpfr.h\n");
#endif

printf("Checking data structures in freetype/ftpfr.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for freetype/ftpfr.h */
#endif

extern FT_Error FT_Get_PFR_Advance_db(FT_Face, FT_UInt, FT_Pos *);
CheckInterfacedef(FT_Get_PFR_Advance,FT_Get_PFR_Advance_db);
extern FT_Error FT_Get_PFR_Metrics_db(FT_Face, FT_UInt *, FT_UInt *, FT_Fixed *, FT_Fixed *);
CheckInterfacedef(FT_Get_PFR_Metrics,FT_Get_PFR_Metrics_db);
extern FT_Error FT_Get_PFR_Kerning_db(FT_Face, FT_UInt, FT_UInt, FT_Vector *);
CheckInterfacedef(FT_Get_PFR_Kerning,FT_Get_PFR_Kerning_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/ftpfr.h\n\n",pcnt,cnt);
return cnt;
#endif

}
