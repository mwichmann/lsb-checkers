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

#if __powerpc64__
#ifdef NGREG
	CompareConstant(NGREG,48,4929,architecture)
#else
Msg( "Error: Constant not found: NGREG\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
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

#elif __x86_64__
#ifdef NGREG
	CompareConstant(NGREG,23,4929,architecture)
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

#if __x86_64__
CheckTypeSize(struct _libc_fpxreg,16, 10799, 11)
CheckMemberSize(struct _libc_fpxreg,significand,8,11,40467)
CheckOffset(struct _libc_fpxreg,significand,0,11,40467)
CheckMemberSize(struct _libc_fpxreg,exponent,2,11,40468)
CheckOffset(struct _libc_fpxreg,exponent,8,11,40468)
CheckMemberSize(struct _libc_fpxreg,padding,6,11,40469)
CheckOffset(struct _libc_fpxreg,padding,10,11,40469)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(struct _libc_vrstate,528, 10908, 6)
CheckMemberSize(struct _libc_vrstate,vrregs,512,6,40642)
CheckOffset(struct _libc_vrstate,vrregs,0,6,40642)
CheckMemberSize(struct _libc_vrstate,vscr,4,6,40643)
CheckOffset(struct _libc_vrstate,vscr,512,6,40643)
CheckMemberSize(struct _libc_vrstate,vrsave,4,6,40644)
CheckOffset(struct _libc_vrstate,vrsave,516,6,40644)
CheckMemberSize(struct _libc_vrstate,_pad,8,6,40645)
CheckOffset(struct _libc_vrstate,_pad,520,6,40645)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(vrregset_t,528, 10909, 6)
#endif

#if __i386__
CheckTypeSize(greg_t,4, 10222, 2)
#endif

#if __x86_64__
CheckTypeSize(greg_t,8, 10794, 11)
#endif

#if __i386__
CheckTypeSize(gregset_t,76, 10224, 2)
#endif

#if __x86_64__
CheckTypeSize(gregset_t,184, 10796, 11)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(gregset_t,192, 10905, 6)
#endif

#if __i386__
CheckTypeSize(struct _libc_fpreg,10, 10225, 2)
CheckMemberSize(struct _libc_fpreg,significand,8,2,34315)
CheckOffset(struct _libc_fpreg,significand,0,2,34315)
CheckMemberSize(struct _libc_fpreg,exponent,2,2,34316)
CheckOffset(struct _libc_fpreg,exponent,8,2,34316)
#endif

#if __s390x__
CheckTypeSize(fpreg_t,8, 10566, 12)
#endif

#if __s390__ && !__s390x__
CheckTypeSize(fpreg_t,8, 10583, 10)
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
#endif

#if __s390x__
CheckTypeSize(fpregset_t,136, 10569, 12)
#endif

#if __s390__ && !__s390x__
CheckTypeSize(fpregset_t,136, 10586, 10)
#endif

#if __x86_64__
CheckTypeSize(struct _libc_xmmreg,16, 10800, 11)
CheckMemberSize(struct _libc_xmmreg,element,16,11,40470)
CheckOffset(struct _libc_xmmreg,element,0,11,40470)
#endif

#if __x86_64__
CheckTypeSize(struct _libc_fpstate,512, 10801, 11)
CheckMemberSize(struct _libc_fpstate,cwd,2,11,40471)
CheckOffset(struct _libc_fpstate,cwd,0,11,40471)
CheckMemberSize(struct _libc_fpstate,swd,2,11,40472)
CheckOffset(struct _libc_fpstate,swd,2,11,40472)
CheckMemberSize(struct _libc_fpstate,ftw,2,11,40473)
CheckOffset(struct _libc_fpstate,ftw,4,11,40473)
CheckMemberSize(struct _libc_fpstate,fop,2,11,40474)
CheckOffset(struct _libc_fpstate,fop,6,11,40474)
CheckMemberSize(struct _libc_fpstate,rip,8,11,40475)
CheckOffset(struct _libc_fpstate,rip,8,11,40475)
CheckMemberSize(struct _libc_fpstate,rdp,8,11,40476)
CheckOffset(struct _libc_fpstate,rdp,16,11,40476)
CheckMemberSize(struct _libc_fpstate,mxcsr,4,11,40477)
CheckOffset(struct _libc_fpstate,mxcsr,24,11,40477)
CheckMemberSize(struct _libc_fpstate,mxcr_mask,4,11,40478)
CheckOffset(struct _libc_fpstate,mxcr_mask,28,11,40478)
CheckMemberSize(struct _libc_fpstate,_st,128,11,40479)
CheckOffset(struct _libc_fpstate,_st,32,11,40479)
CheckMemberSize(struct _libc_fpstate,_xmm,256,11,40480)
CheckOffset(struct _libc_fpstate,_xmm,160,11,40480)
CheckMemberSize(struct _libc_fpstate,padding,96,11,40481)
CheckOffset(struct _libc_fpstate,padding,416,11,40481)
#endif

#if __x86_64__
CheckTypeSize(fpregset_t,8, 10802, 11)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(struct _libc_fpstate,272, 10906, 6)
CheckMemberSize(struct _libc_fpstate,fpregs,256,6,40639)
CheckOffset(struct _libc_fpstate,fpregs,0,6,40639)
CheckMemberSize(struct _libc_fpstate,fpscr,8,6,40640)
CheckOffset(struct _libc_fpstate,fpscr,256,6,40640)
CheckMemberSize(struct _libc_fpstate,_pad,8,6,40641)
CheckOffset(struct _libc_fpstate,_pad,264,6,40641)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(fpregset_t,272, 10907, 6)
#endif

#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __s390x__
#elif __s390__ && !__s390x__
#elif __x86_64__
#elif __powerpc64__
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

#if __powerpc64__
CheckTypeSize(mcontext_t,992, 10329, 9)
#endif

#if __s390x__
CheckTypeSize(mcontext_t,344, 10573, 12)
#endif

#if __s390__ && !__s390x__
CheckTypeSize(mcontext_t,272, 10588, 10)
#endif

#if __x86_64__
CheckTypeSize(mcontext_t,256, 10798, 11)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(mcontext_t,992, 10911, 6)
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
CheckTypeSize(ucontext_t,1184, 10335, 6)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(struct ucontext,1184, 10526, 6)
CheckMemberSize(struct ucontext,uc_flags,4,6,40156)
CheckOffset(struct ucontext,uc_flags,0,6,40156)
CheckMemberSize(struct ucontext,uc_link,4,6,40157)
CheckOffset(struct ucontext,uc_link,4,6,40157)
CheckMemberSize(struct ucontext,uc_stack,12,6,40158)
CheckOffset(struct ucontext,uc_stack,8,6,40158)
CheckMemberSize(struct ucontext,uc_pad,28,6,40628)
CheckOffset(struct ucontext,uc_pad,20,6,40628)
CheckMemberSize(struct ucontext,uc_mcontext,4,6,40631)
CheckOffset(struct ucontext,uc_mcontext,48,6,40631)
CheckMemberSize(struct ucontext,uc_sigmask,128,6,40160)
CheckOffset(struct ucontext,uc_sigmask,52,6,40160)
CheckMemberSize(struct ucontext,uc_reg_space,1004,6,40649)
CheckOffset(struct ucontext,uc_reg_space,180,6,40649)
#endif

#if __s390x__
CheckTypeSize(struct ucontext,512, 10574, 12)
CheckMemberSize(struct ucontext,uc_flags,8,12,40307)
CheckOffset(struct ucontext,uc_flags,0,12,40307)
CheckMemberSize(struct ucontext,uc_link,8,12,40311)
CheckOffset(struct ucontext,uc_link,8,12,40311)
CheckMemberSize(struct ucontext,uc_stack,24,12,40308)
CheckOffset(struct ucontext,uc_stack,16,12,40308)
CheckMemberSize(struct ucontext,uc_mcontext,344,12,40309)
CheckOffset(struct ucontext,uc_mcontext,40,12,40309)
CheckMemberSize(struct ucontext,uc_sigmask,128,12,40310)
CheckOffset(struct ucontext,uc_sigmask,384,12,40310)
#endif

#if __s390x__
CheckTypeSize(ucontext_t,512, 10575, 12)
#endif

#if __s390__ && !__s390x__
CheckTypeSize(struct ucontext,424, 10589, 10)
CheckMemberSize(struct ucontext,uc_flags,4,10,40372)
CheckOffset(struct ucontext,uc_flags,0,10,40372)
CheckMemberSize(struct ucontext,uc_link,4,10,40376)
CheckOffset(struct ucontext,uc_link,4,10,40376)
CheckMemberSize(struct ucontext,uc_stack,12,10,40373)
CheckOffset(struct ucontext,uc_stack,8,10,40373)
CheckMemberSize(struct ucontext,uc_mcontext,272,10,40374)
CheckOffset(struct ucontext,uc_mcontext,24,10,40374)
CheckMemberSize(struct ucontext,uc_sigmask,128,10,40375)
CheckOffset(struct ucontext,uc_sigmask,296,10,40375)
#endif

#if __s390__ && !__s390x__
CheckTypeSize(ucontext_t,424, 10590, 10)
#endif

#if __x86_64__
CheckTypeSize(struct ucontext,936, 10803, 11)
CheckMemberSize(struct ucontext,uc_flags,8,11,40484)
CheckOffset(struct ucontext,uc_flags,0,11,40484)
CheckMemberSize(struct ucontext,uc_link,8,11,40485)
CheckOffset(struct ucontext,uc_link,8,11,40485)
CheckMemberSize(struct ucontext,uc_stack,24,11,40486)
CheckOffset(struct ucontext,uc_stack,16,11,40486)
CheckMemberSize(struct ucontext,uc_mcontext,256,11,40487)
CheckOffset(struct ucontext,uc_mcontext,40,11,40487)
CheckMemberSize(struct ucontext,uc_sigmask,128,11,40488)
CheckOffset(struct ucontext,uc_sigmask,296,11,40488)
CheckMemberSize(struct ucontext,__fpregs_mem,512,11,40489)
CheckOffset(struct ucontext,__fpregs_mem,424,11,40489)
#endif

#if __x86_64__
CheckTypeSize(ucontext_t,936, 10804, 11)
#endif

#if __powerpc64__
CheckTypeSize(struct ucontext,1184, 10921, 9)
CheckMemberSize(struct ucontext,uc_flags,8,9,40666)
CheckOffset(struct ucontext,uc_flags,0,9,40666)
CheckMemberSize(struct ucontext,uc_link,8,9,40667)
CheckOffset(struct ucontext,uc_link,8,9,40667)
CheckMemberSize(struct ucontext,uc_stack,8,9,40668)
CheckOffset(struct ucontext,uc_stack,16,9,40668)
CheckMemberSize(struct ucontext,uc_sigmask,4,9,40669)
CheckOffset(struct ucontext,uc_sigmask,24,9,40669)
CheckMemberSize(struct ucontext,uc_mcontext,8,9,40670)
CheckOffset(struct ucontext,uc_mcontext,28,9,40670)
#endif

#if __powerpc64__
CheckTypeSize(ucontext_t,1184, 10922, 9)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(union uc_regs_ptr,4, 10915, 6)
CheckMemberSize(union uc_regs_ptr,regs,4,6,40650)
CheckOffset(union uc_regs_ptr,regs,0,6,40650)
CheckMemberSize(union uc_regs_ptr,uc_regs,4,6,40651)
CheckOffset(union uc_regs_ptr,uc_regs,0,6,40651)
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
