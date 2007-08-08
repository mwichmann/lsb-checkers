/*
 * Test of freetype/ftbitmap.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
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
#ifdef TET_TEST
Msg("Checking data structures in freetype/ftbitmap.h\n");
#endif

printf("Checking data structures in freetype/ftbitmap.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for freetype/ftbitmap.h */
#endif

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
