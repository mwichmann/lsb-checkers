/*
 * Test of math.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "math.h"



int math_h()
{
int cnt=0;
#ifdef MAXFLOAT
CompareConstant(MAXFLOAT,(-1))
#else
Msg( "Warning: Constant not found: MAXFLOAT\n");
#endif
#ifdef M_SQRT1_2
CompareConstant(M_SQRT1_2,1719614413)
#else
Msg( "Warning: Constant not found: M_SQRT1_2\n");
#endif
#ifdef M_SQRT2
CompareConstant(M_SQRT2,1719614413)
#else
Msg( "Warning: Constant not found: M_SQRT2\n");
#endif
#ifdef M_2_SQRTPI
CompareConstant(M_2_SQRTPI,1346542445)
#else
Msg( "Warning: Constant not found: M_2_SQRTPI\n");
#endif
#ifdef M_2_PI
CompareConstant(M_2_PI,1841940611)
#else
Msg( "Warning: Constant not found: M_2_PI\n");
#endif
#ifdef M_1_PI
CompareConstant(M_1_PI,1841940611)
#else
Msg( "Warning: Constant not found: M_1_PI\n");
#endif
#ifdef M_PI_4
CompareConstant(M_PI_4,1413754136)
#else
Msg( "Warning: Constant not found: M_PI_4\n");
#endif
#ifdef M_PI_2
CompareConstant(M_PI_2,1413754136)
#else
Msg( "Warning: Constant not found: M_PI_2\n");
#endif
#ifdef M_PI
CompareConstant(M_PI,1413754136)
#else
Msg( "Warning: Constant not found: M_PI\n");
#endif
#ifdef M_LN10
CompareConstant(M_LN10,-1145744106)
#else
Msg( "Warning: Constant not found: M_LN10\n");
#endif
#ifdef M_LN2
CompareConstant(M_LN2,-17155601)
#else
Msg( "Warning: Constant not found: M_LN2\n");
#endif
#ifdef M_LOG10E
CompareConstant(M_LOG10E,354870542)
#else
Msg( "Warning: Constant not found: M_LOG10E\n");
#endif
#ifdef M_LOG2E
CompareConstant(M_LOG2E,1697350398)
#else
Msg( "Warning: Constant not found: M_LOG2E\n");
#endif
#ifdef M_E
CompareConstant(M_E,2.718282)
#else
Msg( "Warning: Constant not found: M_E\n");
#endif
#ifdef HUGE_VAL
CompareConstant(HUGE_VAL,0)
#else
Msg( "Warning: Constant not found: HUGE_VAL\n");
#endif
printf("%d tests in math.h\n",cnt);
return cnt;
}
