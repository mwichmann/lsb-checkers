/*
 * Test of freetype/ftsnames.h
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

#include "freetype/ftsnames.h"



#ifdef TET_TEST
void freetype_ftsnames_h()
{
#else
int freetype_ftsnames_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in freetype/ftsnames.h\n");
#if 1
CheckTypeSize(struct FT_SfntName_,16, 16962, 1, , NULL, 0, NULL)
Msg("Missing member data for FT_SfntName_ on All\n");
CheckOffset(struct FT_SfntName_,platform_id,0,1,54290)
CheckOffset(struct FT_SfntName_,encoding_id,0,1,54291)
CheckOffset(struct FT_SfntName_,language_id,0,1,54292)
CheckOffset(struct FT_SfntName_,name_id,0,1,54293)
CheckOffset(struct FT_SfntName_,string,0,1,54294)
CheckOffset(struct FT_SfntName_,string_len,0,1,54295)
#endif

#if defined __s390x__
CheckTypeSize(FT_SfntName,24, 16963, 12, 3.2, NULL, 16962, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_SfntName,24, 16963, 11, 3.2, NULL, 16962, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_SfntName,16, 16963, 10, 3.2, NULL, 16962, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_SfntName,24, 16963, 9, 3.2, NULL, 16962, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_SfntName,16, 16963, 6, 3.2, NULL, 16962, NULL)
#elif defined __ia64__
CheckTypeSize(FT_SfntName,24, 16963, 3, 3.2, NULL, 16962, NULL)
#elif defined __i386__
CheckTypeSize(FT_SfntName,16, 16963, 2, 3.2, NULL, 16962, NULL)
#else
Msg("Find size of FT_SfntName (16963)\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16962, NULL);\n",architecture,16963,0);
#endif

extern FT_Error FT_Get_Sfnt_Name_db(FT_Face, FT_UInt, FT_SfntName *);
CheckInterfacedef(FT_Get_Sfnt_Name,FT_Get_Sfnt_Name_db);
extern FT_UInt FT_Get_Sfnt_Name_Count_db(FT_Face);
CheckInterfacedef(FT_Get_Sfnt_Name_Count,FT_Get_Sfnt_Name_Count_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in freetype/ftsnames.h\n\n",pcnt,cnt);
return cnt;
#endif

}
