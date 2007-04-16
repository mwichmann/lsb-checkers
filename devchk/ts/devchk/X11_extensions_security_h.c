/*
 * Test of X11/extensions/security.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
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

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/security.h\n");
#endif

printf("Checking data structures in X11/extensions/security.h\n");
#if __i386__
CheckTypeSize(XSecurityAuthorization,4, 8596, 2);
#elif __ia64__
CheckTypeSize(XSecurityAuthorization,8, 8596, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSecurityAuthorization,4, 8596, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XSecurityAuthorization,4, 8596, 10);
#elif __powerpc64__
CheckTypeSize(XSecurityAuthorization,8, 8596, 9);
#elif __s390x__
CheckTypeSize(XSecurityAuthorization,8, 8596, 12);
#elif __x86_64__
CheckTypeSize(XSecurityAuthorization,8, 8596, 11);
#elif 1
CheckTypeSize(XSecurityAuthorization,0, 8596, 1);
#endif

#if __i386__
CheckTypeSize(XSecurityAuthorizationAttributes,16, 8598, 2);
#elif __ia64__
CheckTypeSize(XSecurityAuthorizationAttributes,24, 8598, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSecurityAuthorizationAttributes,16, 8598, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XSecurityAuthorizationAttributes,16, 8598, 10);
#elif __powerpc64__
CheckTypeSize(XSecurityAuthorizationAttributes,24, 8598, 9);
#elif __s390x__
CheckTypeSize(XSecurityAuthorizationAttributes,24, 8598, 12);
#elif __x86_64__
CheckTypeSize(XSecurityAuthorizationAttributes,24, 8598, 11);
#elif 1
CheckTypeSize(XSecurityAuthorizationAttributes,0, 8598, 1);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/extensions/security.h\n\n",pcnt,cnt);
return cnt;
#endif

}
