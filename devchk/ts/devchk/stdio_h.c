/*
 * Test of stdio.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "stdio.h"



#ifdef TET_TEST
void stdio_h()
{
#else
int stdio_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in stdio.h\n");
#endif

#ifdef BUFSIZ
	CompareConstant(BUFSIZ,8192)
#else
Msg( "Warning: Constant not found: BUFSIZ\n");
#endif

#ifdef EOF
	CompareConstant(EOF,(-1))
#else
Msg( "Warning: Constant not found: EOF\n");
#endif

#ifdef _IOFBF
	CompareConstant(_IOFBF,0)
#else
Msg( "Warning: Constant not found: _IOFBF\n");
#endif

#ifdef _IOLBF
	CompareConstant(_IOLBF,1)
#else
Msg( "Warning: Constant not found: _IOLBF\n");
#endif

#ifdef _IONBF
	CompareConstant(_IONBF,2)
#else
Msg( "Warning: Constant not found: _IONBF\n");
#endif

#ifdef __i386__
CheckTypeSize(FILE,148, 8782, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8782,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in stdio.h\n",cnt);
return cnt;
#endif

}
