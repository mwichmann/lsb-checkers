/*
 * Test of X11/Xauth.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/Xauth.h"



#ifdef TET_TEST
void X11_Xauth_h()
{
#else
int X11_Xauth_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/Xauth.h\n");
#endif

printf("Checking data structures in X11/Xauth.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef FamilyLocal
	CompareConstant(FamilyLocal,(256),2411,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: FamilyLocal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FamilyWild
	CompareConstant(FamilyWild,(65535),2412,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: FamilyWild\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FamilyNetname
	CompareConstant(FamilyNetname,(254),2413,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: FamilyNetname\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FamilyKrb5Principal
	CompareConstant(FamilyKrb5Principal,(253),2414,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: FamilyKrb5Principal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FamilyLocalHost
	CompareConstant(FamilyLocalHost,(252),2415,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: FamilyLocalHost\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOCK_SUCCESS
	CompareConstant(LOCK_SUCCESS,0,2416,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOCK_SUCCESS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOCK_ERROR
	CompareConstant(LOCK_ERROR,1,2417,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOCK_ERROR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOCK_TIMEOUT
	CompareConstant(LOCK_TIMEOUT,2,2418,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOCK_TIMEOUT\n");
cnt++;
#endif

#endif

#if defined __i386__
CheckTypeSize(Xauth,32, 8961, 2, 1.2, NULL, 9290, NULL)
#elif defined __ia64__
CheckTypeSize(Xauth,64, 8961, 3, 1.2, NULL, 9290, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Xauth,32, 8961, 6, 1.2, NULL, 9290, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Xauth,32, 8961, 10, 1.2, NULL, 9290, NULL)
#elif defined __powerpc64__
CheckTypeSize(Xauth,64, 8961, 9, 1.2, NULL, 9290, NULL)
#elif defined __s390x__
CheckTypeSize(Xauth,64, 8961, 12, 1.2, NULL, 9290, NULL)
#elif defined __x86_64__
CheckTypeSize(Xauth,64, 8961, 11, 1.2, NULL, 9290, NULL)
#else
Msg("Find size of Xauth (8961)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9290,NULL);\n",architecture,8961,0);
#endif

#if 1
CheckTypeSize(struct xauth,0, 9290, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(struct xauth,address_length,2,1,32600)
CheckOffset(struct xauth,address_length,2,1,32600)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/Xauth.h\n\n",pcnt,cnt);
return cnt;
#endif

}
