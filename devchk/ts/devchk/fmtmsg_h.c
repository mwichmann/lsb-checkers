/*
 * Test of fmtmsg.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "fmtmsg.h"



#ifdef TET_TEST
void fmtmsg_h()
{
#else
int fmtmsg_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in fmtmsg.h\n");
#endif

printf("Checking data structures in fmtmsg.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef MM_HARD
	CompareConstant(MM_HARD,1,4876,architecture)
#else
Msg( "Error: Constant not found: MM_HARD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_SOFT
	CompareConstant(MM_SOFT,2,4877,architecture)
#else
Msg( "Error: Constant not found: MM_SOFT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_FIRM
	CompareConstant(MM_FIRM,4,4878,architecture)
#else
Msg( "Error: Constant not found: MM_FIRM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_APPL
	CompareConstant(MM_APPL,8,4879,architecture)
#else
Msg( "Error: Constant not found: MM_APPL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_UTIL
	CompareConstant(MM_UTIL,16,4880,architecture)
#else
Msg( "Error: Constant not found: MM_UTIL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_OPSYS
	CompareConstant(MM_OPSYS,32,4881,architecture)
#else
Msg( "Error: Constant not found: MM_OPSYS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_RECOVER
	CompareConstant(MM_RECOVER,64,4882,architecture)
#else
Msg( "Error: Constant not found: MM_RECOVER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_NRECOV
	CompareConstant(MM_NRECOV,128,4883,architecture)
#else
Msg( "Error: Constant not found: MM_NRECOV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_NOSEV
	CompareConstant(MM_NOSEV,0,4886,architecture)
#else
Msg( "Error: Constant not found: MM_NOSEV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_HALT
	CompareConstant(MM_HALT,1,4887,architecture)
#else
Msg( "Error: Constant not found: MM_HALT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_ERROR
	CompareConstant(MM_ERROR,2,4888,architecture)
#else
Msg( "Error: Constant not found: MM_ERROR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_NULLLBL
	CompareConstant(MM_NULLLBL,((char *) 0),4891,architecture)
#else
Msg( "Error: Constant not found: MM_NULLLBL\n");
cnt++;
#endif

#endif

extern int fmtmsg_db(long int, const char *, int, const char *, const char *, const char *);
CheckInterfacedef(fmtmsg,fmtmsg_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in fmtmsg.h\n\n",pcnt,cnt);
return cnt;
#endif

}
