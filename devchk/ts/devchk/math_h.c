/*
 * Test of math.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
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

#if _LSB_DEFAULT_ARCH
#ifdef M_1_PI
	CompareConstant(M_1_PI,0.31830988618379067154,1523,architecture)
#else
Msg( "Error: Constant not found: M_1_PI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef M_LN2
	CompareConstant(M_LN2,0.69314718055994530942,1518,architecture)
#else
Msg( "Error: Constant not found: M_LN2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SING
	CompareConstant(SING,2,1509,architecture)
#else
Msg( "Error: Constant not found: SING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for HUGE_VAL */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef M_PI_4
	CompareConstant(M_PI_4,0.78539816339744830962,1522,architecture)
#else
Msg( "Error: Constant not found: M_PI_4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef M_SQRT2
	CompareConstant(M_SQRT2,1.41421356237309504880,1526,architecture)
#else
Msg( "Error: Constant not found: M_SQRT2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef M_LOG10E
	CompareConstant(M_LOG10E,0.43429448190325182765,1517,architecture)
#else
Msg( "Error: Constant not found: M_LOG10E\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef M_2_SQRTPI
	CompareConstant(M_2_SQRTPI,1.12837916709551257390,1525,architecture)
#else
Msg( "Error: Constant not found: M_2_SQRTPI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef M_LOG2E
	CompareConstant(M_LOG2E,1.4426950408889634074,1516,architecture)
#else
Msg( "Error: Constant not found: M_LOG2E\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef M_PI_2
	CompareConstant(M_PI_2,1.57079632679489661923,1521,architecture)
#else
Msg( "Error: Constant not found: M_PI_2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef M_SQRT1_2
	CompareConstant(M_SQRT1_2,0.70710678118654752440,1527,architecture)
#else
Msg( "Error: Constant not found: M_SQRT1_2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef M_LN10
	CompareConstant(M_LN10,2.30258509299404568402,1519,architecture)
#else
Msg( "Error: Constant not found: M_LN10\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef M_2_PI
	CompareConstant(M_2_PI,0.63661977236758134308,1524,architecture)
#else
Msg( "Error: Constant not found: M_2_PI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DOMAIN
	CompareConstant(DOMAIN,1,1508,architecture)
#else
Msg( "Error: Constant not found: DOMAIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef M_PI
	CompareConstant(M_PI,3.14159265358979323846,1520,architecture)
#else
Msg( "Error: Constant not found: M_PI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef M_E
	CompareConstant(M_E,2.7182818284590452354,1515,architecture)
#else
Msg( "Error: Constant not found: M_E\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(struct exception,32, 10010, 2)
CheckMemberSize(struct exception,type,4,2,32294)
CheckOffset(struct exception,type,0,2,32294)
CheckMemberSize(struct exception,name,4,2,32295)
CheckOffset(struct exception,name,4,2,32295)
CheckMemberSize(struct exception,arg1,8,2,32296)
CheckOffset(struct exception,arg1,8,2,32296)
CheckMemberSize(struct exception,arg2,8,2,32297)
CheckOffset(struct exception,arg2,16,2,32297)
CheckMemberSize(struct exception,retval,8,2,32298)
CheckOffset(struct exception,retval,24,2,32298)
#elif __ia64__
CheckTypeSize(struct exception,40, 10010, 3)
CheckMemberSize(struct exception,type,4,3,32294)
CheckOffset(struct exception,type,0,3,32294)
CheckMemberSize(struct exception,name,0,3,32295)
CheckOffset(struct exception,name,8,3,32295)
CheckMemberSize(struct exception,arg1,0,3,32296)
CheckOffset(struct exception,arg1,16,3,32296)
CheckMemberSize(struct exception,arg2,0,3,32297)
CheckOffset(struct exception,arg2,24,3,32297)
CheckMemberSize(struct exception,retval,0,3,32298)
CheckOffset(struct exception,retval,32,3,32298)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct exception,32, 10010, 6)
CheckMemberSize(struct exception,type,4,6,32294)
CheckOffset(struct exception,type,0,6,32294)
CheckMemberSize(struct exception,name,4,6,32295)
CheckOffset(struct exception,name,4,6,32295)
CheckMemberSize(struct exception,arg1,4,6,32296)
CheckOffset(struct exception,arg1,8,6,32296)
CheckMemberSize(struct exception,arg2,0,6,32297)
CheckOffset(struct exception,arg2,16,6,32297)
CheckMemberSize(struct exception,retval,0,6,32298)
CheckOffset(struct exception,retval,24,6,32298)
#elif __s390__
CheckTypeSize(struct exception,32, 10010, 10)
CheckMemberSize(struct exception,type,4,10,32294)
CheckOffset(struct exception,type,0,10,32294)
CheckMemberSize(struct exception,name,4,10,32295)
CheckOffset(struct exception,name,4,10,32295)
CheckMemberSize(struct exception,arg1,4,10,32296)
CheckOffset(struct exception,arg1,8,10,32296)
CheckMemberSize(struct exception,arg2,0,10,32297)
CheckOffset(struct exception,arg2,16,10,32297)
CheckMemberSize(struct exception,retval,0,10,32298)
CheckOffset(struct exception,retval,24,10,32298)
#elif __powerpc64__
CheckTypeSize(struct exception,40, 10010, 9)
CheckMemberSize(struct exception,type,4,9,32294)
CheckOffset(struct exception,type,0,9,32294)
CheckMemberSize(struct exception,name,0,9,32295)
CheckOffset(struct exception,name,8,9,32295)
CheckMemberSize(struct exception,arg1,0,9,32296)
CheckOffset(struct exception,arg1,16,9,32296)
CheckMemberSize(struct exception,arg2,0,9,32297)
CheckOffset(struct exception,arg2,24,9,32297)
CheckMemberSize(struct exception,retval,0,9,32298)
CheckOffset(struct exception,retval,32,9,32298)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10010,0);
Msg("Find size of exception (10010)\n");
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
