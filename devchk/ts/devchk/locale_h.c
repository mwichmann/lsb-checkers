/*
 * Test of locale.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "locale.h"



#ifdef TET_TEST
void locale_h()
{
#else
int locale_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in locale.h\n");
#endif

#ifdef LC_CTYPE
	CompareConstant(LC_CTYPE,0)
#else
Msg( "Error: Constant not found: LC_CTYPE\n");
cnt++;
#endif

#ifdef LC_NUMERIC
	CompareConstant(LC_NUMERIC,1)
#else
Msg( "Error: Constant not found: LC_NUMERIC\n");
cnt++;
#endif

#ifdef LC_TIME
	CompareConstant(LC_TIME,2)
#else
Msg( "Error: Constant not found: LC_TIME\n");
cnt++;
#endif

#ifdef LC_COLLATE
	CompareConstant(LC_COLLATE,3)
#else
Msg( "Error: Constant not found: LC_COLLATE\n");
cnt++;
#endif

#ifdef LC_MONETARY
	CompareConstant(LC_MONETARY,4)
#else
Msg( "Error: Constant not found: LC_MONETARY\n");
cnt++;
#endif

#ifdef LC_MESSAGES
	CompareConstant(LC_MESSAGES,5)
#else
Msg( "Error: Constant not found: LC_MESSAGES\n");
cnt++;
#endif

#ifdef LC_ALL
	CompareConstant(LC_ALL,6)
#else
Msg( "Error: Constant not found: LC_ALL\n");
cnt++;
#endif

#ifdef LC_PAPER
	CompareConstant(LC_PAPER,7)
#else
Msg( "Error: Constant not found: LC_PAPER\n");
cnt++;
#endif

#ifdef LC_NAME
	CompareConstant(LC_NAME,8)
#else
Msg( "Error: Constant not found: LC_NAME\n");
cnt++;
#endif

#ifdef LC_ADDRESS
	CompareConstant(LC_ADDRESS,9)
#else
Msg( "Error: Constant not found: LC_ADDRESS\n");
cnt++;
#endif

#ifdef LC_TELEPHONE
	CompareConstant(LC_TELEPHONE,10)
#else
Msg( "Error: Constant not found: LC_TELEPHONE\n");
cnt++;
#endif

#ifdef LC_MEASUREMENT
	CompareConstant(LC_MEASUREMENT,11)
#else
Msg( "Error: Constant not found: LC_MEASUREMENT\n");
cnt++;
#endif

#ifdef LC_IDENTIFICATION
	CompareConstant(LC_IDENTIFICATION,12)
#else
Msg( "Error: Constant not found: LC_IDENTIFICATION\n");
cnt++;
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in locale.h\n",cnt);
return cnt;
#endif

}
