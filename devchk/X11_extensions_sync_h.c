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
CheckTypeSize(XSyncCounter,4,8609)
#elif __ia64__
CheckTypeSize(XSyncCounter,8,8609)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8609,0);
#endif
#ifdef __i386__
CheckTypeSize(XSyncAlarm,4,8610)
#elif __ia64__
CheckTypeSize(XSyncAlarm,8,8610)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8610,0);
#endif
#ifdef __i386__
CheckTypeSize(XSyncValue,8,8612)
#elif __ia64__
CheckTypeSize(XSyncValue,8,8612)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8612,0);
#endif
printf("%d tests in X11/extensions/sync.h\n",cnt);
return cnt;
}
