/*
 * Test of signal.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "signal.h"



int signal_h()
{
int cnt=0;
CheckTypeSize(sig_atomic_t,4)
CheckTypeSize(__sighandler_t,4)
CheckTypeSize(sigset_t,128)
CheckTypeSize(sig_t,4)
CheckTypeSize(struct sigvec,0)
CheckOffset(struct sigvec,sv_handler,0)
CheckOffset(struct sigvec,sv_mask,4)
CheckOffset(struct sigvec,sv_flags,8)
printf("%d tests in signal.h\n",cnt);
return cnt;
}
