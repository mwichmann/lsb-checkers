/*
 * Test of glob.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "glob.h"



#ifdef TET_TEST
void glob_h()
{
#else
int glob_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in glob.h\n");
#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GLOB_ERR
	CompareConstant(GLOB_ERR,(1<<0),853,architecture)
#else
Msg( "Error: Constant not found: GLOB_ERR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GLOB_MARK
	CompareConstant(GLOB_MARK,(1<<1),854,architecture)
#else
Msg( "Error: Constant not found: GLOB_MARK\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GLOB_NOSORT
	CompareConstant(GLOB_NOSORT,(1<<2),855,architecture)
#else
Msg( "Error: Constant not found: GLOB_NOSORT\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GLOB_DOOFFS
	CompareConstant(GLOB_DOOFFS,(1<<3),856,architecture)
#else
Msg( "Error: Constant not found: GLOB_DOOFFS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GLOB_NOCHECK
	CompareConstant(GLOB_NOCHECK,(1<<4),857,architecture)
#else
Msg( "Error: Constant not found: GLOB_NOCHECK\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GLOB_APPEND
	CompareConstant(GLOB_APPEND,(1<<5),858,architecture)
#else
Msg( "Error: Constant not found: GLOB_APPEND\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GLOB_NOESCAPE
	CompareConstant(GLOB_NOESCAPE,(1<<6),859,architecture)
#else
Msg( "Error: Constant not found: GLOB_NOESCAPE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GLOB_PERIOD
	CompareConstant(GLOB_PERIOD,(1<<7),860,architecture)
#else
Msg( "Error: Constant not found: GLOB_PERIOD\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GLOB_MAGCHAR
	CompareConstant(GLOB_MAGCHAR,(1<<8),861,architecture)
#else
Msg( "Error: Constant not found: GLOB_MAGCHAR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GLOB_ALTDIRFUNC
	CompareConstant(GLOB_ALTDIRFUNC,(1<<9),862,architecture)
#else
Msg( "Error: Constant not found: GLOB_ALTDIRFUNC\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GLOB_BRACE
	CompareConstant(GLOB_BRACE,(1<<10),863,architecture)
#else
Msg( "Error: Constant not found: GLOB_BRACE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GLOB_NOMAGIC
	CompareConstant(GLOB_NOMAGIC,(1<<11),864,architecture)
#else
Msg( "Error: Constant not found: GLOB_NOMAGIC\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GLOB_TILDE
	CompareConstant(GLOB_TILDE,(1<<12),865,architecture)
#else
Msg( "Error: Constant not found: GLOB_TILDE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GLOB_ONLYDIR
	CompareConstant(GLOB_ONLYDIR,(1<<13),866,architecture)
#else
Msg( "Error: Constant not found: GLOB_ONLYDIR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GLOB_TILDE_CHECK
	CompareConstant(GLOB_TILDE_CHECK,(1<<14),867,architecture)
#else
Msg( "Error: Constant not found: GLOB_TILDE_CHECK\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GLOB_NOSPACE
	CompareConstant(GLOB_NOSPACE,1,869,architecture)
#else
Msg( "Error: Constant not found: GLOB_NOSPACE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GLOB_ABORTED
	CompareConstant(GLOB_ABORTED,2,870,architecture)
#else
Msg( "Error: Constant not found: GLOB_ABORTED\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GLOB_NOMATCH
	CompareConstant(GLOB_NOMATCH,3,871,architecture)
#else
Msg( "Error: Constant not found: GLOB_NOMATCH\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GLOB_NOSYS
	CompareConstant(GLOB_NOSYS,4,872,architecture)
#else
Msg( "Error: Constant not found: GLOB_NOSYS\n");
cnt++;
#endif

#endif

#ifdef __ia64__
CheckTypeSize(glob_t,72, 9005, 3)
#elif __i386__
CheckTypeSize(glob_t,36, 9005, 2)
#elif __powerpc__
CheckTypeSize(glob_t,36, 9005, 6)
#elif __s390__
CheckTypeSize(glob_t,0, 9005, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9005,0);
Msg("Find size of glob_t (9005)\n");
#endif

#ifdef __i386__
CheckTypeSize(glob64_t,36, 9007, 2)
#elif __ia64__
CheckTypeSize(glob64_t,72, 9007, 3)
#elif __powerpc__
CheckTypeSize(glob64_t,36, 9007, 6)
#elif __s390__
CheckTypeSize(glob64_t,0, 9007, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9007,0);
Msg("Find size of glob64_t (9007)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in glob.h\n",cnt);
return cnt;
#endif

}
