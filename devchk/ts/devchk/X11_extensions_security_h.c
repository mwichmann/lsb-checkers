/*
 * Test of X11/extensions/security.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
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

#if __i386__
CheckTypeSize(XSecurityAuthorization,4, 8596, 2)
#elif __ia64__
CheckTypeSize(XSecurityAuthorization,8, 8596, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSecurityAuthorization,4, 8596, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XSecurityAuthorization,4, 8596, 10)
#elif __powerpc64__
CheckTypeSize(XSecurityAuthorization,8, 8596, 9)
#elif __s390x__
CheckTypeSize(XSecurityAuthorization,8, 8596, 12)
#elif __x86_64__
CheckTypeSize(XSecurityAuthorization,8, 8596, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8596,0);
Msg("Find size of XSecurityAuthorization (8596)\n");
#endif

#if __i386__
CheckTypeSize(XSecurityAuthorizationAttributes,16, 8598, 2)
#elif __ia64__
CheckTypeSize(XSecurityAuthorizationAttributes,24, 8598, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSecurityAuthorizationAttributes,16, 8598, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XSecurityAuthorizationAttributes,16, 8598, 10)
#elif __powerpc64__
CheckTypeSize(XSecurityAuthorizationAttributes,24, 8598, 9)
#elif __s390x__
CheckTypeSize(XSecurityAuthorizationAttributes,24, 8598, 12)
#elif __x86_64__
CheckTypeSize(XSecurityAuthorizationAttributes,24, 8598, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8598,0);
Msg("Find size of XSecurityAuthorizationAttributes (8598)\n");
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
