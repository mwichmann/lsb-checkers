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

#if __powerpc__ && !__powerpc64__
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

#elif __s390x__
#ifdef NGREG
	CompareConstant(NGREG,27,4929,architecture)
#else
Msg( "Error: Constant not found: NGREG\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef NGREG
	CompareConstant(NGREG,36,4929,architecture)
#else
Msg( "Error: Constant not found: NGREG\n");
cnt++;
#endif

#else
Msg( "No definition for NGREG (4929, int) in db\n");
#ifdef NGREG
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,4929,%d);\n", architecture, NGREG);
#endif
#endif
#if __ia64__
#ifdef _SC_GR0_OFFSET
	CompareConstant(_SC_GR0_OFFSET,(((char *) &((struct sigcontext *) 0)->sc_gr[0]) - (char *) 0),5031,architecture)
#else
Msg( "Error: Constant not found: _SC_GR0_OFFSET\n");
cnt++;
#endif

#else
Msg( "No definition for _SC_GR0_OFFSET (5031, int) in db\n");
#ifdef _SC_GR0_OFFSET
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,5031,%d);\n", architecture, _SC_GR0_OFFSET);
#endif
#endif
#if __powerpc__ && !__powerpc64__
CheckTypeSize(struct pt_regs,176, 10528, 6)
CheckMemberSize(struct pt_regs,gpr,128,6,40166)
CheckOffset(struct pt_regs,gpr,0,6,40166)
CheckMemberSize(struct pt_regs,nip,4,6,40167)
CheckOffset(struct pt_regs,nip,128,6,40167)
CheckMemberSize(struct pt_regs,msr,4,6,40168)
CheckOffset(struct pt_regs,msr,132,6,40168)
CheckMemberSize(struct pt_regs,orig_gpr3,4,6,40169)
CheckOffset(struct pt_regs,orig_gpr3,136,6,40169)
CheckMemberSize(struct pt_regs,ctr,4,6,40170)
CheckOffset(struct pt_regs,ctr,140,6,40170)
CheckMemberSize(struct pt_regs,link,4,6,40171)
CheckOffset(struct pt_regs,link,144,6,40171)
CheckMemberSize(struct pt_regs,xer,4,6,40172)
CheckOffset(struct pt_regs,xer,148,6,40172)
CheckMemberSize(struct pt_regs,ccr,4,6,40173)
CheckOffset(struct pt_regs,ccr,152,6,40173)
CheckMemberSize(struct pt_regs,mq,4,6,40174)
CheckOffset(struct pt_regs,mq,156,6,40174)
CheckMemberSize(struct pt_regs,trap,4,6,40175)
CheckOffset(struct pt_regs,trap,160,6,40175)
CheckMemberSize(struct pt_regs,dar,4,6,40176)
CheckOffset(struct pt_regs,dar,164,6,40176)
CheckMemberSize(struct pt_regs,dsisr,4,6,40177)
CheckOffset(struct pt_regs,dsisr,168,6,40177)
CheckMemberSize(struct pt_regs,result,4,6,40178)
CheckOffset(struct pt_regs,result,172,6,40178)
#endif

#if __i386__
CheckTypeSize(greg_t,4, 10222, 2)
#endif

#if __i386__
CheckTypeSize(gregset_t,76, 10224, 2)
#endif

#if __i386__
CheckTypeSize(struct _libc_fpreg,10, 10225, 2)
CheckMemberSize(struct _libc_fpreg,significand,8,2,34315)
CheckOffset(struct _libc_fpreg,significand,0,2,34315)
CheckMemberSize(struct _libc_fpreg,exponent,2,2,34316)
CheckOffset(struct _libc_fpreg,exponent,8,2,34316)
#endif

#if __i386__
CheckTypeSize(struct _libc_fpstate,112, 10226, 2)
CheckMemberSize(struct _libc_fpstate,cw,4,2,34317)
CheckOffset(struct _libc_fpstate,cw,0,2,34317)
CheckMemberSize(struct _libc_fpstate,sw,4,2,34318)
CheckOffset(struct _libc_fpstate,sw,4,2,34318)
CheckMemberSize(struct _libc_fpstate,tag,4,2,34319)
CheckOffset(struct _libc_fpstate,tag,8,2,34319)
CheckMemberSize(struct _libc_fpstate,ipoff,4,2,34320)
CheckOffset(struct _libc_fpstate,ipoff,12,2,34320)
CheckMemberSize(struct _libc_fpstate,cssel,4,2,34321)
CheckOffset(struct _libc_fpstate,cssel,16,2,34321)
CheckMemberSize(struct _libc_fpstate,dataoff,4,2,34322)
CheckOffset(struct _libc_fpstate,dataoff,20,2,34322)
CheckMemberSize(struct _libc_fpstate,datasel,4,2,34323)
CheckOffset(struct _libc_fpstate,datasel,24,2,34323)
CheckMemberSize(struct _libc_fpstate,_st,80,2,34325)
CheckOffset(struct _libc_fpstate,_st,28,2,34325)
CheckMemberSize(struct _libc_fpstate,status,4,2,34324)
CheckOffset(struct _libc_fpstate,status,108,2,34324)
#endif

#if __i386__
CheckTypeSize(fpregset_t,4, 10228, 2)
#elif __s390__ && !__s390x__
CheckTypeSize(fpregset_t,136, 10228, 10)
#endif

#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10229,0);
Msg("Find size of anon-mcontext (10229)\n");
#endif

#if __i386__
CheckTypeSize(mcontext_t,88, 10230, 2)
#endif

#if __ia64__
CheckTypeSize(mcontext_t,2656, 10328, 3)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(mcontext_t,32, 10329, 6)
#endif

#if __i386__
CheckTypeSize(struct ucontext,348, 10219, 2)
CheckMemberSize(struct ucontext,uc_flags,4,2,34312)
CheckOffset(struct ucontext,uc_flags,0,2,34312)
CheckMemberSize(struct ucontext,uc_link,4,2,34313)
CheckOffset(struct ucontext,uc_link,4,2,34313)
CheckMemberSize(struct ucontext,uc_stack,12,2,34314)
CheckOffset(struct ucontext,uc_stack,8,2,34314)
CheckMemberSize(struct ucontext,uc_mcontext,88,2,34330)
CheckOffset(struct ucontext,uc_mcontext,20,2,34330)
CheckMemberSize(struct ucontext,uc_sigmask,128,2,34331)
CheckOffset(struct ucontext,uc_sigmask,108,2,34331)
CheckMemberSize(struct ucontext,__fpregs_mem,112,2,34332)
CheckOffset(struct ucontext,__fpregs_mem,236,2,34332)
#endif

#if __i386__
CheckTypeSize(ucontext_t,348, 10220, 2)
#endif

#if __ia64__
CheckTypeSize(struct ucontext,2656, 10330, 3)
CheckMemberSize(struct ucontext,_u,2656,3,34549)
CheckOffset(struct ucontext,_u,0,3,34549)
#endif

#if __ia64__
CheckTypeSize(ucontext_t,2656, 10331, 3)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(ucontext_t,180, 10335, 6)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(struct ucontext,180, 10526, 6)
CheckMemberSize(struct ucontext,uc_flags,4,6,40156)
CheckOffset(struct ucontext,uc_flags,0,6,40156)
CheckMemberSize(struct ucontext,uc_link,4,6,40157)
CheckOffset(struct ucontext,uc_link,4,6,40157)
CheckMemberSize(struct ucontext,uc_stack,12,6,40158)
CheckOffset(struct ucontext,uc_stack,8,6,40158)
CheckMemberSize(struct ucontext,uc_mcontext,32,6,40159)
CheckOffset(struct ucontext,uc_mcontext,20,6,40159)
CheckMemberSize(struct ucontext,uc_sigmask,128,6,40160)
CheckOffset(struct ucontext,uc_sigmask,52,6,40160)
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
