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

#ifdef SIGHUP
	CompareConstant(SIGHUP,1)
#else
Msg( "Warning: Constant not found: SIGHUP\n");
#endif

#ifdef SIGINT
	CompareConstant(SIGINT,2)
#else
Msg( "Warning: Constant not found: SIGINT\n");
#endif

#ifdef SIGQUIT
	CompareConstant(SIGQUIT,3)
#else
Msg( "Warning: Constant not found: SIGQUIT\n");
#endif

#ifdef SIGILL
	CompareConstant(SIGILL,4)
#else
Msg( "Warning: Constant not found: SIGILL\n");
#endif

#ifdef SIGTRAP
	CompareConstant(SIGTRAP,5)
#else
Msg( "Warning: Constant not found: SIGTRAP\n");
#endif

#ifdef SIGABRT
	CompareConstant(SIGABRT,6)
#else
Msg( "Warning: Constant not found: SIGABRT\n");
#endif

#ifdef SIGIOT
	CompareConstant(SIGIOT,6)
#else
Msg( "Warning: Constant not found: SIGIOT\n");
#endif

#ifdef SIGBUS
	CompareConstant(SIGBUS,7)
#else
Msg( "Warning: Constant not found: SIGBUS\n");
#endif

#ifdef SIGFPE
	CompareConstant(SIGFPE,8)
#else
Msg( "Warning: Constant not found: SIGFPE\n");
#endif

#ifdef SIGKILL
	CompareConstant(SIGKILL,9)
#else
Msg( "Warning: Constant not found: SIGKILL\n");
#endif

#ifdef SIGUSR1
	CompareConstant(SIGUSR1,10)
#else
Msg( "Warning: Constant not found: SIGUSR1\n");
#endif

#ifdef SIGSEGV
	CompareConstant(SIGSEGV,11)
#else
Msg( "Warning: Constant not found: SIGSEGV\n");
#endif

#ifdef SIGUSR2
	CompareConstant(SIGUSR2,12)
#else
Msg( "Warning: Constant not found: SIGUSR2\n");
#endif

#ifdef SIGPIPE
	CompareConstant(SIGPIPE,13)
#else
Msg( "Warning: Constant not found: SIGPIPE\n");
#endif

#ifdef SIGALRM
	CompareConstant(SIGALRM,14)
#else
Msg( "Warning: Constant not found: SIGALRM\n");
#endif

#ifdef SIGTERM
	CompareConstant(SIGTERM,15)
#else
Msg( "Warning: Constant not found: SIGTERM\n");
#endif

#ifdef SIGSTKFLT
	CompareConstant(SIGSTKFLT,16)
#else
Msg( "Warning: Constant not found: SIGSTKFLT\n");
#endif

#ifdef SIGCHLD
	CompareConstant(SIGCHLD,17)
#else
Msg( "Warning: Constant not found: SIGCHLD\n");
#endif

#ifdef SIGCLD
	CompareConstant(SIGCLD,SIGCHLD)
#else
Msg( "Warning: Constant not found: SIGCLD\n");
#endif

#ifdef SIGCONT
	CompareConstant(SIGCONT,18)
#else
Msg( "Warning: Constant not found: SIGCONT\n");
#endif

#ifdef SIGSTOP
	CompareConstant(SIGSTOP,19)
#else
Msg( "Warning: Constant not found: SIGSTOP\n");
#endif

#ifdef SIGTSTP
	CompareConstant(SIGTSTP,20)
#else
Msg( "Warning: Constant not found: SIGTSTP\n");
#endif

#ifdef SIGTTIN
	CompareConstant(SIGTTIN,21)
#else
Msg( "Warning: Constant not found: SIGTTIN\n");
#endif

#ifdef SIGTTOU
	CompareConstant(SIGTTOU,22)
#else
Msg( "Warning: Constant not found: SIGTTOU\n");
#endif

#ifdef SIGXCPU
	CompareConstant(SIGXCPU,24)
#else
Msg( "Warning: Constant not found: SIGXCPU\n");
#endif

#ifdef SIGXFSZ
	CompareConstant(SIGXFSZ,25)
#else
Msg( "Warning: Constant not found: SIGXFSZ\n");
#endif

#ifdef SIGVTALRM
	CompareConstant(SIGVTALRM,26)
#else
Msg( "Warning: Constant not found: SIGVTALRM\n");
#endif

#ifdef SIGPROF
	CompareConstant(SIGPROF,27)
#else
Msg( "Warning: Constant not found: SIGPROF\n");
#endif

#ifdef SIGWINCH
	CompareConstant(SIGWINCH,28)
#else
Msg( "Warning: Constant not found: SIGWINCH\n");
#endif

#ifdef SIGIO
	CompareConstant(SIGIO,29)
#else
Msg( "Warning: Constant not found: SIGIO\n");
#endif

#ifdef SIGPOLL
	CompareConstant(SIGPOLL,SIGIO)
#else
Msg( "Warning: Constant not found: SIGPOLL\n");
#endif

#ifdef SIGPWR
	CompareConstant(SIGPWR,30)
#else
Msg( "Warning: Constant not found: SIGPWR\n");
#endif

#ifdef SIGSYS
	CompareConstant(SIGSYS,31)
#else
Msg( "Warning: Constant not found: SIGSYS\n");
#endif

#ifdef SIGUNUSED
	CompareConstant(SIGUNUSED,31)
#else
Msg( "Warning: Constant not found: SIGUNUSED\n");
#endif

#ifdef SIGRTMIN
	CompareConstant(SIGRTMIN,32)
#else
Msg( "Warning: Constant not found: SIGRTMIN\n");
#endif

#ifdef SIG_DFL
	CompareConstant(SIG_DFL,((__sighandler_t)0))
#else
Msg( "Warning: Constant not found: SIG_DFL\n");
#endif

#ifdef SIG_IGN
	CompareConstant(SIG_IGN,((__sighandler_t)1))
#else
Msg( "Warning: Constant not found: SIG_IGN\n");
#endif

#ifdef SIG_ERR
	CompareConstant(SIG_ERR,((__sighandler_t)-1))
#else
Msg( "Warning: Constant not found: SIG_ERR\n");
#endif

#ifdef SV_ONSTACK
	CompareConstant(SV_ONSTACK,(1<<0))
#else
Msg( "Warning: Constant not found: SV_ONSTACK\n");
#endif

#ifdef SV_INTERRUPT
	CompareConstant(SV_INTERRUPT,(1<<1))
#else
Msg( "Warning: Constant not found: SV_INTERRUPT\n");
#endif

#ifdef SV_RESETHAND
	CompareConstant(SV_RESETHAND,(1<<2))
#else
Msg( "Warning: Constant not found: SV_RESETHAND\n");
#endif

#ifdef SA_NOCLDSTOP
	CompareConstant(SA_NOCLDSTOP,0x00000001)
#else
Msg( "Warning: Constant not found: SA_NOCLDSTOP\n");
#endif

#ifdef SA_NOCLDWAIT
	CompareConstant(SA_NOCLDWAIT,0x00000002)
#else
Msg( "Warning: Constant not found: SA_NOCLDWAIT\n");
#endif

#ifdef SA_SIGINFO
	CompareConstant(SA_SIGINFO,0x00000004)
#else
Msg( "Warning: Constant not found: SA_SIGINFO\n");
#endif

#ifdef SA_ONSTACK
	CompareConstant(SA_ONSTACK,0x08000000)
#else
Msg( "Warning: Constant not found: SA_ONSTACK\n");
#endif

#ifdef SA_RESTART
	CompareConstant(SA_RESTART,0x10000000)
#else
Msg( "Warning: Constant not found: SA_RESTART\n");
#endif

#ifdef SA_INTERRUPT
	CompareConstant(SA_INTERRUPT,0x20000000)
#else
Msg( "Warning: Constant not found: SA_INTERRUPT\n");
#endif

#ifdef SA_NODEFER
	CompareConstant(SA_NODEFER,0x40000000)
#else
Msg( "Warning: Constant not found: SA_NODEFER\n");
#endif

#ifdef SA_RESETHAND
	CompareConstant(SA_RESETHAND,0x80000000)
#else
Msg( "Warning: Constant not found: SA_RESETHAND\n");
#endif

#ifdef SA_NOMASK
	CompareConstant(SA_NOMASK,SA_NODEFER)
#else
Msg( "Warning: Constant not found: SA_NOMASK\n");
#endif

#ifdef SA_ONESHOT
	CompareConstant(SA_ONESHOT,SA_RESETHAND)
#else
Msg( "Warning: Constant not found: SA_ONESHOT\n");
#endif

#ifdef __i386__
CheckTypeSize(union sigval,4, 9319, 2)
#elif __ia64__
CheckTypeSize(union sigval,0, 9319, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9319,0);
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
