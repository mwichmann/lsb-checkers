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
	CompareConstant(LC_CTYPE,__LC_CTYPE)
#else
Msg( "Warning: Constant not found: LC_CTYPE\n");
#endif

#ifdef LC_NUMERIC
	CompareConstant(LC_NUMERIC,__LC_NUMERIC)
#else
Msg( "Warning: Constant not found: LC_NUMERIC\n");
#endif

#ifdef LC_TIME
	CompareConstant(LC_TIME,__LC_TIME)
#else
Msg( "Warning: Constant not found: LC_TIME\n");
#endif

#ifdef LC_COLLATE
	CompareConstant(LC_COLLATE,__LC_COLLATE)
#else
Msg( "Warning: Constant not found: LC_COLLATE\n");
#endif

#ifdef LC_MONETARY
	CompareConstant(LC_MONETARY,__LC_MONETARY)
#else
Msg( "Warning: Constant not found: LC_MONETARY\n");
#endif

#ifdef LC_MESSAGES
	CompareConstant(LC_MESSAGES,__LC_MESSAGES)
#else
Msg( "Warning: Constant not found: LC_MESSAGES\n");
#endif

#ifdef LC_ALL
	CompareConstant(LC_ALL,__LC_ALL)
#else
Msg( "Warning: Constant not found: LC_ALL\n");
#endif

#ifdef LC_PAPER
	CompareConstant(LC_PAPER,__LC_PAPER)
#else
Msg( "Warning: Constant not found: LC_PAPER\n");
#endif

#ifdef LC_NAME
	CompareConstant(LC_NAME,__LC_NAME)
#else
Msg( "Warning: Constant not found: LC_NAME\n");
#endif

#ifdef LC_ADDRESS
	CompareConstant(LC_ADDRESS,__LC_ADDRESS)
#else
Msg( "Warning: Constant not found: LC_ADDRESS\n");
#endif

#ifdef LC_TELEPHONE
	CompareConstant(LC_TELEPHONE,__LC_TELEPHONE)
#else
Msg( "Warning: Constant not found: LC_TELEPHONE\n");
#endif

#ifdef LC_MEASUREMENT
	CompareConstant(LC_MEASUREMENT,__LC_MEASUREMENT)
#else
Msg( "Warning: Constant not found: LC_MEASUREMENT\n");
#endif

#ifdef LC_IDENTIFICATION
	CompareConstant(LC_IDENTIFICATION,__LC_IDENTIFICATION)
#else
Msg( "Warning: Constant not found: LC_IDENTIFICATION\n");
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
