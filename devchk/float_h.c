/*
 * Test of float.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "float.h"



int float_h()
{
int cnt=0;
#ifdef LDBL_MIN_EXP
CompareConstant(LDBL_MIN_EXP,-16381)
#else
Msg( "Warning: Constant not found: LDBL_MIN_EXP\n");
#endif
#ifdef LDBL_MIN_10_EXP
CompareConstant(LDBL_MIN_10_EXP,-4931)
#else
Msg( "Warning: Constant not found: LDBL_MIN_10_EXP\n");
#endif
#ifdef LDBL_MIN
CompareConstant(LDBL_MIN,0)
#else
Msg( "Warning: Constant not found: LDBL_MIN\n");
#endif
#ifdef LDBL_MAX_EXP
CompareConstant(LDBL_MAX_EXP,16384)
#else
Msg( "Warning: Constant not found: LDBL_MAX_EXP\n");
#endif
#ifdef LDBL_MAX_10_EXP
CompareConstant(LDBL_MAX_10_EXP,4932)
#else
Msg( "Warning: Constant not found: LDBL_MAX_10_EXP\n");
#endif
#ifdef LDBL_MAX
CompareConstant(LDBL_MAX,-1)
#else
Msg( "Warning: Constant not found: LDBL_MAX\n");
#endif
#ifdef LDBL_MANT_DIG
CompareConstant(LDBL_MANT_DIG,64)
#else
Msg( "Warning: Constant not found: LDBL_MANT_DIG\n");
#endif
#ifdef LDBL_EPSILON
CompareConstant(LDBL_EPSILON,0)
#else
Msg( "Warning: Constant not found: LDBL_EPSILON\n");
#endif
#ifdef LDBL_DIG
CompareConstant(LDBL_DIG,18)
#else
Msg( "Warning: Constant not found: LDBL_DIG\n");
#endif
#ifdef FLT_ROUNDS
CompareConstant(FLT_ROUNDS,1)
#else
Msg( "Warning: Constant not found: FLT_ROUNDS\n");
#endif
#ifdef FLT_RADIX
CompareConstant(FLT_RADIX,2)
#else
Msg( "Warning: Constant not found: FLT_RADIX\n");
#endif
#ifdef FLT_MIN_EXP
CompareConstant(FLT_MIN_EXP,-125)
#else
Msg( "Warning: Constant not found: FLT_MIN_EXP\n");
#endif
#ifdef FLT_MIN_10_EXP
CompareConstant(FLT_MIN_10_EXP,-37)
#else
Msg( "Warning: Constant not found: FLT_MIN_10_EXP\n");
#endif
#ifdef FLT_MIN
CompareConstant(FLT_MIN,0)
#else
Msg( "Warning: Constant not found: FLT_MIN\n");
#endif
#ifdef FLT_MAX_EXP
CompareConstant(FLT_MAX_EXP,128)
#else
Msg( "Warning: Constant not found: FLT_MAX_EXP\n");
#endif
#ifdef FLT_MAX_10_EXP
CompareConstant(FLT_MAX_10_EXP,38)
#else
Msg( "Warning: Constant not found: FLT_MAX_10_EXP\n");
#endif
#ifdef FLT_MAX
CompareConstant(FLT_MAX,-536870912)
#else
Msg( "Warning: Constant not found: FLT_MAX\n");
#endif
#ifdef FLT_MANT_DIG
CompareConstant(FLT_MANT_DIG,24)
#else
Msg( "Warning: Constant not found: FLT_MANT_DIG\n");
#endif
#ifdef FLT_EPSILON
CompareConstant(FLT_EPSILON,0)
#else
Msg( "Warning: Constant not found: FLT_EPSILON\n");
#endif
#ifdef FLT_DIG
CompareConstant(FLT_DIG,6)
#else
Msg( "Warning: Constant not found: FLT_DIG\n");
#endif
#ifdef DBL_MIN_EXP
CompareConstant(DBL_MIN_EXP,-1021)
#else
Msg( "Warning: Constant not found: DBL_MIN_EXP\n");
#endif
#ifdef DBL_MIN_10_EXP
CompareConstant(DBL_MIN_10_EXP,-307)
#else
Msg( "Warning: Constant not found: DBL_MIN_10_EXP\n");
#endif
#ifdef DBL_MIN
CompareConstant(DBL_MIN,0)
#else
Msg( "Warning: Constant not found: DBL_MIN\n");
#endif
#ifdef DBL_MAX_EXP
CompareConstant(DBL_MAX_EXP,1024)
#else
Msg( "Warning: Constant not found: DBL_MAX_EXP\n");
#endif
#ifdef DBL_MAX_10_EXP
CompareConstant(DBL_MAX_10_EXP,308)
#else
Msg( "Warning: Constant not found: DBL_MAX_10_EXP\n");
#endif
#ifdef DBL_MAX
CompareConstant(DBL_MAX,-1)
#else
Msg( "Warning: Constant not found: DBL_MAX\n");
#endif
#ifdef DBL_MANT_DIG
CompareConstant(DBL_MANT_DIG,53)
#else
Msg( "Warning: Constant not found: DBL_MANT_DIG\n");
#endif
#ifdef DBL_EPSILON
CompareConstant(DBL_EPSILON,0)
#else
Msg( "Warning: Constant not found: DBL_EPSILON\n");
#endif
#ifdef DBL_DIG
CompareConstant(DBL_DIG,15)
#else
Msg( "Warning: Constant not found: DBL_DIG\n");
#endif
printf("%d tests in float.h\n",cnt);
return cnt;
}
