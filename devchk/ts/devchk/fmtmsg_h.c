/*
 * Test of fmtmsg.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef MM_HARD
	CompareConstant(MM_HARD,1)
#else
Msg( "Error: Constant not found: MM_HARD\n");
cnt++;
#endif

#ifdef MM_SOFT
	CompareConstant(MM_SOFT,2)
#else
Msg( "Error: Constant not found: MM_SOFT\n");
cnt++;
#endif

#ifdef MM_FIRM
	CompareConstant(MM_FIRM,4)
#else
Msg( "Error: Constant not found: MM_FIRM\n");
cnt++;
#endif

#ifdef MM_APPL
	CompareConstant(MM_APPL,8)
#else
Msg( "Error: Constant not found: MM_APPL\n");
cnt++;
#endif

#ifdef MM_UTIL
	CompareConstant(MM_UTIL,16)
#else
Msg( "Error: Constant not found: MM_UTIL\n");
cnt++;
#endif

#ifdef MM_OPSYS
	CompareConstant(MM_OPSYS,32)
#else
Msg( "Error: Constant not found: MM_OPSYS\n");
cnt++;
#endif

#ifdef MM_RECOVER
	CompareConstant(MM_RECOVER,64)
#else
Msg( "Error: Constant not found: MM_RECOVER\n");
cnt++;
#endif

#ifdef MM_NRECOV
	CompareConstant(MM_NRECOV,128)
#else
Msg( "Error: Constant not found: MM_NRECOV\n");
cnt++;
#endif

#ifdef MM_NOSEV
	CompareConstant(MM_NOSEV,0)
#else
Msg( "Error: Constant not found: MM_NOSEV\n");
cnt++;
#endif

#ifdef MM_HALT
	CompareConstant(MM_HALT,1)
#else
Msg( "Error: Constant not found: MM_HALT\n");
cnt++;
#endif

#ifdef MM_ERROR
	CompareConstant(MM_ERROR,2)
#else
Msg( "Error: Constant not found: MM_ERROR\n");
cnt++;
#endif

#ifdef MM_NULLLBL
	CompareConstant(MM_NULLLBL,((char *) 0))
#else
Msg( "Error: Constant not found: MM_NULLLBL\n");
cnt++;
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
