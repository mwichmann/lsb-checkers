/*
 * Test of signal.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "signal.h"



#ifdef TET_TEST
void signal_h()
{
#else
int signal_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in signal.h\n");
#endif

#if _LSB_DEFAULT_ARCH
#ifdef NSIG
	CompareConstant(NSIG,64,2460,architecture)
#else
Msg( "Error: Constant not found: NSIG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SV_ONSTACK
	CompareConstant(SV_ONSTACK,(1<<0),2462,architecture)
#else
Msg( "Error: Constant not found: SV_ONSTACK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SV_INTERRUPT
	CompareConstant(SV_INTERRUPT,(1<<1),2463,architecture)
#else
Msg( "Error: Constant not found: SV_INTERRUPT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SV_RESETHAND
	CompareConstant(SV_RESETHAND,(1<<2),2464,architecture)
#else
Msg( "Error: Constant not found: SV_RESETHAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGHUP
	CompareConstant(SIGHUP,1,3102,architecture)
#else
Msg( "Error: Constant not found: SIGHUP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGINT
	CompareConstant(SIGINT,2,3103,architecture)
#else
Msg( "Error: Constant not found: SIGINT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGQUIT
	CompareConstant(SIGQUIT,3,3104,architecture)
#else
Msg( "Error: Constant not found: SIGQUIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGILL
	CompareConstant(SIGILL,4,3105,architecture)
#else
Msg( "Error: Constant not found: SIGILL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGTRAP
	CompareConstant(SIGTRAP,5,3106,architecture)
#else
Msg( "Error: Constant not found: SIGTRAP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGABRT
	CompareConstant(SIGABRT,6,3107,architecture)
#else
Msg( "Error: Constant not found: SIGABRT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGIOT
	CompareConstant(SIGIOT,6,3108,architecture)
#else
Msg( "Error: Constant not found: SIGIOT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGBUS
	CompareConstant(SIGBUS,7,3109,architecture)
#else
Msg( "Error: Constant not found: SIGBUS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGFPE
	CompareConstant(SIGFPE,8,3110,architecture)
#else
Msg( "Error: Constant not found: SIGFPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGKILL
	CompareConstant(SIGKILL,9,3111,architecture)
#else
Msg( "Error: Constant not found: SIGKILL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGUSR1
	CompareConstant(SIGUSR1,10,3112,architecture)
#else
Msg( "Error: Constant not found: SIGUSR1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGSEGV
	CompareConstant(SIGSEGV,11,3113,architecture)
#else
Msg( "Error: Constant not found: SIGSEGV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGUSR2
	CompareConstant(SIGUSR2,12,3114,architecture)
#else
Msg( "Error: Constant not found: SIGUSR2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGPIPE
	CompareConstant(SIGPIPE,13,3115,architecture)
#else
Msg( "Error: Constant not found: SIGPIPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGALRM
	CompareConstant(SIGALRM,14,3116,architecture)
#else
Msg( "Error: Constant not found: SIGALRM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGTERM
	CompareConstant(SIGTERM,15,3117,architecture)
#else
Msg( "Error: Constant not found: SIGTERM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGSTKFLT
	CompareConstant(SIGSTKFLT,16,3118,architecture)
#else
Msg( "Error: Constant not found: SIGSTKFLT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGCHLD
	CompareConstant(SIGCHLD,17,3119,architecture)
#else
Msg( "Error: Constant not found: SIGCHLD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGCLD
	CompareConstant(SIGCLD,SIGCHLD,3120,architecture)
#else
Msg( "Error: Constant not found: SIGCLD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGCONT
	CompareConstant(SIGCONT,18,3121,architecture)
#else
Msg( "Error: Constant not found: SIGCONT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGSTOP
	CompareConstant(SIGSTOP,19,3122,architecture)
#else
Msg( "Error: Constant not found: SIGSTOP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGTSTP
	CompareConstant(SIGTSTP,20,3123,architecture)
#else
Msg( "Error: Constant not found: SIGTSTP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGTTIN
	CompareConstant(SIGTTIN,21,3124,architecture)
#else
Msg( "Error: Constant not found: SIGTTIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGTTOU
	CompareConstant(SIGTTOU,22,3125,architecture)
#else
Msg( "Error: Constant not found: SIGTTOU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGURG
	CompareConstant(SIGURG,23,3126,architecture)
#else
Msg( "Error: Constant not found: SIGURG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGXCPU
	CompareConstant(SIGXCPU,24,3127,architecture)
#else
Msg( "Error: Constant not found: SIGXCPU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGXFSZ
	CompareConstant(SIGXFSZ,25,3128,architecture)
#else
Msg( "Error: Constant not found: SIGXFSZ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGVTALRM
	CompareConstant(SIGVTALRM,26,3129,architecture)
#else
Msg( "Error: Constant not found: SIGVTALRM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGPROF
	CompareConstant(SIGPROF,27,3130,architecture)
#else
Msg( "Error: Constant not found: SIGPROF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGWINCH
	CompareConstant(SIGWINCH,28,3131,architecture)
#else
Msg( "Error: Constant not found: SIGWINCH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGIO
	CompareConstant(SIGIO,29,3132,architecture)
#else
Msg( "Error: Constant not found: SIGIO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGPOLL
	CompareConstant(SIGPOLL,SIGIO,3133,architecture)
#else
Msg( "Error: Constant not found: SIGPOLL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGPWR
	CompareConstant(SIGPWR,30,3134,architecture)
#else
Msg( "Error: Constant not found: SIGPWR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGSYS
	CompareConstant(SIGSYS,31,3135,architecture)
#else
Msg( "Error: Constant not found: SIGSYS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGUNUSED
	CompareConstant(SIGUNUSED,31,3136,architecture)
#else
Msg( "Error: Constant not found: SIGUNUSED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGRTMIN
	CompareConstant(SIGRTMIN,(__libc_current_sigrtmin ()),3137,architecture)
#else
Msg( "Error: Constant not found: SIGRTMIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGRTMAX
	CompareConstant(SIGRTMAX,(__libc_current_sigrtmax ()),3138,architecture)
#else
Msg( "Error: Constant not found: SIGRTMAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SA_NOCLDSTOP
	CompareConstant(SA_NOCLDSTOP,0x00000001,3139,architecture)
#else
Msg( "Error: Constant not found: SA_NOCLDSTOP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SA_SIGINFO
	CompareConstant(SA_SIGINFO,0x00000004,3141,architecture)
#else
Msg( "Error: Constant not found: SA_SIGINFO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SA_ONSTACK
	CompareConstant(SA_ONSTACK,0x08000000,3143,architecture)
#else
Msg( "Error: Constant not found: SA_ONSTACK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SA_RESTART
	CompareConstant(SA_RESTART,0x10000000,3144,architecture)
#else
Msg( "Error: Constant not found: SA_RESTART\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SA_INTERRUPT
	CompareConstant(SA_INTERRUPT,0x20000000,3145,architecture)
#else
Msg( "Error: Constant not found: SA_INTERRUPT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SA_NODEFER
	CompareConstant(SA_NODEFER,0x40000000,3146,architecture)
#else
Msg( "Error: Constant not found: SA_NODEFER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SA_RESETHAND
	CompareConstant(SA_RESETHAND,0x80000000,3147,architecture)
#else
Msg( "Error: Constant not found: SA_RESETHAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SA_NOMASK
	CompareConstant(SA_NOMASK,SA_NODEFER,3148,architecture)
#else
Msg( "Error: Constant not found: SA_NOMASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SA_ONESHOT
	CompareConstant(SA_ONESHOT,SA_RESETHAND,3149,architecture)
#else
Msg( "Error: Constant not found: SA_ONESHOT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIG_BLOCK
	CompareConstant(SIG_BLOCK,0,3154,architecture)
#else
Msg( "Error: Constant not found: SIG_BLOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIG_UNBLOCK
	CompareConstant(SIG_UNBLOCK,1,3155,architecture)
#else
Msg( "Error: Constant not found: SIG_UNBLOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIG_SETMASK
	CompareConstant(SIG_SETMASK,2,3156,architecture)
#else
Msg( "Error: Constant not found: SIG_SETMASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIG_DFL
	CompareConstant(SIG_DFL,((sighandler_t)0),3157,architecture)
#else
Msg( "Error: Constant not found: SIG_DFL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIG_IGN
	CompareConstant(SIG_IGN,((sighandler_t)1),3158,architecture)
#else
Msg( "Error: Constant not found: SIG_IGN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIG_ERR
	CompareConstant(SIG_ERR,((sighandler_t)-1),3159,architecture)
#else
Msg( "Error: Constant not found: SIG_ERR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for si_pid */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for si_uid */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for si_status */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for si_utime */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for si_stime */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for si_value */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for si_int */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for si_ptr */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for si_addr */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for si_band */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for si_fd */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGEV_NONE
	CompareConstant(SIGEV_NONE,1,4868,architecture)
#else
Msg( "Error: Constant not found: SIGEV_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGEV_SIGNAL
	CompareConstant(SIGEV_SIGNAL,0,4869,architecture)
#else
Msg( "Error: Constant not found: SIGEV_SIGNAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGEV_THREAD
	CompareConstant(SIGEV_THREAD,2,4870,architecture)
#else
Msg( "Error: Constant not found: SIGEV_THREAD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SI_ASYNCIO
	CompareConstant(SI_ASYNCIO,-4,4871,architecture)
#else
Msg( "Error: Constant not found: SI_ASYNCIO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SI_MESGQ
	CompareConstant(SI_MESGQ,-3,4872,architecture)
#else
Msg( "Error: Constant not found: SI_MESGQ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SI_QUEUE
	CompareConstant(SI_QUEUE,-1,4873,architecture)
#else
Msg( "Error: Constant not found: SI_QUEUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SI_TIMER
	CompareConstant(SI_TIMER,-2,4874,architecture)
#else
Msg( "Error: Constant not found: SI_TIMER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SI_USER
	CompareConstant(SI_USER,0,4875,architecture)
#else
Msg( "Error: Constant not found: SI_USER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for si_timer1 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for si_timer2 */
#endif

#if __i386__
CheckTypeSize(sig_atomic_t,4, 9092, 2)
#elif __ia64__
CheckTypeSize(sig_atomic_t,4, 9092, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(sig_atomic_t,4, 9092, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(sig_atomic_t,4, 9092, 10)
#elif __powerpc64__
CheckTypeSize(sig_atomic_t,4, 9092, 9)
#elif __s390x__
CheckTypeSize(sig_atomic_t,4, 9092, 12)
#elif __x86_64__
CheckTypeSize(sig_atomic_t,4, 9092, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9092,0);
Msg("Find size of sig_atomic_t (9092)\n");
#endif

#if __i386__
CheckTypeSize(struct sigstack,8, 9315, 2)
CheckMemberSize(struct sigstack,ss_sp,4,2,34194)
CheckOffset(struct sigstack,ss_sp,0,2,34194)
CheckMemberSize(struct sigstack,ss_onstack,4,2,34195)
CheckOffset(struct sigstack,ss_onstack,4,2,34195)
#elif __ia64__
CheckTypeSize(struct sigstack,16, 9315, 3)
CheckMemberSize(struct sigstack,ss_onstack,4,3,34195)
CheckOffset(struct sigstack,ss_onstack,8,3,34195)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct sigstack,8, 9315, 6)
CheckMemberSize(struct sigstack,ss_onstack,4,6,34195)
CheckOffset(struct sigstack,ss_onstack,4,6,34195)
#elif __s390__ && !__s390x__
CheckTypeSize(struct sigstack,8, 9315, 10)
CheckMemberSize(struct sigstack,ss_onstack,4,10,34195)
CheckOffset(struct sigstack,ss_onstack,4,10,34195)
#elif __powerpc64__
CheckTypeSize(struct sigstack,16, 9315, 9)
CheckMemberSize(struct sigstack,ss_onstack,4,9,34195)
CheckOffset(struct sigstack,ss_onstack,8,9,34195)
#elif __s390x__
CheckTypeSize(struct sigstack,16, 9315, 12)
CheckMemberSize(struct sigstack,ss_onstack,4,12,34195)
CheckOffset(struct sigstack,ss_onstack,8,12,34195)
#elif __x86_64__
CheckTypeSize(struct sigstack,16, 9315, 11)
CheckMemberSize(struct sigstack,ss_onstack,4,11,34195)
CheckOffset(struct sigstack,ss_onstack,8,11,34195)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9315,0);
Msg("Find size of sigstack (9315)\n");
#endif

#if __powerpc64__
#endif

#if __s390__ && !__s390x__
CheckTypeSize(_s390_regs_common,4, 10821, 10)
#endif

#if __no_sym__
#endif

#if __no_sym__
CheckTypeSize(_s390_regs_common,4, 10838, )
#endif

#if __i386__
CheckTypeSize(sighandler_t,4, 9374, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9374,0);
Msg("Find size of sighandler_t (9374)\n");
#endif

#if __i386__
CheckTypeSize(sigval_t,4, 9320, 2)
#elif __ia64__
CheckTypeSize(sigval_t,8, 9320, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(sigval_t,4, 9320, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(sigval_t,4, 9320, 10)
#elif __powerpc64__
CheckTypeSize(sigval_t,8, 9320, 9)
#elif __s390x__
CheckTypeSize(sigval_t,8, 9320, 12)
#elif __x86_64__
CheckTypeSize(sigval_t,8, 9320, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9320,0);
Msg("Find size of sigval_t (9320)\n");
#endif

#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __s390__ && !__s390x__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10189,0);
Msg("Find size of anon-_sigev_un (10189)\n");
#endif

#if __i386__
CheckTypeSize(sigevent_t,64, 10190, 2)
#elif __ia64__
CheckTypeSize(sigevent_t,64, 10190, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(sigevent_t,64, 10190, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(sigevent_t,64, 10190, 10)
#elif __powerpc64__
CheckTypeSize(sigevent_t,64, 10190, 9)
#elif __s390x__
CheckTypeSize(sigevent_t,64, 10190, 12)
#elif __x86_64__
CheckTypeSize(sigevent_t,64, 10190, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10190,0);
Msg("Find size of sigevent_t (10190)\n");
#endif

#if __i386__
CheckTypeSize(siginfo_t,128, 9099, 2)
#elif __ia64__
CheckTypeSize(siginfo_t,128, 9099, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(siginfo_t,128, 9099, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(siginfo_t,128, 9099, 10)
#elif __powerpc64__
CheckTypeSize(siginfo_t,128, 9099, 9)
#elif __s390x__
CheckTypeSize(siginfo_t,128, 9099, 12)
#elif __x86_64__
CheckTypeSize(siginfo_t,128, 9099, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9099,0);
Msg("Find size of siginfo_t (9099)\n");
#endif

#if __i386__
CheckTypeSize(sigset_t,128, 10163, 2)
#elif __ia64__
CheckTypeSize(sigset_t,128, 10163, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(sigset_t,128, 10163, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(sigset_t,128, 10163, 10)
#elif __s390x__
CheckTypeSize(sigset_t,128, 10163, 12)
#elif __x86_64__
CheckTypeSize(sigset_t,128, 10163, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10163,0);
Msg("Find size of sigset_t (10163)\n");
#endif

#if __i386__
CheckTypeSize(struct sigaction,140, 9097, 2)
CheckMemberSize(struct sigaction,__sigaction_handler,4,2,34019)
CheckOffset(struct sigaction,__sigaction_handler,0,2,34019)
CheckMemberSize(struct sigaction,sa_mask,128,2,34022)
CheckOffset(struct sigaction,sa_mask,4,2,34022)
CheckMemberSize(struct sigaction,sa_flags,4,2,34020)
CheckOffset(struct sigaction,sa_flags,132,2,34020)
CheckMemberSize(struct sigaction,sa_restorer,4,2,34021)
CheckOffset(struct sigaction,sa_restorer,136,2,34021)
#endif

#if __ia64__
CheckTypeSize(struct sigaction,144, 10393, 3)
CheckMemberSize(struct sigaction,__sigaction_handler,8,3,34641)
CheckOffset(struct sigaction,__sigaction_handler,0,3,34641)
CheckMemberSize(struct sigaction,sa_flags,8,3,34642)
CheckOffset(struct sigaction,sa_flags,8,3,34642)
CheckMemberSize(struct sigaction,sa_mask,128,3,34643)
CheckOffset(struct sigaction,sa_mask,16,3,34643)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(struct sigaction,140, 10401, 6)
CheckMemberSize(struct sigaction,__sigaction_handler,4,6,34712)
CheckOffset(struct sigaction,__sigaction_handler,0,6,34712)
CheckMemberSize(struct sigaction,sa_mask,128,6,34715)
CheckOffset(struct sigaction,sa_mask,4,6,34715)
CheckMemberSize(struct sigaction,sa_flags,4,6,34713)
CheckOffset(struct sigaction,sa_flags,132,6,34713)
CheckMemberSize(struct sigaction,sa_restorer,4,6,34714)
CheckOffset(struct sigaction,sa_restorer,136,6,34714)
#endif

#if __s390__ && !__s390x__
CheckTypeSize(struct sigaction,140, 10402, 10)
CheckMemberSize(struct sigaction,__sigaction_handler,4,10,34716)
CheckOffset(struct sigaction,__sigaction_handler,0,10,34716)
CheckMemberSize(struct sigaction,sa_flags,4,10,34717)
CheckOffset(struct sigaction,sa_flags,132,10,34717)
CheckMemberSize(struct sigaction,sa_restorer,4,10,34718)
CheckOffset(struct sigaction,sa_restorer,136,10,34718)
CheckMemberSize(struct sigaction,sa_mask,128,10,34719)
CheckOffset(struct sigaction,sa_mask,4,10,34719)
#endif

#if __powerpc64__
CheckTypeSize(struct sigaction,12, 10502, 9)
CheckMemberSize(struct sigaction,__sigaction_handler,8,9,40152)
CheckOffset(struct sigaction,__sigaction_handler,0,9,40152)
CheckMemberSize(struct sigaction,sa_mask,0,9,40153)
CheckOffset(struct sigaction,sa_mask,8,9,40153)
CheckMemberSize(struct sigaction,sa_flags,4,9,40154)
CheckOffset(struct sigaction,sa_flags,8,9,40154)
CheckMemberSize(struct sigaction,sa_restorer,0,9,40155)
CheckOffset(struct sigaction,sa_restorer,12,9,40155)
#endif

#if __s390x__
CheckTypeSize(struct sigaction,152, 10576, 12)
CheckMemberSize(struct sigaction,sa_flags,8,12,40312)
CheckOffset(struct sigaction,sa_flags,8,12,40312)
CheckMemberSize(struct sigaction,sa_mask,128,12,40313)
CheckOffset(struct sigaction,sa_mask,24,12,40313)
#endif

#if __x86_64__
CheckTypeSize(struct sigaction,152, 10773, 11)
Msg("Missing member data for sigaction on x86-64\n");
CheckOffset(struct sigaction,__sigaction_handler,0,11,40379)
CheckOffset(struct sigaction,sa_mask,0,11,40380)
CheckOffset(struct sigaction,sa_flags,0,11,40381)
CheckOffset(struct sigaction,sa_restorer,0,11,40382)
#endif

#if __i386__
CheckTypeSize(stack_t,12, 9314, 2)
#elif __ia64__
CheckTypeSize(stack_t,24, 9314, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(stack_t,12, 9314, 6)
#elif __s390x__
CheckTypeSize(stack_t,24, 9314, 12)
#elif __s390__ && !__s390x__
CheckTypeSize(stack_t,12, 9314, 10)
#elif __x86_64__
CheckTypeSize(stack_t,24, 9314, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9314,0);
Msg("Find size of stack_t (9314)\n");
#endif

#if __i386__
CheckTypeSize(struct _fpstate,624, 10198, 2)
CheckMemberSize(struct _fpstate,sw,4,2,34225)
CheckOffset(struct _fpstate,sw,4,2,34225)
CheckMemberSize(struct _fpstate,tag,4,2,34226)
CheckOffset(struct _fpstate,tag,8,2,34226)
CheckMemberSize(struct _fpstate,ipoff,4,2,34229)
CheckOffset(struct _fpstate,ipoff,12,2,34229)
CheckMemberSize(struct _fpstate,cssel,4,2,34230)
CheckOffset(struct _fpstate,cssel,16,2,34230)
CheckMemberSize(struct _fpstate,dataoff,4,2,34231)
CheckOffset(struct _fpstate,dataoff,20,2,34231)
CheckMemberSize(struct _fpstate,datasel,4,2,34232)
CheckOffset(struct _fpstate,datasel,24,2,34232)
CheckMemberSize(struct _fpstate,_st,80,2,34235)
CheckOffset(struct _fpstate,_st,28,2,34235)
CheckMemberSize(struct _fpstate,status,2,2,34233)
CheckOffset(struct _fpstate,status,108,2,34233)
CheckMemberSize(struct _fpstate,magic,2,2,34234)
CheckOffset(struct _fpstate,magic,110,2,34234)
CheckMemberSize(struct _fpstate,_fxsr_env,24,2,34236)
CheckOffset(struct _fpstate,_fxsr_env,112,2,34236)
CheckMemberSize(struct _fpstate,mxcsr,4,2,34237)
CheckOffset(struct _fpstate,mxcsr,136,2,34237)
CheckMemberSize(struct _fpstate,reserved,4,2,34238)
CheckOffset(struct _fpstate,reserved,140,2,34238)
CheckMemberSize(struct _fpstate,_fxsr_st,128,2,34243)
CheckOffset(struct _fpstate,_fxsr_st,144,2,34243)
CheckMemberSize(struct _fpstate,_xmm,128,2,34244)
CheckOffset(struct _fpstate,_xmm,272,2,34244)
CheckMemberSize(struct _fpstate,padding,224,2,34245)
CheckOffset(struct _fpstate,padding,400,2,34245)
#endif

#if __x86_64__
CheckTypeSize(struct _fpstate,624, 10779, 11)
CheckMemberSize(struct _fpstate,cwd,2,11,40387)
CheckOffset(struct _fpstate,cwd,0,11,40387)
CheckMemberSize(struct _fpstate,swd,2,11,40388)
CheckOffset(struct _fpstate,swd,2,11,40388)
CheckMemberSize(struct _fpstate,ftw,2,11,40389)
CheckOffset(struct _fpstate,ftw,4,11,40389)
CheckMemberSize(struct _fpstate,fop,2,11,40390)
CheckOffset(struct _fpstate,fop,6,11,40390)
CheckMemberSize(struct _fpstate,rip,8,11,40391)
CheckOffset(struct _fpstate,rip,8,11,40391)
CheckMemberSize(struct _fpstate,rdp,8,11,40392)
CheckOffset(struct _fpstate,rdp,16,11,40392)
CheckMemberSize(struct _fpstate,mxcsr,4,11,40393)
CheckOffset(struct _fpstate,mxcsr,24,11,40393)
CheckMemberSize(struct _fpstate,mxcr_mask,4,11,40394)
CheckOffset(struct _fpstate,mxcr_mask,28,11,40394)
CheckMemberSize(struct _fpstate,_st,1,11,40395)
CheckOffset(struct _fpstate,_st,0,11,40395)
CheckMemberSize(struct _fpstate,_xmm,1,11,40396)
CheckOffset(struct _fpstate,_xmm,0,11,40396)
CheckMemberSize(struct _fpstate,padding,96,11,40397)
CheckOffset(struct _fpstate,padding,0,11,40397)
#endif

#if __i386__
CheckTypeSize(struct _fpreg,10, 10199, 2)
CheckMemberSize(struct _fpreg,exponent,2,2,34228)
CheckOffset(struct _fpreg,exponent,8,2,34228)
#endif

#if __i386__
CheckTypeSize(struct _fpxreg,16, 10202, 2)
CheckMemberSize(struct _fpxreg,exponent,2,2,34240)
CheckOffset(struct _fpxreg,exponent,8,2,34240)
CheckMemberSize(struct _fpxreg,padding,6,2,34241)
CheckOffset(struct _fpxreg,padding,10,2,34241)
#endif

#if __i386__
CheckTypeSize(struct _xmmreg,16, 10203, 2)
CheckMemberSize(struct _xmmreg,element,16,2,34242)
CheckOffset(struct _xmmreg,element,0,2,34242)
#endif

#if __ia64__
CheckTypeSize(struct ia64_fpreg,16, 10338, 3)
CheckMemberSize(struct ia64_fpreg,u,16,3,34581)
CheckOffset(struct ia64_fpreg,u,0,3,34581)
#endif

#if __x86_64__
CheckTypeSize(struct _fpxreg,16, 10776, 11)
CheckMemberSize(struct _fpxreg,significand,8,11,40383)
CheckOffset(struct _fpxreg,significand,0,11,40383)
CheckMemberSize(struct _fpxreg,exponent,2,11,40384)
CheckOffset(struct _fpxreg,exponent,8,11,40384)
CheckMemberSize(struct _fpxreg,padding,6,11,40385)
CheckOffset(struct _fpxreg,padding,10,11,40385)
#endif

#if __x86_64__
CheckTypeSize(struct _xmmreg,16, 10778, 11)
CheckMemberSize(struct _xmmreg,element,16,11,40386)
CheckOffset(struct _xmmreg,element,0,11,40386)
#endif

#if __s390__ && !__s390x__
CheckTypeSize(_s390_fp_regs,4, 10832, 10)
#endif

#if __s390__ && !__s390x__
CheckTypeSize(_sigregs,4, 10834, 10)
#endif

#if __s390x__
CheckTypeSize(_s390_fp_regs,4, 10840, 12)
#endif

#if __s390x__
CheckTypeSize(_sigregs,4, 10842, 12)
#endif

#if __i386__
CheckTypeSize(struct sigcontext,88, 10005, 2)
CheckMemberSize(struct sigcontext,gs,2,2,34196)
CheckOffset(struct sigcontext,gs,0,2,34196)
CheckMemberSize(struct sigcontext,__gsh,2,2,34197)
CheckOffset(struct sigcontext,__gsh,2,2,34197)
CheckMemberSize(struct sigcontext,fs,2,2,34198)
CheckOffset(struct sigcontext,fs,4,2,34198)
CheckMemberSize(struct sigcontext,__fsh,2,2,34199)
CheckOffset(struct sigcontext,__fsh,6,2,34199)
CheckMemberSize(struct sigcontext,es,2,2,34200)
CheckOffset(struct sigcontext,es,8,2,34200)
CheckMemberSize(struct sigcontext,__esh,2,2,34201)
CheckOffset(struct sigcontext,__esh,10,2,34201)
CheckMemberSize(struct sigcontext,ds,2,2,34202)
CheckOffset(struct sigcontext,ds,12,2,34202)
CheckMemberSize(struct sigcontext,__dsh,2,2,34203)
CheckOffset(struct sigcontext,__dsh,14,2,34203)
CheckMemberSize(struct sigcontext,edi,4,2,34204)
CheckOffset(struct sigcontext,edi,16,2,34204)
CheckMemberSize(struct sigcontext,esi,4,2,34205)
CheckOffset(struct sigcontext,esi,20,2,34205)
CheckMemberSize(struct sigcontext,ebp,4,2,34206)
CheckOffset(struct sigcontext,ebp,24,2,34206)
CheckMemberSize(struct sigcontext,esp,4,2,34207)
CheckOffset(struct sigcontext,esp,28,2,34207)
CheckMemberSize(struct sigcontext,ebx,4,2,34208)
CheckOffset(struct sigcontext,ebx,32,2,34208)
CheckMemberSize(struct sigcontext,edx,4,2,34209)
CheckOffset(struct sigcontext,edx,36,2,34209)
CheckMemberSize(struct sigcontext,ecx,4,2,34210)
CheckOffset(struct sigcontext,ecx,40,2,34210)
CheckMemberSize(struct sigcontext,eax,4,2,34211)
CheckOffset(struct sigcontext,eax,44,2,34211)
CheckMemberSize(struct sigcontext,trapno,4,2,34212)
CheckOffset(struct sigcontext,trapno,48,2,34212)
CheckMemberSize(struct sigcontext,err,4,2,34213)
CheckOffset(struct sigcontext,err,52,2,34213)
CheckMemberSize(struct sigcontext,eip,4,2,34214)
CheckOffset(struct sigcontext,eip,56,2,34214)
CheckMemberSize(struct sigcontext,cs,2,2,34215)
CheckOffset(struct sigcontext,cs,60,2,34215)
CheckMemberSize(struct sigcontext,__csh,2,2,34216)
CheckOffset(struct sigcontext,__csh,62,2,34216)
CheckMemberSize(struct sigcontext,eflags,4,2,34217)
CheckOffset(struct sigcontext,eflags,64,2,34217)
CheckMemberSize(struct sigcontext,esp_at_signal,4,2,34218)
CheckOffset(struct sigcontext,esp_at_signal,68,2,34218)
CheckMemberSize(struct sigcontext,ss,2,2,34219)
CheckOffset(struct sigcontext,ss,72,2,34219)
CheckMemberSize(struct sigcontext,__ssh,2,2,34220)
CheckOffset(struct sigcontext,__ssh,74,2,34220)
CheckMemberSize(struct sigcontext,fpstate,4,2,34221)
CheckOffset(struct sigcontext,fpstate,76,2,34221)
CheckMemberSize(struct sigcontext,oldmask,4,2,34222)
CheckOffset(struct sigcontext,oldmask,80,2,34222)
CheckMemberSize(struct sigcontext,cr2,4,2,34223)
CheckOffset(struct sigcontext,cr2,84,2,34223)
#endif

#if __ia64__
CheckTypeSize(struct sigcontext,2656, 10299, 3)
CheckMemberSize(struct sigcontext,sc_flags,8,3,34560)
CheckOffset(struct sigcontext,sc_flags,0,3,34560)
CheckMemberSize(struct sigcontext,sc_nat,8,3,34561)
CheckOffset(struct sigcontext,sc_nat,8,3,34561)
CheckMemberSize(struct sigcontext,sc_stack,24,3,34562)
CheckOffset(struct sigcontext,sc_stack,16,3,34562)
CheckMemberSize(struct sigcontext,sc_ip,8,3,34563)
CheckOffset(struct sigcontext,sc_ip,40,3,34563)
CheckMemberSize(struct sigcontext,sc_cfm,8,3,34564)
CheckOffset(struct sigcontext,sc_cfm,48,3,34564)
CheckMemberSize(struct sigcontext,sc_um,8,3,34565)
CheckOffset(struct sigcontext,sc_um,56,3,34565)
CheckMemberSize(struct sigcontext,sc_ar_rsc,8,3,34566)
CheckOffset(struct sigcontext,sc_ar_rsc,64,3,34566)
CheckMemberSize(struct sigcontext,sc_ar_bsp,8,3,34567)
CheckOffset(struct sigcontext,sc_ar_bsp,72,3,34567)
CheckMemberSize(struct sigcontext,sc_ar_rnat,8,3,34568)
CheckOffset(struct sigcontext,sc_ar_rnat,80,3,34568)
CheckMemberSize(struct sigcontext,sc_ar_ccv,8,3,34569)
CheckOffset(struct sigcontext,sc_ar_ccv,88,3,34569)
CheckMemberSize(struct sigcontext,sc_ar_unat,8,3,34570)
CheckOffset(struct sigcontext,sc_ar_unat,96,3,34570)
CheckMemberSize(struct sigcontext,sc_ar_fpsr,8,3,34571)
CheckOffset(struct sigcontext,sc_ar_fpsr,104,3,34571)
CheckMemberSize(struct sigcontext,sc_ar_pfs,8,3,34572)
CheckOffset(struct sigcontext,sc_ar_pfs,112,3,34572)
CheckMemberSize(struct sigcontext,sc_ar_lc,8,3,34573)
CheckOffset(struct sigcontext,sc_ar_lc,120,3,34573)
CheckMemberSize(struct sigcontext,sc_pr,8,3,34574)
CheckOffset(struct sigcontext,sc_pr,128,3,34574)
CheckMemberSize(struct sigcontext,sc_br,64,3,34575)
CheckOffset(struct sigcontext,sc_br,136,3,34575)
CheckMemberSize(struct sigcontext,sc_gr,256,3,34576)
CheckOffset(struct sigcontext,sc_gr,200,3,34576)
CheckMemberSize(struct sigcontext,sc_fr,2048,3,34577)
CheckOffset(struct sigcontext,sc_fr,464,3,34577)
CheckMemberSize(struct sigcontext,sc_rbs_base,8,3,34897)
CheckOffset(struct sigcontext,sc_rbs_base,2512,3,34897)
CheckMemberSize(struct sigcontext,sc_loadrs,8,3,34898)
CheckOffset(struct sigcontext,sc_loadrs,2520,3,34898)
CheckMemberSize(struct sigcontext,sc_rsvd,112,3,34578)
CheckOffset(struct sigcontext,sc_rsvd,2528,3,34578)
CheckMemberSize(struct sigcontext,sc_mask,8,3,34579)
CheckOffset(struct sigcontext,sc_mask,2640,3,34579)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(struct sigcontext,32, 10300, 6)
CheckMemberSize(struct sigcontext,_unused,16,6,40161)
CheckOffset(struct sigcontext,_unused,0,6,40161)
CheckMemberSize(struct sigcontext,signal,4,6,40162)
CheckOffset(struct sigcontext,signal,16,6,40162)
CheckMemberSize(struct sigcontext,handler,4,6,40163)
CheckOffset(struct sigcontext,handler,20,6,40163)
CheckMemberSize(struct sigcontext,oldmask,4,6,40164)
CheckOffset(struct sigcontext,oldmask,24,6,40164)
CheckMemberSize(struct sigcontext,regs,4,6,40165)
CheckOffset(struct sigcontext,regs,28,6,40165)
#endif

#if __x86_64__
CheckTypeSize(struct sigcontext,265, 10782, 11)
CheckMemberSize(struct sigcontext,r8,8,11,40398)
CheckOffset(struct sigcontext,r8,0,11,40398)
CheckMemberSize(struct sigcontext,r9,8,11,40399)
CheckOffset(struct sigcontext,r9,8,11,40399)
CheckMemberSize(struct sigcontext,r10,8,11,40400)
CheckOffset(struct sigcontext,r10,0,11,40400)
CheckMemberSize(struct sigcontext,r11,8,11,40401)
CheckOffset(struct sigcontext,r11,0,11,40401)
CheckMemberSize(struct sigcontext,r12,8,11,40402)
CheckOffset(struct sigcontext,r12,0,11,40402)
CheckMemberSize(struct sigcontext,r13,8,11,40403)
CheckOffset(struct sigcontext,r13,0,11,40403)
CheckMemberSize(struct sigcontext,r14,8,11,40404)
CheckOffset(struct sigcontext,r14,0,11,40404)
CheckMemberSize(struct sigcontext,r15,8,11,40405)
CheckOffset(struct sigcontext,r15,0,11,40405)
CheckMemberSize(struct sigcontext,rdi,8,11,40406)
CheckOffset(struct sigcontext,rdi,0,11,40406)
CheckMemberSize(struct sigcontext,rsi,8,11,40407)
CheckOffset(struct sigcontext,rsi,0,11,40407)
CheckMemberSize(struct sigcontext,rbp,8,11,40408)
CheckOffset(struct sigcontext,rbp,0,11,40408)
CheckMemberSize(struct sigcontext,rbx,8,11,40409)
CheckOffset(struct sigcontext,rbx,0,11,40409)
CheckMemberSize(struct sigcontext,rdx,8,11,40410)
CheckOffset(struct sigcontext,rdx,0,11,40410)
CheckMemberSize(struct sigcontext,rax,8,11,40411)
CheckOffset(struct sigcontext,rax,0,11,40411)
CheckMemberSize(struct sigcontext,rcx,8,11,40412)
CheckOffset(struct sigcontext,rcx,0,11,40412)
CheckMemberSize(struct sigcontext,rsp,8,11,40413)
CheckOffset(struct sigcontext,rsp,0,11,40413)
CheckMemberSize(struct sigcontext,rip,8,11,40414)
CheckOffset(struct sigcontext,rip,0,11,40414)
CheckMemberSize(struct sigcontext,eflags,8,11,40415)
CheckOffset(struct sigcontext,eflags,0,11,40415)
CheckMemberSize(struct sigcontext,cs,2,11,40416)
CheckOffset(struct sigcontext,cs,0,11,40416)
CheckMemberSize(struct sigcontext,gs,2,11,40417)
CheckOffset(struct sigcontext,gs,0,11,40417)
CheckMemberSize(struct sigcontext,fs,2,11,40418)
CheckOffset(struct sigcontext,fs,0,11,40418)
CheckMemberSize(struct sigcontext,__pad0,2,11,40419)
CheckOffset(struct sigcontext,__pad0,0,11,40419)
CheckMemberSize(struct sigcontext,err,8,11,40420)
CheckOffset(struct sigcontext,err,0,11,40420)
CheckMemberSize(struct sigcontext,trapno,8,11,40421)
CheckOffset(struct sigcontext,trapno,0,11,40421)
CheckMemberSize(struct sigcontext,oldmask,8,11,40422)
CheckOffset(struct sigcontext,oldmask,0,11,40422)
CheckMemberSize(struct sigcontext,cr2,8,11,40423)
CheckOffset(struct sigcontext,cr2,0,11,40423)
CheckMemberSize(struct sigcontext,fpstate,8,11,40424)
CheckOffset(struct sigcontext,fpstate,0,11,40424)
CheckMemberSize(struct sigcontext,__reserved1,64,11,40425)
CheckOffset(struct sigcontext,__reserved1,0,11,40425)
#endif

#if __powerpc64__
CheckTypeSize(struct sigcontext_struct,100, 10816, 9)
CheckMemberSize(struct sigcontext_struct,_unused,16,9,40580)
CheckOffset(struct sigcontext_struct,_unused,0,9,40580)
CheckMemberSize(struct sigcontext_struct,signal,4,9,40581)
CheckOffset(struct sigcontext_struct,signal,0,9,40581)
CheckMemberSize(struct sigcontext_struct,handler,4,9,40582)
CheckOffset(struct sigcontext_struct,handler,0,9,40582)
CheckMemberSize(struct sigcontext_struct,oldmask,4,9,40583)
CheckOffset(struct sigcontext_struct,oldmask,0,9,40583)
CheckMemberSize(struct sigcontext_struct,regs,4,9,40584)
CheckOffset(struct sigcontext_struct,regs,0,9,40584)
CheckMemberSize(struct sigcontext_struct,gp_regs,4,9,40602)
CheckOffset(struct sigcontext_struct,gp_regs,0,9,40602)
CheckMemberSize(struct sigcontext_struct,fp_regs,4,9,40603)
CheckOffset(struct sigcontext_struct,fp_regs,0,9,40603)
#endif

#if __s390__ && !__s390x__
CheckTypeSize(struct sigcontext,100, 10817, 10)
CheckMemberSize(struct sigcontext,oldmask,8,10,40608)
CheckOffset(struct sigcontext,oldmask,0,10,40608)
CheckMemberSize(struct sigcontext,sregs,4,10,40609)
CheckOffset(struct sigcontext,sregs,8,10,40609)
#endif

#if __s390x__
CheckTypeSize(struct sigcontext,100, 10818, 12)
CheckMemberSize(struct sigcontext,oldmask,4,12,40617)
CheckOffset(struct sigcontext,oldmask,0,12,40617)
CheckMemberSize(struct sigcontext,sregs,4,12,40618)
CheckOffset(struct sigcontext,sregs,0,12,40618)
#endif

#if __powerpc64__
CheckTypeSize(elf_greg_t,4, 10825, 9)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in signal.h\n",cnt);
return cnt;
#endif

}
