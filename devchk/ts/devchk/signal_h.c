/*
 * Test of signal.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef SIGRTMIN
	CompareConstant(SIGRTMIN,(__libc_current_sigrtmin ()))
#else
Msg( "Error: Constant not found: SIGRTMIN\n");
cnt++;
#endif

#ifdef SIGRTMAX
	CompareConstant(SIGRTMAX,(__libc_current_sigrtmax ()))
#else
Msg( "Error: Constant not found: SIGRTMAX\n");
cnt++;
#endif

#ifdef SIG_BLOCK
	CompareConstant(SIG_BLOCK,0)
#else
Msg( "Error: Constant not found: SIG_BLOCK\n");
cnt++;
#endif

#ifdef SIG_UNBLOCK
	CompareConstant(SIG_UNBLOCK,1)
#else
Msg( "Error: Constant not found: SIG_UNBLOCK\n");
cnt++;
#endif

#ifdef SIG_SETMASK
	CompareConstant(SIG_SETMASK,2)
#else
Msg( "Error: Constant not found: SIG_SETMASK\n");
cnt++;
#endif

#ifdef SIGHUP
	CompareConstant(SIGHUP,1)
#else
Msg( "Error: Constant not found: SIGHUP\n");
cnt++;
#endif

#ifdef SIGINT
	CompareConstant(SIGINT,2)
#else
Msg( "Error: Constant not found: SIGINT\n");
cnt++;
#endif

#ifdef SIGQUIT
	CompareConstant(SIGQUIT,3)
#else
Msg( "Error: Constant not found: SIGQUIT\n");
cnt++;
#endif

#ifdef SIGILL
	CompareConstant(SIGILL,4)
#else
Msg( "Error: Constant not found: SIGILL\n");
cnt++;
#endif

#ifdef SIGTRAP
	CompareConstant(SIGTRAP,5)
#else
Msg( "Error: Constant not found: SIGTRAP\n");
cnt++;
#endif

#ifdef SIGABRT
	CompareConstant(SIGABRT,6)
#else
Msg( "Error: Constant not found: SIGABRT\n");
cnt++;
#endif

#ifdef SIGIOT
	CompareConstant(SIGIOT,6)
#else
Msg( "Error: Constant not found: SIGIOT\n");
cnt++;
#endif

#ifdef SIGBUS
	CompareConstant(SIGBUS,7)
#else
Msg( "Error: Constant not found: SIGBUS\n");
cnt++;
#endif

#ifdef SIGFPE
	CompareConstant(SIGFPE,8)
#else
Msg( "Error: Constant not found: SIGFPE\n");
cnt++;
#endif

#ifdef SIGKILL
	CompareConstant(SIGKILL,9)
#else
Msg( "Error: Constant not found: SIGKILL\n");
cnt++;
#endif

#ifdef SIGUSR1
	CompareConstant(SIGUSR1,10)
#else
Msg( "Error: Constant not found: SIGUSR1\n");
cnt++;
#endif

#ifdef SIGSEGV
	CompareConstant(SIGSEGV,11)
#else
Msg( "Error: Constant not found: SIGSEGV\n");
cnt++;
#endif

#ifdef SIGUSR2
	CompareConstant(SIGUSR2,12)
#else
Msg( "Error: Constant not found: SIGUSR2\n");
cnt++;
#endif

#ifdef SIGPIPE
	CompareConstant(SIGPIPE,13)
#else
Msg( "Error: Constant not found: SIGPIPE\n");
cnt++;
#endif

#ifdef SIGALRM
	CompareConstant(SIGALRM,14)
#else
Msg( "Error: Constant not found: SIGALRM\n");
cnt++;
#endif

#ifdef SIGTERM
	CompareConstant(SIGTERM,15)
#else
Msg( "Error: Constant not found: SIGTERM\n");
cnt++;
#endif

#ifdef SIGSTKFLT
	CompareConstant(SIGSTKFLT,16)
#else
Msg( "Error: Constant not found: SIGSTKFLT\n");
cnt++;
#endif

#ifdef SIGCHLD
	CompareConstant(SIGCHLD,17)
#else
Msg( "Error: Constant not found: SIGCHLD\n");
cnt++;
#endif

#ifdef SIGCLD
	CompareConstant(SIGCLD,SIGCHLD)
#else
Msg( "Error: Constant not found: SIGCLD\n");
cnt++;
#endif

#ifdef SIGCONT
	CompareConstant(SIGCONT,18)
#else
Msg( "Error: Constant not found: SIGCONT\n");
cnt++;
#endif

#ifdef SIGSTOP
	CompareConstant(SIGSTOP,19)
#else
Msg( "Error: Constant not found: SIGSTOP\n");
cnt++;
#endif

#ifdef SIGTSTP
	CompareConstant(SIGTSTP,20)
#else
Msg( "Error: Constant not found: SIGTSTP\n");
cnt++;
#endif

#ifdef SIGTTIN
	CompareConstant(SIGTTIN,21)
#else
Msg( "Error: Constant not found: SIGTTIN\n");
cnt++;
#endif

#ifdef SIGTTOU
	CompareConstant(SIGTTOU,22)
#else
Msg( "Error: Constant not found: SIGTTOU\n");
cnt++;
#endif

#ifdef SIGXCPU
	CompareConstant(SIGXCPU,24)
#else
Msg( "Error: Constant not found: SIGXCPU\n");
cnt++;
#endif

#ifdef SIGXFSZ
	CompareConstant(SIGXFSZ,25)
#else
Msg( "Error: Constant not found: SIGXFSZ\n");
cnt++;
#endif

#ifdef SIGVTALRM
	CompareConstant(SIGVTALRM,26)
#else
Msg( "Error: Constant not found: SIGVTALRM\n");
cnt++;
#endif

#ifdef SIGPROF
	CompareConstant(SIGPROF,27)
#else
Msg( "Error: Constant not found: SIGPROF\n");
cnt++;
#endif

#ifdef SIGWINCH
	CompareConstant(SIGWINCH,28)
#else
Msg( "Error: Constant not found: SIGWINCH\n");
cnt++;
#endif

#ifdef SIGIO
	CompareConstant(SIGIO,29)
#else
Msg( "Error: Constant not found: SIGIO\n");
cnt++;
#endif

#ifdef SIGPOLL
	CompareConstant(SIGPOLL,SIGIO)
#else
Msg( "Error: Constant not found: SIGPOLL\n");
cnt++;
#endif

#ifdef SIGPWR
	CompareConstant(SIGPWR,30)
#else
Msg( "Error: Constant not found: SIGPWR\n");
cnt++;
#endif

#ifdef SIGSYS
	CompareConstant(SIGSYS,31)
#else
Msg( "Error: Constant not found: SIGSYS\n");
cnt++;
#endif

#ifdef SIGUNUSED
	CompareConstant(SIGUNUSED,31)
#else
Msg( "Error: Constant not found: SIGUNUSED\n");
cnt++;
#endif

#ifdef SIG_DFL
	CompareConstant(SIG_DFL,((__sighandler_t)0))
#else
Msg( "Error: Constant not found: SIG_DFL\n");
cnt++;
#endif

#ifdef SIG_IGN
	CompareConstant(SIG_IGN,((__sighandler_t)1))
#else
Msg( "Error: Constant not found: SIG_IGN\n");
cnt++;
#endif

#ifdef SIG_ERR
	CompareConstant(SIG_ERR,((__sighandler_t)-1))
#else
Msg( "Error: Constant not found: SIG_ERR\n");
cnt++;
#endif

#ifdef SV_ONSTACK
	CompareConstant(SV_ONSTACK,(1<<0))
#else
Msg( "Error: Constant not found: SV_ONSTACK\n");
cnt++;
#endif

#ifdef SV_INTERRUPT
	CompareConstant(SV_INTERRUPT,(1<<1))
#else
Msg( "Error: Constant not found: SV_INTERRUPT\n");
cnt++;
#endif

#ifdef SV_RESETHAND
	CompareConstant(SV_RESETHAND,(1<<2))
#else
Msg( "Error: Constant not found: SV_RESETHAND\n");
cnt++;
#endif

#ifdef SIGEV_NONE
	CompareConstant(SIGEV_NONE,1)
#else
Msg( "Error: Constant not found: SIGEV_NONE\n");
cnt++;
#endif

#ifdef _NSIG
	CompareConstant(_NSIG,64)
#else
Msg( "Error: Constant not found: _NSIG\n");
cnt++;
#endif

#ifdef _NSIG_WORDS
	CompareConstant(_NSIG_WORDS,((_NSIG/sizeof(long))>>3))
#else
Msg( "Error: Constant not found: _NSIG_WORDS\n");
cnt++;
#endif

#ifdef SA_NOCLDSTOP
	CompareConstant(SA_NOCLDSTOP,0x00000001)
#else
Msg( "Error: Constant not found: SA_NOCLDSTOP\n");
cnt++;
#endif

#ifdef SA_NOCLDWAIT
	CompareConstant(SA_NOCLDWAIT,0x00000002)
#else
Msg( "Error: Constant not found: SA_NOCLDWAIT\n");
cnt++;
#endif

#ifdef SA_SIGINFO
	CompareConstant(SA_SIGINFO,0x00000004)
#else
Msg( "Error: Constant not found: SA_SIGINFO\n");
cnt++;
#endif

#ifdef SA_ONSTACK
	CompareConstant(SA_ONSTACK,0x08000000)
#else
Msg( "Error: Constant not found: SA_ONSTACK\n");
cnt++;
#endif

#ifdef SA_RESTART
	CompareConstant(SA_RESTART,0x10000000)
#else
Msg( "Error: Constant not found: SA_RESTART\n");
cnt++;
#endif

#ifdef SA_INTERRUPT
	CompareConstant(SA_INTERRUPT,0x20000000)
#else
Msg( "Error: Constant not found: SA_INTERRUPT\n");
cnt++;
#endif

#ifdef SA_NODEFER
	CompareConstant(SA_NODEFER,0x40000000)
#else
Msg( "Error: Constant not found: SA_NODEFER\n");
cnt++;
#endif

#ifdef SA_RESETHAND
	CompareConstant(SA_RESETHAND,0x80000000)
#else
Msg( "Error: Constant not found: SA_RESETHAND\n");
cnt++;
#endif

#ifdef SA_NOMASK
	CompareConstant(SA_NOMASK,SA_NODEFER)
#else
Msg( "Error: Constant not found: SA_NOMASK\n");
cnt++;
#endif

#ifdef SA_ONESHOT
	CompareConstant(SA_ONESHOT,SA_RESETHAND)
#else
Msg( "Error: Constant not found: SA_ONESHOT\n");
cnt++;
#endif

#ifdef __i386__
CheckTypeSize(__sighandler_t,4, 6966, 2)
#elif __ia64__
CheckTypeSize(__sighandler_t,8, 6966, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6966,0);
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
