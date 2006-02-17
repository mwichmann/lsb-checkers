/*
 * Test of complex.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "complex.h"



#ifdef TET_TEST
void complex_h()
{
#else
int complex_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in complex.h\n");
#endif

printf("Checking data structures in complex.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for complex */
#endif

extern double cabs_db(double complex);
CheckInterfacedef(cabs,cabs_db);
extern float cabsf_db(float complex);
CheckInterfacedef(cabsf,cabsf_db);
extern long double cabsl_db(long double complex);
CheckInterfacedef(cabsl,cabsl_db);
extern double complex cacos_db(double complex);
CheckInterfacedef(cacos,cacos_db);
extern float complex cacosf_db(float complex);
CheckInterfacedef(cacosf,cacosf_db);
extern double complex cacosh_db(double complex);
CheckInterfacedef(cacosh,cacosh_db);
extern float complex cacoshf_db(float complex);
CheckInterfacedef(cacoshf,cacoshf_db);
extern long double complex cacoshl_db(long double complex);
CheckInterfacedef(cacoshl,cacoshl_db);
extern long double complex cacosl_db(long double complex);
CheckInterfacedef(cacosl,cacosl_db);
extern double carg_db(double complex);
CheckInterfacedef(carg,carg_db);
extern float cargf_db(float complex);
CheckInterfacedef(cargf,cargf_db);
extern long double cargl_db(long double complex);
CheckInterfacedef(cargl,cargl_db);
extern double complex casin_db(double complex);
CheckInterfacedef(casin,casin_db);
extern float complex casinf_db(float complex);
CheckInterfacedef(casinf,casinf_db);
extern double complex casinh_db(double complex);
CheckInterfacedef(casinh,casinh_db);
extern float complex casinhf_db(float complex);
CheckInterfacedef(casinhf,casinhf_db);
extern long double complex casinhl_db(long double complex);
CheckInterfacedef(casinhl,casinhl_db);
extern long double complex casinl_db(long double complex);
CheckInterfacedef(casinl,casinl_db);
extern double complex catan_db(double complex);
CheckInterfacedef(catan,catan_db);
extern float complex catanf_db(float complex);
CheckInterfacedef(catanf,catanf_db);
extern double complex catanh_db(double complex);
CheckInterfacedef(catanh,catanh_db);
extern float complex catanhf_db(float complex);
CheckInterfacedef(catanhf,catanhf_db);
extern long double complex catanhl_db(long double complex);
CheckInterfacedef(catanhl,catanhl_db);
extern long double complex catanl_db(long double complex);
CheckInterfacedef(catanl,catanl_db);
extern double complex ccos_db(double complex);
CheckInterfacedef(ccos,ccos_db);
extern float complex ccosf_db(float complex);
CheckInterfacedef(ccosf,ccosf_db);
extern double complex ccosh_db(double complex);
CheckInterfacedef(ccosh,ccosh_db);
extern float complex ccoshf_db(float complex);
CheckInterfacedef(ccoshf,ccoshf_db);
extern long double complex ccoshl_db(long double complex);
CheckInterfacedef(ccoshl,ccoshl_db);
extern long double complex ccosl_db(long double complex);
CheckInterfacedef(ccosl,ccosl_db);
extern double complex cexp_db(double complex);
CheckInterfacedef(cexp,cexp_db);
extern float complex cexpf_db(float complex);
CheckInterfacedef(cexpf,cexpf_db);
extern long double complex cexpl_db(long double complex);
CheckInterfacedef(cexpl,cexpl_db);
extern double cimag_db(double complex);
CheckInterfacedef(cimag,cimag_db);
extern float cimagf_db(float complex);
CheckInterfacedef(cimagf,cimagf_db);
extern long double cimagl_db(long double complex);
CheckInterfacedef(cimagl,cimagl_db);
extern double complex clog_db(double complex);
CheckInterfacedef(clog,clog_db);
extern float complex clog10f_db(float complex);
CheckInterfacedef(clog10f,clog10f_db);
extern long double complex clog10l_db(long double complex);
CheckInterfacedef(clog10l,clog10l_db);
extern float complex clogf_db(float complex);
CheckInterfacedef(clogf,clogf_db);
extern long double complex clogl_db(long double complex);
CheckInterfacedef(clogl,clogl_db);
extern double complex conj_db(double complex);
CheckInterfacedef(conj,conj_db);
extern float complex conjf_db(float complex);
CheckInterfacedef(conjf,conjf_db);
extern long double complex conjl_db(long double complex);
CheckInterfacedef(conjl,conjl_db);
extern double complex cpow_db(double complex, double complex);
CheckInterfacedef(cpow,cpow_db);
extern float complex cpowf_db(float complex, float complex);
CheckInterfacedef(cpowf,cpowf_db);
extern long double complex cpowl_db(long double complex, long double complex);
CheckInterfacedef(cpowl,cpowl_db);
extern double complex cproj_db(double complex);
CheckInterfacedef(cproj,cproj_db);
extern float complex cprojf_db(float complex);
CheckInterfacedef(cprojf,cprojf_db);
extern long double complex cprojl_db(long double complex);
CheckInterfacedef(cprojl,cprojl_db);
extern double creal_db(double complex);
CheckInterfacedef(creal,creal_db);
extern float crealf_db(float complex);
CheckInterfacedef(crealf,crealf_db);
extern long double creall_db(long double complex);
CheckInterfacedef(creall,creall_db);
extern double complex csin_db(double complex);
CheckInterfacedef(csin,csin_db);
extern float complex csinf_db(float complex);
CheckInterfacedef(csinf,csinf_db);
extern double complex csinh_db(double complex);
CheckInterfacedef(csinh,csinh_db);
extern float complex csinhf_db(float complex);
CheckInterfacedef(csinhf,csinhf_db);
extern long double complex csinhl_db(long double complex);
CheckInterfacedef(csinhl,csinhl_db);
extern long double complex csinl_db(long double complex);
CheckInterfacedef(csinl,csinl_db);
extern double complex csqrt_db(double complex);
CheckInterfacedef(csqrt,csqrt_db);
extern float complex csqrtf_db(float complex);
CheckInterfacedef(csqrtf,csqrtf_db);
extern long double complex csqrtl_db(long double complex);
CheckInterfacedef(csqrtl,csqrtl_db);
extern double complex ctan_db(double complex);
CheckInterfacedef(ctan,ctan_db);
extern float complex ctanf_db(float complex);
CheckInterfacedef(ctanf,ctanf_db);
extern double complex ctanh_db(double complex);
CheckInterfacedef(ctanh,ctanh_db);
extern float complex ctanhf_db(float complex);
CheckInterfacedef(ctanhf,ctanhf_db);
extern long double complex ctanhl_db(long double complex);
CheckInterfacedef(ctanhl,ctanhl_db);
extern long double complex ctanl_db(long double complex);
CheckInterfacedef(ctanl,ctanl_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in complex.h\n\n",pcnt,cnt);
return cnt;
#endif

}
