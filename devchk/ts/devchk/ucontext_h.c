/*
 * Test of ucontext.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
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

#ifdef __powerpc__
#ifdef NGREG
	CompareConstant(NGREG,48,4929,architecture)
#else
Msg( "Error: Constant not found: NGREG\n");
cnt++;
#endif

#elif __i386__
#ifdef NGREG
	CompareConstant(NGREG,19,4929,architecture)
#else
Msg( "Error: Constant not found: NGREG\n");
cnt++;
#endif

#else
Msg( "No definition for NGREG (4929) in db\n");
#endif
#ifdef __i386__
CheckTypeSize(greg_t,4, 10222, 2)
#endif

#ifdef __i386__
CheckTypeSize(gregset_t,19, 10224, 2)
#endif

#ifdef __i386__
CheckTypeSize(struct _libc_fpreg,10, 10225, 2)
CheckOffset(struct _libc_fpreg,significand,0,2,34315)
CheckOffset(struct _libc_fpreg,exponent,8,2,34316)
#endif

#ifdef __i386__
CheckTypeSize(struct _libc_fpstate,112, 10226, 2)
CheckOffset(struct _libc_fpstate,cw,0,2,34317)
CheckOffset(struct _libc_fpstate,sw,4,2,34318)
CheckOffset(struct _libc_fpstate,tag,8,2,34319)
CheckOffset(struct _libc_fpstate,ipoff,12,2,34320)
CheckOffset(struct _libc_fpstate,cssel,16,2,34321)
CheckOffset(struct _libc_fpstate,dataoff,20,2,34322)
CheckOffset(struct _libc_fpstate,datasel,24,2,34323)
CheckOffset(struct _libc_fpstate,_st,28,2,34325)
CheckOffset(struct _libc_fpstate,status,108,2,34324)
#endif

#ifdef __i386__
CheckTypeSize(fpregset_t,4, 10228, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10228,0);
Msg("Find size of anon-mcontext (10228)\n");
#endif

#ifdef __i386__
#elif __ia64__
#elif __powerpc__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10229,0);
Msg("Find size of mcontext_t (10229)\n");
#endif

#ifdef __i386__
CheckTypeSize(mcontext_t,88, 10230, 2)
#elif __ia64__
CheckTypeSize(mcontext_t,2656, 10230, 3)
#elif __powerpc__
CheckTypeSize(mcontext_t,32, 10230, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10230,0);
Msg("Find size of ucontext_t (10230)\n");
#endif

#ifdef __i386__
CheckTypeSize(ucontext_t,348, 10220, 2)
#elif __ia64__
CheckTypeSize(ucontext_t,2656, 10220, 3)
#elif __powerpc__
CheckTypeSize(ucontext_t,180, 10220, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10220,0);
Msg("Find size of ucontext_t (10220)\n");
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
