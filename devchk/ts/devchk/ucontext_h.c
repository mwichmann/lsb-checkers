/*
 * Test of ucontext.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "ucontext.h"



#ifdef TET_TEST
void ucontext_h()
{
#else
int ucontext_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in ucontext.h\n");
#endif

#ifdef NGREG
	CompareConstant(NGREG,19)
#else
Msg( "Error: Constant not found: NGREG\n");
cnt++;
#endif

#ifdef __i386__
CheckTypeSize(greg_t,4, 10222, 2)
#endif

#ifdef __i386__
CheckTypeSize(gregset_t,76, 10224, 2)
#endif

#ifdef __i386__
CheckTypeSize(struct _libc_fpreg,10, 10225, 2)
#endif

#ifdef __i386__
CheckTypeSize(struct _libc_fpstate,112, 10226, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10226,0);
#endif

#ifdef __i386__
CheckTypeSize(fpregset_t,4, 10228, 2)
#elif __ia64__
CheckTypeSize(fpregset_t,4, 10228, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10228,0);
#endif

#ifdef __i386__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10229,0);
#endif

#ifdef __i386__
CheckTypeSize(mcontext_t,88, 10230, 2)
#elif __ia64__
CheckTypeSize(mcontext_t,2656, 10230, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10230,0);
#endif

#ifdef __i386__
CheckTypeSize(ucontext_t,348, 10220, 2)
#elif __ia64__
CheckTypeSize(ucontext_t,2656, 10220, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10220,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in ucontext.h\n",cnt);
return cnt;
#endif

}
