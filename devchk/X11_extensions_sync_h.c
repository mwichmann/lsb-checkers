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
CheckTypeSize(XSyncValue,8,)
CheckTypeSize(XSyncAlarm,4,)
CheckTypeSize(XSyncCounter,4,)
printf("%d tests in X11/extensions/sync.h\n",cnt);
return cnt;
}
