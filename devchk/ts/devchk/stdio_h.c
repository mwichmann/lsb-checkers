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
Msg( "Error: Constant not found: BUFSIZ\n");
cnt++;
#endif

#ifdef P_tmpdir
	CompareStringConstant(P_tmpdir,"/tmp")
#else
Msg( "Error: Constant not found: P_tmpdir\n");
cnt++;
#endif

#ifdef EOF
	CompareConstant(EOF,(-1))
#else
Msg( "Error: Constant not found: EOF\n");
cnt++;
#endif

#ifdef L_tmpnam
	CompareConstant(L_tmpnam,20)
#else
Msg( "Error: Constant not found: L_tmpnam\n");
cnt++;
#endif

#ifdef FILENAME_MAX
	CompareConstant(FILENAME_MAX,4096)
#else
Msg( "Error: Constant not found: FILENAME_MAX\n");
cnt++;
#endif

#ifdef FOPEN_MAX
	CompareConstant(FOPEN_MAX,16)
#else
Msg( "Error: Constant not found: FOPEN_MAX\n");
cnt++;
#endif

#ifdef L_ctermid
	CompareConstant(L_ctermid,9)
#else
Msg( "Error: Constant not found: L_ctermid\n");
cnt++;
#endif

#ifdef L_cuserid
	CompareConstant(L_cuserid,9)
#else
Msg( "Error: Constant not found: L_cuserid\n");
cnt++;
#endif

#ifdef _IOFBF
	CompareConstant(_IOFBF,0)
#else
Msg( "Error: Constant not found: _IOFBF\n");
cnt++;
#endif

#ifdef _IOLBF
	CompareConstant(_IOLBF,1)
#else
Msg( "Error: Constant not found: _IOLBF\n");
cnt++;
#endif

#ifdef _IONBF
	CompareConstant(_IONBF,2)
#else
Msg( "Error: Constant not found: _IONBF\n");
cnt++;
#endif

#ifdef __i386__
CheckTypeSize(FILE,148, 8782, 2)
#elif __ia64__
CheckTypeSize(FILE,216, 8782, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8782,0);
#endif

#ifdef __i386__
CheckTypeSize(fpos_t,12, 9108, 2)
#elif __ia64__
CheckTypeSize(fpos_t,16, 9108, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9108,0);
#endif

#ifdef __i386__
CheckTypeSize(fpos64_t,16, 9109, 2)
#elif __ia64__
CheckTypeSize(fpos64_t,16, 9109, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9109,0);
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
