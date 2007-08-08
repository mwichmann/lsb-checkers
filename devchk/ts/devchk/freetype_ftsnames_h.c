/*
 * Test of freetype/ftsnames.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
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
#ifdef TET_TEST
Msg("Checking data structures in freetype/ftsnames.h\n");
#endif

printf("Checking data structures in freetype/ftsnames.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for freetype/ftsnames.h */
#endif

#if defined __i386__
CheckTypeSize(FT_SfntName,0, 16963, 2, 3.2, NULL, 16962, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/ftsnames.h\n\n",pcnt,cnt);
return cnt;
#endif

}
