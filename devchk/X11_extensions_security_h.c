/*
 * Test of X11/extensions/security.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include <X11/Xlib.h>

#include "X11/extensions/security.h"



int X11_extensions_security_h()
{
int cnt=0;
CheckTypeSize(XSecurityAuthorization,4)
printf("%d tests in X11/extensions/security.h\n",cnt);
return cnt;
}
