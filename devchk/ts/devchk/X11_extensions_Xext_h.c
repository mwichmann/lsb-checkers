/*
 * Test of X11/extensions/Xext.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/Xlib.h"

#include "X11/extensions/Xext.h"



#ifdef TET_TEST
void X11_extensions_Xext_h()
{
#else
int X11_extensions_Xext_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/Xext.h\n");
#endif

printf("Checking data structures in X11/extensions/Xext.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef X_EXTENSION_UNKNOWN
	CompareStringConstant(X_EXTENSION_UNKNOWN,"unknown",15642,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: X_EXTENSION_UNKNOWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_EXTENSION_MISSING
	CompareStringConstant(X_EXTENSION_MISSING,"missing",15643,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: X_EXTENSION_MISSING\n");
cnt++;
#endif

#endif

extern int XMissingExtension_db(Display *, const char *);
CheckInterfacedef(XMissingExtension,XMissingExtension_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/extensions/Xext.h\n\n",pcnt,cnt);
return cnt;
#endif

}
