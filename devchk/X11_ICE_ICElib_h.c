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
CheckTypeSize(IcePointer,4,8180)
#elif __ia64__
CheckTypeSize(IcePointer,8,8180)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8180,0);
#endif
#ifdef __i386__
CheckTypeSize(IceConn,4,8197)
#elif __ia64__
CheckTypeSize(IceConn,8,8197)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8197,0);
#endif
#ifdef __i386__
CheckTypeSize(IceListenObj,4,8198)
#elif __ia64__
CheckTypeSize(IceListenObj,8,8198)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8198,0);
#endif
#ifdef __i386__
CheckTypeSize(IceConnectStatus,4,8738)
#elif __ia64__
CheckTypeSize(IceConnectStatus,4,8738)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8738,0);
#endif
#ifdef __i386__
CheckTypeSize(IceProtocolSetupStatus,4,8740)
#elif __ia64__
CheckTypeSize(IceProtocolSetupStatus,4,8740)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8740,0);
#endif
#ifdef __i386__
CheckTypeSize(IceCloseStatus,4,8744)
#elif __ia64__
CheckTypeSize(IceCloseStatus,4,8744)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8744,0);
#endif
#ifdef __i386__
CheckTypeSize(IceProcessMessagesStatus,4,8746)
#elif __ia64__
CheckTypeSize(IceProcessMessagesStatus,4,8746)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8746,0);
#endif
#ifdef __i386__
CheckTypeSize(IceWatchProc,4,8749)
#elif __ia64__
CheckTypeSize(IceWatchProc,8,8749)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8749,0);
#endif
#ifdef __i386__
CheckTypeSize(IceHostBasedAuthProc,4,8760)
#elif __ia64__
CheckTypeSize(IceHostBasedAuthProc,8,8760)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8760,0);
#endif
#ifdef __i386__
CheckTypeSize(IceProtocolSetupProc,4,8762)
#elif __ia64__
CheckTypeSize(IceProtocolSetupProc,8,8762)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8762,0);
#endif
#ifdef __i386__
CheckTypeSize(IceProtocolActivateProc,4,8764)
#elif __ia64__
CheckTypeSize(IceProtocolActivateProc,8,8764)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8764,0);
#endif
#ifdef __i386__
CheckTypeSize(IceIOErrorProc,4,8766)
#elif __ia64__
CheckTypeSize(IceIOErrorProc,8,8766)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8766,0);
#endif
#ifdef __i386__
CheckTypeSize(IcePingReplyProc,4,8768)
#elif __ia64__
CheckTypeSize(IcePingReplyProc,8,8768)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8768,0);
#endif
#ifdef __i386__
CheckTypeSize(IceErrorHandler,4,8770)
#elif __ia64__
CheckTypeSize(IceErrorHandler,8,8770)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8770,0);
#endif
#ifdef __i386__
CheckTypeSize(IceIOErrorHandler,4,8772)
#elif __ia64__
CheckTypeSize(IceIOErrorHandler,8,8772)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8772,0);
#endif
printf("%d tests in X11/ICE/ICElib.h\n",cnt);
return cnt;
}
