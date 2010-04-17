/*
 * Test of freetype/ftbitmap.h
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

#include "freetype/ftbitmap.h"



#ifdef TET_TEST
void freetype_ftbitmap_h()
{
#else
int freetype_ftbitmap_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in freetype/ftbitmap.h\n");
#endif

printf("Checking data structures in freetype/ftbitmap.h\n");
extern FT_Error FT_Bitmap_Done_db(FT_Library, FT_Bitmap *);
CheckInterfacedef(FT_Bitmap_Done,FT_Bitmap_Done_db);
extern FT_Error FT_Bitmap_Convert_db(FT_Library, const FT_Bitmap *, FT_Bitmap *, FT_Int);
CheckInterfacedef(FT_Bitmap_Convert,FT_Bitmap_Convert_db);
extern void FT_Bitmap_New_db(FT_Bitmap *);
CheckInterfacedef(FT_Bitmap_New,FT_Bitmap_New_db);
extern FT_Error FT_Bitmap_Copy_db(FT_Library, const FT_Bitmap *, FT_Bitmap *);
CheckInterfacedef(FT_Bitmap_Copy,FT_Bitmap_Copy_db);
extern FT_Error FT_Bitmap_Embolden_db(FT_Library, FT_Bitmap *, FT_Pos, FT_Pos);
CheckInterfacedef(FT_Bitmap_Embolden,FT_Bitmap_Embolden_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/ftbitmap.h\n\n",pcnt,cnt);
return cnt;
#endif

}
