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
#if defined __i386__
CheckTypeSize(XSecurityAuthorization,4, 8596, 2, 1.2, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(XSecurityAuthorization,8, 8596, 3, 1.3, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XSecurityAuthorization,4, 8596, 6, 1.2, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XSecurityAuthorization,4, 8596, 10, 1.3, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(XSecurityAuthorization,8, 8596, 9, 2.0, NULL, 9, NULL)
#elif defined __s390x__
CheckTypeSize(XSecurityAuthorization,8, 8596, 12, 1.3, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(XSecurityAuthorization,8, 8596, 11, 2.0, NULL, 9, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of XSecurityAuthorization (8596)\n");
%d,%d,%d,'""2.0""',NULL,9,NULL);\n",architecture,8596,0);
#endif

#if defined __i386__
CheckTypeSize(XSecurityAuthorizationAttributes,16, 8598, 2, 1.2, NULL, 8597, NULL)
#elif defined __ia64__
CheckTypeSize(XSecurityAuthorizationAttributes,24, 8598, 3, 1.3, NULL, 8597, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XSecurityAuthorizationAttributes,16, 8598, 6, 1.2, NULL, 8597, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XSecurityAuthorizationAttributes,16, 8598, 10, 1.3, NULL, 8597, NULL)
#elif defined __powerpc64__
CheckTypeSize(XSecurityAuthorizationAttributes,24, 8598, 9, 2.0, NULL, 8597, NULL)
#elif defined __s390x__
CheckTypeSize(XSecurityAuthorizationAttributes,24, 8598, 12, 1.3, NULL, 8597, NULL)
#elif defined __x86_64__
CheckTypeSize(XSecurityAuthorizationAttributes,24, 8598, 11, 2.0, NULL, 8597, NULL)
#else
Msg("Find size of XSecurityAuthorizationAttributes (8598)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8597, NULL);\n",architecture,8598,0);
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
