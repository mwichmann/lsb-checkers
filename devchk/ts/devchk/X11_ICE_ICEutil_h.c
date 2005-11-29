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

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/ICE/ICEutil.h\n");
#endif

printf("Checking data structures in X11/ICE/ICEutil.h\n");
#if __i386__
CheckTypeSize(IceAuthFileEntry,28, 8228, 2)
#elif __ia64__
CheckTypeSize(IceAuthFileEntry,56, 8228, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceAuthFileEntry,28, 8228, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(IceAuthFileEntry,28, 8228, 10)
#elif __powerpc64__
CheckTypeSize(IceAuthFileEntry,56, 8228, 9)
#elif __s390x__
CheckTypeSize(IceAuthFileEntry,56, 8228, 12)
#elif __x86_64__
CheckTypeSize(IceAuthFileEntry,56, 8228, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8228,0);
Msg("Find size of IceAuthFileEntry (8228)\n");
#endif

#if __i386__
CheckTypeSize(IceAuthDataEntry,20, 8230, 2)
#elif __ia64__
CheckTypeSize(IceAuthDataEntry,40, 8230, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceAuthDataEntry,20, 8230, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(IceAuthDataEntry,20, 8230, 10)
#elif __powerpc64__
CheckTypeSize(IceAuthDataEntry,40, 8230, 9)
#elif __s390x__
CheckTypeSize(IceAuthDataEntry,40, 8230, 12)
#elif __x86_64__
CheckTypeSize(IceAuthDataEntry,40, 8230, 11)
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
printf("%d tests passed out of %d tests in X11/ICE/ICEutil.h\n\n",pcnt,cnt);
return cnt;
#endif

}
