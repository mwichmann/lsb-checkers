/*
 * Test of fontconfig/fcfreetype.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#ifdef LSBCC_MODE
#include <ft2build.h>
#include FT_FREETYPE_H
#endif
#include <fontconfig.h>
#include "fontconfig/fcfreetype.h"



#ifdef TET_TEST
void fontconfig_fcfreetype_h()
{
#else
int fontconfig_fcfreetype_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in fontconfig/fcfreetype.h\n");
extern FcResult FcPatternGetFTFace_db(const FcPattern *, const char *, int, FT_Face *);
CheckInterfacedef(FcPatternGetFTFace,FcPatternGetFTFace_db);
extern FcBool FcPatternAddFTFace_db(FcPattern *, const char *, const FT_Face);
CheckInterfacedef(FcPatternAddFTFace,FcPatternAddFTFace_db);
extern FT_UInt FcFreeTypeCharIndex_db(FT_Face, FcChar32);
CheckInterfacedef(FcFreeTypeCharIndex,FcFreeTypeCharIndex_db);
extern FcCharSet * FcFreeTypeCharSet_db(FT_Face, FcBlanks *);
CheckInterfacedef(FcFreeTypeCharSet,FcFreeTypeCharSet_db);
extern FcCharSet * FcFreeTypeCharSetAndSpacing_db(FT_Face, FcBlanks *, int *);
CheckInterfacedef(FcFreeTypeCharSetAndSpacing,FcFreeTypeCharSetAndSpacing_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in fontconfig/fcfreetype.h\n\n",pcnt,cnt);
return cnt;
#endif

}
