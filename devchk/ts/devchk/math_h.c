/*
 * Test of math.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "math.h"



#ifdef TET_TEST
void math_h()
{
#else
int math_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in math.h\n");
#endif

#ifdef M_E
	CompareConstant(M_E,2.7182818284590452354)
#else
Msg( "Warning: Constant not found: M_E\n");
#endif

#ifdef M_LOG2E
	CompareConstant(M_LOG2E,1.4426950408889634074)
#else
Msg( "Warning: Constant not found: M_LOG2E\n");
#endif

#ifdef M_LOG10E
	CompareConstant(M_LOG10E,0.43429448190325182765)
#else
Msg( "Warning: Constant not found: M_LOG10E\n");
#endif

#ifdef M_LN2
	CompareConstant(M_LN2,0.69314718055994530942)
#else
Msg( "Warning: Constant not found: M_LN2\n");
#endif

#ifdef M_LN10
	CompareConstant(M_LN10,2.30258509299404568402)
#else
Msg( "Warning: Constant not found: M_LN10\n");
#endif

#ifdef M_PI
	CompareConstant(M_PI,3.14159265358979323846)
#else
Msg( "Warning: Constant not found: M_PI\n");
#endif

#ifdef M_PI_2
	CompareConstant(M_PI_2,1.57079632679489661923)
#else
Msg( "Warning: Constant not found: M_PI_2\n");
#endif

#ifdef M_PI_4
	CompareConstant(M_PI_4,0.78539816339744830962)
#else
Msg( "Warning: Constant not found: M_PI_4\n");
#endif

#ifdef M_1_PI
	CompareConstant(M_1_PI,0.31830988618379067154)
#else
Msg( "Warning: Constant not found: M_1_PI\n");
#endif

#ifdef M_2_PI
	CompareConstant(M_2_PI,0.63661977236758134308)
#else
Msg( "Warning: Constant not found: M_2_PI\n");
#endif

#ifdef M_2_SQRTPI
	CompareConstant(M_2_SQRTPI,1.12837916709551257390)
#else
Msg( "Warning: Constant not found: M_2_SQRTPI\n");
#endif

#ifdef M_SQRT2
	CompareConstant(M_SQRT2,1.41421356237309504880)
#else
Msg( "Warning: Constant not found: M_SQRT2\n");
#endif

#ifdef M_SQRT1_2
	CompareConstant(M_SQRT1_2,0.70710678118654752440)
#else
Msg( "Warning: Constant not found: M_SQRT1_2\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in math.h\n",cnt);
return cnt;
#endif

}
