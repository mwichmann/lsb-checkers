/*
 * Test of X11/SM/SMlib.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/ICE/ICElib.h>
#include "X11/SM/SMlib.h"



#ifdef TET_TEST
void X11_SM_SMlib_h()
{
#else
int X11_SM_SMlib_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in X11/SM/SMlib.h\n");
#endif

#ifdef __i386__
CheckTypeSize(SmPointer,4, 8231, 2)
#elif __ia64__
CheckTypeSize(SmPointer,8, 8231, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8231,0);
#endif

#ifdef __i386__
CheckTypeSize(SmcConn,4, 8232, 2)
#elif __ia64__
CheckTypeSize(SmcConn,8, 8232, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8232,0);
#endif

#ifdef __i386__
CheckTypeSize(SmsConn,4, 8233, 2)
#elif __ia64__
CheckTypeSize(SmsConn,8, 8233, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8233,0);
#endif

#ifdef __i386__
CheckTypeSize(SmcSaveYourselfPhase2Proc,4, 8790, 2)
#elif __ia64__
CheckTypeSize(SmcSaveYourselfPhase2Proc,8, 8790, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8790,0);
#endif

#ifdef __i386__
CheckTypeSize(SmcInteractProc,4, 8792, 2)
#elif __ia64__
CheckTypeSize(SmcInteractProc,8, 8792, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8792,0);
#endif

#ifdef __i386__
CheckTypeSize(SmcPropReplyProc,4, 8802, 2)
#elif __ia64__
CheckTypeSize(SmcPropReplyProc,8, 8802, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8802,0);
#endif

#ifdef __i386__
CheckTypeSize(SmsNewClientProc,4, 8825, 2)
#elif __ia64__
CheckTypeSize(SmsNewClientProc,8, 8825, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8825,0);
#endif

#ifdef __i386__
CheckTypeSize(SmcErrorHandler,4, 8827, 2)
#elif __ia64__
CheckTypeSize(SmcErrorHandler,8, 8827, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8827,0);
#endif

#ifdef __i386__
CheckTypeSize(SmsErrorHandler,4, 8829, 2)
#elif __ia64__
CheckTypeSize(SmsErrorHandler,8, 8829, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8829,0);
#endif

#ifdef __i386__
CheckTypeSize(SmcCloseStatus,4, 8786, 2)
#elif __ia64__
CheckTypeSize(SmcCloseStatus,4, 8786, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8786,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in X11/SM/SMlib.h\n",cnt);
return cnt;
#endif

}
