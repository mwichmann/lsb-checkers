/*
 * Test of freetype/tttags.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <ft2build.h>
#include FT_FREETYPE_H

#include "freetype/tttags.h"



#ifdef TET_TEST
void freetype_tttags_h()
{
#else
int freetype_tttags_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/tttags.h\n");
#endif

printf("Checking data structures in freetype/tttags.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for TTAG_avar */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_BASE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_bdat */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_bhed */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_bloc */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_CFF */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_cmap */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_cvar */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_cvt */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_DSIG */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_EBDT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_EBLC */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_EBSC */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_fpgm */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_fvar */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_gasp */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_GDEF */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_glyf */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_GPOS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_GSUB */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_gvar */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_hdmx */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_head */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_hhea */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_hmtx */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_JSTF */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_kern */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_loca */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_LTSH */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_maxp */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_MMFX */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_MMSD */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_name */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_OS2 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_OTTO */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_PCLT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_post */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_prep */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_true */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_ttcf */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_ttc */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_VDMX */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_vhea */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TTAG_vmtx */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for freetype/tttags.h depends on freetype.h */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/tttags.h\n\n",pcnt,cnt);
return cnt;
#endif

}
