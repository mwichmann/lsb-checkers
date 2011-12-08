/*
 * Test of freetype/config/ftstdlib.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <ft2build.h>
#include FT_FREETYPE_H

#include "freetype/config/ftstdlib.h"



#ifdef TET_TEST
void freetype_config_ftstdlib_h()
{
#else
int freetype_config_ftstdlib_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in freetype/config/ftstdlib.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for ft_atol */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_exit */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_INT_MAX */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_isalnum */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_isdigit */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_islower */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_isupper */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_isxdigit */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_jmp_buf */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_longjmp */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_memcmp */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_memcpy */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_memmove */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_memset */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_ptrdiff_t */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_qsort */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_setjmp */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_sprintf */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_strcat */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_strcmp */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_strcpy */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_strlen */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_strncmp */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_strncpy */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_strrchr */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_UINT_MAX */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ULONG_MAX */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for freetype/config/ftstdlib.h depends on string.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for freetype/config/ftstdlib.h depends on stdio.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for freetype/config/ftstdlib.h depends on ctype.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for freetype/config/ftstdlib.h depends on stdlib.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for freetype/config/ftstdlib.h depends on setjmp.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for freetype/config/ftstdlib.h depends on limits.h */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in freetype/config/ftstdlib.h\n\n",pcnt,cnt);
return cnt;
#endif

}
