/*
 * Test of math.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
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

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in math.h\n");
#endif

printf("Checking data structures in math.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef DOMAIN
	CompareConstant(DOMAIN,1,1508,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: DOMAIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SING
	CompareConstant(SING,2,1509,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef M_E
	CompareDoubleConstant(M_E,2.7182818284590452354,1515,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: M_E\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef M_LOG2E
	CompareDoubleConstant(M_LOG2E,1.4426950408889634074,1516,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: M_LOG2E\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef M_LOG10E
	CompareDoubleConstant(M_LOG10E,0.43429448190325182765,1517,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: M_LOG10E\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef M_LN2
	CompareDoubleConstant(M_LN2,0.69314718055994530942,1518,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: M_LN2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef M_LN10
	CompareDoubleConstant(M_LN10,2.30258509299404568402,1519,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: M_LN10\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef M_PI
	CompareDoubleConstant(M_PI,3.14159265358979323846,1520,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: M_PI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef M_PI_2
	CompareDoubleConstant(M_PI_2,1.57079632679489661923,1521,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: M_PI_2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef M_PI_4
	CompareDoubleConstant(M_PI_4,0.78539816339744830962,1522,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: M_PI_4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef M_1_PI
	CompareDoubleConstant(M_1_PI,0.31830988618379067154,1523,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: M_1_PI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef M_2_PI
	CompareDoubleConstant(M_2_PI,0.63661977236758134308,1524,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: M_2_PI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef M_2_SQRTPI
	CompareDoubleConstant(M_2_SQRTPI,1.12837916709551257390,1525,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: M_2_SQRTPI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef M_SQRT2
	CompareDoubleConstant(M_SQRT2,1.41421356237309504880,1526,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: M_SQRT2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef M_SQRT1_2
	CompareDoubleConstant(M_SQRT1_2,0.70710678118654752440,1527,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: M_SQRT1_2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef HUGE_VAL
	CompareDoubleConstant(HUGE_VAL,0x1.0p2047,3083,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: HUGE_VAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for NAN */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef MATH_ERRNO
	CompareConstant(MATH_ERRNO,1,5135,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: MATH_ERRNO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MATH_ERREXCEPT
	CompareConstant(MATH_ERREXCEPT,2,5136,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: MATH_ERREXCEPT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef HUGE_VALF
	CompareFloatConstant(HUGE_VALF,0x1.0p255f,5138,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: HUGE_VALF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef HUGE_VALL
	CompareLongDoubleConstant(HUGE_VALL,0x1.0p32767L,5139,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: HUGE_VALL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for INFINITY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for isnan(x) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for isinf(x) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for isfinite(x) */
#endif

#if defined __powerpc64__
/* No test for fpclassify(x) */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for fpclassify(x) */
#elif defined __ia64__
/* No test for fpclassify(x) */
#elif defined __i386__
/* No test for fpclassify(x) */
#elif defined __s390x__
/* No test for fpclassify(x) */
#elif defined __x86_64__
/* No test for fpclassify(x) */
#elif defined __s390__ && !defined __s390x__
/* No test for fpclassify(x) */
#else
Msg( "No definition for fpclassify(x) (5248, macro) in db\n");
#ifdef fpclassify(x)
#endif
#endif
#if _LSB_DEFAULT_ARCH
/* No test for isnormal(x) */
#endif

#if defined __powerpc64__
/* No test for signbit(x) */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for signbit(x) */
#elif defined __ia64__
/* No test for signbit(x) */
#elif defined __i386__
/* No test for signbit(x) */
#elif defined __s390x__
/* No test for signbit(x) */
#elif defined __x86_64__
/* No test for signbit(x) */
#elif defined __s390__ && !defined __s390x__
/* No test for signbit(x) */
#else
Msg( "No definition for signbit(x) (5250, macro) in db\n");
#ifdef signbit(x)
#endif
#endif
#if _LSB_DEFAULT_ARCH
/* No test for isgreater(x,y) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for isgreaterequal(x,y) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for isless(x,y) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for islessequal(x, y) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for islessgreater(x, y) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for isunordered(u, v) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef FP_NAN
	CompareConstant(FP_NAN,0,5257,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: FP_NAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FP_INFINITE
	CompareConstant(FP_INFINITE,1,5258,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: FP_INFINITE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FP_ZERO
	CompareConstant(FP_ZERO,2,5259,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: FP_ZERO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FP_SUBNORMAL
	CompareConstant(FP_SUBNORMAL,3,5260,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: FP_SUBNORMAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FP_NORMAL
	CompareConstant(FP_NORMAL,4,5261,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: FP_NORMAL\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef FP_ILOGB0
	CompareConstant(FP_ILOGB0,-2147483647,5262,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: FP_ILOGB0\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef FP_ILOGB0
	CompareConstant(FP_ILOGB0,-2147483647,5262,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: FP_ILOGB0\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef FP_ILOGB0
	CompareConstant(FP_ILOGB0,-2147483648,5262,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: FP_ILOGB0\n");
cnt++;
#endif

#elif defined __i386__
#ifdef FP_ILOGB0
	CompareConstant(FP_ILOGB0,(-2147483647 - 1),5262,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: FP_ILOGB0\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef FP_ILOGB0
	CompareConstant(FP_ILOGB0,-2147483647,5262,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: FP_ILOGB0\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef FP_ILOGB0
	CompareConstant(FP_ILOGB0,-2147483648,5262,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: FP_ILOGB0\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef FP_ILOGB0
	CompareConstant(FP_ILOGB0,-2147483647,5262,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: FP_ILOGB0\n");
cnt++;
#endif

#else
Msg( "No definition for FP_ILOGB0 (5262, int) in db\n");
#ifdef FP_ILOGB0
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5262,%d,'""2.1""',NULL);\n", architecture, FP_ILOGB0);
#endif
#endif
#if defined __powerpc64__
#ifdef FP_ILOGBNAN
	CompareConstant(FP_ILOGBNAN,2147483647,5263,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: FP_ILOGBNAN\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef FP_ILOGBNAN
	CompareConstant(FP_ILOGBNAN,2147483647,5263,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: FP_ILOGBNAN\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef FP_ILOGBNAN
	CompareConstant(FP_ILOGBNAN,2147483647,5263,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: FP_ILOGBNAN\n");
cnt++;
#endif

#elif defined __i386__
#ifdef FP_ILOGBNAN
	CompareConstant(FP_ILOGBNAN,(-2147483647 - 1),5263,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: FP_ILOGBNAN\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef FP_ILOGBNAN
	CompareConstant(FP_ILOGBNAN,2147483647,5263,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: FP_ILOGBNAN\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef FP_ILOGBNAN
	CompareConstant(FP_ILOGBNAN,-2147483648,5263,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: FP_ILOGBNAN\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef FP_ILOGBNAN
	CompareConstant(FP_ILOGBNAN,2147483647,5263,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: FP_ILOGBNAN\n");
cnt++;
#endif

#else
Msg( "No definition for FP_ILOGBNAN (5263, int) in db\n");
#ifdef FP_ILOGBNAN
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5263,%d,'""2.1""',NULL);\n", architecture, FP_ILOGBNAN);
#endif
#endif
#if defined __i386__
CheckTypeSize(struct exception,32, 10010, 2, 1.2, NULL, 0, NULL)
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
#elif defined __ia64__
CheckTypeSize(struct exception,40, 10010, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct exception,type,4,3,32294)
CheckOffset(struct exception,type,0,3,32294)
CheckMemberSize(struct exception,name,8,3,32295)
CheckOffset(struct exception,name,8,3,32295)
CheckMemberSize(struct exception,arg1,8,3,32296)
CheckOffset(struct exception,arg1,16,3,32296)
CheckMemberSize(struct exception,arg2,8,3,32297)
CheckOffset(struct exception,arg2,24,3,32297)
CheckMemberSize(struct exception,retval,8,3,32298)
CheckOffset(struct exception,retval,32,3,32298)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct exception,32, 10010, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct exception,type,4,6,32294)
CheckOffset(struct exception,type,0,6,32294)
CheckMemberSize(struct exception,name,4,6,32295)
CheckOffset(struct exception,name,4,6,32295)
CheckMemberSize(struct exception,arg1,8,6,32296)
CheckOffset(struct exception,arg1,8,6,32296)
CheckMemberSize(struct exception,arg2,8,6,32297)
CheckOffset(struct exception,arg2,16,6,32297)
CheckMemberSize(struct exception,retval,8,6,32298)
CheckOffset(struct exception,retval,24,6,32298)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct exception,32, 10010, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct exception,type,4,10,32294)
CheckOffset(struct exception,type,0,10,32294)
CheckMemberSize(struct exception,name,4,10,32295)
CheckOffset(struct exception,name,4,10,32295)
CheckMemberSize(struct exception,arg1,8,10,32296)
CheckOffset(struct exception,arg1,8,10,32296)
CheckMemberSize(struct exception,arg2,8,10,32297)
CheckOffset(struct exception,arg2,16,10,32297)
CheckMemberSize(struct exception,retval,8,10,32298)
CheckOffset(struct exception,retval,24,10,32298)
#elif defined __powerpc64__
CheckTypeSize(struct exception,40, 10010, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct exception,type,4,9,32294)
CheckOffset(struct exception,type,0,9,32294)
CheckMemberSize(struct exception,name,8,9,32295)
CheckOffset(struct exception,name,8,9,32295)
CheckMemberSize(struct exception,arg1,8,9,32296)
CheckOffset(struct exception,arg1,16,9,32296)
CheckMemberSize(struct exception,arg2,8,9,32297)
CheckOffset(struct exception,arg2,24,9,32297)
CheckMemberSize(struct exception,retval,8,9,32298)
CheckOffset(struct exception,retval,32,9,32298)
#elif defined __s390x__
CheckTypeSize(struct exception,40, 10010, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct exception,name,8,12,32295)
CheckOffset(struct exception,name,8,12,32295)
CheckMemberSize(struct exception,arg1,8,12,32296)
CheckOffset(struct exception,arg1,16,12,32296)
CheckMemberSize(struct exception,arg2,8,12,32297)
CheckOffset(struct exception,arg2,24,12,32297)
CheckMemberSize(struct exception,retval,8,12,32298)
CheckOffset(struct exception,retval,32,12,32298)
#elif defined __x86_64__
CheckTypeSize(struct exception,40, 10010, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct exception,name,8,11,32295)
CheckOffset(struct exception,name,8,11,32295)
CheckMemberSize(struct exception,arg1,8,11,32296)
CheckOffset(struct exception,arg1,16,11,32296)
CheckMemberSize(struct exception,arg2,8,11,32297)
CheckOffset(struct exception,arg2,24,11,32297)
CheckMemberSize(struct exception,retval,8,11,32298)
CheckOffset(struct exception,retval,32,11,32298)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0, NULL);\n",architecture,10010,0);
Msg("Find size of exception (10010)\n");
#endif

extern int __finite_db(double);
CheckInterfacedef(__finite,__finite_db);
extern int __finitef_db(float);
CheckInterfacedef(__finitef,__finitef_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern int __finitel_db(long double);
CheckInterfacedef(__finitel,__finitel_db);
#endif		/* hack */
extern int __isinf_db(double);
CheckInterfacedef(__isinf,__isinf_db);
extern int __isinff_db(float);
CheckInterfacedef(__isinff,__isinff_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern int __isinfl_db(long double);
CheckInterfacedef(__isinfl,__isinfl_db);
#endif		/* hack */
extern int __isnan_db(double);
CheckInterfacedef(__isnan,__isnan_db);
extern int __isnanf_db(float);
CheckInterfacedef(__isnanf,__isnanf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern int __isnanl_db(long double);
CheckInterfacedef(__isnanl,__isnanl_db);
#endif		/* hack */
extern int __signbit_db(double);
CheckInterfacedef(__signbit,__signbit_db);
extern int __signbitf_db(float);
CheckInterfacedef(__signbitf,__signbitf_db);
extern int __fpclassify_db(double);
CheckInterfacedef(__fpclassify,__fpclassify_db);
extern int __fpclassifyf_db(float);
CheckInterfacedef(__fpclassifyf,__fpclassifyf_db);
#if defined __i386__
/* IA32 */
extern int __fpclassifyl_db(long double);
CheckInterfacedef(__fpclassifyl,__fpclassifyl_db);
#endif
#if defined __ia64__
/* IA64 */
extern int __fpclassifyl_db(long double);
CheckInterfacedef(__fpclassifyl,__fpclassifyl_db);
#endif
#if defined __x86_64__
/* x86-64 */
extern int __fpclassifyl_db(long double);
CheckInterfacedef(__fpclassifyl,__fpclassifyl_db);
#endif
extern double copysign_db(double, double);
CheckInterfacedef(copysign,copysign_db);
extern int finite_db(double);
CheckInterfacedef(finite,finite_db);
extern double frexp_db(double, int *);
CheckInterfacedef(frexp,frexp_db);
extern double ldexp_db(double, int);
CheckInterfacedef(ldexp,ldexp_db);
extern double modf_db(double, double *);
CheckInterfacedef(modf,modf_db);
extern double acos_db(double);
CheckInterfacedef(acos,acos_db);
extern double acosh_db(double);
CheckInterfacedef(acosh,acosh_db);
extern double asinh_db(double);
CheckInterfacedef(asinh,asinh_db);
extern double atanh_db(double);
CheckInterfacedef(atanh,atanh_db);
extern double asin_db(double);
CheckInterfacedef(asin,asin_db);
extern double atan_db(double);
CheckInterfacedef(atan,atan_db);
extern double atan2_db(double, double);
CheckInterfacedef(atan2,atan2_db);
extern double cbrt_db(double);
CheckInterfacedef(cbrt,cbrt_db);
extern double ceil_db(double);
CheckInterfacedef(ceil,ceil_db);
extern double cos_db(double);
CheckInterfacedef(cos,cos_db);
extern double cosh_db(double);
CheckInterfacedef(cosh,cosh_db);
extern double erf_db(double);
CheckInterfacedef(erf,erf_db);
extern double erfc_db(double);
CheckInterfacedef(erfc,erfc_db);
extern double exp_db(double);
CheckInterfacedef(exp,exp_db);
extern double expm1_db(double);
CheckInterfacedef(expm1,expm1_db);
extern double fabs_db(double);
CheckInterfacedef(fabs,fabs_db);
extern double floor_db(double);
CheckInterfacedef(floor,floor_db);
extern double fmod_db(double, double);
CheckInterfacedef(fmod,fmod_db);
extern double gamma_db(double);
CheckInterfacedef(gamma,gamma_db);
extern double hypot_db(double, double);
CheckInterfacedef(hypot,hypot_db);
extern int ilogb_db(double);
CheckInterfacedef(ilogb,ilogb_db);
extern double j0_db(double);
CheckInterfacedef(j0,j0_db);
extern double j1_db(double);
CheckInterfacedef(j1,j1_db);
extern double jn_db(int, double);
CheckInterfacedef(jn,jn_db);
extern double lgamma_db(double);
CheckInterfacedef(lgamma,lgamma_db);
extern double log_db(double);
CheckInterfacedef(log,log_db);
extern double log10_db(double);
CheckInterfacedef(log10,log10_db);
extern double log1p_db(double);
CheckInterfacedef(log1p,log1p_db);
extern double logb_db(double);
CheckInterfacedef(logb,logb_db);
extern double nextafter_db(double, double);
CheckInterfacedef(nextafter,nextafter_db);
extern double pow_db(double, double);
CheckInterfacedef(pow,pow_db);
extern double remainder_db(double, double);
CheckInterfacedef(remainder,remainder_db);
extern double rint_db(double);
CheckInterfacedef(rint,rint_db);
extern double scalb_db(double, double);
CheckInterfacedef(scalb,scalb_db);
extern double sin_db(double);
CheckInterfacedef(sin,sin_db);
extern double sinh_db(double);
CheckInterfacedef(sinh,sinh_db);
extern double sqrt_db(double);
CheckInterfacedef(sqrt,sqrt_db);
extern double tan_db(double);
CheckInterfacedef(tan,tan_db);
extern double tanh_db(double);
CheckInterfacedef(tanh,tanh_db);
extern double y0_db(double);
CheckInterfacedef(y0,y0_db);
extern double y1_db(double);
CheckInterfacedef(y1,y1_db);
extern double yn_db(int, double);
CheckInterfacedef(yn,yn_db);
extern double drem_db(double, double);
CheckInterfacedef(drem,drem_db);
extern float copysignf_db(float, float);
CheckInterfacedef(copysignf,copysignf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double copysignl_db(long double, long double);
CheckInterfacedef(copysignl,copysignl_db);
#endif		/* hack */
extern int finitef_db(float);
CheckInterfacedef(finitef,finitef_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern int finitel_db(long double);
CheckInterfacedef(finitel,finitel_db);
#endif		/* hack */
extern float frexpf_db(float, int *);
CheckInterfacedef(frexpf,frexpf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double frexpl_db(long double, int *);
CheckInterfacedef(frexpl,frexpl_db);
#endif		/* hack */
extern float ldexpf_db(float, int);
CheckInterfacedef(ldexpf,ldexpf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double ldexpl_db(long double, int);
CheckInterfacedef(ldexpl,ldexpl_db);
#endif		/* hack */
extern float modff_db(float, float *);
CheckInterfacedef(modff,modff_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double modfl_db(long double, long double *);
CheckInterfacedef(modfl,modfl_db);
#endif		/* hack */
extern double scalbln_db(double, long int);
CheckInterfacedef(scalbln,scalbln_db);
extern float scalblnf_db(float, long int);
CheckInterfacedef(scalblnf,scalblnf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double scalblnl_db(long double, long int);
CheckInterfacedef(scalblnl,scalblnl_db);
#endif		/* hack */
extern double scalbn_db(double, int);
CheckInterfacedef(scalbn,scalbn_db);
extern float scalbnf_db(float, int);
CheckInterfacedef(scalbnf,scalbnf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double scalbnl_db(long double, int);
CheckInterfacedef(scalbnl,scalbnl_db);
#endif		/* hack */
extern float acosf_db(float);
CheckInterfacedef(acosf,acosf_db);
extern float acoshf_db(float);
CheckInterfacedef(acoshf,acoshf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double acoshl_db(long double);
CheckInterfacedef(acoshl,acoshl_db);
#endif		/* hack */
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double acosl_db(long double);
CheckInterfacedef(acosl,acosl_db);
#endif		/* hack */
extern float asinf_db(float);
CheckInterfacedef(asinf,asinf_db);
extern float asinhf_db(float);
CheckInterfacedef(asinhf,asinhf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double asinhl_db(long double);
CheckInterfacedef(asinhl,asinhl_db);
#endif		/* hack */
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double asinl_db(long double);
CheckInterfacedef(asinl,asinl_db);
#endif		/* hack */
extern float atan2f_db(float, float);
CheckInterfacedef(atan2f,atan2f_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double atan2l_db(long double, long double);
CheckInterfacedef(atan2l,atan2l_db);
#endif		/* hack */
extern float atanf_db(float);
CheckInterfacedef(atanf,atanf_db);
extern float atanhf_db(float);
CheckInterfacedef(atanhf,atanhf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double atanhl_db(long double);
CheckInterfacedef(atanhl,atanhl_db);
#endif		/* hack */
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double atanl_db(long double);
CheckInterfacedef(atanl,atanl_db);
#endif		/* hack */
extern float cbrtf_db(float);
CheckInterfacedef(cbrtf,cbrtf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double cbrtl_db(long double);
CheckInterfacedef(cbrtl,cbrtl_db);
#endif		/* hack */
extern float ceilf_db(float);
CheckInterfacedef(ceilf,ceilf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double ceill_db(long double);
CheckInterfacedef(ceill,ceill_db);
#endif		/* hack */
extern float cosf_db(float);
CheckInterfacedef(cosf,cosf_db);
extern float coshf_db(float);
CheckInterfacedef(coshf,coshf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double coshl_db(long double);
CheckInterfacedef(coshl,coshl_db);
#endif		/* hack */
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double cosl_db(long double);
CheckInterfacedef(cosl,cosl_db);
#endif		/* hack */
extern float dremf_db(float, float);
CheckInterfacedef(dremf,dremf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double dreml_db(long double, long double);
CheckInterfacedef(dreml,dreml_db);
#endif		/* hack */
extern float erfcf_db(float);
CheckInterfacedef(erfcf,erfcf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double erfcl_db(long double);
CheckInterfacedef(erfcl,erfcl_db);
#endif		/* hack */
extern float erff_db(float);
CheckInterfacedef(erff,erff_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double erfl_db(long double);
CheckInterfacedef(erfl,erfl_db);
#endif		/* hack */
extern double exp10_db(double);
CheckInterfacedef(exp10,exp10_db);
extern float exp10f_db(float);
CheckInterfacedef(exp10f,exp10f_db);
extern long double exp10l_db(long double);
CheckInterfacedef(exp10l,exp10l_db);
extern double exp2_db(double);
CheckInterfacedef(exp2,exp2_db);
extern float exp2f_db(float);
CheckInterfacedef(exp2f,exp2f_db);
#if defined __i386__
/* IA32 */
extern long double exp2l_db(long double);
CheckInterfacedef(exp2l,exp2l_db);
#endif
#if defined __ia64__
/* IA64 */
extern long double exp2l_db(long double);
CheckInterfacedef(exp2l,exp2l_db);
#endif
#if defined __x86_64__
/* x86-64 */
extern long double exp2l_db(long double);
CheckInterfacedef(exp2l,exp2l_db);
#endif
extern float expf_db(float);
CheckInterfacedef(expf,expf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double expl_db(long double);
CheckInterfacedef(expl,expl_db);
#endif		/* hack */
extern float expm1f_db(float);
CheckInterfacedef(expm1f,expm1f_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double expm1l_db(long double);
CheckInterfacedef(expm1l,expm1l_db);
#endif		/* hack */
extern float fabsf_db(float);
CheckInterfacedef(fabsf,fabsf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double fabsl_db(long double);
CheckInterfacedef(fabsl,fabsl_db);
#endif		/* hack */
extern double fdim_db(double, double);
CheckInterfacedef(fdim,fdim_db);
extern float fdimf_db(float, float);
CheckInterfacedef(fdimf,fdimf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double fdiml_db(long double, long double);
CheckInterfacedef(fdiml,fdiml_db);
#endif		/* hack */
extern float floorf_db(float);
CheckInterfacedef(floorf,floorf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double floorl_db(long double);
CheckInterfacedef(floorl,floorl_db);
#endif		/* hack */
extern double fma_db(double, double, double);
CheckInterfacedef(fma,fma_db);
extern float fmaf_db(float, float, float);
CheckInterfacedef(fmaf,fmaf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double fmal_db(long double, long double, long double);
CheckInterfacedef(fmal,fmal_db);
#endif		/* hack */
extern double fmax_db(double, double);
CheckInterfacedef(fmax,fmax_db);
extern float fmaxf_db(float, float);
CheckInterfacedef(fmaxf,fmaxf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double fmaxl_db(long double, long double);
CheckInterfacedef(fmaxl,fmaxl_db);
#endif		/* hack */
extern double fmin_db(double, double);
CheckInterfacedef(fmin,fmin_db);
extern float fminf_db(float, float);
CheckInterfacedef(fminf,fminf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double fminl_db(long double, long double);
CheckInterfacedef(fminl,fminl_db);
#endif		/* hack */
extern float fmodf_db(float, float);
CheckInterfacedef(fmodf,fmodf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double fmodl_db(long double, long double);
CheckInterfacedef(fmodl,fmodl_db);
#endif		/* hack */
extern float gammaf_db(float);
CheckInterfacedef(gammaf,gammaf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double gammal_db(long double);
CheckInterfacedef(gammal,gammal_db);
#endif		/* hack */
extern float hypotf_db(float, float);
CheckInterfacedef(hypotf,hypotf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double hypotl_db(long double, long double);
CheckInterfacedef(hypotl,hypotl_db);
#endif		/* hack */
extern int ilogbf_db(float);
CheckInterfacedef(ilogbf,ilogbf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern int ilogbl_db(long double);
CheckInterfacedef(ilogbl,ilogbl_db);
#endif		/* hack */
extern float j0f_db(float);
CheckInterfacedef(j0f,j0f_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double j0l_db(long double);
CheckInterfacedef(j0l,j0l_db);
#endif		/* hack */
extern float j1f_db(float);
CheckInterfacedef(j1f,j1f_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double j1l_db(long double);
CheckInterfacedef(j1l,j1l_db);
#endif		/* hack */
extern float jnf_db(int, float);
CheckInterfacedef(jnf,jnf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double jnl_db(int, long double);
CheckInterfacedef(jnl,jnl_db);
#endif		/* hack */
extern double lgamma_r_db(double, int *);
CheckInterfacedef(lgamma_r,lgamma_r_db);
extern float lgammaf_db(float);
CheckInterfacedef(lgammaf,lgammaf_db);
extern float lgammaf_r_db(float, int *);
CheckInterfacedef(lgammaf_r,lgammaf_r_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double lgammal_db(long double);
CheckInterfacedef(lgammal,lgammal_db);
#endif		/* hack */
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double lgammal_r_db(long double, int *);
CheckInterfacedef(lgammal_r,lgammal_r_db);
#endif		/* hack */
extern long long int llrint_db(double);
CheckInterfacedef(llrint,llrint_db);
extern long long int llrintf_db(float);
CheckInterfacedef(llrintf,llrintf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long long int llrintl_db(long double);
CheckInterfacedef(llrintl,llrintl_db);
#endif		/* hack */
extern long long int llround_db(double);
CheckInterfacedef(llround,llround_db);
extern long long int llroundf_db(float);
CheckInterfacedef(llroundf,llroundf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long long int llroundl_db(long double);
CheckInterfacedef(llroundl,llroundl_db);
#endif		/* hack */
extern float log10f_db(float);
CheckInterfacedef(log10f,log10f_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double log10l_db(long double);
CheckInterfacedef(log10l,log10l_db);
#endif		/* hack */
extern float log1pf_db(float);
CheckInterfacedef(log1pf,log1pf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double log1pl_db(long double);
CheckInterfacedef(log1pl,log1pl_db);
#endif		/* hack */
extern double log2_db(double);
CheckInterfacedef(log2,log2_db);
extern float log2f_db(float);
CheckInterfacedef(log2f,log2f_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double log2l_db(long double);
CheckInterfacedef(log2l,log2l_db);
#endif		/* hack */
extern float logbf_db(float);
CheckInterfacedef(logbf,logbf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double logbl_db(long double);
CheckInterfacedef(logbl,logbl_db);
#endif		/* hack */
extern float logf_db(float);
CheckInterfacedef(logf,logf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double logl_db(long double);
CheckInterfacedef(logl,logl_db);
#endif		/* hack */
extern long int lrint_db(double);
CheckInterfacedef(lrint,lrint_db);
extern long int lrintf_db(float);
CheckInterfacedef(lrintf,lrintf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long int lrintl_db(long double);
CheckInterfacedef(lrintl,lrintl_db);
#endif		/* hack */
extern long int lround_db(double);
CheckInterfacedef(lround,lround_db);
extern long int lroundf_db(float);
CheckInterfacedef(lroundf,lroundf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long int lroundl_db(long double);
CheckInterfacedef(lroundl,lroundl_db);
#endif		/* hack */
extern double nan_db(const char *);
CheckInterfacedef(nan,nan_db);
extern float nanf_db(const char *);
CheckInterfacedef(nanf,nanf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double nanl_db(const char *);
CheckInterfacedef(nanl,nanl_db);
#endif		/* hack */
extern double nearbyint_db(double);
CheckInterfacedef(nearbyint,nearbyint_db);
extern float nearbyintf_db(float);
CheckInterfacedef(nearbyintf,nearbyintf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double nearbyintl_db(long double);
CheckInterfacedef(nearbyintl,nearbyintl_db);
#endif		/* hack */
extern float nextafterf_db(float, float);
CheckInterfacedef(nextafterf,nextafterf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double nextafterl_db(long double, long double);
CheckInterfacedef(nextafterl,nextafterl_db);
#endif		/* hack */
extern double nexttoward_db(double, long double);
CheckInterfacedef(nexttoward,nexttoward_db);
extern float nexttowardf_db(float, long double);
CheckInterfacedef(nexttowardf,nexttowardf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double nexttowardl_db(long double, long double);
CheckInterfacedef(nexttowardl,nexttowardl_db);
#endif		/* hack */
extern double pow10_db(double);
CheckInterfacedef(pow10,pow10_db);
extern float pow10f_db(float);
CheckInterfacedef(pow10f,pow10f_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double pow10l_db(long double);
CheckInterfacedef(pow10l,pow10l_db);
#endif		/* hack */
extern float powf_db(float, float);
CheckInterfacedef(powf,powf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double powl_db(long double, long double);
CheckInterfacedef(powl,powl_db);
#endif		/* hack */
extern float remainderf_db(float, float);
CheckInterfacedef(remainderf,remainderf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double remainderl_db(long double, long double);
CheckInterfacedef(remainderl,remainderl_db);
#endif		/* hack */
extern double remquo_db(double, double, int *);
CheckInterfacedef(remquo,remquo_db);
extern float remquof_db(float, float, int *);
CheckInterfacedef(remquof,remquof_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double remquol_db(long double, long double, int *);
CheckInterfacedef(remquol,remquol_db);
#endif		/* hack */
extern float rintf_db(float);
CheckInterfacedef(rintf,rintf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double rintl_db(long double);
CheckInterfacedef(rintl,rintl_db);
#endif		/* hack */
extern double round_db(double);
CheckInterfacedef(round,round_db);
extern float roundf_db(float);
CheckInterfacedef(roundf,roundf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double roundl_db(long double);
CheckInterfacedef(roundl,roundl_db);
#endif		/* hack */
extern float scalbf_db(float, float);
CheckInterfacedef(scalbf,scalbf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double scalbl_db(long double, long double);
CheckInterfacedef(scalbl,scalbl_db);
#endif		/* hack */
extern double significand_db(double);
CheckInterfacedef(significand,significand_db);
extern float significandf_db(float);
CheckInterfacedef(significandf,significandf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double significandl_db(long double);
CheckInterfacedef(significandl,significandl_db);
#endif		/* hack */
extern void sincos_db(double, double *, double *);
CheckInterfacedef(sincos,sincos_db);
extern void sincosf_db(float, float *, float *);
CheckInterfacedef(sincosf,sincosf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern void sincosl_db(long double, long double *, long double *);
CheckInterfacedef(sincosl,sincosl_db);
#endif		/* hack */
extern float sinf_db(float);
CheckInterfacedef(sinf,sinf_db);
extern float sinhf_db(float);
CheckInterfacedef(sinhf,sinhf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double sinhl_db(long double);
CheckInterfacedef(sinhl,sinhl_db);
#endif		/* hack */
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double sinl_db(long double);
CheckInterfacedef(sinl,sinl_db);
#endif		/* hack */
extern float sqrtf_db(float);
CheckInterfacedef(sqrtf,sqrtf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double sqrtl_db(long double);
CheckInterfacedef(sqrtl,sqrtl_db);
#endif		/* hack */
extern float tanf_db(float);
CheckInterfacedef(tanf,tanf_db);
extern float tanhf_db(float);
CheckInterfacedef(tanhf,tanhf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double tanhl_db(long double);
CheckInterfacedef(tanhl,tanhl_db);
#endif		/* hack */
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double tanl_db(long double);
CheckInterfacedef(tanl,tanl_db);
#endif		/* hack */
extern double tgamma_db(double);
CheckInterfacedef(tgamma,tgamma_db);
extern float tgammaf_db(float);
CheckInterfacedef(tgammaf,tgammaf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double tgammal_db(long double);
CheckInterfacedef(tgammal,tgammal_db);
#endif		/* hack */
extern double trunc_db(double);
CheckInterfacedef(trunc,trunc_db);
extern float truncf_db(float);
CheckInterfacedef(truncf,truncf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double truncl_db(long double);
CheckInterfacedef(truncl,truncl_db);
#endif		/* hack */
extern float y0f_db(float);
CheckInterfacedef(y0f,y0f_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double y0l_db(long double);
CheckInterfacedef(y0l,y0l_db);
#endif		/* hack */
extern float y1f_db(float);
CheckInterfacedef(y1f,y1f_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double y1l_db(long double);
CheckInterfacedef(y1l,y1l_db);
#endif		/* hack */
extern float ynf_db(int, float);
CheckInterfacedef(ynf,ynf_db);
#if ! __powerpc__ && ! __s390__	/* hack */
extern long double ynl_db(int, long double);
CheckInterfacedef(ynl,ynl_db);
#endif		/* hack */
#if defined __i386__
/* IA32 */
extern int __signbitl_db(long double);
CheckInterfacedef(__signbitl,__signbitl_db);
#endif
#if defined __ia64__
/* IA64 */
extern int __signbitl_db(long double);
CheckInterfacedef(__signbitl,__signbitl_db);
#endif
#if defined __x86_64__
/* x86-64 */
extern int __signbitl_db(long double);
CheckInterfacedef(__signbitl,__signbitl_db);
#endif
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in math.h\n\n",pcnt,cnt);
return cnt;
#endif

}
