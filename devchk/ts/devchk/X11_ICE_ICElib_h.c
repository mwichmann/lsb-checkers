/*
 * Test of X11/ICE/ICElib.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "X11/ICE/ICElib.h"



#ifdef TET_TEST
void X11_ICE_ICElib_h()
{
#else
int X11_ICE_ICElib_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in X11/ICE/ICElib.h\n");
#endif

#ifdef __i386__
CheckTypeSize(IcePointer,4)
#elif __ia64__
CheckTypeSize(IcePointer,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8180,0);
#endif

#ifdef __i386__
CheckTypeSize(IceConnectStatus,4)
#elif __ia64__
CheckTypeSize(IceConnectStatus,4)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8738,0);
#endif

#ifdef __i386__
CheckTypeSize(IceProtocolSetupStatus,4)
#elif __ia64__
CheckTypeSize(IceProtocolSetupStatus,4)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8740,0);
#endif

#ifdef __i386__
CheckTypeSize(IceCloseStatus,4)
#elif __ia64__
CheckTypeSize(IceCloseStatus,4)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8744,0);
#endif

#ifdef __i386__
CheckTypeSize(IceProcessMessagesStatus,4)
#elif __ia64__
CheckTypeSize(IceProcessMessagesStatus,4)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8746,0);
#endif

#ifdef __i386__
CheckTypeSize(IceWatchProc,4)
#elif __ia64__
CheckTypeSize(IceWatchProc,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8749,0);
#endif

#ifdef __i386__
CheckTypeSize(IceHostBasedAuthProc,4)
#elif __ia64__
CheckTypeSize(IceHostBasedAuthProc,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8760,0);
#endif

#ifdef __i386__
CheckTypeSize(IceProtocolSetupProc,4)
#elif __ia64__
CheckTypeSize(IceProtocolSetupProc,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8762,0);
#endif

#ifdef __i386__
CheckTypeSize(IceProtocolActivateProc,4)
#elif __ia64__
CheckTypeSize(IceProtocolActivateProc,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8764,0);
#endif

#ifdef __i386__
CheckTypeSize(IceIOErrorProc,4)
#elif __ia64__
CheckTypeSize(IceIOErrorProc,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8766,0);
#endif

#ifdef __i386__
CheckTypeSize(IcePingReplyProc,4)
#elif __ia64__
CheckTypeSize(IcePingReplyProc,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8768,0);
#endif

#ifdef __i386__
CheckTypeSize(IceErrorHandler,4)
#elif __ia64__
CheckTypeSize(IceErrorHandler,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8770,0);
#endif

#ifdef __i386__
CheckTypeSize(IceIOErrorHandler,4)
#elif __ia64__
CheckTypeSize(IceIOErrorHandler,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8772,0);
#endif

#ifdef __i386__
CheckTypeSize(IceConn,4)
#elif __ia64__
CheckTypeSize(IceConn,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8197,0);
#endif

#ifdef __i386__
CheckTypeSize(IceListenObj,4)
#elif __ia64__
CheckTypeSize(IceListenObj,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8198,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in X11/ICE/ICElib.h\n",cnt);
return cnt;
#endif

}
