/*
 * Test of freetype/ftbdf.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <ft2build.h>
#include FT_FREETYPE_H

#include "freetype/ftbdf.h"



#ifdef TET_TEST
void freetype_ftbdf_h()
{
#else
int freetype_ftbdf_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/ftbdf.h\n");
#endif

printf("Checking data structures in freetype/ftbdf.h\n");
#if 1
CheckTypeSize(BDF_PropertyType,0, 16929, 1, 3.2, NULL, 16928, NULL)
#endif

#if 1
CheckTypeSize(BDF_PropertyRec,0, 16932, 1, 3.2, NULL, 16927, NULL)
#endif

extern FT_Error FT_Get_BDF_Property_db(FT_Face, const char *, BDF_PropertyRec *);
CheckInterfacedef(FT_Get_BDF_Property,FT_Get_BDF_Property_db);
extern FT_Error FT_Get_BDF_Charset_ID_db(FT_Face, const char * *, const char * *);
CheckInterfacedef(FT_Get_BDF_Charset_ID,FT_Get_BDF_Charset_ID_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/ftbdf.h\n\n",pcnt,cnt);
return cnt;
#endif

}
