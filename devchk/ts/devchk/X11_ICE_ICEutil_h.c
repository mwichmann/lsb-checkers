/*
 * Test of X11/ICE/ICEutil.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#include "X11/ICE/ICEutil.h"



#ifdef TET_TEST
void X11_ICE_ICEutil_h()
{
#else
int X11_ICE_ICEutil_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in X11/ICE/ICEutil.h\n");
#endif

#ifdef __i386__
CheckTypeSize(IceAuthFileEntry,28, 8228, 2)
#elif __ia64__
CheckTypeSize(IceAuthFileEntry,56, 8228, 3)
#elif __powerpc__
CheckTypeSize(IceAuthFileEntry,28, 8228, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8228,0);
Msg("Find size of IceAuthDataEntry (8228)\n");
#endif

#ifdef __i386__
CheckTypeSize(IceAuthDataEntry,20, 8230, 2)
#elif __ia64__
CheckTypeSize(IceAuthDataEntry,40, 8230, 3)
#elif __powerpc__
CheckTypeSize(IceAuthDataEntry,20, 8230, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8230,0);
Msg("Find size of IceAuthDataEntry (8230)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in X11/ICE/ICEutil.h\n",cnt);
return cnt;
#endif

}
