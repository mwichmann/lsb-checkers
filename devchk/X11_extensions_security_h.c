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
#ifdef __i386__
CheckTypeSize(XSecurityAuthorization,4,6816)
#elif __ia64__
CheckTypeSize(XSecurityAuthorization,8,6816)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6816,0);
#endif
printf("%d tests in X11/extensions/security.h\n",cnt);
return cnt;
}
