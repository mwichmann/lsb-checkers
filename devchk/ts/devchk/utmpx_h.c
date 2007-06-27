/*
 * Test of utmpx.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <utmp.h>
#include "utmpx.h"



#ifdef TET_TEST
void utmpx_h()
{
#else
int utmpx_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in utmpx.h\n");
#endif

printf("Checking data structures in utmpx.h\n");
#if defined __powerpc__ && !defined __powerpc64__
#elif defined __ia64__
#elif defined __powerpc64__
#elif defined __s390__ && !defined __s390x__
#elif defined __x86_64__
#elif defined __i386__
#elif defined __s390x__
#endif

extern void endutxent_db(void);
CheckInterfacedef(endutxent,endutxent_db);
extern struct utmpx * getutxent_db(void);
CheckInterfacedef(getutxent,getutxent_db);
extern struct utmpx * getutxid_db(const struct utmpx *);
CheckInterfacedef(getutxid,getutxid_db);
extern struct utmpx * getutxline_db(const struct utmpx *);
CheckInterfacedef(getutxline,getutxline_db);
extern struct utmpx * pututxline_db(const struct utmpx *);
CheckInterfacedef(pututxline,pututxline_db);
extern void setutxent_db(void);
CheckInterfacedef(setutxent,setutxent_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in utmpx.h\n\n",pcnt,cnt);
return cnt;
#endif

}
