/*
 * Test of ucontext.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "ucontext.h"



#ifdef TET_TEST
void ucontext_h()
{
#else
int ucontext_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in ucontext.h\n");
#endif

printf("Checking data structures in ucontext.h\n");
#if defined __ia64__
#ifdef uc_mcontext
	CompareMacro(uc_mcontext,_u._mc,_u._mc,11905,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: uc_mcontext\n");
cnt++;
#endif

#else
Msg( "No definition for uc_mcontext (11905, accessor) in db for this architecture\n");
#ifdef uc_mcontext
#endif
#endif
#if defined __ia64__
#ifdef uc_sigmask
	CompareMacro(uc_sigmask,_u._mc.sc_mask,_u._mc.sc_mask,11906,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: uc_sigmask\n");
cnt++;
#endif

#else
Msg( "No definition for uc_sigmask (11906, accessor) in db for this architecture\n");
#ifdef uc_sigmask
#endif
#endif
#if defined __ia64__
#ifdef uc_stack
	CompareMacro(uc_stack,_u._mc.sc_stack,_u._mc.sc_stack,11907,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: uc_stack\n");
cnt++;
#endif

#else
Msg( "No definition for uc_stack (11907, accessor) in db for this architecture\n");
#ifdef uc_stack
#endif
#endif
#if defined __ia64__
#ifdef uc_link
	CompareMacro(uc_link,_u._uc._link,_u._uc._link,11908,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: uc_link\n");
cnt++;
#endif

#else
Msg( "No definition for uc_link (11908, accessor) in db for this architecture\n");
#ifdef uc_link
#endif
#endif
#if defined __powerpc64__
#ifdef NGREG
	CompareConstant(NGREG,48,4929,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: NGREG\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef NGREG
	CompareConstant(NGREG,48,4929,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NGREG\n");
cnt++;
#endif

#elif defined __i386__
#ifdef NGREG
	CompareConstant(NGREG,19,4929,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NGREG\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef NGREG
	CompareConstant(NGREG,27,4929,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: NGREG\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef NGREG
	CompareConstant(NGREG,23,4929,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: NGREG\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef NGREG
	CompareConstant(NGREG,36,4929,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: NGREG\n");
cnt++;
#endif

#else
Msg( "No definition for NGREG (4929, int) in db for this architecture\n");
#ifdef NGREG
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,4929,%d,'""1.3""',NULL);\n", architecture, NGREG);
#endif
#endif
#if defined __ia64__
#ifdef _SC_GR0_OFFSET
	CompareConstant(_SC_GR0_OFFSET,\
	(((char *) &((struct sigcontext *) 0)->sc_gr[0]) - (char *) 0),5031,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: _SC_GR0_OFFSET\n");
cnt++;
#endif

#else
Msg( "No definition for _SC_GR0_OFFSET (5031, int) in db for this architecture\n");
#ifdef _SC_GR0_OFFSET
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5031,%d,'""1.3""',NULL);\n", architecture, _SC_GR0_OFFSET);
#endif
#endif
#if defined __powerpc__ && !defined __powerpc64__
#ifdef ELF_NGREG
	CompareConstant(ELF_NGREG,48,5131,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ELF_NGREG\n");
cnt++;
#endif

#else
Msg( "No definition for ELF_NGREG (5131, int) in db for this architecture\n");
#ifdef ELF_NGREG
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5131,%d,'""1.2""',NULL);\n", architecture, ELF_NGREG);
#endif
#endif
#if defined __x86_64__
CheckTypeSize(struct _libc_fpxreg,16, 10799, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _libc_fpxreg,significand,8,11,40467)
CheckOffset(struct _libc_fpxreg,significand,0,11,40467)
CheckMemberSize(struct _libc_fpxreg,exponent,2,11,40468)
CheckOffset(struct _libc_fpxreg,exponent,8,11,40468)
CheckMemberSize(struct _libc_fpxreg,padding,6,11,40469)
CheckOffset(struct _libc_fpxreg,padding,10,11,40469)
#endif

#if defined __x86_64__
CheckTypeSize(struct _libc_xmmreg,16, 10800, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _libc_xmmreg,element,16,11,40470)
CheckOffset(struct _libc_xmmreg,element,0,11,40470)
#endif

#if defined __powerpc64__
CheckTypeSize(struct _libc_vrstate,544, 10908, 9, , NULL, 0, NULL)
CheckMemberSize(struct _libc_vrstate,vrregs,512,9,40856)
CheckOffset(struct _libc_vrstate,vrregs,0,9,40856)
CheckMemberSize(struct _libc_vrstate,vscr,16,9,40859)
CheckOffset(struct _libc_vrstate,vscr,512,9,40859)
CheckMemberSize(struct _libc_vrstate,vrsave,4,9,40860)
CheckOffset(struct _libc_vrstate,vrsave,528,9,40860)
CheckMemberSize(struct _libc_vrstate,__pad,12,9,40861)
CheckOffset(struct _libc_vrstate,__pad,532,9,40861)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _libc_vrstate,528, 10908, 6, , NULL, 0, NULL)
CheckMemberSize(struct _libc_vrstate,vrregs,512,6,40642)
CheckOffset(struct _libc_vrstate,vrregs,0,6,40642)
CheckMemberSize(struct _libc_vrstate,vrsave,4,6,40644)
CheckOffset(struct _libc_vrstate,vrsave,512,6,40644)
CheckMemberSize(struct _libc_vrstate,_pad,8,6,40645)
CheckOffset(struct _libc_vrstate,_pad,516,6,40645)
CheckMemberSize(struct _libc_vrstate,vscr,4,6,40643)
CheckOffset(struct _libc_vrstate,vscr,524,6,40643)
#endif

#if defined __powerpc64__
CheckTypeSize(vscr_t,16, 10909, 9, 2.0, NULL, 11034, NULL)
#endif

#if defined __powerpc64__
CheckTypeSize(struct _libc_vscr,16, 11034, 9, , NULL, 0, NULL)
CheckMemberSize(struct _libc_vscr,__pad,12,9,40857)
CheckOffset(struct _libc_vscr,__pad,0,9,40857)
CheckMemberSize(struct _libc_vscr,vscr_word,4,9,40858)
CheckOffset(struct _libc_vscr,vscr_word,12,9,40858)
#endif

#if defined __powerpc64__
CheckTypeSize(vrregset_t,544, 11035, 9, 2.0, NULL, 10908, '(__aligned__(16))')
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(vrregset_t,528, 11035, 6, 2.0, NULL, 10908, '(__aligned__(16))')
#endif

#if defined __x86_64__
CheckTypeSize(greg_t,8, 10222, 11, 2.0, NULL, 8, NULL)
#elif defined __i386__
CheckTypeSize(greg_t,4, 10222, 2, 2.0, NULL, 6, NULL)
#endif

#if defined __x86_64__
CheckTypeSize(gregset_t,184, 10224, 11, 2.0, NULL, 10795, NULL)
#elif defined __powerpc64__
CheckTypeSize(gregset_t,384, 10224, 9, 2.0, NULL, 10904, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(gregset_t,192, 10224, 6, 2.0, NULL, 10904, NULL)
#elif defined __i386__
CheckTypeSize(gregset_t,76, 10224, 2, 2.0, NULL, 10525, NULL)
#endif

#if defined __i386__
CheckTypeSize(struct _libc_fpreg,10, 10225, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _libc_fpreg,significand,8,2,34315)
CheckOffset(struct _libc_fpreg,significand,0,2,34315)
CheckMemberSize(struct _libc_fpreg,exponent,2,2,34316)
CheckOffset(struct _libc_fpreg,exponent,8,2,34316)
#endif

#if defined __s390x__
CheckTypeSize(fpreg_t,8, 10566, 12, 2.0, NULL, 10565, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(fpreg_t,8, 10566, 10, 2.0, NULL, 10565, NULL)
#endif

#if defined __x86_64__
CheckTypeSize(struct _libc_fpstate,512, 10226, 11, 2.0, NULL, 0, NULL)
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
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _libc_fpstate,272, 10226, 6, , NULL, 0, NULL)
CheckMemberSize(struct _libc_fpstate,fpregs,256,6,40639)
CheckOffset(struct _libc_fpstate,fpregs,0,6,40639)
CheckMemberSize(struct _libc_fpstate,fpscr,8,6,40640)
CheckOffset(struct _libc_fpstate,fpscr,256,6,40640)
CheckMemberSize(struct _libc_fpstate,_pad,8,6,40641)
CheckOffset(struct _libc_fpstate,_pad,264,6,40641)
#elif defined __i386__
CheckTypeSize(struct _libc_fpstate,112, 10226, 2, 2.0, NULL, 0, NULL)
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

#if defined __s390x__
CheckTypeSize(fpregset_t,136, 10228, 12, 2.0, NULL, 10567, NULL)
#elif defined __x86_64__
CheckTypeSize(fpregset_t,8, 10228, 11, 2.0, NULL, 10278, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(fpregset_t,136, 10228, 10, 2.0, NULL, 10567, NULL)
#elif defined __powerpc64__
CheckTypeSize(fpregset_t,264, 10228, 9, 2.0, NULL, 11030, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(fpregset_t,272, 10228, 6, 2.0, NULL, 10226, NULL)
#elif defined __i386__
CheckTypeSize(fpregset_t,4, 10228, 2, 2.0, NULL, 10278, NULL)
#endif

#if defined __s390x__
CheckTypeSize(mcontext_t,344, 10230, 12, 2.0, NULL, 10572, NULL)
#elif defined __x86_64__
CheckTypeSize(mcontext_t,256, 10230, 11, 2.0, NULL, 10797, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(mcontext_t,272, 10230, 10, 2.0, NULL, 10572, NULL)
#elif defined __powerpc64__
CheckTypeSize(mcontext_t,1272, 10230, 9, 2.0, NULL, 11028, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(mcontext_t,992, 10230, 6, 2.0, NULL, 10910, NULL)
#elif defined __ia64__
CheckTypeSize(mcontext_t,2656, 10230, 3, 2.0, NULL, 10005, NULL)
#elif defined __i386__
CheckTypeSize(mcontext_t,88, 10230, 2, 2.0, NULL, 10229, NULL)
#endif

#if defined __s390x__
CheckTypeSize(struct ucontext,512, 10219, 12, , NULL, 0, NULL)
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
#elif defined __x86_64__
CheckTypeSize(struct ucontext,936, 10219, 11, , NULL, 0, NULL)
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
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct ucontext,424, 10219, 10, , NULL, 0, NULL)
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
#elif defined __powerpc64__
CheckTypeSize(struct ucontext,1440, 10219, 9, , NULL, 0, NULL)
CheckMemberSize(struct ucontext,uc_flags,8,9,40666)
CheckOffset(struct ucontext,uc_flags,0,9,40666)
CheckMemberSize(struct ucontext,uc_link,8,9,40667)
CheckOffset(struct ucontext,uc_link,8,9,40667)
CheckMemberSize(struct ucontext,uc_stack,24,9,40668)
CheckOffset(struct ucontext,uc_stack,16,9,40668)
CheckMemberSize(struct ucontext,uc_sigmask,128,9,40669)
CheckOffset(struct ucontext,uc_sigmask,40,9,40669)
CheckMemberSize(struct ucontext,uc_mcontext,1272,9,40670)
CheckOffset(struct ucontext,uc_mcontext,168,9,40670)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct ucontext,1184, 10219, 6, , NULL, 0, NULL)
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
#elif defined __ia64__
CheckTypeSize(struct ucontext,2656, 10219, 3, , NULL, 0, NULL)
CheckMemberSize(struct ucontext,_u,2656,3,34549)
CheckOffset(struct ucontext,_u,0,3,34549)
#elif defined __i386__
CheckTypeSize(struct ucontext,348, 10219, 2, , NULL, 0, NULL)
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

#if defined __s390x__
CheckTypeSize(ucontext_t,512, 10220, 12, 2.0, NULL, 10219, NULL)
#elif defined __x86_64__
CheckTypeSize(ucontext_t,936, 10220, 11, 2.0, NULL, 10219, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ucontext_t,424, 10220, 10, 2.0, NULL, 10219, NULL)
#elif defined __powerpc64__
CheckTypeSize(ucontext_t,1440, 10220, 9, 2.0, NULL, 10219, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ucontext_t,1184, 10220, 6, 2.0, NULL, 10219, NULL)
#elif defined __ia64__
CheckTypeSize(ucontext_t,2656, 10220, 3, 2.0, NULL, 10219, NULL)
#elif defined __i386__
CheckTypeSize(ucontext_t,348, 10220, 2, 2.0, NULL, 10219, NULL)
#endif

#if defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(union uc_regs_ptr,4, 10915, 6, 2.0, NULL, 0, NULL)
CheckMemberSize(union uc_regs_ptr,regs,4,6,40650)
CheckOffset(union uc_regs_ptr,regs,0,6,40650)
CheckMemberSize(union uc_regs_ptr,uc_regs,4,6,40651)
CheckOffset(union uc_regs_ptr,uc_regs,0,6,40651)
#endif

extern int getcontext_db(ucontext_t *);
CheckInterfacedef(getcontext,getcontext_db);
extern void makecontext_db(ucontext_t *, void(*fptr0)(void)
, int, ...);
CheckInterfacedef(makecontext,makecontext_db);
extern int setcontext_db(const struct ucontext *);
CheckInterfacedef(setcontext,setcontext_db);
extern int swapcontext_db(ucontext_t *, const struct ucontext *);
CheckInterfacedef(swapcontext,swapcontext_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in ucontext.h\n\n",pcnt,cnt);
return cnt;
#endif

}
