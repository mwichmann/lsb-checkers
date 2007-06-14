/*
 * Test of signal.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
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

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in signal.h\n");
#endif

printf("Checking data structures in signal.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef NSIG
	CompareConstant(NSIG,65,2460,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NSIG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SV_ONSTACK
	CompareConstant(SV_ONSTACK,(1<<0),2462,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SV_ONSTACK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SV_INTERRUPT
	CompareConstant(SV_INTERRUPT,(1<<1),2463,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SV_INTERRUPT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SV_RESETHAND
	CompareConstant(SV_RESETHAND,(1<<2),2464,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SV_RESETHAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SIGSET_NWORDS
	CompareConstant(_SIGSET_NWORDS,(1024/(8*sizeof(unsigned long))),3098,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: _SIGSET_NWORDS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGHUP
	CompareConstant(SIGHUP,1,3102,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGHUP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGINT
	CompareConstant(SIGINT,2,3103,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGINT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGQUIT
	CompareConstant(SIGQUIT,3,3104,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGQUIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGILL
	CompareConstant(SIGILL,4,3105,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGILL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGTRAP
	CompareConstant(SIGTRAP,5,3106,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGTRAP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGABRT
	CompareConstant(SIGABRT,6,3107,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGABRT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGIOT
	CompareConstant(SIGIOT,6,3108,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGIOT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGBUS
	CompareConstant(SIGBUS,7,3109,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGBUS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGFPE
	CompareConstant(SIGFPE,8,3110,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGFPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGKILL
	CompareConstant(SIGKILL,9,3111,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGKILL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGUSR1
	CompareConstant(SIGUSR1,10,3112,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGUSR1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGSEGV
	CompareConstant(SIGSEGV,11,3113,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGSEGV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGUSR2
	CompareConstant(SIGUSR2,12,3114,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGUSR2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGPIPE
	CompareConstant(SIGPIPE,13,3115,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGPIPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGALRM
	CompareConstant(SIGALRM,14,3116,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGALRM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGTERM
	CompareConstant(SIGTERM,15,3117,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGTERM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGSTKFLT
	CompareConstant(SIGSTKFLT,16,3118,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGSTKFLT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGCHLD
	CompareConstant(SIGCHLD,17,3119,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGCHLD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGCLD
	CompareConstant(SIGCLD,SIGCHLD,3120,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGCLD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGCONT
	CompareConstant(SIGCONT,18,3121,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGCONT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGSTOP
	CompareConstant(SIGSTOP,19,3122,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGSTOP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGTSTP
	CompareConstant(SIGTSTP,20,3123,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGTSTP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGTTIN
	CompareConstant(SIGTTIN,21,3124,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGTTIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGTTOU
	CompareConstant(SIGTTOU,22,3125,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGTTOU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGURG
	CompareConstant(SIGURG,23,3126,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SIGURG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGXCPU
	CompareConstant(SIGXCPU,24,3127,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGXCPU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGXFSZ
	CompareConstant(SIGXFSZ,25,3128,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGXFSZ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGVTALRM
	CompareConstant(SIGVTALRM,26,3129,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGVTALRM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGPROF
	CompareConstant(SIGPROF,27,3130,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGPROF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGWINCH
	CompareConstant(SIGWINCH,28,3131,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGWINCH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGIO
	CompareConstant(SIGIO,29,3132,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGIO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGPOLL
	CompareConstant(SIGPOLL,SIGIO,3133,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGPOLL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGPWR
	CompareConstant(SIGPWR,30,3134,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGPWR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGSYS
	CompareConstant(SIGSYS,31,3135,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGSYS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGUNUSED
	CompareConstant(SIGUNUSED,31,3136,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGUNUSED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGRTMIN
	CompareConstant(SIGRTMIN,(__libc_current_sigrtmin ()),3137,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGRTMIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGRTMAX
	CompareConstant(SIGRTMAX,(__libc_current_sigrtmax ()),3138,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIGRTMAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SA_NOCLDSTOP
	CompareConstant(SA_NOCLDSTOP,0x00000001,3139,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SA_NOCLDSTOP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SA_NOCLDWAIT
	CompareConstant(SA_NOCLDWAIT,0x00000002,3140,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SA_NOCLDWAIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SA_SIGINFO
	CompareConstant(SA_SIGINFO,0x00000004,3141,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SA_SIGINFO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SA_ONSTACK
	CompareConstant(SA_ONSTACK,0x08000000,3143,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SA_ONSTACK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SA_RESTART
	CompareConstant(SA_RESTART,0x10000000,3144,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SA_RESTART\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SA_INTERRUPT
	CompareConstant(SA_INTERRUPT,0x20000000,3145,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SA_INTERRUPT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SA_NODEFER
	CompareConstant(SA_NODEFER,0x40000000,3146,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SA_NODEFER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SA_RESETHAND
	CompareConstant(SA_RESETHAND,0x80000000,3147,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SA_RESETHAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SA_NOMASK
	CompareConstant(SA_NOMASK,SA_NODEFER,3148,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SA_NOMASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SA_ONESHOT
	CompareConstant(SA_ONESHOT,SA_RESETHAND,3149,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SA_ONESHOT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SS_ONSTACK
	CompareConstant(SS_ONSTACK,1,3150,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: SS_ONSTACK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SS_DISABLE
	CompareConstant(SS_DISABLE,2,3151,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: SS_DISABLE\n");
cnt++;
#endif

#endif

#if __powerpc64__
#ifdef MINSIGSTKSZ
	CompareConstant(MINSIGSTKSZ,2048,3152,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: MINSIGSTKSZ\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef MINSIGSTKSZ
	CompareConstant(MINSIGSTKSZ,2048,3152,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: MINSIGSTKSZ\n");
cnt++;
#endif

#elif __ia64__
#ifdef MINSIGSTKSZ
	CompareConstant(MINSIGSTKSZ,131027,3152,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: MINSIGSTKSZ\n");
cnt++;
#endif

#elif __i386__
#ifdef MINSIGSTKSZ
	CompareConstant(MINSIGSTKSZ,2048,3152,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: MINSIGSTKSZ\n");
cnt++;
#endif

#elif __s390x__
#ifdef MINSIGSTKSZ
	CompareConstant(MINSIGSTKSZ,2048,3152,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: MINSIGSTKSZ\n");
cnt++;
#endif

#elif __x86_64__
#ifdef MINSIGSTKSZ
	CompareConstant(MINSIGSTKSZ,2048,3152,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: MINSIGSTKSZ\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef MINSIGSTKSZ
	CompareConstant(MINSIGSTKSZ,2048,3152,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: MINSIGSTKSZ\n");
cnt++;
#endif

#else
Msg( "No definition for MINSIGSTKSZ (3152, int) in db\n");
#ifdef MINSIGSTKSZ
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,3152,%d,'""2.0""',NULL);\n", architecture, MINSIGSTKSZ);
#endif
#endif
#if __powerpc64__
#ifdef SIGSTKSZ
	CompareConstant(SIGSTKSZ,8192,3153,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: SIGSTKSZ\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef SIGSTKSZ
	CompareConstant(SIGSTKSZ,8192,3153,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: SIGSTKSZ\n");
cnt++;
#endif

#elif __ia64__
#ifdef SIGSTKSZ
	CompareConstant(SIGSTKSZ,262144,3153,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: SIGSTKSZ\n");
cnt++;
#endif

#elif __i386__
#ifdef SIGSTKSZ
	CompareConstant(SIGSTKSZ,8192,3153,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: SIGSTKSZ\n");
cnt++;
#endif

#elif __s390x__
#ifdef SIGSTKSZ
	CompareConstant(SIGSTKSZ,8192,3153,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: SIGSTKSZ\n");
cnt++;
#endif

#elif __x86_64__
#ifdef SIGSTKSZ
	CompareConstant(SIGSTKSZ,8192,3153,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: SIGSTKSZ\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef SIGSTKSZ
	CompareConstant(SIGSTKSZ,8192,3153,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: SIGSTKSZ\n");
cnt++;
#endif

#else
Msg( "No definition for SIGSTKSZ (3153, int) in db\n");
#ifdef SIGSTKSZ
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,3153,%d,'""2.0""',NULL);\n", architecture, SIGSTKSZ);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef SIG_BLOCK
	CompareConstant(SIG_BLOCK,0,3154,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SIG_BLOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIG_UNBLOCK
	CompareConstant(SIG_UNBLOCK,1,3155,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SIG_UNBLOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIG_SETMASK
	CompareConstant(SIG_SETMASK,2,3156,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SIG_SETMASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIG_DFL
	CompareConstant(SIG_DFL,((sighandler_t)0),3157,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIG_DFL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIG_IGN
	CompareConstant(SIG_IGN,((sighandler_t)1),3158,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIG_IGN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIG_ERR
	CompareConstant(SIG_ERR,((sighandler_t)-1),3159,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SIG_ERR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SI_MAX_SIZE
	CompareConstant(SI_MAX_SIZE,128,3160,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SI_MAX_SIZE\n");
cnt++;
#endif

#endif

#if __powerpc64__
#ifdef SI_PAD_SIZE
	CompareConstant(SI_PAD_SIZE,((SI_MAX_SIZE/sizeof(int))-4),3161,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SI_PAD_SIZE\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef SI_PAD_SIZE
	CompareConstant(SI_PAD_SIZE,((SI_MAX_SIZE/sizeof(int))-3),3161,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SI_PAD_SIZE\n");
cnt++;
#endif

#elif __ia64__
#ifdef SI_PAD_SIZE
	CompareConstant(SI_PAD_SIZE,((SI_MAX_SIZE/sizeof(int))-4),3161,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SI_PAD_SIZE\n");
cnt++;
#endif

#elif __i386__
#ifdef SI_PAD_SIZE
	CompareConstant(SI_PAD_SIZE,((SI_MAX_SIZE/sizeof(int))-3),3161,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SI_PAD_SIZE\n");
cnt++;
#endif

#elif __s390x__
#ifdef SI_PAD_SIZE
	CompareConstant(SI_PAD_SIZE,((SI_MAX_SIZE/sizeof(int))-4),3161,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SI_PAD_SIZE\n");
cnt++;
#endif

#elif __x86_64__
#ifdef SI_PAD_SIZE
	CompareConstant(SI_PAD_SIZE,((SI_MAX_SIZE/sizeof(int))-4),3161,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SI_PAD_SIZE\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef SI_PAD_SIZE
	CompareConstant(SI_PAD_SIZE,((SI_MAX_SIZE/sizeof(int))-3),3161,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SI_PAD_SIZE\n");
cnt++;
#endif

#else
Msg( "No definition for SI_PAD_SIZE (3161, int) in db\n");
#ifdef SI_PAD_SIZE
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,3161,%d,'""2.1""',NULL);\n", architecture, SI_PAD_SIZE);
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
	CompareConstant(SIGEV_NONE,1,4868,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SIGEV_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGEV_SIGNAL
	CompareConstant(SIGEV_SIGNAL,0,4869,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SIGEV_SIGNAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGEV_THREAD
	CompareConstant(SIGEV_THREAD,2,4870,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SIGEV_THREAD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SI_ASYNCIO
	CompareConstant(SI_ASYNCIO,-4,4871,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SI_ASYNCIO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SI_MESGQ
	CompareConstant(SI_MESGQ,-3,4872,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SI_MESGQ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SI_QUEUE
	CompareConstant(SI_QUEUE,-1,4873,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SI_QUEUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SI_TIMER
	CompareConstant(SI_TIMER,-2,4874,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SI_TIMER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SI_USER
	CompareConstant(SI_USER,0,4875,architecture,1.2,NULL)
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

#if _LSB_DEFAULT_ARCH
#ifdef SIGEV_MAX_SIZE
	CompareConstant(SIGEV_MAX_SIZE,64,5019,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SIGEV_MAX_SIZE\n");
cnt++;
#endif

#endif

#if __powerpc64__
#ifdef SIGEV_PAD_SIZE
	CompareConstant(SIGEV_PAD_SIZE,((SIGEV_MAX_SIZE/sizeof(int))-4),5020,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SIGEV_PAD_SIZE\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef SIGEV_PAD_SIZE
	CompareConstant(SIGEV_PAD_SIZE,((SIGEV_MAX_SIZE/sizeof(int))-3),5020,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SIGEV_PAD_SIZE\n");
cnt++;
#endif

#elif __ia64__
#ifdef SIGEV_PAD_SIZE
	CompareConstant(SIGEV_PAD_SIZE,((SIGEV_MAX_SIZE/sizeof(int))-4),5020,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SIGEV_PAD_SIZE\n");
cnt++;
#endif

#elif __i386__
#ifdef SIGEV_PAD_SIZE
	CompareConstant(SIGEV_PAD_SIZE,((SIGEV_MAX_SIZE/sizeof(int))-3),5020,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SIGEV_PAD_SIZE\n");
cnt++;
#endif

#elif __s390x__
#ifdef SIGEV_PAD_SIZE
	CompareConstant(SIGEV_PAD_SIZE,((SIGEV_MAX_SIZE/sizeof(int))-4),5020,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SIGEV_PAD_SIZE\n");
cnt++;
#endif

#elif __x86_64__
#ifdef SIGEV_PAD_SIZE
	CompareConstant(SIGEV_PAD_SIZE,((SIGEV_MAX_SIZE/sizeof(int))-4),5020,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SIGEV_PAD_SIZE\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef SIGEV_PAD_SIZE
	CompareConstant(SIGEV_PAD_SIZE,((SIGEV_MAX_SIZE/sizeof(int))-3),5020,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SIGEV_PAD_SIZE\n");
cnt++;
#endif

#else
Msg( "No definition for SIGEV_PAD_SIZE (5020, int) in db\n");
#ifdef SIGEV_PAD_SIZE
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5020,%d,'""2.1""',NULL);\n", architecture, SIGEV_PAD_SIZE);
#endif
#endif
#if __s390x__
#ifdef __NUM_GPRS
	CompareConstant(__NUM_GPRS,16,5141,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: __NUM_GPRS\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef __NUM_GPRS
	CompareConstant(__NUM_GPRS,16,5141,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: __NUM_GPRS\n");
cnt++;
#endif

#else
Msg( "No definition for __NUM_GPRS (5141, int) in db\n");
#ifdef __NUM_GPRS
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5141,%d,'""2.0""',NULL);\n", architecture, __NUM_GPRS);
#endif
#endif
#if __s390x__
#ifdef __NUM_FPRS
	CompareConstant(__NUM_FPRS,16,5142,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: __NUM_FPRS\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef __NUM_FPRS
	CompareConstant(__NUM_FPRS,16,5142,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: __NUM_FPRS\n");
cnt++;
#endif

#else
Msg( "No definition for __NUM_FPRS (5142, int) in db\n");
#ifdef __NUM_FPRS
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5142,%d,'""2.0""',NULL);\n", architecture, __NUM_FPRS);
#endif
#endif
#if __s390x__
#ifdef __NUM_ACRS
	CompareConstant(__NUM_ACRS,16,5143,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: __NUM_ACRS\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef __NUM_ACRS
	CompareConstant(__NUM_ACRS,16,5143,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: __NUM_ACRS\n");
cnt++;
#endif

#else
Msg( "No definition for __NUM_ACRS (5143, int) in db\n");
#ifdef __NUM_ACRS
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5143,%d,'""2.0""',NULL);\n", architecture, __NUM_ACRS);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef SI_ASYNCNL
	CompareConstant(SI_ASYNCNL,-60,5144,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: SI_ASYNCNL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SI_TKILL
	CompareConstant(SI_TKILL,-6,5145,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: SI_TKILL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SI_SIGIO
	CompareConstant(SI_SIGIO,-5,5146,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: SI_SIGIO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SI_KERNEL
	CompareConstant(SI_KERNEL,0x80,5147,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: SI_KERNEL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for SIG_HOLD */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef ILL_ILLOPC
	CompareConstant(ILL_ILLOPC,1,5150,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ILL_ILLOPC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ILL_ILLOPN
	CompareConstant(ILL_ILLOPN,2,5151,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ILL_ILLOPN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ILL_ILLADR
	CompareConstant(ILL_ILLADR,3,5152,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ILL_ILLADR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ILL_ILLTRP
	CompareConstant(ILL_ILLTRP,4,5153,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ILL_ILLTRP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ILL_PRVOPC
	CompareConstant(ILL_PRVOPC,5,5154,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ILL_PRVOPC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ILL_PRVREG
	CompareConstant(ILL_PRVREG,6,5155,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ILL_PRVREG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ILL_COPROC
	CompareConstant(ILL_COPROC,7,5156,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ILL_COPROC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ILL_BADSTK
	CompareConstant(ILL_BADSTK,8,5157,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ILL_BADSTK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FPE_INTDIV
	CompareConstant(FPE_INTDIV,1,5158,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: FPE_INTDIV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FPE_INTOVF
	CompareConstant(FPE_INTOVF,2,5159,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: FPE_INTOVF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FPE_FLTDIV
	CompareConstant(FPE_FLTDIV,3,5160,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: FPE_FLTDIV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FPE_FLTOVF
	CompareConstant(FPE_FLTOVF,4,5161,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: FPE_FLTOVF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FPE_FLTUND
	CompareConstant(FPE_FLTUND,5,5162,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: FPE_FLTUND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FPE_FLTRES
	CompareConstant(FPE_FLTRES,6,5163,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: FPE_FLTRES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FPE_FLTINV
	CompareConstant(FPE_FLTINV,7,5164,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: FPE_FLTINV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FPE_FLTSUB
	CompareConstant(FPE_FLTSUB,8,5165,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: FPE_FLTSUB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SEGV_MAPERR
	CompareConstant(SEGV_MAPERR,1,5166,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: SEGV_MAPERR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SEGV_ACCERR
	CompareConstant(SEGV_ACCERR,2,5167,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: SEGV_ACCERR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BUS_ADRALN
	CompareConstant(BUS_ADRALN,1,5168,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: BUS_ADRALN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BUS_ADRERR
	CompareConstant(BUS_ADRERR,2,5169,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: BUS_ADRERR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BUS_OBJERR
	CompareConstant(BUS_OBJERR,3,5170,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: BUS_OBJERR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TRAP_BRKPT
	CompareConstant(TRAP_BRKPT,1,5171,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: TRAP_BRKPT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TRAP_TRACE
	CompareConstant(TRAP_TRACE,2,5172,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: TRAP_TRACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLD_EXITED
	CompareConstant(CLD_EXITED,1,5173,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CLD_EXITED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLD_KILLED
	CompareConstant(CLD_KILLED,2,5174,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CLD_KILLED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLD_DUMPED
	CompareConstant(CLD_DUMPED,3,5175,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CLD_DUMPED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLD_TRAPPED
	CompareConstant(CLD_TRAPPED,4,5176,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CLD_TRAPPED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLD_STOPPED
	CompareConstant(CLD_STOPPED,5,5177,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CLD_STOPPED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLD_CONTINUED
	CompareConstant(CLD_CONTINUED,6,5178,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CLD_CONTINUED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POLL_IN
	CompareConstant(POLL_IN,1,5179,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: POLL_IN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POLL_OUT
	CompareConstant(POLL_OUT,2,5180,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: POLL_OUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POLL_MSG
	CompareConstant(POLL_MSG,3,5181,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: POLL_MSG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POLL_ERR
	CompareConstant(POLL_ERR,4,5182,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: POLL_ERR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POLL_PRI
	CompareConstant(POLL_PRI,5,5183,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: POLL_PRI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POLL_HUP
	CompareConstant(POLL_HUP,6,5184,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: POLL_HUP\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(sig_atomic_t,4, 9092, 2, 1.2, NULL, 6, NULL)
#elif __ia64__
CheckTypeSize(sig_atomic_t,4, 9092, 3, 1.3, NULL, 6, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(sig_atomic_t,4, 9092, 6, 1.2, NULL, 6, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(sig_atomic_t,4, 9092, 10, 1.3, NULL, 6, NULL)
#elif __powerpc64__
CheckTypeSize(sig_atomic_t,4, 9092, 9, 2.0, NULL, 6, NULL)
#elif __s390x__
CheckTypeSize(sig_atomic_t,4, 9092, 12, 1.3, NULL, 6, NULL)
#elif __x86_64__
CheckTypeSize(sig_atomic_t,4, 9092, 11, 2.0, NULL, 6, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,6,NULL);\n",architecture,9092,0);
Msg("Find size of sig_atomic_t (9092)\n");
#endif

#if __s390x__
CheckTypeSize(_psw_t,16, 10571, 12, 2.0, NULL, 10570, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(_psw_t,8, 10571, 10, 2.0, NULL, 10570, NULL)
#endif

#if __s390__ && !__s390x__
CheckTypeSize(_s390_regs_common,136, 10821, 10, 2.0, NULL, 10820, NULL)
#elif __s390x__
CheckTypeSize(_s390_regs_common,208, 10821, 12, 2.0, NULL, 10820, NULL)
#endif

#if __powerpc__ && !__powerpc64__
#elif __powerpc64__
#endif

#if __i386__
CheckTypeSize(sighandler_t,4, 9374, 2, 2.0, NULL, 9373, NULL)
#elif __powerpc64__
CheckTypeSize(sighandler_t,8, 9374, 9, 2.0, NULL, 9373, NULL)
#elif __ia64__
CheckTypeSize(sighandler_t,8, 9374, 3, 2.0, NULL, 9373, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(sighandler_t,4, 9374, 6, 2.0, NULL, 9373, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(sighandler_t,4, 9374, 10, 2.0, NULL, 9373, NULL)
#elif __s390x__
CheckTypeSize(sighandler_t,8, 9374, 12, 2.0, NULL, 9373, NULL)
#elif __x86_64__
CheckTypeSize(sighandler_t,8, 9374, 11, 2.0, NULL, 9373, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9373,NULL);\n",architecture,9374,0);
Msg("Find size of sighandler_t (9374)\n");
#endif

#if __i386__
CheckTypeSize(sigval_t,4, 9320, 2, 1.2, NULL, 9319, NULL)
#elif __ia64__
CheckTypeSize(sigval_t,8, 9320, 3, 1.3, NULL, 9319, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(sigval_t,4, 9320, 6, 1.2, NULL, 9319, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(sigval_t,4, 9320, 10, 1.3, NULL, 9319, NULL)
#elif __powerpc64__
CheckTypeSize(sigval_t,8, 9320, 9, 2.0, NULL, 9319, NULL)
#elif __s390x__
CheckTypeSize(sigval_t,8, 9320, 12, 1.3, NULL, 9319, NULL)
#elif __x86_64__
CheckTypeSize(sigval_t,8, 9320, 11, 2.0, NULL, 9319, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9319,NULL);\n",architecture,9320,0);
Msg("Find size of sigval_t (9320)\n");
#endif

#if __i386__
CheckTypeSize(sigevent_t,64, 10190, 2, 1.2, NULL, 10188, NULL)
#elif __ia64__
CheckTypeSize(sigevent_t,64, 10190, 3, 1.3, NULL, 10188, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(sigevent_t,64, 10190, 6, 1.2, NULL, 10188, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(sigevent_t,64, 10190, 10, 1.3, NULL, 10188, NULL)
#elif __powerpc64__
CheckTypeSize(sigevent_t,64, 10190, 9, 2.0, NULL, 10188, NULL)
#elif __s390x__
CheckTypeSize(sigevent_t,64, 10190, 12, 1.3, NULL, 10188, NULL)
#elif __x86_64__
CheckTypeSize(sigevent_t,64, 10190, 11, 2.0, NULL, 10188, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,10188,NULL);\n",architecture,10190,0);
Msg("Find size of sigevent_t (10190)\n");
#endif

#if __i386__
CheckTypeSize(siginfo_t,128, 9099, 2, 1.2, NULL, 9321, NULL)
#elif __ia64__
CheckTypeSize(siginfo_t,128, 9099, 3, 1.3, NULL, 9321, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(siginfo_t,128, 9099, 6, 1.2, NULL, 9321, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(siginfo_t,128, 9099, 10, 1.3, NULL, 9321, NULL)
#elif __powerpc64__
CheckTypeSize(siginfo_t,128, 9099, 9, 2.0, NULL, 9321, NULL)
#elif __s390x__
CheckTypeSize(siginfo_t,128, 9099, 12, 1.3, NULL, 9321, NULL)
#elif __x86_64__
CheckTypeSize(siginfo_t,128, 9099, 11, 2.0, NULL, 9321, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9321,NULL);\n",architecture,9099,0);
Msg("Find size of siginfo_t (9099)\n");
#endif

#if __i386__
CheckTypeSize(sigset_t,128, 10163, 2, 1.2, NULL, 9382, NULL)
#elif __ia64__
CheckTypeSize(sigset_t,128, 10163, 3, 1.3, NULL, 9382, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(sigset_t,128, 10163, 6, 1.2, NULL, 9382, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(sigset_t,128, 10163, 10, 1.3, NULL, 9382, NULL)
#elif __s390x__
CheckTypeSize(sigset_t,128, 10163, 12, 1.3, NULL, 9382, NULL)
#elif __x86_64__
CheckTypeSize(sigset_t,128, 10163, 11, 2.0, NULL, 9382, NULL)
#elif __powerpc64__
CheckTypeSize(sigset_t,128, 10163, 9, 2.0, NULL, 9382, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9382,NULL);\n",architecture,10163,0);
Msg("Find size of sigset_t (10163)\n");
#endif

#if __i386__
#elif __s390__ && !__s390x__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#endif

#if __i386__
CheckTypeSize(stack_t,12, 9314, 2, 1.2, NULL, 9105, NULL)
#elif __ia64__
CheckTypeSize(stack_t,24, 9314, 3, 1.3, NULL, 9105, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(stack_t,12, 9314, 6, 1.2, NULL, 9105, NULL)
#elif __s390x__
CheckTypeSize(stack_t,24, 9314, 12, 1.3, NULL, 9105, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(stack_t,12, 9314, 10, 1.3, NULL, 9105, NULL)
#elif __x86_64__
CheckTypeSize(stack_t,24, 9314, 11, 2.0, NULL, 9105, NULL)
#elif __powerpc64__
CheckTypeSize(stack_t,24, 9314, 9, 2.0, NULL, 9105, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9105,NULL);\n",architecture,9314,0);
Msg("Find size of stack_t (9314)\n");
#endif

#if __i386__
#elif __x86_64__
#endif

#if __i386__
#endif

#if __i386__
#elif __x86_64__
#endif

#if __i386__
#elif __x86_64__
#endif

#if __ia64__
#endif

#if __s390__ && !__s390x__
CheckTypeSize(_s390_fp_regs,136, 10832, 10, 2.0, NULL, 10831, NULL)
#elif __s390x__
CheckTypeSize(_s390_fp_regs,136, 10832, 12, 2.0, NULL, 10831, NULL)
#endif

#if __s390__ && !__s390x__
CheckTypeSize(_sigregs,272, 10834, 10, 2.0, NULL, 10833, NULL)
#elif __s390x__
CheckTypeSize(_sigregs,344, 10834, 12, 2.0, NULL, 10833, NULL)
#endif

#if __i386__
#elif __powerpc__ && !__powerpc64__
#elif __ia64__
#elif __x86_64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif __powerpc64__
#endif

extern int __libc_current_sigrtmax_db(void);
CheckInterfacedef(__libc_current_sigrtmax,__libc_current_sigrtmax_db);
extern int __libc_current_sigrtmin_db(void);
CheckInterfacedef(__libc_current_sigrtmin,__libc_current_sigrtmin_db);
extern sighandler_t __sysv_signal_db(int, sighandler_t);
CheckInterfacedef(__sysv_signal,__sysv_signal_db);
extern int killpg_db(pid_t, int);
CheckInterfacedef(killpg,killpg_db);
extern void psignal_db(int, const char *);
CheckInterfacedef(psignal,psignal_db);
extern int raise_db(int);
CheckInterfacedef(raise,raise_db);
extern int sigaddset_db(sigset_t *, int);
CheckInterfacedef(sigaddset,sigaddset_db);
extern int sigandset_db(sigset_t *, const sigset_t *, const sigset_t *);
CheckInterfacedef(sigandset,sigandset_db);
extern int sigdelset_db(sigset_t *, int);
CheckInterfacedef(sigdelset,sigdelset_db);
extern int sigemptyset_db(sigset_t *);
CheckInterfacedef(sigemptyset,sigemptyset_db);
extern int sigfillset_db(sigset_t *);
CheckInterfacedef(sigfillset,sigfillset_db);
extern int sighold_db(int);
CheckInterfacedef(sighold,sighold_db);
extern int sigignore_db(int);
CheckInterfacedef(sigignore,sigignore_db);
extern int siginterrupt_db(int, int);
CheckInterfacedef(siginterrupt,siginterrupt_db);
extern int sigisemptyset_db(const sigset_t *);
CheckInterfacedef(sigisemptyset,sigisemptyset_db);
extern int sigismember_db(const sigset_t *, int);
CheckInterfacedef(sigismember,sigismember_db);
extern int sigorset_db(sigset_t *, const sigset_t *, const sigset_t *);
CheckInterfacedef(sigorset,sigorset_db);
extern int sigpending_db(sigset_t *);
CheckInterfacedef(sigpending,sigpending_db);
extern int sigrelse_db(int);
CheckInterfacedef(sigrelse,sigrelse_db);
extern sighandler_t sigset_db(int, sighandler_t);
CheckInterfacedef(sigset,sigset_db);
extern int pthread_kill_db(pthread_t, int);
CheckInterfacedef(pthread_kill,pthread_kill_db);
extern int pthread_sigmask_db(int, const sigset_t *, sigset_t *);
CheckInterfacedef(pthread_sigmask,pthread_sigmask_db);
extern int sigaction_db(int, const struct sigaction *, struct sigaction *);
CheckInterfacedef(sigaction,sigaction_db);
extern int sigwait_db(const sigset_t *, int *);
CheckInterfacedef(sigwait,sigwait_db);
extern int kill_db(pid_t, int);
CheckInterfacedef(kill,kill_db);
extern int sigaltstack_db(const struct sigaltstack *, struct sigaltstack *);
CheckInterfacedef(sigaltstack,sigaltstack_db);
extern sighandler_t signal_db(int, sighandler_t);
CheckInterfacedef(signal,signal_db);
extern int sigpause_db(int);
CheckInterfacedef(sigpause,sigpause_db);
extern int sigprocmask_db(int, const sigset_t *, sigset_t *);
CheckInterfacedef(sigprocmask,sigprocmask_db);
extern int sigreturn_db(struct sigcontext *);
CheckInterfacedef(sigreturn,sigreturn_db);
extern int sigsuspend_db(const sigset_t *);
CheckInterfacedef(sigsuspend,sigsuspend_db);
extern int sigqueue_db(pid_t, int, const union sigval);
CheckInterfacedef(sigqueue,sigqueue_db);
extern int sigwaitinfo_db(const sigset_t *, siginfo_t *);
CheckInterfacedef(sigwaitinfo,sigwaitinfo_db);
extern int sigtimedwait_db(const sigset_t *, siginfo_t *, const struct timespec *);
CheckInterfacedef(sigtimedwait,sigtimedwait_db);
extern sighandler_t bsd_signal_db(int, sighandler_t);
CheckInterfacedef(bsd_signal,bsd_signal_db);
#ifdef LSBCC_MODE	/* XXX hand-edit */
extern int __xpg_sigpause_db(int);
CheckInterfacedef(__xpg_sigpause,__xpg_sigpause_db);
#endif
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in signal.h\n\n",pcnt,cnt);
return cnt;
#endif

}
