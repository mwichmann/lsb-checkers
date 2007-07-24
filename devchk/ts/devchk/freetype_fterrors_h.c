/*
 * Test of freetype/fterrors.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "freetype/fterrors.h"



#ifdef TET_TEST
void freetype_fterrors_h()
{
#else
int freetype_fterrors_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/fterrors.h\n");
#endif

printf("Checking data structures in freetype/fterrors.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef FT_ERR_BASE
	CompareConstant(FT_ERR_BASE,0,10356,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_ERR_BASE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERR_CAT(x,y) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF(e,v,s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERRORDEF_(e,v,s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERROR_END_LIST */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERROR_START_LIST */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERR_PREFIX */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERR_XCAT(x,y) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_NOERRORDEF_(e,v,s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for freetype/fterrors.h */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/fterrors.h\n\n",pcnt,cnt);
return cnt;
#endif

}
