/*
 * Test of freetype/ftsynth.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "freetype/ftsynth.h"



#ifdef TET_TEST
void freetype_ftsynth_h()
{
#else
int freetype_ftsynth_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/ftsynth.h\n");
#endif

printf("Checking data structures in freetype/ftsynth.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for freetype/ftsynth.h */
#endif

#if defined __i386__
CheckTypeSize(FT_GlyphSlot,0, 16785, 2, 3.2, NULL, 16784, NULL)
#endif

extern void FT_GlyphSlot_Oblique_db(FT_GlyphSlot);
CheckInterfacedef(FT_GlyphSlot_Oblique,FT_GlyphSlot_Oblique_db);
extern void FT_GlyphSlot_Embolden_db(FT_GlyphSlot);
CheckInterfacedef(FT_GlyphSlot_Embolden,FT_GlyphSlot_Embolden_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/ftsynth.h\n\n",pcnt,cnt);
return cnt;
#endif

}
