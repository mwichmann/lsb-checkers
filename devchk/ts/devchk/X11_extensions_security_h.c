/*
 * Test of X11/extensions/security.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include <stdio.h>
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xauth.h>
#include <X11/Xlib.h>

#include "X11/extensions/security.h"



#ifdef TET_TEST
void X11_extensions_security_h()
{
#else
int X11_extensions_security_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in X11/extensions/security.h\n");
#endif

#ifdef __i386__
CheckTypeSize(XSecurityAuthorization,4, 8596, 2)
#elif __ia64__
CheckTypeSize(XSecurityAuthorization,8, 8596, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8596,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in X11/extensions/security.h\n",cnt);
return cnt;
#endif

}
