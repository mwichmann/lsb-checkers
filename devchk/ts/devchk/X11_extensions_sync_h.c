/*
 * Test of X11/extensions/sync.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>

#include "X11/extensions/sync.h"



#ifdef TET_TEST
void X11_extensions_sync_h()
{
#else
int X11_extensions_sync_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in X11/extensions/sync.h\n");
#endif

#ifdef __i386__
CheckTypeSize(XSyncCounter,4, 8609, 2)
#elif __ia64__
CheckTypeSize(XSyncCounter,8, 8609, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8609,0);
#endif

#ifdef __i386__
CheckTypeSize(XSyncAlarm,4, 8610, 2)
#elif __ia64__
CheckTypeSize(XSyncAlarm,8, 8610, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8610,0);
#endif

#ifdef __i386__
CheckTypeSize(XSyncValue,8, 8612, 2)
#elif __ia64__
CheckTypeSize(XSyncValue,8, 8612, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8612,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in X11/extensions/sync.h\n",cnt);
return cnt;
#endif

}
