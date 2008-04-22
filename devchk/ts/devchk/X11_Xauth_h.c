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

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct xauth,32, 9290, 10, 1.2, NULL, 0, NULL)
CheckMemberSize(struct xauth,address,4,10,32601)
CheckOffset(struct xauth,address,4,10,32601)
CheckMemberSize(struct xauth,number_length,2,10,32602)
CheckOffset(struct xauth,number_length,8,10,32602)
CheckMemberSize(struct xauth,number,4,10,32603)
CheckOffset(struct xauth,number,12,10,32603)
CheckMemberSize(struct xauth,name_length,2,10,32604)
CheckOffset(struct xauth,name_length,16,10,32604)
CheckMemberSize(struct xauth,name,4,10,32605)
CheckOffset(struct xauth,name,20,10,32605)
CheckMemberSize(struct xauth,data_length,2,10,32606)
CheckOffset(struct xauth,data_length,24,10,32606)
CheckMemberSize(struct xauth,data,4,10,32607)
CheckOffset(struct xauth,data,28,10,32607)
#elif defined __i386__
CheckTypeSize(struct xauth,32, 9290, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct xauth,address,4,2,32601)
CheckOffset(struct xauth,address,4,2,32601)
CheckMemberSize(struct xauth,number_length,2,2,32602)
CheckOffset(struct xauth,number_length,8,2,32602)
CheckMemberSize(struct xauth,number,4,2,32603)
CheckOffset(struct xauth,number,12,2,32603)
CheckMemberSize(struct xauth,name_length,2,2,32604)
CheckOffset(struct xauth,name_length,16,2,32604)
CheckMemberSize(struct xauth,name,4,2,32605)
CheckOffset(struct xauth,name,20,2,32605)
CheckMemberSize(struct xauth,data_length,2,2,32606)
CheckOffset(struct xauth,data_length,24,2,32606)
CheckMemberSize(struct xauth,data,4,2,32607)
CheckOffset(struct xauth,data,28,2,32607)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct xauth,32, 9290, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct xauth,address,4,6,32601)
CheckOffset(struct xauth,address,4,6,32601)
CheckMemberSize(struct xauth,number_length,2,6,32602)
CheckOffset(struct xauth,number_length,8,6,32602)
CheckMemberSize(struct xauth,number,4,6,32603)
CheckOffset(struct xauth,number,12,6,32603)
CheckMemberSize(struct xauth,name_length,2,6,32604)
CheckOffset(struct xauth,name_length,16,6,32604)
CheckMemberSize(struct xauth,name,4,6,32605)
CheckOffset(struct xauth,name,20,6,32605)
CheckMemberSize(struct xauth,data_length,2,6,32606)
CheckOffset(struct xauth,data_length,24,6,32606)
CheckMemberSize(struct xauth,data,4,6,32607)
CheckOffset(struct xauth,data,28,6,32607)
#elif defined __x86_64__
CheckTypeSize(struct xauth,64, 9290, 11, 1.2, NULL, 0, NULL)
CheckMemberSize(struct xauth,address,8,11,32601)
CheckOffset(struct xauth,address,8,11,32601)
CheckMemberSize(struct xauth,number_length,2,11,32602)
CheckOffset(struct xauth,number_length,16,11,32602)
CheckMemberSize(struct xauth,number,8,11,32603)
CheckOffset(struct xauth,number,24,11,32603)
CheckMemberSize(struct xauth,name_length,2,11,32604)
CheckOffset(struct xauth,name_length,32,11,32604)
CheckMemberSize(struct xauth,name,8,11,32605)
CheckOffset(struct xauth,name,40,11,32605)
CheckMemberSize(struct xauth,data_length,2,11,32606)
CheckOffset(struct xauth,data_length,48,11,32606)
CheckMemberSize(struct xauth,data,8,11,32607)
CheckOffset(struct xauth,data,56,11,32607)
#elif defined __s390x__
CheckTypeSize(struct xauth,64, 9290, 12, 1.2, NULL, 0, NULL)
CheckMemberSize(struct xauth,address,8,12,32601)
CheckOffset(struct xauth,address,8,12,32601)
CheckMemberSize(struct xauth,number_length,2,12,32602)
CheckOffset(struct xauth,number_length,16,12,32602)
CheckMemberSize(struct xauth,number,8,12,32603)
CheckOffset(struct xauth,number,24,12,32603)
CheckMemberSize(struct xauth,name_length,2,12,32604)
CheckOffset(struct xauth,name_length,32,12,32604)
CheckMemberSize(struct xauth,name,8,12,32605)
CheckOffset(struct xauth,name,40,12,32605)
CheckMemberSize(struct xauth,data_length,2,12,32606)
CheckOffset(struct xauth,data_length,48,12,32606)
CheckMemberSize(struct xauth,data,8,12,32607)
CheckOffset(struct xauth,data,56,12,32607)
#elif defined __ia64__
CheckTypeSize(struct xauth,64, 9290, 3, 1.2, NULL, 0, NULL)
CheckMemberSize(struct xauth,address,8,3,32601)
CheckOffset(struct xauth,address,8,3,32601)
CheckMemberSize(struct xauth,number_length,2,3,32602)
CheckOffset(struct xauth,number_length,16,3,32602)
CheckMemberSize(struct xauth,number,8,3,32603)
CheckOffset(struct xauth,number,24,3,32603)
CheckMemberSize(struct xauth,name_length,2,3,32604)
CheckOffset(struct xauth,name_length,32,3,32604)
CheckMemberSize(struct xauth,name,8,3,32605)
CheckOffset(struct xauth,name,40,3,32605)
CheckMemberSize(struct xauth,data_length,2,3,32606)
CheckOffset(struct xauth,data_length,48,3,32606)
CheckMemberSize(struct xauth,data,8,3,32607)
CheckOffset(struct xauth,data,56,3,32607)
#elif defined __powerpc64__
CheckTypeSize(struct xauth,64, 9290, 9, 1.2, NULL, 0, NULL)
CheckMemberSize(struct xauth,address,8,9,32601)
CheckOffset(struct xauth,address,8,9,32601)
CheckMemberSize(struct xauth,number_length,2,9,32602)
CheckOffset(struct xauth,number_length,16,9,32602)
CheckMemberSize(struct xauth,number,8,9,32603)
CheckOffset(struct xauth,number,24,9,32603)
CheckMemberSize(struct xauth,name_length,2,9,32604)
CheckOffset(struct xauth,name_length,32,9,32604)
CheckMemberSize(struct xauth,name,8,9,32605)
CheckOffset(struct xauth,name,40,9,32605)
CheckMemberSize(struct xauth,data_length,2,9,32606)
CheckOffset(struct xauth,data_length,48,9,32606)
CheckMemberSize(struct xauth,data,8,9,32607)
CheckOffset(struct xauth,data,56,9,32607)
#else
Msg("Find size of xauth (9290)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0, NULL);\n",architecture,9290,0);
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
