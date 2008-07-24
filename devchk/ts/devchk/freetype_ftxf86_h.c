/*
 * Test of freetype/ftxf86.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <ft2build.h>
#include FT_FREETYPE_H

#include "freetype/ftxf86.h"



#ifdef TET_TEST
void freetype_ftxf86_h()
{
#else
int freetype_ftxf86_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/ftxf86.h\n");
#endif

printf("Checking data structures in freetype/ftxf86.h\n");
extern const char * FT_Get_X11_Font_Format_db(FT_Face);
CheckInterfacedef(FT_Get_X11_Font_Format,FT_Get_X11_Font_Format_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/ftxf86.h\n\n",pcnt,cnt);
return cnt;
#endif

}
