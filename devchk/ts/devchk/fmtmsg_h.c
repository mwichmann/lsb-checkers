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

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in fmtmsg.h\n");
#endif

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

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in fmtmsg.h\n",cnt);
return cnt;
#endif

}
