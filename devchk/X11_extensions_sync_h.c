/*
 * Test of X11/extensions/sync.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include <X11/Xlib.h>

#include "X11/extensions/sync.h"



int X11_extensions_sync_h()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(XSyncCounter,4,6827)
#elif __ia64__
CheckTypeSize(XSyncCounter,8,6827)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6827,0);
#endif
#ifdef __i386__
CheckTypeSize(XSyncAlarm,4,6828)
#elif __ia64__
CheckTypeSize(XSyncAlarm,8,6828)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6828,0);
#endif
#ifdef __i386__
CheckTypeSize(XSyncValue,8,6830)
#elif __ia64__
CheckTypeSize(XSyncValue,8,6830)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6830,0);
#endif
printf("%d tests in X11/extensions/sync.h\n",cnt);
return cnt;
}
