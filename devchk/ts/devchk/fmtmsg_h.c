/*
 * Test of fmtmsg.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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
	CompareConstant(MM_HARD,1,4876,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MM_HARD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_SOFT
	CompareConstant(MM_SOFT,2,4877,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MM_SOFT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_FIRM
	CompareConstant(MM_FIRM,4,4878,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MM_FIRM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_APPL
	CompareConstant(MM_APPL,8,4879,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MM_APPL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_UTIL
	CompareConstant(MM_UTIL,16,4880,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MM_UTIL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_OPSYS
	CompareConstant(MM_OPSYS,32,4881,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MM_OPSYS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_RECOVER
	CompareConstant(MM_RECOVER,64,4882,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MM_RECOVER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_NRECOV
	CompareConstant(MM_NRECOV,128,4883,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MM_NRECOV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_PRINT
	CompareConstant(MM_PRINT,256,4884,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: MM_PRINT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_CONSOLE
	CompareConstant(MM_CONSOLE,512,4885,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: MM_CONSOLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_NOSEV
	CompareConstant(MM_NOSEV,0,4886,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MM_NOSEV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_HALT
	CompareConstant(MM_HALT,1,4887,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MM_HALT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_ERROR
	CompareConstant(MM_ERROR,2,4888,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MM_ERROR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_WARNING
	CompareConstant(MM_WARNING,3,4889,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: MM_WARNING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_INFO
	CompareConstant(MM_INFO,4,4890,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: MM_INFO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_NULLLBL
	CompareConstant(MM_NULLLBL,((char *) 0),4891,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MM_NULLLBL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_NULLSEV
	CompareConstant(MM_NULLSEV,0,4892,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: MM_NULLSEV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_NULLMC
	CompareConstant(MM_NULLMC,((long int) 0),4893,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: MM_NULLMC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_NULLTXT
	CompareConstant(MM_NULLTXT,((char *) 0),4894,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: MM_NULLTXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_NULLACT
	CompareConstant(MM_NULLACT,((char *) 0),4895,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: MM_NULLACT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_NULLTAG
	CompareConstant(MM_NULLTAG,((char *) 0),4896,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: MM_NULLTAG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_NOTOK
	CompareConstant(MM_NOTOK,-1,4897,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: MM_NOTOK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_OK
	CompareConstant(MM_OK,0,4898,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: MM_OK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_NOMSG
	CompareConstant(MM_NOMSG,1,4899,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: MM_NOMSG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MM_NOCON
	CompareConstant(MM_NOCON,4,4900,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: MM_NOCON\n");
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
