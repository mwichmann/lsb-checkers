/*
 * Test of limits.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "limits.h"



#ifdef TET_TEST
void limits_h()
{
#else
int limits_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in limits.h\n");
#endif

#ifdef HUGE_VAL
	CompareConstant(HUGE_VAL,0xFFFFFFFF)
#else
Msg( "Warning: Constant not found: HUGE_VAL\n");
#endif

#ifdef MB_LEN_MAX
	CompareConstant(MB_LEN_MAX,16)
#else
Msg( "Warning: Constant not found: MB_LEN_MAX\n");
#endif

#ifdef CHAR_BIT
	CompareConstant(CHAR_BIT,8)
#else
Msg( "Warning: Constant not found: CHAR_BIT\n");
#endif

#ifdef SCHAR_MIN
	CompareConstant(SCHAR_MIN,(-128))
#else
Msg( "Warning: Constant not found: SCHAR_MIN\n");
#endif

#ifdef SCHAR_MAX
	CompareConstant(SCHAR_MAX,127)
#else
Msg( "Warning: Constant not found: SCHAR_MAX\n");
#endif

#ifdef UCHAR_MAX
	CompareConstant(UCHAR_MAX,255)
#else
Msg( "Warning: Constant not found: UCHAR_MAX\n");
#endif

#ifdef CHAR_MIN
	CompareConstant(CHAR_MIN,SCHAR_MIN)
#else
Msg( "Warning: Constant not found: CHAR_MIN\n");
#endif

#ifdef CHAR_MAX
	CompareConstant(CHAR_MAX,SCHAR_MAX)
#else
Msg( "Warning: Constant not found: CHAR_MAX\n");
#endif

#ifdef SHRT_MIN
	CompareConstant(SHRT_MIN,(-32768))
#else
Msg( "Warning: Constant not found: SHRT_MIN\n");
#endif

#ifdef SHRT_MAX
	CompareConstant(SHRT_MAX,32767)
#else
Msg( "Warning: Constant not found: SHRT_MAX\n");
#endif

#ifdef USHRT_MAX
	CompareConstant(USHRT_MAX,65535)
#else
Msg( "Warning: Constant not found: USHRT_MAX\n");
#endif

#ifdef INT_MIN
	CompareConstant(INT_MIN,(-INT_MAX-1))
#else
Msg( "Warning: Constant not found: INT_MIN\n");
#endif

#ifdef INT_MAX
	CompareConstant(INT_MAX,2147483647)
#else
Msg( "Warning: Constant not found: INT_MAX\n");
#endif

#ifdef UINT_MAX
	CompareConstant(UINT_MAX,4294967295U)
#else
Msg( "Warning: Constant not found: UINT_MAX\n");
#endif

#ifdef __INT_MAX__
	CompareConstant(__INT_MAX__,2147483647)
#else
Msg( "Warning: Constant not found: __INT_MAX__\n");
#endif

#ifdef LONG_MAX
	CompareConstant(LONG_MAX,2147483647L)
#else
Msg( "Warning: Constant not found: LONG_MAX\n");
#endif

#ifdef LONG_MIN
	CompareConstant(LONG_MIN,(-LONG_MAX-1L))
#else
Msg( "Warning: Constant not found: LONG_MIN\n");
#endif

#ifdef ULONG_MAX
	CompareConstant(ULONG_MAX,4294967295UL)
#else
Msg( "Warning: Constant not found: ULONG_MAX\n");
#endif

#ifdef __LONG_MAX__
	CompareConstant(__LONG_MAX__,2147483647L)
#else
Msg( "Warning: Constant not found: __LONG_MAX__\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in limits.h\n",cnt);
return cnt;
#endif

}
