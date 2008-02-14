#include <stdlib.h>
#include "elfchk.h"
struct versym libm_so_6_1[] = {
#if defined __s390__ && !defined __s390x__
	{"__finite","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__finitef","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __x86_64__
	{"__finitel","GLIBC_2.2.5",0,LSB_Core,4,1},
#endif
#if defined __s390x__
	{"__fpclassify","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"__fpclassifyf","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__fpclassifyl","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__signbit","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"__signbitf","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"__signbitl","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"acos","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"acosf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"acosh","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"acoshf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"acoshl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"acosl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"asin","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"asinf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"asinh","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"asinhf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"asinhl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"asinl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"atan","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"atan2","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"atan2f","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"atan2l","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"atanf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"atanh","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"atanhf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"atanhl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"atanl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __ia64__
	{"cabs","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"cabsf","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"cabsl","GLIBC_2.1",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"cacos","GLIBC_2.1",0,LSB_Core,16,1},
#endif
#if defined __i386__
	{"cacosf","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"cacosh","GLIBC_2.1",0,LSB_Core,16,1},
#endif
#if defined __i386__
	{"cacoshf","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"cacoshl","GLIBC_2.1",0,LSB_Core,24,1},
#endif
#if defined __i386__
	{"cacosl","GLIBC_2.1",0,LSB_Core,24,1},
#endif
#if defined __i386__
	{"carg","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"cargf","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"cargl","GLIBC_2.1",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"casin","GLIBC_2.1",0,LSB_Core,16,1},
#endif
#if defined __i386__
	{"casinf","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"casinh","GLIBC_2.1",0,LSB_Core,16,1},
#endif
#if defined __i386__
	{"casinhf","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"casinhl","GLIBC_2.1",0,LSB_Core,24,1},
#endif
#if defined __i386__
	{"casinl","GLIBC_2.1",0,LSB_Core,24,1},
#endif
#if defined __i386__
	{"catan","GLIBC_2.1",0,LSB_Core,16,1},
#endif
#if defined __i386__
	{"catanf","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"catanh","GLIBC_2.1",0,LSB_Core,16,1},
#endif
#if defined __i386__
	{"catanhf","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"catanhl","GLIBC_2.1",0,LSB_Core,24,1},
#endif
#if defined __i386__
	{"catanl","GLIBC_2.1",0,LSB_Core,24,1},
#endif
#if defined __i386__
	{"cbrt","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"cbrtf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"cbrtl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"ccos","GLIBC_2.1",0,LSB_Core,16,1},
#endif
#if defined __i386__
	{"ccosf","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"ccosh","GLIBC_2.1",0,LSB_Core,16,1},
#endif
#if defined __i386__
	{"ccoshf","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"ccoshl","GLIBC_2.1",0,LSB_Core,24,1},
#endif
#if defined __i386__
	{"ccosl","GLIBC_2.1",0,LSB_Core,24,1},
#endif
#if defined __i386__
	{"ceil","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"ceilf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ceill","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"cexp","GLIBC_2.1",0,LSB_Core,16,1},
#endif
#if defined __i386__
	{"cexpf","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"cexpl","GLIBC_2.1",0,LSB_Core,24,1},
#endif
#if defined __i386__
	{"cimag","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"cimagf","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"cimagl","GLIBC_2.1",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"clog","GLIBC_2.1",0,LSB_Core,16,1},
#endif
#if defined __i386__
	{"clog10","GLIBC_2.1",0,LSB_Core,16,1},
#endif
#if defined __i386__
	{"clog10f","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"clog10l","GLIBC_2.1",0,LSB_Core,24,1},
#endif
#if defined __i386__
	{"clogf","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"clogl","GLIBC_2.1",0,LSB_Core,24,1},
#endif
#if defined __i386__
	{"conj","GLIBC_2.1",0,LSB_Core,16,1},
#endif
#if defined __i386__
	{"conjf","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"conjl","GLIBC_2.1",0,LSB_Core,24,1},
#endif
#if defined __i386__
	{"copysign","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"copysignf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"copysignl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"cos","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"cosf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"cosh","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"coshf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"coshl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"cosl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"cpow","GLIBC_2.1",0,LSB_Core,16,1},
#endif
#if defined __i386__
	{"cpowf","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"cpowl","GLIBC_2.1",0,LSB_Core,24,1},
#endif
#if defined __i386__
	{"cproj","GLIBC_2.1",0,LSB_Core,16,1},
#endif
#if defined __i386__
	{"cprojf","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"cprojl","GLIBC_2.1",0,LSB_Core,24,1},
#endif
#if defined __i386__
	{"creal","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"crealf","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"creall","GLIBC_2.1",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"csin","GLIBC_2.1",0,LSB_Core,16,1},
#endif
#if defined __i386__
	{"csinf","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"csinh","GLIBC_2.1",0,LSB_Core,16,1},
#endif
#if defined __i386__
	{"csinhf","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"csinhl","GLIBC_2.1",0,LSB_Core,24,1},
#endif
#if defined __i386__
	{"csinl","GLIBC_2.1",0,LSB_Core,24,1},
#endif
#if defined __i386__
	{"csqrt","GLIBC_2.1",0,LSB_Core,16,1},
#endif
#if defined __i386__
	{"csqrtf","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"csqrtl","GLIBC_2.1",0,LSB_Core,24,1},
#endif
#if defined __i386__
	{"ctan","GLIBC_2.1",0,LSB_Core,16,1},
#endif
#if defined __i386__
	{"ctanf","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"ctanh","GLIBC_2.1",0,LSB_Core,16,1},
#endif
#if defined __i386__
	{"ctanhf","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"ctanhl","GLIBC_2.1",0,LSB_Core,24,1},
#endif
#if defined __i386__
	{"ctanl","GLIBC_2.1",0,LSB_Core,24,1},
#endif
#if defined __i386__
	{"dremf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"dreml","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"erf","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"erfc","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"erfcf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"erfcl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"erff","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"erfl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"exp","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"exp2","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"exp2f","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"exp2l","GLIBC_2.1",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"expf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"expl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"expm1","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __ia64__
	{"expm1f","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"expm1l","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"fabs","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"fabsf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fabsl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"fdim","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"fdimf","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fdiml","GLIBC_2.1",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"feclearexcept","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fegetenv","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fegetexceptflag","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fegetround","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"feholdexcept","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"feraiseexcept","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fesetenv","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fesetexceptflag","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fesetround","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fetestexcept","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"feupdateenv","GLIBC_2.2",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"finite","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"finitef","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"finitel","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"floor","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"floorf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"floorl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"fma","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"fmaf","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fmal","GLIBC_2.1",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"fmax","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"fmaxf","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fmaxl","GLIBC_2.1",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"fmin","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"fminf","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fminl","GLIBC_2.1",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"fmod","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"fmodf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"fmodl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"frexp","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"frexpf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"frexpl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"gamma","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"gammaf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"gammal","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"hypot","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"hypotf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"hypotl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"ilogb","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ilogbf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ilogbl","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"j0","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"j0f","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"j0l","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"j1","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"j1f","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"j1l","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"jn","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"jnf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"jnl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"ldexp","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"ldexpf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ldexpl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"lgamma","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"lgamma_r","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"lgammaf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"lgammaf_r","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"lgammal","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"lgammal_r","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"llrint","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"llrintf","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"llrintl","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"llround","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"llroundf","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"llroundl","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"log","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"log10","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"log10f","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"log10l","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"log1p","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"log1pf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __ia64__
	{"log1pl","GLIBC_2.2",0,LSB_Core,16,1},
#endif
#if defined __ia64__
	{"log2","GLIBC_2.2",0,LSB_Core,8,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"log2f","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"log2l","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"logb","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __powerpc__ && !defined __powerpc64__
	{"logbf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __s390__ && !defined __s390x__
	{"logbl","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"logf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"logl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"lrint","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"lrintf","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"lrintl","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"lround","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"lroundf","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"lroundl","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"matherr","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"modf","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"modff","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"modfl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"nan","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"nanf","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"nanl","GLIBC_2.1",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"nearbyint","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"nearbyintf","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"nearbyintl","GLIBC_2.1",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"nextafter","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"nextafterf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"nextafterl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"nexttoward","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"nexttowardf","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"nexttowardl","GLIBC_2.1",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"pow","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"pow10","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"pow10f","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"pow10l","GLIBC_2.1",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"powf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"powl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"remainder","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"remainderf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"remainderl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"remquo","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"remquof","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"remquol","GLIBC_2.1",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"rint","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"rintf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"rintl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"round","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"roundf","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"roundl","GLIBC_2.1",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"scalb","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"scalbf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"scalbl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"scalbln","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"scalblnf","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"scalblnl","GLIBC_2.1",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"scalbn","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"scalbnf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"scalbnl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"signgam","GLIBC_2.0",0,LSB_Core,4,0},
#endif
#if defined __i386__
	{"significand","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"significandf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"significandl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"sin","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"sincos","GLIBC_2.1",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"sincosf","GLIBC_2.1",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"sincosl","GLIBC_2.1",0,LSB_Core,1,1},
#endif
#if defined __i386__
	{"sinf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sinh","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"sinhf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sinhl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"sinl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"sqrt","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"sqrtf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"sqrtl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"tan","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"tanf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tanh","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"tanhf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tanhl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"tanl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"tgamma","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"tgammaf","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"tgammal","GLIBC_2.1",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"trunc","GLIBC_2.1",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"truncf","GLIBC_2.1",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"truncl","GLIBC_2.1",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"y0","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"y0f","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"y0l","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"y1","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"y1f","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"y1l","GLIBC_2.0",0,LSB_Core,12,1},
#endif
#if defined __i386__
	{"yn","GLIBC_2.0",0,LSB_Core,8,1},
#endif
#if defined __i386__
	{"ynf","GLIBC_2.0",0,LSB_Core,4,1},
#endif
#if defined __i386__
	{"ynl","GLIBC_2.0",0,LSB_Core,12,1},
#endif
	{0,0}};

struct classinfo *libm_so_6_1_classinfo[] = {

	NULL	};
