/*
 * Test of signal.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "signal.h"



int signal_h()
{
int cnt=0;
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
#ifdef TRAP_TRACE
CompareConstant(TRAP_TRACE,2)
#else
Msg( "Warning: Constant not found: TRAP_TRACE\n");
#endif
#ifdef TRAP_BRKPT
CompareConstant(TRAP_BRKPT,1)
#else
Msg( "Warning: Constant not found: TRAP_BRKPT\n");
#endif
#ifdef SS_ONSTACK
CompareConstant(SS_ONSTACK,1)
#else
Msg( "Warning: Constant not found: SS_ONSTACK\n");
#endif
#ifdef SS_DISABLE
CompareConstant(SS_DISABLE,2)
#else
Msg( "Warning: Constant not found: SS_DISABLE\n");
#endif
#ifdef SI_USER
CompareConstant(SI_USER,0)
#else
Msg( "Warning: Constant not found: SI_USER\n");
#endif
#ifdef SI_TIMER
CompareConstant(SI_TIMER,-2)
#else
Msg( "Warning: Constant not found: SI_TIMER\n");
#endif
#ifdef SI_QUEUE
CompareConstant(SI_QUEUE,(-1))
#else
Msg( "Warning: Constant not found: SI_QUEUE\n");
#endif
#ifdef SI_MESGQ
CompareConstant(SI_MESGQ,-3)
#else
Msg( "Warning: Constant not found: SI_MESGQ\n");
#endif
#ifdef SI_ASYNCIO
CompareConstant(SI_ASYNCIO,-4)
#else
Msg( "Warning: Constant not found: SI_ASYNCIO\n");
#endif
#ifdef SIG_UNBLOCK
CompareConstant(SIG_UNBLOCK,1)
#else
Msg( "Warning: Constant not found: SIG_UNBLOCK\n");
#endif
#ifdef SIG_SETMASK
CompareConstant(SIG_SETMASK,2)
#else
Msg( "Warning: Constant not found: SIG_SETMASK\n");
#endif
#ifdef SIG_IGN
CompareConstant(SIG_IGN,1)
#else
Msg( "Warning: Constant not found: SIG_IGN\n");
#endif
#ifdef SIG_HOLD
CompareConstant(SIG_HOLD,(-1))
#else
Msg( "Warning: Constant not found: SIG_HOLD\n");
#endif
#ifdef SIG_ERR
CompareConstant(SIG_ERR,(-1))
#else
Msg( "Warning: Constant not found: SIG_ERR\n");
#endif
#ifdef SIG_DFL
CompareConstant(SIG_DFL,0)
#else
Msg( "Warning: Constant not found: SIG_DFL\n");
#endif
#ifdef SIG_BLOCK
CompareConstant(SIG_BLOCK,0)
#else
Msg( "Warning: Constant not found: SIG_BLOCK\n");
#endif
#ifdef SIGXFSZ
CompareConstant(SIGXFSZ,25)
#else
Msg( "Warning: Constant not found: SIGXFSZ\n");
#endif
#ifdef SIGXCPU
CompareConstant(SIGXCPU,24)
#else
Msg( "Warning: Constant not found: SIGXCPU\n");
#endif
#ifdef SIGVTALRM
CompareConstant(SIGVTALRM,26)
#else
Msg( "Warning: Constant not found: SIGVTALRM\n");
#endif
#ifdef SIGUSR2
CompareConstant(SIGUSR2,12)
#else
Msg( "Warning: Constant not found: SIGUSR2\n");
#endif
#ifdef SIGUSR1
CompareConstant(SIGUSR1,10)
#else
Msg( "Warning: Constant not found: SIGUSR1\n");
#endif
#ifdef SIGURG
CompareConstant(SIGURG,23)
#else
Msg( "Warning: Constant not found: SIGURG\n");
#endif
#ifdef SIGTTOU
CompareConstant(SIGTTOU,22)
#else
Msg( "Warning: Constant not found: SIGTTOU\n");
#endif
#ifdef SIGTTIN
CompareConstant(SIGTTIN,21)
#else
Msg( "Warning: Constant not found: SIGTTIN\n");
#endif
#ifdef SIGTSTP
CompareConstant(SIGTSTP,20)
#else
Msg( "Warning: Constant not found: SIGTSTP\n");
#endif
#ifdef SIGTRAP
CompareConstant(SIGTRAP,5)
#else
Msg( "Warning: Constant not found: SIGTRAP\n");
#endif
#ifdef SIGTERM
CompareConstant(SIGTERM,15)
#else
Msg( "Warning: Constant not found: SIGTERM\n");
#endif
#ifdef SIGSYS
CompareConstant(SIGSYS,(-1))
#else
Msg( "Warning: Constant not found: SIGSYS\n");
#endif
#ifdef SIGSTOP
CompareConstant(SIGSTOP,19)
#else
Msg( "Warning: Constant not found: SIGSTOP\n");
#endif
#ifdef SIGSTKSZ
CompareConstant(SIGSTKSZ,8192)
#else
Msg( "Warning: Constant not found: SIGSTKSZ\n");
#endif
#ifdef SIGSEGV
CompareConstant(SIGSEGV,11)
#else
Msg( "Warning: Constant not found: SIGSEGV\n");
#endif
#ifdef SIGRTMIN
CompareConstant(SIGRTMIN,32)
#else
Msg( "Warning: Constant not found: SIGRTMIN\n");
#endif
#ifdef SIGRTMAX
CompareConstant(SIGRTMAX,63)
#else
Msg( "Warning: Constant not found: SIGRTMAX\n");
#endif
#ifdef SIGQUIT
CompareConstant(SIGQUIT,3)
#else
Msg( "Warning: Constant not found: SIGQUIT\n");
#endif
#ifdef SIGPROF
CompareConstant(SIGPROF,27)
#else
Msg( "Warning: Constant not found: SIGPROF\n");
#endif
#ifdef SIGPOLL
CompareConstant(SIGPOLL,29)
#else
Msg( "Warning: Constant not found: SIGPOLL\n");
#endif
#ifdef SIGPIPE
CompareConstant(SIGPIPE,13)
#else
Msg( "Warning: Constant not found: SIGPIPE\n");
#endif
#ifdef SIGKILL
CompareConstant(SIGKILL,9)
#else
Msg( "Warning: Constant not found: SIGKILL\n");
#endif
#ifdef SIGILL
CompareConstant(SIGILL,4)
#else
Msg( "Warning: Constant not found: SIGILL\n");
#endif
#ifdef SIGFPE
CompareConstant(SIGFPE,8)
#else
Msg( "Warning: Constant not found: SIGFPE\n");
#endif
#ifdef SIGEV_THREAD
CompareConstant(SIGEV_THREAD,2)
#else
Msg( "Warning: Constant not found: SIGEV_THREAD\n");
#endif
#ifdef SIGEV_SIGNAL
CompareConstant(SIGEV_SIGNAL,0)
#else
Msg( "Warning: Constant not found: SIGEV_SIGNAL\n");
#endif
#ifdef SIGEV_NONE
CompareConstant(SIGEV_NONE,1)
#else
Msg( "Warning: Constant not found: SIGEV_NONE\n");
#endif
#ifdef SIGCONT
CompareConstant(SIGCONT,18)
#else
Msg( "Warning: Constant not found: SIGCONT\n");
#endif
#ifdef SIGCHLD
CompareConstant(SIGCHLD,17)
#else
Msg( "Warning: Constant not found: SIGCHLD\n");
#endif
#ifdef SIGBUS
CompareConstant(SIGBUS,7)
#else
Msg( "Warning: Constant not found: SIGBUS\n");
#endif
#ifdef SIGALRM
CompareConstant(SIGALRM,14)
#else
Msg( "Warning: Constant not found: SIGALRM\n");
#endif
#ifdef SIGABRT
CompareConstant(SIGABRT,6)
#else
Msg( "Warning: Constant not found: SIGABRT\n");
#endif
#ifdef SEGV_MAPERR
CompareConstant(SEGV_MAPERR,1)
#else
Msg( "Warning: Constant not found: SEGV_MAPERR\n");
#endif
#ifdef SEGV_ACCERR
CompareConstant(SEGV_ACCERR,2)
#else
Msg( "Warning: Constant not found: SEGV_ACCERR\n");
#endif
#ifdef SA_RESTART
CompareConstant(SA_RESTART,268435456)
#else
Msg( "Warning: Constant not found: SA_RESTART\n");
#endif
#ifdef SA_RESETHAND
CompareConstant(SA_RESETHAND,-2147483648)
#else
Msg( "Warning: Constant not found: SA_RESETHAND\n");
#endif
#ifdef SA_ONSTACK
CompareConstant(SA_ONSTACK,134217728)
#else
Msg( "Warning: Constant not found: SA_ONSTACK\n");
#endif
#ifdef SA_NODEFER
CompareConstant(SA_NODEFER,1073741824)
#else
Msg( "Warning: Constant not found: SA_NODEFER\n");
#endif
#ifdef SA_NOCLDWAIT
CompareConstant(SA_NOCLDWAIT,(-1))
#else
Msg( "Warning: Constant not found: SA_NOCLDWAIT\n");
#endif
#ifdef SA_NOCLDSTOP
CompareConstant(SA_NOCLDSTOP,1)
#else
Msg( "Warning: Constant not found: SA_NOCLDSTOP\n");
#endif
#ifdef POLL_PRI
CompareConstant(POLL_PRI,5)
#else
Msg( "Warning: Constant not found: POLL_PRI\n");
#endif
#ifdef POLL_OUT
CompareConstant(POLL_OUT,2)
#else
Msg( "Warning: Constant not found: POLL_OUT\n");
#endif
#ifdef POLL_MSG
CompareConstant(POLL_MSG,3)
#else
Msg( "Warning: Constant not found: POLL_MSG\n");
#endif
#ifdef POLL_IN
CompareConstant(POLL_IN,1)
#else
Msg( "Warning: Constant not found: POLL_IN\n");
#endif
#ifdef POLL_HUP
CompareConstant(POLL_HUP,6)
#else
Msg( "Warning: Constant not found: POLL_HUP\n");
#endif
#ifdef POLL_ERR
CompareConstant(POLL_ERR,4)
#else
Msg( "Warning: Constant not found: POLL_ERR\n");
#endif
#ifdef MINSIGSTKSZ
CompareConstant(MINSIGSTKSZ,2048)
#else
Msg( "Warning: Constant not found: MINSIGSTKSZ\n");
#endif
#ifdef ILL_PRVREG
CompareConstant(ILL_PRVREG,6)
#else
Msg( "Warning: Constant not found: ILL_PRVREG\n");
#endif
#ifdef ILL_PRVOPC
CompareConstant(ILL_PRVOPC,5)
#else
Msg( "Warning: Constant not found: ILL_PRVOPC\n");
#endif
#ifdef ILL_ILLTRP
CompareConstant(ILL_ILLTRP,4)
#else
Msg( "Warning: Constant not found: ILL_ILLTRP\n");
#endif
#ifdef ILL_ILLOPN
CompareConstant(ILL_ILLOPN,2)
#else
Msg( "Warning: Constant not found: ILL_ILLOPN\n");
#endif
#ifdef ILL_ILLOPC
CompareConstant(ILL_ILLOPC,1)
#else
Msg( "Warning: Constant not found: ILL_ILLOPC\n");
#endif
#ifdef ILL_ILLADR
CompareConstant(ILL_ILLADR,3)
#else
Msg( "Warning: Constant not found: ILL_ILLADR\n");
#endif
#ifdef ILL_COPROC
CompareConstant(ILL_COPROC,7)
#else
Msg( "Warning: Constant not found: ILL_COPROC\n");
#endif
#ifdef ILL_BADSTK
CompareConstant(ILL_BADSTK,8)
#else
Msg( "Warning: Constant not found: ILL_BADSTK\n");
#endif
#ifdef FPE_INTOVF
CompareConstant(FPE_INTOVF,2)
#else
Msg( "Warning: Constant not found: FPE_INTOVF\n");
#endif
#ifdef FPE_INTDIV
CompareConstant(FPE_INTDIV,1)
#else
Msg( "Warning: Constant not found: FPE_INTDIV\n");
#endif
#ifdef FPE_FLTUND
CompareConstant(FPE_FLTUND,5)
#else
Msg( "Warning: Constant not found: FPE_FLTUND\n");
#endif
#ifdef FPE_FLTSUB
CompareConstant(FPE_FLTSUB,8)
#else
Msg( "Warning: Constant not found: FPE_FLTSUB\n");
#endif
#ifdef FPE_FLTRES
CompareConstant(FPE_FLTRES,6)
#else
Msg( "Warning: Constant not found: FPE_FLTRES\n");
#endif
#ifdef FPE_FLTOVF
CompareConstant(FPE_FLTOVF,4)
#else
Msg( "Warning: Constant not found: FPE_FLTOVF\n");
#endif
#ifdef FPE_FLTINV
CompareConstant(FPE_FLTINV,7)
#else
Msg( "Warning: Constant not found: FPE_FLTINV\n");
#endif
#ifdef FPE_FLTDIV
CompareConstant(FPE_FLTDIV,3)
#else
Msg( "Warning: Constant not found: FPE_FLTDIV\n");
#endif
#ifdef CLD_TRAPPED
CompareConstant(CLD_TRAPPED,4)
#else
Msg( "Warning: Constant not found: CLD_TRAPPED\n");
#endif
#ifdef CLD_STOPPED
CompareConstant(CLD_STOPPED,5)
#else
Msg( "Warning: Constant not found: CLD_STOPPED\n");
#endif
#ifdef CLD_KILLED
CompareConstant(CLD_KILLED,2)
#else
Msg( "Warning: Constant not found: CLD_KILLED\n");
#endif
#ifdef CLD_EXITED
CompareConstant(CLD_EXITED,1)
#else
Msg( "Warning: Constant not found: CLD_EXITED\n");
#endif
#ifdef CLD_DUMPED
CompareConstant(CLD_DUMPED,3)
#else
Msg( "Warning: Constant not found: CLD_DUMPED\n");
#endif
#ifdef CLD_CONTINUED
CompareConstant(CLD_CONTINUED,6)
#else
Msg( "Warning: Constant not found: CLD_CONTINUED\n");
#endif
#ifdef BUS_OBJERR
CompareConstant(BUS_OBJERR,3)
#else
Msg( "Warning: Constant not found: BUS_OBJERR\n");
#endif
#ifdef BUS_ADRERR
CompareConstant(BUS_ADRERR,2)
#else
Msg( "Warning: Constant not found: BUS_ADRERR\n");
#endif
#ifdef BUS_ADRALN
CompareConstant(BUS_ADRALN,1)
#else
Msg( "Warning: Constant not found: BUS_ADRALN\n");
#endif
printf("%d tests in signal.h\n",cnt);
return cnt;
}
