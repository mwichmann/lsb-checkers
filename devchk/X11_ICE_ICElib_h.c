/*
 * Test of X11/ICE/ICElib.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "X11/ICE/ICElib.h"



int X11_ICE_ICElib_h()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(IcePointer,4,6460)
#elif __ia64__
CheckTypeSize(IcePointer,8,6460)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6460,0);
#endif
#ifdef __i386__
CheckTypeSize(IceConnectStatus,4,6466)
#elif __ia64__
CheckTypeSize(IceConnectStatus,4,6466)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6466,0);
#endif
#ifdef __i386__
CheckTypeSize(IceProtocolSetupStatus,4,6468)
#elif __ia64__
CheckTypeSize(IceProtocolSetupStatus,4,6468)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6468,0);
#endif
#ifdef __i386__
CheckTypeSize(IceCloseStatus,4,6472)
#elif __ia64__
CheckTypeSize(IceCloseStatus,4,6472)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6472,0);
#endif
#ifdef __i386__
CheckTypeSize(IceProcessMessagesStatus,4,6474)
#elif __ia64__
CheckTypeSize(IceProcessMessagesStatus,4,6474)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6474,0);
#endif
#ifdef __i386__
CheckTypeSize(IceConn,4,6477)
#elif __ia64__
CheckTypeSize(IceConn,8,6477)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6477,0);
#endif
#ifdef __i386__
CheckTypeSize(IceListenObj,4,6478)
#elif __ia64__
CheckTypeSize(IceListenObj,8,6478)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6478,0);
#endif
#ifdef __i386__
CheckTypeSize(IceWatchProc,4,6479)
#elif __ia64__
CheckTypeSize(IceWatchProc,8,6479)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6479,0);
#endif
#ifdef __i386__
CheckTypeSize(IceHostBasedAuthProc,4,6488)
#elif __ia64__
CheckTypeSize(IceHostBasedAuthProc,8,6488)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6488,0);
#endif
#ifdef __i386__
CheckTypeSize(IceProtocolSetupProc,4,6489)
#elif __ia64__
CheckTypeSize(IceProtocolSetupProc,8,6489)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6489,0);
#endif
#ifdef __i386__
CheckTypeSize(IceProtocolActivateProc,4,6490)
#elif __ia64__
CheckTypeSize(IceProtocolActivateProc,8,6490)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6490,0);
#endif
#ifdef __i386__
CheckTypeSize(IceIOErrorProc,4,6491)
#elif __ia64__
CheckTypeSize(IceIOErrorProc,8,6491)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6491,0);
#endif
#ifdef __i386__
CheckTypeSize(IcePingReplyProc,4,6492)
#elif __ia64__
CheckTypeSize(IcePingReplyProc,8,6492)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6492,0);
#endif
#ifdef __i386__
CheckTypeSize(IceErrorHandler,4,6493)
#elif __ia64__
CheckTypeSize(IceErrorHandler,8,6493)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6493,0);
#endif
#ifdef __i386__
CheckTypeSize(IceIOErrorHandler,4,6494)
#elif __ia64__
CheckTypeSize(IceIOErrorHandler,8,6494)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6494,0);
#endif
printf("%d tests in X11/ICE/ICElib.h\n",cnt);
return cnt;
}
