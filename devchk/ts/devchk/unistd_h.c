/*
 * Test of unistd.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "unistd.h"



#ifdef TET_TEST
void unistd_h()
{
#else
int unistd_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in unistd.h\n");
#endif

#ifdef SEEK_SET
	CompareConstant(SEEK_SET,0)
#else
Msg( "Error: Constant not found: SEEK_SET\n");
cnt++;
#endif

#ifdef SEEK_CUR
	CompareConstant(SEEK_CUR,1)
#else
Msg( "Error: Constant not found: SEEK_CUR\n");
cnt++;
#endif

#ifdef SEEK_END
	CompareConstant(SEEK_END,2)
#else
Msg( "Error: Constant not found: SEEK_END\n");
cnt++;
#endif

#ifdef R_OK
	CompareConstant(R_OK,4)
#else
Msg( "Error: Constant not found: R_OK\n");
cnt++;
#endif

#ifdef W_OK
	CompareConstant(W_OK,2)
#else
Msg( "Error: Constant not found: W_OK\n");
cnt++;
#endif

#ifdef X_OK
	CompareConstant(X_OK,1)
#else
Msg( "Error: Constant not found: X_OK\n");
cnt++;
#endif

#ifdef F_OK
	CompareConstant(F_OK,0)
#else
Msg( "Error: Constant not found: F_OK\n");
cnt++;
#endif

#ifdef __i386__
CheckTypeSize(ssize_t,4, 9029, 2)
#elif __ia64__
CheckTypeSize(ssize_t,8, 9029, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9029,0);
#endif

#ifdef __i386__
CheckTypeSize(pid_t,4, 9094, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9094,0);
#endif

#ifdef __i386__
CheckTypeSize(off_t,4, 9111, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9111,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in unistd.h\n",cnt);
return cnt;
#endif

}
