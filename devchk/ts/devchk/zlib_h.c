/*
 * Test of zlib.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "zlib.h"



#ifdef TET_TEST
void zlib_h()
{
#else
int zlib_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in zlib.h\n");
#endif

#ifdef __i386__
CheckTypeSize(z_streamp,4, 9882, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9882,0);
#endif

#ifdef __i386__
CheckTypeSize(gzFile,4, 9886, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9886,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in zlib.h\n",cnt);
return cnt;
#endif

}
