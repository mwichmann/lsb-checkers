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
CheckTypeSize(voidpf,4, 9868, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9868,0);
#endif

#ifdef __i386__
CheckTypeSize(uInt,4, 9870, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9870,0);
#endif

#ifdef __i386__
CheckTypeSize(uLong,4, 9878, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9878,0);
#endif

#ifdef __i386__
CheckTypeSize(uLongf,4, 9883, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9883,0);
#endif

#ifdef __i386__
CheckTypeSize(voidp,4, 9885, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9885,0);
#endif

#ifdef __i386__
CheckTypeSize(Byte,1, 10166, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10166,0);
#endif

#ifdef __i386__
CheckTypeSize(struct z_stream_s,56, 9875, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9875,0);
#endif

#ifdef __i386__
CheckTypeSize(z_stream,56, 9880, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9880,0);
#endif

#ifdef __i386__
CheckTypeSize(z_streamp,4, 9882, 2)
#elif __ia64__
CheckTypeSize(z_streamp,8, 9882, 3)
#elif __powerpc__
CheckTypeSize(z_streamp,4, 9882, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9882,0);
#endif

#ifdef __i386__
CheckTypeSize(gzFile,4, 9886, 2)
#elif __ia64__
CheckTypeSize(gzFile,8, 9886, 3)
#elif __powerpc__
CheckTypeSize(gzFile,4, 9886, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9886,0);
#endif

#ifdef __i386__
CheckTypeSize(alloc_func,4, 9871, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9871,0);
#endif

#ifdef __i386__
CheckTypeSize(free_func,4, 9873, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9873,0);
#endif

#ifdef __i386__
CheckTypeSize(struct internal_state,4, 9874, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9874,0);
#endif

#ifdef __i386__
CheckTypeSize(Bytef,1, 9876, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9876,0);
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
