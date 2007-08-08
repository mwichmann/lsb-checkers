/*
 * Test of freetype/ftmm.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "freetype/ftmm.h"



#ifdef TET_TEST
void freetype_ftmm_h()
{
#else
int freetype_ftmm_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/ftmm.h\n");
#endif

printf("Checking data structures in freetype/ftmm.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for freetype/ftmm.h */
#endif

#if defined __i386__
CheckTypeSize(FT_ULong,0, 16754, 2, 3.2, NULL, 11186, NULL)
#endif

#if defined __i386__
CheckTypeSize(FT_MM_Axis,0, 16936, 2, 3.2, NULL, 16935, NULL)
#endif

#if 1
#endif

#if defined __i386__
CheckTypeSize(FT_Multi_Master,0, 16938, 2, 3.2, NULL, 16934, NULL)
#endif

#if defined __i386__
CheckTypeSize(FT_Var_Axis,0, 16943, 2, 3.2, NULL, 16942, NULL)
#endif

#if defined __i386__
CheckTypeSize(FT_Var_Named_Style,0, 16946, 2, 3.2, NULL, 16945, NULL)
#endif

#if defined __i386__
CheckTypeSize(FT_MM_Var,0, 16948, 2, 3.2, NULL, 16941, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/ftmm.h\n\n",pcnt,cnt);
return cnt;
#endif

}
