/*
 * Test of regex.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef RE_BACKSLASH_ESCAPE_IN_LISTS
	CompareConstant(RE_BACKSLASH_ESCAPE_IN_LISTS,((unsigned long int)1))
#else
Msg( "Error: Constant not found: RE_BACKSLASH_ESCAPE_IN_LISTS\n");
cnt++;
#endif

#ifdef RE_BK_PLUS_QM
	CompareConstant(RE_BK_PLUS_QM,(RE_BACKSLASH_ESCAPE_IN_LISTS<<1))
#else
Msg( "Error: Constant not found: RE_BK_PLUS_QM\n");
cnt++;
#endif

#ifdef RE_CHAR_CLASSES
	CompareConstant(RE_CHAR_CLASSES,(RE_BK_PLUS_QM<<1))
#else
Msg( "Error: Constant not found: RE_CHAR_CLASSES\n");
cnt++;
#endif

#ifdef RE_CONTEXT_INDEP_ANCHORS
	CompareConstant(RE_CONTEXT_INDEP_ANCHORS,(RE_CHAR_CLASSES<<1))
#else
Msg( "Error: Constant not found: RE_CONTEXT_INDEP_ANCHORS\n");
cnt++;
#endif

#ifdef RE_CONTEXT_INVALID_OPS
	CompareConstant(RE_CONTEXT_INVALID_OPS,(RE_CONTEXT_INDEP_OPS<<1))
#else
Msg( "Error: Constant not found: RE_CONTEXT_INVALID_OPS\n");
cnt++;
#endif

#ifdef RE_DOT_NEWLINE
	CompareConstant(RE_DOT_NEWLINE,(RE_CONTEXT_INVALID_OPS<<1))
#else
Msg( "Error: Constant not found: RE_DOT_NEWLINE\n");
cnt++;
#endif

#ifdef RE_DOT_NOT_NULL
	CompareConstant(RE_DOT_NOT_NULL,(RE_DOT_NEWLINE<<1))
#else
Msg( "Error: Constant not found: RE_DOT_NOT_NULL\n");
cnt++;
#endif

#ifdef RE_HAT_LISTS_NOT_NEWLINE
	CompareConstant(RE_HAT_LISTS_NOT_NEWLINE,(RE_DOT_NOT_NULL<<1))
#else
Msg( "Error: Constant not found: RE_HAT_LISTS_NOT_NEWLINE\n");
cnt++;
#endif

#ifdef RE_LIMITED_OPS
	CompareConstant(RE_LIMITED_OPS,(RE_INTERVALS<<1))
#else
Msg( "Error: Constant not found: RE_LIMITED_OPS\n");
cnt++;
#endif

#ifdef RE_NEWLINE_ALT
	CompareConstant(RE_NEWLINE_ALT,(RE_LIMITED_OPS<<1))
#else
Msg( "Error: Constant not found: RE_NEWLINE_ALT\n");
cnt++;
#endif

#ifdef RE_NO_BK_BRACES
	CompareConstant(RE_NO_BK_BRACES,(RE_NEWLINE_ALT<<1))
#else
Msg( "Error: Constant not found: RE_NO_BK_BRACES\n");
cnt++;
#endif

#ifdef RE_NO_BK_PARENS
	CompareConstant(RE_NO_BK_PARENS,(RE_NO_BK_BRACES<<1))
#else
Msg( "Error: Constant not found: RE_NO_BK_PARENS\n");
cnt++;
#endif

#ifdef RE_NO_BK_REFS
	CompareConstant(RE_NO_BK_REFS,(RE_NO_BK_PARENS<<1))
#else
Msg( "Error: Constant not found: RE_NO_BK_REFS\n");
cnt++;
#endif

#ifdef RE_NO_BK_VBAR
	CompareConstant(RE_NO_BK_VBAR,(RE_NO_BK_REFS<<1))
#else
Msg( "Error: Constant not found: RE_NO_BK_VBAR\n");
cnt++;
#endif

#ifdef RE_NO_EMPTY_RANGES
	CompareConstant(RE_NO_EMPTY_RANGES,(RE_NO_BK_VBAR<<1))
#else
Msg( "Error: Constant not found: RE_NO_EMPTY_RANGES\n");
cnt++;
#endif

#ifdef RE_UNMATCHED_RIGHT_PAREN_ORD
	CompareConstant(RE_UNMATCHED_RIGHT_PAREN_ORD,(RE_NO_EMPTY_RANGES<<1))
#else
Msg( "Error: Constant not found: RE_UNMATCHED_RIGHT_PAREN_ORD\n");
cnt++;
#endif

#ifdef RE_SYNTAX_AWK
	CompareConstant(RE_SYNTAX_AWK,(RE_BACKSLASH_ESCAPE_IN_LISTS|RE_DOT_NOT_NULL|RE_NO_BK_PARENS| RE_NO_BK_REFS| RE_NO_BK_VBAR| RE_NO_EMPTY_RANGES| RE_DOT_NEWLINE| RE_CONTEXT_INDEP_ANCHORS| RE_UNMATCHED_RIGHT_PAREN_ORD | RE_NO_GNU_OPS))
#else
Msg( "Error: Constant not found: RE_SYNTAX_AWK\n");
cnt++;
#endif

#ifdef RE_SYNTAX_GNU_AWK
	CompareConstant(RE_SYNTAX_GNU_AWK,((RE_SYNTAX_POSIX_EXTENDED|RE_BACKSLASH_ESCAPE_IN_LISTS|RE_DEBUG)& ~(RE_DOT_NOT_NULL | RE_INTERVALS | RE_CONTEXT_INDEP_OPS)))
#else
Msg( "Error: Constant not found: RE_SYNTAX_GNU_AWK\n");
cnt++;
#endif

#ifdef RE_SYNTAX_POSIX_AWK
	CompareConstant(RE_SYNTAX_POSIX_AWK,(RE_SYNTAX_POSIX_EXTENDED|RE_BACKSLASH_ESCAPE_IN_LISTS|RE_INTERVALS|RE_NO_GNU_OPS))
#else
Msg( "Error: Constant not found: RE_SYNTAX_POSIX_AWK\n");
cnt++;
#endif

#ifdef RE_SYNTAX_GREP
	CompareConstant(RE_SYNTAX_GREP,(RE_BK_PLUS_QM|RE_CHAR_CLASSES|RE_HAT_LISTS_NOT_NEWLINE|RE_INTERVALS|RE_NEWLINE_ALT))
#else
Msg( "Error: Constant not found: RE_SYNTAX_GREP\n");
cnt++;
#endif

#ifdef RE_SYNTAX_EGREP
	CompareConstant(RE_SYNTAX_EGREP,(RE_CHAR_CLASSES|RE_CONTEXT_INDEP_ANCHORS| RE_CONTEXT_INDEP_OPS|RE_HAT_LISTS_NOT_NEWLINE|RE_NEWLINE_ALT|RE_NO_BK_PARENS|RE_NO_BK_VBAR))
#else
Msg( "Error: Constant not found: RE_SYNTAX_EGREP\n");
cnt++;
#endif

#ifdef RE_SYNTAX_POSIX_EGREP
	CompareConstant(RE_SYNTAX_POSIX_EGREP,(RE_SYNTAX_EGREP|RE_INTERVALS|RE_NO_BK_BRACES|RE_INVALID_INTERVAL_ORD))
#else
Msg( "Error: Constant not found: RE_SYNTAX_POSIX_EGREP\n");
cnt++;
#endif

#ifdef RE_SYNTAX_ED
	CompareConstant(RE_SYNTAX_ED,RE_SYNTAX_POSIX_BASIC)
#else
Msg( "Error: Constant not found: RE_SYNTAX_ED\n");
cnt++;
#endif

#ifdef RE_SYNTAX_SED
	CompareConstant(RE_SYNTAX_SED,RE_SYNTAX_POSIX_BASIC)
#else
Msg( "Error: Constant not found: RE_SYNTAX_SED\n");
cnt++;
#endif

#ifdef RE_SYNTAX_POSIX_BASIC
	CompareConstant(RE_SYNTAX_POSIX_BASIC,(_RE_SYNTAX_POSIX_COMMON|RE_BK_PLUS_QM))
#else
Msg( "Error: Constant not found: RE_SYNTAX_POSIX_BASIC\n");
cnt++;
#endif

#ifdef RE_SYNTAX_POSIX_MINIMAL_BASIC
	CompareConstant(RE_SYNTAX_POSIX_MINIMAL_BASIC,(_RE_SYNTAX_POSIX_COMMON|RE_LIMITED_OPS))
#else
Msg( "Error: Constant not found: RE_SYNTAX_POSIX_MINIMAL_BASIC\n");
cnt++;
#endif

#ifdef RE_SYNTAX_POSIX_EXTENDED
	CompareConstant(RE_SYNTAX_POSIX_EXTENDED,(_RE_SYNTAX_POSIX_COMMON|RE_CONTEXT_INDEP_ANCHORS|RE_CONTEXT_INDEP_OPS|RE_NO_BK_BRACES|RE_NO_BK_PARENS|RE_NO_BK_VBAR|RE_CONTEXT_INVALID_OPS|RE_UNMATCHED_RIGHT_PAREN_ORD))
#else
Msg( "Error: Constant not found: RE_SYNTAX_POSIX_EXTENDED\n");
cnt++;
#endif

#ifdef RE_SYNTAX_POSIX_MINIMAL_EXTENDED
	CompareConstant(RE_SYNTAX_POSIX_MINIMAL_EXTENDED,(_RE_SYNTAX_POSIX_COMMON|RE_CONTEXT_INDEP_ANCHORS|RE_CONTEXT_INVALID_OPS|RE_NO_BK_BRACES|RE_NO_BK_PARENS|RE_NO_BK_REFS|RE_NO_BK_VBAR|RE_UNMATCHED_RIGHT_PAREN_ORD))
#else
Msg( "Error: Constant not found: RE_SYNTAX_POSIX_MINIMAL_EXTENDED\n");
cnt++;
#endif

#ifdef REG_EXTENDED
	CompareConstant(REG_EXTENDED,1)
#else
Msg( "Error: Constant not found: REG_EXTENDED\n");
cnt++;
#endif

#ifdef REG_ICASE
	CompareConstant(REG_ICASE,(REG_EXTENDED<<1))
#else
Msg( "Error: Constant not found: REG_ICASE\n");
cnt++;
#endif

#ifdef REG_NEWLINE
	CompareConstant(REG_NEWLINE,(REG_ICASE<<1))
#else
Msg( "Error: Constant not found: REG_NEWLINE\n");
cnt++;
#endif

#ifdef REG_NOSUB
	CompareConstant(REG_NOSUB,(REG_NEWLINE<<1))
#else
Msg( "Error: Constant not found: REG_NOSUB\n");
cnt++;
#endif

#ifdef REG_NOTBOL
	CompareConstant(REG_NOTBOL,1)
#else
Msg( "Error: Constant not found: REG_NOTBOL\n");
cnt++;
#endif

#ifdef REG_NOTEOL
	CompareConstant(REG_NOTEOL,(1<<1))
#else
Msg( "Error: Constant not found: REG_NOTEOL\n");
cnt++;
#endif

#ifdef REG_NOMATCH
	CompareConstant(REG_NOMATCH,-1)
#else
Msg( "Error: Constant not found: REG_NOMATCH\n");
cnt++;
#endif

#ifdef __i386__
CheckTypeSize(regex_t,32, 6945, 2)
#elif __ia64__
CheckTypeSize(regex_t,64, 6945, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6945,0);
#endif

#ifdef __i386__
CheckTypeSize(regmatch_t,8, 6949, 2)
#elif __ia64__
CheckTypeSize(regmatch_t,8, 6949, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6949,0);
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
