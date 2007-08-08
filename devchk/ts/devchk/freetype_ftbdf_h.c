/*
 * Test of freetype/ftbdf.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
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
#if _LSB_DEFAULT_ARCH
/* No test for freetype/ftbdf.h */
#endif

#if defined __i386__
CheckTypeSize(FT_Int32,0, 16894, 2, 3.2, NULL, 6, NULL)
#endif

#if defined __i386__
CheckTypeSize(BDF_PropertyType,0, 16929, 2, 3.2, NULL, 16928, NULL)
#endif

#if defined __i386__
CheckTypeSize(FT_UInt32,0, 16930, 2, 3.2, NULL, 7, NULL)
#endif

#if defined __i386__
CheckTypeSize(BDF_PropertyRec,0, 16932, 2, 3.2, NULL, 16927, NULL)
#endif

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
