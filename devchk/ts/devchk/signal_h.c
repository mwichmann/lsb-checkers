/*
 * Test of signal.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#ifndef LSBCC_MODE
#define SI_MAX_SIZE __SI_MAX_SIZE
#define SI_PAD_SIZE __SI_PAD_SIZE
#define SIGEV_MAX_SIZE __SIGEV_MAX_SIZE
#define SIGEV_PAD_SIZE __SIGEV_PAD_SIZE
#endif
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

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

#if defined __powerpc64__
#ifdef MINSIGSTKSZ
	CompareConstant(MINSIGSTKSZ,2048,3152,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: MINSIGSTKSZ\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef MINSIGSTKSZ
	CompareConstant(MINSIGSTKSZ,2048,3152,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: MINSIGSTKSZ\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef MINSIGSTKSZ
	CompareConstant(MINSIGSTKSZ,131027,3152,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: MINSIGSTKSZ\n");
cnt++;
#endif

#elif defined __i386__
#ifdef MINSIGSTKSZ
	CompareConstant(MINSIGSTKSZ,2048,3152,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: MINSIGSTKSZ\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef MINSIGSTKSZ
	CompareConstant(MINSIGSTKSZ,2048,3152,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: MINSIGSTKSZ\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef MINSIGSTKSZ
	CompareConstant(MINSIGSTKSZ,2048,3152,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: MINSIGSTKSZ\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef MINSIGSTKSZ
	CompareConstant(MINSIGSTKSZ,2048,3152,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: MINSIGSTKSZ\n");
cnt++;
#endif

#else
Msg( "No definition for MINSIGSTKSZ (3152, int) in db for this architecture\n");
#ifdef MINSIGSTKSZ
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,3152,%d,'""2.0""',NULL);\n", architecture, MINSIGSTKSZ);
#endif
#endif
#if defined __powerpc64__
#ifdef SIGSTKSZ
	CompareConstant(SIGSTKSZ,8192,3153,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: SIGSTKSZ\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef SIGSTKSZ
	CompareConstant(SIGSTKSZ,8192,3153,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: SIGSTKSZ\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef SIGSTKSZ
	CompareConstant(SIGSTKSZ,262144,3153,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: SIGSTKSZ\n");
cnt++;
#endif

#elif defined __i386__
#ifdef SIGSTKSZ
	CompareConstant(SIGSTKSZ,8192,3153,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: SIGSTKSZ\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef SIGSTKSZ
	CompareConstant(SIGSTKSZ,8192,3153,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: SIGSTKSZ\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef SIGSTKSZ
	CompareConstant(SIGSTKSZ,8192,3153,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: SIGSTKSZ\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef SIGSTKSZ
	CompareConstant(SIGSTKSZ,8192,3153,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: SIGSTKSZ\n");
cnt++;
#endif

#else
Msg( "No definition for SIGSTKSZ (3153, int) in db for this architecture\n");
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

#if defined __powerpc64__
#ifdef SI_PAD_SIZE
	CompareConstant(SI_PAD_SIZE,((SI_MAX_SIZE/sizeof(int))-4),3161,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SI_PAD_SIZE\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef SI_PAD_SIZE
	CompareConstant(SI_PAD_SIZE,((SI_MAX_SIZE/sizeof(int))-3),3161,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SI_PAD_SIZE\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef SI_PAD_SIZE
	CompareConstant(SI_PAD_SIZE,((SI_MAX_SIZE/sizeof(int))-4),3161,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SI_PAD_SIZE\n");
cnt++;
#endif

#elif defined __i386__
#ifdef SI_PAD_SIZE
	CompareConstant(SI_PAD_SIZE,((SI_MAX_SIZE/sizeof(int))-3),3161,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SI_PAD_SIZE\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef SI_PAD_SIZE
	CompareConstant(SI_PAD_SIZE,((SI_MAX_SIZE/sizeof(int))-4),3161,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SI_PAD_SIZE\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef SI_PAD_SIZE
	CompareConstant(SI_PAD_SIZE,((SI_MAX_SIZE/sizeof(int))-4),3161,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SI_PAD_SIZE\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef SI_PAD_SIZE
	CompareConstant(SI_PAD_SIZE,((SI_MAX_SIZE/sizeof(int))-3),3161,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SI_PAD_SIZE\n");
cnt++;
#endif

#else
Msg( "No definition for SI_PAD_SIZE (3161, int) in db for this architecture\n");
#ifdef SI_PAD_SIZE
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,3161,%d,'""2.1""',NULL);\n", architecture, SI_PAD_SIZE);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef si_pid
	CompareMacro(si_pid,_sifields._kill._pid,_sifields._kill._pid,3162,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: si_pid\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef si_uid
	CompareMacro(si_uid,_sifields._kill._uid,_sifields._kill._uid,3163,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: si_uid\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef si_status
	CompareMacro(si_status,_sifields._sigchld._status,_sifields._sigchld._status,3164,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: si_status\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef si_utime
	CompareMacro(si_utime,_sifields._sigchld._utime,_sifields._sigchld._utime,3165,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: si_utime\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef si_stime
	CompareMacro(si_stime,_sifields._sigchld._stime,_sifields._sigchld._stime,3166,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: si_stime\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef si_value
	CompareMacro(si_value,_sifields._rt._sigval,_sifields._rt._sigval,3167,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: si_value\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef si_int
	CompareMacro(si_int,_sifields._rt._sigval.sival_int,_sifields._rt._sigval.sival_int,3168,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: si_int\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef si_ptr
	CompareMacro(si_ptr,_sifields._rt._sigval.sival_ptr,_sifields._rt._sigval.sival_ptr,3169,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: si_ptr\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef si_addr
	CompareMacro(si_addr,_sifields._sigfault._addr,_sifields._sigfault._addr,3170,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: si_addr\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef si_band
	CompareMacro(si_band,_sifields._sigpoll._band,_sifields._sigpoll._band,3171,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: si_band\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef si_fd
	CompareMacro(si_fd,_sifields._sigpoll._fd,_sifields._sigpoll._fd,3172,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: si_fd\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sa_handler
	CompareMacro(sa_handler,__sigaction_handler._sa_handler,__sigaction_handler._sa_handler,3174,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sa_handler\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sa_sigaction
	CompareMacro(sa_sigaction,__sigaction_handler._sa_sigaction,__sigaction_handler._sa_sigaction,3175,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: sa_sigaction\n");
cnt++;
#endif

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
#ifdef si_timer1
	CompareMacro(si_timer1,_sifields._timer._timer1,_sifields._timer._timer1,4993,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: si_timer1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef si_timer2
	CompareMacro(si_timer2,_sifields._timer._timer2,_sifields._timer._timer2,4994,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: si_timer2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIGEV_MAX_SIZE
	CompareConstant(SIGEV_MAX_SIZE,64,5019,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SIGEV_MAX_SIZE\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef SIGEV_PAD_SIZE
	CompareConstant(SIGEV_PAD_SIZE,((SIGEV_MAX_SIZE/sizeof(int))-4),5020,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SIGEV_PAD_SIZE\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef SIGEV_PAD_SIZE
	CompareConstant(SIGEV_PAD_SIZE,((SIGEV_MAX_SIZE/sizeof(int))-3),5020,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SIGEV_PAD_SIZE\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef SIGEV_PAD_SIZE
	CompareConstant(SIGEV_PAD_SIZE,((SIGEV_MAX_SIZE/sizeof(int))-4),5020,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SIGEV_PAD_SIZE\n");
cnt++;
#endif

#elif defined __i386__
#ifdef SIGEV_PAD_SIZE
	CompareConstant(SIGEV_PAD_SIZE,((SIGEV_MAX_SIZE/sizeof(int))-3),5020,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SIGEV_PAD_SIZE\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef SIGEV_PAD_SIZE
	CompareConstant(SIGEV_PAD_SIZE,((SIGEV_MAX_SIZE/sizeof(int))-4),5020,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SIGEV_PAD_SIZE\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef SIGEV_PAD_SIZE
	CompareConstant(SIGEV_PAD_SIZE,((SIGEV_MAX_SIZE/sizeof(int))-4),5020,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SIGEV_PAD_SIZE\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef SIGEV_PAD_SIZE
	CompareConstant(SIGEV_PAD_SIZE,((SIGEV_MAX_SIZE/sizeof(int))-3),5020,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SIGEV_PAD_SIZE\n");
cnt++;
#endif

#else
Msg( "No definition for SIGEV_PAD_SIZE (5020, int) in db for this architecture\n");
#ifdef SIGEV_PAD_SIZE
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5020,%d,'""2.1""',NULL);\n", architecture, SIGEV_PAD_SIZE);
#endif
#endif
#if defined __s390x__
#ifdef __NUM_GPRS
	CompareConstant(__NUM_GPRS,16,5141,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: __NUM_GPRS\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef __NUM_GPRS
	CompareConstant(__NUM_GPRS,16,5141,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: __NUM_GPRS\n");
cnt++;
#endif

#else
Msg( "No definition for __NUM_GPRS (5141, int) in db for this architecture\n");
#ifdef __NUM_GPRS
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5141,%d,'""2.0""',NULL);\n", architecture, __NUM_GPRS);
#endif
#endif
#if defined __s390x__
#ifdef __NUM_FPRS
	CompareConstant(__NUM_FPRS,16,5142,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: __NUM_FPRS\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef __NUM_FPRS
	CompareConstant(__NUM_FPRS,16,5142,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: __NUM_FPRS\n");
cnt++;
#endif

#else
Msg( "No definition for __NUM_FPRS (5142, int) in db for this architecture\n");
#ifdef __NUM_FPRS
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5142,%d,'""2.0""',NULL);\n", architecture, __NUM_FPRS);
#endif
#endif
#if defined __s390x__
#ifdef __NUM_ACRS
	CompareConstant(__NUM_ACRS,16,5143,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: __NUM_ACRS\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef __NUM_ACRS
	CompareConstant(__NUM_ACRS,16,5143,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: __NUM_ACRS\n");
cnt++;
#endif

#else
Msg( "No definition for __NUM_ACRS (5143, int) in db for this architecture\n");
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

#if defined __s390x__
CheckTypeSize(sig_atomic_t,4, 9092, 12, 1.3, NULL, 6, NULL)
#elif defined __x86_64__
CheckTypeSize(sig_atomic_t,4, 9092, 11, 2.0, NULL, 6, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(sig_atomic_t,4, 9092, 10, 1.3, NULL, 6, NULL)
#elif defined __powerpc64__
CheckTypeSize(sig_atomic_t,4, 9092, 9, 2.0, NULL, 6, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(sig_atomic_t,4, 9092, 6, 1.2, NULL, 6, NULL)
#elif defined __ia64__
CheckTypeSize(sig_atomic_t,4, 9092, 3, 1.3, NULL, 6, NULL)
#elif defined __i386__
CheckTypeSize(sig_atomic_t,4, 9092, 2, 1.2, NULL, 6, NULL)
#else
Msg("Find size of sig_atomic_t (9092)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,6,NULL);\n",architecture,9092,0);
#endif

#if defined __s390x__
CheckTypeSize(_psw_t,16, 10571, 12, 2.0, NULL, 10570, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_psw_t,8, 10571, 10, 2.0, NULL, 10570, NULL)
#endif

#if defined __s390x__
CheckTypeSize(_s390_regs_common,208, 10821, 12, 2.0, NULL, 10820, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_s390_regs_common,136, 10821, 10, 2.0, NULL, 10820, NULL)
#endif

#if defined __powerpc64__
CheckTypeSize(struct pt_regs,352, 10823, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct pt_regs,gpr,256,9,40589)
CheckOffset(struct pt_regs,gpr,0,9,40589)
CheckMemberSize(struct pt_regs,nip,8,9,40590)
CheckOffset(struct pt_regs,nip,256,9,40590)
CheckMemberSize(struct pt_regs,msr,8,9,40591)
CheckOffset(struct pt_regs,msr,264,9,40591)
CheckMemberSize(struct pt_regs,orig_gpr3,8,9,40592)
CheckOffset(struct pt_regs,orig_gpr3,272,9,40592)
CheckMemberSize(struct pt_regs,link,8,9,40594)
CheckOffset(struct pt_regs,link,288,9,40594)
CheckMemberSize(struct pt_regs,xer,8,9,40595)
CheckOffset(struct pt_regs,xer,296,9,40595)
CheckMemberSize(struct pt_regs,ccr,8,9,40596)
CheckOffset(struct pt_regs,ccr,304,9,40596)
CheckMemberSize(struct pt_regs,softe,8,9,40597)
CheckOffset(struct pt_regs,softe,312,9,40597)
CheckMemberSize(struct pt_regs,trap,8,9,40598)
CheckOffset(struct pt_regs,trap,320,9,40598)
CheckMemberSize(struct pt_regs,dar,8,9,40599)
CheckOffset(struct pt_regs,dar,328,9,40599)
CheckMemberSize(struct pt_regs,dsisr,8,9,40600)
CheckOffset(struct pt_regs,dsisr,336,9,40600)
CheckMemberSize(struct pt_regs,result,8,9,40601)
CheckOffset(struct pt_regs,result,344,9,40601)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct pt_regs,176, 10823, 6, 2.0, NULL, 0, NULL)
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

#if defined __s390x__
CheckTypeSize(sighandler_t,8, 9374, 12, 2.0, NULL, 9095, NULL)
#elif defined __x86_64__
CheckTypeSize(sighandler_t,8, 9374, 11, 2.0, NULL, 9095, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(sighandler_t,4, 9374, 10, 2.0, NULL, 9095, NULL)
#elif defined __powerpc64__
CheckTypeSize(sighandler_t,8, 9374, 9, 2.0, NULL, 9095, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(sighandler_t,4, 9374, 6, 2.0, NULL, 9095, NULL)
#elif defined __ia64__
CheckTypeSize(sighandler_t,8, 9374, 3, 2.0, NULL, 9095, NULL)
#elif defined __i386__
CheckTypeSize(sighandler_t,4, 9374, 2, 2.0, NULL, 9095, NULL)
#else
Msg("Find size of sighandler_t (9374)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9095,NULL);\n",architecture,9374,0);
#endif

#if defined __ia64__
CheckTypeSize(union sigval,0, 9319, 3, , NULL, 0, NULL)
Msg("Missing member data for sigval on IA64\n");
CheckOffset(union sigval,sival_int,0,3,33988)
CheckOffset(union sigval,sival_ptr,0,3,33989)
#elif defined __i386__
CheckTypeSize(union sigval,4, 9319, 2, , NULL, 0, NULL)
Msg("Missing member data for sigval on IA32\n");
CheckOffset(union sigval,sival_int,0,2,33988)
CheckOffset(union sigval,sival_ptr,0,2,33989)
#elif 1
CheckTypeSize(union sigval,0, 9319, 1, , NULL, 0, NULL)
Msg("Missing member data for sigval on All\n");
CheckOffset(union sigval,sival_int,0,1,33988)
CheckOffset(union sigval,sival_ptr,0,1,33989)
#endif

#if defined __s390x__
CheckTypeSize(sigval_t,8, 9320, 12, 1.3, NULL, 9319, NULL)
#elif defined __x86_64__
CheckTypeSize(sigval_t,8, 9320, 11, 2.0, NULL, 9319, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(sigval_t,4, 9320, 10, 1.3, NULL, 9319, NULL)
#elif defined __powerpc64__
CheckTypeSize(sigval_t,8, 9320, 9, 2.0, NULL, 9319, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(sigval_t,4, 9320, 6, 1.2, NULL, 9319, NULL)
#elif defined __ia64__
CheckTypeSize(sigval_t,8, 9320, 3, 1.3, NULL, 9319, NULL)
#elif defined __i386__
CheckTypeSize(sigval_t,4, 9320, 2, 1.2, NULL, 9319, NULL)
#else
Msg("Find size of sigval_t (9320)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9319,NULL);\n",architecture,9320,0);
#endif

#if 1
CheckTypeSize(struct sigevent,0, 10188, 1, , NULL, 0, NULL)
Msg("Missing member data for sigevent on All\n");
CheckOffset(struct sigevent,sigev_value,0,1,34186)
CheckOffset(struct sigevent,sigev_signo,0,1,34187)
CheckOffset(struct sigevent,sigev_notify,0,1,34188)
CheckOffset(struct sigevent,_sigev_un,0,1,34190)
#endif

#if defined __s390x__
CheckTypeSize(sigevent_t,64, 10190, 12, 1.3, NULL, 10188, NULL)
#elif defined __x86_64__
CheckTypeSize(sigevent_t,64, 10190, 11, 2.0, NULL, 10188, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(sigevent_t,64, 10190, 10, 1.3, NULL, 10188, NULL)
#elif defined __powerpc64__
CheckTypeSize(sigevent_t,64, 10190, 9, 2.0, NULL, 10188, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(sigevent_t,64, 10190, 6, 1.2, NULL, 10188, NULL)
#elif defined __ia64__
CheckTypeSize(sigevent_t,64, 10190, 3, 1.3, NULL, 10188, NULL)
#elif defined __i386__
CheckTypeSize(sigevent_t,64, 10190, 2, 1.2, NULL, 10188, NULL)
#else
Msg("Find size of sigevent_t (10190)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,10188,NULL);\n",architecture,10190,0);
#endif

#if defined __s390x__
CheckTypeSize(siginfo_t,128, 9099, 12, 1.3, NULL, 9321, NULL)
#elif defined __x86_64__
CheckTypeSize(siginfo_t,128, 9099, 11, 2.0, NULL, 9321, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(siginfo_t,128, 9099, 10, 1.3, NULL, 9321, NULL)
#elif defined __powerpc64__
CheckTypeSize(siginfo_t,128, 9099, 9, 2.0, NULL, 9321, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(siginfo_t,128, 9099, 6, 1.2, NULL, 9321, NULL)
#elif defined __ia64__
CheckTypeSize(siginfo_t,128, 9099, 3, 1.3, NULL, 9321, NULL)
#elif defined __i386__
CheckTypeSize(siginfo_t,128, 9099, 2, 1.2, NULL, 9321, NULL)
#else
Msg("Find size of siginfo_t (9099)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9321,NULL);\n",architecture,9099,0);
#endif

#if 1
CheckTypeSize(struct siginfo,0, 9321, 1, , NULL, 0, NULL)
Msg("Missing member data for siginfo on All\n");
CheckOffset(struct siginfo,si_signo,0,1,33990)
CheckOffset(struct siginfo,si_errno,0,1,33991)
CheckOffset(struct siginfo,si_code,0,1,33992)
CheckOffset(struct siginfo,_sifields,0,1,34015)
#endif

#if defined __s390x__
CheckTypeSize(sigset_t,128, 10163, 12, 1.3, NULL, 9382, NULL)
#elif defined __x86_64__
CheckTypeSize(sigset_t,128, 10163, 11, 2.0, NULL, 9382, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(sigset_t,128, 10163, 10, 1.3, NULL, 9382, NULL)
#elif defined __powerpc64__
CheckTypeSize(sigset_t,128, 10163, 9, 2.0, NULL, 9382, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(sigset_t,128, 10163, 6, 1.2, NULL, 9382, NULL)
#elif defined __ia64__
CheckTypeSize(sigset_t,128, 10163, 3, 1.3, NULL, 9382, NULL)
#elif defined __i386__
CheckTypeSize(sigset_t,128, 10163, 2, 1.2, NULL, 9382, NULL)
#else
Msg("Find size of sigset_t (10163)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9382,NULL);\n",architecture,10163,0);
#endif

#if defined __s390x__
CheckTypeSize(struct sigaction,152, 9097, 12, 2.0, NULL, 0, NULL)
CheckMemberSize(struct sigaction,sa_flags,8,12,40312)
CheckOffset(struct sigaction,sa_flags,8,12,40312)
CheckMemberSize(struct sigaction,sa_mask,128,12,40313)
CheckOffset(struct sigaction,sa_mask,24,12,40313)
#elif defined __x86_64__
CheckTypeSize(struct sigaction,152, 9097, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct sigaction,sa_mask,128,11,40380)
CheckOffset(struct sigaction,sa_mask,8,11,40380)
CheckMemberSize(struct sigaction,sa_flags,4,11,40381)
CheckOffset(struct sigaction,sa_flags,136,11,40381)
CheckMemberSize(struct sigaction,sa_restorer,8,11,40382)
CheckOffset(struct sigaction,sa_restorer,144,11,40382)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct sigaction,140, 9097, 10, 2.0, NULL, 0, NULL)
CheckMemberSize(struct sigaction,__sigaction_handler,4,10,34716)
CheckOffset(struct sigaction,__sigaction_handler,0,10,34716)
CheckMemberSize(struct sigaction,sa_mask,128,10,34719)
CheckOffset(struct sigaction,sa_mask,4,10,34719)
CheckMemberSize(struct sigaction,sa_flags,4,10,34717)
CheckOffset(struct sigaction,sa_flags,132,10,34717)
CheckMemberSize(struct sigaction,sa_restorer,4,10,34718)
CheckOffset(struct sigaction,sa_restorer,136,10,34718)
#elif defined __powerpc64__
CheckTypeSize(struct sigaction,152, 9097, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct sigaction,__sigaction_handler,8,9,40152)
CheckOffset(struct sigaction,__sigaction_handler,0,9,40152)
CheckMemberSize(struct sigaction,sa_mask,128,9,40153)
CheckOffset(struct sigaction,sa_mask,8,9,40153)
CheckMemberSize(struct sigaction,sa_flags,4,9,40154)
CheckOffset(struct sigaction,sa_flags,136,9,40154)
CheckMemberSize(struct sigaction,sa_restorer,8,9,40155)
CheckOffset(struct sigaction,sa_restorer,144,9,40155)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct sigaction,140, 9097, 6, 2.0, NULL, 0, NULL)
CheckMemberSize(struct sigaction,__sigaction_handler,4,6,34712)
CheckOffset(struct sigaction,__sigaction_handler,0,6,34712)
CheckMemberSize(struct sigaction,sa_mask,128,6,34715)
CheckOffset(struct sigaction,sa_mask,4,6,34715)
CheckMemberSize(struct sigaction,sa_flags,4,6,34713)
CheckOffset(struct sigaction,sa_flags,132,6,34713)
CheckMemberSize(struct sigaction,sa_restorer,4,6,34714)
CheckOffset(struct sigaction,sa_restorer,136,6,34714)
#elif defined __ia64__
CheckTypeSize(struct sigaction,144, 9097, 3, 2.0, NULL, 0, NULL)
CheckMemberSize(struct sigaction,__sigaction_handler,8,3,34641)
CheckOffset(struct sigaction,__sigaction_handler,0,3,34641)
CheckMemberSize(struct sigaction,sa_flags,8,3,34642)
CheckOffset(struct sigaction,sa_flags,8,3,34642)
CheckMemberSize(struct sigaction,sa_mask,128,3,34643)
CheckOffset(struct sigaction,sa_mask,16,3,34643)
#elif defined __i386__
CheckTypeSize(struct sigaction,140, 9097, 2, 2.0, NULL, 0, NULL)
CheckMemberSize(struct sigaction,__sigaction_handler,4,2,34019)
CheckOffset(struct sigaction,__sigaction_handler,0,2,34019)
CheckMemberSize(struct sigaction,sa_mask,128,2,34022)
CheckOffset(struct sigaction,sa_mask,4,2,34022)
CheckMemberSize(struct sigaction,sa_flags,4,2,34020)
CheckOffset(struct sigaction,sa_flags,132,2,34020)
CheckMemberSize(struct sigaction,sa_restorer,4,2,34021)
CheckOffset(struct sigaction,sa_restorer,136,2,34021)
#endif

#if 1
CheckTypeSize(struct sigaltstack,0, 9105, 1, , NULL, 0, NULL)
Msg("Missing member data for sigaltstack on All\n");
CheckOffset(struct sigaltstack,ss_sp,0,1,34023)
CheckOffset(struct sigaltstack,ss_flags,0,1,34024)
CheckOffset(struct sigaltstack,ss_size,0,1,34025)
#endif

#if defined __s390x__
CheckTypeSize(stack_t,24, 9314, 12, 1.3, NULL, 9105, NULL)
#elif defined __x86_64__
CheckTypeSize(stack_t,24, 9314, 11, 2.0, NULL, 9105, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(stack_t,12, 9314, 10, 1.3, NULL, 9105, NULL)
#elif defined __powerpc64__
CheckTypeSize(stack_t,24, 9314, 9, 2.0, NULL, 9105, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(stack_t,12, 9314, 6, 1.2, NULL, 9105, NULL)
#elif defined __ia64__
CheckTypeSize(stack_t,24, 9314, 3, 1.3, NULL, 9105, NULL)
#elif defined __i386__
CheckTypeSize(stack_t,12, 9314, 2, 1.2, NULL, 9105, NULL)
#else
Msg("Find size of stack_t (9314)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9105,NULL);\n",architecture,9314,0);
#endif

#if defined __x86_64__
CheckTypeSize(struct _fpstate,512, 10198, 11, 2.0, NULL, 0, NULL)
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
CheckMemberSize(struct _fpstate,_st,128,11,40395)
CheckOffset(struct _fpstate,_st,32,11,40395)
CheckMemberSize(struct _fpstate,_xmm,256,11,40396)
CheckOffset(struct _fpstate,_xmm,160,11,40396)
CheckMemberSize(struct _fpstate,padding,96,11,40397)
CheckOffset(struct _fpstate,padding,416,11,40397)
#elif defined __i386__
CheckTypeSize(struct _fpstate,624, 10198, 2, 2.0, NULL, 0, NULL)
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

#if defined __i386__
CheckTypeSize(struct _fpreg,10, 10199, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _fpreg,exponent,2,2,34228)
CheckOffset(struct _fpreg,exponent,8,2,34228)
#endif

#if defined __x86_64__
CheckTypeSize(struct _fpxreg,16, 10202, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _fpxreg,significand,8,11,40383)
CheckOffset(struct _fpxreg,significand,0,11,40383)
CheckMemberSize(struct _fpxreg,exponent,2,11,40384)
CheckOffset(struct _fpxreg,exponent,8,11,40384)
CheckMemberSize(struct _fpxreg,padding,6,11,40385)
CheckOffset(struct _fpxreg,padding,10,11,40385)
#elif defined __i386__
CheckTypeSize(struct _fpxreg,16, 10202, 2, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _fpxreg,exponent,2,2,34240)
CheckOffset(struct _fpxreg,exponent,8,2,34240)
CheckMemberSize(struct _fpxreg,padding,6,2,34241)
CheckOffset(struct _fpxreg,padding,10,2,34241)
#endif

#if defined __x86_64__
CheckTypeSize(struct _xmmreg,16, 10203, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _xmmreg,element,16,11,40386)
CheckOffset(struct _xmmreg,element,0,11,40386)
#elif defined __i386__
CheckTypeSize(struct _xmmreg,16, 10203, 2, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _xmmreg,element,16,2,34242)
CheckOffset(struct _xmmreg,element,0,2,34242)
#endif

#if defined __ia64__
CheckTypeSize(struct ia64_fpreg,16, 10338, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct ia64_fpreg,u,16,3,34581)
CheckOffset(struct ia64_fpreg,u,0,3,34581)
#endif

#if defined __s390x__
CheckTypeSize(_s390_fp_regs,136, 10832, 12, 2.0, NULL, 10831, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_s390_fp_regs,136, 10832, 10, 2.0, NULL, 10831, NULL)
#endif

#if defined __s390x__
CheckTypeSize(_sigregs,344, 10834, 12, 2.0, NULL, 10833, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_sigregs,272, 10834, 10, 2.0, NULL, 10833, NULL)
#endif

#if defined __s390x__
CheckTypeSize(struct sigcontext,16, 10005, 12, 2.0, NULL, 0, NULL)
CheckMemberSize(struct sigcontext,oldmask,8,12,40617)
CheckOffset(struct sigcontext,oldmask,0,12,40617)
CheckMemberSize(struct sigcontext,sregs,8,12,40618)
CheckOffset(struct sigcontext,sregs,8,12,40618)
#elif defined __x86_64__
CheckTypeSize(struct sigcontext,256, 10005, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct sigcontext,r8,8,11,40398)
CheckOffset(struct sigcontext,r8,0,11,40398)
CheckMemberSize(struct sigcontext,r9,8,11,40399)
CheckOffset(struct sigcontext,r9,8,11,40399)
CheckMemberSize(struct sigcontext,r10,8,11,40400)
CheckOffset(struct sigcontext,r10,16,11,40400)
CheckMemberSize(struct sigcontext,r11,8,11,40401)
CheckOffset(struct sigcontext,r11,24,11,40401)
CheckMemberSize(struct sigcontext,r12,8,11,40402)
CheckOffset(struct sigcontext,r12,32,11,40402)
CheckMemberSize(struct sigcontext,r13,8,11,40403)
CheckOffset(struct sigcontext,r13,40,11,40403)
CheckMemberSize(struct sigcontext,r14,8,11,40404)
CheckOffset(struct sigcontext,r14,48,11,40404)
CheckMemberSize(struct sigcontext,r15,8,11,40405)
CheckOffset(struct sigcontext,r15,56,11,40405)
CheckMemberSize(struct sigcontext,rdi,8,11,40406)
CheckOffset(struct sigcontext,rdi,64,11,40406)
CheckMemberSize(struct sigcontext,rsi,8,11,40407)
CheckOffset(struct sigcontext,rsi,72,11,40407)
CheckMemberSize(struct sigcontext,rbp,8,11,40408)
CheckOffset(struct sigcontext,rbp,80,11,40408)
CheckMemberSize(struct sigcontext,rbx,8,11,40409)
CheckOffset(struct sigcontext,rbx,88,11,40409)
CheckMemberSize(struct sigcontext,rdx,8,11,40410)
CheckOffset(struct sigcontext,rdx,96,11,40410)
CheckMemberSize(struct sigcontext,rax,8,11,40411)
CheckOffset(struct sigcontext,rax,104,11,40411)
CheckMemberSize(struct sigcontext,rcx,8,11,40412)
CheckOffset(struct sigcontext,rcx,112,11,40412)
CheckMemberSize(struct sigcontext,rsp,8,11,40413)
CheckOffset(struct sigcontext,rsp,120,11,40413)
CheckMemberSize(struct sigcontext,rip,8,11,40414)
CheckOffset(struct sigcontext,rip,128,11,40414)
CheckMemberSize(struct sigcontext,eflags,8,11,40415)
CheckOffset(struct sigcontext,eflags,136,11,40415)
CheckMemberSize(struct sigcontext,cs,2,11,40416)
CheckOffset(struct sigcontext,cs,144,11,40416)
CheckMemberSize(struct sigcontext,gs,2,11,40417)
CheckOffset(struct sigcontext,gs,146,11,40417)
CheckMemberSize(struct sigcontext,fs,2,11,40418)
CheckOffset(struct sigcontext,fs,148,11,40418)
CheckMemberSize(struct sigcontext,__pad0,2,11,40419)
CheckOffset(struct sigcontext,__pad0,150,11,40419)
CheckMemberSize(struct sigcontext,err,8,11,40420)
CheckOffset(struct sigcontext,err,152,11,40420)
CheckMemberSize(struct sigcontext,trapno,8,11,40421)
CheckOffset(struct sigcontext,trapno,160,11,40421)
CheckMemberSize(struct sigcontext,oldmask,8,11,40422)
CheckOffset(struct sigcontext,oldmask,168,11,40422)
CheckMemberSize(struct sigcontext,cr2,8,11,40423)
CheckOffset(struct sigcontext,cr2,176,11,40423)
CheckMemberSize(struct sigcontext,fpstate,8,11,40424)
CheckOffset(struct sigcontext,fpstate,184,11,40424)
CheckMemberSize(struct sigcontext,__reserved1,64,11,40425)
CheckOffset(struct sigcontext,__reserved1,192,11,40425)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct sigcontext,12, 10005, 10, 2.0, NULL, 0, NULL)
CheckMemberSize(struct sigcontext,oldmask,8,10,40608)
CheckOffset(struct sigcontext,oldmask,0,10,40608)
CheckMemberSize(struct sigcontext,sregs,4,10,40609)
CheckOffset(struct sigcontext,sregs,8,10,40609)
#elif defined __powerpc64__
CheckTypeSize(struct sigcontext,1272, 10005, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct sigcontext,_unused,32,9,40580)
CheckOffset(struct sigcontext,_unused,0,9,40580)
CheckMemberSize(struct sigcontext,signal,4,9,40581)
CheckOffset(struct sigcontext,signal,32,9,40581)
CheckMemberSize(struct sigcontext,handler,8,9,40582)
CheckOffset(struct sigcontext,handler,40,9,40582)
CheckMemberSize(struct sigcontext,oldmask,8,9,40583)
CheckOffset(struct sigcontext,oldmask,48,9,40583)
CheckMemberSize(struct sigcontext,regs,8,9,40584)
CheckOffset(struct sigcontext,regs,56,9,40584)
CheckMemberSize(struct sigcontext,gp_regs,384,9,40602)
CheckOffset(struct sigcontext,gp_regs,64,9,40602)
CheckMemberSize(struct sigcontext,fp_regs,264,9,40603)
CheckOffset(struct sigcontext,fp_regs,448,9,40603)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct sigcontext,32, 10005, 6, 2.0, NULL, 0, NULL)
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
#elif defined __ia64__
CheckTypeSize(struct sigcontext,2656, 10005, 3, 2.0, NULL, 0, NULL)
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
CheckMemberSize(struct sigcontext,sc_ar25,8,3,40632)
CheckOffset(struct sigcontext,sc_ar25,2528,3,40632)
CheckMemberSize(struct sigcontext,sc_ar26,8,3,40633)
CheckOffset(struct sigcontext,sc_ar26,2536,3,40633)
CheckMemberSize(struct sigcontext,sc_rsvd,96,3,34578)
CheckOffset(struct sigcontext,sc_rsvd,2544,3,34578)
CheckMemberSize(struct sigcontext,sc_mask,8,3,34579)
CheckOffset(struct sigcontext,sc_mask,2640,3,34579)
#elif defined __i386__
CheckTypeSize(struct sigcontext,88, 10005, 2, 2.0, NULL, 0, NULL)
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

#if defined __s390x__
/* S390X */
typedef void (*sighandler_t_db)(int);
CheckFunctionTypedef(sighandler_t,sighandler_t_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*sighandler_t_db)(int);
CheckFunctionTypedef(sighandler_t,sighandler_t_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*sighandler_t_db)(int);
CheckFunctionTypedef(sighandler_t,sighandler_t_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*sighandler_t_db)(int);
CheckFunctionTypedef(sighandler_t,sighandler_t_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*sighandler_t_db)(int);
CheckFunctionTypedef(sighandler_t,sighandler_t_db);
#elif defined __ia64__
/* IA64 */
typedef void (*sighandler_t_db)(int);
CheckFunctionTypedef(sighandler_t,sighandler_t_db);
#elif defined __i386__
/* IA32 */
typedef void (*sighandler_t_db)(int);
CheckFunctionTypedef(sighandler_t,sighandler_t_db);
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
