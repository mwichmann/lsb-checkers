/*
 * Test of utmp.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "utmp.h"



#ifdef TET_TEST
void utmp_h()
{
#else
int utmp_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in utmp.h\n");
#endif

printf("Checking data structures in utmp.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef UT_LINESIZE
	CompareConstant(UT_LINESIZE,32,4960,architecture)
#else
Msg( "Error: Constant not found: UT_LINESIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef UT_NAMESIZE
	CompareConstant(UT_NAMESIZE,32,4961,architecture)
#else
Msg( "Error: Constant not found: UT_NAMESIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef UT_HOSTSIZE
	CompareConstant(UT_HOSTSIZE,256,4962,architecture)
#else
Msg( "Error: Constant not found: UT_HOSTSIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EMPTY
	CompareConstant(EMPTY,0,4963,architecture)
#else
Msg( "Error: Constant not found: EMPTY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RUN_LVL
	CompareConstant(RUN_LVL,1,4964,architecture)
#else
Msg( "Error: Constant not found: RUN_LVL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BOOT_TIME
	CompareConstant(BOOT_TIME,2,4965,architecture)
#else
Msg( "Error: Constant not found: BOOT_TIME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NEW_TIME
	CompareConstant(NEW_TIME,3,4966,architecture)
#else
Msg( "Error: Constant not found: NEW_TIME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef OLD_TIME
	CompareConstant(OLD_TIME,4,4967,architecture)
#else
Msg( "Error: Constant not found: OLD_TIME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INIT_PROCESS
	CompareConstant(INIT_PROCESS,5,4968,architecture)
#else
Msg( "Error: Constant not found: INIT_PROCESS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOGIN_PROCESS
	CompareConstant(LOGIN_PROCESS,6,4969,architecture)
#else
Msg( "Error: Constant not found: LOGIN_PROCESS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef USER_PROCESS
	CompareConstant(USER_PROCESS,7,4970,architecture)
#else
Msg( "Error: Constant not found: USER_PROCESS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DEAD_PROCESS
	CompareConstant(DEAD_PROCESS,8,4971,architecture)
#else
Msg( "Error: Constant not found: DEAD_PROCESS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ACCOUNTING
	CompareConstant(ACCOUNTING,9,4972,architecture)
#else
Msg( "Error: Constant not found: ACCOUNTING\n");
cnt++;
#endif

#endif

#if __i386__
#elif __powerpc__ && !__powerpc64__
#elif __ia64__
#elif __s390__ && !__s390x__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10282,0);
Msg("Find size of exit_status (10282)\n");
#endif

#if __s390x__
#elif __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __x86_64__
#endif

#if __i386__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __ia64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif __x86_64__
#endif

extern void endutent_db(void);
CheckInterfacedef(endutent,endutent_db);
extern struct utmp * getutent_db(void);
CheckInterfacedef(getutent,getutent_db);
extern void setutent_db(void);
CheckInterfacedef(setutent,setutent_db);
extern int getutent_r_db(struct utmp *, struct utmp * *);
CheckInterfacedef(getutent_r,getutent_r_db);
extern int utmpname_db(const char *);
CheckInterfacedef(utmpname,utmpname_db);
extern int login_tty_db(int);
CheckInterfacedef(login_tty,login_tty_db);
extern void login_db(const struct utmp *);
CheckInterfacedef(login,login_db);
extern int logout_db(const char *);
CheckInterfacedef(logout,logout_db);
extern void logwtmp_db(const char *, const char *, const char *);
CheckInterfacedef(logwtmp,logwtmp_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in utmp.h\n\n",pcnt,cnt);
return cnt;
#endif

}
