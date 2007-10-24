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
CheckTypeSize(BDF_PropertyType,4, 16929, 1, 3.2, NULL, 16928, NULL)
#endif

#if defined __x86_64__
CheckTypeSize(BDF_PropertyRec,16, 16932, 11, 3.2, NULL, 16927, NULL)
#elif defined __i386__
CheckTypeSize(BDF_PropertyRec,8, 16932, 2, 3.2, NULL, 16927, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(BDF_PropertyRec,8, 16932, 10, 3.2, NULL, 16927, NULL)
#elif defined __s390x__
CheckTypeSize(BDF_PropertyRec,16, 16932, 12, 3.2, NULL, 16927, NULL)
#elif defined __ia64__
CheckTypeSize(BDF_PropertyRec,16, 16932, 3, 3.2, NULL, 16927, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(BDF_PropertyRec,8, 16932, 6, 3.2, NULL, 16927, NULL)
#elif defined __powerpc64__
CheckTypeSize(BDF_PropertyRec,16, 16932, 9, 3.2, NULL, 16927, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16927, NULL);\n",architecture,16932,0);
Msg("Find size of BDF_PropertyRec (16932)\n");
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
