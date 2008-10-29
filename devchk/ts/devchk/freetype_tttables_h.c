/*
 * Test of freetype/tttables.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <ft2build.h>
#include FT_FREETYPE_H

#include "freetype/tttables.h"



#ifdef TET_TEST
void freetype_tttables_h()
{
#else
int freetype_tttables_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/tttables.h\n");
#endif

printf("Checking data structures in freetype/tttables.h\n");
#if 1
CheckTypeSize(FT_Sfnt_Tag,4, 16925, 1, 3.2, NULL, 16924, NULL)
#endif

#if 1
CheckTypeSize(TT_Header,0, 1009219, 1, 4.0, NULL, 1009218, NULL)
#endif

#if 1
CheckTypeSize(TT_HoriHeader,0, 1009222, 1, 4.0, NULL, 1009221, NULL)
#endif

#if 1
CheckTypeSize(TT_VertHeader,0, 1009224, 1, 4.0, NULL, 1009223, NULL)
#endif

#if 1
CheckTypeSize(TT_OS2,0, 1009228, 1, 4.0, NULL, 1009227, NULL)
#endif

#if 1
CheckTypeSize(TT_Postscript,0, 1009230, 1, 4.0, NULL, 1009229, NULL)
#endif

#if 1
CheckTypeSize(TT_PCLT,0, 1009235, 1, 4.0, NULL, 1009234, NULL)
#endif

#if 1
CheckTypeSize(TT_MaxProfile,0, 1009237, 1, 4.0, NULL, 1009236, NULL)
#endif

extern FT_ULong FT_Get_CMap_Language_ID_db(FT_CharMap);
CheckInterfacedef(FT_Get_CMap_Language_ID,FT_Get_CMap_Language_ID_db);
extern FT_Error FT_Load_Sfnt_Table_db(FT_Face, FT_ULong, FT_Long, FT_Byte *, FT_ULong *);
CheckInterfacedef(FT_Load_Sfnt_Table,FT_Load_Sfnt_Table_db);
extern void * FT_Get_Sfnt_Table_db(FT_Face, FT_Sfnt_Tag);
CheckInterfacedef(FT_Get_Sfnt_Table,FT_Get_Sfnt_Table_db);
extern FT_Error FT_Sfnt_Table_Info_db(FT_Face, FT_UInt, FT_ULong *, FT_ULong *);
CheckInterfacedef(FT_Sfnt_Table_Info,FT_Sfnt_Table_Info_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/tttables.h\n\n",pcnt,cnt);
return cnt;
#endif

}
