/*
 * Test of fenv.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "fenv.h"



#ifdef TET_TEST
void fenv_h()
{
#else
int fenv_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in fenv.h\n");
#endif

#if __powerpc64__
#ifdef FE_INVALID
	CompareConstant(FE_INVALID,(1 << (31 - 2)),5298,architecture)
#else
Msg( "Error: Constant not found: FE_INVALID\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef FE_INVALID
	CompareConstant(FE_INVALID,(1 << (31 - 2)),5298,architecture)
#else
Msg( "Error: Constant not found: FE_INVALID\n");
cnt++;
#endif

#elif __ia64__
#ifdef FE_INVALID
	CompareConstant(FE_INVALID,(1UL << 0),5298,architecture)
#else
Msg( "Error: Constant not found: FE_INVALID\n");
cnt++;
#endif

#elif __i386__
#ifdef FE_INVALID
	CompareConstant(FE_INVALID,0x01,5298,architecture)
#else
Msg( "Error: Constant not found: FE_INVALID\n");
cnt++;
#endif

#elif __x86_64__
#ifdef FE_INVALID
	CompareConstant(FE_INVALID,0x01,5298,architecture)
#else
Msg( "Error: Constant not found: FE_INVALID\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef FE_INVALID
	CompareConstant(FE_INVALID,0x80,5298,architecture)
#else
Msg( "Error: Constant not found: FE_INVALID\n");
cnt++;
#endif

#else
Msg( "No definition for FE_INVALID (5298, int) in db\n");
#ifdef FE_INVALID
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,5298,%d);\n", architecture, FE_INVALID);
#endif
#endif
#if __powerpc64__
#ifdef FE_DIVBYZERO
	CompareConstant(FE_DIVBYZERO,(1 << (31 - 5)),5299,architecture)
#else
Msg( "Error: Constant not found: FE_DIVBYZERO\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef FE_DIVBYZERO
	CompareConstant(FE_DIVBYZERO,(1 << (31 - 5)),5299,architecture)
#else
Msg( "Error: Constant not found: FE_DIVBYZERO\n");
cnt++;
#endif

#elif __ia64__
#ifdef FE_DIVBYZERO
	CompareConstant(FE_DIVBYZERO,(1UL << 2),5299,architecture)
#else
Msg( "Error: Constant not found: FE_DIVBYZERO\n");
cnt++;
#endif

#elif __i386__
#ifdef FE_DIVBYZERO
	CompareConstant(FE_DIVBYZERO,0x04,5299,architecture)
#else
Msg( "Error: Constant not found: FE_DIVBYZERO\n");
cnt++;
#endif

#elif __x86_64__
#ifdef FE_DIVBYZERO
	CompareConstant(FE_DIVBYZERO,0x04,5299,architecture)
#else
Msg( "Error: Constant not found: FE_DIVBYZERO\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef FE_DIVBYZERO
	CompareConstant(FE_DIVBYZERO,0x40,5299,architecture)
#else
Msg( "Error: Constant not found: FE_DIVBYZERO\n");
cnt++;
#endif

#else
Msg( "No definition for FE_DIVBYZERO (5299, int) in db\n");
#ifdef FE_DIVBYZERO
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,5299,%d);\n", architecture, FE_DIVBYZERO);
#endif
#endif
#if __powerpc64__
#ifdef FE_OVERFLOW
	CompareConstant(FE_OVERFLOW,(1 << (31 - 3)),5300,architecture)
#else
Msg( "Error: Constant not found: FE_OVERFLOW\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef FE_OVERFLOW
	CompareConstant(FE_OVERFLOW,(1 << (31 - 3)),5300,architecture)
#else
Msg( "Error: Constant not found: FE_OVERFLOW\n");
cnt++;
#endif

#elif __ia64__
#ifdef FE_OVERFLOW
	CompareConstant(FE_OVERFLOW,(1UL << 3),5300,architecture)
#else
Msg( "Error: Constant not found: FE_OVERFLOW\n");
cnt++;
#endif

#elif __i386__
#ifdef FE_OVERFLOW
	CompareConstant(FE_OVERFLOW,0x08,5300,architecture)
#else
Msg( "Error: Constant not found: FE_OVERFLOW\n");
cnt++;
#endif

#elif __x86_64__
#ifdef FE_OVERFLOW
	CompareConstant(FE_OVERFLOW,0x08,5300,architecture)
#else
Msg( "Error: Constant not found: FE_OVERFLOW\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef FE_OVERFLOW
	CompareConstant(FE_OVERFLOW,0x20,5300,architecture)
#else
Msg( "Error: Constant not found: FE_OVERFLOW\n");
cnt++;
#endif

#else
Msg( "No definition for FE_OVERFLOW (5300, int) in db\n");
#ifdef FE_OVERFLOW
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,5300,%d);\n", architecture, FE_OVERFLOW);
#endif
#endif
#if __powerpc64__
#ifdef FE_UNDERFLOW
	CompareConstant(FE_UNDERFLOW,(1 << (31 - 4)),5301,architecture)
#else
Msg( "Error: Constant not found: FE_UNDERFLOW\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef FE_UNDERFLOW
	CompareConstant(FE_UNDERFLOW,(1 << (31 - 4)),5301,architecture)
#else
Msg( "Error: Constant not found: FE_UNDERFLOW\n");
cnt++;
#endif

#elif __ia64__
#ifdef FE_UNDERFLOW
	CompareConstant(FE_UNDERFLOW,(1UL << 4),5301,architecture)
#else
Msg( "Error: Constant not found: FE_UNDERFLOW\n");
cnt++;
#endif

#elif __i386__
#ifdef FE_UNDERFLOW
	CompareConstant(FE_UNDERFLOW,0x10,5301,architecture)
#else
Msg( "Error: Constant not found: FE_UNDERFLOW\n");
cnt++;
#endif

#elif __x86_64__
#ifdef FE_UNDERFLOW
	CompareConstant(FE_UNDERFLOW,0x10,5301,architecture)
#else
Msg( "Error: Constant not found: FE_UNDERFLOW\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef FE_UNDERFLOW
	CompareConstant(FE_UNDERFLOW,0x10,5301,architecture)
#else
Msg( "Error: Constant not found: FE_UNDERFLOW\n");
cnt++;
#endif

#else
Msg( "No definition for FE_UNDERFLOW (5301, int) in db\n");
#ifdef FE_UNDERFLOW
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,5301,%d);\n", architecture, FE_UNDERFLOW);
#endif
#endif
#if __powerpc64__
#ifdef FE_INEXACT
	CompareConstant(FE_INEXACT,(1 << (31 - 6)),5302,architecture)
#else
Msg( "Error: Constant not found: FE_INEXACT\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef FE_INEXACT
	CompareConstant(FE_INEXACT,(1 << (31 - 6)),5302,architecture)
#else
Msg( "Error: Constant not found: FE_INEXACT\n");
cnt++;
#endif

#elif __ia64__
#ifdef FE_INEXACT
	CompareConstant(FE_INEXACT,(1UL << 5),5302,architecture)
#else
Msg( "Error: Constant not found: FE_INEXACT\n");
cnt++;
#endif

#elif __i386__
#ifdef FE_INEXACT
	CompareConstant(FE_INEXACT,0x20,5302,architecture)
#else
Msg( "Error: Constant not found: FE_INEXACT\n");
cnt++;
#endif

#elif __x86_64__
#ifdef FE_INEXACT
	CompareConstant(FE_INEXACT,0x20,5302,architecture)
#else
Msg( "Error: Constant not found: FE_INEXACT\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef FE_INEXACT
	CompareConstant(FE_INEXACT,0x08,5302,architecture)
#else
Msg( "Error: Constant not found: FE_INEXACT\n");
cnt++;
#endif

#else
Msg( "No definition for FE_INEXACT (5302, int) in db\n");
#ifdef FE_INEXACT
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,5302,%d);\n", architecture, FE_INEXACT);
#endif
#endif
#if __powerpc64__
#ifdef FE_TONEAREST
	CompareConstant(FE_TONEAREST,0,5303,architecture)
#else
Msg( "Error: Constant not found: FE_TONEAREST\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef FE_TONEAREST
	CompareConstant(FE_TONEAREST,0,5303,architecture)
#else
Msg( "Error: Constant not found: FE_TONEAREST\n");
cnt++;
#endif

#elif __ia64__
#ifdef FE_TONEAREST
	CompareConstant(FE_TONEAREST,0,5303,architecture)
#else
Msg( "Error: Constant not found: FE_TONEAREST\n");
cnt++;
#endif

#elif __i386__
#ifdef FE_TONEAREST
	CompareConstant(FE_TONEAREST,0,5303,architecture)
#else
Msg( "Error: Constant not found: FE_TONEAREST\n");
cnt++;
#endif

#elif __s390x__
#ifdef FE_TONEAREST
	CompareConstant(FE_TONEAREST,0,5303,architecture)
#else
Msg( "Error: Constant not found: FE_TONEAREST\n");
cnt++;
#endif

#elif __x86_64__
#ifdef FE_TONEAREST
	CompareConstant(FE_TONEAREST,0,5303,architecture)
#else
Msg( "Error: Constant not found: FE_TONEAREST\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef FE_TONEAREST
	CompareConstant(FE_TONEAREST,0,5303,architecture)
#else
Msg( "Error: Constant not found: FE_TONEAREST\n");
cnt++;
#endif

#else
Msg( "No definition for FE_TONEAREST (5303, int) in db\n");
#ifdef FE_TONEAREST
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,5303,%d);\n", architecture, FE_TONEAREST);
#endif
#endif
#if __powerpc64__
#ifdef FE_DOWNWARD
	CompareConstant(FE_DOWNWARD,3,5304,architecture)
#else
Msg( "Error: Constant not found: FE_DOWNWARD\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef FE_DOWNWARD
	CompareConstant(FE_DOWNWARD,3,5304,architecture)
#else
Msg( "Error: Constant not found: FE_DOWNWARD\n");
cnt++;
#endif

#elif __ia64__
#ifdef FE_DOWNWARD
	CompareConstant(FE_DOWNWARD,1,5304,architecture)
#else
Msg( "Error: Constant not found: FE_DOWNWARD\n");
cnt++;
#endif

#elif __i386__
#ifdef FE_DOWNWARD
	CompareConstant(FE_DOWNWARD,0x400,5304,architecture)
#else
Msg( "Error: Constant not found: FE_DOWNWARD\n");
cnt++;
#endif

#elif __s390x__
#ifdef FE_DOWNWARD
	CompareConstant(FE_DOWNWARD,0x3,5304,architecture)
#else
Msg( "Error: Constant not found: FE_DOWNWARD\n");
cnt++;
#endif

#elif __x86_64__
#ifdef FE_DOWNWARD
	CompareConstant(FE_DOWNWARD,0x400,5304,architecture)
#else
Msg( "Error: Constant not found: FE_DOWNWARD\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef FE_DOWNWARD
	CompareConstant(FE_DOWNWARD,0x3,5304,architecture)
#else
Msg( "Error: Constant not found: FE_DOWNWARD\n");
cnt++;
#endif

#else
Msg( "No definition for FE_DOWNWARD (5304, int) in db\n");
#ifdef FE_DOWNWARD
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,5304,%d);\n", architecture, FE_DOWNWARD);
#endif
#endif
#if __ia64__
#ifdef FE_UPWARD
	CompareConstant(FE_UPWARD,2,5305,architecture)
#else
Msg( "Error: Constant not found: FE_UPWARD\n");
cnt++;
#endif

#elif __i386__
#ifdef FE_UPWARD
	CompareConstant(FE_UPWARD,0x800,5305,architecture)
#else
Msg( "Error: Constant not found: FE_UPWARD\n");
cnt++;
#endif

#elif __s390x__
#ifdef FE_UPWARD
	CompareConstant(FE_UPWARD,0x2,5305,architecture)
#else
Msg( "Error: Constant not found: FE_UPWARD\n");
cnt++;
#endif

#elif __x86_64__
#ifdef FE_UPWARD
	CompareConstant(FE_UPWARD,0x800,5305,architecture)
#else
Msg( "Error: Constant not found: FE_UPWARD\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef FE_UPWARD
	CompareConstant(FE_UPWARD,0x2,5305,architecture)
#else
Msg( "Error: Constant not found: FE_UPWARD\n");
cnt++;
#endif

#else
Msg( "No definition for FE_UPWARD (5305, int) in db\n");
#ifdef FE_UPWARD
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,5305,%d);\n", architecture, FE_UPWARD);
#endif
#endif
#if __powerpc64__
#ifdef FE_TOWARDZERO
	CompareConstant(FE_TOWARDZERO,1,5306,architecture)
#else
Msg( "Error: Constant not found: FE_TOWARDZERO\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef FE_TOWARDZERO
	CompareConstant(FE_TOWARDZERO,1,5306,architecture)
#else
Msg( "Error: Constant not found: FE_TOWARDZERO\n");
cnt++;
#endif

#elif __ia64__
#ifdef FE_TOWARDZERO
	CompareConstant(FE_TOWARDZERO,3,5306,architecture)
#else
Msg( "Error: Constant not found: FE_TOWARDZERO\n");
cnt++;
#endif

#elif __i386__
#ifdef FE_TOWARDZERO
	CompareConstant(FE_TOWARDZERO,0xc00,5306,architecture)
#else
Msg( "Error: Constant not found: FE_TOWARDZERO\n");
cnt++;
#endif

#elif __s390x__
#ifdef FE_TOWARDZERO
	CompareConstant(FE_TOWARDZERO,0x1,5306,architecture)
#else
Msg( "Error: Constant not found: FE_TOWARDZERO\n");
cnt++;
#endif

#elif __x86_64__
#ifdef FE_TOWARDZERO
	CompareConstant(FE_TOWARDZERO,0xc00,5306,architecture)
#else
Msg( "Error: Constant not found: FE_TOWARDZERO\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef FE_TOWARDZERO
	CompareConstant(FE_TOWARDZERO,0x1,5306,architecture)
#else
Msg( "Error: Constant not found: FE_TOWARDZERO\n");
cnt++;
#endif

#else
Msg( "No definition for FE_TOWARDZERO (5306, int) in db\n");
#ifdef FE_TOWARDZERO
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,5306,%d);\n", architecture, FE_TOWARDZERO);
#endif
#endif
#if __powerpc64__
#ifdef FE_ALL_EXCEPT
	CompareConstant(FE_ALL_EXCEPT,(FE_INEXACT | FE_DIVBYZERO | FE_UNDERFLOW | FE_OVERFLOW | FE_INVALID),5307,architecture)
#else
Msg( "Error: Constant not found: FE_ALL_EXCEPT\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef FE_ALL_EXCEPT
	CompareConstant(FE_ALL_EXCEPT,(FE_INEXACT | FE_DIVBYZERO | FE_UNDERFLOW | FE_OVERFLOW | FE_INVALID),5307,architecture)
#else
Msg( "Error: Constant not found: FE_ALL_EXCEPT\n");
cnt++;
#endif

#elif __ia64__
#ifdef FE_ALL_EXCEPT
	CompareConstant(FE_ALL_EXCEPT,(FE_INEXACT | FE_UNDERFLOW | FE_OVERFLOW | FE_DIVBYZERO | FE_UNNORMAL | F
E_INVALID),5307,architecture)
#else
Msg( "Error: Constant not found: FE_ALL_EXCEPT\n");
cnt++;
#endif

#elif __i386__
#ifdef FE_ALL_EXCEPT
	CompareConstant(FE_ALL_EXCEPT,(FE_INEXACT | FE_DIVBYZERO | FE_UNDERFLOW | FE_OVERFLOW | FE_INVALID),5307,architecture)
#else
Msg( "Error: Constant not found: FE_ALL_EXCEPT\n");
cnt++;
#endif

#elif __s390x__
#ifdef FE_ALL_EXCEPT
	CompareConstant(FE_ALL_EXCEPT,(FE_INEXACT | FE_DIVBYZERO | FE_UNDERFLOW | FE_OVERFLOW | FE_INVALID),5307,architecture)
#else
Msg( "Error: Constant not found: FE_ALL_EXCEPT\n");
cnt++;
#endif

#elif __x86_64__
#ifdef FE_ALL_EXCEPT
	CompareConstant(FE_ALL_EXCEPT,(FE_INEXACT | FE_DIVBYZERO | FE_UNDERFLOW | FE_OVERFLOW | FE_INVALID),5307,architecture)
#else
Msg( "Error: Constant not found: FE_ALL_EXCEPT\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef FE_ALL_EXCEPT
	CompareConstant(FE_ALL_EXCEPT,(FE_INEXACT | FE_DIVBYZERO | FE_UNDERFLOW | FE_OVERFLOW | FE_INVALID),5307,architecture)
#else
Msg( "Error: Constant not found: FE_ALL_EXCEPT\n");
cnt++;
#endif

#else
Msg( "No definition for FE_ALL_EXCEPT (5307, int) in db\n");
#ifdef FE_ALL_EXCEPT
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,5307,%d);\n", architecture, FE_ALL_EXCEPT);
#endif
#endif
#if __powerpc64__
/* No test for FE_DFL_ENV */
#elif __powerpc__ && !__powerpc64__
/* No test for FE_DFL_ENV */
#elif __ia64__
/* No test for FE_DFL_ENV */
#elif __i386__
/* No test for FE_DFL_ENV */
#elif __s390x__
/* No test for FE_DFL_ENV */
#elif __x86_64__
/* No test for FE_DFL_ENV */
#elif __s390__ && !__s390x__
/* No test for FE_DFL_ENV */
#else
Msg( "No definition for FE_DFL_ENV (5308, macro) in db\n");
#ifdef FE_DFL_ENV
#endif
#endif
#if __ia64__
#ifdef FE_UNNORMAL
	CompareConstant(FE_UNNORMAL,1UL << 1,5309,architecture)
#else
Msg( "Error: Constant not found: FE_UNNORMAL\n");
cnt++;
#endif

#else
Msg( "No definition for FE_UNNORMAL (5309, int) in db\n");
#ifdef FE_UNNORMAL
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,5309,%d);\n", architecture, FE_UNNORMAL);
#endif
#endif
#if __i386__
CheckTypeSize(fexcept_t,2, 11038, 2)
#endif

#if __ia64__
CheckTypeSize(fexcept_t,8, 11043, 3)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(fexcept_t,4, 11046, 6)
#endif

#if __powerpc64__
CheckTypeSize(fexcept_t,4, 11047, 9)
#endif

#if __s390__ && !__s390x__
CheckTypeSize(fexcept_t,4, 11053, 10)
#endif

#if __s390x__
CheckTypeSize(fexcept_t,4, 11054, 12)
#endif

#if __x86_64__
CheckTypeSize(fexcept_t,2, 11055, 11)
#endif

#if __i386__
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(fenv_t,8, 11040, 6)
#endif

#if __powerpc64__
CheckTypeSize(struct fenv_t,8, 11041, 9)
Msg("Missing member data for fenv_t on PPC64\n");
#endif

#if __ia64__
CheckTypeSize(fenv_t,8, 11042, 3)
#endif

#if __s390__ && !__s390x__
CheckTypeSize(fenv_t,4, 11044, 10)
#endif

#if __s390x__
CheckTypeSize(fenv_t,4, 11045, 12)
#endif

#if __i386__
CheckTypeSize(fenv_t,28, 11048, 2)
#endif

#if __x86_64__
CheckTypeSize(fenv_t,4, 11056, 11)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in fenv.h\n",cnt);
return cnt;
#endif

}
