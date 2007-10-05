/*
 * Test of freetype/ftotval.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "freetype/ftotval.h"



#ifdef TET_TEST
void freetype_ftotval_h()
{
#else
int freetype_ftotval_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/ftotval.h\n");
#endif

printf("Checking data structures in freetype/ftotval.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef FT_VALIDATE_BASE
	CompareConstant(FT_VALIDATE_BASE,0x0100,10526,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_VALIDATE_BASE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_VALIDATE_GDEF
	CompareConstant(FT_VALIDATE_GDEF,0x0200,10527,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_VALIDATE_GDEF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_VALIDATE_GPOS
	CompareConstant(FT_VALIDATE_GPOS,0x0400,10528,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_VALIDATE_GPOS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_VALIDATE_GSUB
	CompareConstant(FT_VALIDATE_GSUB,0x0800,10529,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_VALIDATE_GSUB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_VALIDATE_JSTF
	CompareConstant(FT_VALIDATE_JSTF,0x1000,10530,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_VALIDATE_JSTF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_VALIDATE_OT */
#endif

extern FT_Error FT_OpenType_Validate_db(FT_Face, FT_UInt, FT_Bytes *, FT_Bytes *, FT_Bytes *, FT_Bytes *, FT_Bytes *);
CheckInterfacedef(FT_OpenType_Validate,FT_OpenType_Validate_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/ftotval.h\n\n",pcnt,cnt);
return cnt;
#endif

}
