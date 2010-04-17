/*
 * Test of freetype/ftbbox.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include <ft2build.h>
#include FT_FREETYPE_H

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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in freetype/ftbbox.h\n");
#endif

printf("Checking data structures in freetype/ftbbox.h\n");
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
