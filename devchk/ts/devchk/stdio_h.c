/*
 * Test of stdio.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
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

#ifdef _LSB_DEFAULT_ARCH
#ifdef P_tmpdir
	CompareStringConstant(P_tmpdir,"/tmp")
#else
Msg( "Error: Constant not found: P_tmpdir\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _IONBF
	CompareConstant(_IONBF,2,1633,architecture)
#else
Msg( "Error: Constant not found: _IONBF\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef BUFSIZ
	CompareConstant(BUFSIZ,8192,1634,architecture)
#else
Msg( "Error: Constant not found: BUFSIZ\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EOF
	CompareConstant(EOF,(-1),3183,architecture)
#else
Msg( "Error: Constant not found: EOF\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef FOPEN_MAX
	CompareConstant(FOPEN_MAX,16,3189,architecture)
#else
Msg( "Error: Constant not found: FOPEN_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _IOLBF
	CompareConstant(_IOLBF,1,1632,architecture)
#else
Msg( "Error: Constant not found: _IOLBF\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef L_tmpnam
	CompareConstant(L_tmpnam,20,3187,architecture)
#else
Msg( "Error: Constant not found: L_tmpnam\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef L_cuserid
	CompareConstant(L_cuserid,9,3191,architecture)
#else
Msg( "Error: Constant not found: L_cuserid\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _IOFBF
	CompareConstant(_IOFBF,0,1631,architecture)
#else
Msg( "Error: Constant not found: _IOFBF\n");
cnt++;
#endif

#endif

#ifdef __s390__
#ifdef FILENAME_MAX
	CompareConstant(FILENAME_MAX,4095,3188,architecture)
#else
Msg( "Error: Constant not found: FILENAME_MAX\n");
cnt++;
#endif

#elif _LSB_DEFAULT_ARCH
#ifdef FILENAME_MAX
	CompareConstant(FILENAME_MAX,4096,3188,architecture)
#else
Msg( "Error: Constant not found: FILENAME_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef L_ctermid
	CompareConstant(L_ctermid,9,3190,architecture)
#else
Msg( "Error: Constant not found: L_ctermid\n");
cnt++;
#endif

#endif

#ifdef __i386__
CheckTypeSize(fpos_t,12, 9108, 2)
#elif __ia64__
CheckTypeSize(fpos_t,16, 9108, 3)
#elif __powerpc__
CheckTypeSize(fpos_t,12, 9108, 6)
#elif __s390__
CheckTypeSize(fpos_t,12, 9108, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9108,0);
Msg("Find size of fpos_t (9108)\n");
#endif

#ifdef __i386__
CheckTypeSize(fpos64_t,16, 9109, 2)
#elif __ia64__
CheckTypeSize(fpos64_t,16, 9109, 3)
#elif __powerpc__
CheckTypeSize(fpos64_t,16, 9109, 6)
#elif __s390__
CheckTypeSize(fpos64_t,16, 9109, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9109,0);
Msg("Find size of fpos64_t (9109)\n");
#endif

#ifdef __i386__
#endif

#ifdef __no_sym__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10275,0);
Msg("Find size of anon-fpos64_t (10275)\n");
#endif

#ifdef __i386__
CheckTypeSize(FILE,148, 8782, 2)
#elif __ia64__
CheckTypeSize(FILE,216, 8782, 3)
#elif __powerpc__
CheckTypeSize(FILE,152, 8782, 6)
#elif __s390__
CheckTypeSize(FILE,152, 8782, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8782,0);
Msg("Find size of FILE (8782)\n");
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
