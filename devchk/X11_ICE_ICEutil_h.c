/*
 * Test of X11/ICE/ICEutil.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include <X11/Xlib.h>
#include "X11/ICE/ICEutil.h"



int X11_ICE_ICEutil_h()
{
int cnt=0;
CheckTypeSize(IceAuthFileEntry,28)
CheckTypeSize(IceAuthDataEntry,20)
printf("%d tests in X11/ICE/ICEutil.h\n",cnt);
return cnt;
}
