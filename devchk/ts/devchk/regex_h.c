/*
 * Test of regex.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "regex.h"



#ifdef TET_TEST
void regex_h()
{
#else
int regex_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in regex.h\n");
#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_BACKSLASH_ESCAPE_IN_LISTS
	CompareConstant(RE_BACKSLASH_ESCAPE_IN_LISTS,((unsigned long int)1),1556,architecture)
#else
Msg( "Error: Constant not found: RE_BACKSLASH_ESCAPE_IN_LISTS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_BK_PLUS_QM
	CompareConstant(RE_BK_PLUS_QM,(RE_BACKSLASH_ESCAPE_IN_LISTS<<1),1557,architecture)
#else
Msg( "Error: Constant not found: RE_BK_PLUS_QM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_CHAR_CLASSES
	CompareConstant(RE_CHAR_CLASSES,(RE_BK_PLUS_QM<<1),1558,architecture)
#else
Msg( "Error: Constant not found: RE_CHAR_CLASSES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_CONTEXT_INDEP_ANCHORS
	CompareConstant(RE_CONTEXT_INDEP_ANCHORS,(RE_CHAR_CLASSES<<1),1559,architecture)
#else
Msg( "Error: Constant not found: RE_CONTEXT_INDEP_ANCHORS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_CONTEXT_INDEP_OPS
	CompareConstant(RE_CONTEXT_INDEP_OPS,(RE_CONTEXT_INDEP_ANCHORS<<1),1560,architecture)
#else
Msg( "Error: Constant not found: RE_CONTEXT_INDEP_OPS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef REG_NOMATCH
	CompareConstant(REG_NOMATCH,-1,3092,architecture)
#else
Msg( "Error: Constant not found: REG_NOMATCH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_CONTEXT_INVALID_OPS
	CompareConstant(RE_CONTEXT_INVALID_OPS,(RE_CONTEXT_INDEP_OPS<<1),1561,architecture)
#else
Msg( "Error: Constant not found: RE_CONTEXT_INVALID_OPS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_DOT_NEWLINE
	CompareConstant(RE_DOT_NEWLINE,(RE_CONTEXT_INVALID_OPS<<1),1562,architecture)
#else
Msg( "Error: Constant not found: RE_DOT_NEWLINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_DOT_NOT_NULL
	CompareConstant(RE_DOT_NOT_NULL,(RE_DOT_NEWLINE<<1),1563,architecture)
#else
Msg( "Error: Constant not found: RE_DOT_NOT_NULL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_HAT_LISTS_NOT_NEWLINE
	CompareConstant(RE_HAT_LISTS_NOT_NEWLINE,(RE_DOT_NOT_NULL<<1),1564,architecture)
#else
Msg( "Error: Constant not found: RE_HAT_LISTS_NOT_NEWLINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_INTERVALS
	CompareConstant(RE_INTERVALS,(RE_HAT_LISTS_NOT_NEWLINE<<1),1565,architecture)
#else
Msg( "Error: Constant not found: RE_INTERVALS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_LIMITED_OPS
	CompareConstant(RE_LIMITED_OPS,(RE_INTERVALS<<1),1566,architecture)
#else
Msg( "Error: Constant not found: RE_LIMITED_OPS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_NEWLINE_ALT
	CompareConstant(RE_NEWLINE_ALT,(RE_LIMITED_OPS<<1),1567,architecture)
#else
Msg( "Error: Constant not found: RE_NEWLINE_ALT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_NO_BK_BRACES
	CompareConstant(RE_NO_BK_BRACES,(RE_NEWLINE_ALT<<1),1568,architecture)
#else
Msg( "Error: Constant not found: RE_NO_BK_BRACES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_NO_BK_PARENS
	CompareConstant(RE_NO_BK_PARENS,(RE_NO_BK_BRACES<<1),1569,architecture)
#else
Msg( "Error: Constant not found: RE_NO_BK_PARENS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_NO_BK_REFS
	CompareConstant(RE_NO_BK_REFS,(RE_NO_BK_PARENS<<1),1570,architecture)
#else
Msg( "Error: Constant not found: RE_NO_BK_REFS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_NO_BK_VBAR
	CompareConstant(RE_NO_BK_VBAR,(RE_NO_BK_REFS<<1),1571,architecture)
#else
Msg( "Error: Constant not found: RE_NO_BK_VBAR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_NO_EMPTY_RANGES
	CompareConstant(RE_NO_EMPTY_RANGES,(RE_NO_BK_VBAR<<1),1572,architecture)
#else
Msg( "Error: Constant not found: RE_NO_EMPTY_RANGES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_UNMATCHED_RIGHT_PAREN_ORD
	CompareConstant(RE_UNMATCHED_RIGHT_PAREN_ORD,(RE_NO_EMPTY_RANGES<<1),1573,architecture)
#else
Msg( "Error: Constant not found: RE_UNMATCHED_RIGHT_PAREN_ORD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_NO_POSIX_BACKTRACKING
	CompareConstant(RE_NO_POSIX_BACKTRACKING,(RE_UNMATCHED_RIGHT_PAREN_ORD<<1),1574,architecture)
#else
Msg( "Error: Constant not found: RE_NO_POSIX_BACKTRACKING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_NO_GNU_OPS
	CompareConstant(RE_NO_GNU_OPS,(RE_NO_POSIX_BACKTRACKING<<1),1575,architecture)
#else
Msg( "Error: Constant not found: RE_NO_GNU_OPS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_DEBUG
	CompareConstant(RE_DEBUG,(RE_NO_GNU_OPS<<1),1576,architecture)
#else
Msg( "Error: Constant not found: RE_DEBUG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_INVALID_INTERVAL_ORD
	CompareConstant(RE_INVALID_INTERVAL_ORD,(RE_DEBUG<<1),1577,architecture)
#else
Msg( "Error: Constant not found: RE_INVALID_INTERVAL_ORD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_SYNTAX_AWK
	CompareConstant(RE_SYNTAX_AWK,(RE_BACKSLASH_ESCAPE_IN_LISTS|RE_DOT_NOT_NULL|RE_NO_BK_PARENS| RE_NO_BK_REFS| RE_NO_BK_VBAR| RE_NO_EMPTY_RANGES| RE_DOT_NEWLINE| RE_CONTEXT_INDEP_ANCHORS| RE_UNMATCHED_RIGHT_PAREN_ORD | RE_NO_GNU_OPS),1579,architecture)
#else
Msg( "Error: Constant not found: RE_SYNTAX_AWK\n");
cnt++;
#endif

#endif

#if __powerpc64__
#ifdef RE_SYNTAX_GNU_AWK
	CompareConstant(RE_SYNTAX_GNU_AWK,1290349,1580,architecture)
#else
Msg( "Error: Constant not found: RE_SYNTAX_GNU_AWK\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef RE_SYNTAX_GNU_AWK
	CompareConstant(RE_SYNTAX_GNU_AWK,((RE_SYNTAX_POSIX_EXTENDED|RE_BACKSLASH_ESCAPE_IN_LISTS|RE_DEBUG)& ~(RE_DOT_NOT_NULL | RE_INTERVALS | RE_CONTEXT_INDEP_OPS)),1580,architecture)
#else
Msg( "Error: Constant not found: RE_SYNTAX_GNU_AWK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_SYNTAX_POSIX_AWK
	CompareConstant(RE_SYNTAX_POSIX_AWK,(RE_SYNTAX_POSIX_EXTENDED|RE_BACKSLASH_ESCAPE_IN_LISTS|RE_INTERVALS|RE_NO_GNU_OPS),1581,architecture)
#else
Msg( "Error: Constant not found: RE_SYNTAX_POSIX_AWK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_SYNTAX_GREP
	CompareConstant(RE_SYNTAX_GREP,(RE_BK_PLUS_QM|RE_CHAR_CLASSES|RE_HAT_LISTS_NOT_NEWLINE|RE_INTERVALS|RE_NEWLINE_ALT),1582,architecture)
#else
Msg( "Error: Constant not found: RE_SYNTAX_GREP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_SYNTAX_EGREP
	CompareConstant(RE_SYNTAX_EGREP,(RE_CHAR_CLASSES|RE_CONTEXT_INDEP_ANCHORS| RE_CONTEXT_INDEP_OPS|RE_HAT_LISTS_NOT_NEWLINE|RE_NEWLINE_ALT|RE_NO_BK_PARENS|RE_NO_BK_VBAR),1583,architecture)
#else
Msg( "Error: Constant not found: RE_SYNTAX_EGREP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_SYNTAX_POSIX_EGREP
	CompareConstant(RE_SYNTAX_POSIX_EGREP,(RE_SYNTAX_EGREP|RE_INTERVALS|RE_NO_BK_BRACES|RE_INVALID_INTERVAL_ORD),1584,architecture)
#else
Msg( "Error: Constant not found: RE_SYNTAX_POSIX_EGREP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_SYNTAX_ED
	CompareConstant(RE_SYNTAX_ED,RE_SYNTAX_POSIX_BASIC,1585,architecture)
#else
Msg( "Error: Constant not found: RE_SYNTAX_ED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_SYNTAX_SED
	CompareConstant(RE_SYNTAX_SED,RE_SYNTAX_POSIX_BASIC,1586,architecture)
#else
Msg( "Error: Constant not found: RE_SYNTAX_SED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _RE_SYNTAX_POSIX_COMMON
	CompareConstant(_RE_SYNTAX_POSIX_COMMON,(RE_CHAR_CLASSES|RE_DOT_NEWLINE|RE_DOT_NOT_NULL|RE_INTERVALS|RE_NO_EMPTY_RANGES),1587,architecture)
#else
Msg( "Error: Constant not found: _RE_SYNTAX_POSIX_COMMON\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_SYNTAX_POSIX_BASIC
	CompareConstant(RE_SYNTAX_POSIX_BASIC,(_RE_SYNTAX_POSIX_COMMON|RE_BK_PLUS_QM),1588,architecture)
#else
Msg( "Error: Constant not found: RE_SYNTAX_POSIX_BASIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_SYNTAX_POSIX_MINIMAL_BASIC
	CompareConstant(RE_SYNTAX_POSIX_MINIMAL_BASIC,(_RE_SYNTAX_POSIX_COMMON|RE_LIMITED_OPS),1589,architecture)
#else
Msg( "Error: Constant not found: RE_SYNTAX_POSIX_MINIMAL_BASIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_SYNTAX_POSIX_EXTENDED
	CompareConstant(RE_SYNTAX_POSIX_EXTENDED,(_RE_SYNTAX_POSIX_COMMON|RE_CONTEXT_INDEP_ANCHORS|RE_CONTEXT_INDEP_OPS|RE_NO_BK_BRACES|RE_NO_BK_PARENS|RE_NO_BK_VBAR|RE_CONTEXT_INVALID_OPS|RE_UNMATCHED_RIGHT_PAREN_ORD),1590,architecture)
#else
Msg( "Error: Constant not found: RE_SYNTAX_POSIX_EXTENDED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RE_SYNTAX_POSIX_MINIMAL_EXTENDED
	CompareConstant(RE_SYNTAX_POSIX_MINIMAL_EXTENDED,(_RE_SYNTAX_POSIX_COMMON|RE_CONTEXT_INDEP_ANCHORS|RE_CONTEXT_INVALID_OPS|RE_NO_BK_BRACES|RE_NO_BK_PARENS|RE_NO_BK_REFS|RE_NO_BK_VBAR|RE_UNMATCHED_RIGHT_PAREN_ORD),1591,architecture)
#else
Msg( "Error: Constant not found: RE_SYNTAX_POSIX_MINIMAL_EXTENDED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef REG_EXTENDED
	CompareConstant(REG_EXTENDED,1,1593,architecture)
#else
Msg( "Error: Constant not found: REG_EXTENDED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef REG_ICASE
	CompareConstant(REG_ICASE,(REG_EXTENDED<<1),1594,architecture)
#else
Msg( "Error: Constant not found: REG_ICASE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef REG_NEWLINE
	CompareConstant(REG_NEWLINE,(REG_ICASE<<1),1595,architecture)
#else
Msg( "Error: Constant not found: REG_NEWLINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef REG_NOSUB
	CompareConstant(REG_NOSUB,(REG_NEWLINE<<1),1596,architecture)
#else
Msg( "Error: Constant not found: REG_NOSUB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef REG_NOTBOL
	CompareConstant(REG_NOTBOL,1,1597,architecture)
#else
Msg( "Error: Constant not found: REG_NOTBOL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef REG_NOTEOL
	CompareConstant(REG_NOTEOL,(1<<1),1598,architecture)
#else
Msg( "Error: Constant not found: REG_NOTEOL\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(reg_syntax_t,4, 6941, 2)
#elif __ia64__
CheckTypeSize(reg_syntax_t,8, 6941, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(reg_syntax_t,4, 6941, 6)
#elif __s390__
CheckTypeSize(reg_syntax_t,4, 6941, 10)
#elif __powerpc64__
CheckTypeSize(reg_syntax_t,0, 6941, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6941,0);
Msg("Find size of reg_syntax_t (6941)\n");
#endif

#if __i386__
CheckTypeSize(struct re_pattern_buffer,32, 6944, 2)
CheckOffset(struct re_pattern_buffer,buffer,0,2,30066)
CheckOffset(struct re_pattern_buffer,allocated,4,2,30067)
CheckOffset(struct re_pattern_buffer,used,8,2,30068)
CheckOffset(struct re_pattern_buffer,syntax,12,2,30069)
CheckOffset(struct re_pattern_buffer,fastmap,16,2,30070)
CheckOffset(struct re_pattern_buffer,translate,20,2,30071)
CheckOffset(struct re_pattern_buffer,re_nsub,24,2,30072)
#elif __ia64__
CheckTypeSize(struct re_pattern_buffer,64, 6944, 3)
CheckOffset(struct re_pattern_buffer,allocated,8,3,30067)
CheckOffset(struct re_pattern_buffer,used,16,3,30068)
CheckOffset(struct re_pattern_buffer,syntax,24,3,30069)
CheckOffset(struct re_pattern_buffer,fastmap,32,3,30070)
CheckOffset(struct re_pattern_buffer,translate,40,3,30071)
CheckOffset(struct re_pattern_buffer,re_nsub,48,3,30072)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct re_pattern_buffer,32, 6944, 6)
CheckOffset(struct re_pattern_buffer,allocated,4,6,30067)
CheckOffset(struct re_pattern_buffer,used,8,6,30068)
CheckOffset(struct re_pattern_buffer,syntax,12,6,30069)
CheckOffset(struct re_pattern_buffer,fastmap,16,6,30070)
CheckOffset(struct re_pattern_buffer,translate,20,6,30071)
CheckOffset(struct re_pattern_buffer,re_nsub,24,6,30072)
#elif __s390__
CheckTypeSize(struct re_pattern_buffer,32, 6944, 10)
CheckOffset(struct re_pattern_buffer,allocated,4,10,30067)
CheckOffset(struct re_pattern_buffer,used,8,10,30068)
CheckOffset(struct re_pattern_buffer,syntax,12,10,30069)
CheckOffset(struct re_pattern_buffer,fastmap,16,10,30070)
CheckOffset(struct re_pattern_buffer,translate,20,10,30071)
CheckOffset(struct re_pattern_buffer,re_nsub,24,10,30072)
#elif __powerpc64__
CheckTypeSize(struct re_pattern_buffer,0, 6944, 9)
Msg("Missing member data for re_pattern_buffer on PPC64\n");
CheckOffset(struct re_pattern_buffer,buffer,0,9,30066)
CheckOffset(struct re_pattern_buffer,allocated,0,9,30067)
CheckOffset(struct re_pattern_buffer,used,0,9,30068)
CheckOffset(struct re_pattern_buffer,syntax,0,9,30069)
CheckOffset(struct re_pattern_buffer,fastmap,0,9,30070)
CheckOffset(struct re_pattern_buffer,translate,0,9,30071)
CheckOffset(struct re_pattern_buffer,re_nsub,0,9,30072)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6944,0);
Msg("Find size of re_pattern_buffer (6944)\n");
#endif

#if __i386__
CheckTypeSize(regex_t,32, 6945, 2)
#elif __ia64__
CheckTypeSize(regex_t,64, 6945, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(regex_t,32, 6945, 6)
#elif __s390__
CheckTypeSize(regex_t,32, 6945, 10)
#elif __powerpc64__
CheckTypeSize(regex_t,0, 6945, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6945,0);
Msg("Find size of regex_t (6945)\n");
#endif

#if __i386__
CheckTypeSize(regoff_t,4, 6946, 2)
#elif __ia64__
CheckTypeSize(regoff_t,4, 6946, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(regoff_t,4, 6946, 6)
#elif __s390__
CheckTypeSize(regoff_t,4, 6946, 10)
#elif __powerpc64__
CheckTypeSize(regoff_t,0, 6946, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6946,0);
Msg("Find size of regoff_t (6946)\n");
#endif

#if __i386__
CheckTypeSize(regmatch_t,8, 6949, 2)
#elif __ia64__
CheckTypeSize(regmatch_t,8, 6949, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(regmatch_t,8, 6949, 6)
#elif __s390__
CheckTypeSize(regmatch_t,8, 6949, 10)
#elif __powerpc64__
CheckTypeSize(regmatch_t,0, 6949, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6949,0);
Msg("Find size of regmatch_t (6949)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in regex.h\n",cnt);
return cnt;
#endif

}
