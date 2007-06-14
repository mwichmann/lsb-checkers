/*
 * Test of ucontext.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
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

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in ucontext.h\n");
#endif

printf("Checking data structures in ucontext.h\n");
#if __powerpc64__
#ifdef NGREG
	CompareConstant(NGREG,48,4929,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: NGREG\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef NGREG
	CompareConstant(NGREG,48,4929,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NGREG\n");
cnt++;
#endif

#elif __i386__
#ifdef NGREG
	CompareConstant(NGREG,19,4929,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NGREG\n");
cnt++;
#endif

#elif __s390x__
#ifdef NGREG
	CompareConstant(NGREG,27,4929,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: NGREG\n");
cnt++;
#endif

#elif __x86_64__
#ifdef NGREG
	CompareConstant(NGREG,23,4929,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: NGREG\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef NGREG
	CompareConstant(NGREG,36,4929,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: NGREG\n");
cnt++;
#endif

#else
Msg( "No definition for NGREG (4929, int) in db\n");
#ifdef NGREG
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,4929,%d,'""1.3""',NULL);\n", architecture, NGREG);
#endif
#endif
#if __ia64__
#ifdef _SC_GR0_OFFSET
	CompareConstant(_SC_GR0_OFFSET,\
	(((char *) &((struct sigcontext *) 0)->sc_gr[0]) - (char *) 0),5031,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: _SC_GR0_OFFSET\n");
cnt++;
#endif

#else
Msg( "No definition for _SC_GR0_OFFSET (5031, int) in db\n");
#ifdef _SC_GR0_OFFSET
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5031,%d,'""1.3""',NULL);\n", architecture, _SC_GR0_OFFSET);
#endif
#endif
#if __x86_64__
#endif

#if __x86_64__
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(vrregset_t,528, 10909, 6, 2.0, NULL, 10908, '(__aligned__(16))')
#elif __powerpc64__
CheckTypeSize(vrregset_t,544, 10909, 9, 2.0, NULL, 10908, '(__aligned__(16))')
#endif

#if __powerpc64__
CheckTypeSize(vscr_t,16, 11035, 9, 3.0, NULL, 11034, NULL)
#endif

#if __i386__
CheckTypeSize(greg_t,4, 10222, 2, 2.0, NULL, 6, NULL)
#elif __x86_64__
CheckTypeSize(greg_t,8, 10222, 11, 2.0, NULL, 8, NULL)
#endif

#if __i386__
CheckTypeSize(gregset_t,76, 10224, 2, 2.0, NULL, 10525, NULL)
#elif __x86_64__
CheckTypeSize(gregset_t,184, 10224, 11, 2.0, NULL, 10795, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(gregset_t,192, 10224, 6, 2.0, NULL, 10904, NULL)
#elif __powerpc64__
CheckTypeSize(gregset_t,384, 10224, 9, 2.0, NULL, 10904, NULL)
#endif

#if __i386__
#endif

#if __s390x__
CheckTypeSize(fpreg_t,8, 10566, 12, 2.0, NULL, 10565, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(fpreg_t,8, 10566, 10, 2.0, NULL, 10565, NULL)
#endif

#if __i386__
#elif __x86_64__
#endif

#if __i386__
CheckTypeSize(fpregset_t,4, 10228, 2, 2.0, NULL, 10278, NULL)
#elif __s390x__
CheckTypeSize(fpregset_t,136, 10228, 12, 2.0, NULL, 10567, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(fpregset_t,136, 10228, 10, 2.0, NULL, 10567, NULL)
#elif __x86_64__
CheckTypeSize(fpregset_t,8, 10228, 11, 2.0, NULL, 10278, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(fpregset_t,272, 10228, 6, 2.0, NULL, 10226, NULL)
#elif __powerpc64__
CheckTypeSize(fpregset_t,264, 10228, 9, 2.0, NULL, 11030, NULL)
#endif

#if __i386__
CheckTypeSize(mcontext_t,88, 10230, 2, 2.0, NULL, 10229, NULL)
#elif __ia64__
CheckTypeSize(mcontext_t,2656, 10230, 3, 2.0, NULL, 10005, NULL)
#elif __s390x__
CheckTypeSize(mcontext_t,344, 10230, 12, 2.0, NULL, 10572, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(mcontext_t,272, 10230, 10, 2.0, NULL, 10572, NULL)
#elif __x86_64__
CheckTypeSize(mcontext_t,256, 10230, 11, 2.0, NULL, 10797, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(mcontext_t,992, 10230, 6, 2.0, NULL, 10910, NULL)
#elif __powerpc64__
CheckTypeSize(mcontext_t,1272, 10230, 9, 2.0, NULL, 11028, NULL)
#endif

#if __i386__
CheckTypeSize(ucontext_t,348, 10220, 2, 2.0, NULL, 10219, NULL)
#elif __ia64__
CheckTypeSize(ucontext_t,2656, 10220, 3, 2.0, NULL, 10219, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(ucontext_t,1184, 10220, 6, 2.0, NULL, 10219, NULL)
#elif __s390x__
CheckTypeSize(ucontext_t,512, 10220, 12, 2.0, NULL, 10219, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(ucontext_t,424, 10220, 10, 2.0, NULL, 10219, NULL)
#elif __x86_64__
CheckTypeSize(ucontext_t,936, 10220, 11, 2.0, NULL, 10219, NULL)
#elif __powerpc64__
CheckTypeSize(ucontext_t,1440, 10220, 9, 2.0, NULL, 10219, NULL)
#endif

#if __powerpc__ && !__powerpc64__
#endif

extern int getcontext_db(ucontext_t *);
CheckInterfacedef(getcontext,getcontext_db);
extern void makecontext_db(ucontext_t *, void(*func)(void)
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
