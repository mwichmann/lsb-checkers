/*
 * Test of X11/ICE/ICEutil.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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
#if _LSB_DEFAULT_ARCH
#ifdef IceAuthLockError
	CompareConstant(IceAuthLockError,1,13559,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IceAuthLockError\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IceAuthLockSuccess
	CompareConstant(IceAuthLockSuccess,0,13560,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IceAuthLockSuccess\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IceAuthLockTimeout
	CompareConstant(IceAuthLockTimeout,2,13561,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IceAuthLockTimeout\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(IceAuthDataEntry,40, 100171, 1, 1.2, NULL, 100170, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(IceAuthDataEntry *,4, 100172, 10, 1.2, NULL, 100171, NULL)
#elif defined __i386__
CheckTypeSize(IceAuthDataEntry *,4, 100172, 2, 1.2, NULL, 100171, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceAuthDataEntry *,4, 100172, 6, 1.2, NULL, 100171, NULL)
#elif defined __x86_64__
CheckTypeSize(IceAuthDataEntry *,8, 100172, 11, 1.2, NULL, 100171, NULL)
#elif defined __s390x__
CheckTypeSize(IceAuthDataEntry *,8, 100172, 12, 1.2, NULL, 100171, NULL)
#elif defined __ia64__
CheckTypeSize(IceAuthDataEntry *,8, 100172, 3, 1.2, NULL, 100171, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceAuthDataEntry *,8, 100172, 9, 1.2, NULL, 100171, NULL)
#else
Msg("Find size of IceAuthDataEntry * (100172)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100171,NULL);\n",architecture,100172,0);
#endif

#if 1
CheckTypeSize(IceAuthFileEntry,56, 100174, 1, 1.2, NULL, 100173, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(IceAuthFileEntry *,4, 100175, 10, 1.2, NULL, 100174, NULL)
#elif defined __i386__
CheckTypeSize(IceAuthFileEntry *,4, 100175, 2, 1.2, NULL, 100174, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceAuthFileEntry *,4, 100175, 6, 1.2, NULL, 100174, NULL)
#elif defined __x86_64__
CheckTypeSize(IceAuthFileEntry *,8, 100175, 11, 1.2, NULL, 100174, NULL)
#elif defined __s390x__
CheckTypeSize(IceAuthFileEntry *,8, 100175, 12, 1.2, NULL, 100174, NULL)
#elif defined __ia64__
CheckTypeSize(IceAuthFileEntry *,8, 100175, 3, 1.2, NULL, 100174, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceAuthFileEntry *,8, 100175, 9, 1.2, NULL, 100174, NULL)
#else
Msg("Find size of IceAuthFileEntry * (100175)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100174, NULL);\n",architecture,100175,0);
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
