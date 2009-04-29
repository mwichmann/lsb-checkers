/*
 * Test of freetype/ftsizes.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <ft2build.h>
#include FT_FREETYPE_H

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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in freetype/ftsizes.h\n");
#endif

printf("Checking data structures in freetype/ftsizes.h\n");
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
