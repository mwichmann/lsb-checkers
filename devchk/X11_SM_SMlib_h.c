/*
 * Test of X11/SM/SMlib.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "X11/SM/SMlib.h"



int X11_SM_SMlib_h()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(SmPointer,4,6499)
#elif __ia64__
CheckTypeSize(SmPointer,8,6499)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6499,0);
#endif
#ifdef __i386__
CheckTypeSize(SmcConn,4,6500)
#elif __ia64__
CheckTypeSize(SmcConn,8,6500)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6500,0);
#endif
#ifdef __i386__
CheckTypeSize(SmsConn,4,6501)
#elif __ia64__
CheckTypeSize(SmsConn,8,6501)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6501,0);
#endif
#ifdef __i386__
CheckTypeSize(SmcCloseStatus,4,6507)
#elif __ia64__
CheckTypeSize(SmcCloseStatus,4,6507)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6507,0);
#endif
#ifdef __i386__
CheckTypeSize(SmcSaveYourselfPhase2Proc,4,6509)
#elif __ia64__
CheckTypeSize(SmcSaveYourselfPhase2Proc,8,6509)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6509,0);
#endif
#ifdef __i386__
CheckTypeSize(SmcInteractProc,4,6510)
#elif __ia64__
CheckTypeSize(SmcInteractProc,8,6510)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6510,0);
#endif
#ifdef __i386__
CheckTypeSize(SmcPropReplyProc,4,6514)
#elif __ia64__
CheckTypeSize(SmcPropReplyProc,8,6514)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6514,0);
#endif
#ifdef __i386__
CheckTypeSize(SmsNewClientProc,4,6543)
#elif __ia64__
CheckTypeSize(SmsNewClientProc,8,6543)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6543,0);
#endif
#ifdef __i386__
CheckTypeSize(SmcErrorHandler,4,6544)
#elif __ia64__
CheckTypeSize(SmcErrorHandler,8,6544)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6544,0);
#endif
#ifdef __i386__
CheckTypeSize(SmsErrorHandler,4,6545)
#elif __ia64__
CheckTypeSize(SmsErrorHandler,8,6545)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6545,0);
#endif
printf("%d tests in X11/SM/SMlib.h\n",cnt);
return cnt;
}
